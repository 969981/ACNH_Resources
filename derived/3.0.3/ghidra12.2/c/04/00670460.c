
void FUN_00670460(long *param_1,long *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined2 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint local_34;
  
  lVar8 = *param_2;
  *param_1 = lVar8;
  if (lVar8 != 0) {
    FUN_004435a0();
  }
  lVar8 = param_2[1];
  param_1[1] = lVar8;
  if (lVar8 != 0) {
    FUN_004435a0();
  }
  param_1[2] = 0;
  param_1[3] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 3);
  puVar18 = (undefined2 *)param_2[2];
  uVar17 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar7 < 1) {
    param_1[2] = 0;
    param_1[3] = -0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar9 = (undefined2 *)FUN_00421ed0(uVar17,2,&local_34);
    *(uint *)(param_1 + 3) = uVar7;
    *(uint *)((long)param_1 + 0x1c) = local_34;
    uVar2 = uVar7 & 3;
    param_1[2] = (long)puVar9;
    if (2 < uVar7 - 1) {
      iVar13 = uVar2 - uVar7;
      puVar12 = puVar9;
      do {
        *puVar12 = *puVar18;
        puVar12[1] = puVar18[1];
        puVar12[2] = puVar18[2];
        puVar1 = puVar18 + 3;
        puVar9 = puVar12 + 4;
        puVar18 = puVar18 + 4;
        puVar12[3] = *puVar1;
        iVar13 = iVar13 + 4;
        puVar12 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar2 != 0) {
      iVar13 = -uVar2;
      do {
        iVar13 = iVar13 + 1;
        *puVar9 = *puVar18;
        puVar9 = puVar9 + 1;
        puVar18 = puVar18 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 5);
  puVar19 = (undefined8 *)param_2[4];
  if ((int)uVar7 < 1) {
    param_1[4] = 0;
    param_1[5] = -0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar10 = (undefined8 *)FUN_00421ed0(uVar17,8,&local_34);
    *(uint *)(param_1 + 5) = uVar7;
    *(uint *)((long)param_1 + 0x2c) = local_34;
    uVar2 = uVar7 & 3;
    param_1[4] = (long)puVar10;
    if (2 < uVar7 - 1) {
      iVar13 = uVar2 - uVar7;
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar19;
        puVar11[1] = puVar19[1];
        puVar11[2] = puVar19[2];
        puVar20 = puVar19 + 3;
        puVar10 = puVar11 + 4;
        puVar19 = puVar19 + 4;
        puVar11[3] = *puVar20;
        iVar13 = iVar13 + 4;
        puVar11 = puVar10;
      } while (iVar13 != 0);
    }
    if (uVar2 != 0) {
      iVar13 = -uVar2;
      do {
        iVar13 = iVar13 + 1;
        *puVar10 = *puVar19;
        puVar10 = puVar10 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 7);
  puVar19 = (undefined8 *)param_2[6];
  if ((int)uVar7 < 1) {
    param_1[6] = 0;
    param_1[7] = -0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar10 = (undefined8 *)FUN_00421ed0(uVar17,8,&local_34);
    *(uint *)(param_1 + 7) = uVar7;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    uVar2 = uVar7 & 3;
    param_1[6] = (long)puVar10;
    if (2 < uVar7 - 1) {
      iVar13 = uVar2 - uVar7;
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar19;
        puVar11[1] = puVar19[1];
        puVar11[2] = puVar19[2];
        puVar20 = puVar19 + 3;
        puVar10 = puVar11 + 4;
        puVar19 = puVar19 + 4;
        puVar11[3] = *puVar20;
        iVar13 = iVar13 + 4;
        puVar11 = puVar10;
      } while (iVar13 != 0);
    }
    if (uVar2 != 0) {
      iVar13 = -uVar2;
      do {
        iVar13 = iVar13 + 1;
        *puVar10 = *puVar19;
        puVar10 = puVar10 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[8] = 0;
  param_1[9] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 9);
  puVar19 = (undefined8 *)param_2[8];
  if ((int)uVar7 < 1) {
    param_1[8] = 0;
    param_1[9] = -0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar10 = (undefined8 *)FUN_00421ed0(uVar17,0x40,&local_34);
    *(uint *)(param_1 + 9) = uVar7;
    *(uint *)((long)param_1 + 0x4c) = local_34;
    uVar2 = uVar7 & 3;
    param_1[8] = (long)puVar10;
    if (2 < uVar7 - 1) {
      iVar13 = uVar2 - uVar7;
      puVar11 = puVar10;
      puVar20 = puVar19;
      do {
        uVar14 = puVar20[1];
        puVar11[3] = puVar20[3];
        uVar15 = puVar20[2];
        *puVar11 = *puVar20;
        puVar11[1] = uVar14;
        puVar11[2] = uVar15;
        uVar15 = puVar20[5];
        puVar11[7] = puVar20[7];
        uVar14 = puVar20[4];
        uVar16 = puVar20[6];
        puVar11[5] = uVar15;
        puVar11[6] = uVar16;
        puVar11[4] = uVar14;
        uVar3 = puVar20[0xd];
        uVar14 = puVar20[0xe];
        uVar4 = puVar20[0xf];
        puVar11[0xc] = puVar20[0xc];
        uVar15 = puVar20[8];
        uVar5 = puVar20[9];
        puVar10 = puVar11 + 0x20;
        uVar16 = puVar20[10];
        uVar6 = puVar20[0xb];
        puVar11[0xd] = uVar3;
        puVar11[0xe] = uVar14;
        puVar11[0xf] = uVar4;
        puVar19 = puVar20 + 0x20;
        puVar11[10] = uVar16;
        puVar11[0xb] = uVar6;
        iVar13 = iVar13 + 4;
        puVar11[8] = uVar15;
        puVar11[9] = uVar5;
        uVar14 = puVar20[0x10];
        uVar15 = puVar20[0x11];
        uVar16 = puVar20[0x13];
        puVar11[0x12] = puVar20[0x12];
        puVar11[0x13] = uVar16;
        puVar11[0x10] = uVar14;
        puVar11[0x11] = uVar15;
        uVar14 = puVar20[0x14];
        uVar15 = puVar20[0x15];
        uVar16 = puVar20[0x17];
        puVar11[0x16] = puVar20[0x16];
        puVar11[0x17] = uVar16;
        puVar11[0x14] = uVar14;
        puVar11[0x15] = uVar15;
        uVar14 = puVar20[0x18];
        uVar15 = puVar20[0x19];
        uVar16 = puVar20[0x1b];
        puVar11[0x1a] = puVar20[0x1a];
        puVar11[0x1b] = uVar16;
        puVar11[0x18] = uVar14;
        puVar11[0x19] = uVar15;
        uVar14 = puVar20[0x1c];
        uVar15 = puVar20[0x1d];
        uVar16 = puVar20[0x1f];
        puVar11[0x1e] = puVar20[0x1e];
        puVar11[0x1f] = uVar16;
        puVar11[0x1c] = uVar14;
        puVar11[0x1d] = uVar15;
        puVar11 = puVar10;
        puVar20 = puVar19;
      } while (iVar13 != 0);
    }
    if (uVar2 != 0) {
      iVar13 = -uVar2;
      do {
        uVar14 = puVar19[1];
        puVar10[3] = puVar19[3];
        puVar10[1] = uVar14;
        uVar14 = puVar19[5];
        puVar10[7] = puVar19[7];
        puVar10[5] = uVar14;
        uVar14 = *puVar19;
        puVar10[2] = puVar19[2];
        *puVar10 = uVar14;
        uVar14 = puVar19[4];
        puVar10[6] = puVar19[6];
        puVar10[4] = uVar14;
        puVar10 = puVar10 + 8;
        puVar19 = puVar19 + 8;
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[10] = 0;
  param_1[0xb] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0xb);
  puVar19 = (undefined8 *)param_2[10];
  if ((int)uVar7 < 1) {
    param_1[10] = 0;
    param_1[0xb] = -0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar10 = (undefined8 *)FUN_00421ed0(uVar17,0x70,&local_34);
    *(uint *)(param_1 + 0xb) = uVar7;
    *(uint *)((long)param_1 + 0x5c) = local_34;
    uVar2 = uVar7 & 3;
    param_1[10] = (long)puVar10;
    if (2 < uVar7 - 1) {
      iVar13 = uVar2 - uVar7;
      puVar11 = puVar10;
      do {
        puVar11[1] = puVar19[1];
        uVar14 = puVar19[3];
        puVar11[5] = puVar19[5];
        puVar11[3] = uVar14;
        uVar14 = puVar19[7];
        puVar11[9] = puVar19[9];
        puVar11[7] = uVar14;
        uVar14 = puVar19[0xb];
        puVar11[0xd] = puVar19[0xd];
        puVar11[0xb] = uVar14;
        *puVar11 = *puVar19;
        uVar14 = puVar19[2];
        puVar11[4] = puVar19[4];
        puVar11[2] = uVar14;
        uVar14 = puVar19[6];
        puVar11[8] = puVar19[8];
        puVar11[6] = uVar14;
        uVar14 = puVar19[10];
        puVar11[0xc] = puVar19[0xc];
        puVar11[10] = uVar14;
        puVar11[0xf] = puVar19[0xf];
        uVar14 = puVar19[0x11];
        puVar11[0x13] = puVar19[0x13];
        puVar11[0x11] = uVar14;
        uVar14 = puVar19[0x15];
        puVar11[0x17] = puVar19[0x17];
        puVar11[0x15] = uVar14;
        uVar14 = puVar19[0x19];
        puVar11[0x1b] = puVar19[0x1b];
        puVar11[0x19] = uVar14;
        puVar11[0xe] = puVar19[0xe];
        uVar14 = puVar19[0x10];
        puVar11[0x12] = puVar19[0x12];
        puVar11[0x10] = uVar14;
        uVar14 = puVar19[0x14];
        puVar11[0x16] = puVar19[0x16];
        puVar11[0x14] = uVar14;
        uVar14 = puVar19[0x18];
        puVar11[0x1a] = puVar19[0x1a];
        puVar11[0x18] = uVar14;
        puVar11[0x1d] = puVar19[0x1d];
        uVar14 = puVar19[0x1f];
        puVar11[0x21] = puVar19[0x21];
        puVar11[0x1f] = uVar14;
        uVar14 = puVar19[0x23];
        puVar11[0x25] = puVar19[0x25];
        puVar11[0x23] = uVar14;
        uVar14 = puVar19[0x27];
        puVar11[0x29] = puVar19[0x29];
        puVar11[0x27] = uVar14;
        puVar11[0x1c] = puVar19[0x1c];
        uVar14 = puVar19[0x1e];
        puVar11[0x20] = puVar19[0x20];
        puVar11[0x1e] = uVar14;
        uVar14 = puVar19[0x22];
        puVar11[0x24] = puVar19[0x24];
        puVar11[0x22] = uVar14;
        uVar14 = puVar19[0x26];
        puVar11[0x28] = puVar19[0x28];
        puVar11[0x26] = uVar14;
        puVar11[0x2b] = puVar19[0x2b];
        uVar14 = puVar19[0x2d];
        puVar11[0x2f] = puVar19[0x2f];
        puVar11[0x2d] = uVar14;
        uVar14 = puVar19[0x31];
        puVar11[0x33] = puVar19[0x33];
        puVar11[0x31] = uVar14;
        uVar14 = puVar19[0x35];
        puVar11[0x37] = puVar19[0x37];
        puVar11[0x35] = uVar14;
        puVar11[0x2a] = puVar19[0x2a];
        uVar14 = puVar19[0x2c];
        puVar11[0x2e] = puVar19[0x2e];
        puVar11[0x2c] = uVar14;
        uVar14 = puVar19[0x30];
        puVar11[0x32] = puVar19[0x32];
        puVar11[0x30] = uVar14;
        uVar14 = puVar19[0x34];
        puVar20 = puVar19 + 0x36;
        puVar10 = puVar11 + 0x38;
        puVar19 = puVar19 + 0x38;
        puVar11[0x36] = *puVar20;
        puVar11[0x34] = uVar14;
        iVar13 = iVar13 + 4;
        puVar11 = puVar10;
      } while (iVar13 != 0);
    }
    if (uVar2 != 0) {
      iVar13 = -uVar2;
      do {
        puVar10[1] = puVar19[1];
        uVar14 = puVar19[3];
        puVar10[5] = puVar19[5];
        puVar10[3] = uVar14;
        uVar14 = puVar19[7];
        puVar10[9] = puVar19[9];
        puVar10[7] = uVar14;
        uVar14 = puVar19[0xb];
        puVar10[0xd] = puVar19[0xd];
        puVar10[0xb] = uVar14;
        *puVar10 = *puVar19;
        uVar14 = puVar19[2];
        puVar10[4] = puVar19[4];
        puVar10[2] = uVar14;
        uVar14 = puVar19[6];
        puVar10[8] = puVar19[8];
        puVar10[6] = uVar14;
        uVar14 = puVar19[10];
        puVar10[0xc] = puVar19[0xc];
        puVar10[10] = uVar14;
        puVar10 = puVar10 + 0xe;
        puVar19 = puVar19 + 0xe;
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0xd);
  puVar18 = (undefined2 *)param_2[0xc];
  if ((int)uVar7 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = -0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar9 = (undefined2 *)FUN_00421ed0(uVar17,2,&local_34);
    *(uint *)(param_1 + 0xd) = uVar7;
    *(uint *)((long)param_1 + 0x6c) = local_34;
    uVar2 = uVar7 & 3;
    param_1[0xc] = (long)puVar9;
    if (2 < uVar7 - 1) {
      iVar13 = uVar2 - uVar7;
      puVar12 = puVar9;
      do {
        *puVar12 = *puVar18;
        puVar12[1] = puVar18[1];
        puVar12[2] = puVar18[2];
        puVar1 = puVar18 + 3;
        puVar9 = puVar12 + 4;
        puVar18 = puVar18 + 4;
        puVar12[3] = *puVar1;
        iVar13 = iVar13 + 4;
        puVar12 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar2 != 0) {
      iVar13 = -uVar2;
      do {
        iVar13 = iVar13 + 1;
        *puVar9 = *puVar18;
        puVar9 = puVar9 + 1;
        puVar18 = puVar18 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0xf] = param_2[0xf];
  lVar8 = param_2[0x11];
  param_1[0x13] = param_2[0x13];
  param_1[0x11] = lVar8;
  lVar8 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xe] = lVar8;
  lVar8 = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  param_1[0x12] = lVar8;
  return;
}

