
void FUN_02cd10a0(long param_1,long param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar6 = PTR_DAT_04bc4d98;
  if (param_2 == 0) {
    return;
  }
  if (9 < param_3) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x14 + (ulong)param_3 * 4);
  if ((-1 < iVar8) && (iVar8 != param_4)) {
    if (iVar8 < *(int *)(param_2 + 0x3d4)) {
      iVar4 = *(int *)(param_2 + 0x2e8);
      iVar11 = 0;
      if (iVar4 != 0) {
        iVar11 = iVar8 / iVar4;
      }
      iVar10 = *(int *)(param_2 + 0x430) - *(int *)(param_2 + 0x438);
      if ((*(byte *)(param_2 + 1000) >> 1 & 1) != 0) {
        uVar5 = *(uint *)(param_2 + 0x434);
        uVar2 = 0;
        if ((int)uVar5 < iVar10) {
          uVar2 = ~uVar5;
        }
        if (iVar10 < 0) {
          uVar2 = uVar5 + 1;
        }
        iVar10 = uVar2 + iVar10;
      }
      uVar2 = (iVar8 - iVar11 * iVar4) + (iVar11 - iVar10) * iVar4;
      uVar5 = *(uint *)(param_2 + 0x208);
      bVar7 = (int)uVar2 < 0;
      bVar1 = (int)uVar5 <= (int)uVar2;
      if (bVar7 || bVar1) {
        uVar2 = 0xffffffff;
      }
      if ((((bVar7 || bVar1) || (int)uVar5 <= (int)uVar2) || uVar5 < uVar2) ||
          ((!bVar7 && !bVar1) && (int)uVar2 < (int)uVar5) && uVar5 == uVar2) goto LAB_02cd1160;
      puVar12 = *(undefined8 **)(*(long *)(param_2 + 0x210) + (ulong)uVar2 * 8);
      bVar3 = *PTR_DAT_04bc4d98;
    }
    else {
LAB_02cd1160:
      puVar12 = (undefined8 *)0x0;
      bVar3 = *PTR_DAT_04bc4d98;
    }
    if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if ((puVar12 != (undefined8 *)0x0) &&
       (uVar9 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4d90), (uVar9 & 1) != 0)) {
      FUN_030bffe0(puVar12,0);
    }
  }
  if (param_4 < 0) {
    return;
  }
  if (param_4 < *(int *)(param_2 + 0x3d4)) {
    iVar8 = *(int *)(param_2 + 0x2e8);
    iVar4 = 0;
    if (iVar8 != 0) {
      iVar4 = param_4 / iVar8;
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
    uVar2 = (param_4 - iVar4 * iVar8) + (iVar4 - iVar11) * iVar8;
    uVar5 = *(uint *)(param_2 + 0x208);
    bVar7 = (int)uVar2 < 0;
    bVar1 = (int)uVar5 <= (int)uVar2;
    if (bVar7 || bVar1) {
      uVar2 = 0xffffffff;
    }
    if ((((!bVar7 && !bVar1) && (int)uVar2 < (int)uVar5) && uVar2 <= uVar5) &&
        (((bVar7 || bVar1) || (int)uVar5 <= (int)uVar2) || uVar5 != uVar2)) {
      puVar12 = *(undefined8 **)(*(long *)(param_2 + 0x210) + (ulong)uVar2 * 8);
      goto LAB_02cd1238;
    }
  }
  puVar12 = (undefined8 *)0x0;
LAB_02cd1238:
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar8 != 0)) {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if ((puVar12 != (undefined8 *)0x0) &&
     (uVar9 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4d90), (uVar9 & 1) != 0)) {
    FUN_030bffe0(puVar12,1);
  }
  *(int *)(param_1 + 0x14 + (ulong)param_3 * 4) = param_4;
  return;
}

