#!/usr/bin/env python3
"""Read-only ACNH 3.0.3 JSON vs native export auditor (stdlib, Python 3.10+).

Never treats website-derived fields as ROM-authored. All JSON/CSV inputs read-only.
Optional direct original RecipeCraftParam / ItemRemake CSV check when --repo-root is set.
"""
import argparse, collections, csv, hashlib, json, re
from pathlib import Path


def sha256(path):
    h=hashlib.sha256()
    with open(path,'rb') as fp:
        for chunk in iter(lambda: fp.read(1024*1024),b''):h.update(chunk)
    return h.hexdigest()


def csv_rows(path):
    with open(path,'r',encoding='utf-8-sig',newline='') as fp:return list(csv.DictReader(fp))


def emit_csv(path, rows, names):
    with open(path,'w',encoding='utf-8-sig',newline='') as fp:
        w=csv.DictWriter(fp,fieldnames=names,extrasaction='ignore');w.writeheader();w.writerows(rows)


def stat_counter(c):return {str(k):v for k,v in sorted(c.items(),key=lambda kv:(-kv[1],str(kv[0])))}


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    for arg in ['items','villagers','native-items','native-villagers']:
        ap.add_argument('--'+arg,required=True,type=Path)
    ap.add_argument('--repo-root',type=Path,help='If set, join real UnPack/1/Bcsv/RecipeCraftParam.csv & ItemRemake.csv')
    ap.add_argument('--out',required=True,type=Path)
    args=ap.parse_args(); out=args.out;out.mkdir(parents=True,exist_ok=True)
    web=json.loads(args.items.read_text('utf-8-sig'))
    villagers=json.loads(args.villagers.read_text('utf-8-sig'))
    native_items=csv_rows(args.native_items);native_npcs=csv_rows(args.native_villagers)
    old_nonrecipe=[r for r in web if r['ItemKind']!='DIYRecipe']
    recipes=[r for r in web if r['ItemKind']=='DIYRecipe']
    old_id={int(r['id']):r for r in old_nonrecipe};native_id={int(r['item_id']):r for r in native_items}
    assert len(old_id)==len(old_nonrecipe),'duplicate nonrecipe ID'
    assert len(native_id)==len(native_items),'duplicate native item ID'
    shared=sorted(set(old_id)&set(native_id))
    missing=sorted(set(old_id)-set(native_id))
    extras=sorted(set(native_id)-set(old_id))
    emit_csv(out/'native_only_389.csv', [native_id[i] for i in extras],list(native_items[0]))
    emit_csv(out/'old_only_items.csv', [old_id[i] for i in missing],list(old_nonrecipe[0]))
    changes=[]
    comparisons={
      'label':('res_name',None),
      'name':('name_CNzh','name_status_CNzh'),
      'name_zhTW':('name_TWzh','name_status_TWzh'),
      'name_jaJP':('name_JPja','name_status_JPja'),
      'name_enEU':('name_EUen',None),
    }
    stats={}
    for old_col,(native_col,status_col) in comparisons.items():
        sub=[];verified=[];same_verified=0
        for iid in shared:
            old=old_id[iid];n=native_id[iid];e=n.get('name_status_CNzh','') if old_col=='label' else n.get(status_col,'') if status_col else 'source_export_name_without_strict_status'
            source=n.get(native_col,'');value=str(old.get(old_col,''))
            if source:
                sub.append(iid)
                if e=='unique_text_from_ROM_ID_suffix':verified.append(iid)
                if value==source and e=='unique_text_from_ROM_ID_suffix':same_verified+=1
            if value!=source:
                # This is a raw export comparison, not necessarily a ROM translation error.
                reason=('native_missing_name' if not source else
                        'native_group_name_candidate_vs_variant_full_name' if e.startswith('native_group_candidate') else
                        'old_presentation_suffix_possible' if re.search(r'\s*\([^()]+\)$',value) else
                        'value_mismatch_review_required')
                changes.append({'item_id':iid,'label':old['label'],'item_kind':old['ItemKind'],
                                'old_field':old_col,'old_value':value,'native_field':native_col,'native_value':source,
                                'native_name_evidence':e,'mismatch_reason_candidate':reason})
        stats[old_col]={'source_column':native_col,'source_nonempty':len(sub),
                        'source_equal':sum(old_id[i][old_col]==native_id[i][native_col] for i in sub),
                        'native_missing':len(shared)-len(sub),
                        'strict_ROM_ID_suffix_eligible':len(verified),
                        'strict_ROM_ID_suffix_equal':same_verified,
                        'strict_ROM_ID_suffix_mismatch':len(verified)-same_verified}
    if 'label' in stats:
        stats['label']['strict_ROM_ID_suffix_eligible']=None
        stats['label']['strict_ROM_ID_suffix_equal']=None
        stats['label']['strict_ROM_ID_suffix_mismatch']=None
    emit_csv(out/'item_name_comparison.csv',changes,
             ['item_id','label','item_kind','old_field','old_value','native_field','native_value','native_name_evidence','mismatch_reason_candidate'])
    kind_changes=[];stack_changes=[]
    for iid in shared:
        old=old_id[iid];nat=native_id[iid]
        if str(old['ItemKind'])!=str(nat['base_kind']):kind_changes.append({'item_id':iid,'label':old['label'],
          'web_itemkind':old['ItemKind'],'native_base_kind':nat['base_kind'],'native_original_kind':nat['original_kind'],
          'native_join_evidence':nat['base_kind_evidence']})
        if nat['stack_capacity_if_verified'] and int(nat['stack_capacity_if_verified'])!=int(old['max_stack']):
            stack_changes.append({'item_id':iid,'label':old['label'],'web_max_stack':old['max_stack'],
              'native_verified_stack':nat['stack_capacity_if_verified'],'native_stack_evidence':nat['stack_evidence']})
    emit_csv(out/'item_kind_differences.csv',kind_changes,
             ['item_id','label','web_itemkind','native_base_kind','native_original_kind','native_join_evidence'])
    emit_csv(out/'stack_verified_differences.csv',stack_changes,
             ['item_id','label','web_max_stack','native_verified_stack','native_stack_evidence'])
    native_npc={r['res_name']:r for r in native_npcs if r['npc_type']=='normal'}
    old_npc={r['ResName']:r for r in villagers}
    npc_changes=[]
    for res in sorted(set(native_npc)&set(old_npc)):
        for old_col,native_col in [('Label','npc_key'),('nameCN','name_CNzh'),('nameTW','name_TWzh'),
                                   ('nameJP','name_JPja'),('nameEn','name_EUen')]:
            if old_npc[res][old_col]!=native_npc[res][native_col]:
                npc_changes.append({'res_name':res,'old_field':old_col,'old_value':old_npc[res][old_col],
                                    'native_field':native_col,'native_value':native_npc[res][native_col]})
    regional_changes=[{'res_name':r['ResName'],'legacy_EUen':r['nameEn'],
                      'native_USen':native_npc[r['ResName']]['name_USen'],
                      'native_EUen':native_npc[r['ResName']]['name_EUen']}
                      for r in villagers if r['ResName'] in native_npc
                      and native_npc[r['ResName']]['name_USen']!=native_npc[r['ResName']]['name_EUen']]
    emit_csv(out/'villager_us_eu_regional_differences.csv',regional_changes,
             ['res_name','legacy_EUen','native_USen','native_EUen'])
    emit_csv(out/'villager_language_differences.csv',npc_changes,
             ['res_name','old_field','old_value','native_field','native_value'])
    variant_rows=[];bad_variations=[];duplicate_variant_id=[]
    for i,r in enumerate(web):
        try:
            var=json.loads(r['variations'])
            if not isinstance(var,list):raise ValueError('not an array')
            if len({v['variant_id'] for v in var})!=len(var):duplicate_variant_id.append(r['id'])
            variant_rows.extend({'item_id':r['id'],'item_label':r['label'],
                                 'variant_id':v.get('variant_id'),'variant_label':v.get('label')} for v in var)
        except (ValueError,TypeError,KeyError) as exc:bad_variations.append({'row':i,'error':str(exc)})
    emit_csv(out/'web_variations_17170.csv',variant_rows,['item_id','item_label','variant_id','variant_label'])
    recipe_report={'legacy_recipe_count':len(recipes),'legacy_recipe_unique_recipe_id':len(set(int(r['recipe_id']) for r in recipes)),
                   'legacy_recipe_shared_item_id_counts':stat_counter(collections.Counter(r['id'] for r in recipes)),
                   'empty_recipe_id_hex':sum(not r['id_hex'] for r in recipes), 'native_recipe_csv_checked':False}
    if args.repo_root:
        root=args.repo_root/'UnPack/1/Bcsv'
        rp=root/'RecipeCraftParam.csv'; rm=root/'ItemRemake.csv'
        if rp.is_file():
            data=csv_rows(rp)
            rid={int(r['hash_54706054']):r for r in data}
            legacy={int(r['recipe_id']):r for r in recipes}
            matched=set(rid)&set(legacy)
            product_h='hash_1BBFA75E'
            product_by_id={i: [int(rid[i][product_h]),legacy[i]['label'],native_id.get(int(rid[i][product_h]),{}).get('res_name','')] for i in sorted(matched)}
            product_matches=sum(values[1]==values[2] for values in product_by_id.values())
            recipe_report.update({'native_recipe_csv_checked':True,'native_recipe_rows':len(data),
               'native_recipe_unique_id':len(rid),'recipe_id_intersection':len(matched),
               'legacy_recipe_ids_not_in_native':sorted(set(legacy)-set(rid)),
               'native_recipe_ids_not_in_legacy':sorted(set(rid)-set(legacy)),
               'native_result_item_id_field_candidate':product_h,
               'product_label_matches_on_shared_recipe_ids':product_matches,
               'product_label_mismatches_on_shared_recipe_ids':len(matched)-product_matches,
               'caution':'Product ID column is a candidate, not full recipe output-semantic verification'})
            emit_csv(out/'recipe_product_id_candidate_comparison.csv',
                [{'recipe_id':i,'native_result_item_id_candidate':v[0],'legacy_recipe_label':v[1],
                 'native_result_res_name':v[2],'label_equal':v[1]==v[2]} for i,v in product_by_id.items()],
                ['recipe_id','native_result_item_id_candidate','legacy_recipe_label','native_result_res_name','label_equal'])
        if rm.is_file():
            data=csv_rows(rm); counts=collections.Counter(int(r['hash_54706054']) for r in data if r['hash_54706054'].isdigit())
            recipe_report['native_remake_rows']=len(data)
            recipe_report['native_remake_unique_item_ids']=len(counts)
            recipe_report['legacy_item_ids_with_native_remake_rows']=sum(bool(counts.get(i)) for i in old_id)
            recipe_report['caution_variations']='Variation labels cannot be proven solely by ItemRemake ID join or PNG filenames.'
    report={
     'method':'old user JSON vs prior R77/R80/R82/R84 derived 3.0.3 native item/villager CSV; optionally native RecipeCraftParam/ItemRemake CSV',
     'disclaimer':'Previous derived native CSV is NOT an independent raw ROM byte read in this run.',
     'inputs_sha256':{p.name:sha256(p) for p in (args.items,args.villagers,args.native_items,args.native_villagers)},
     'rows':{'old_villagers':len(villagers),'native_normal_villagers':len(native_npc),
             'villager_common_res_names':len(set(old_npc)&set(native_npc)),
             'old_nonrecipe_items':len(old_nonrecipe),'native_items':len(native_items),
             'nonrecipe_item_id_intersection':len(shared),'nonrecipe_item_ids_absent_from_native':len(missing),
             'native_item_ids_absent_from_old':len(extras),
             'exact_matching_labels_shared':sum(old_id[i]['label']==native_id[i]['res_name'] for i in shared),
             'old_web_all_rows':len(web),'old_recipes':len(recipes),
             'variations_total':len(variant_rows),
             'items_with_variations':sum(bool(json.loads(r['variations'])) for r in web),
             'variations_unique_labels':len(set(r['variant_label'] for r in variant_rows)),
             'duplicate_variant_id_items':len(duplicate_variant_id),
             'variation_decode_errors':len(bad_variations),
             'villager_field_mismatches_using_EUen':len(npc_changes),
             'villager_USen_vs_EUen_regional_differences':len(regional_changes),
             'item_kind_differences':len(kind_changes),
             'verified_stack_differences':len(stack_changes)},
     'locale_comparison':stats,'recipe':recipe_report,
     'native_only_kinds':stat_counter(collections.Counter(native_id[i]['original_kind'] for i in extras)),
     'villager_language_differences':npc_changes,
     'old_only_examples':[(i,old_id[i]['label']) for i in missing[:10]],
     'native_only_examples':[(i,native_id[i]['res_name']) for i in extras[:20]],
     'errors':{'bad_variations':bad_variations,'duplicate_variant_id_items':duplicate_variant_id},
     'scope_limitations':['native CSV contains exact ROM names AND candidate clothing group names; distinguish evidence',
        'recipe results and 17170 variants still require native original tables, model/texture and runtime checking',
        'category,type,price,modified presentation labels not trivially ROM-resident JSON fields']}
    (out/'audit_report.json').write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
    print(json.dumps({'rows':report['rows'],'verified_locale':{k:{'eligible':v['strict_ROM_ID_suffix_eligible'],'match':v['strict_ROM_ID_suffix_equal']} for k,v in stats.items()},
       'report':str(out/'audit_report.json')},ensure_ascii=False,indent=2))

if __name__=='__main__':main()
