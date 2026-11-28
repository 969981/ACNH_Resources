#!/usr/bin/env python3
"""Extend validated ResourceCore with native NPC, recipe and quantity data."""
import argparse,collections,csv,gzip,hashlib,json,shutil,sqlite3,zlib,zipfile
from pathlib import Path
BASE_SHA='532367ad570fbfe94fa38b92d5eab463c90fad0baffde40dfc21411dd46d8b92'
ART_SHA='98874de045b29a4f937ee2c89b2264f47605d6bb5adac1496098ee0e02c38f1e'
SRC={'NmlNpcParam':('171aff7fb1011275b4cc90f10ec4777c90f44185',417,288),'RecipeCraftParam':('88107c688891515b070ae753915503a869bd7913',924,140)}
ROM='e10617820db06889e1638499478da0de_NCA/1/Bcsv'
MATS='1BBFA75E 5C1FDD8E 617FF43E D35F282E EE3F019E A99F7B4E'.split()
QTY='13A65775 54062DA5 69660415 DB46D805 E626F1B5 A1868B65'.split()
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def load(root,name,check):
 p=root/'UnPack/1/Bcsv'/(name+'.csv'); b=p.read_bytes();blob,n,size=SRC[name]
 assert hashlib.sha1(('blob %d\0'%len(b)).encode()+b).hexdigest()==blob,name
 with p.open(encoding='utf-8-sig',newline='') as f: rows=list(csv.DictReader(f))
 m=json.loads((root/'UnPack/1/Bcsv'/(name+'.json')).read_text())
 raw=(root/ROM/(name+'.bcsv')).read_bytes()
 assert len(rows)==n==m['row_count'] and size==m['row_size']
 columns={c['crc32']:c for c in m['columns']}
 for i,r in enumerate(rows):
  off=int(r['_row_offset_raw']);assert int(r['_row_index'])==i and off==int(rows[0]['_row_offset_raw'])+i*size and off+size<=len(raw)
  for h,typ in check.items():
   c=columns[h];start=off+c['offset'];v=r['hash_'+h]
   if typ=='str':assert raw[start:start+c['width_hint']].split(b'\0',1)[0].decode('utf-8')==v
   else:assert int.from_bytes(raw[start:start+typ],'little')==int(v)
 return rows,hashlib.sha256(raw).hexdigest()
def export(db,out,name,query):
 cur=db.execute(query)
 with (out/name).open('w',encoding='utf-8-sig',newline='') as f:
  w=csv.writer(f);w.writerow([c[0] for c in cur.description]);w.writerows(cur)
def run(root,artifact,out):
 out.mkdir(parents=True,exist_ok=True);p=out/'ACNHResourceCore.sqlite3'
 with gzip.open(root/'ResourceCore/Database/output/ACNHResourceCore.sqlite3.gz','rb') as src,p.open('wb') as dst:shutil.copyfileobj(src,dst)
 assert sha(p)==BASE_SHA and sha(artifact)==ART_SHA
 db=sqlite3.connect(p);db.execute('PRAGMA foreign_keys=ON')
 assert db.execute('PRAGMA integrity_check').fetchone()==('ok',) and not db.execute('PRAGMA foreign_key_check').fetchall()
 ids={i for i, in db.execute('SELECT id FROM item')}
 assert len(ids)==11178
 db.executescript("""
 CREATE TABLE villager(id INTEGER PRIMARY KEY,res_name TEXT UNIQUE NOT NULL,source_row INTEGER UNIQUE,collaboration_group TEXT NOT NULL,raw_collaboration INTEGER,init_live_raw INTEGER,hobby_crc INTEGER,hobby_candidate TEXT,birthday TEXT,photo_item_id INTEGER REFERENCES item(id),poster_item_id INTEGER REFERENCES item(id),raw_json TEXT,can_adopt INTEGER,can_invite INTEGER,can_amiibo_invite INTEGER);
 CREATE TABLE villager_locale(villager_id INTEGER REFERENCES villager(id),locale TEXT,name TEXT NOT NULL,evidence_json TEXT,PRIMARY KEY(villager_id,locale));
 CREATE TABLE villager_image_source(villager_id INTEGER REFERENCES villager(id),ordinal INTEGER,raw_json TEXT NOT NULL,PRIMARY KEY(villager_id,ordinal));
 CREATE TABLE recipe(id INTEGER PRIMARY KEY,source_row INTEGER UNIQUE,output_item_id INTEGER REFERENCES item(id),raw_json TEXT,semantic_status TEXT);
 CREATE TABLE recipe_material(recipe_id INTEGER REFERENCES recipe(id),slot INTEGER CHECK(slot BETWEEN 1 AND 6),raw_item_id INTEGER NOT NULL,item_id INTEGER REFERENCES item(id),quantity_candidate INTEGER NOT NULL CHECK(quantity_candidate>0),id_field TEXT,quantity_field TEXT,semantic_status TEXT,PRIMARY KEY(recipe_id,slot));
 CREATE TABLE item_quantity_rule(item_id INTEGER PRIMARY KEY REFERENCES item(id),raw_stack_s16 INTEGER NOT NULL,quantity_model TEXT NOT NULL,nominal_amount INTEGER,nominal_unit TEXT,raw_price INTEGER,max_stack_candidate INTEGER,max_stack_verified INTEGER,free_param_type TEXT,runtime_verified INTEGER NOT NULL CHECK(runtime_verified=0));
 CREATE TABLE dlc_field_profile(field_hash TEXT PRIMARY KEY,distinct_count INTEGER,zero_count INTEGER,empty_sentinel_count INTEGER,semantic_status TEXT,distribution_json TEXT);
 CREATE VIEW recipe_catalog AS SELECT r.id AS recipe_id,r.output_item_id,i.name_cn AS output_name,r.semantic_status,COUNT(m.slot) AS material_slots FROM recipe r LEFT JOIN item i ON i.id=r.output_item_id LEFT JOIN recipe_material m ON m.recipe_id=r.id GROUP BY r.id;
 """)
 for key,c,n in [('Nut',2154119502,17),('Yumekawa',2337948507,7)]:
  assert zlib.crc32(key.encode())==c
  assert db.execute('SELECT member_count,original_enum_name FROM furniture_group_candidate WHERE group_crc=?',(c,)).fetchone()==(n,None)
  db.execute("UPDATE furniture_group_candidate SET original_enum_name=?,semantic_status='crc32_key_candidate_native_enum_pending' WHERE group_crc=?",(key,c))
 # Original NPC identity, raw fields and independently generated native locale artifact.
 nr,nsha=load(root,'NmlNpcParam',{'54706054':2,'48EF0398':'str','1C57897D':4,'9EEA1288':4,'454B2ADC':1})
 with zipfile.ZipFile(artifact) as z:
  v=json.loads(z.read('villager_db_multi_v2.json'))
 by={x['ResName']:x for x in v};assert len(by)==len(v)==417
 assert set(by)=={r['hash_48EF0398'] for r in nr}
 hobbies={zlib.crc32(x.encode()):x for x in ['Education','Fitness','Fashion','Nature','Play','Music']}
 groups={0:'ordinary',1:'sanrio',2:'splatoon',3:'zelda'}
 actual=collections.Counter()
 for r in nr:
  name=r['hash_48EF0398'];x=by[name];i=int(r['hash_54706054']);c=int(r['hash_1C57897D']);h=int(r['hash_9EEA1288']);init=int(r['hash_454B2ADC'])
  assert x['unique_id']==i and len(x['names'])==14 and all(x['names'].values()) and h in hobbies and init==(1 if c==0 else 0)
  actual[groups[c]]+=1
  photo=x['bromide_item_id'];poster=x['poster_item_id'];assert photo in ids and poster in ids
  db.execute('INSERT INTO villager VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)',(i,name,int(r['_row_index']),groups[c],c,init,h,hobbies[h],x['birthday'],photo,poster,json.dumps(r,ensure_ascii=False,sort_keys=True),None,None,None))
  db.executemany('INSERT INTO villager_locale VALUES(?,?,?,?)',[(i,k,n,json.dumps(x['name_evidence'][k],ensure_ascii=False)) for k,n in sorted(x['names'].items())])
  db.executemany('INSERT INTO villager_image_source VALUES(?,?,?)',[(i,j,json.dumps(img,ensure_ascii=False,sort_keys=True)) for j,img in enumerate(x.get('native_images',[]))])
 assert actual=={'ordinary':407,'sanrio':6,'splatoon':2,'zelda':2}
 # Recipe fields: exact CRC32 names and byte check; quantities are slot-pair candidates.
 assert zlib.crc32(b'Item u16')==0x89A3482C
 for j,h in enumerate(MATS,1):assert zlib.crc32(f'Material{j} u16'.encode())==int(h,16)
 rr,rsha=load(root,'RecipeCraftParam',{h:2 for h in ['54706054','89A3482C']+MATS+QTY})
 output_missing=[];material_missing=[]
 for r in rr:
  i=int(r['hash_54706054']);o=int(r['hash_89A3482C'])
  if o not in ids:output_missing.append(o)
  db.execute('INSERT INTO recipe VALUES(?,?,?,?,?)',(i,int(r['_row_index']),o if o in ids else None,json.dumps(r,ensure_ascii=False,sort_keys=True),'item_crc_name_and_raw_bytes_native_consumer_pending'))
  for j,(mh,qh) in enumerate(zip(MATS,QTY),1):
   a=int(r['hash_'+mh]);q=int(r['hash_'+qh]);assert (a==65534)==(q==0)
   if a==65534:continue
   if a not in ids:material_missing.append(a)
   db.execute('INSERT INTO recipe_material VALUES(?,?,?,?,?,?,?,?)',(i,j,a,a if a in ids else None,q,mh,qh,'material_crc_name_quantity_slot_candidate'))
 assert db.execute('SELECT COUNT(*) FROM recipe_material').fetchone()==(1809,)
 # Reuse denomination rules documented in existing ItemCapabilityCore.
 denoms=collections.Counter();stack_counts=collections.Counter()
 for i,name,kind,s,raw in db.execute('SELECT i.id,i.resource_name,k.key,i.stack_raw_s16,i.raw_fields_json FROM item i JOIN item_kind k ON k.id=i.kind_id'):
  stack_counts[s]+=1;amount=unit=price=None;mode='positive_raw_limit' if s>0 else 'zero_single_candidate'
  if s<0:
   if kind=='Money' and name.endswith('Bell'):amount=int(name.removesuffix('Bell'));unit='bell'
   elif kind=='Turnip' and name.startswith('Kabu_'):amount=int(name.removeprefix('Kabu_'));unit='turnip'
   assert unit is not None,(i,name,kind)
   price=int(json.loads(raw)['hash_718B024D']);assert amount==price
   denoms[unit]+=1;mode='denomination_item_id'
  db.execute('INSERT INTO item_quantity_rule VALUES(?,?,?,?,?,?,?,?,?,0)',(i,s,mode,amount,unit,price,s if s>0 else 1 if s==0 else None,None,None))
 assert denoms=={'bell':108,'turnip':10}
 assert stack_counts=={0:10808,3:4,5:2,10:183,30:26,50:36,99:1,-1:118}
 # Field distribution is not a gameplay definition.
 fields=collections.defaultdict(collections.Counter)
 for raw, in db.execute('SELECT raw_fields_json FROM dlc_wherearen_raw'):
  for k,v in json.loads(raw).items():fields[k][str(v)]+=1
 assert len(fields)==44 and all(sum(x.values())==11178 for x in fields.values())
 for h,c in sorted(fields.items()):
  db.execute('INSERT INTO dlc_field_profile VALUES(?,?,?,?,?,?)',(h,len(c),c['0'],c['65534'],'item_unique_id_exact_join' if h=='hash_FD9AF1E1' else 'raw_distribution_only',json.dumps(c,sort_keys=True)))
 db.executemany('INSERT INTO sources VALUES(?,?,?)',[('NmlNpcParam.bcsv',nsha,'raw field bytes checked'),('RecipeCraftParam.bcsv',rsha,'raw field bytes checked'),('R84 NPC artifact',ART_SHA,'pinned source archive')])
 db.commit()
 assert db.execute('PRAGMA integrity_check').fetchone()==('ok',) and not db.execute('PRAGMA foreign_key_check').fetchall()
 assert db.execute('SELECT COUNT(*) FROM villager_locale').fetchone()==(5838,)
 assert db.execute('SELECT COUNT(*) FROM villager WHERE can_adopt IS NOT NULL OR can_invite IS NOT NULL OR can_amiibo_invite IS NOT NULL').fetchone()==(0,)
 assert db.execute('SELECT COUNT(*) FROM item_quantity_rule WHERE max_stack_verified IS NOT NULL OR free_param_type IS NOT NULL OR runtime_verified!=0').fetchone()==(0,)
 queries={'villagers.csv':'SELECT id,res_name,collaboration_group,init_live_raw,hobby_candidate,birthday,photo_item_id,poster_item_id,can_adopt,can_invite,can_amiibo_invite FROM villager ORDER BY id','villager_locales.csv':'SELECT villager_id,locale,name FROM villager_locale ORDER BY villager_id,locale','recipes.csv':'SELECT * FROM recipe_catalog ORDER BY recipe_id','recipe_materials.csv':'SELECT m.*,i.name_cn FROM recipe_material m LEFT JOIN item i ON i.id=m.item_id ORDER BY recipe_id,slot','item_quantity_rules.csv':'SELECT * FROM item_quantity_rule ORDER BY item_id','furniture_groups.csv':'SELECT * FROM furniture_group_candidate ORDER BY group_crc','dlc_field_profile.csv':'SELECT * FROM dlc_field_profile ORDER BY field_hash'}
 for n,q in queries.items():export(db,out,n,q)
 summary={t:db.execute('SELECT COUNT(*) FROM '+t).fetchone()[0] for t in ['item','villager','villager_locale','villager_image_source','recipe','recipe_material','item_quantity_rule','dlc_field_profile','dlc_item_core','capability_context']}
 summary.update(villager_groups=dict(actual),denominations=dict(denoms),stack_raw_counts=dict(stack_counts),recipe_output_missing=output_missing,recipe_material_missing=material_missing,group_names_candidate=db.execute('SELECT COUNT(*) FROM furniture_group_candidate WHERE original_enum_name IS NOT NULL').fetchone()[0],group_members_candidate=db.execute('SELECT SUM(member_count) FROM furniture_group_candidate WHERE original_enum_name IS NOT NULL').fetchone()[0],integrity_check='ok',foreign_key_violations=0,runtime_verified=False,release_status='research_preview')
 db.close();(out/'summary.json').write_text(json.dumps(summary,ensure_ascii=False,indent=2)+'\n')
 (out/'manifest.json').write_text(json.dumps({'schema':'acnh-resource-core-v1-catalog-preview','base_sha256':BASE_SHA,'artifact_sha256':ART_SHA,'files_sha256':{f.name:sha(f) for f in sorted(out.iterdir()) if f.is_file() and f.name!='manifest.json'},'runtime_verified':False},indent=2)+'\n')
 print(json.dumps(summary,ensure_ascii=False,indent=2))
if __name__=='__main__':
 p=argparse.ArgumentParser();p.add_argument('--root',type=Path,required=True);p.add_argument('--artifact',type=Path,required=True);p.add_argument('--out',type=Path,required=True);a=p.parse_args();run(a.root,a.artifact,a.out)
