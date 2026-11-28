#!/usr/bin/env python3
"""ADB category core: pinned original CSV + R84 artifact; no runtime authorization."""
import argparse,csv,gzip,hashlib,json,sqlite3,zlib,zipfile,collections
from pathlib import Path
HERE=Path(__file__).resolve().parent
SHA='98874de045b29a4f937ee2c89b2264f47605d6bb5adac1496098ee0e02c38f1e'
ROM_SHA='9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609'
TABLES={'ui':('ItemUIFurnitureCategory',256,'hash_13AB5198','f5e4827dca031de361a06392816bffa17ee8da43'),'from':('ItemFrom',318,'hash_87BF00E8','1ec787f9f11ccc2a4106e2716534af37e5cc67ea'),'outfit':('ItemOutfitCategory',117,'hash_87BF00E8','63afb86eacb000ed9a81024ba41e2d07644296ef')}
def crc(s):return zlib.crc32(s.encode())
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def source_rows(root,name,expected,count):
 p=root/'UnPack/1/Bcsv'/ (name+'.csv'); b=p.read_bytes()
 assert hashlib.sha1(('blob %d\0'%len(b)).encode()+b).hexdigest()==expected,name
 with p.open(encoding='utf-8-sig',newline='') as f: a=list(csv.DictReader(f))
 assert len(a)==count,name
 return a
def run(root,src,out):
 out.mkdir(parents=True,exist_ok=True); assert sha(src)==SHA
 keys={}; ui_groups=[]
 for k,(name,n,field,blob) in TABLES.items():
  a=source_rows(root,name,blob,n)
  keys[k]=[(int(r['hash_54706054']),r[field]) for r in a]
  assert len({x[0] for x in keys[k]})==len({crc(x[1]) for x in keys[k]})==n
  if k=='ui':ui_groups=[int(r['hash_A4686E5D']) for r in a]
 assert len(set(ui_groups))==60
 maps={k:{crc(s):(i,s,j) for j,(i,s) in enumerate(a)} for k,a in keys.items()}
 with (HERE/'web_kind_mapping.csv').open(encoding='utf-8-sig') as m:web_map={x['native_kind_label']:x['web_category_candidate'] for x in csv.DictReader(m)}
 z=zipfile.ZipFile(src);assert z.testzip() is None
 def get(n):return json.loads(z.read(n))
 raw=[json.loads(l) for l in gzip.GzipFile(fileobj=z.open('item_raw107_full_v2.jsonl.gz'))];assert len(raw)==len({x['id'] for x in raw})==11178
 kinds=get('itemkind_db_v2.json');assert set(web_map)=={x['label'] for x in kinds};km={crc(x['label']):x for x in kinds};assert len(km)==189
 remakes=get('item_remake_db_v2.json');rm={x['item_id']:x for x in remakes};assert len(rm)==1306
 names={x['id']:x for x in get('item_names_CNzh_v2.json')};base={x['id']:x for x in get('items_core_v2.json')};assert set(names)==set(base)=={x['id'] for x in raw}
 source_counts=collections.Counter();cat_counts=collections.Counter();groups=collections.Counter();exact=ref_count=outfit_count=0;out_rows=[]
 p=out/'ACNHCategoryCore.sqlite3';p.unlink(missing_ok=True);db=sqlite3.connect(p);db.execute('PRAGMA foreign_keys=ON')
 db.executescript("""
 CREATE TABLE sources(source_id TEXT PRIMARY KEY,identity TEXT NOT NULL,description TEXT NOT NULL);
 CREATE TABLE ui_group(group_crc INTEGER PRIMARY KEY);
 CREATE TABLE ui_category(id INTEGER PRIMARY KEY,key TEXT UNIQUE,key_crc INTEGER UNIQUE,source_row INTEGER UNIQUE,group_crc INTEGER NOT NULL REFERENCES ui_group(group_crc));
 CREATE TABLE acquisition_source(id INTEGER PRIMARY KEY,key TEXT UNIQUE,key_crc INTEGER UNIQUE,source_row INTEGER UNIQUE,static_unlock_flag TEXT);
 CREATE TABLE outfit_category(id INTEGER PRIMARY KEY,key TEXT UNIQUE,key_crc INTEGER UNIQUE,source_row INTEGER UNIQUE);
 CREATE TABLE web_category(key TEXT PRIMARY KEY);
 CREATE TABLE item_kind(id INTEGER PRIMARY KEY,key TEXT UNIQUE,key_crc INTEGER UNIQUE,stack_raw_s16 INTEGER,flags_json TEXT,web_category_candidate TEXT NOT NULL REFERENCES web_category(key));
 CREATE TABLE remake_definition(id INTEGER PRIMARY KEY,raw_json TEXT);
 CREATE TABLE item(id INTEGER PRIMARY KEY,resource_name TEXT,model_name TEXT,name_cn TEXT,name_status TEXT,raw_kind TEXT,kind_id INTEGER NOT NULL REFERENCES item_kind(id),kind_join_status TEXT,ui_id INTEGER NOT NULL REFERENCES ui_category(id),source_id INTEGER NOT NULL REFERENCES acquisition_source(id),outfit_candidate_id INTEGER REFERENCES outfit_category(id),remake_id INTEGER REFERENCES remake_definition(id),group_crc_candidate INTEGER,stack_raw_s16 INTEGER,raw_can_set_item INTEGER,raw_can_put INTEGER,raw_can_ftr INTEGER,raw_cant_take_over INTEGER,can_inventory INTEGER,can_pickup INTEGER,can_drop INTEGER,can_cross_island INTEGER,max_stack_verified INTEGER,can_auto_deliver INTEGER,source_row INTEGER,source_row_sha256 TEXT,raw_fields_json TEXT);
 CREATE TABLE item_locale(item_id INTEGER REFERENCES item(id),locale TEXT,name TEXT,status TEXT,PRIMARY KEY(item_id,locale));
 CREATE TABLE ui_text(locale TEXT,label TEXT,text TEXT,PRIMARY KEY(locale,label));
 CREATE INDEX item_ui ON item(ui_id);CREATE INDEX item_source ON item(source_id);CREATE INDEX item_kind_idx ON item(kind_id);
 CREATE VIEW item_catalog AS SELECT i.id,i.name_cn,i.resource_name,i.raw_kind,k.key AS native_kind,k.web_category_candidate,u.key AS ui_category,u.group_crc AS ui_group_crc,a.key AS acquisition_source,a.static_unlock_flag,i.group_crc_candidate,i.remake_id,i.stack_raw_s16,i.raw_can_set_item,i.raw_can_put,i.raw_can_ftr,i.raw_cant_take_over,i.can_pickup,i.can_cross_island,i.can_auto_deliver FROM item i JOIN item_kind k ON k.id=i.kind_id JOIN ui_category u ON u.id=i.ui_id JOIN acquisition_source a ON a.id=i.source_id;
 """)
 db.executemany('INSERT INTO sources VALUES(?,?,?)',[('R84 artifact',SHA,'Actions 45199513614 artifact 14830765861'),('ItemParam.bcsv',ROM_SHA,'original SHA256 in artifact')]+[(k,v[3],'Git blob SHA verified') for k,v in TABLES.items()])
 flags={267:'UnlockSanrioCollabo',268:'UnlockSanrioCollabo2',269:'UnlockSanrioCollabo3',270:'UnlockSanrioCollabo4',271:'UnlockSanrioCollabo5',272:'UnlockSanrioCollabo6',273:'BCAT_EventFlag_008',274:'UnlockZeldaCollabo',275:'UnlockSplatoonCollabo'}
 db.executemany('INSERT INTO ui_group VALUES(?)',[(g,) for g in sorted(set(ui_groups))])
 for k,table in [('ui','ui_category'),('from','acquisition_source'),('outfit','outfit_category')]:
  vals=[(i,s,crc(s),j)+((flags.get(j),) if k=='from' else (ui_groups[j],) if k=='ui' else ()) for j,(i,s) in enumerate(keys[k])]
  db.executemany(f'INSERT INTO {table} VALUES('+','.join('?' for _ in vals[0])+')',vals)
 db.executemany('INSERT INTO web_category VALUES(?)',[(k,) for k in sorted(set(web_map.values()))])
 db.executemany('INSERT INTO item_kind VALUES(?,?,?,?,?,?)',[(x['kind_id'],x['label'],crc(x['label']),x['stack_s16'],json.dumps(x['native_flags'],sort_keys=True),web_map[x['label']]) for x in kinds])
 db.executemany('INSERT INTO remake_definition VALUES(?,?)',[(k,json.dumps(v,ensure_ascii=False)) for k,v in rm.items()])
 for x in raw:
  f=x['fields'];i=x['id'];assert x['original_source_sha256']==ROM_SHA
  for h in ('54706054','5270EB75','8221388C','DB1A2F07','CB5EB33F','D61205D0','7724BF93'):
   assert int.from_bytes(bytes.fromhex(x['raw_field_hex']['hash_'+h]),'little')==int(f['hash_'+h])
  assert i==int(f['hash_54706054'])
  k=km[int(f['hash_5270EB75'])];ui=maps['ui'][int(f['hash_8221388C'])];acq=maps['from'][int(f['hash_DB1A2F07'])];o=maps['outfit'].get(int(f['hash_7724BF93']));outfit_count+=bool(o and o[1]!='None')
  match=f['hash_FC275E86'].removeprefix('Kind_')==k['label'];exact+=match;status='exact_label_and_crc' if match else 'crc_domain_match_native_consumer_pending'
  rid=int(f['hash_CB5EB33F']);rid=None if rid==65535 else rid;assert rid is None or rid in rm;ref_count+=rid is not None
  group=int(f['hash_D61205D0']);groups[group]+=1;group=None if group==crc('None') else group
  s=k['stack_s16'];fl=k['native_flags'];cat_counts[ui[1]]+=1;source_counts[acq[1]]+=1
  vals=(i,f['hash_3FEBC642'],f['hash_48EF0398'],names[i]['name'],names[i]['status'],f['hash_FC275E86'],k['kind_id'],status,ui[0],acq[0],o[0] if o and o[1]!='None' else None,rid,group,s,fl['CanSetItem'],fl['CanPut'],fl['CanFtr'],fl['CantTakeOver'],None,None,None,None,None,None,x['original_row_index'],x['original_row_sha256'],json.dumps(f,ensure_ascii=False,separators=(',',':')))
  db.execute('INSERT INTO item VALUES('+','.join('?' for _ in vals)+')',vals)
  out_rows.append((i,names[i]['name'],f['hash_3FEBC642'],f['hash_FC275E86'],k['label'],status,ui[0],ui[1],ui_groups[ui[2]],acq[0],acq[1],flags.get(acq[2]),rid,group,s,fl['CanSetItem'],fl['CanPut'],fl['CanFtr'],fl['CantTakeOver'],web_map[k['label']]))
 for n in z.namelist():
  if n.startswith('item_names_') and n.endswith('_v2.json'):
   locale=n[len('item_names_'):-len('_v2.json')];a=get(n);assert len(a)==11178;db.executemany('INSERT INTO item_locale VALUES(?,?,?,?)',[(x['id'],locale,x['name'],x['status']) for x in a])
 for l in gzip.GzipFile(fileobj=z.open('all_original_14locale_msbt_v2.jsonl.gz')):
  if b'STR_CategoryName.msbt' in l:
   x=json.loads(l);db.execute('INSERT INTO ui_text VALUES(?,?,?)',(x['locale'],x['label'],x['text_plain']))
 db.commit();assert db.execute('PRAGMA integrity_check').fetchone()[0]=='ok';assert db.execute('PRAGMA foreign_key_check').fetchall()==[]
 assert db.execute('SELECT COUNT(*) FROM item_locale').fetchone()[0]==156492
 assert db.execute('SELECT COUNT(*) FROM ui_text').fetchone()[0]==3136
 assert db.execute('SELECT COUNT(*) FROM item WHERE can_inventory IS NOT NULL OR can_pickup IS NOT NULL OR can_drop IS NOT NULL OR can_cross_island IS NOT NULL OR max_stack_verified IS NOT NULL OR can_auto_deliver IS NOT NULL').fetchone()[0]==0
 headers='item_id,name_cn,resource_name,raw_kind,native_kind,kind_join_status,ui_id,ui_key,ui_group_crc,source_id,source_key,static_unlock_flag,remake_id,group_crc_candidate,stack_raw_s16,raw_can_set_item,raw_can_put,raw_can_ftr,raw_cant_take_over,web_category_candidate'.split(',')
 collab=[v for v in out_rows if 'Collabo' in v[10] or v[10]=='DeliveryPocketCamp'];assert len(collab)==199
 for fname,records in [('item_category_join.csv',out_rows),('collaboration_items.csv',collab)]:
  with (out/fname).open('w',encoding='utf-8-sig',newline='') as f:w=csv.writer(f);w.writerow(headers);w.writerows(records)
 stats={'items':len(raw),'web_category_candidates':len(set(web_map.values())),'kind_exact':exact,'kind_crc_only':len(raw)-exact,'ui_definitions':len(keys['ui']),'ui_group_count':len(set(ui_groups)),'ui_matched':len(raw),'ui_used_including_none':len(cat_counts),'source_definitions':len(keys['from']),'source_matched':len(raw),'source_used_including_none':len(source_counts),'remake_defs':len(rm),'remake_refs':ref_count,'group_non_none_records':sum(v for k,v in groups.items() if k!=crc('None')),'group_non_none_distinct':len(groups)-1,'outfit_candidate_non_none':outfit_count,'locale_rows':156492,'ui_text_rows':3136,'collaboration_counts':{k:v for k,v in source_counts.items() if 'Collabo' in k or k=='DeliveryPocketCamp'},'ui_counts':dict(cat_counts),'acquisition_counts':dict(source_counts),'runtime_verified':False,'integrity_check':'ok','foreign_key_violations':0}
 assert len(set(web_map.values()))==29 and ref_count==1785
 (out/'summary.json').write_text(json.dumps(stats,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');db.close()
 files={n:sha(out/n) for n in ['ACNHCategoryCore.sqlite3','item_category_join.csv','collaboration_items.csv','summary.json']}
 (out/'manifest.json').write_text(json.dumps({'schema':'adb-category-core-v1','source_artifact_sha256':SHA,'files_sha256':files,'runtime_verified':False},indent=2)+'\n',encoding='utf-8')
 print(json.dumps({k:v for k,v in stats.items() if k not in ('ui_counts','acquisition_counts')},ensure_ascii=False,indent=2))
if __name__=='__main__':
 p=argparse.ArgumentParser();p.add_argument('artifact',type=Path);p.add_argument('out',type=Path);p.add_argument('--root',type=Path,default=HERE.parent.parent);a=p.parse_args();run(a.root,a.artifact,a.out)
