"""ACNH 3.0.3 offline lossless Item entity codec.
Raw serialization is exact; semantic operations require catalog evidence.
No game memory, network, or dispatch operation is performed.
"""
from dataclasses import dataclass, replace
import struct

def require(ok, message):
    if not ok:
        raise ValueError(message)

def uint(v,bits):
    require(type(v) is int and 0<=v<(1<<bits),f"expected u{bits}")
    return v

@dataclass(frozen=True)
class ItemPolicy:
    item_id:int
    kind:str
    remake_offset:int|None=None
    body_count:int=0
    fabric_count:int=0
    common_count:int=0
    design_count:int=0
    stack_max:int=0
    quantity_width:int=0
    uses_high:bool=False
    special:bool=False
    review:str=""

@dataclass(frozen=True)
class ItemEntity:
    item_id:int
    system_param:int=0
    additional_param:int=0
    free_param:int=0
    def __post_init__(self):
        uint(self.item_id,16);uint(self.system_param,8);uint(self.additional_param,8);uint(self.free_param,32)
    @classmethod
    def from_bytes(cls,data):
        require(len(data)==8,"exactly 8 bytes required")
        return cls(*struct.unpack("<HBBI",data))
    def to_bytes(self):
        return struct.pack("<HBBI",self.item_id,self.system_param,self.additional_param,self.free_param)
    @property
    def low(self):return self.free_param&0xffff
    @property
    def high(self):return self.free_param>>16
    @property
    def entity_type(self):
        return "empty" if self.item_id==0xfffe else "extension" if self.item_id==0xfffd else "field" if 60000<=self.item_id<0xfffd else "unknown_reserved" if self.item_id in (0,0xffff) else "normal"
    def legacy(self):
        return {"itemId":f"{self.item_id:04X}","flag1":f"{self.system_param:02X}","flag0":f"{self.additional_param:02X}","count":f"{self.free_param:08X}"}
    @classmethod
    def from_legacy(cls,itemId,flag1,flag0,count):
        for v,n in [(itemId,4),(flag1,2),(flag0,2),(count,8)]:
            require(isinstance(v,str) and len(v)==n and all(c in "0123456789abcdefABCDEF" for c in v),"fixed-width hexadecimal required")
        return cls(int(itemId,16),int(flag1,16),int(flag0,16),int(count,16))
    def _half(self,offset,v):
        require(offset in (4,6),"invalid halfword offset")
        uint(v,16);s=(offset-4)*8
        return replace(self,free_param=(self.free_param&~(0xffff<<s))|(v<<s))
    def _guard(self,p):
        require(self.item_id==p.item_id and self.entity_type=="normal" and not p.special,"unsupported entity/policy")
        require(self.additional_param==0,"wrapped or special additional state; preserve raw only")
        require(self.item_id not in (0x16a1,0x3100,0x16a2),"special container")
    def variant(self,p):
        self._guard(p);require(p.remake_offset in (4,6),"no variant route")
        w=self.low if p.remake_offset==4 else self.high
        return {"word":w,"body":w&7,"mode_raw":(w>>3)&3,"mode_read":0 if (w>>3)&3==3 else (w>>3)&3,"index_raw":(w>>5)&255,"reserved":w&0xe000}
    def with_variant(self,p,*,body=None,mode=None,index=None,allow_design_context=False):
        v=self.variant(p);w=v["word"]
        require(body is not None or mode is not None or index is not None,"empty edit")
        if body is not None:
            require(type(body) is int and 0<=body<p.body_count<=8,"body bound")
            w=(w&0xfff8)|body
        if mode is not None or index is not None:
            require(type(mode) is int and type(index) is int and mode in (0,1,2),"explicit mode and index required")
            require(p.fabric_count>0,"no fabric")
            lim=p.fabric_count if mode==0 else p.common_count if mode==1 else p.design_count if allow_design_context else 0
            require(0<=index<lim,"fabric bound or missing design context")
            w=(w&0xe007)|(mode<<3)|(index<<5)
        return self._half(p.remake_offset,w)
    def with_quantity(self,p,quantity):
        self._guard(p)
        require(type(quantity) is int and 1<=quantity<=p.stack_max and p.quantity_width in (8,16),"quantity policy")
        require(p.remake_offset!=4,"quantity overlaps variant")
        if p.quantity_width==8:
            uint(quantity-1,8);return replace(self,free_param=(self.free_param&0xffffff00)|(quantity-1))
        return self._half(4,quantity-1)
    def with_use_raw(self,p,value):
        self._guard(p);require(p.uses_high and p.remake_offset!=6,"use-count policy or variant overlap")
        return self._half(6,uint(value,16))
    def wrapping_view(self):
        a=self.additional_param
        return {"raw":a,"type_raw":a&3,"paper_raw":(a>>2)&15,"show_item":bool(a&64),"bit7":bool(a&128),"exception":self.item_id in (0x16a1,0x3100)}
    def extension_view(self):
        require(self.entity_type=="extension","not extension")
        return {"root_id":self.low,"x":self.high&255,"y":self.high>>8}
