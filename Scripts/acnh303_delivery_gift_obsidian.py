#!/usr/bin/env python3
"""Read-only authenticated instruction graph and Obsidian export; no runtime calls."""
import argparse, hashlib, json
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM
import acnh303_r100_nso_decode as dec
from acnh303_round11_elf_xref import parse_elf, get_bytes_va

BASE = 0x100000
# Ghidra VA, bounded reachability budget (not claimed function size).
ENTRIES = {
    0x01d3e72c: ("Online state registration", 0x500),
    0x01d3fc60: ("Online global static init", 0x3000),
    0x0266a0c0: ("Item and index association predicate", 0x300),
    0x02672e00: ("Pocket capacity reader", 0x400),
    0x02677ea0: ("Pocket logical slot reader", 0x400),
    0x03195e80: ("PocketMenu forty-slot filter mask", 0x400),
    0x03201990: ("SelectCursor runtime consumer", 0x300),
    0x03190d10: ("PocketMenu hint consumer", 0x3000),
    0x030ded60: ("UI hint string copy", 0x300),
    0x030deeec: ("UI KeyIcon resource update", 0x1000),
    0x03387478: ("UI component owner initialization", 0x2000),
    0x03387e08: ("PocketMenu allocation", 0x200),
    0x03387c94: ("SelectCursor allocation", 0x200),
    0x03200224: ("SelectCursor constructor", 0x1000),
    0x031867b0: ("PocketMenu constructor", 0x1000),
    0x03454a44: ("Placement state registration", 0x2000),
    0x03456b90: ("Idle record cleanup", 0x200),
    0x03457054: ("PutUnitIcon callback interior anchor", 0x800),
    0x03457060: ("PutUnitIcon callback interior anchor", 0x800),
    0x03457250: ("Interior PutUnitIcon callback interior anchor", 0x800),
    0x03457260: ("Interior PutUnitIcon callback interior anchor", 0x800),
    0x03ebac90: ("State table allocation", 0x800),
    0x03ebaf40: ("State name registration", 0x800),
    0x026776a0: ("Inventory slot consumption", 0x300),
    0x02703140: ("Mode3 owner", 0x4000),
    0x02704f78: ("Mode3 publication interior anchor", 0x800),
    0x02705178: ("Mode3 cleanup interior anchor", 0x800),
    0x0272b55c: ("Mode3 destructor candidate", 0x800),
    0x0272b60c: ("Mode3 member release", 0x1000),
    0x026eec4c: ("Player accessor", 0x1000),
    0x026eed64: ("Ordinary player accessor", 0x1000),
    0x026759e0: ("Inventory logical reader", 0x1000),
    0x02674a80: ("Inventory mutation consumer", 0x1000),
    0x027fa2dc: ("Inventory partition consumer", 0x1000),
    0x0277d6c4: ("Item catalog ID consumer", 0x800),
    0x007e2520: ("Pocket capacity consumer", 0x3000),
    0x01b01270: ("Item metadata consumer", 0x1000),
    0x0098a6b0: ("Actor registry publication interior anchor", 0x800),
    0x00938c5c: ("Actor registration interior anchor", 0x800),
    0x00938dc0: ("Actor removal interior anchor", 0x800),
    0x00df4500: ("Gift virtual dispatch interior anchor", 0x20),
    0x01120120: ("Gift window constructor candidate", 0x4000),
    0x01ae6420: ("BCF5D17A bitmap reader", 0x1000),
    0x00efa550: ("Extra gift predicate candidate", 0x2000),
    0x01b07660: ("Ordinary gift predicate candidate", 0x2000),
    0x01b081a0: ("Birthday gift predicate candidate", 0x2000),
    0x01b03610: ("Package subtype", 0x400),
    0x01b079ec: ("Package instance normalization", 0x2000),
    0x01ae0cf0: ("Style 1 reader", 0x800),
    0x01ae0c40: ("Style 2 reader", 0x800),
    0x01a778e4: ("Style 2 interior anchor", 0x200),
    0x01acb930: ("Tag registration candidate", 0x2000),
}
def annotation(i, target):
    m=i.mnemonic
    if m.startswith(("ldr","ldp","ldur")): return "读取寄存器/内存；字段语义需结合对象来源"
    if m.startswith(("str","stp","stur")): return "写入内存；记录宽度和基址，尚不等于业务字段名"
    if m=="bl": return f"直接调用 Ghidra VA 0x{target+BASE:08X}" if target is not None else "直接调用目标未知"
    if m in ("blr","br"): return "间接控制转移；实际目标未由此指令证明"
    if m=="ret": return "返回调用者"
    if m=="b" or m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"): return "控制流分支；条件语义待数据流确认"
    if m in ("adr","adrp"): return "形成 PC 相对地址；须追踪后续消费者"
    if m in ("cmp","cmn","tst"): return "比较/测试并更新条件标志"
    if m in ("add","sub","adds","subs","mov","movk","movz","and","orr","eor","lsl","lsr","asr","ubfx","sxtw","uxtw","csel"): return "寄存器计算/选择："+i.op_str
    return "指令原样保留；人工业务注释待补"
def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    es=parse_elf(elf); code_start,code=mapped[0]; code_end=code_start+len(code)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM); cs.detail=True
    entries=dict(ENTRIES)
    rr=rel.get(0x0495b730-BASE+0x60,{})
    t=rr.get("addend")
    if rr.get("type") in ("RELR",1027) and rr.get("symbol")==0 and isinstance(t,int) and code_start<=t<code_end:
        entries.setdefault(t+BASE,("Gift slot +0x60 relocation target",0x5000))
    out.mkdir(parents=True,exist_ok=True)
    graphdir=out/"Functions"; graphdir.mkdir(exist_ok=True)
    manifest={"elf_sha256":hashlib.sha256(elf).hexdigest(),"nso_sha256":hashlib.sha256(nso).hexdigest(),"nso_build_id":nso[0x40:0x60].hex(),"ghidra_base":hex(BASE),"runtime_verified":False,"functions":[]}
    # Determine ELF address mapping using its load segments; never silently accept byte differences.
    elfbase=min(s["vaddr"] for s in es)&~0xfff
    for gh,(role,budget) in sorted(entries.items()):
        entry=gh-BASE; todo=[entry]; rows={}; gaps=[]; calls=[]; edges=[]
        while todo:
            a=todo.pop()
            if a in rows: continue
            if a%4 or not code_start<=a<code_end or not entry<=a<entry+budget:
                gaps.append({"rva":hex(a),"reason":"outside_bound"});continue
            b=raw(a,4); eb=get_bytes_va(elf,es,a+elfbase,4)
            if eb!=b:
                gaps.append({"rva":hex(a),"reason":"elf_nso_byte_mismatch_or_unmapped","nso":b.hex(),"elf":eb.hex() if eb else None});continue
            v=list(cs.disasm(b,a))
            if len(v)!=1: gaps.append({"rva":hex(a),"reason":"decode"});continue
            i=v[0];m=i.mnemonic; o=i.operands
            target=o[-1].imm if o and o[-1].type==ARM64_OP_IMM else None
            rows[a]={"rva":hex(a),"va":hex(a+BASE),"bytes":b.hex(),"instruction":m+" "+i.op_str,"annotation":annotation(i,target)}
            if m=="ret": succ=[]
            elif m=="br": succ=[];gaps.append({"rva":hex(a),"reason":"indirect_branch"})
            elif m=="b": succ=[target]
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[a+4,target]
            else:
                succ=[a+4]
                if m in ("bl","blr"):calls.append({"site":hex(a+BASE),"target":hex(target+BASE) if m=="bl" and target is not None else None})
            for s in succ:
                if s is not None:edges.append([hex(a+BASE),hex(s+BASE)]);todo.append(s)
        key=f"FUN_{gh:08X}"; p=graphdir/(key+".md")
        src=root/"derived/3.0.3/ghidra12.2/c"/f"{(gh>>8)&255:02x}"/f"{gh:08x}.c"
        lines=["---",f"title: {key}","runtime_verified: false","---",f"# {key} — {role}","","[[../README|函数索引]]",f"入口/锚点 Ghidra VA: 0x{gh:08X}；RVA: 0x{entry:08X}。","仅列 ELF 与 NSO 相同的可达指令；预算边界、间接分支和非入口锚点不能视为完整函数。","", "## 逐指令证据","","|Ghidra VA|Main RVA|原始字节|指令|注释|","|---|---|---|---|---|"]
        for a in sorted(rows):
            r=rows[a];lines.append("|"+"|".join(str(r[k]).replace("|","\\|") for k in ("va","rva","bytes","instruction","annotation"))+"|")
        lines+=["","## 调用与跳转"]
        for c in calls:
            t=int(c["target"],16) if c["target"] else None
            lines.append(f'- {c["site"]} → '+(f"[[FUN_{t:08X}]]" if t in entries else str(c["target"] or "未解析间接调用")))
        lines+=["","## CFG 缺口","\x60\x60\x60json",json.dumps(gaps,ensure_ascii=False,indent=2),"\x60\x60\x60"]
        if src.is_file():lines+=["","## Ghidra C 导出（非原始源码）","\x60\x60\x60c",src.read_text("utf-8",errors="replace"),"\x60\x60\x60"]
        p.write_text("\n".join(lines)+"\n",encoding="utf-8")
        (graphdir/(key+".json")).write_text(json.dumps({"rows":[rows[a] for a in sorted(rows)],"edges":edges,"calls":calls,"gaps":gaps},ensure_ascii=False,indent=2),encoding="utf-8")
        manifest["functions"].append({"key":key,"role":role,"rows":len(rows),"gaps":len(gaps),"entry_is_interior_anchor":"interior anchor" in role})
    (out/"manifest.json").write_text(json.dumps(manifest,ensure_ascii=False,indent=2),encoding="utf-8")
    (out/"README.md").write_text("# ACNH 3.0.3 authenticated instruction index\n\n"+"\n".join(f'- [[Functions/{r["key"]}]] — {r["role"]}：{r["rows"]} instructions, {r["gaps"]} gaps' for r in manifest["functions"])+"\n",encoding="utf-8")
    if any(r["rows"]==0 for r in manifest["functions"]): raise SystemExit("one or more anchors lack byte-matched evidence; inspect artifact")
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();main(a.root.resolve(),a.out.resolve())
