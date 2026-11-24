#!/usr/bin/env python3
"""Conditional ACNH 3.0.3 gift model. Never assumes actual item affinity or price unit."""
import argparse,collections,hashlib,json
from pathlib import Path
from fractions import Fraction
def level(f):
    if not isinstance(f,int) or not 0<=f<=255:raise ValueError("friendship 0..255")
    return 1+sum(f>=n for n in (30,60,100,150,200))
def ordinary_price(base_price,quantity=1,solo=False,special_divide_by_5=False):
    if not isinstance(base_price,int) or not isinstance(quantity,int) or not 0<=base_price<=0x7fffffff or quantity<1:raise ValueError("invalid original Price or effective quantity")
    value=base_price*(1 if solo else quantity)
    if value>0x7fffffff:raise ValueError("outside signed ordinary price model")
    return value//5 if special_divide_by_5 else value
def price_query_case(price,border):
    if not isinstance(price,int) or not isinstance(border,int):raise ValueError("integer Native Price and Border")
    return 0 if price>=border else 1
def present_entry(price,pocket_space):
    # Explicitly assumes NNPC_Select_Present #34/#43 has been reached.
    if price_query_case(price,1000)==1:return "no_reward"
    if pocket_space:return "Trade" if price_query_case(price,3000)==0 else "Low_Trade"
    return "Root_OverFlow_case0" if price_query_case(price,3000)==0 else "Root_OverFlow_case1"
def color_style_match(npc_colors,item_colors,npc_styles,item_styles):
    # Only proven direct comparisons; extra tag/group rules not inferred.
    if any(len(x)!=2 for x in (npc_colors,item_colors,npc_styles,item_styles)):raise ValueError("requires two original enum values in each pair")
    return bool(set(npc_colors)&set(item_colors) or set(npc_styles)&set(item_styles))
def photo_roll(f):
    level(f)
    return Fraction((f+24)//25,100) if f>=150 else Fraction(0)
def model(friendship,base_delta,wrap_delta,skip_count,entry,photo_item_valid=None):
    level(friendship)
    if not 0<=skip_count<=10 or wrap_delta not in (0,1):raise ValueError("invalid count or wrapping increment")
    if not 0<=base_delta<=8:raise ValueError("only nonnegative verified gift increments; negative correction requires separate model")
    before=min(255,friendship+base_delta+wrap_delta)
    l=level(before)
    if entry=="Trade":
        opts=[(0,0,3,Fraction(85,100)),(4,0,3,Fraction(15,100))] if l>=5 else [(0,1,2,Fraction(90,100)),(4,0,2,Fraction(10,100))] if l>=3 else [(0,2,1,Fraction(1))]
    elif entry=="Root_OverFlow_case0":
        opts=[(0,0,3,Fraction(1))] if l>=5 else [(0,1,2,Fraction(1))] if l>=3 else [(0,2,1,Fraction(1))]
    elif entry=="Low_Trade" or entry=="Root_OverFlow_case1":opts=[(0,2,1,Fraction(1))]
    elif entry=="no_reward":opts=[(None,None,0,Fraction(1))]
    else:raise ValueError("unknown verified entry")
    result=[];total=Fraction(0)
    for typ,sub,inc,w in opts:
        p=photo_roll(before) if typ==0 and sub==0 and skip_count==0 else Fraction(0)
        total+=w*p
        result.append({"type":typ,"sub":sub,"weight":float(w),"post_reward_delta":inc,"friendship_after":min(255,before+inc),"direct_photo_roll":float(p)})
    return {"friendship_before_reward":before,"query_case":6-l,"routes":result,"conditional_direct_photo_roll":float(total),
            "conditional_photo_candidate_probability":float(total) if photo_item_valid is True else 0.0 if photo_item_valid is False else None,
            "final_delivered_photo_probability":None,"assumptions":["selected entry and all earlier guards satisfied","uniform random buckets and independent draws","not a complete simulation of delivery/other photo routes"]}
def integrate(catalog,profiles):
    if len(catalog)!=417 or len(profiles)!=417:raise ValueError("expected 417+417")
    p={x["resource_name"]:x for x in profiles};c={x["res_name"]:x for x in catalog}
    if len(p)!=417 or len(c)!=417 or p.keys()!=c.keys():raise ValueError("identity mismatch")
    for x in catalog:
        y=p[x["res_name"]]
        if (x["native_unique_id"],x["collaboration_type_raw"],x["init_live_raw"])!=(y["unique_id"],y["collabo_type_raw"],y["init_live_raw"]):raise ValueError("raw field mismatch "+x["res_name"])
        if len(x["names_14_locale"])!=14:raise ValueError("missing locale")
        if y["can_invite_online"] is not None or any(v is not None for v in y["dynamic_invite_checks"].values()):raise ValueError("unverified dynamic data")
        x["invite_rule_evidence_r104"]={**y,"source":"R103 original NmlNpcParam and R102 callbacks","runtime_verified":False}
    return catalog
def selftest():
    assert [level(x) for x in (0,29,30,59,60,99,100,149,150,199,200,255)]==[1,1,2,2,3,3,4,4,5,5,6,6]
    assert ordinary_price(400,3)==1200 and ordinary_price(400,3,True)==400
    assert price_query_case(999,1000)==1 and price_query_case(1000,1000)==0
    assert present_entry(2999,True)=="Low_Trade" and present_entry(3000,False)=="Root_OverFlow_case0"
    assert color_style_match((1,2),(3,2),(1,2),(3,4)) and not color_style_match((1,2),(3,4),(1,2),(3,4))
    assert model(200,0,0,0,"Trade")["conditional_direct_photo_roll"]==0.068
    assert model(149,1,0,0,"Trade")["conditional_direct_photo_roll"]==0.051
    assert model(255,0,0,1,"Trade")["conditional_direct_photo_roll"]==0
    assert model(255,3,1,0,"Root_OverFlow_case0")["routes"][0]["friendship_after"]==255
    for f in range(256):
        for k in ("Trade","Root_OverFlow_case0","Low_Trade","no_reward"):
            x=model(f,0,0,0,k)
            assert abs(sum(r["weight"] for r in x["routes"])-1)<1e-12
    print("PASS: 1024 route boundary cases and explicit threshold tests")
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--selftest",action="store_true");p.add_argument("--catalog",type=Path);p.add_argument("--profiles",type=Path);p.add_argument("--out",type=Path);p.add_argument("--friendship",type=int,default=200);p.add_argument("--base-delta",type=int,default=0);p.add_argument("--wrap-delta",type=int,default=0);p.add_argument("--skip-count",type=int,default=0);p.add_argument("--entry",default="Trade");a=p.parse_args()
    if a.selftest:selftest()
    elif a.catalog and a.profiles and a.out:
        result=integrate(json.loads(a.catalog.read_text("utf-8")),json.loads(a.profiles.read_text("utf-8")))
        a.out.write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n",encoding="utf-8");print("417 identity/ID/group/init joins; 5838 names preserved")
    else:print(json.dumps(model(a.friendship,a.base_delta,a.wrap_delta,a.skip_count,a.entry),indent=2))
