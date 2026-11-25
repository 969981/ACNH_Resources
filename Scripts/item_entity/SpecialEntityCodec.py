"""Offline special-entity codecs from ACNH 3.0.3 native consumers.
These are explicit-input models, not claims of default runtime state.
"""
from dataclasses import dataclass
from ItemEntityCodec import ItemEntity,uint,require

BOTTLES=(0x16a1,0x3100)
EMPTY=0xfffe

def embedded_view(word):
    uint(word,32)
    return dict(child_id=word&65535,body=(word>>16)&7,fabric_return_low3=(word>>19)&7,reserved=word>>22)

def embedded_word(original,child_id,transfer_type,body=0,fabric_return=0):
    uint(original,32);uint(child_id,16);uint(body,3);uint(fabric_return,32)
    require(transfer_type in range(6),"native transfer enum")
    w=(original&0xffff0000)|child_id
    if transfer_type in (1,2):w=(w&0xfff8ffff)|(body<<16)
    if transfer_type in (1,3):w=(w&0xffc7ffff)|((fabric_return&7)<<19)
    return w

def bottle_view(e):
    require(e.item_id in BOTTLES,"not bottle")
    w=e.free_param
    return dict(recipe_index=w&65535,group_index=(w>>16)&255,category_index=w>>24,additional_raw=e.additional_param)

def bottle_entity(item_id,system,additional,recipe,category,group,limits,masks):
    require(item_id in BOTTLES,"not bottle")
    uint(recipe,16);uint(category,8);uint(group,8)
    require(len(limits)==len(masks)==35,"native domain length")
    require(category<35 and group<=limits[category] and masks[category]&(1<<(group&31)),"native category/group rejected")
    # Writer does not validate the recipe; consumer does. Do not conflate them.
    return ItemEntity(item_id,system,additional,recipe|(group<<16)|(category<<24))

def native_quantity(raw_low,max_count,stack_gate):
    uint(raw_low,16)
    if not stack_gate:return 1
    q=(raw_low+1)&255
    return 1 if q>max_count else q

def money_amount(price,raw_low,max_count,stack_gate):
    # kind 0x86 wrapper excludes the separate kind 0x57 discounted branch
    return price*native_quantity(raw_low,max_count,stack_gate)

def plant_identity(field_id,rows):
    # FUN_012418E0: Grow 0/1 => GrowupFg; 2 => return; 3 => ChangeFg; other => FFFE.
    # Detect malformed cycles instead of looping forever.
    seen=set();path=[];current=field_id
    while current in rows:
        if current in seen:return None,tuple(path+[current]),"cycle"
        seen.add(current);path.append(current)
        grow,up,change=rows[current]
        if grow==2:return current,tuple(path),"terminal_grow2"
        if grow in (0,1):current=up
        elif grow==3:current=change
        else:return EMPTY,tuple(path),"invalid_grow"
    return EMPTY,tuple(path),"missing_or_sentinel"
