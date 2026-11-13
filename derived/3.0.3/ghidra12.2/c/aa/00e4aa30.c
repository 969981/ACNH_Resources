
void FUN_00e4aa30(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  long *plVar15;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  uVar5 = *param_2;
  if ((((uVar5 == 0) ||
       (plVar15 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
      ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar5)) {
    plVar15 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_00e4aaf0;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00e4aaf0:
    uVar5 = 0;
  }
  if (plVar15 == (long *)0x0) {
    return;
  }
  lVar10 = plVar15[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar8 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0);
  uVar6 = 0;
  if ((int)lVar10 == 1) {
    uVar6 = uVar5;
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (uVar6 == 0) {
    return;
  }
  lVar10 = plVar15[0x77];
  uVar5 = FUN_006bd550("BuildingSiteIndex",0);
  iVar4 = *(int *)(lVar10 + 0x20);
  if (iVar4 == 0) {
    return;
  }
  if (iVar4 < 2) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    iVar4 = iVar4 + -1;
    do {
      uVar6 = iVar4 + iVar9;
      if ((int)uVar6 < 0 != SCARRY4(iVar4,iVar9)) {
        uVar6 = uVar6 + 1;
      }
      iVar2 = (int)uVar6 >> 1;
      uVar6 = *(uint *)(*(long *)(lVar10 + 0x28) + ((long)((ulong)uVar6 << 0x20) >> 0x21) * 0x20 +
                       0x18);
      if (uVar6 == uVar5) goto joined_r0x00e4abd4;
      if (uVar6 < uVar5) {
        iVar9 = iVar2 + 1;
      }
      else {
        iVar4 = iVar2 + -1;
      }
    } while (iVar9 < iVar4);
  }
  iVar2 = iVar9;
  if (*(uint *)(*(long *)(lVar10 + 0x28) + (long)iVar9 * 0x20 + 0x18) != uVar5) {
    return;
  }
joined_r0x00e4abd4:
  if (iVar2 < 0) {
    return;
  }
  uVar6 = FUN_006bd550("BuildingSiteIndex",0);
  uVar5 = *(uint *)(lVar10 + 0x20);
  if (uVar5 != 0) {
    lVar10 = *(long *)(lVar10 + 0x28);
    if ((int)uVar5 < 2) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      iVar4 = uVar5 - 1;
      do {
        uVar1 = iVar4 + uVar12;
        if ((int)uVar1 < 0 != SCARRY4(iVar4,uVar12)) {
          uVar1 = uVar1 + 1;
        }
        uVar13 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(lVar10 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar6) goto LAB_00e4ac60;
        if (uVar1 < uVar6) {
          uVar12 = uVar13 + 1;
        }
        else {
          iVar4 = uVar13 - 1;
        }
      } while ((int)uVar12 < iVar4);
    }
    uVar13 = uVar12;
    if (*(uint *)(lVar10 + (long)(int)uVar12 * 0x20 + 0x18) == uVar6) {
LAB_00e4ac60:
      if (-1 < (int)uVar13) {
        if (uVar5 <= uVar13) {
          uVar13 = 0;
        }
        uVar5 = *(uint *)(lVar10 + (ulong)uVar13 * 0x20);
        if (5 < uVar5) {
          return;
        }
        goto LAB_00e4ac84;
      }
    }
  }
  uVar5 = 0;
LAB_00e4ac84:
  lVar10 = *(long *)(param_1 + 8);
  uVar6 = 1 << (ulong)(uVar5 & 0x1f);
  puVar14 = *(uint **)(lVar10 + 0x10);
  uVar5 = *puVar14;
  if ((uVar5 & uVar6) == 0) {
    piVar11 = *(int **)(param_1 + 0x10);
    if (piVar11[1] <= *piVar11) {
      return;
    }
    puVar14 = *(uint **)(piVar11 + 4);
    if (puVar14 != (uint *)0x0) {
      *(undefined8 *)(piVar11 + 4) = *(undefined8 *)puVar14;
    }
    *puVar14 = *param_2;
    if (piVar11[1] <= *piVar11) {
      return;
    }
    *(uint **)(*(long *)(piVar11 + 2) + (long)*piVar11 * 8) = puVar14;
    iVar4 = 1;
  }
  else {
    *puVar14 = uVar5 & (uVar6 ^ 0xffffffff);
    piVar11 = (int *)(lVar10 + 0x18);
    iVar4 = -1;
  }
  *piVar11 = *piVar11 + iVar4;
  return;
}

