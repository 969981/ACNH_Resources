
void FUN_0052cf60(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  uint local_34;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 1);
  puVar16 = (undefined8 *)*param_2;
  uVar15 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar8 < 1) {
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
  }
  else {
    local_34 = uVar8;
    puVar10 = (undefined8 *)FUN_00421ed0(uVar15,0x30,&local_34);
    *(uint *)(param_1 + 1) = uVar8;
    *(uint *)((long)param_1 + 0xc) = local_34;
    uVar2 = uVar8 & 3;
    *param_1 = (long)puVar10;
    if (2 < uVar8 - 1) {
      iVar14 = uVar2 - uVar8;
      puVar11 = puVar10;
      puVar17 = puVar16;
      do {
        uVar3 = puVar17[1];
        puVar10 = puVar11 + 0x18;
        *puVar11 = *puVar17;
        puVar11[1] = uVar3;
        iVar14 = iVar14 + 4;
        uVar3 = puVar17[2];
        uVar4 = puVar17[3];
        uVar5 = puVar17[5];
        puVar11[4] = puVar17[4];
        puVar11[5] = uVar5;
        puVar11[2] = uVar3;
        puVar11[3] = uVar4;
        uVar3 = puVar17[6];
        puVar11[7] = puVar17[7];
        uVar4 = puVar17[8];
        uVar6 = puVar17[9];
        uVar5 = puVar17[10];
        uVar7 = puVar17[0xb];
        puVar11[6] = uVar3;
        puVar11[10] = uVar5;
        puVar11[0xb] = uVar7;
        puVar11[8] = uVar4;
        puVar11[9] = uVar6;
        uVar3 = puVar17[0xc];
        puVar11[0xd] = puVar17[0xd];
        uVar4 = puVar17[0xe];
        uVar6 = puVar17[0xf];
        uVar5 = puVar17[0x10];
        uVar7 = puVar17[0x11];
        puVar11[0xc] = uVar3;
        puVar11[0x10] = uVar5;
        puVar11[0x11] = uVar7;
        puVar16 = puVar17 + 0x18;
        puVar11[0xe] = uVar4;
        puVar11[0xf] = uVar6;
        uVar3 = puVar17[0x13];
        puVar11[0x12] = puVar17[0x12];
        puVar11[0x13] = uVar3;
        uVar3 = puVar17[0x14];
        uVar4 = puVar17[0x15];
        uVar5 = puVar17[0x17];
        puVar11[0x16] = puVar17[0x16];
        puVar11[0x17] = uVar5;
        puVar11[0x14] = uVar3;
        puVar11[0x15] = uVar4;
        puVar11 = puVar10;
        puVar17 = puVar16;
      } while (iVar14 != 0);
    }
    if (uVar2 != 0) {
      iVar14 = -uVar2;
      do {
        uVar3 = puVar16[1];
        iVar14 = iVar14 + 1;
        *puVar10 = *puVar16;
        puVar10[1] = uVar3;
        uVar3 = puVar16[2];
        uVar4 = puVar16[3];
        puVar11 = puVar16 + 4;
        uVar5 = puVar16[5];
        puVar16 = puVar16 + 6;
        puVar10[4] = *puVar11;
        puVar10[5] = uVar5;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        puVar10 = puVar10 + 6;
      } while (iVar14 != 0);
    }
  }
  param_1[2] = 0;
  param_1[3] = -0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 3);
  puVar16 = (undefined8 *)param_2[2];
  if ((int)uVar8 < 1) {
    param_1[2] = 0;
    param_1[3] = -0x8000000000000000;
  }
  else {
    local_34 = uVar8;
    puVar10 = (undefined8 *)FUN_00421ed0(uVar15,0x30,&local_34);
    *(uint *)(param_1 + 3) = uVar8;
    *(uint *)((long)param_1 + 0x1c) = local_34;
    uVar2 = uVar8 & 3;
    param_1[2] = (long)puVar10;
    if (2 < uVar8 - 1) {
      iVar14 = uVar2 - uVar8;
      puVar11 = puVar10;
      puVar17 = puVar16;
      do {
        uVar3 = puVar17[1];
        puVar10 = puVar11 + 0x18;
        *puVar11 = *puVar17;
        puVar11[1] = uVar3;
        iVar14 = iVar14 + 4;
        uVar3 = puVar17[2];
        uVar4 = puVar17[3];
        uVar5 = puVar17[5];
        puVar11[4] = puVar17[4];
        puVar11[5] = uVar5;
        puVar11[2] = uVar3;
        puVar11[3] = uVar4;
        uVar3 = puVar17[6];
        puVar11[7] = puVar17[7];
        uVar4 = puVar17[8];
        uVar6 = puVar17[9];
        uVar5 = puVar17[10];
        uVar7 = puVar17[0xb];
        puVar11[6] = uVar3;
        puVar11[10] = uVar5;
        puVar11[0xb] = uVar7;
        puVar11[8] = uVar4;
        puVar11[9] = uVar6;
        uVar3 = puVar17[0xc];
        puVar11[0xd] = puVar17[0xd];
        uVar4 = puVar17[0xe];
        uVar6 = puVar17[0xf];
        uVar5 = puVar17[0x10];
        uVar7 = puVar17[0x11];
        puVar11[0xc] = uVar3;
        puVar11[0x10] = uVar5;
        puVar11[0x11] = uVar7;
        puVar16 = puVar17 + 0x18;
        puVar11[0xe] = uVar4;
        puVar11[0xf] = uVar6;
        uVar3 = puVar17[0x13];
        puVar11[0x12] = puVar17[0x12];
        puVar11[0x13] = uVar3;
        uVar3 = puVar17[0x14];
        uVar4 = puVar17[0x15];
        uVar5 = puVar17[0x17];
        puVar11[0x16] = puVar17[0x16];
        puVar11[0x17] = uVar5;
        puVar11[0x14] = uVar3;
        puVar11[0x15] = uVar4;
        puVar11 = puVar10;
        puVar17 = puVar16;
      } while (iVar14 != 0);
    }
    if (uVar2 != 0) {
      iVar14 = -uVar2;
      do {
        uVar3 = puVar16[1];
        iVar14 = iVar14 + 1;
        *puVar10 = *puVar16;
        puVar10[1] = uVar3;
        uVar3 = puVar16[2];
        uVar4 = puVar16[3];
        puVar11 = puVar16 + 4;
        uVar5 = puVar16[5];
        puVar16 = puVar16 + 6;
        puVar10[4] = *puVar11;
        puVar10[5] = uVar5;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        puVar10 = puVar10 + 6;
      } while (iVar14 != 0);
    }
  }
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 5);
  puVar16 = (undefined8 *)param_2[4];
  if ((int)uVar8 < 1) {
    param_1[4] = 0;
    param_1[5] = -0x8000000000000000;
  }
  else {
    local_34 = uVar8;
    puVar10 = (undefined8 *)FUN_00421ed0(uVar15,0x30,&local_34);
    *(uint *)(param_1 + 5) = uVar8;
    *(uint *)((long)param_1 + 0x2c) = local_34;
    uVar2 = uVar8 & 3;
    param_1[4] = (long)puVar10;
    if (2 < uVar8 - 1) {
      iVar14 = uVar2 - uVar8;
      puVar11 = puVar10;
      puVar17 = puVar16;
      do {
        uVar3 = puVar17[1];
        puVar10 = puVar11 + 0x18;
        *puVar11 = *puVar17;
        puVar11[1] = uVar3;
        iVar14 = iVar14 + 4;
        uVar3 = puVar17[2];
        uVar4 = puVar17[3];
        uVar5 = puVar17[5];
        puVar11[4] = puVar17[4];
        puVar11[5] = uVar5;
        puVar11[2] = uVar3;
        puVar11[3] = uVar4;
        uVar3 = puVar17[6];
        puVar11[7] = puVar17[7];
        uVar4 = puVar17[8];
        uVar6 = puVar17[9];
        uVar5 = puVar17[10];
        uVar7 = puVar17[0xb];
        puVar11[6] = uVar3;
        puVar11[10] = uVar5;
        puVar11[0xb] = uVar7;
        puVar11[8] = uVar4;
        puVar11[9] = uVar6;
        uVar3 = puVar17[0xc];
        puVar11[0xd] = puVar17[0xd];
        uVar4 = puVar17[0xe];
        uVar6 = puVar17[0xf];
        uVar5 = puVar17[0x10];
        uVar7 = puVar17[0x11];
        puVar11[0xc] = uVar3;
        puVar11[0x10] = uVar5;
        puVar11[0x11] = uVar7;
        puVar16 = puVar17 + 0x18;
        puVar11[0xe] = uVar4;
        puVar11[0xf] = uVar6;
        uVar3 = puVar17[0x13];
        puVar11[0x12] = puVar17[0x12];
        puVar11[0x13] = uVar3;
        uVar3 = puVar17[0x14];
        uVar4 = puVar17[0x15];
        uVar5 = puVar17[0x17];
        puVar11[0x16] = puVar17[0x16];
        puVar11[0x17] = uVar5;
        puVar11[0x14] = uVar3;
        puVar11[0x15] = uVar4;
        puVar11 = puVar10;
        puVar17 = puVar16;
      } while (iVar14 != 0);
    }
    if (uVar2 != 0) {
      iVar14 = -uVar2;
      do {
        uVar3 = puVar16[1];
        iVar14 = iVar14 + 1;
        *puVar10 = *puVar16;
        puVar10[1] = uVar3;
        uVar3 = puVar16[2];
        uVar4 = puVar16[3];
        puVar11 = puVar16 + 4;
        uVar5 = puVar16[5];
        puVar16 = puVar16 + 6;
        puVar10[4] = *puVar11;
        puVar10[5] = uVar5;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        puVar10 = puVar10 + 6;
      } while (iVar14 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 7);
  puVar16 = (undefined8 *)param_2[6];
  if ((int)uVar8 < 1) {
    param_1[6] = 0;
    param_1[7] = -0x8000000000000000;
  }
  else {
    local_34 = uVar8;
    puVar10 = (undefined8 *)FUN_00421ed0(uVar15,0x40,&local_34);
    *(uint *)(param_1 + 7) = uVar8;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    uVar2 = uVar8 & 3;
    param_1[6] = (long)puVar10;
    if (2 < uVar8 - 1) {
      iVar14 = uVar2 - uVar8;
      puVar11 = puVar10;
      puVar17 = puVar16;
      do {
        uVar3 = *puVar17;
        uVar4 = puVar17[1];
        iVar14 = iVar14 + 4;
        uVar5 = puVar17[3];
        puVar11[2] = puVar17[2];
        puVar11[3] = uVar5;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        uVar3 = puVar17[4];
        uVar4 = puVar17[5];
        uVar5 = puVar17[7];
        puVar11[6] = puVar17[6];
        puVar11[7] = uVar5;
        puVar11[4] = uVar3;
        puVar11[5] = uVar4;
        uVar3 = puVar17[8];
        uVar4 = puVar17[10];
        uVar5 = puVar17[0xb];
        puVar11[9] = puVar17[9];
        puVar11[10] = uVar4;
        puVar11[0xb] = uVar5;
        uVar4 = puVar17[0xc];
        uVar6 = puVar17[0xd];
        uVar5 = puVar17[0xe];
        uVar7 = puVar17[0xf];
        puVar11[8] = uVar3;
        puVar11[0xe] = uVar5;
        puVar11[0xf] = uVar7;
        puVar11[0xc] = uVar4;
        puVar11[0xd] = uVar6;
        uVar3 = puVar17[0x10];
        uVar4 = puVar17[0x12];
        uVar5 = puVar17[0x13];
        puVar11[0x11] = puVar17[0x11];
        puVar11[0x12] = uVar4;
        puVar11[0x13] = uVar5;
        puVar16 = puVar17 + 0x20;
        uVar4 = puVar17[0x14];
        uVar6 = puVar17[0x15];
        uVar5 = puVar17[0x16];
        uVar7 = puVar17[0x17];
        puVar11[0x10] = uVar3;
        puVar11[0x16] = uVar5;
        puVar11[0x17] = uVar7;
        puVar10 = puVar11 + 0x20;
        puVar11[0x14] = uVar4;
        puVar11[0x15] = uVar6;
        uVar3 = puVar17[0x18];
        uVar4 = puVar17[0x19];
        uVar5 = puVar17[0x1b];
        puVar11[0x1a] = puVar17[0x1a];
        puVar11[0x1b] = uVar5;
        puVar11[0x18] = uVar3;
        puVar11[0x19] = uVar4;
        uVar3 = puVar17[0x1c];
        uVar4 = puVar17[0x1d];
        uVar5 = puVar17[0x1f];
        puVar11[0x1e] = puVar17[0x1e];
        puVar11[0x1f] = uVar5;
        puVar11[0x1c] = uVar3;
        puVar11[0x1d] = uVar4;
        puVar11 = puVar10;
        puVar17 = puVar16;
      } while (iVar14 != 0);
    }
    if (uVar2 != 0) {
      iVar14 = -uVar2;
      do {
        uVar3 = *puVar16;
        uVar4 = puVar16[1];
        iVar14 = iVar14 + 1;
        uVar5 = puVar16[3];
        puVar10[2] = puVar16[2];
        puVar10[3] = uVar5;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        uVar3 = puVar16[4];
        uVar4 = puVar16[5];
        puVar11 = puVar16 + 6;
        uVar5 = puVar16[7];
        puVar16 = puVar16 + 8;
        puVar10[6] = *puVar11;
        puVar10[7] = uVar5;
        puVar10[4] = uVar3;
        puVar10[5] = uVar4;
        puVar10 = puVar10 + 8;
      } while (iVar14 != 0);
    }
  }
  param_1[8] = 0;
  param_1[9] = -0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 9);
  puVar18 = (undefined1 *)param_2[8];
  if ((int)uVar8 < 1) {
    param_1[8] = 0;
    param_1[9] = -0x8000000000000000;
  }
  else {
    local_34 = uVar8;
    puVar12 = (undefined1 *)FUN_00421ed0(uVar15,1,&local_34);
    *(uint *)(param_1 + 9) = uVar8;
    *(uint *)((long)param_1 + 0x4c) = local_34;
    uVar2 = uVar8 & 3;
    param_1[8] = (long)puVar12;
    if (2 < uVar8 - 1) {
      iVar14 = uVar2 - uVar8;
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar18;
        puVar13[1] = puVar18[1];
        puVar13[2] = puVar18[2];
        puVar1 = puVar18 + 3;
        puVar12 = puVar13 + 4;
        puVar18 = puVar18 + 4;
        puVar13[3] = *puVar1;
        iVar14 = iVar14 + 4;
        puVar13 = puVar12;
      } while (iVar14 != 0);
    }
    if (uVar2 != 0) {
      iVar14 = -uVar2;
      do {
        iVar14 = iVar14 + 1;
        *puVar12 = *puVar18;
        puVar12 = puVar12 + 1;
        puVar18 = puVar18 + 1;
      } while (iVar14 != 0);
    }
  }
  lVar9 = param_2[10];
  *(undefined1 *)((long)param_1 + 0x54) = *(undefined1 *)((long)param_2 + 0x54);
  *(int *)(param_1 + 10) = (int)lVar9;
  return;
}

