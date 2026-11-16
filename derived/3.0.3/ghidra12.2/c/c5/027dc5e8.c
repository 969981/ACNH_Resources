
uint FUN_027dc5e8(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  
  pbVar1 = (byte *)(param_1 + 0xd28a0);
  pbVar2 = (byte *)(param_1 + 0xbf670);
  uVar4 = (ulong)*pbVar2;
  if ((((uVar4 < 0x23) && (*(byte *)(param_1 + 0xbf671) <= (byte)PTR_DAT_04bc27f0[uVar4])) &&
      (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(*(byte *)(param_1 + 0xbf671) & 0x1f) & 1) != 0)) &&
     (*(char *)(param_1 + 0xd1ce8) == '\x03')) {
    uVar4 = (ulong)*pbVar1;
    if (((uVar4 < 0x23) && (*(byte *)(param_1 + 0xd28a1) <= (byte)PTR_DAT_04bc27f0[uVar4])) &&
       ((((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(*(byte *)(param_1 + 0xd28a1) & 0x1f) & 1) != 0 &&
        (*(char *)(param_1 + 0xe4f18) == '\x03')))) {
      uVar4 = (ulong)*(byte *)(param_1 + 0xe5ad0);
      if (((uVar4 < 0x23) && (*(byte *)(param_1 + 0xe5ad1) <= (byte)PTR_DAT_04bc27f0[uVar4])) &&
         ((((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(*(byte *)(param_1 + 0xe5ad1) & 0x1f) & 1) != 0
          && (*(char *)(param_1 + 0xf8148) == '\x03')))) {
        uVar4 = (ulong)*(byte *)(param_1 + 0xf8d00);
        if (((0x22 < uVar4) || ((byte)PTR_DAT_04bc27f0[uVar4] < *(byte *)(param_1 + 0xf8d01))) ||
           (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(*(byte *)(param_1 + 0xf8d01) & 0x1f) & 1) == 0)
           ) {
          return 3;
        }
        uVar3 = 3;
        if (*(char *)(param_1 + 0x10b378) == '\x03') {
          uVar3 = 0xffffffff;
        }
        return uVar3;
      }
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar4 = (ulong)*(byte *)(param_1 + 0xe5ad0);
  if (((uVar4 < 0x23) && (*(byte *)(param_1 + 0xe5ad1) <= (byte)PTR_DAT_04bc27f0[uVar4])) &&
     (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(*(byte *)(param_1 + 0xe5ad1) & 0x1f) & 1) != 0)) {
    FUN_026b1890(param_1 + 0xf8d00);
  }
  if (uVar3 < 2) {
    uVar4 = (ulong)*pbVar1;
    if (((uVar4 < 0x23) && (*(byte *)(param_1 + 0xd28a1) <= (byte)PTR_DAT_04bc27f0[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(*(byte *)(param_1 + 0xd28a1) & 0x1f) & 1) != 0)) {
      FUN_026b1890(param_1 + 0xe5ad0,pbVar1);
    }
    if ((((uVar3 == 0) && (uVar4 = (ulong)*pbVar2, uVar4 < 0x23)) &&
        (*(byte *)(param_1 + 0xbf671) <= (byte)PTR_DAT_04bc27f0[uVar4])) &&
       (((uint)(&DAT_053e6eb8)[uVar4] >> (ulong)(*(byte *)(param_1 + 0xbf671) & 0x1f) & 1) != 0)) {
      FUN_026b1890(param_1 + 0xd28a0,pbVar2);
    }
  }
  return uVar3;
}

