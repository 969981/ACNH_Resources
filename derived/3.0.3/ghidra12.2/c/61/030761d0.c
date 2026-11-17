
void FUN_030761d0(long param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *local_50;
  undefined4 local_48;
  undefined2 local_34 [2];
  
  if (*(long *)(param_1 + 0x1670) == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x1670) + 0x590);
  if (lVar7 == 0) {
    return;
  }
  if ((int)param_2 < *(int *)(lVar7 + 0x3d4)) {
    iVar5 = *(int *)(lVar7 + 0x2e8);
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = (int)param_2 / iVar5;
    }
    iVar9 = *(int *)(lVar7 + 0x430) - *(int *)(lVar7 + 0x438);
    if ((*(byte *)(lVar7 + 1000) >> 1 & 1) != 0) {
      uVar2 = *(uint *)(lVar7 + 0x434);
      uVar8 = 0;
      if ((int)uVar2 < iVar9) {
        uVar8 = ~uVar2;
      }
      if (iVar9 < 0) {
        uVar8 = uVar2 + 1;
      }
      iVar9 = uVar8 + iVar9;
    }
    uVar8 = (param_2 - iVar3 * iVar5) + (iVar3 - iVar9) * iVar5;
    uVar2 = *(uint *)(lVar7 + 0x208);
    bVar4 = (int)uVar8 < 0;
    bVar1 = (int)uVar2 <= (int)uVar8;
    if (bVar4 || bVar1) {
      uVar8 = 0xffffffff;
    }
    if ((((bVar4 || bVar1) || (int)uVar2 <= (int)uVar8) || uVar2 < uVar8) ||
        ((!bVar4 && !bVar1) && (int)uVar8 < (int)uVar2) && uVar2 == uVar8) goto LAB_03076278;
    puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x210) + (ulong)uVar8 * 8);
  }
  else {
LAB_03076278:
    puVar11 = (undefined8 *)0x0;
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  uVar6 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc4d90);
  if ((uVar6 & 1) == 0) {
    return;
  }
  plVar10 = *(long **)(puVar11[0x5e] + (ulong)(1 < *(uint *)(puVar11 + 0x5d)) * 8);
  if (plVar10 == (long *)0x0) {
    return;
  }
  if ((*(byte *)((long)puVar11 + 0x2c3) & 1) == 0) {
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 0x14;
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_50);
    lVar7 = plVar10[3];
    uVar12 = 0;
    goto LAB_03076458;
  }
  iVar5 = -1;
  uVar8 = *(uint *)(param_1 + 0x1578);
  local_34[0] = *(undefined2 *)PTR_DAT_04bb3170;
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x1560))) {
    lVar7 = param_1 + 0x1550;
    uVar2 = uVar8 + 1 & 3;
    if (2 < uVar8) {
      uVar8 = uVar8 + 1 & 0xfffffffc;
      do {
        uVar8 = uVar8 - 4;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
      } while (uVar8 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar7 = *(long *)(lVar7 + 8);
    }
    iVar5 = -1;
    if ((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0x1564), lVar7 != 0)) {
      iVar5 = *(int *)(lVar7 + 0x270);
    }
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar5);
  if (-1 < (int)param_2) {
    if (iVar5 == 0x53) {
      if ((int)param_2 < *(int *)(param_1 + 0x1d98)) {
        lVar7 = 0x1da0;
        goto LAB_030763d4;
      }
    }
    else if ((iVar5 == 0x52) && ((int)param_2 < *(int *)(param_1 + 0x1738))) {
      lVar7 = 0x1740;
LAB_030763d4:
      iVar3 = **(int **)(*(long *)(param_1 + lVar7) + (ulong)param_2 * 8);
      if (iVar3 != -1) {
        FUN_0344cd00(local_34,iVar3,iVar5 == 0x53);
      }
    }
  }
  uVar6 = FUN_0308c170(param_1 + 0x1f8,local_34);
  uVar12 = 0;
  if ((uVar6 & 1) == 0) {
    uVar12 = 0x3f800000;
  }
  local_50 = PTR_DAT_04bc4f00 + 0x10;
  local_48 = 0x14;
  (**(code **)(*plVar10 + 0x18))(plVar10,&local_50);
  lVar7 = plVar10[3];
LAB_03076458:
  (**(code **)(lVar7 + 0x158))(uVar12,plVar10[1]);
  return;
}

