
ulong FUN_03c35ec0(long param_1,ulong param_2,undefined8 *param_3,int *param_4,int *param_5,
                  byte *param_6,ulong param_7)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_364 [260];
  undefined1 auStack_260 [512];
  undefined4 local_48;
  uint local_44;
  
  if (param_7 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar10 = (ulong)*param_6;
  if ((char)*param_6 < '\0') {
    uVar4 = uVar10 - 0x7e >> 1;
    if (param_7 <= uVar4) {
      return 0xffffffffffffffb8;
    }
    uVar5 = uVar10 - 0x7f;
    if (param_2 <= uVar5) {
      return 0xffffffffffffffec;
    }
    if (uVar5 == 0) {
      *(undefined4 *)(param_3 + 6) = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      return 0xffffffffffffffec;
    }
    lVar9 = 0;
    do {
      param_6 = param_6 + 1;
      pbVar2 = (byte *)(param_1 + lVar9);
      lVar9 = lVar9 + 2;
      *pbVar2 = *param_6 >> 4;
      pbVar2[1] = *param_6 & 0xf;
    } while ((uint)lVar9 < (uint)uVar5);
  }
  else {
    if (param_7 <= uVar10) {
      return 0xffffffffffffffb8;
    }
    local_48 = 0xff;
    uVar4 = FUN_03c35b90(auStack_260,&local_48,&local_44,param_6 + 1,uVar10);
    if (0xffffffffffffff88 < uVar4) {
      return uVar4;
    }
    if (6 < local_44) {
      return 0xffffffffffffffd4;
    }
    uVar5 = FUN_03c36120(auStack_364,auStack_260,local_48);
    if (0xffffffffffffff88 < uVar5) {
      return uVar5;
    }
    uVar5 = FUN_03c362a0(param_1,param_2 - 1,param_6 + 1 + uVar4,uVar10 - uVar4,auStack_364);
    uVar4 = uVar10;
    if (0xffffffffffffff88 < uVar5) {
      return uVar5;
    }
  }
  *(undefined4 *)(param_3 + 6) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  if (uVar5 != 0) {
    iVar6 = 0;
    uVar10 = 0;
    uVar8 = 1;
    do {
      if (0xb < (ulong)*(byte *)(param_1 + uVar10)) {
        return 0xffffffffffffffec;
      }
      lVar9 = (ulong)*(byte *)(param_1 + uVar10) * 4;
      *(int *)((long)param_3 + lVar9) = *(int *)((long)param_3 + lVar9) + 1;
      iVar6 = iVar6 + ((1 << (ulong)(*(byte *)(param_1 + uVar10) & 0x1f)) >> 1);
      bVar1 = uVar8 < uVar5;
      uVar10 = uVar8;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (bVar1);
    if (0xfffff000 < iVar6 - 0x1000U) {
      *param_5 = 0x20 - (int)LZCOUNT(iVar6);
      uVar3 = (1 << (ulong)(-(int)LZCOUNT(iVar6) & 0x1f)) - iVar6;
      uVar7 = (uint)LZCOUNT(uVar3);
      if (0x80000000U >> (ulong)(uVar7 & 0x1f) == uVar3) {
        uVar7 = 0x20 - uVar7;
        *(char *)(param_1 + uVar5) = (char)uVar7;
        lVar9 = (ulong)uVar7 * 4;
        *(int *)((long)param_3 + lVar9) = *(int *)((long)param_3 + lVar9) + 1;
        if (*(uint *)((long)param_3 + 4) < 2) {
          return 0xffffffffffffffec;
        }
        if ((*(uint *)((long)param_3 + 4) & 1) == 0) {
          *param_4 = (int)uVar5 + 1;
          return uVar4 + 1;
        }
        return 0xffffffffffffffec;
      }
    }
  }
  return 0xffffffffffffffec;
}

