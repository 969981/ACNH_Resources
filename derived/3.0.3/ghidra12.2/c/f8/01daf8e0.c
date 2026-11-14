
void FUN_01daf8e0(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  
  plVar11 = *(long **)(*(long *)PTR_DAT_04bb47c8 + 8);
  if (param_1[1] == 0) {
    lVar7 = (**(code **)(*plVar11 + 0x30))(plVar11,0x19000,8);
    param_1[1] = lVar7;
    lVar7 = *param_1;
  }
  else {
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*plVar11 + 0x30))(plVar11,0x10000,8);
    lVar6 = (**(code **)(*plVar11 + 0x30))(plVar11,0x20000,8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      plVar11 = malloc(0xf0);
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0xf0,8);
    }
    *plVar11 = lVar7;
    plVar11[4] = 0;
    plVar11[5] = (long)(plVar11 + 8);
    plVar11[6] = 2;
    *(undefined4 *)(plVar11 + 7) = 0;
    *(undefined4 *)(plVar11 + 0xc) = 0;
    *(undefined8 *)((long)plVar11 + 0xa4) = 0;
    plVar12 = plVar11 + 1;
    *plVar12 = 0;
    *(undefined8 *)((long)plVar11 + 0x9c) = 0;
    plVar11[10] = (long)(plVar11 + 0xd);
    plVar11[0xb] = 2;
    *(undefined2 *)(plVar11 + 0x13) = 0xff00;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[0xf] = 0;
    plVar11[0x10] = 0;
    plVar11[0x11] = lVar6;
    plVar11[0x12] = 0;
    FUN_038e18e4(plVar11 + 0x16);
    iVar9 = (int)plVar11[7];
    plVar11[2] = 0;
    iVar2 = (int)plVar11[6];
    lVar7 = *plVar11;
    *plVar12 = lVar7;
    if (iVar9 < iVar2) {
      *(int *)(plVar11 + 7) = iVar9 + 1;
      iVar9 = *(int *)((long)plVar11 + 0x34) + iVar9;
      iVar1 = 0;
      if (iVar2 <= iVar9) {
        iVar1 = iVar2;
      }
      *(long **)(plVar11[5] + (long)(iVar9 - iVar1) * 8) = plVar12;
      lVar7 = *plVar11;
      iVar9 = (int)plVar11[7];
      iVar2 = (int)plVar11[6];
    }
    plVar11[3] = lVar7 + 0x8000;
    plVar11[4] = 0;
    if (iVar9 < iVar2) {
      *(int *)(plVar11 + 7) = iVar9 + 1;
      iVar9 = *(int *)((long)plVar11 + 0x34) + iVar9;
      iVar1 = 0;
      if (iVar2 <= iVar9) {
        iVar1 = iVar2;
      }
      *(long **)(plVar11[5] + (long)(iVar9 - iVar1) * 8) = plVar11 + 3;
    }
    *(undefined8 *)((long)plVar11 + 0x5c) = 0;
    *param_1 = (long)plVar11;
  }
  FUN_01de7320();
  uVar5 = DAT_05385868;
  uVar8 = (ulong)DAT_05385868;
  if (0 < (int)DAT_05385868) {
    lVar7 = DAT_05385870;
    if (DAT_05385868 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        lVar6 = *(long *)(lVar7 + uVar10 * 8);
        if (lVar6 != 0) {
          *(int *)(lVar6 + 8) = (int)uVar10;
          lVar7 = DAT_05385870;
        }
        lVar6 = *(long *)(lVar7 + uVar10 * 8 + 8);
        if (lVar6 != 0) {
          *(int *)(lVar6 + 8) = (int)uVar10 + 1;
          lVar7 = DAT_05385870;
        }
        uVar10 = uVar10 + 2;
      } while ((uVar8 & 0xfffffffe) != uVar10);
    }
    if (((uVar5 & 1) != 0) && (lVar7 = *(long *)(lVar7 + uVar10 * 8), lVar7 != 0)) {
      *(int *)(lVar7 + 8) = (int)uVar10;
    }
  }
  FUN_01dd6ab0();
  uVar8 = (ulong)DAT_053814a8;
  if (0 < (int)DAT_053814a8) {
    uVar10 = 0;
    uVar5 = 0;
    do {
      if ((uVar10 < DAT_053814a8) &&
         (plVar11 = *(long **)(DAT_053814b0 + uVar10 * 8), plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x28))(plVar11,uVar10 & 0xffffffff);
        (**(code **)*plVar11)(plVar11);
        uVar4 = (**(code **)*plVar11)(plVar11);
        if (uVar5 < uVar4) {
          uVar5 = (**(code **)*plVar11)(plVar11);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
  }
  FUN_01d4bab8(&DAT_05372688);
  FUN_020d85d4(*(undefined8 *)PTR_DAT_04bb6c70,&DAT_05372688);
  puVar3 = PTR_DAT_04bc1408;
  if (*(long *)(DAT_05370ac0 + 8) != DAT_05370ac0) {
    lVar7 = (long)*(int *)(DAT_05370ac0 + 0x14);
    plVar11 = (long *)(*(long *)(DAT_05370ac0 + 8) - lVar7);
    plVar12 = (long *)(DAT_05370ac0 - lVar7);
    do {
      (**(code **)(*plVar11 + 0x20))(plVar11,puVar3);
      plVar11 = (long *)(*(long *)((long)plVar11 + lVar7 + 8) - lVar7);
    } while (plVar11 != plVar12);
  }
  lVar7 = DAT_05372690;
  uVar5 = DAT_05372688;
  uVar8 = (ulong)DAT_05372688;
  if (0 < (int)DAT_05372688) {
    if (DAT_05372688 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        lVar6 = *(long *)(lVar7 + uVar10 * 8);
        if (lVar6 != 0) {
          *(int *)(lVar6 + 0x3c) = (int)uVar10;
        }
        lVar6 = *(long *)(lVar7 + uVar10 * 8 + 8);
        if (lVar6 != 0) {
          *(int *)(lVar6 + 0x3c) = (int)uVar10 + 1;
        }
        uVar10 = uVar10 + 2;
      } while ((uVar8 & 0xfffffffe) != uVar10);
    }
    if (((uVar5 & 1) != 0) && (lVar7 = *(long *)(lVar7 + uVar10 * 8), lVar7 != 0)) {
      *(int *)(lVar7 + 0x3c) = (int)uVar10;
    }
  }
  return;
}

