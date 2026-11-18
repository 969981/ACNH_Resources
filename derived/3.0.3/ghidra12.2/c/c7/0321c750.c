
void FUN_0321c750(long param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  
  piVar2 = (int *)(param_1 + 0x1c36c);
  piVar3 = piVar2 + (ulong)param_2 * 3;
  if (9 < param_2) {
    piVar3 = piVar2;
  }
  if (piVar3[1] < 0) {
    return;
  }
  piVar3 = piVar2 + (ulong)param_2 * 3;
  if (9 < param_2) {
    piVar3 = piVar2;
  }
  iVar9 = *piVar3;
  lVar11 = *(long *)(*(long *)(param_1 + 0x210) + 0x590);
  if (((lVar11 != 0) && (-1 < iVar9)) && (iVar9 < *(int *)(lVar11 + 0x3cc))) {
    if (param_2 < 10) {
      *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x1c2ec) = 0xffffffff;
    }
    FUN_02bc30b0(param_1 + 0x1c2d8);
  }
  if ((iVar9 < 0) || (*(int *)(param_1 + 0x1c368) <= iVar9)) goto LAB_0321c9d0;
  if (*piVar2 == iVar9) {
    lVar11 = 0;
  }
  else if (*(int *)(param_1 + 0x1c378) == iVar9) {
    lVar11 = 1;
  }
  else if (*(int *)(param_1 + 0x1c384) == iVar9) {
    lVar11 = 2;
  }
  else if (*(int *)(param_1 + 0x1c390) == iVar9) {
    lVar11 = 3;
  }
  else if (*(int *)(param_1 + 0x1c39c) == iVar9) {
    lVar11 = 4;
  }
  else if (*(int *)(param_1 + 0x1c3a8) == iVar9) {
    lVar11 = 5;
  }
  else if (*(int *)(param_1 + 0x1c3b4) == iVar9) {
    lVar11 = 6;
  }
  else if (*(int *)(param_1 + 0x1c3c0) == iVar9) {
    lVar11 = 7;
  }
  else if (*(int *)(param_1 + 0x1c3cc) == iVar9) {
    lVar11 = 8;
  }
  else {
    if (*(int *)(param_1 + 0x1c3d8) != iVar9) goto LAB_0321c9d0;
    lVar11 = 9;
  }
  if ((((char)piVar2[lVar11 * 3 + 2] == '\0') ||
      (lVar11 = *(long *)(*(long *)(param_1 + 0x210) + 0x590), lVar11 == 0)) ||
     (*(int *)(lVar11 + 0x3cc) <= iVar9)) goto LAB_0321c9d0;
  if (iVar9 < *(int *)(lVar11 + 0x3d4)) {
    iVar5 = *(int *)(lVar11 + 0x2e8);
    iVar7 = 0;
    if (iVar5 != 0) {
      iVar7 = iVar9 / iVar5;
    }
    iVar12 = *(int *)(lVar11 + 0x430) - *(int *)(lVar11 + 0x438);
    if ((*(byte *)(lVar11 + 1000) >> 1 & 1) != 0) {
      uVar6 = *(uint *)(lVar11 + 0x434);
      uVar4 = 0;
      if ((int)uVar6 < iVar12) {
        uVar4 = ~uVar6;
      }
      if (iVar12 < 0) {
        uVar4 = uVar6 + 1;
      }
      iVar12 = uVar4 + iVar12;
    }
    uVar4 = (iVar9 - iVar7 * iVar5) + (iVar7 - iVar12) * iVar5;
    uVar6 = *(uint *)(lVar11 + 0x208);
    bVar8 = (int)uVar4 < 0;
    bVar1 = (int)uVar6 <= (int)uVar4;
    if (bVar8 || bVar1) {
      uVar4 = 0xffffffff;
    }
    if ((((bVar8 || bVar1) || (int)uVar6 <= (int)uVar4) || uVar6 < uVar4) ||
        ((!bVar8 && !bVar1) && (int)uVar4 < (int)uVar6) && uVar6 == uVar4) goto LAB_0321c978;
    puVar13 = *(undefined8 **)(*(long *)(lVar11 + 0x210) + (ulong)uVar4 * 8);
  }
  else {
LAB_0321c978:
    puVar13 = (undefined8 *)0x0;
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    uVar10 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4d90);
    if ((uVar10 & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
    }
  }
  FUN_032162bc(puVar13,0,1);
LAB_0321c9d0:
  piVar3 = piVar2 + (ulong)param_2 * 3;
  if (9 < param_2) {
    piVar3 = piVar2;
  }
  piVar3[0] = -1;
  piVar3[1] = -1;
  *(undefined1 *)(piVar3 + 2) = 0;
  return;
}

