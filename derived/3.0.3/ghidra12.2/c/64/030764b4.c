
/* WARNING: Removing unreachable block (ram,0x030766a0) */
/* WARNING: Removing unreachable block (ram,0x030765e0) */
/* WARNING: Removing unreachable block (ram,0x030765ec) */
/* WARNING: Removing unreachable block (ram,0x030766ac) */

void FUN_030764b4(long param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined2 local_40 [2];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(long *)(param_1 + 0x1670) == 0) {
    return;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x1670) + 0x590);
  if (lVar10 == 0) {
    return;
  }
  if ((int)param_2 < *(int *)(lVar10 + 0x3d4)) {
    iVar7 = *(int *)(lVar10 + 0x2e8);
    iVar4 = 0;
    if (iVar7 != 0) {
      iVar4 = (int)param_2 / iVar7;
    }
    iVar11 = *(int *)(lVar10 + 0x430) - *(int *)(lVar10 + 0x438);
    if ((*(byte *)(lVar10 + 1000) >> 1 & 1) != 0) {
      uVar3 = *(uint *)(lVar10 + 0x434);
      uVar2 = 0;
      if ((int)uVar3 < iVar11) {
        uVar2 = ~uVar3;
      }
      if (iVar11 < 0) {
        uVar2 = uVar3 + 1;
      }
      iVar11 = uVar2 + iVar11;
    }
    uVar2 = (param_2 - iVar4 * iVar7) + (iVar4 - iVar11) * iVar7;
    uVar3 = *(uint *)(lVar10 + 0x208);
    bVar6 = (int)uVar2 < 0;
    bVar1 = (int)uVar3 <= (int)uVar2;
    if (bVar6 || bVar1) {
      uVar2 = 0xffffffff;
    }
    if ((((bVar6 || bVar1) || (int)uVar3 <= (int)uVar2) || uVar3 < uVar2) ||
        ((!bVar6 && !bVar1) && (int)uVar2 < (int)uVar3) && uVar3 == uVar2) goto LAB_03076558;
    puVar12 = *(undefined8 **)(*(long *)(lVar10 + 0x210) + (ulong)uVar2 * 8);
  }
  else {
LAB_03076558:
    puVar12 = (undefined8 *)0x0;
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  uVar8 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4d90);
  puVar5 = PTR_DAT_04bb3170;
  if ((uVar8 & 1) == 0) {
    return;
  }
  FUN_007ef010(local_40,PTR_DAT_04bb3170);
  local_3c = 0x52;
  if ((((int)param_2 < 0) || (*(int *)(param_1 + 0x1738) <= (int)param_2)) ||
     (iVar7 = **(int **)(*(long *)(param_1 + 0x1740) + (ulong)param_2 * 8), iVar7 == -1)) {
    local_40[0] = *(undefined2 *)puVar5;
  }
  else {
    FUN_0344cd00(local_40,iVar7,0);
  }
  if (*(int *)(param_1 + 0x23fc) == 4) {
    uVar8 = FUN_0308ca70(local_40);
  }
  else {
    if (*(int *)(param_1 + 0x23fc) != 3) {
      uVar8 = 0;
      goto LAB_03076670;
    }
    uVar8 = FUN_0308c8c0(local_40);
    if ((uVar8 & 1) != 0) {
      uVar8 = 1;
      goto LAB_03076670;
    }
    uVar8 = FUN_0308cc20(local_40);
  }
  uVar8 = uVar8 & 0xffffffff;
LAB_03076670:
  if (puVar12[0x43] != 0) {
    local_34 = 0;
    local_38 = 7;
    uVar9 = (**(code **)(*(long *)(puVar12[0x43] + 0x178) + 0x10))();
    if ((uVar8 & 1) == 0) {
      if ((uVar9 & 1) != 0) {
        FUN_03d5d6a4(puVar12,7);
      }
    }
    else if ((uVar9 & 1) == 0) {
      FUN_03d5d280(puVar12,7);
      *(undefined1 *)((long)puVar12 + 0x313) = 1;
    }
  }
  return;
}

