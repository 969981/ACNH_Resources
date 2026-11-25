"""ACNH 3.0.3 native Item initialization contract (partial).
A runtime provider is mandatory for unresolved branches; no guessed Item bytes.
"""
from dataclasses import dataclass
import struct

DOMAIN=15000
EMPTY_ID=0xfffe
# Original NSO/ELF CI 45574865001; mode3 selector defaults from 01B16D90.
MODE1_TABLE=tuple(range(7699,7715))+(13793,)
MODE3_TABLE=(0,14042,14043,14044)
def initial_mode3_mapping(v):return {12:1,13:2,14:3}.get(v,0)

@dataclass(frozen=True)
class Item:
    id:int
    byte2:int=0
    byte3:int=0
    data:int=0
    def pack(self):
        return struct.pack("<HBBI",self.id,self.byte2,self.byte3,self.data)
    @classmethod
    def unpack(cls,raw):
        return cls(*struct.unpack("<HBBI",raw))

class MissingNativeRule(Exception): pass

def normalized_id(item, mode1_table=None, mode3_table=None, mode3_mapping=None):
    """0277D6C4: explicit providers permit runtime overrides."""
    if item.id in (0x16a1,0x3100):return item.id
    kind=item.byte3&3
    v=(item.byte3>>2)&15
    if kind==0:return item.id
    if kind==2:return 0x1180
    if kind==1:
        if mode1_table is None:raise MissingNativeRule("DAT_04177938")
        return mode1_table[v]
    if v==15:
        if mode1_table is None:raise MissingNativeRule("DAT_04177938")
        return mode1_table[16]
    if mode3_mapping is None:raise MissingNativeRule("01B03610 runtime mapping")
    n=mode3_mapping(v)
    if n==0:return 0x3a19 if v==11 else (0x306 if v==10 else 0x1225)
    if mode3_table is None:raise MissingNativeRule("DAT_04101D00")
    return mode3_table[n if n<=3 else 0]

def initialize(item, *, valid, kind, special_byte2=None, finalizer=None, normalize=normalized_id):
    """0277D4AC / 0277F248 boundaries, with unresolved native callbacks injected.
    valid(id) and kind(id) must reflect the game runtime, not guessed enum names.
    """
    if valid(normalize(item)):
        if kind(normalize(item)) in (0xa4,0xa6):
            if special_byte2 is None:raise MissingNativeRule("01AFCA60")
            item=Item(item.id,special_byte2(item),item.byte3,item.data)
        if valid(normalize(item)):
            item=Item(item.id,item.byte2,item.byte3&0x80,item.data)
    if item.id in (0xfffd,0xfffe):return item
    if finalizer is None:raise MissingNativeRule("0277F248 default data and alternate database")
    return finalizer(item)

def build_templates(initializer,valid,default,normalize=normalized_id):
    """01A44810, caller supplies a fully implemented native initializer."""
    result=[]
    for i in range(DOMAIN):
        item=initializer(Item(i))
        result.append(item if valid(normalize(item)) else default)
    return tuple(result)

def read_template(templates,index,default):
    """01A45128, including exceptional unsigned-index boundary."""
    if len(templates)!=DOMAIN or not 0<=index<=0xffffffff:raise ValueError("invalid template domain/index")
    if index<DOMAIN:return templates[index]
    if index==DOMAIN:return templates[0]
    return default

def self_test():
    e=Item(EMPTY_ID)
    assert e.pack().hex()=="feff000000000000"
    assert Item.unpack(Item(123,4,128,0x12345678).pack())==Item(123,4,128,0x12345678)
    assert normalized_id(Item(1,0,2))==0x1180
    assert normalized_id(Item(0x16a1,0,2))==0x16a1
    assert normalized_id(Item(0x3100,0,2))==0x3100
    assert normalized_id(Item(1,0,3|(11<<2)),mode3_mapping=lambda _:0)==0x3a19
    assert normalized_id(Item(1,0,3|(10<<2)),mode3_mapping=lambda _:0)==0x306
    assert normalized_id(Item(1,0,1),mode1_table=list(range(17)))==0
    assert normalized_id(Item(1,0,63),mode1_table=list(range(17)))==16
    assert normalized_id(Item(1,0,1),MODE1_TABLE)==7699
    assert normalized_id(Item(1,0,63),MODE1_TABLE)==13793
    assert normalized_id(Item(1,0,3|(12<<2)),MODE1_TABLE,MODE3_TABLE,initial_mode3_mapping)==14042
    assert normalized_id(Item(1,0,3|(14<<2)),MODE1_TABLE,MODE3_TABLE,initial_mode3_mapping)==14044
    try:normalized_id(Item(1,0,1))
    except MissingNativeRule:pass
    else:raise AssertionError("unresolved native table silently guessed")
    try:initialize(Item(1),valid=lambda _:True,kind=lambda _:0)
    except MissingNativeRule:pass
    else:raise AssertionError("unresolved finalizer silently guessed")
    assert initialize(e,valid=lambda _:False,kind=lambda _:0)==e
    assert initialize(Item(1,5,0xfc,4),valid=lambda _:True,kind=lambda _:0,finalizer=lambda i:i)==Item(1,5,128,4)
    t=build_templates(lambda i:i,lambda i:i in (0,1,14999),e)
    assert len(t)==15000 and read_template(t,14999,e)==Item(14999)
    assert read_template(t,15000,e)==t[0] and read_template(t,15001,e)==e
    print("ITEM_INIT_CONTRACT PASS: synthetic providers only; no native runtime equivalence claimed")

if __name__=="__main__":self_test()
