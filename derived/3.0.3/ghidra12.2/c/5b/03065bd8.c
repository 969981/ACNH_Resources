
/* WARNING: Removing unreachable block (ram,0x03065d84) */
/* WARNING: Removing unreachable block (ram,0x03065d90) */

void FUN_03065bd8(long param_1,uint param_2)

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
  
  if (*(int *)(param_1 + 0x1c3e4) != 2) {
    return;
  }
  iVar4 = FUN_0274bce0(param_1 + 0x1f8,&DAT_056e44f0);
  if (iVar4 == 0) {
    return;
  }
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
    if ((((!bVar2 && !bVar3) && (int)uVar7 < (int)uVar1) && uVar7 <= uVar1) &&
        (((bVar2 || bVar3) || (int)uVar1 <= (int)uVar7) || uVar1 != uVar7)) {
      puVar11 = *(undefined8 **)(*(long *)(lVar6 + 0x210) + (ulong)uVar7 * 8);
      goto LAB_03065cb0;
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_03065cb0:
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if ((puVar11 != (undefined8 *)0x0) &&
     (uVar5 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc4d90), (uVar5 & 1) != 0)) {
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
    if (iVar4 == -1) {
      bVar3 = false;
    }
    else {
      if (*(long *)PTR_DAT_04bb5ce0 == 0) {
        iVar8 = -1;
      }
      else {
        iVar8 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf90);
      }
      bVar3 = iVar8 == iVar4;
    }
    if (puVar11[0x43] != 0) {
      uVar5 = (**(code **)(*(long *)(puVar11[0x43] + 0x150) + 0x10))();
      if (bVar3) {
        if ((uVar5 & 1) != 0) {
          FUN_03d5d6a4(puVar11,6);
          return;
        }
      }
      else if ((uVar5 & 1) == 0) {
        FUN_03d5d280(puVar11,6);
        *(undefined1 *)((long)puVar11 + 0x313) = 1;
      }
    }
  }
  return;
}

