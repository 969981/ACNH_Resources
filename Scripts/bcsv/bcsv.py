"""Read-only ACNH BCSV parser. Unknown values remain raw, never guessed."""
from __future__ import annotations
from dataclasses import dataclass
from pathlib import Path
import hashlib
import struct
import zlib

@dataclass(frozen=True)
class Field:
    hash: int
    offset: int
    width: int
    @property
    def key(self):
        return f"hash_{self.hash:08X}"

class BCSV:
    def __init__(self, data: bytes):
        self.data = data
        if len(data) < 12:
            raise ValueError("truncated BCSV header")
        self.count, self.stride, count = struct.unpack_from("<IIH", data)
        if data[10] not in (0, 1):
            raise ValueError("unknown extended-header flag")
        self.header_size = 28 if data[10] else 12
        if self.header_size == 28 and data[12:16] != b"VSCB":
            raise ValueError("invalid BCSV magic")
        self.start = self.header_size + count * 8
        if not self.stride or not count or self.start > len(data):
            raise ValueError("invalid field table or row length")
        expected = self.start + self.count * self.stride
        if expected != len(data):
            raise ValueError(f"length mismatch: {len(data)} != {expected}")
        desc = [struct.unpack_from("<II", data, self.header_size+i*8) for i in range(count)]
        if len({h for h, _ in desc}) != count:
            raise ValueError("duplicate field hash")
        offsets = [o for _, o in desc]
        if offsets != sorted(set(offsets)) or offsets[-1] >= self.stride:
            raise ValueError("invalid field offsets")
        self.fields = tuple(Field(h,o,(offsets[i+1] if i+1<count else self.stride)-o)
                            for i,(h,o) in enumerate(desc))
        self.by_hash = {f.hash:f for f in self.fields}
    @classmethod
    def read(cls, path: Path):
        return cls(path.read_bytes())
    def raw(self, row: int, field: int | Field):
        if not 0 <= row < self.count:
            raise IndexError(row)
        f = self.by_hash[field if isinstance(field,int) else field.hash]
        p = self.start + row*self.stride + f.offset
        return self.data[p:p+f.width]
    def uint(self, row, field, *, signed=False):
        return int.from_bytes(self.raw(row,field),"little",signed=signed)
    def string(self,row,field):
        return self.raw(row,field).split(b"\0",1)[0].decode("utf-8",errors="strict")
    def metadata(self):
        return {"sha256":hashlib.sha256(self.data).hexdigest(),
                "git_blob_sha1":hashlib.sha1(f"blob {len(self.data)}\0".encode()+self.data).hexdigest(),
                "size":len(self.data),"rows":self.count,"row_length":self.stride,
                "header_size":self.header_size,"data_offset":self.start,
                "header_hex":self.data[:self.header_size].hex(),
                "fields":[{"hash":f.key,"offset":f.offset,"width":f.width} for f in self.fields]}

def crc32(label: str):
    return zlib.crc32(label.encode("utf-8")) & 0xffffffff
