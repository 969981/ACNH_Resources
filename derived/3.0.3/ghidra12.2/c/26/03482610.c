
void FUN_03482610(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ushort uVar10;
  undefined8 uVar11;
  short sVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  int *piVar20;
  undefined *local_80;
  undefined4 local_78;
  uint local_74;
  uint uStack_70;
  undefined2 local_6c;
  undefined8 local_6a;
  undefined4 local_60;
  undefined8 local_5c;
  byte local_54;
  
  plVar19 = *(long **)(param_1 + 0x230);
  piVar20 = *(int **)(param_1 + 0x238);
  *(undefined4 *)(plVar19 + 1) = 0;
  iVar5 = (**(code **)(*plVar19 + 0x50))(plVar19);
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      lVar7 = (**(code **)(*plVar19 + 0x48))(plVar19,iVar5);
      if ((((lVar7 != 0) &&
           (piVar13 = *(int **)(*(long *)(piVar20 + 4) + (long)*piVar20 * 8), iVar5 < *piVar13)) &&
          (uVar8 = (**(code **)(piVar13 + 2))(), (uVar8 & 1) != 0)) &&
         ((int)plVar19[1] < *(int *)((long)plVar19 + 0xc))) {
        *(long *)(plVar19[2] + (long)(int)plVar19[1] * 8) = lVar7;
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = (**(code **)(*plVar19 + 0x50))(plVar19);
    } while (iVar5 < iVar6);
  }
  lVar7 = param_1 + 600;
  if (*(long *)(param_1 + 0x260) == lVar7) {
    iVar5 = -1;
  }
  else {
    lVar15 = (long)*(int *)(param_1 + 0x26c);
    iVar5 = 0;
    lVar18 = *(long *)(param_1 + 0x260) - lVar15;
    do {
      if (*(int *)(lVar18 + 0x270) == 0x74) goto LAB_03482760;
      iVar5 = iVar5 + 1;
      lVar18 = *(long *)(lVar18 + lVar15 + 8) - lVar15;
    } while (lVar18 != lVar7 - lVar15);
    iVar5 = -1;
  }
LAB_03482760:
  sVar12 = *(short *)(param_1 + 0x1d8a0);
  if (iVar5 != *(int *)(param_1 + 0x1cfb8)) {
    sVar12 = 0x800;
  }
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = 0x40f5ec6;
  local_74 = 0;
  lVar18 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x228) + 0x3f8) + 0x38,&local_80);
  if (lVar18 != 0) {
    uVar16 = *(uint *)(param_1 + 0x280);
    if (((int)uVar16 < 0) || (*(int *)(param_1 + 0x268) <= (int)uVar16)) {
LAB_03482850:
      plVar9 = *(long **)(param_1 + 0x230);
      uVar11 = 3;
    }
    else {
      uVar1 = uVar16 + 1 & 3;
      lVar18 = lVar7;
      if (2 < uVar16) {
        uVar16 = uVar16 + 1 & 0xfffffffc;
        do {
          uVar16 = uVar16 - 4;
          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8);
        } while (uVar16 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar18 = *(long *)(lVar18 + 8);
      }
      if (((lVar18 == 0) || (lVar18 = lVar18 - *(int *)(param_1 + 0x26c), lVar18 == 0)) ||
         (*(int *)(lVar18 + 0x270) != 0x74)) goto LAB_03482850;
      if (sVar12 == 0x2000) {
        plVar9 = *(long **)(param_1 + 0x230);
        uVar11 = 2;
      }
      else if (sVar12 == 0x1000) {
        plVar9 = *(long **)(param_1 + 0x230);
        uVar11 = 1;
      }
      else {
        if (sVar12 != 0x800) goto LAB_03482864;
        plVar9 = *(long **)(param_1 + 0x230);
        uVar11 = 0;
      }
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,uVar11);
  }
LAB_03482864:
  if (1 < param_2) {
    return;
  }
  lVar18 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)param_2 * 8 + 0x570);
  if (lVar18 == 0) {
    return;
  }
  lVar15 = FUN_033d0598(PTR_DAT_04bb32e0);
  local_78 = (undefined4)plVar19[1];
  local_6a = 0x1000001;
  local_5c = 0x60000000c;
  local_54 = *(byte *)(param_1 + 0x1f8);
  local_60 = 0;
  local_74 = 0;
  uStack_70 = 0;
  local_6c = 0;
  if (7 < local_54) {
    local_54 = 0xff;
  }
  local_80 = PTR_DAT_04bc9c78 + 0x10;
  if (*(int *)(param_1 + 0x1b0) == 3) {
    if (*(char *)(param_1 + 0x1d000) == '\0') {
      uVar16 = *(uint *)(param_1 + 0x280);
      if (((int)uVar16 < 0) || (*(int *)(param_1 + 0x268) <= (int)uVar16)) {
LAB_03482ac4:
        plVar19 = *(long **)(param_1 + 0x230);
LAB_03482ac8:
        if (5 < *(ushort *)(lVar15 + 0x832)) goto LAB_03482aec;
        uStack_70 = (**(code **)(*plVar19 + 0x68))(plVar19);
      }
      else {
        uVar1 = uVar16 + 1 & 3;
        lVar14 = lVar7;
        if (2 < uVar16) {
          uVar16 = uVar16 + 1 & 0xfffffffc;
          do {
            uVar16 = uVar16 - 4;
            lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar14 + 8) + 8) + 8) + 8);
          } while (uVar16 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          lVar14 = *(long *)(lVar14 + 8);
        }
        if ((lVar14 == 0) || (lVar14 = lVar14 - *(int *)(param_1 + 0x26c), lVar14 == 0))
        goto LAB_03482ac4;
        plVar19 = *(long **)(param_1 + 0x230);
        if (*(int *)(lVar14 + 0x270) != 0x74) goto LAB_03482ac8;
        uStack_70 = (**(code **)(*plVar19 + 0x60))(plVar19,*(undefined2 *)(lVar15 + 0x830));
      }
      if (uStack_70 == 0xffffffff) goto LAB_03482aec;
    }
    else {
LAB_03482aec:
      uStack_70 = 0;
    }
    *(uint *)(param_1 + 0x244) = uStack_70;
  }
  else if (((*(int *)(param_1 + 0x1b0) == 7) && (*(int *)(param_1 + 0x1cfc0) == 5)) ||
          (*(int *)(param_1 + 0x1cfec) != 1)) {
    uStack_70 = *(uint *)(param_1 + 0x244);
  }
  else {
    uVar16 = *(uint *)(param_1 + 0x280);
    bVar4 = false;
    if ((-1 < (int)uVar16) && ((int)uVar16 < *(int *)(param_1 + 0x268))) {
      uVar1 = uVar16 + 1 & 3;
      lVar14 = lVar7;
      if (2 < uVar16) {
        uVar16 = uVar16 + 1 & 0xfffffffc;
        do {
          uVar16 = uVar16 - 4;
          lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar14 + 8) + 8) + 8) + 8);
        } while (uVar16 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar14 = *(long *)(lVar14 + 8);
      }
      bVar4 = false;
      if ((lVar14 != 0) && (lVar14 = lVar14 - *(int *)(param_1 + 0x26c), lVar14 != 0)) {
        bVar4 = *(int *)(lVar14 + 0x270) == 0x74;
      }
    }
    if (*(char *)(param_1 + 0x1d000) == '\0') {
      plVar19 = *(long **)(param_1 + 0x230);
      if (bVar4) {
        uVar10 = *(ushort *)(lVar15 + 0x830);
        goto LAB_03482a08;
      }
      uVar10 = *(ushort *)(lVar15 + 0x832);
joined_r0x03482a2c:
      if (uVar10 < 6) {
        uStack_70 = (**(code **)(*plVar19 + 0x68))(plVar19,uVar10);
        goto joined_r0x03482a1c;
      }
    }
    else {
      uVar10 = *(ushort *)(param_1 + 0x1cff4);
      plVar19 = *(long **)(param_1 + 0x230);
      if (!bVar4) goto joined_r0x03482a2c;
LAB_03482a08:
      uStack_70 = (**(code **)(*plVar19 + 0x60))(plVar19,uVar10);
joined_r0x03482a1c:
      if (uStack_70 != 0xffffffff) goto LAB_03482af4;
    }
    uStack_70 = 0;
  }
LAB_03482af4:
  lVar14 = (long)*(int *)(param_1 + 0x26c);
  lVar15 = *(long *)(param_1 + 0x260) - lVar14;
  lVar17 = lVar7 - lVar14;
  if (*(long *)(param_1 + 0x260) == lVar7) {
    iVar5 = -1;
  }
  else {
    iVar5 = 0;
    lVar7 = lVar15;
    do {
      if (*(int *)(lVar7 + 0x270) == 0x74) goto LAB_03482b5c;
      iVar5 = iVar5 + 1;
      lVar7 = *(long *)(lVar7 + lVar14 + 8) + -lVar14;
    } while (lVar7 != lVar17);
    iVar5 = -1;
  }
LAB_03482b5c:
  iVar2 = *(int *)(param_1 + 0x1cfb8);
  iVar6 = *(int *)(param_1 + 0x1d8a4);
  if (iVar5 != iVar2) {
    iVar6 = 0;
  }
  if ((int)uStack_70 < 0) {
    local_74 = 0;
    uStack_70 = 0;
  }
  else {
    local_74 = uStack_70;
    if (-1 < iVar6) {
      iVar5 = *(int *)(lVar18 + 0x2e8);
      iVar3 = 0;
      if (iVar5 != 0) {
        iVar3 = (int)uStack_70 / iVar5;
      }
      local_74 = iVar3 * iVar5 - iVar5 * iVar6;
      local_74 = local_74 & ((int)local_74 >> 0x1f ^ 0xffffffffU);
    }
  }
  local_6a._0_5_ = CONCAT14(1,(undefined4)local_6a);
  if (lVar15 == lVar17) {
    if (iVar2 != -1) goto LAB_03482c04;
  }
  else {
    iVar5 = 0;
    do {
      if (*(int *)(lVar15 + 0x270) == 0x75) goto LAB_03482bf4;
      iVar5 = iVar5 + 1;
      lVar15 = *(long *)(lVar15 + lVar14 + 8) + -lVar14;
    } while (lVar15 != lVar17);
    iVar5 = -1;
LAB_03482bf4:
    if (iVar5 != iVar2) goto LAB_03482c04;
  }
  local_60 = 2;
LAB_03482c04:
  FUN_03864290(lVar18,&local_80);
  return;
}

