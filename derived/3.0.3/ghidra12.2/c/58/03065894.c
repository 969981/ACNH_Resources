
/* WARNING: Removing unreachable block (ram,0x03065a90) */
/* WARNING: Removing unreachable block (ram,0x03065b04) */
/* WARNING: Removing unreachable block (ram,0x03065b10) */
/* WARNING: Removing unreachable block (ram,0x03065a20) */
/* WARNING: Removing unreachable block (ram,0x03065a9c) */
/* WARNING: Removing unreachable block (ram,0x03065a2c) */

void FUN_03065894(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if (lVar6 == 0) {
    return;
  }
  if ((int)param_2 < *(int *)(lVar6 + 0x3d4)) {
    iVar4 = *(int *)(lVar6 + 0x2e8);
    iVar8 = 0;
    if (iVar4 != 0) {
      iVar8 = (int)param_2 / iVar4;
    }
    iVar10 = *(int *)(lVar6 + 0x430) - *(int *)(lVar6 + 0x438);
    if ((*(byte *)(lVar6 + 1000) >> 1 & 1) != 0) {
      uVar1 = *(uint *)(lVar6 + 0x434);
      uVar7 = 0;
      if ((int)uVar1 < iVar10) {
        uVar7 = ~uVar1;
      }
      if (iVar10 < 0) {
        uVar7 = uVar1 + 1;
      }
      iVar10 = uVar7 + iVar10;
    }
    uVar7 = (param_2 - iVar8 * iVar4) + (iVar8 - iVar10) * iVar4;
    uVar1 = *(uint *)(lVar6 + 0x208);
    bVar2 = (int)uVar7 < 0;
    bVar3 = (int)uVar1 <= (int)uVar7;
    if (bVar2 || bVar3) {
      uVar7 = 0xffffffff;
    }
    if ((((bVar2 || bVar3) || (int)uVar1 <= (int)uVar7) || uVar1 < uVar7) ||
        ((!bVar2 && !bVar3) && (int)uVar7 < (int)uVar1) && uVar1 == uVar7) goto LAB_03065930;
    puVar11 = *(undefined8 **)(*(long *)(lVar6 + 0x210) + (ulong)uVar7 * 8);
  }
  else {
LAB_03065930:
    puVar11 = (undefined8 *)0x0;
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  uVar5 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc4d90);
  if ((uVar5 & 1) == 0) {
    return;
  }
  iVar4 = 0;
  if (-1 < (int)param_2) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x350);
    if (*(uint *)(param_1 + 0x340) <= (uint)*(ushort *)(param_1 + 0x350)) {
      uVar7 = 0;
    }
    piVar9 = (int *)(*(long *)(param_1 + 0x348) + (ulong)uVar7 * 0x160);
    if ((int)param_2 < *piVar9) {
      iVar4 = **(int **)(*(long *)(piVar9 + 2) + (ulong)param_2 * 8);
    }
  }
  if (*(int *)(param_1 + 0x1c3e4) == 3) {
    if (iVar4 != -1) {
      if (*(long *)PTR_DAT_04bb5ce0 == 0) {
LAB_03065ac4:
        iVar8 = -1;
      }
      else {
        iVar8 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xfa8);
      }
      goto LAB_03065ad0;
    }
LAB_03065ab4:
    bVar3 = false;
    lVar6 = puVar11[0x43];
  }
  else {
    if (*(int *)(param_1 + 0x1c3e4) != 2) {
      if (puVar11[0x43] == 0) {
        return;
      }
      uVar5 = (**(code **)(*(long *)(puVar11[0x43] + 0x178) + 0x10))();
      if ((uVar5 & 1) == 0) {
        return;
      }
      goto LAB_03065b44;
    }
    if (iVar4 == -1) goto LAB_03065ab4;
    lVar6 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar6 == 0) goto LAB_03065ac4;
    if (*(int *)(lVar6 + 0xf90) == iVar4) {
      if (puVar11[0x43] == 0) {
        return;
      }
      uVar5 = (**(code **)(*(long *)(puVar11[0x43] + 0x178) + 0x10))();
      goto joined_r0x03065b24;
    }
    iVar8 = *(int *)(lVar6 + 0xf9c);
LAB_03065ad0:
    bVar3 = iVar8 == iVar4;
    lVar6 = puVar11[0x43];
  }
  if (lVar6 == 0) {
    return;
  }
  uVar5 = (**(code **)(*(long *)(lVar6 + 0x178) + 0x10))();
  if (bVar3) {
joined_r0x03065b24:
    if ((uVar5 & 1) == 0) {
      FUN_03d5d280(puVar11,7);
      *(undefined1 *)((long)puVar11 + 0x313) = 1;
    }
    return;
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
LAB_03065b44:
  FUN_03d49da4(puVar11[0x43],0,7);
  FUN_03d49da4(puVar11[0x43],1,7);
  FUN_03d49da4(puVar11[0x43],2,7);
  FUN_03d49da4(puVar11[0x43],3,7);
  return;
}

