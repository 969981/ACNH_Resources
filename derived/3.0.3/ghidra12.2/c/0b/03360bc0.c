
void FUN_03360bc0(long param_1,ulong param_2)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  int *piVar11;
  long lVar12;
  ulong local_58 [4];
  undefined4 local_38;
  
  lVar6 = *(long *)(param_1 + 0xdf8);
  if (lVar6 == 0) {
    return;
  }
  iVar4 = 0;
  if (*(char *)(lVar6 + 0x25d) != '\0') {
    iVar4 = *(int *)(lVar6 + 4);
  }
  if (*(int *)(param_1 + 0x1764) != iVar4) {
    return;
  }
  uVar8 = *(uint *)(param_1 + 0x1768);
  if ((int)uVar8 < 1) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x5d8);
  piVar1 = (int *)(param_1 + 0xe00);
  uVar9 = 0;
  piVar11 = piVar1;
  do {
    piVar2 = piVar11;
    if (299 < uVar9) {
      piVar2 = piVar1;
    }
    if (iVar4 < *piVar2) goto LAB_03360c48;
    uVar9 = uVar9 + 1;
    piVar11 = piVar11 + 1;
  } while (uVar8 != uVar9);
  uVar9 = (ulong)uVar8;
LAB_03360c48:
  uVar8 = (uint)uVar9;
  if ((int)uVar8 < 1) {
    return;
  }
  piVar11 = piVar1 + (uVar8 - 1);
  if (300 < uVar8) {
    piVar11 = piVar1;
  }
  plVar3 = (long *)(param_1 + 0x300) + (uint)(iVar4 - *piVar11);
  if (0x12 < (uint)(iVar4 - *piVar11)) {
    plVar3 = (long *)(param_1 + 0x300);
  }
  if (*plVar3 == 0) {
    return;
  }
  bVar7 = 0;
  lVar6 = 0x300;
  do {
    if (*(long *)(*(long *)(param_1 + lVar6) + 0x428) ==
        *(long *)(*(long *)(*(long *)(param_1 + 0x3a8) + 0x18) + 0x18)) {
      lVar12 = *(long *)(*(long *)(param_1 + lVar6) + 0x420);
      bVar10 = 0;
      if (lVar12 != 0) {
        local_58[0] = local_58[0] & 0xffffffff00000000;
        bVar10 = *(byte *)(lVar12 + 0x148) & 1;
      }
      bVar7 = bVar10 | bVar7;
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x398);
  if (bVar7 == 0) {
    FUN_033600f0(param_1,1);
    local_58[0] = CONCAT44(local_58[0]._4_4_,1);
    if ((*(byte *)(DAT_0572ba48 + 0xd4) >> 1 & 1) == 0) {
      local_38 = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[1] = 0;
      local_58[0] = 0x8000000000000;
      if (*(long *)(DAT_0572ba48 + 0xb8) != 0) {
        FUN_032ae69c(*(long *)(DAT_0572ba48 + 0xb8),local_58);
      }
    }
  }
  else {
    if ((param_2 & 1) == 0) {
      *(int *)(param_1 + 0x5d8) = iVar4 + -1;
      if (0 < iVar4) goto LAB_03360d64;
      iVar5 = *(int *)(param_1 + 0x1760) + -1;
    }
    else {
      iVar5 = 0;
      if (iVar4 + 1 < *(int *)(param_1 + 0x1760)) {
        iVar5 = iVar4 + 1;
      }
    }
    *(int *)(param_1 + 0x5d8) = iVar5;
  }
LAB_03360d64:
  FUN_033600f0(param_1,1);
  if ((*(byte *)(DAT_0572ba48 + 0xd4) >> 1 & 1) == 0) {
    uVar8 = 0x80000;
    if ((param_2 & 1) == 0) {
      uVar8 = 0x40000;
    }
    local_38 = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[1] = 0;
    local_58[0] = (ulong)uVar8 << 0x20;
    if (*(long *)(DAT_0572ba48 + 0xb8) != 0) {
      FUN_032ae69c(*(long *)(DAT_0572ba48 + 0xb8),local_58);
    }
  }
  return;
}

