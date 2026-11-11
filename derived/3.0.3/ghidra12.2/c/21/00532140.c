
void FUN_00532140(long *param_1,long *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  uint local_34;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 1);
  puVar15 = (undefined8 *)*param_2;
  uVar14 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar5 < 1) {
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined8 *)FUN_00421ed0(uVar14,8,&local_34);
    *(uint *)(param_1 + 1) = uVar5;
    *(uint *)((long)param_1 + 0xc) = local_34;
    uVar4 = uVar5 & 3;
    *param_1 = (long)puVar7;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar11 = puVar7;
      do {
        *puVar11 = *puVar15;
        puVar11[1] = puVar15[1];
        puVar11[2] = puVar15[2];
        puVar3 = puVar15 + 3;
        puVar7 = puVar11 + 4;
        puVar15 = puVar15 + 4;
        puVar11[3] = *puVar3;
        iVar13 = iVar13 + 4;
        puVar11 = puVar7;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar7 = *puVar15;
        puVar7 = puVar7 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar13 != 0);
    }
  }
  *(short *)(param_1 + 2) = (short)param_2[2];
  param_1[3] = 0;
  param_1[4] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 4);
  puVar16 = (undefined2 *)param_2[3];
  if ((int)uVar5 < 1) {
    param_1[3] = 0;
    param_1[4] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar14,2,&local_34);
    *(uint *)(param_1 + 4) = uVar5;
    *(uint *)((long)param_1 + 0x24) = local_34;
    uVar4 = uVar5 & 3;
    param_1[3] = (long)puVar8;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar12 = puVar8;
      do {
        *puVar12 = *puVar16;
        puVar12[1] = puVar16[1];
        puVar12[2] = puVar16[2];
        puVar1 = puVar16 + 3;
        puVar8 = puVar12 + 4;
        puVar16 = puVar16 + 4;
        puVar12[3] = *puVar1;
        iVar13 = iVar13 + 4;
        puVar12 = puVar8;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar8 = *puVar16;
        puVar8 = puVar8 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar13 != 0);
    }
  }
  *(short *)(param_1 + 5) = (short)param_2[5];
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 7);
  puVar17 = (undefined4 *)param_2[6];
  if ((int)uVar5 < 1) {
    param_1[6] = 0;
    param_1[7] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar9 = (undefined4 *)FUN_00421ed0(uVar14,4,&local_34);
    *(uint *)(param_1 + 7) = uVar5;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    uVar4 = uVar5 & 3;
    param_1[6] = (long)puVar9;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar17;
        puVar10[1] = puVar17[1];
        puVar10[2] = puVar17[2];
        puVar2 = puVar17 + 3;
        puVar9 = puVar10 + 4;
        puVar17 = puVar17 + 4;
        puVar10[3] = *puVar2;
        iVar13 = iVar13 + 4;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar9 = *puVar17;
        puVar9 = puVar9 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[8] = 0;
  param_1[9] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 9);
  puVar17 = (undefined4 *)param_2[8];
  if ((int)uVar5 < 1) {
    param_1[8] = 0;
    param_1[9] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar9 = (undefined4 *)FUN_00421ed0(uVar14,4,&local_34);
    *(uint *)(param_1 + 9) = uVar5;
    *(uint *)((long)param_1 + 0x4c) = local_34;
    uVar4 = uVar5 & 3;
    param_1[8] = (long)puVar9;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar17;
        puVar10[1] = puVar17[1];
        puVar10[2] = puVar17[2];
        puVar2 = puVar17 + 3;
        puVar9 = puVar10 + 4;
        puVar17 = puVar17 + 4;
        puVar10[3] = *puVar2;
        iVar13 = iVar13 + 4;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar9 = *puVar17;
        puVar9 = puVar9 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[10] = 0;
  param_1[0xb] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xb);
  puVar15 = (undefined8 *)param_2[10];
  if ((int)uVar5 < 1) {
    param_1[10] = 0;
    param_1[0xb] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined8 *)FUN_00421ed0(uVar14,8,&local_34);
    *(uint *)(param_1 + 0xb) = uVar5;
    *(uint *)((long)param_1 + 0x5c) = local_34;
    uVar4 = uVar5 & 3;
    param_1[10] = (long)puVar7;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar11 = puVar7;
      do {
        *puVar11 = *puVar15;
        puVar11[1] = puVar15[1];
        puVar11[2] = puVar15[2];
        puVar3 = puVar15 + 3;
        puVar7 = puVar11 + 4;
        puVar15 = puVar15 + 4;
        puVar11[3] = *puVar3;
        iVar13 = iVar13 + 4;
        puVar11 = puVar7;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar7 = *puVar15;
        puVar7 = puVar7 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xd);
  puVar17 = (undefined4 *)param_2[0xc];
  if ((int)uVar5 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar9 = (undefined4 *)FUN_00421ed0(uVar14,4,&local_34);
    *(uint *)(param_1 + 0xd) = uVar5;
    *(uint *)((long)param_1 + 0x6c) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0xc] = (long)puVar9;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar17;
        puVar10[1] = puVar17[1];
        puVar10[2] = puVar17[2];
        puVar2 = puVar17 + 3;
        puVar9 = puVar10 + 4;
        puVar17 = puVar17 + 4;
        puVar10[3] = *puVar2;
        iVar13 = iVar13 + 4;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar9 = *puVar17;
        puVar9 = puVar9 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xf);
  puVar17 = (undefined4 *)param_2[0xe];
  if ((int)uVar5 < 1) {
    param_1[0xe] = 0;
    param_1[0xf] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar9 = (undefined4 *)FUN_00421ed0(uVar14,4,&local_34);
    *(uint *)(param_1 + 0xf) = uVar5;
    *(uint *)((long)param_1 + 0x7c) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0xe] = (long)puVar9;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar17;
        puVar10[1] = puVar17[1];
        puVar10[2] = puVar17[2];
        puVar2 = puVar17 + 3;
        puVar9 = puVar10 + 4;
        puVar17 = puVar17 + 4;
        puVar10[3] = *puVar2;
        iVar13 = iVar13 + 4;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar9 = *puVar17;
        puVar9 = puVar9 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x11);
  puVar17 = (undefined4 *)param_2[0x10];
  if ((int)uVar5 < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar9 = (undefined4 *)FUN_00421ed0(uVar14,6,&local_34);
    *(uint *)(param_1 + 0x11) = uVar5;
    *(uint *)((long)param_1 + 0x8c) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x10] = (long)puVar9;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar10 = puVar9;
      do {
        uVar6 = *puVar17;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar17 + 1);
        *puVar10 = uVar6;
        uVar6 = *(undefined4 *)((long)puVar17 + 6);
        *(undefined2 *)((long)puVar10 + 10) = *(undefined2 *)((long)puVar17 + 10);
        *(undefined4 *)((long)puVar10 + 6) = uVar6;
        uVar6 = puVar17[3];
        *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar17 + 4);
        puVar10[3] = uVar6;
        uVar6 = *(undefined4 *)((long)puVar17 + 0x12);
        puVar16 = (undefined2 *)((long)puVar17 + 0x16);
        puVar9 = puVar10 + 6;
        puVar17 = puVar17 + 6;
        *(undefined2 *)((long)puVar10 + 0x16) = *puVar16;
        *(undefined4 *)((long)puVar10 + 0x12) = uVar6;
        iVar13 = iVar13 + 4;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        uVar6 = *puVar17;
        *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar17 + 1);
        *puVar9 = uVar6;
        puVar17 = (undefined4 *)((long)puVar17 + 6);
        iVar13 = iVar13 + 1;
        puVar9 = (undefined4 *)((long)puVar9 + 6);
      } while (iVar13 != 0);
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x13);
  puVar17 = (undefined4 *)param_2[0x12];
  if ((int)uVar5 < 1) {
    param_1[0x12] = 0;
    param_1[0x13] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar9 = (undefined4 *)FUN_00421ed0(uVar14,6,&local_34);
    *(uint *)(param_1 + 0x13) = uVar5;
    *(uint *)((long)param_1 + 0x9c) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x12] = (long)puVar9;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar10 = puVar9;
      do {
        uVar6 = *puVar17;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar17 + 1);
        *puVar10 = uVar6;
        uVar6 = *(undefined4 *)((long)puVar17 + 6);
        *(undefined2 *)((long)puVar10 + 10) = *(undefined2 *)((long)puVar17 + 10);
        *(undefined4 *)((long)puVar10 + 6) = uVar6;
        uVar6 = puVar17[3];
        *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar17 + 4);
        puVar10[3] = uVar6;
        uVar6 = *(undefined4 *)((long)puVar17 + 0x12);
        puVar16 = (undefined2 *)((long)puVar17 + 0x16);
        puVar9 = puVar10 + 6;
        puVar17 = puVar17 + 6;
        *(undefined2 *)((long)puVar10 + 0x16) = *puVar16;
        *(undefined4 *)((long)puVar10 + 0x12) = uVar6;
        iVar13 = iVar13 + 4;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        uVar6 = *puVar17;
        *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar17 + 1);
        *puVar9 = uVar6;
        puVar17 = (undefined4 *)((long)puVar17 + 6);
        iVar13 = iVar13 + 1;
        puVar9 = (undefined4 *)((long)puVar9 + 6);
      } while (iVar13 != 0);
    }
  }
  param_1[0x14] = 0;
  param_1[0x15] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x15);
  puVar17 = (undefined4 *)param_2[0x14];
  if ((int)uVar5 < 1) {
    param_1[0x14] = 0;
    param_1[0x15] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar9 = (undefined4 *)FUN_00421ed0(uVar14,6,&local_34);
    *(uint *)(param_1 + 0x15) = uVar5;
    *(uint *)((long)param_1 + 0xac) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x14] = (long)puVar9;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar10 = puVar9;
      do {
        uVar6 = *puVar17;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar17 + 1);
        *puVar10 = uVar6;
        uVar6 = *(undefined4 *)((long)puVar17 + 6);
        *(undefined2 *)((long)puVar10 + 10) = *(undefined2 *)((long)puVar17 + 10);
        *(undefined4 *)((long)puVar10 + 6) = uVar6;
        uVar6 = puVar17[3];
        *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar17 + 4);
        puVar10[3] = uVar6;
        uVar6 = *(undefined4 *)((long)puVar17 + 0x12);
        puVar16 = (undefined2 *)((long)puVar17 + 0x16);
        puVar9 = puVar10 + 6;
        puVar17 = puVar17 + 6;
        *(undefined2 *)((long)puVar10 + 0x16) = *puVar16;
        *(undefined4 *)((long)puVar10 + 0x12) = uVar6;
        iVar13 = iVar13 + 4;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        uVar6 = *puVar17;
        *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar17 + 1);
        *puVar9 = uVar6;
        puVar17 = (undefined4 *)((long)puVar17 + 6);
        iVar13 = iVar13 + 1;
        puVar9 = (undefined4 *)((long)puVar9 + 6);
      } while (iVar13 != 0);
    }
  }
  param_1[0x16] = 0;
  param_1[0x17] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x17);
  puVar17 = (undefined4 *)param_2[0x16];
  if ((int)uVar5 < 1) {
    param_1[0x16] = 0;
    param_1[0x17] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar9 = (undefined4 *)FUN_00421ed0(uVar14,4,&local_34);
    *(uint *)(param_1 + 0x17) = uVar5;
    *(uint *)((long)param_1 + 0xbc) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x16] = (long)puVar9;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar17;
        puVar10[1] = puVar17[1];
        puVar10[2] = puVar17[2];
        puVar2 = puVar17 + 3;
        puVar9 = puVar10 + 4;
        puVar17 = puVar17 + 4;
        puVar10[3] = *puVar2;
        iVar13 = iVar13 + 4;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar9 = *puVar17;
        puVar9 = puVar9 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0x18] = 0;
  param_1[0x19] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x19);
  puVar15 = (undefined8 *)param_2[0x18];
  if ((int)uVar5 < 1) {
    param_1[0x18] = 0;
    param_1[0x19] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined8 *)FUN_00421ed0(uVar14,8,&local_34);
    *(uint *)(param_1 + 0x19) = uVar5;
    *(uint *)((long)param_1 + 0xcc) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x18] = (long)puVar7;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar11 = puVar7;
      do {
        *puVar11 = *puVar15;
        puVar11[1] = puVar15[1];
        puVar11[2] = puVar15[2];
        puVar3 = puVar15 + 3;
        puVar7 = puVar11 + 4;
        puVar15 = puVar15 + 4;
        puVar11[3] = *puVar3;
        iVar13 = iVar13 + 4;
        puVar11 = puVar7;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar7 = *puVar15;
        puVar7 = puVar7 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x1b);
  puVar17 = (undefined4 *)param_2[0x1a];
  if ((int)uVar5 < 1) {
    param_1[0x1a] = 0;
    param_1[0x1b] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar9 = (undefined4 *)FUN_00421ed0(uVar14,6,&local_34);
    *(uint *)(param_1 + 0x1b) = uVar5;
    *(uint *)((long)param_1 + 0xdc) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x1a] = (long)puVar9;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar10 = puVar9;
      do {
        uVar6 = *puVar17;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar17 + 1);
        *puVar10 = uVar6;
        uVar6 = *(undefined4 *)((long)puVar17 + 6);
        *(undefined2 *)((long)puVar10 + 10) = *(undefined2 *)((long)puVar17 + 10);
        *(undefined4 *)((long)puVar10 + 6) = uVar6;
        uVar6 = puVar17[3];
        *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar17 + 4);
        puVar10[3] = uVar6;
        uVar6 = *(undefined4 *)((long)puVar17 + 0x12);
        puVar16 = (undefined2 *)((long)puVar17 + 0x16);
        puVar9 = puVar10 + 6;
        puVar17 = puVar17 + 6;
        *(undefined2 *)((long)puVar10 + 0x16) = *puVar16;
        *(undefined4 *)((long)puVar10 + 0x12) = uVar6;
        iVar13 = iVar13 + 4;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        uVar6 = *puVar17;
        *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar17 + 1);
        *puVar9 = uVar6;
        puVar17 = (undefined4 *)((long)puVar17 + 6);
        iVar13 = iVar13 + 1;
        puVar9 = (undefined4 *)((long)puVar9 + 6);
      } while (iVar13 != 0);
    }
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x1d);
  puVar15 = (undefined8 *)param_2[0x1c];
  if ((int)uVar5 < 1) {
    param_1[0x1c] = 0;
    param_1[0x1d] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined8 *)FUN_00421ed0(uVar14,8,&local_34);
    *(uint *)(param_1 + 0x1d) = uVar5;
    *(uint *)((long)param_1 + 0xec) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x1c] = (long)puVar7;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar11 = puVar7;
      do {
        *puVar11 = *puVar15;
        puVar11[1] = puVar15[1];
        puVar11[2] = puVar15[2];
        puVar3 = puVar15 + 3;
        puVar7 = puVar11 + 4;
        puVar15 = puVar15 + 4;
        puVar11[3] = *puVar3;
        iVar13 = iVar13 + 4;
        puVar11 = puVar7;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar7 = *puVar15;
        puVar7 = puVar7 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x1f);
  puVar16 = (undefined2 *)param_2[0x1e];
  if ((int)uVar5 < 1) {
    param_1[0x1e] = 0;
    param_1[0x1f] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar14,2,&local_34);
    *(uint *)(param_1 + 0x1f) = uVar5;
    *(uint *)((long)param_1 + 0xfc) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x1e] = (long)puVar8;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar12 = puVar8;
      do {
        *puVar12 = *puVar16;
        puVar12[1] = puVar16[1];
        puVar12[2] = puVar16[2];
        puVar1 = puVar16 + 3;
        puVar8 = puVar12 + 4;
        puVar16 = puVar16 + 4;
        puVar12[3] = *puVar1;
        iVar13 = iVar13 + 4;
        puVar12 = puVar8;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar8 = *puVar16;
        puVar8 = puVar8 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0x20] = 0;
  param_1[0x21] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x21);
  puVar16 = (undefined2 *)param_2[0x20];
  if ((int)uVar5 < 1) {
    param_1[0x20] = 0;
    param_1[0x21] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar14,2,&local_34);
    param_1[0x20] = (long)puVar8;
    *(uint *)((long)param_1 + 0x10c) = local_34;
    uVar4 = uVar5 & 3;
    *(uint *)(param_1 + 0x21) = uVar5;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar12 = puVar8;
      do {
        *puVar12 = *puVar16;
        puVar12[1] = puVar16[1];
        puVar12[2] = puVar16[2];
        puVar1 = puVar16 + 3;
        puVar8 = puVar12 + 4;
        puVar16 = puVar16 + 4;
        puVar12[3] = *puVar1;
        iVar13 = iVar13 + 4;
        puVar12 = puVar8;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar8 = *puVar16;
        puVar8 = puVar8 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0x22] = 0;
  param_1[0x23] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x23);
  puVar16 = (undefined2 *)param_2[0x22];
  if ((int)uVar5 < 1) {
    param_1[0x22] = 0;
    param_1[0x23] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar14,2,&local_34);
    param_1[0x22] = (long)puVar8;
    *(uint *)((long)param_1 + 0x11c) = local_34;
    uVar4 = uVar5 & 3;
    *(uint *)(param_1 + 0x23) = uVar5;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar12 = puVar8;
      do {
        *puVar12 = *puVar16;
        puVar12[1] = puVar16[1];
        puVar12[2] = puVar16[2];
        puVar1 = puVar16 + 3;
        puVar8 = puVar12 + 4;
        puVar16 = puVar16 + 4;
        puVar12[3] = *puVar1;
        iVar13 = iVar13 + 4;
        puVar12 = puVar8;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar8 = *puVar16;
        puVar8 = puVar8 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0x24] = 0;
  param_1[0x25] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x25);
  puVar16 = (undefined2 *)param_2[0x24];
  if ((int)uVar5 < 1) {
    param_1[0x24] = 0;
    param_1[0x25] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar14,2,&local_34);
    param_1[0x24] = (long)puVar8;
    *(uint *)((long)param_1 + 300) = local_34;
    uVar4 = uVar5 & 3;
    *(uint *)(param_1 + 0x25) = uVar5;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar12 = puVar8;
      do {
        *puVar12 = *puVar16;
        puVar12[1] = puVar16[1];
        puVar12[2] = puVar16[2];
        puVar1 = puVar16 + 3;
        puVar8 = puVar12 + 4;
        puVar16 = puVar16 + 4;
        puVar12[3] = *puVar1;
        iVar13 = iVar13 + 4;
        puVar12 = puVar8;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar8 = *puVar16;
        puVar8 = puVar8 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar13 != 0);
    }
  }
  return;
}

