"""Evidence-gated, offline initialization planning; never claims a full native default.
The native functions mutate a seed entity. Unknown predicates are not guessed.
"""
from dataclasses import dataclass,replace
from ItemEntityCodec import ItemEntity,require,uint

FIXED_KIND={0xa0:0x313,0x8d:0x313,0x71:0x128}
FIXED_ID={0x1618:0xec9,0x315a:0xec9,0x3805:0xec9,0x342f:0x3358}
@dataclass(frozen=True)
class Patch:
    offset:int
    width:int
    mask:int
    value:int
    evidence:str
    def apply(self,e):
        raw=bytearray(e.to_bytes())
        require(self.offset>=2 and self.offset+self.width<=8,"patch bounds")
        uint(self.mask,self.width*8);uint(self.value,self.width*8)
        require(self.value&~self.mask==0,"patch value outside mask")
        old=int.from_bytes(raw[self.offset:self.offset+self.width],"little")
        raw[self.offset:self.offset+self.width]=((old&~self.mask)|self.value).to_bytes(self.width,"little")
        return ItemEntity.from_bytes(raw)

@dataclass(frozen=True)
class Context:
    # These are observed native predicate outcomes, not inferred from names.
    main_record_valid:bool|None=None
    picture_flag_gate:bool|None=None
    stack_gate:bool|None=None
    action_gate:bool|None=None
    embedded_gate:bool|None=None
    embedded_variant_type:int|None=None
    embedded_body:int|None=None
    embedded_fabric:int|None=None
    recipe_bitmap:bytes|None=None
    field_gene_byte:int|None=None

@dataclass(frozen=True)
class Plan:
    seed:ItemEntity
    patches:tuple
    unresolved:tuple
    references:tuple
    status:str
    def preview(self):
        e=self.seed
        for p in self.patches:e=p.apply(e)
        return e

def recipe_valid(bitmap,recipe_id):
    require(type(recipe_id) is int and 0<=recipe_id<0x800,"recipe index")
    require(isinstance(bitmap,bytes) and len(bitmap)==256,"native validity bitmap must be 256 bytes")
    return bool(bitmap[recipe_id>>3]&(1<<(recipe_id&7)))

def gene_byte(alleles,mapping):
    require(len(alleles)==4 and len(mapping)==3 and all(type(x) is int and 0<=x<3 for x in alleles),"four ternary alleles")
    require(all(type(x) is int and 0<=x<4 for x in mapping) and len(set(mapping))==3,"native lookup table")
    return sum(mapping[a]<<(2*i) for i,a in enumerate(alleles))

class ItemEntityFactory:
    @staticmethod
    def construct_bottle_explicit(item_id, *, system, additional, recipe, category, group, limits, masks, recipe_bitmap):
        """Explicit inputs plus native table/bitmap gates. Not a native default."""
        from SpecialEntityCodec import bottle_entity
        require(recipe_valid(recipe_bitmap,recipe),"recipe validity bit not set")
        return bottle_entity(item_id,system,additional,recipe,category,group,limits,masks)

    @staticmethod
    def construct_container_explicit(item_id, *, system, additional, original_word, child_id, transfer_type, child_valid, body=0, fabric_return=0):
        """Caller supplies validated native predicate and effective child identity."""
        from SpecialEntityCodec import embedded_word
        require(child_valid is True,"native child validity must be supplied")
        require(item_id in (2579,3413,4245,5656,12634,13359,14341),"unverified container family")
        if item_id==2579:
            require(transfer_type==0,"unknown fossil only copies child ID")
        return ItemEntity(item_id,system,additional,embedded_word(original_word,child_id,transfer_type,body,fabric_return))

    @staticmethod
    def money_value(entity, *, price, max_count, stack_gate, kind_index):
        from SpecialEntityCodec import money_amount
        require(kind_index==0x86 and entity.additional_param&3==0,"money identity gate")
        return money_amount(price,entity.low,max_count,stack_gate)

    @staticmethod
    def plan(seed,kind_index,ctx=Context()):
        if seed.entity_type in ("empty","extension"):
            return Plan(seed,(),(),(),"native_f248_early_return_only")
        if seed.additional_param&3:
            return Plan(seed,(),("wrapped_identity_resolution_and_initialization",),(),"blocked_wrapped")
        patches=[];unknown=[];refs=[]
        def gate(v,name):
            if v is None:unknown.append(name)
            return v is True
        if seed.entity_type=="field":
            if seed.item_id in (0xeb7e,0xeb7c,0xeb7d):
                return Plan(seed,(),("field_explicitly_excluded_by_0124C150",),(),"blocked_field_exception")
            if ctx.field_gene_byte is None:unknown.append("field_kind_and_native_heredity_context")
            else:patches.append(Patch(4,1,0xff,uint(ctx.field_gene_byte,8),"0124C150 conditional field gene byte"))
            return Plan(seed,tuple(patches),tuple(unknown),(),"partial_field_model")
        if not gate(ctx.main_record_valid,"main_record_and_cache_lookup"):
            return Plan(seed,(),tuple(unknown+["alternate_field_context_or_noop"]),(),"blocked_context")
        if kind_index in (0xa4,0xa6) and gate(ctx.picture_flag_gate,"picture_flag_predicate_01AFCA60"):
            patches.append(Patch(2,1,8,8,"0277D4AC / 01AFCA60"))
        patches.append(Patch(3,1,0x7f,0,"0277D4AC record-valid additional mask"))
        # F248 kind branches occur BEFORE low-byte stack normalization.
        def embed(target):
            refs.append(target)
            if not gate(ctx.embedded_gate,"embedded_target_validity_and_kind_gate"):return
            typ=ctx.embedded_variant_type
            patches.append(Patch(4,2,0xffff,target,"01B01728 / 01B0B2EC conditional effective child ID"))
            if kind_index==0x71:return
            if typ not in (0,1,2,3,4,5):
                unknown.append("embedded_variant_type_01AFF1FC");return
            if typ in (1,2):
                if ctx.embedded_body is None:unknown.append("embedded_body_after_native_init")
                else:patches.append(Patch(6,2,7,uint(ctx.embedded_body,3),"01B01728 body transfer"))
            if typ in (1,3):
                if ctx.embedded_fabric is None:unknown.append("embedded_fabric_after_native_init")
                else:patches.append(Patch(6,2,0x38,uint(ctx.embedded_fabric,3)<<3,"01B01728 fabric transfer"))
        if kind_index in FIXED_KIND:embed(FIXED_KIND[kind_index])
        if gate(ctx.stack_gate,"01AF0020 stack predicate"):
            patches.append(Patch(4,1,0xff,0,"0277F248 clear low byte only"))
        if gate(ctx.action_gate,"action_enum_12_13_and_CanFtr"):
            patches.append(Patch(6,2,3,2,"01AEA570 high halfword bits0..1"))
        if seed.item_id in FIXED_ID:embed(FIXED_ID[seed.item_id])
        if kind_index==0xb1 and seed.item_id==0x16a2:
            if ctx.recipe_bitmap is None:unknown.append("recipe_validity_bitmap")
            elif recipe_valid(ctx.recipe_bitmap,15):
                patches.append(Patch(4,2,0xffff,15,"01B058C8 valid bit for recipe15"))
        return Plan(seed,tuple(patches),tuple(unknown),tuple(refs),"conditional_model_not_runtime_verified")
