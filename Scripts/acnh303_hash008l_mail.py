"""Read-only, bounded parsers for selected ACNH 3.0.3 formats.

Unknown field semantics are deliberately kept as raw values. No write/pack routines.
Python 3.10+. zstandard is optional but required for .zs inputs.
"""
from __future__ import annotations

import io
import struct
from pathlib import PurePosixPath


class FormatError(ValueError):
    pass


def bounded(data: bytes, offset: int, size: int) -> bytes:
    if offset < 0 or size < 0 or offset + size > len(data):
        raise FormatError(f"out of bounds: offset={offset}, size={size}, len={len(data)}")
    return data[offset:offset + size]


def number(data: bytes, offset: int, size: int, byteorder: str = "little") -> int:
    return int.from_bytes(bounded(data, offset, size), byteorder)


def detect(data: bytes) -> str:
    if data.startswith(b"\x28\xb5\x2f\xfd"):
        return "zstd"
    if data.startswith(b"Yaz0"):
        return "yaz0"
    if data.startswith(b"SARC"):
        return "sarc"
    if data[:2] in (b"YB", b"BY"):
        return "byml"
    if len(data) >= 28 and data[12:16] == b"VSCB":
        return "bcsv"
    if data.startswith(b"MsgStdBn"):
        return "msbt"
    if data.startswith(b"MsgPrjBn"):
        return "msbp"
    if data.startswith(b"BFEVFL"):
        return "bfevfl"
    if data.startswith(b"FRES"):
        return "bfres"
    if data.startswith(b"BNTX"):
        return "bntx"
    if data.startswith(b"FLYT"):
        return "bflyt"
    if data.startswith(b"FLAN"):
        return "bflan"
    if data.startswith(b"PK\x03\x04"):
        return "zip"
    return "unknown"


def decompress(data: bytes, limit: int = 256 * 1024 * 1024) -> tuple[bytes, str]:
    kind = detect(data)
    if kind == "zstd":
        try:
            import zstandard  # type: ignore
        except ImportError as exc:
            raise FormatError("zstandard unavailable: python -m pip install zstandard") from exc
        try:
            with zstandard.ZstdDecompressor().stream_reader(io.BytesIO(data)) as stream:
                output = stream.read(limit + 1)
        except zstandard.ZstdError as exc:
            raise FormatError(f"zstd decompression: {exc}") from exc
        if len(output) > limit:
            raise FormatError("zstd output exceeds expansion limit")
        return output, "zstd"
    if kind == "yaz0":
        size = number(data, 4, 4, "big")
        if size > limit:
            raise FormatError("Yaz0 output exceeds expansion limit")
        result = bytearray()
        at = 16
        mask = 0
        flags = 0
        while len(result) < size:
            if mask == 0:
                flags = number(data, at, 1)
                at += 1
                mask = 0x80
            if flags & mask:
                result.extend(bounded(data, at, 1))
                at += 1
            else:
                a, b = bounded(data, at, 2)
                at += 2
                distance = ((a & 0x0F) << 8) | b
                length = a >> 4
                if length == 0:
                    length = number(data, at, 1) + 0x12
                    at += 1
                else:
                    length += 2
                pos = len(result) - distance - 1
                if pos < 0 or len(result) + length > size:
                    raise FormatError("Yaz0 invalid backreference/length")
                for _ in range(length):
                    result.append(result[pos])
                    pos += 1
            mask >>= 1
        return bytes(result), "yaz0"
    raise FormatError("not a supported compressed stream")


def parse_bcsv(data: bytes, max_rows: int = 1_000_000) -> tuple[dict, list[dict]]:
    if detect(data) != "bcsv":
        raise FormatError("not ACNH VSCB")
    rows = number(data, 0, 4)
    row_size = number(data, 4, 4)
    cols = number(data, 8, 2)
    start = 0x1C + cols * 8
    if rows > max_rows or cols > 4096 or row_size < 4 or row_size > (1 << 20):
        raise FormatError("BCSV dimensions out of range")
    bounded(data, start, rows * row_size)
    fields = []
    for i in range(cols):
        h = number(data, 0x1C + i * 8, 4)
        offset = number(data, 0x20 + i * 8, 4)
        if offset < 4 or offset >= row_size:
            raise FormatError(f"BCSV invalid column offset: {offset}")
        fields.append({"name": f"hash_{h:08X}", "crc32": f"{h:08X}", "offset": offset})
    unique_offsets = sorted(set(f["offset"] for f in fields)) + [row_size]
    for f in fields:
        index = unique_offsets.index(f["offset"])
        f["width_hint"] = unique_offsets[index + 1] - f["offset"]
    records = []
    for i in range(rows):
        row_start = start + i * row_size
        values = {"_row_index": i, "_row_offset_raw": number(data, row_start, 4)}
        for f in fields:
            width = f["width_hint"]
            raw = bounded(data, row_start + f["offset"], width)
            if width in (1, 2, 4, 8):
                # Type is NOT encoded in the file: unsigned raw storage only.
                value: str = str(int.from_bytes(raw, "little"))
            elif raw and b"\x00" in raw:
                head = raw.split(b"\x00", 1)[0]
                try:
                    val = head.decode("utf-8")
                    value = val if val.isprintable() else "hex:" + raw.hex()
                except UnicodeDecodeError:
                    value = "hex:" + raw.hex()
            else:
                value = "hex:" + raw.hex()
            values[f["name"]] = value
        records.append(values)
    meta = {
        "format": "ACNH_BCSV_VSCB", "row_count": rows,
        "row_size": row_size, "column_count": cols,
        "columns": fields,
        "warning": "Column names are CRC32 hashes. Original names and numeric/string types are NOT encoded; widths are inferred.",
    }
    return meta, records


def parse_byml(data: bytes, max_nodes: int = 300_000) -> dict:
    if detect(data) != "byml" or len(data) < 16:
        raise FormatError("invalid BYML")
    order = "little" if data[:2] == b"YB" else "big"
    endian = "<" if order == "little" else ">"
    u32 = lambda p: number(data, p, 4, order)
    version = number(data, 2, 2, order)
    name_root, string_root, doc_root = u32(4), u32(8), u32(12)
    if version > 10 or doc_root == 0:
        raise FormatError("BYML unsupported header")
    def strings(offset: int) -> list[str]:
        if offset == 0:
            return []
        if bounded(data, offset, 1)[0] != 0xC2:
            raise FormatError("BYML invalid string table")
        count = number(data, offset + 1, 3, order)
        if count > max_nodes:
            raise FormatError("BYML oversized string table")
        result = []
        for i in range(count):
            relative = u32(offset + 4 + i * 4)
            start = offset + relative
            bounded(data, start, 1)
            end = data.find(b"\x00", start)
            if end < 0 or end - start > (1 << 20):
                raise FormatError("BYML unterminated/oversize string")
            result.append(data[start:end].decode("utf-8", "replace"))
        return result
    names = strings(name_root)
    values = strings(string_root)
    steps = 0
    def parse_value(kind: int, raw: int, depth: int, trail: frozenset[int]):
        nonlocal steps
        steps += 1
        if steps > max_nodes or depth > 64:
            raise FormatError("BYML recursion/size limit")
        if kind == 0xFF:
            return None
        if kind == 0xA0:
            if raw >= len(values):
                raise FormatError("BYML invalid string index")
            return values[raw]
        if kind == 0xD0:
            return bool(raw)
        if kind == 0xD1:
            return struct.unpack(endian + "i", raw.to_bytes(4, order))[0]
        if kind == 0xD2:
            return struct.unpack(endian + "f", raw.to_bytes(4, order))[0]
        if kind == 0xD3:
            return raw
        if kind in (0xD4, 0xD5, 0xD6):
            fmt = {0xD4: "q", 0xD5: "Q", 0xD6: "d"}[kind]
            return struct.unpack(endian + fmt, bounded(data, raw, 8))[0]
        if kind in (0xA1, 0xA2):
            n = u32(raw)
            p = raw + (8 if kind == 0xA2 else 4)
            if n > 8 * 1024 * 1024:
                raise FormatError("BYML binary data exceeds limit")
            blob = bounded(data, p, n)
            return {"_binary_hex": blob.hex(), **({"_parameter": u32(raw + 4)} if kind == 0xA2 else {})}
        if kind not in (0xC0, 0xC1):
            raise FormatError(f"BYML unsupported node 0x{kind:02X}")
        if raw in trail:
            raise FormatError("BYML cyclic node reference")
        if bounded(data, raw, 1)[0] != kind:
            raise FormatError("BYML node type mismatch")
        count = number(data, raw + 1, 3, order)
        if count > max_nodes:
            raise FormatError("BYML node count exceeds limit")
        seen = trail | {raw}
        if kind == 0xC0:
            base = (raw + 4 + count + 3) & ~3
            types = bounded(data, raw + 4, count)
            bounded(data, base, count * 4)
            return [parse_value(t, u32(base + i * 4), depth + 1, seen) for i, t in enumerate(types)]
        bounded(data, raw + 4, count * 8)
        obj = {}
        for i in range(count):
            pos = raw + 4 + i * 8
            key = number(data, pos, 3, order)
            kind_child = data[pos + 3]
            if key >= len(names):
                raise FormatError("BYML invalid dictionary key index")
            obj[names[key]] = parse_value(kind_child, u32(pos + 4), depth + 1, seen)
        return obj
    root_type = bounded(data, doc_root, 1)[0]
    return {
        "format": "BYML", "version": version, "byteorder": order,
        "root": parse_value(root_type, doc_root, 0, frozenset()),
    }


def safe_member_name(name: str) -> str:
    # Inspect the original components BEFORE PurePosixPath normalizes "." and "//".
    # Otherwise a malicious archive can alias two members to one output path.
    if (not name or "\x00" in name or "\\" in name or name.startswith("/")
            or len(name) > 512 or any(ord(ch) < 32 for ch in name)):
        raise FormatError("unsafe archive name")
    parts = name.split("/")
    if len(parts) > 32 or any(p in ("", ".", "..") for p in parts):
        raise FormatError("unsafe archive path")
    if any(":" in p or p.endswith(" ") or p.endswith(".") for p in parts):
        raise FormatError("nonportable archive path")
    return "/".join(parts)


def parse_sarc(data: bytes, max_members: int = 30_000) -> tuple[list[dict], list[tuple[str, bytes]]]:
    if detect(data) != "sarc" or len(data) < 0x24:
        raise FormatError("not SARC")
    order = "little" if data[6:8] == b"\xff\xfe" else "big" if data[6:8] == b"\xfe\xff" else ""
    if not order:
        raise FormatError("invalid SARC BOM")
    u16 = lambda p: number(data, p, 2, order)
    u32 = lambda p: number(data, p, 4, order)
    header_len = u16(4)
    file_size, data_start = u32(8), u32(12)
    if (header_len < 0x14 or file_size > len(data) or
            file_size < header_len or data_start > file_size):
        raise FormatError("invalid SARC header")
    sfat = header_len
    if bounded(data, sfat, 4) != b"SFAT":
        raise FormatError("SARC missing SFAT")
    count = u16(sfat + 6)
    if count > max_members:
        raise FormatError("too many SARC members")
    node_start = sfat + u16(sfat + 4)
    sfnt = node_start + count * 0x10
    if bounded(data, sfnt, 4) != b"SFNT":
        raise FormatError("SARC missing SFNT")
    name_start = sfnt + u16(sfnt + 4)
    manifest = []
    members = []
    used = set()
    for i in range(count):
        entry = node_start + i * 16
        key, attr, begin, end = (u32(entry + k) for k in (0, 4, 8, 12))
        if begin > end or data_start + end > file_size:
            raise FormatError("invalid SARC member bounds")
        if attr & 0x01000000:
            name_pos = name_start + (attr & 0x00FFFFFF) * 4
            bounded(data, name_pos, 1)
            end_name = data.find(b"\x00", name_pos)
            if end_name < 0 or end_name >= data_start or end_name - name_pos > 512:
                raise FormatError("bad SARC member name")
            name = data[name_pos:end_name].decode("utf-8", "strict")
        else:
            name = f"unnamed_{key:08x}_{i:05d}.bin"
        name = safe_member_name(name)
        if name.casefold() in used:
            raise FormatError("SARC duplicate member path")
        used.add(name.casefold())
        raw = bounded(data, data_start + begin, end - begin)
        manifest.append({"name": name, "hash": f"{key:08x}", "size": len(raw), "detected_format": detect(raw)})
        members.append((name, raw))
    return manifest, members


def parse_msbt(data: bytes) -> dict:
    if detect(data) != "msbt":
        raise FormatError("not MSBT")
    if len(data) < 32:
        raise FormatError("short MSBT")
    order = "little" if data[8:10] == b"\xff\xfe" else "big" if data[8:10] == b"\xfe\xff" else ""
    if not order:
        raise FormatError("invalid MSBT BOM")
    u16 = lambda p: number(data, p, 2, order)
    u32 = lambda p: number(data, p, 4, order)
    encoding = data[12]
    section_count = u16(14)
    if section_count > 64:
        raise FormatError("unreasonable MSBT section count")
    at = 0x20
    labels = {}
    strings = []
    sections = []
    for _ in range(section_count):
        tag = bounded(data, at, 4).decode("ascii", "replace")
        size = u32(at + 4)
        start = at + 16
        section = bounded(data, start, size)
        sections.append({"tag": tag, "size": size})
        if tag == "TXT2":
            n = number(section, 0, 4, order)
            if n > 200_000:
                raise FormatError("MSBT too many strings")
            offsets = [number(section, 4 + i * 4, 4, order) for i in range(n)]
            for i, off in enumerate(offsets):
                end = offsets[i + 1] if i + 1 < n else len(section)
                raw = bounded(section, off, max(0, end - off))
                if encoding == 1:
                    text = raw.decode("utf-16-le" if order == "little" else "utf-16-be", "replace").rstrip("\x00")
                else:
                    text = raw.decode("utf-8", "replace").rstrip("\x00")
                strings.append(text)
        elif tag == "LBL1":
            groups = number(section, 0, 4, order)
            if groups > 100_000:
                raise FormatError("MSBT too many label groups")
            for group in range(groups):
                count = number(section, 4 + group * 8, 4, order)
                off = number(section, 8 + group * 8, 4, order)
                if count > 200_000:
                    raise FormatError("MSBT too many labels")
                for _ in range(count):
                    length = number(section, off, 1)
                    name = bounded(section, off + 1, length).decode("utf-8", "replace")
                    idx = number(section, off + 1 + length, 4, order)
                    labels[idx] = name
                    off += 1 + length + 4
        at = (start + size + 15) & ~15
    return {
        "format": "MSBT", "byteorder": order,
        "text_encoding": "utf16" if encoding == 1 else "utf8",
        "sections": sections,
        "entries": [{"index": i, "label": labels.get(i), "text": s} for i, s in enumerate(strings)],
    }


def inspect_binary(data: bytes) -> dict:
    kind = detect(data)
    if kind == "unknown":
        raise FormatError("unknown binary format")
    return {
        "format": kind, "size": len(data), "magic_hex": data[:16].hex(),
        "status": "structure_only",
        "warning": "Header identification only; no decoded node graph or texture/audio pixels.",
    }



# HASH-008L: original mail resource keys, attachment data, and direct ARM64 edges.
# Parser above copied from 3.0.3_Unpack Scripts/acnh_formats.py, blob d360b8dc0a2c593d7b24524e5c5ec23b1b07aa67.
import argparse, collections, csv, hashlib, json, sqlite3, zlib
from pathlib import Path
from acnh303_hash008e import bcsv, decode, parse_elf, require, gitblob, sx
from acnh303_hash008i import murmur

LOCALES = ("CNzh","TWzh","JPja","USen","EUen","KRko","EUde","EUfr","EUes","EUit","EUnl","EUru","USes","USfr")
ROM = Path("e10617820db06889e1638499478da0de_NCA/1")
TABLES = ("MessageCardSelectPresent","MessageCardSelectPresentSp","MessageCardSelectDesign","MessageCardSelectDesignSp")
SLIDE = 0x100000
EDGES = [(0x027B0354,0x01B8C800),(0x027B1524,0x01B8E020),(0x01B8C800,0x01B8CB50),(0x01B8E020,0x01B8E370),(0x01B8C800,0x00889F80),(0x01B8E020,0x00889F80),(0x01B8C800,0x01A4D6E0),(0x01B8E020,0x01A4D6E0),(0x01B8CB50,0x006BD550),(0x01B8E370,0x006BD550),(0x01B8CB50,0x01B0D390),(0x01B8E370,0x01B0D390)]
def dump(out,name,obj):
    (out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def inputs(root):
    tables={}
    for name,expected in zip(TABLES,(125,19,202,80)):
        b,n,w,c,v,s,width=bcsv(root,name)
        require(n==expected,name+" row count")
        rows=[]
        for i in range(n):
            row={"table":name,"row":i,"text_key":f"{v(i,'37571146',4):08X}","source_blob":gitblob(b)}
            if "Present" in name:
                row.update(category=v(i,"368210C4",4),group=v(i,"128A3D9B",4),handling=v(i,"E060D3CD",2),remake=v(i,"C233727B",1))
            rows.append(row)
        tables[name]=rows
    return tables
def scan_native(root):
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    segs=parse_elf(elf)
    targets={b-SLIDE for a,b in EDGES}
    hits=collections.defaultdict(list)
    for s in segs:
        if not s["flags"]&1:continue
        off=s["file_offset"]; size=s["filesz"]; va=s["vaddr"]
        for j,(w,) in enumerate(struct.iter_unpack("<I",memoryview(elf)[off:off+size-size%4])):
            if w&0xfc000000 not in (0x94000000,0x14000000):continue
            site=va+j*4; dest=site+4*sx(w&0x3ffffff,26)
            if dest in targets:
                require(raw(site,4)==struct.pack("<I",w),"NSO/ELF edge mismatch")
                hits[dest+SLIDE].append({"site_ghidra":f"{site+SLIDE:08X}","site_elf":f"{site:08X}","target_ghidra":f"{dest+SLIDE:08X}","instruction":f"{w:08X}"})
    # Bounded caller windows are not function ownership proofs. Retain all matching
    # callsites; separately identify sites within the first 0x2000 bytes of each anchor.
    return [{"caller_anchor":f"{a:08X}","target":f"{b:08X}","nearby_sites":[x for x in hits[b] if a<=int(x["site_ghidra"],16)<a+0x2000],"all_target_sites":hits[b],"status":"original_instruction_direct_target_not_function_boundary_proof"} for a,b in EDGES]
def run_mail(root,out,with_native):
    out.mkdir(parents=True,exist_ok=True)
    require(murmur(b"None")==0xb6eede09,"Murmur test vector")
    tables=inputs(root)
    cfg=tables[TABLES[0]]+tables[TABLES[1]]
    require(len(cfg)==144 and len({x["text_key"] for x in cfg})==144,"attachment keys")
    wanted={x["text_key"] for rows in tables.values() for x in rows}
    cats=json.loads((root/"research/hash008j/mail_category_dictionary.json").read_text())["categories"]
    b,n,w,c,v,s,width=bcsv(root,"ItemParam")
    require(n==11178 and gitblob(b)=="431bbd26a575197a1bd963c1721b093ae3e4df84","ItemParam identity")
    by_crc={int(x["crc32"],16):x for x in cats}
    hha=[]; zeros=0
    for i in range(n):
        raw=v(i,"70E19913",4); cat=by_crc.get(raw)
        zeros+=raw==0xf4dbdf21
        if cat and cat["index"] in (35,37,38,39,40):
            hha.append({"item_id":v(i,"54706054",2),"category_index":cat["index"],"category_name":cat["name"],"model":s(i,"48EF0398"),"res_name":s(i,"3FEBC642"),"source_row":i})
    require(zeros==2452 and len(hha)==9,"HHA/zero value counts")
    dump(out,"hha_reward_category_items",hha)
    gb,gn,gw,gc,gv,gs,gwidth=bcsv(root,"ItemMailAttachCategoryGroup")
    groups=[{"row":i,"unique_id":gv(i,"54706054",2),"label":gs(i,"3FEBC642"),"murmur_tokens":gs(i,"E4361C86").split("|")} for i in range(gn)]
    dump(out,"group_rows",groups)
    matches=collections.defaultdict(list); inventory=[]; failures=[]
    for locale in LOCALES:
        for family in ("Mail","String"):
            path=root/ROM/"Message"/f"{family}_{locale}.sarc.zs"
            try:
                raw=path.read_bytes(); archive_sha=hashlib.sha256(raw).hexdigest()
                dec,method=decompress(raw,limit=64*1024*1024)
                _,members=parse_sarc(dec)
            except Exception as exc:
                failures.append({"locale":locale,"family":family,"error":str(exc)});continue
            for member,payload in members:
                if not member.lower().endswith(".msbt"):continue
                try:
                    doc=parse_msbt(payload)
                except Exception as exc:
                    failures.append({"locale":locale,"family":family,"member":member,"error":str(exc)});continue
                base=PurePosixPath(member).stem
                relative=member[:-5]
                member_sha=hashlib.sha256(payload).hexdigest()
                inventory.append({"locale":locale,"family":family,"member":member,"entries":len(doc["entries"]),"archive_sha256":archive_sha,"member_sha256":member_sha})
                for entry in doc["entries"]:
                    label=entry["label"]
                    if label is None:continue
                    # Native "%s-%s" formatting observed; member stem/relative and label
                    # are still hypotheses for actual argument producers. Never collapse collisions.
                    forms={"stem-label":base+"-"+label,"relative-label":relative+"-"+label,"stem":base,"label":label}
                    found=collections.defaultdict(set)
                    for rule,value in forms.items():
                        key=f"{murmur(value.encode('utf-8')):08X}"
                        if key in wanted:found[(key,value)].add(rule)
                    for (key,value),rules in found.items():
                        matches[key].append({"locale":locale,"family":family,"member":member,"label":label,"index":entry["index"],"input":value,"rules":sorted(rules),"text":entry["text"],"archive_sha256":archive_sha,"member_sha256":member_sha,"status":"exact_hash_candidate_not_runtime_verified"})
    dump(out,"archive_inventory",inventory);dump(out,"parse_failures",failures)
    dump(out,"key_matches",dict(matches))
    report=[]
    for x in cfg:
        candidates=matches[x["text_key"]]
        mail=[m for m in candidates if m["family"]=="Mail" and "stem-label" in m["rules"]]
        per_locale=collections.Counter(m["locale"] for m in mail)
        report.append(dict(x,category_name=cats[x["category"]]["name"] if 0<=x["category"]<len(cats) else None,
                           group_row_candidate=groups[x["group"]] if x["group"] and x["group"]<len(groups) else None,
                           native_shape_candidate_count=len(mail),unique_locales=sum(per_locale[l]==1 for l in LOCALES),
                           missing_locales=[l for l in LOCALES if not per_locale[l]],ambiguous_locales=[l for l in LOCALES if per_locale[l]>1],
                           reward_item_id=None,send_condition=None,runtime_verified=False))
    dump(out,"mail_reward_config",report)
    with (out/"mail_reward_config.csv").open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(report[0]));w.writeheader();w.writerows(report)
    with sqlite3.connect(out/"mail_rewards.sqlite3") as db:
        db.executescript("""DROP TABLE IF EXISTS config; DROP TABLE IF EXISTS text_candidate;
CREATE TABLE config (source_table TEXT NOT NULL,row_id INTEGER NOT NULL,text_key TEXT NOT NULL UNIQUE,category_index INTEGER,group_index INTEGER,handling INTEGER,remake INTEGER,category_name TEXT,reward_item_id INTEGER,send_condition TEXT,PRIMARY KEY(source_table,row_id));
CREATE TABLE text_candidate(text_key TEXT NOT NULL,locale TEXT NOT NULL,family TEXT NOT NULL,member TEXT NOT NULL,label TEXT NOT NULL,text_index INTEGER NOT NULL,input TEXT NOT NULL,rules TEXT NOT NULL,text TEXT,archive_sha256 TEXT,member_sha256 TEXT);
CREATE INDEX candidate_key_locale ON text_candidate(text_key,locale);""")
        db.executemany("INSERT INTO config VALUES(?,?,?,?,?,?,?,?,?,?)",[(x["table"],x["row"],x["text_key"],x["category"],x["group"],x["handling"],x["remake"],x["category_name"],None,None) for x in report])
        db.executemany("INSERT INTO text_candidate VALUES(?,?,?,?,?,?,?,?,?,?,?)",[(k,m["locale"],m["family"],m["member"],m["label"],m["index"],m["input"],json.dumps(m["rules"]),m["text"],m["archive_sha256"],m["member_sha256"]) for k,ms in matches.items() if k in {x["text_key"] for x in cfg} for m in ms])
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite integrity")
    summary={"attachment_rows":len(cfg),"attachment_unique_keys":len({x["text_key"] for x in cfg}),"attachment_rows_with_any_mail_shape_candidate":sum(x["native_shape_candidate_count"]>0 for x in report),"attachment_rows_unique_all_14_locales":sum(x["unique_locales"]==14 for x in report),"parse_failures":len(failures),"archives_with_msbt":len({(x["locale"],x["family"]) for x in inventory}),"hha_items":len(hha),"zero_value_rows":zeros,"runtime_verified":False}
    dump(out,"summary",summary)
    if with_native:dump(out,"native_direct_edges",scan_native(root))
    print(json.dumps(summary,ensure_ascii=False))
    print("HHA",json.dumps(hha,ensure_ascii=False))
    require(not failures,"source archive or member parse failed; see artifact")
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);p.add_argument("--native",action="store_true");a=p.parse_args();run_mail(a.root.resolve(),a.out.resolve(),a.native)
