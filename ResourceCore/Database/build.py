#!/usr/bin/env python3
"""ResourceCore overlay: original group membership, DLC catalog pairs and static behavior evidence.
Never promotes static flags or row-order hypotheses to runtime permission.
"""
import argparse,collections,csv,gzip,hashlib,json,shutil,sqlite3,zlib
from pathlib import Path
HERE=Path(__file__).resolve().parent
BASE_SHA='c3737b30829273c0c706af758f324c43a385f5f032eb6684a85841b76fa04c07'
SRC={
'WherearenCatalogOpen':('eeb5b32450ed87d9af928f902777c275722ffff4',251),
'WherearenItemKind':('d54e721a8154ba94f5743cf07f0437b9ea2b151c',11178),
'ItemKind':('bee0408c96266c5b21f27d43bfe9d44a598aad7c',189)}
FLAGS={'CanSetItem':'49129B27','CanPut':'5D389FBF','CanFtr':'90BC0855','CanSetChest':'DAE27694','CanSetCloset':'1BCD4858','CanBury':'472724ED','CanPlant':'D4697FF8','CanSell':'3D4F3F42','CanSellSimple':'B52FE52E','CanGift':'06012035','CanEat':'9B433DD5','CantTakeOver':'C37A683C'}
EVIDENCE=[
('CAP_INVENTORY','01B14730','CanSetItem getter','NATIVE_STATIC'),
('CAP_INVENTORY','0277E788','inventory partition consumer','NATIVE_STATIC'),
('CAP_DROP','01B04850','CanPut getter','NATIVE_STATIC'),
('CAP_DROP','0317E7E0','command 30 menu condition','NATIVE_STATIC'),
('CAP_PICKUP','0242E2CC','Get_Pickup event and conversion','NATIVE_STATIC'),
('CAP_PICKUP','025579BC','result inversion of 0232697C','NATIVE_STATIC'),
('CAP_PICKUP','0231C94C','result updates player state bit 0x40','NATIVE_STATIC'),
('CAP_PICKUP','0242EE64','result updates player state bit 0x40','NATIVE_STATIC'),
('CAP_PICKUP','024BFB68','result updates player state bit 0x40','NATIVE_STATIC'),
('CAP_PICKUP','027FAA50','inventory write result, not field removal proof','NATIVE_STATIC'),
('CAP_TAKEOVER','01B04F00','inverted CantTakeOver getter; conditional defaults','NATIVE_STATIC'),
('CAP_TAKEOVER','0277C210','container filter/transform','NATIVE_STATIC'),
('CAP_TAKEOVER','028BCB18','conditional player data lifecycle, not ordinary travel proof','NATIVE_STATIC'),
('DLC_CATALOG','036DB890','reads 6D932B1B and E1FBFEDB, constructs item records','NATIVE_STATIC'),
('CONTENT_UNLOCK','01B168D0','collaboration acquisition unlock flags','NATIVE_STATIC')]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def source(root,name):
 p=root/'UnPack/1/Bcsv'/(name+'.csv');b=p.read_bytes();blob,n=SRC[name]
 assert hashlib.sha1(('blob %d\0'%len(b)).encode()+b).hexdigest()==blob,name
 with p.open(encoding='utf-8-sig',newline='') as f:rows=list(csv.DictReader(f))
 assert len(rows)==n,name
 assert [int(r['_row_index']) for r in rows]==list(range(n)),name
 return rows
def export(db,out,name,sql):
 c=db.execute(sql)
 with (out/name).open('w',encoding='utf-8-sig',newline='') as f:
  w=csv.writer(f);w.writerow([x[0] for x in c.description]);w.writerows(c)
def run(root,out):
 out.mkdir(parents=True,exist_ok=True);p=out/'ACNHResourceCore.sqlite3'
 with gzip.open(root/'ResourceCore/CategoryCore/output/ACNHCategoryCore.sqlite3.gz','rb') as src,p.open('wb') as dst:shutil.copyfileobj(src,dst)
 assert sha(p)==BASE_SHA
 db=sqlite3.connect(p);db.execute('PRAGMA foreign_keys=ON')
 assert db.execute('PRAGMA integrity_check').fetchone()[0]=='ok'
 assert db.execute('SELECT COUNT(*) FROM item').fetchone()[0]==11178
 db.executescript("""
 CREATE TABLE furniture_group_candidate(group_crc INTEGER PRIMARY KEY,member_count INTEGER NOT NULL,original_enum_name TEXT,semantic_status TEXT NOT NULL);
 CREATE TABLE furniture_group_member(item_id INTEGER PRIMARY KEY REFERENCES item(id),group_crc INTEGER NOT NULL REFERENCES furniture_group_candidate(group_crc));
 CREATE TABLE dlc_catalog_link(source_row INTEGER PRIMARY KEY,raw_unique_id INTEGER UNIQUE,field_6d932b1b INTEGER NOT NULL,field_e1fbfedb INTEGER NOT NULL,first_item_id INTEGER REFERENCES item(id),second_item_id INTEGER REFERENCES item(id),semantic_status TEXT NOT NULL);
 CREATE TABLE dlc_wherearen_raw(source_row INTEGER PRIMARY KEY,row_offset INTEGER NOT NULL,raw_fields_json TEXT NOT NULL,item_id_verified INTEGER REFERENCES item(id),identity_status TEXT NOT NULL);
 CREATE TABLE dlc_acquisition_candidate(item_id INTEGER PRIMARY KEY REFERENCES item(id),source_key TEXT NOT NULL,requires_dlc_to_acquire INTEGER,requires_dlc_to_receive INTEGER,requires_dlc_to_use INTEGER,semantic_status TEXT NOT NULL);
 CREATE TABLE capability_static_kind(kind_id INTEGER PRIMARY KEY REFERENCES item_kind(id),raw_flags_json TEXT NOT NULL,stack_raw_s16 INTEGER NOT NULL,stack_mode_candidate TEXT NOT NULL,positive_stack_limit_candidate INTEGER);
 CREATE TABLE capability_evidence(topic TEXT NOT NULL,native_va TEXT NOT NULL,main_rva TEXT NOT NULL,observation TEXT NOT NULL,grade TEXT NOT NULL,source_path TEXT NOT NULL,source_sha256 TEXT NOT NULL,PRIMARY KEY(topic,native_va));
 CREATE TABLE capability_context(item_id INTEGER NOT NULL REFERENCES item(id),context TEXT NOT NULL,can_pickup INTEGER,can_drop INTEGER,can_carry_across_island INTEGER,can_save_after_return INTEGER,can_auto_deliver INTEGER,PRIMARY KEY(item_id,context));
 CREATE VIEW item_capability_core AS SELECT i.id,i.resource_name,i.name_cn,k.key AS native_kind,i.kind_join_status,s.stack_raw_s16,s.stack_mode_candidate,s.positive_stack_limit_candidate,i.raw_can_set_item,i.raw_can_put,i.raw_can_ftr,i.raw_cant_take_over,i.can_inventory,i.can_pickup,i.can_drop,i.can_cross_island,i.max_stack_verified,i.can_auto_deliver,s.raw_flags_json FROM item i JOIN item_kind k ON k.id=i.kind_id JOIN capability_static_kind s ON s.kind_id=i.kind_id;
 """)
 groups=db.execute('SELECT group_crc_candidate,COUNT(*) FROM item WHERE group_crc_candidate IS NOT NULL GROUP BY group_crc_candidate').fetchall()
 assert len(groups)==56 and sum(n for _,n in groups)==701
 db.executemany('INSERT INTO furniture_group_candidate VALUES(?,?,NULL,?)',[(c,n,'raw_group_crc_only') for c,n in groups])
 db.execute('INSERT INTO furniture_group_member SELECT id,group_crc_candidate FROM item WHERE group_crc_candidate IS NOT NULL')
 ids={x[0] for x in db.execute('SELECT id FROM item')}
 cat=source(root,'WherearenCatalogOpen')
 for r in cat:
  a,b=int(r['hash_6D932B1B']),int(r['hash_E1FBFEDB'])
  db.execute('INSERT INTO dlc_catalog_link VALUES(?,?,?,?,?,?,?)',(int(r['_row_index']),int(r['hash_54706054']),a,b,a if a in ids else None,b if b in ids else None,'native_fields_observed_direction_pending'))
 assert len({int(r['hash_6D932B1B']) for r in cat})==128
 assert len({int(r['hash_E1FBFEDB']) for r in cat})==48
 assert len({(r['hash_6D932B1B'],r['hash_E1FBFEDB']) for r in cat})==250
 raw=source(root,'WherearenItemKind')
 assert len([k for k in raw[0] if k.startswith('hash_')])==44
 for r in raw:
  db.execute('INSERT INTO dlc_wherearen_raw VALUES(?,?,?,NULL,?)',(int(r['_row_index']),int(r['_row_offset_raw']),json.dumps({k:v for k,v in r.items() if k.startswith('hash_')},sort_keys=True,ensure_ascii=False),'row_identity_unresolved'))
 db.execute("""INSERT INTO dlc_acquisition_candidate SELECT i.id,a.key,NULL,NULL,NULL,'acquisition_route_only' FROM item i JOIN acquisition_source a ON a.id=i.source_id WHERE a.key LIKE '%OneRoom%' OR a.key='ManCatalogSpTab'""")
 for r in source(root,'ItemKind'):
  kid=int(r['hash_54706054']);s=int(r['hash_4C9BA961']);s=s-65536 if s>32767 else s
  assert db.execute('SELECT stack_raw_s16 FROM item_kind WHERE id=?',(kid,)).fetchone()==(s,)
  flags={n:int(r['hash_'+h]) for n,h in FLAGS.items()};assert all(v in (0,1) for v in flags.values())
  mode='positive_raw_limit' if s>0 else 'zero_single_candidate' if s==0 else 'special_signed_encoding'
  db.execute('INSERT INTO capability_static_kind VALUES(?,?,?,?,?)',(kid,json.dumps(flags,sort_keys=True),s,mode,s if s>0 else None))
 for topic,va,obs,grade in EVIDENCE:
  path='derived/3.0.3/ghidra12.2/c/'+va.lower()[-4:-2]+'/'+va.lower()+'.c'
  f=root/path;assert f.is_file(),path
  db.execute('INSERT INTO capability_evidence VALUES(?,?,?,?,?,?,?)',(topic,va,format(int(va,16)-0x100000,'08X'),obs,grade,path,sha(f)))
 for context in ('own_island_outdoor','visitor_island_outdoor','own_island_indoor','visitor_island_indoor','return_home_save','player_migration'):
  db.execute('INSERT INTO capability_context SELECT id,?,NULL,NULL,NULL,NULL,NULL FROM item',(context,))
 for n,(blob,_) in SRC.items():db.execute('INSERT INTO sources VALUES(?,?,?)',(n,blob,'Git blob SHA verified'))
 db.commit()
 assert db.execute('PRAGMA integrity_check').fetchone()[0]=='ok' and db.execute('PRAGMA foreign_key_check').fetchall()==[]
 assert db.execute('SELECT COUNT(*) FROM capability_context WHERE can_pickup IS NOT NULL OR can_drop IS NOT NULL OR can_carry_across_island IS NOT NULL OR can_save_after_return IS NOT NULL OR can_auto_deliver IS NOT NULL').fetchone()[0]==0
 assert db.execute('SELECT COUNT(*) FROM item_capability_core').fetchone()[0]==11178
 queries={'furniture_groups.csv':'SELECT * FROM furniture_group_candidate ORDER BY member_count DESC,group_crc','furniture_group_members.csv':'SELECT g.group_crc,i.id,i.name_cn,i.resource_name FROM furniture_group_member g JOIN item i ON i.id=g.item_id ORDER BY g.group_crc,i.id','dlc_catalog_links.csv':'SELECT d.*,a.name_cn AS first_name,b.name_cn AS second_name FROM dlc_catalog_link d LEFT JOIN item a ON a.id=d.first_item_id LEFT JOIN item b ON b.id=d.second_item_id ORDER BY source_row','dlc_acquisition_candidates.csv':'SELECT d.*,i.name_cn,i.resource_name FROM dlc_acquisition_candidate d JOIN item i ON i.id=d.item_id ORDER BY source_key,item_id','item_capability_core.csv':'SELECT * FROM item_capability_core ORDER BY id','native_evidence.csv':'SELECT * FROM capability_evidence ORDER BY topic,native_va'}
 for n,q in queries.items():export(db,out,n,q)
 counts={t:db.execute('SELECT COUNT(*) FROM '+t).fetchone()[0] for t in ('item','furniture_group_candidate','furniture_group_member','dlc_catalog_link','dlc_wherearen_raw','dlc_acquisition_candidate','capability_static_kind','capability_evidence','capability_context')}
 counts['dlc_catalog_both_ids_matched']=db.execute('SELECT COUNT(*) FROM dlc_catalog_link WHERE first_item_id IS NOT NULL AND second_item_id IS NOT NULL').fetchone()[0]
 counts['dlc_wherearen_verified_item_ids']=db.execute('SELECT COUNT(*) FROM dlc_wherearen_raw WHERE item_id_verified IS NOT NULL').fetchone()[0]
 counts['stack_modes_by_item']=dict(db.execute('SELECT stack_mode_candidate,COUNT(*) FROM item_capability_core GROUP BY stack_mode_candidate'))
 counts['dlc_acquisition_by_route']=dict(db.execute('SELECT source_key,COUNT(*) FROM dlc_acquisition_candidate GROUP BY source_key'))
 counts['integrity_check']='ok';counts['foreign_key_violations']=0;counts['runtime_verified']=False;counts['release_status']='research_preview'
 db.close();(out/'summary.json').write_text(json.dumps(counts,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
 (out/'manifest.json').write_text(json.dumps({'schema':'acnh-resource-core-v1-preview','base_sha256':BASE_SHA,'files_sha256':{f.name:sha(f) for f in sorted(out.iterdir()) if f.is_file() and f.name!='manifest.json'},'runtime_verified':False},indent=2)+'\n',encoding='utf-8')
 print(json.dumps(counts,ensure_ascii=False,indent=2))
if __name__=='__main__':
 p=argparse.ArgumentParser();p.add_argument('--root',type=Path,default=HERE.parent.parent);p.add_argument('--out',type=Path,required=True);a=p.parse_args();run(a.root,a.out)
