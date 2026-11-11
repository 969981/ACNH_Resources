
void FUN_0052f010(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  void *pvVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  uint local_64;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  uVar10 = *(uint *)(param_2 + 1);
  pvVar18 = (void *)*param_2;
  uVar17 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar10 < 1) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
  }
  else {
    local_64 = uVar10;
    pvVar12 = (void *)FUN_00421ed0(uVar17,0x220,&local_64);
    *param_1 = pvVar12;
    *(uint *)(param_1 + 1) = uVar10;
    *(uint *)((long)param_1 + 0xc) = local_64;
    if (uVar10 != 1) {
      iVar22 = (uVar10 & 1) - uVar10;
      do {
        memcpy(pvVar12,pvVar18,0x220);
        pvVar2 = (void *)((long)pvVar12 + 0x220);
        pvVar3 = (void *)((long)pvVar18 + 0x220);
        pvVar12 = (void *)((long)pvVar12 + 0x440);
        pvVar18 = (void *)((long)pvVar18 + 0x440);
        memcpy(pvVar2,pvVar3,0x220);
        iVar22 = iVar22 + 2;
      } while (iVar22 != 0);
    }
    if ((uVar10 & 1) != 0) {
      memcpy(pvVar12,pvVar18,0x220);
    }
  }
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  uVar10 = *(uint *)(param_2 + 3);
  pvVar18 = (void *)param_2[2];
  if ((int)uVar10 < 1) {
    param_1[2] = 0;
    param_1[3] = 0x8000000000000000;
  }
  else {
    local_64 = uVar10;
    pvVar12 = (void *)FUN_00421ed0(uVar17,0x1e0,&local_64);
    param_1[2] = pvVar12;
    *(uint *)(param_1 + 3) = uVar10;
    *(uint *)((long)param_1 + 0x1c) = local_64;
    if (uVar10 != 1) {
      iVar22 = (uVar10 & 1) - uVar10;
      do {
        memcpy(pvVar12,pvVar18,0x1e0);
        pvVar2 = (void *)((long)pvVar12 + 0x1e0);
        pvVar3 = (void *)((long)pvVar18 + 0x1e0);
        pvVar12 = (void *)((long)pvVar12 + 0x3c0);
        pvVar18 = (void *)((long)pvVar18 + 0x3c0);
        memcpy(pvVar2,pvVar3,0x1e0);
        iVar22 = iVar22 + 2;
      } while (iVar22 != 0);
    }
    if ((uVar10 & 1) != 0) {
      memcpy(pvVar12,pvVar18,0x1e0);
    }
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar10 = *(uint *)(param_2 + 5);
  pvVar18 = (void *)param_2[4];
  if ((int)uVar10 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    local_64 = uVar10;
    pvVar12 = (void *)FUN_00421ed0(uVar17,0x1a0,&local_64);
    param_1[4] = pvVar12;
    *(uint *)(param_1 + 5) = uVar10;
    *(uint *)((long)param_1 + 0x2c) = local_64;
    if (uVar10 != 1) {
      iVar22 = (uVar10 & 1) - uVar10;
      do {
        memcpy(pvVar12,pvVar18,0x1a0);
        pvVar2 = (void *)((long)pvVar12 + 0x1a0);
        pvVar3 = (void *)((long)pvVar18 + 0x1a0);
        pvVar12 = (void *)((long)pvVar12 + 0x340);
        pvVar18 = (void *)((long)pvVar18 + 0x340);
        memcpy(pvVar2,pvVar3,0x1a0);
        iVar22 = iVar22 + 2;
      } while (iVar22 != 0);
    }
    if ((uVar10 & 1) != 0) {
      memcpy(pvVar12,pvVar18,0x1a0);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar10 = *(uint *)(param_2 + 7);
  pvVar18 = (void *)param_2[6];
  if ((int)uVar10 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_64 = uVar10;
    pvVar12 = (void *)FUN_00421ed0(uVar17,0x160,&local_64);
    param_1[6] = pvVar12;
    *(uint *)(param_1 + 7) = uVar10;
    *(uint *)((long)param_1 + 0x3c) = local_64;
    if (uVar10 != 1) {
      iVar22 = (uVar10 & 1) - uVar10;
      do {
        memcpy(pvVar12,pvVar18,0x160);
        pvVar2 = (void *)((long)pvVar12 + 0x160);
        pvVar3 = (void *)((long)pvVar18 + 0x160);
        pvVar12 = (void *)((long)pvVar12 + 0x2c0);
        pvVar18 = (void *)((long)pvVar18 + 0x2c0);
        memcpy(pvVar2,pvVar3,0x160);
        iVar22 = iVar22 + 2;
      } while (iVar22 != 0);
    }
    if ((uVar10 & 1) != 0) {
      memcpy(pvVar12,pvVar18,0x160);
    }
  }
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar10 = *(uint *)(param_2 + 9);
  pvVar18 = (void *)param_2[8];
  if ((int)uVar10 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    local_64 = uVar10;
    pvVar12 = (void *)FUN_00421ed0(uVar17,0xe0,&local_64);
    param_1[8] = pvVar12;
    *(uint *)(param_1 + 9) = uVar10;
    *(uint *)((long)param_1 + 0x4c) = local_64;
    uVar4 = uVar10 & 3;
    if (2 < uVar10 - 1) {
      iVar22 = uVar4 - uVar10;
      do {
        memcpy(pvVar12,pvVar18,0xe0);
        memcpy((void *)((long)pvVar12 + 0xe0),(void *)((long)pvVar18 + 0xe0),0xe0);
        memcpy((void *)((long)pvVar12 + 0x1c0),(void *)((long)pvVar18 + 0x1c0),0xe0);
        pvVar2 = (void *)((long)pvVar12 + 0x2a0);
        pvVar3 = (void *)((long)pvVar18 + 0x2a0);
        pvVar12 = (void *)((long)pvVar12 + 0x380);
        pvVar18 = (void *)((long)pvVar18 + 0x380);
        memcpy(pvVar2,pvVar3,0xe0);
        iVar22 = iVar22 + 4;
      } while (iVar22 != 0);
    }
    if (uVar4 != 0) {
      iVar22 = -uVar4;
      do {
        memcpy(pvVar12,pvVar18,0xe0);
        iVar22 = iVar22 + 1;
        pvVar18 = (void *)((long)pvVar18 + 0xe0);
        pvVar12 = (void *)((long)pvVar12 + 0xe0);
      } while (iVar22 != 0);
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  uVar10 = *(uint *)(param_2 + 0xb);
  pvVar18 = (void *)param_2[10];
  if ((int)uVar10 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    local_64 = uVar10;
    pvVar12 = (void *)FUN_00421ed0(uVar17,0xb0,&local_64);
    param_1[10] = pvVar12;
    *(uint *)(param_1 + 0xb) = uVar10;
    *(uint *)((long)param_1 + 0x5c) = local_64;
    uVar4 = uVar10 & 3;
    if (2 < uVar10 - 1) {
      iVar22 = uVar4 - uVar10;
      do {
        memcpy(pvVar12,pvVar18,0xb0);
        memcpy((void *)((long)pvVar12 + 0xb0),(void *)((long)pvVar18 + 0xb0),0xb0);
        memcpy((void *)((long)pvVar12 + 0x160),(void *)((long)pvVar18 + 0x160),0xb0);
        pvVar2 = (void *)((long)pvVar12 + 0x210);
        pvVar3 = (void *)((long)pvVar18 + 0x210);
        pvVar12 = (void *)((long)pvVar12 + 0x2c0);
        pvVar18 = (void *)((long)pvVar18 + 0x2c0);
        memcpy(pvVar2,pvVar3,0xb0);
        iVar22 = iVar22 + 4;
      } while (iVar22 != 0);
    }
    if (uVar4 != 0) {
      iVar22 = -uVar4;
      do {
        memcpy(pvVar12,pvVar18,0xb0);
        iVar22 = iVar22 + 1;
        pvVar18 = (void *)((long)pvVar18 + 0xb0);
        pvVar12 = (void *)((long)pvVar12 + 0xb0);
      } while (iVar22 != 0);
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  uVar10 = *(uint *)(param_2 + 0xd);
  puVar19 = (undefined8 *)param_2[0xc];
  if ((int)uVar10 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = 0x8000000000000000;
  }
  else {
    local_64 = uVar10;
    puVar13 = (undefined8 *)FUN_00421ed0(uVar17,0x80,&local_64);
    *(uint *)(param_1 + 0xd) = uVar10;
    *(uint *)((long)param_1 + 0x6c) = local_64;
    uVar4 = uVar10 & 3;
    param_1[0xc] = puVar13;
    if (2 < uVar10 - 1) {
      iVar22 = uVar4 - uVar10;
      puVar14 = puVar13;
      puVar20 = puVar19;
      do {
        uVar5 = *puVar20;
        uVar6 = puVar20[1];
        iVar22 = iVar22 + 4;
        uVar7 = puVar20[3];
        puVar14[2] = puVar20[2];
        puVar14[3] = uVar7;
        *puVar14 = uVar5;
        puVar14[1] = uVar6;
        uVar5 = puVar20[4];
        uVar6 = puVar20[5];
        uVar7 = puVar20[7];
        puVar14[6] = puVar20[6];
        puVar14[7] = uVar7;
        puVar14[4] = uVar5;
        puVar14[5] = uVar6;
        uVar5 = puVar20[8];
        uVar6 = puVar20[9];
        uVar7 = puVar20[0xb];
        puVar14[10] = puVar20[10];
        puVar14[0xb] = uVar7;
        puVar14[8] = uVar5;
        puVar14[9] = uVar6;
        uVar5 = puVar20[0xc];
        uVar6 = puVar20[0xd];
        uVar7 = puVar20[0xf];
        puVar14[0xe] = puVar20[0xe];
        puVar14[0xf] = uVar7;
        puVar14[0xc] = uVar5;
        puVar14[0xd] = uVar6;
        uVar5 = puVar20[0x10];
        uVar6 = puVar20[0x11];
        uVar7 = puVar20[0x13];
        puVar14[0x12] = puVar20[0x12];
        puVar14[0x13] = uVar7;
        puVar14[0x10] = uVar5;
        puVar14[0x11] = uVar6;
        uVar5 = puVar20[0x14];
        uVar6 = puVar20[0x15];
        uVar7 = puVar20[0x17];
        puVar14[0x16] = puVar20[0x16];
        puVar14[0x17] = uVar7;
        puVar14[0x14] = uVar5;
        puVar14[0x15] = uVar6;
        uVar5 = puVar20[0x18];
        uVar6 = puVar20[0x19];
        uVar7 = puVar20[0x1b];
        puVar14[0x1a] = puVar20[0x1a];
        puVar14[0x1b] = uVar7;
        puVar14[0x18] = uVar5;
        puVar14[0x19] = uVar6;
        uVar5 = puVar20[0x1c];
        uVar6 = puVar20[0x1d];
        uVar7 = puVar20[0x1f];
        puVar14[0x1e] = puVar20[0x1e];
        puVar14[0x1f] = uVar7;
        puVar14[0x1c] = uVar5;
        puVar14[0x1d] = uVar6;
        uVar5 = puVar20[0x20];
        uVar6 = puVar20[0x21];
        uVar7 = puVar20[0x23];
        puVar14[0x22] = puVar20[0x22];
        puVar14[0x23] = uVar7;
        puVar14[0x20] = uVar5;
        puVar14[0x21] = uVar6;
        uVar5 = puVar20[0x24];
        uVar6 = puVar20[0x25];
        uVar7 = puVar20[0x27];
        puVar14[0x26] = puVar20[0x26];
        puVar14[0x27] = uVar7;
        puVar14[0x24] = uVar5;
        puVar14[0x25] = uVar6;
        uVar5 = puVar20[0x28];
        uVar6 = puVar20[0x29];
        uVar7 = puVar20[0x2b];
        puVar14[0x2a] = puVar20[0x2a];
        puVar14[0x2b] = uVar7;
        puVar14[0x28] = uVar5;
        puVar14[0x29] = uVar6;
        uVar5 = puVar20[0x2c];
        uVar6 = puVar20[0x2d];
        uVar7 = puVar20[0x2f];
        puVar14[0x2e] = puVar20[0x2e];
        puVar14[0x2f] = uVar7;
        puVar13 = puVar14 + 0x40;
        puVar14[0x2c] = uVar5;
        puVar14[0x2d] = uVar6;
        puVar19 = puVar20 + 0x40;
        uVar5 = puVar20[0x30];
        uVar6 = puVar20[0x31];
        uVar7 = puVar20[0x33];
        puVar14[0x32] = puVar20[0x32];
        puVar14[0x33] = uVar7;
        puVar14[0x30] = uVar5;
        puVar14[0x31] = uVar6;
        uVar5 = puVar20[0x34];
        uVar6 = puVar20[0x35];
        uVar7 = puVar20[0x37];
        puVar14[0x36] = puVar20[0x36];
        puVar14[0x37] = uVar7;
        puVar14[0x34] = uVar5;
        puVar14[0x35] = uVar6;
        uVar5 = puVar20[0x38];
        uVar6 = puVar20[0x39];
        uVar7 = puVar20[0x3b];
        puVar14[0x3a] = puVar20[0x3a];
        puVar14[0x3b] = uVar7;
        puVar14[0x38] = uVar5;
        puVar14[0x39] = uVar6;
        uVar5 = puVar20[0x3c];
        uVar6 = puVar20[0x3d];
        uVar7 = puVar20[0x3f];
        puVar14[0x3e] = puVar20[0x3e];
        puVar14[0x3f] = uVar7;
        puVar14[0x3c] = uVar5;
        puVar14[0x3d] = uVar6;
        puVar14 = puVar13;
        puVar20 = puVar19;
      } while (iVar22 != 0);
    }
    if (uVar4 != 0) {
      iVar22 = -uVar4;
      do {
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        iVar22 = iVar22 + 1;
        uVar7 = puVar19[3];
        puVar13[2] = puVar19[2];
        puVar13[3] = uVar7;
        *puVar13 = uVar5;
        puVar13[1] = uVar6;
        uVar5 = puVar19[4];
        uVar6 = puVar19[5];
        uVar7 = puVar19[7];
        puVar13[6] = puVar19[6];
        puVar13[7] = uVar7;
        puVar13[4] = uVar5;
        puVar13[5] = uVar6;
        uVar5 = puVar19[8];
        uVar6 = puVar19[9];
        uVar7 = puVar19[0xb];
        puVar13[10] = puVar19[10];
        puVar13[0xb] = uVar7;
        puVar13[8] = uVar5;
        puVar13[9] = uVar6;
        uVar5 = puVar19[0xc];
        uVar6 = puVar19[0xd];
        puVar14 = puVar19 + 0xe;
        uVar7 = puVar19[0xf];
        puVar19 = puVar19 + 0x10;
        puVar13[0xe] = *puVar14;
        puVar13[0xf] = uVar7;
        puVar13[0xc] = uVar5;
        puVar13[0xd] = uVar6;
        puVar13 = puVar13 + 0x10;
      } while (iVar22 != 0);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  uVar10 = *(uint *)(param_2 + 0xf);
  puVar19 = (undefined8 *)param_2[0xe];
  if ((int)uVar10 < 1) {
    param_1[0xe] = 0;
    param_1[0xf] = 0x8000000000000000;
  }
  else {
    local_64 = uVar10;
    puVar13 = (undefined8 *)FUN_00421ed0(uVar17,0x40,&local_64);
    *(uint *)(param_1 + 0xf) = uVar10;
    *(uint *)((long)param_1 + 0x7c) = local_64;
    uVar4 = uVar10 & 3;
    param_1[0xe] = puVar13;
    if (2 < uVar10 - 1) {
      iVar22 = uVar4 - uVar10;
      puVar14 = puVar13;
      puVar20 = puVar19;
      do {
        uVar5 = *puVar20;
        uVar6 = puVar20[1];
        iVar22 = iVar22 + 4;
        uVar7 = puVar20[3];
        puVar14[2] = puVar20[2];
        puVar14[3] = uVar7;
        *puVar14 = uVar5;
        puVar14[1] = uVar6;
        uVar5 = puVar20[4];
        uVar6 = puVar20[5];
        uVar7 = puVar20[7];
        puVar14[6] = puVar20[6];
        puVar14[7] = uVar7;
        puVar14[4] = uVar5;
        puVar14[5] = uVar6;
        uVar5 = puVar20[8];
        uVar6 = puVar20[10];
        uVar7 = puVar20[0xb];
        puVar14[9] = puVar20[9];
        puVar14[10] = uVar6;
        puVar14[0xb] = uVar7;
        uVar6 = puVar20[0xc];
        uVar8 = puVar20[0xd];
        uVar7 = puVar20[0xe];
        uVar9 = puVar20[0xf];
        puVar14[8] = uVar5;
        puVar14[0xe] = uVar7;
        puVar14[0xf] = uVar9;
        puVar14[0xc] = uVar6;
        puVar14[0xd] = uVar8;
        uVar5 = puVar20[0x10];
        uVar6 = puVar20[0x12];
        uVar7 = puVar20[0x13];
        puVar14[0x11] = puVar20[0x11];
        puVar14[0x12] = uVar6;
        puVar14[0x13] = uVar7;
        puVar19 = puVar20 + 0x20;
        uVar6 = puVar20[0x14];
        uVar8 = puVar20[0x15];
        uVar7 = puVar20[0x16];
        uVar9 = puVar20[0x17];
        puVar14[0x10] = uVar5;
        puVar14[0x16] = uVar7;
        puVar14[0x17] = uVar9;
        puVar13 = puVar14 + 0x20;
        puVar14[0x14] = uVar6;
        puVar14[0x15] = uVar8;
        uVar5 = puVar20[0x18];
        uVar6 = puVar20[0x19];
        uVar7 = puVar20[0x1b];
        puVar14[0x1a] = puVar20[0x1a];
        puVar14[0x1b] = uVar7;
        puVar14[0x18] = uVar5;
        puVar14[0x19] = uVar6;
        uVar5 = puVar20[0x1c];
        uVar6 = puVar20[0x1d];
        uVar7 = puVar20[0x1f];
        puVar14[0x1e] = puVar20[0x1e];
        puVar14[0x1f] = uVar7;
        puVar14[0x1c] = uVar5;
        puVar14[0x1d] = uVar6;
        puVar14 = puVar13;
        puVar20 = puVar19;
      } while (iVar22 != 0);
    }
    if (uVar4 != 0) {
      iVar22 = -uVar4;
      do {
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        iVar22 = iVar22 + 1;
        uVar7 = puVar19[3];
        puVar13[2] = puVar19[2];
        puVar13[3] = uVar7;
        *puVar13 = uVar5;
        puVar13[1] = uVar6;
        uVar5 = puVar19[4];
        uVar6 = puVar19[5];
        puVar14 = puVar19 + 6;
        uVar7 = puVar19[7];
        puVar19 = puVar19 + 8;
        puVar13[6] = *puVar14;
        puVar13[7] = uVar7;
        puVar13[4] = uVar5;
        puVar13[5] = uVar6;
        puVar13 = puVar13 + 8;
      } while (iVar22 != 0);
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  uVar10 = *(uint *)(param_2 + 0x11);
  puVar21 = (undefined1 *)param_2[0x10];
  if ((int)uVar10 < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = 0x8000000000000000;
  }
  else {
    local_64 = uVar10;
    puVar15 = (undefined1 *)FUN_00421ed0(uVar17,1,&local_64);
    *(uint *)(param_1 + 0x11) = uVar10;
    *(uint *)((long)param_1 + 0x8c) = local_64;
    uVar4 = uVar10 & 3;
    param_1[0x10] = puVar15;
    if (2 < uVar10 - 1) {
      iVar22 = uVar4 - uVar10;
      puVar16 = puVar15;
      do {
        *puVar16 = *puVar21;
        puVar16[1] = puVar21[1];
        puVar16[2] = puVar21[2];
        puVar1 = puVar21 + 3;
        puVar15 = puVar16 + 4;
        puVar21 = puVar21 + 4;
        puVar16[3] = *puVar1;
        iVar22 = iVar22 + 4;
        puVar16 = puVar15;
      } while (iVar22 != 0);
    }
    if (uVar4 != 0) {
      iVar22 = -uVar4;
      do {
        iVar22 = iVar22 + 1;
        *puVar15 = *puVar21;
        puVar15 = puVar15 + 1;
        puVar21 = puVar21 + 1;
      } while (iVar22 != 0);
    }
  }
  uVar11 = *(undefined4 *)(param_2 + 0x12);
  *(undefined1 *)((long)param_1 + 0x94) = *(undefined1 *)((long)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x12) = uVar11;
  return;
}

