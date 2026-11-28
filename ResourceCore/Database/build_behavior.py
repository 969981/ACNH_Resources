#!/usr/bin/env python3
"""Source-checked behavior evidence overlay; never grants runtime permission."""
import argparse,csv,gzip,hashlib,json,shutil,sqlite3
from pathlib import Path
BASE='a9232c5b82fa8ff33f62cedd4712e1ea2271692979cf7fd77bcd5f109fd989cb'
NATIVE={
'01af0020':('ordinary_stack_guard',['0x4c9ba961','< 2','param_1 + 0xb'],'positive stack guard includes instance conditions'),
'01af02d0':('ordinary_stack_decode',['0x4c9ba961','param_1 + 0xc) + 1 & 0xff','iVar10 < (int)uVar3'],'low eight bits plus one; fallback when over limit; zero wrap not excluded by this expression'),
'01aedd20':('turnip_nominal_read',['0x59','0x718b024d'],'category 0x59 reads original price field'),
'01aedf10':('turnip_nominal_lookup',['0x59','0x718b024d','uVar7 == param_2','0xa48'],'exact nominal match, zero extra record fields, fallback ID 0xa48'),
'01aed4b8':('money_value_dispatch',['0x86','FUN_01aed730'],'category 0x86 dispatches value reader'),
'01aed730':('money_value_reader',['0x718b024d','FUN_01af02d0'],'price times quantity; special contextual branch prevents universal price semantics'),
'024b9644':('pickup_state_consumer',['0x17cc','FUN_026738b0','0x80000'],'calls inventory addition then updates state; caller does not inspect write result on this path'),
'02673a50':('inventory_commit_result',['FUN_027faa50','FUN_02649bf0','FUN_02674420'],'write success guards downstream callbacks, return bit is write result')}
FLOW='UnPack/1/EventFlow/NNPC_Reaction_Moving.json'
FLOW_BLOB='0bb4e5859add49c6ca4872cd34152a154ee69298'
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def blob(b):return hashlib.sha1(('blob %d\0'%len(b)).encode()+b).hexdigest()
def reach(nodes,entries,start):
 seen=set();todo=[start];external=[]
 while todo:
  i=todo.pop()
  if i is None or i in seen:continue
  seen.add(i);n=nodes[i]
  todo.extend(c['target'] for c in n.get('cases',[]))
  if n.get('next') is not None:todo.append(n['next'])
  if n['type']=='SubFlowEvent':
   if not n.get('flowchart') and n['entrypoint'] in entries:todo.append(entries[n['entrypoint']])
   else:external.append(i)
  # The audited branches contain no unsupported fork/join nodes.
  assert n['type'] not in ('ForkEvent','JoinEvent')
 return sorted(seen),sorted(set(external))
def run(root,out):
 out.mkdir(parents=True,exist_ok=True);p=out/'ACNHResourceCore.sqlite3'
 with gzip.open(root/'ResourceCore/Database/catalog-output/ACNHResourceCore.sqlite3.gz','rb') as src,p.open('wb') as dst:shutil.copyfileobj(src,dst)
 assert sha(p)==BASE
 db=sqlite3.connect(p);db.execute('PRAGMA foreign_keys=ON')
 db.executescript("""
 CREATE TABLE quantity_native_evidence(topic TEXT PRIMARY KEY,va TEXT NOT NULL,source_path TEXT NOT NULL,source_sha256 TEXT NOT NULL,observation TEXT NOT NULL,grade TEXT NOT NULL);
 CREATE TABLE quantity_decode_candidate(item_id INTEGER PRIMARY KEY REFERENCES item(id),mode TEXT NOT NULL,raw_limit INTEGER NOT NULL,record_low8_plus_one INTEGER,requires_instance_guard INTEGER NOT NULL,native_formula TEXT,nominal_amount INTEGER,nominal_unit TEXT,runtime_verified INTEGER NOT NULL CHECK(runtime_verified=0));
 CREATE TABLE villager_event_branch(flow TEXT NOT NULL,source_node INTEGER NOT NULL,case_value INTEGER NOT NULL,target_node INTEGER NOT NULL,reachable_node_count INTEGER NOT NULL,reaches_inducement INTEGER NOT NULL,reachable_nodes_json TEXT NOT NULL,external_nodes_json TEXT NOT NULL,source_blob_sha TEXT NOT NULL,PRIMARY KEY(flow,source_node,case_value));
 CREATE TABLE villager_recruitment_context(villager_id INTEGER REFERENCES villager(id),context TEXT NOT NULL,eligibility INTEGER,reason TEXT NOT NULL,PRIMARY KEY(villager_id,context));
 CREATE TABLE pickup_transaction_stage(stage TEXT PRIMARY KEY,va TEXT,static_evidence TEXT NOT NULL,runtime_verified INTEGER NOT NULL CHECK(runtime_verified=0));
 """)
 for va,(topic,tokens,obs) in NATIVE.items():
  path='derived/3.0.3/ghidra12.2/c/'+va[-4:-2]+'/'+va+'.c';f=root/path;t=f.read_text()
  assert all(x in t for x in tokens),(path,tokens)
  db.execute('INSERT INTO quantity_native_evidence VALUES(?,?,?,?,?,?)',(topic,va.upper(),path,sha(f),obs,'NATIVE_STATIC'))
 for i,s,model,amount,unit in db.execute('SELECT item_id,raw_stack_s16,quantity_model,nominal_amount,nominal_unit FROM item_quantity_rule'):
  if s>=2:mode='ordinary_stack_guarded';formula='q=(raw_u16+1)&255; if q>limit return 1';low=1
  elif s<0:mode='nominal_id';formula=None;low=None
  else:mode='non_stack_guard_returns_one';formula='guard false -> 1';low=None
  db.execute('INSERT INTO quantity_decode_candidate VALUES(?,?,?,?,?,?,?,?,0)',(i,mode,s,low,1,formula,amount,unit))
 raw=(root/FLOW).read_bytes();assert blob(raw)==FLOW_BLOB
 g=json.loads(raw)['graph'];nodes={n['index']:n for n in g['events']};entries={e['name']:e['main_event'] for e in g['entrypoints']}
 assert nodes[62]['action']=='EventFlowActionNpcFixedInducement'
 expected={(111,0):False,(111,1):False,(112,0):False,(112,1):True,(113,0):False,(113,1):True}
 for n in (111,112,113):
  node=nodes[n];assert node['query']=='EventFlowQueryIsCollaboNpc' and node['params']['CollaboType']=='cAny'
  for c in node['cases']:
   reachable,external=reach(nodes,entries,c['target'])
   assert not external and (62 in reachable)==expected[(n,c['value'])]
   db.execute('INSERT INTO villager_event_branch VALUES(?,?,?,?,?,?,?,?,?)',(FLOW,n,c['value'],c['target'],len(reachable),int(62 in reachable),json.dumps(reachable),json.dumps(external),FLOW_BLOB))
 for context in ('cross_island_moveout_invite','campsite_invite','amiibo_invite','dlc_amiibo_call','mystery_island_invite'):
  db.execute("INSERT INTO villager_recruitment_context SELECT id,?,NULL,'context requires native query polarity and live state' FROM villager",(context,))
 stages=[('pickup_condition','025579BC','conditional result inverted from 0232697C'),('player_state','024B9644','bit6 consumer reaches 026738B0; this call does not inspect result'),('inventory_write','02673A50','027FAA50 result guards callbacks and returns success bit'),('field_removal',None,'not proven'),('network_commit',None,'not proven'),('return_save_reload',None,'not proven')]
 db.executemany('INSERT INTO pickup_transaction_stage VALUES(?,?,?,0)',stages)
 db.commit()
 assert db.execute('PRAGMA integrity_check').fetchone()==('ok',) and not db.execute('PRAGMA foreign_key_check').fetchall()
 assert db.execute('SELECT COUNT(*) FROM quantity_decode_candidate').fetchone()==(11178,)
 assert db.execute('SELECT COUNT(*) FROM villager_recruitment_context WHERE eligibility IS NOT NULL').fetchone()==(0,)
 assert db.execute('SELECT COUNT(*) FROM item WHERE can_pickup IS NOT NULL OR can_cross_island IS NOT NULL OR can_auto_deliver IS NOT NULL').fetchone()==(0,)
 queries={'quantity_native_evidence.csv':'SELECT * FROM quantity_native_evidence ORDER BY va','quantity_decode_candidates.csv':'SELECT * FROM quantity_decode_candidate ORDER BY item_id','villager_event_branches.csv':'SELECT * FROM villager_event_branch ORDER BY source_node,case_value','pickup_transaction_stages.csv':'SELECT * FROM pickup_transaction_stage ORDER BY stage'}
 for name,q in queries.items():
  c=db.execute(q)
  with (out/name).open('w',encoding='utf-8-sig',newline='') as f:w=csv.writer(f);w.writerow([x[0] for x in c.description]);w.writerows(c)
 summary={t:db.execute('SELECT COUNT(*) FROM '+t).fetchone()[0] for t in ['item','villager','recipe','recipe_material','quantity_native_evidence','quantity_decode_candidate','villager_event_branch','villager_recruitment_context','pickup_transaction_stage']}
 summary['quantity_models']=dict(db.execute('SELECT mode,COUNT(*) FROM quantity_decode_candidate GROUP BY mode'))
 summary.update(integrity_check='ok',foreign_key_violations=0,runtime_verified=False,release_status='research_preview')
 db.close();(out/'summary.json').write_text(json.dumps(summary,indent=2)+'\n')
 (out/'manifest.json').write_text(json.dumps({'schema':'acnh-resource-core-v1-behavior-preview','base_sha256':BASE,'files_sha256':{f.name:sha(f) for f in sorted(out.iterdir()) if f.is_file() and f.name!='manifest.json'},'runtime_verified':False},indent=2)+'\n')
 print(json.dumps(summary,indent=2))
if __name__=='__main__':
 p=argparse.ArgumentParser();p.add_argument('--root',type=Path,required=True);p.add_argument('--out',type=Path,required=True);a=p.parse_args();run(a.root,a.out)
