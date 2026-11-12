
/* WARNING: Type propagation algorithm not settling */

bool FUN_00976dd0(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *local_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  byte local_48;
  
  if (DAT_04cfae30 == 0) {
    return false;
  }
  lVar3 = *(long *)(DAT_04cfae30 + 0xa8);
  if (lVar3 == 0) {
    return false;
  }
  uVar4 = *(uint *)(param_1 + 8);
  if ((int)uVar4 < 0) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < 0) {
    return false;
  }
  if (*(uint *)(lVar3 + 0x38) <= uVar4 || *(uint *)(lVar3 + 0x3c) <= uVar1) {
    return false;
  }
  uVar4 = uVar4 + *(uint *)(lVar3 + 0x38) * uVar1;
  if (*(uint *)(lVar3 + 0x68) <= uVar4 || *(long *)(lVar3 + 0x70) == 0) {
    return false;
  }
  if ((*(uint *)(*(long *)(lVar3 + 0x70) + (long)(int)uVar4 * 4) >> 4 & 1) == 0) {
    return false;
  }
  local_48 = 0;
  local_50 = PTR_DAT_04bb5ba0 + 0x10;
  FUN_00974bc8(lVar3,param_1,&local_50);
  if ((local_48 >> 4 & 1) == 0) {
    return false;
  }
  local_58 = *(undefined4 *)(param_1 + 8);
  iStack_54 = *(int *)(param_1 + 0xc) + -1;
  local_60 = &DAT_048f9750;
  uVar4 = 0;
  if (DAT_04cfae30 == 0) {
LAB_00976edc:
    bVar2 = (uVar4 & 0x40) == 0;
    iVar5 = 0;
    uVar4 = (uVar4 & 0x40) >> 6;
  }
  else {
    if (*(long *)(DAT_04cfae30 + 0xa8) == 0) {
      uVar4 = 0;
      goto LAB_00976edc;
    }
    local_48 = 0;
    FUN_00974bc8(*(long *)(DAT_04cfae30 + 0xa8),&local_60,&local_50);
    uVar4 = (uint)local_48;
    if ((local_48 >> 5 & 1) == 0) goto LAB_00976edc;
    uVar4 = 0;
    bVar2 = false;
    iVar5 = 1;
  }
  iStack_54 = *(undefined4 *)(param_1 + 0xc);
  local_60 = &DAT_048f9750;
  local_58 = *(int *)(param_1 + 8) + -1;
  if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
LAB_00976f2c:
    if (bVar2) {
      return false;
    }
    bVar2 = true;
  }
  else {
    local_48 = 0;
    FUN_00974bc8(*(long *)(DAT_04cfae30 + 0xa8),&local_60,&local_50);
    if ((local_48 >> 5 & 1) == 0) {
      if ((local_48 >> 6 & 1) == 0) goto LAB_00976f2c;
      uVar4 = uVar4 + 1;
    }
    else {
      iVar5 = iVar5 + 1;
    }
  }
  local_58 = *(undefined4 *)(param_1 + 8);
  local_60 = &DAT_048f9750;
  iStack_54 = *(int *)(param_1 + 0xc) + 1;
  if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
LAB_00976f84:
    if (bVar2) {
      return false;
    }
    bVar2 = true;
  }
  else {
    local_48 = 0;
    FUN_00974bc8(*(long *)(DAT_04cfae30 + 0xa8),&local_60,&local_50);
    if ((local_48 >> 5 & 1) == 0) {
      if ((local_48 >> 6 & 1) == 0) goto LAB_00976f84;
      uVar4 = uVar4 + 1;
    }
    else {
      iVar5 = iVar5 + 1;
    }
  }
  iStack_54 = *(undefined4 *)(param_1 + 0xc);
  local_60 = &DAT_048f9750;
  local_58 = *(int *)(param_1 + 8) + 1;
  if ((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) {
    local_48 = 0;
    FUN_00974bc8(*(long *)(DAT_04cfae30 + 0xa8),&local_60,&local_50);
    if ((local_48 >> 5 & 1) != 0) {
      iVar5 = iVar5 + 1;
      goto LAB_0097700c;
    }
    if ((local_48 >> 6 & 1) != 0) {
      uVar4 = uVar4 + 1;
      goto LAB_0097700c;
    }
  }
  if (bVar2) {
    return false;
  }
LAB_0097700c:
  return iVar5 == 3 || uVar4 == 3;
}

