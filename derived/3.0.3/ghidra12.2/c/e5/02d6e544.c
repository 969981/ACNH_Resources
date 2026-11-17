
void FUN_02d6e544(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar7 = PTR_DAT_04bc4d98;
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x14);
  if (-1 < iVar9) {
    if (iVar9 < *(int *)(param_2 + 0x3d4)) {
      iVar4 = *(int *)(param_2 + 0x2e8);
      iVar6 = 0;
      if (iVar4 != 0) {
        iVar6 = iVar9 / iVar4;
      }
      iVar11 = *(int *)(param_2 + 0x430) - *(int *)(param_2 + 0x438);
      if ((*(byte *)(param_2 + 1000) >> 1 & 1) != 0) {
        uVar5 = *(uint *)(param_2 + 0x434);
        uVar2 = 0;
        if ((int)uVar5 < iVar11) {
          uVar2 = ~uVar5;
        }
        if (iVar11 < 0) {
          uVar2 = uVar5 + 1;
        }
        iVar11 = uVar2 + iVar11;
      }
      uVar2 = (iVar9 - iVar6 * iVar4) + (iVar6 - iVar11) * iVar4;
      uVar5 = *(uint *)(param_2 + 0x208);
      bVar8 = (int)uVar2 < 0;
      bVar1 = (int)uVar5 <= (int)uVar2;
      if (bVar8 || bVar1) {
        uVar2 = 0xffffffff;
      }
      if ((((bVar8 || bVar1) || (int)uVar5 <= (int)uVar2) || uVar5 < uVar2) ||
          ((!bVar8 && !bVar1) && (int)uVar2 < (int)uVar5) && uVar5 == uVar2) goto LAB_02d6e5f0;
      puVar12 = *(undefined8 **)(*(long *)(param_2 + 0x210) + (ulong)uVar2 * 8);
      bVar3 = *PTR_DAT_04bc4d98;
    }
    else {
LAB_02d6e5f0:
      puVar12 = (undefined8 *)0x0;
      bVar3 = *PTR_DAT_04bc4d98;
    }
    if (((bVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if ((puVar12 != (undefined8 *)0x0) &&
       (uVar10 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4d90), (uVar10 & 1) != 0)) {
      FUN_030bffe0(puVar12,1);
    }
  }
  iVar9 = *(int *)(param_1 + 0x18);
  if (iVar9 < 0) {
    return;
  }
  if (iVar9 < *(int *)(param_2 + 0x3d4)) {
    iVar4 = *(int *)(param_2 + 0x2e8);
    iVar6 = 0;
    if (iVar4 != 0) {
      iVar6 = iVar9 / iVar4;
    }
    iVar11 = *(int *)(param_2 + 0x430) - *(int *)(param_2 + 0x438);
    if ((*(byte *)(param_2 + 1000) >> 1 & 1) != 0) {
      uVar5 = *(uint *)(param_2 + 0x434);
      uVar2 = 0;
      if ((int)uVar5 < iVar11) {
        uVar2 = ~uVar5;
      }
      if (iVar11 < 0) {
        uVar2 = uVar5 + 1;
      }
      iVar11 = uVar2 + iVar11;
    }
    uVar2 = (iVar9 - iVar6 * iVar4) + (iVar6 - iVar11) * iVar4;
    uVar5 = *(uint *)(param_2 + 0x208);
    bVar8 = (int)uVar2 < 0;
    bVar1 = (int)uVar5 <= (int)uVar2;
    if (bVar8 || bVar1) {
      uVar2 = 0xffffffff;
    }
    if ((((!bVar8 && !bVar1) && (int)uVar2 < (int)uVar5) && uVar2 <= uVar5) &&
        (((bVar8 || bVar1) || (int)uVar5 <= (int)uVar2) || uVar5 != uVar2)) {
      puVar12 = *(undefined8 **)(*(long *)(param_2 + 0x210) + (ulong)uVar2 * 8);
      bVar3 = *puVar7;
      goto joined_r0x02d6e6c4;
    }
  }
  puVar12 = (undefined8 *)0x0;
  bVar3 = *puVar7;
joined_r0x02d6e6c4:
  if (((bVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar9 != 0)) {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if ((puVar12 == (undefined8 *)0x0) ||
     (uVar10 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4d90), (uVar10 & 1) == 0)) {
    return;
  }
  FUN_030bffe0(puVar12,1);
  return;
}

