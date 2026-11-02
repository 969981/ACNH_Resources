#!/usr/bin/env python3
"""Read BNTX/BRTI native texture names from ACNH 3.0.3 FtrBabybed *.zs.

Run from a FULL local clone of 969981/ACNH_Resources, branch 3.0.3_Unpack:

  python Scripts/probe_acnh_babybed_textures.py --root .

Copy this file into the repository Scripts/ directory first. It imports the
existing Scripts/acnh_formats.py to parse zstd/Yaz0 and SARC, rather than
reimplementing container handling. It is read-only to all raw ROM inputs.

This is a name/provenance probe, not a PNG renderer. It reads the BNTX NX
texture pointer table and per-texture BRTI name pointers. BFRES material
texture identifiers are a different layer and not proven equal to icon names.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import struct
import sys
from pathlib import Path

NCA = 'e10617820db06889e1638499478da0de_NCA'
BRTI = struct.Struct('<4siq2b3H3I5i6I4i3q')
MAX_SIZE = 256 * 1024 * 1024


def sha256(raw: bytes) -> str:
    return hashlib.sha256(raw).hexdigest()


def parse_bntx(b: bytes) -> list[dict]:
    """Parse *actual BRTI name pointers*, never infer names from file names."""
    if len(b) < 0x50 or b[:4] != b'BNTX':
        raise ValueError('invalid BNTX header')
    if b[0xc:0xe] == b'\xff\xfe':
        endian = '<'
    elif b[0xc:0xe] == b'\xfe\xff':
        endian = '>'
    else:
        raise ValueError('invalid BNTX BOM')
    if b[0x20:0x24] != b'NX  ':
        raise ValueError('BNTX is not Switch NX platform')
    count = struct.unpack_from(endian + 'I', b, 0x24)[0]
    table = struct.unpack_from(endian + 'Q', b, 0x28)[0]
    if not (1 <= count <= 65536) or table + count * 8 > len(b):
        raise ValueError('BNTX texture pointer table bounds failed')
    brti_schema = struct.Struct(endian + '4siq2b3H3I5i6I4i3q')
    out = []
    for index in range(count):
        pos = struct.unpack_from(endian + 'Q', b, table + index * 8)[0]
        if pos + brti_schema.size > len(b):
            raise ValueError(f'BRTI {index}: pointer out of bounds')
        fields = brti_schema.unpack_from(b, pos)
        if fields[0] != b'BRTI':
            raise ValueError(f'BRTI {index}: bad magic at 0x{pos:x}')
        name_ptr = fields[26]
        if name_ptr < 0 or name_ptr + 2 > len(b):
            raise ValueError(f'BRTI {index}: name pointer out of bounds')
        length = struct.unpack_from(endian + 'H', b, name_ptr)[0]
        if length <= 0 or length > 4096 or name_ptr + 2 + length > len(b):
            raise ValueError(f'BRTI {index}: invalid texture name length')
        name = b[name_ptr+2:name_ptr+2+length].decode('utf-8', errors='strict')
        width, height = fields[11], fields[12]
        if width <= 0 or height <= 0 or width > 32768 or height > 32768:
            raise ValueError(f'BRTI {index}: impossible texture dimensions')
        out.append({'index': index, 'name': name, 'width': width, 'height': height,
                    'format_hex': f'0x{fields[9]:08X}', 'mip_count': fields[7],
                    'brti_offset_hex': f'0x{pos:X}',
                    'name_offset_hex': f'0x{name_ptr:X}'})
    return out


def valid_bntx_slices(data: bytes):
    """Locate plausible standalone BNTX sections embedded in BFRES."""
    offset = 0
    seen = set()
    while True:
        off = data.find(b'BNTX', offset)
        if off < 0:
            return
        offset = off + 4
        if off + 0x50 > len(data):
            continue
        if data[off+0x20:off+0x24] != b'NX  ':
            continue
        order = '<' if data[off+0xc:off+0xe] == b'\xff\xfe' else '>' if data[off+0xc:off+0xe] == b'\xfe\xff' else None
        if not order:
            continue
        size = struct.unpack_from(order+'I', data, off+0x1c)[0]
        if not (0x50 <= size <= MAX_SIZE and off + size <= len(data)):
            continue
        if off in seen:
            continue
        seen.add(off)
        yield off, data[off:off+size]


def nested_files(data: bytes, label: str, af, depth: int = 0):
    if depth > 6:
        raise ValueError('max archive recursion')
    kind = af.detect(data)
    if kind in ('zstd', 'yaz0'):
        raw, codec = af.decompress(data, limit=MAX_SIZE)
        yield from nested_files(raw, label + '/' + str(codec), af, depth+1)
    elif kind == 'sarc':
        _meta, members = af.parse_sarc(data)
        for name, content in members:
            if name.startswith('/') or '..' in Path(name).parts:
                raise ValueError('unsafe SARC name: ' + name)
            yield from nested_files(content, label + '/SARC/' + name, af, depth+1)
    else:
        yield label, data


def babybed_sources():
    names = ['FtrBabybed']
    names += [f'FtrBabybedReBody{i}' for i in range(8)]
    names += [f'FtrBabybedReFabric{i}' for i in range(7)]
    return [f'Model/{name}.Nin_NX_NVN.zs' for name in names]


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--root', type=Path, default=Path('.'), help='Full repository clone root')
    ap.add_argument('--out-json', type=Path, default=Path('assets/evidence/babybed_bntx_native.json'))
    ap.add_argument('--out-csv', type=Path, default=Path('assets/catalog/babybed-56-combinations.csv'))
    ap.add_argument('--source', action='append', help='Override source with RomFS-relative path; repeatable')
    args = ap.parse_args()
    root = args.root.resolve()
    sys.path.insert(0, str(root / 'Scripts'))
    try:
        import acnh_formats as af
    except ImportError as e:
        ap.error(f'Cannot import repository Scripts/acnh_formats.py: {e}')
    rom = root / NCA / '1'
    sources = args.source or babybed_sources()
    records = []
    for path in sources:
        rawpath = rom / path
        rec = {'source_path': path, 'status': 'unread', 'bntx': [], 'leaf_types': []}
        records.append(rec)
        if not rawpath.is_file():
            rec['status'] = 'missing_source'
            print(f'[MISSING] {path}')
            continue
        original = rawpath.read_bytes()
        rec['source_sha256'] = sha256(original)
        rec['source_bytes'] = len(original)
        if len(original) > MAX_SIZE:
            rec['status'] = 'oversized'
            continue
        try:
            for leaf_label, leaf_data in nested_files(original, path, af):
                fmt = af.detect(leaf_data)
                rec['leaf_types'].append({'path': leaf_label, 'format': fmt, 'size': len(leaf_data)})
                candidates = [(0, leaf_data)] if leaf_data.startswith(b'BNTX') else list(valid_bntx_slices(leaf_data))
                for embed_offset, bn in candidates:
                    entry = {'member_path': leaf_label, 'embedded_at': f'0x{embed_offset:X}',
                             'bntx_sha256': sha256(bn)}
                    try:
                        entry['textures'] = parse_bntx(bn)
                        entry['status'] = 'native_brti_names_parsed'
                    except (ValueError, UnicodeError, struct.error) as err:
                        entry['status'] = 'parse_error'
                        entry['error'] = str(err)
                    rec['bntx'].append(entry)
            rec['status'] = ('parsed_bntx' if any(x['status']=='native_brti_names_parsed' for x in rec['bntx'])
                             else 'no_verified_bntx_names')
            n = sum(len(x.get('textures',[])) for x in rec['bntx'])
            print(f'[{rec["status"]}] {path}: native BRTI names={n}')
            for bn in rec['bntx']:
                for t in bn.get('textures',[]):
                    print('   ', t['name'], f'{t["width"]}x{t["height"]}',t['format_hex'])
        except Exception as err:
            rec['status'] = 'parse_error'
            rec['error'] = f'{type(err).__name__}: {err}'
            print(f'[ERROR] {path} {rec["error"]}')

    outpath = (root / args.out_json).resolve()
    outpath.parent.mkdir(parents=True, exist_ok=True)
    outpath.write_text(json.dumps({'method': 'BNTX NX pointer table -> BRTI native name pointer',
                                   'sources': records, 'icon_name_warning':
                                   'FtrBabybed_Remake_i_j filenames are NOT native BRTI names unless matched below.'},
                                  ensure_ascii=False, indent=2) + '\n',encoding='utf-8')
    csvpath=(root / args.out_csv).resolve()
    csvpath.parent.mkdir(parents=True,exist_ok=True)
    with csvpath.open('w',encoding='utf-8-sig',newline='') as f:
        w=csv.writer(f)
        w.writerow(['icon_filename','body_variant','fabric_variant','base_source','body_source','fabric_source','evidence'])
        for i in range(8):
            for j in range(7):
                w.writerow([f'FtrBabybed_Remake_{i}_{j}.png',i,j,sources[0],
                            f'Model/FtrBabybedReBody{i}.Nin_NX_NVN.zs',
                            f'Model/FtrBabybedReFabric{j}.Nin_NX_NVN.zs',
                            'naming/combination inference only; NOT pixel-equivalence proof'])
    print('JSON:',outpath,'\nCSV:',csvpath)


if __name__=='__main__':
    main()
