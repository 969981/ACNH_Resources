
void FUN_00650e00(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  uint local_54;
  
  param_1[2] = 1;
  *param_1 = &PTR_LAB_048e51a8;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar22 = *(uint *)(param_2 + 0x28);
  puVar17 = *(undefined2 **)(param_2 + 0x20);
  uVar16 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar22 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    local_54 = uVar22;
    puVar4 = (undefined2 *)FUN_00421ed0(uVar16,2,&local_54);
    *(uint *)(param_1 + 5) = uVar22;
    *(uint *)((long)param_1 + 0x2c) = local_54;
    uVar3 = uVar22 & 3;
    param_1[4] = puVar4;
    if (2 < uVar22 - 1) {
      iVar12 = uVar3 - uVar22;
      puVar5 = puVar4;
      do {
        *puVar5 = *puVar17;
        puVar5[1] = puVar17[1];
        puVar5[2] = puVar17[2];
        puVar1 = puVar17 + 3;
        puVar4 = puVar5 + 4;
        puVar17 = puVar17 + 4;
        puVar5[3] = *puVar1;
        iVar12 = iVar12 + 4;
        puVar5 = puVar4;
      } while (iVar12 != 0);
    }
    if (uVar3 != 0) {
      iVar12 = -uVar3;
      do {
        iVar12 = iVar12 + 1;
        *puVar4 = *puVar17;
        puVar4 = puVar4 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar22 = *(uint *)(param_2 + 0x38);
  puVar18 = *(undefined8 **)(param_2 + 0x30);
  if ((int)uVar22 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_54 = uVar22;
    puVar6 = (undefined8 *)FUN_00421ed0(uVar16,0x10,&local_54);
    param_1[6] = puVar6;
    *(uint *)(param_1 + 7) = uVar22;
    *(uint *)((long)param_1 + 0x3c) = local_54;
    do {
      *puVar6 = 0;
      if (puVar6 != puVar18) {
        FUN_0043c080(puVar6,puVar18);
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar18 + 1);
      }
      uVar22 = uVar22 - 1;
      puVar18 = puVar18 + 2;
      puVar6 = puVar6 + 2;
    } while (uVar22 != 0);
  }
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar22 = *(uint *)(param_2 + 0x48);
  puVar18 = *(undefined8 **)(param_2 + 0x40);
  if ((int)uVar22 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    local_54 = uVar22;
    puVar6 = (undefined8 *)FUN_00421ed0(uVar16,0x30,&local_54);
    *(uint *)(param_1 + 9) = uVar22;
    *(uint *)((long)param_1 + 0x4c) = local_54;
    uVar3 = uVar22 & 3;
    param_1[8] = puVar6;
    if (2 < uVar22 - 1) {
      iVar12 = uVar3 - uVar22;
      puVar7 = puVar6;
      puVar19 = puVar18;
      do {
        puVar7[1] = puVar19[1];
        *puVar7 = *puVar19;
        uVar14 = puVar19[3];
        puVar7[5] = puVar19[5];
        uVar13 = puVar19[2];
        uVar15 = puVar19[4];
        puVar7[3] = uVar14;
        puVar7[4] = uVar15;
        puVar7[2] = uVar13;
        puVar7[7] = puVar19[7];
        uVar14 = puVar19[9];
        puVar7[0xb] = puVar19[0xb];
        uVar13 = puVar19[8];
        uVar15 = puVar19[10];
        puVar7[9] = uVar14;
        puVar7[10] = uVar15;
        puVar7[8] = uVar13;
        puVar7[6] = puVar19[6];
        uVar13 = puVar19[0xd];
        puVar6 = puVar7 + 0x18;
        puVar7[0xc] = puVar19[0xc];
        puVar7[0xd] = uVar13;
        puVar18 = puVar19 + 0x18;
        uVar13 = puVar19[0xe];
        uVar14 = puVar19[0xf];
        iVar12 = iVar12 + 4;
        uVar15 = puVar19[0x11];
        puVar7[0x10] = puVar19[0x10];
        puVar7[0x11] = uVar15;
        puVar7[0xe] = uVar13;
        puVar7[0xf] = uVar14;
        uVar13 = puVar19[0x13];
        puVar7[0x12] = puVar19[0x12];
        puVar7[0x13] = uVar13;
        uVar13 = puVar19[0x14];
        uVar14 = puVar19[0x15];
        uVar15 = puVar19[0x17];
        puVar7[0x16] = puVar19[0x16];
        puVar7[0x17] = uVar15;
        puVar7[0x14] = uVar13;
        puVar7[0x15] = uVar14;
        puVar7 = puVar6;
        puVar19 = puVar18;
      } while (iVar12 != 0);
    }
    if (uVar3 != 0) {
      iVar12 = -uVar3;
      do {
        puVar6[1] = puVar18[1];
        uVar13 = puVar18[3];
        puVar6[5] = puVar18[5];
        puVar6[3] = uVar13;
        *puVar6 = *puVar18;
        uVar13 = puVar18[2];
        puVar6[4] = puVar18[4];
        puVar6[2] = uVar13;
        puVar6 = puVar6 + 6;
        puVar18 = puVar18 + 6;
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  uVar22 = *(uint *)(param_2 + 0x58);
  puVar20 = *(undefined4 **)(param_2 + 0x50);
  if ((int)uVar22 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    local_54 = uVar22;
    puVar8 = (undefined4 *)FUN_00421ed0(uVar16,4,&local_54);
    *(uint *)(param_1 + 0xb) = uVar22;
    *(uint *)((long)param_1 + 0x5c) = local_54;
    uVar3 = uVar22 & 3;
    param_1[10] = puVar8;
    if (2 < uVar22 - 1) {
      iVar12 = uVar3 - uVar22;
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar20;
        puVar9[1] = puVar20[1];
        puVar9[2] = puVar20[2];
        puVar2 = puVar20 + 3;
        puVar8 = puVar9 + 4;
        puVar20 = puVar20 + 4;
        puVar9[3] = *puVar2;
        iVar12 = iVar12 + 4;
        puVar9 = puVar8;
      } while (iVar12 != 0);
    }
    if (uVar3 != 0) {
      iVar12 = -uVar3;
      do {
        iVar12 = iVar12 + 1;
        *puVar8 = *puVar20;
        puVar8 = puVar8 + 1;
        puVar20 = puVar20 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  uVar22 = *(uint *)(param_2 + 0x68);
  lVar21 = *(long *)(param_2 + 0x60);
  if ((int)uVar22 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = 0x8000000000000000;
  }
  else {
    local_54 = uVar22;
    lVar10 = FUN_00421ed0(uVar16,8,&local_54);
    param_1[0xc] = lVar10;
    *(uint *)(param_1 + 0xd) = uVar22;
    *(uint *)((long)param_1 + 0x6c) = local_54;
    do {
      FUN_0043bd50(lVar10,lVar21);
      uVar22 = uVar22 - 1;
      lVar10 = lVar10 + 8;
      lVar21 = lVar21 + 8;
    } while (uVar22 != 0);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  uVar22 = *(uint *)(param_2 + 0x78);
  plVar23 = *(long **)(param_2 + 0x70);
  if ((int)uVar22 < 1) {
    param_1[0xe] = 0;
    param_1[0xf] = 0x8000000000000000;
  }
  else {
    local_54 = uVar22;
    plVar11 = (long *)FUN_00421ed0(uVar16,0x10,&local_54);
    param_1[0xe] = plVar11;
    *(uint *)(param_1 + 0xf) = uVar22;
    *(uint *)((long)param_1 + 0x7c) = local_54;
    do {
      lVar21 = *plVar23;
      *plVar11 = lVar21;
      if (lVar21 != 0) {
        FUN_004435a0();
      }
      *(short *)(plVar11 + 1) = (short)plVar23[1];
      uVar22 = uVar22 - 1;
      plVar23 = plVar23 + 2;
      plVar11 = plVar11 + 2;
    } while (uVar22 != 0);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  uVar22 = *(uint *)(param_2 + 0x88);
  lVar21 = *(long *)(param_2 + 0x80);
  if ((int)uVar22 < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = 0x8000000000000000;
  }
  else {
    local_54 = uVar22;
    lVar10 = FUN_00421ed0(uVar16,0x10,&local_54);
    param_1[0x10] = lVar10;
    *(uint *)(param_1 + 0x11) = uVar22;
    *(uint *)((long)param_1 + 0x8c) = local_54;
    do {
      FUN_0043bd50(lVar10,lVar21);
      *(undefined2 *)(lVar10 + 8) = *(undefined2 *)(lVar21 + 8);
      *(undefined2 *)(lVar10 + 10) = *(undefined2 *)(lVar21 + 10);
      uVar22 = uVar22 - 1;
      lVar10 = lVar10 + 0x10;
      lVar21 = lVar21 + 0x10;
    } while (uVar22 != 0);
  }
  return;
}

