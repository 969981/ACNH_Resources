
void FUN_027dd450(long param_1)

{
  byte *__s;
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  bool bVar5;
  long lVar6;
  bool bVar7;
  
  __s = (byte *)(param_1 + 0xf8d00);
  pbVar1 = (byte *)(param_1 + 0xe5ad0);
  pbVar2 = (byte *)(param_1 + 0xbf670);
  uVar3 = (ulong)*pbVar2;
  if (((0x22 < uVar3) || ((byte)PTR_DAT_04bc27f0[uVar3] < *(byte *)(param_1 + 0xbf671))) ||
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)(param_1 + 0xbf671) & 0x1f) & 1) == 0)) {
    uVar3 = (ulong)*(byte *)(param_1 + 0xd28a0);
    if (((uVar3 < 0x23) && (*(byte *)(param_1 + 0xd28a1) <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
       (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)(param_1 + 0xd28a1) & 0x1f) & 1) != 0)) {
      bVar7 = false;
      bVar5 = false;
      lVar6 = 1;
    }
    else {
      uVar3 = (ulong)*pbVar1;
      if (((uVar3 < 0x23) && (*(byte *)(param_1 + 0xe5ad1) <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
         (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)(param_1 + 0xe5ad1) & 0x1f) & 1) != 0))
      {
        bVar7 = false;
        bVar5 = true;
        lVar6 = 2;
      }
      else {
        uVar3 = (ulong)*__s;
        if (0x22 < uVar3) {
          return;
        }
        if ((byte)PTR_DAT_04bc27f0[uVar3] < *(byte *)(param_1 + 0xf8d01)) {
          return;
        }
        if (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)(param_1 + 0xf8d01) & 0x1f) & 1) == 0)
        {
          return;
        }
        bVar5 = false;
        bVar7 = true;
        lVar6 = 3;
      }
    }
    pbVar4 = pbVar2 + lVar6 * 0x13230;
    FUN_026b1890(pbVar2,pbVar4);
    memset(pbVar4,0,0x13230);
    FUN_0268abb0(pbVar4);
    if (!bVar7) {
      pbVar4 = pbVar2 + lVar6 * 0x13230 + 0x13230;
      FUN_026b1890(param_1 + 0xd28a0,pbVar4);
      memset(pbVar4,0,0x13230);
      FUN_0268abb0(pbVar4);
      if (!bVar5) {
        pbVar4 = pbVar2 + (lVar6 + 2) * 0x13230;
        FUN_026b1890(param_1 + 0xe5ad0,pbVar4);
        memset(pbVar4,0,0x13230);
        FUN_0268abb0(pbVar4);
      }
    }
  }
  uVar3 = (ulong)*(byte *)(param_1 + 0xd28a0);
  if (((0x22 < uVar3) || ((byte)PTR_DAT_04bc27f0[uVar3] < *(byte *)(param_1 + 0xd28a1))) ||
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)(param_1 + 0xd28a1) & 0x1f) & 1) == 0)) {
    uVar3 = (ulong)*pbVar1;
    if (((uVar3 < 0x23) && (*(byte *)(param_1 + 0xe5ad1) <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
       (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)(param_1 + 0xe5ad1) & 0x1f) & 1) != 0)) {
      bVar5 = false;
      lVar6 = 2;
    }
    else {
      uVar3 = (ulong)*__s;
      if (0x22 < uVar3) {
        return;
      }
      if ((byte)PTR_DAT_04bc27f0[uVar3] < *(byte *)(param_1 + 0xf8d01)) {
        return;
      }
      if (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)(param_1 + 0xf8d01) & 0x1f) & 1) == 0) {
        return;
      }
      bVar5 = true;
      lVar6 = 3;
    }
    pbVar4 = pbVar2 + lVar6 * 0x13230;
    FUN_026b1890(param_1 + 0xd28a0,pbVar4);
    memset(pbVar4,0,0x13230);
    FUN_0268abb0(pbVar4);
    if (!bVar5) {
      pbVar2 = pbVar2 + lVar6 * 0x13230 + 0x13230;
      FUN_026b1890(param_1 + 0xe5ad0,pbVar2);
      memset(pbVar2,0,0x13230);
      FUN_0268abb0(pbVar2);
    }
  }
  uVar3 = (ulong)*pbVar1;
  if ((((uVar3 < 0x23) && (*(byte *)(param_1 + 0xe5ad1) <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
      (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)(param_1 + 0xe5ad1) & 0x1f) & 1) != 0)) ||
     (((uVar3 = (ulong)*__s, 0x22 < uVar3 ||
       ((byte)PTR_DAT_04bc27f0[uVar3] < *(byte *)(param_1 + 0xf8d01))) ||
      (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)(param_1 + 0xf8d01) & 0x1f) & 1) == 0)))) {
    return;
  }
  FUN_026b1890(pbVar1,__s);
  memset(__s,0,0x13230);
  FUN_0268abb0(__s);
  return;
}

