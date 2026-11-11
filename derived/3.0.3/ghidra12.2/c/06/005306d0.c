
void FUN_005306d0(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  undefined1 *puVar17;
  uint local_34;
  
  FUN_0052c800();
  *param_1 = &PTR_LAB_048d4d70;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x50);
  puVar15 = *(undefined4 **)(param_2 + 0x48);
  uVar14 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar5 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar14,6,&local_34);
    *(uint *)(param_1 + 10) = uVar5;
    *(uint *)((long)param_1 + 0x54) = local_34;
    uVar4 = uVar5 & 3;
    param_1[9] = puVar7;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar12 = puVar7;
      do {
        uVar6 = *puVar15;
        *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar15 + 1);
        *puVar12 = uVar6;
        uVar6 = *(undefined4 *)((long)puVar15 + 6);
        *(undefined2 *)((long)puVar12 + 10) = *(undefined2 *)((long)puVar15 + 10);
        *(undefined4 *)((long)puVar12 + 6) = uVar6;
        uVar6 = puVar15[3];
        *(undefined2 *)(puVar12 + 4) = *(undefined2 *)(puVar15 + 4);
        puVar12[3] = uVar6;
        uVar6 = *(undefined4 *)((long)puVar15 + 0x12);
        puVar16 = (undefined2 *)((long)puVar15 + 0x16);
        puVar7 = puVar12 + 6;
        puVar15 = puVar15 + 6;
        *(undefined2 *)((long)puVar12 + 0x16) = *puVar16;
        *(undefined4 *)((long)puVar12 + 0x12) = uVar6;
        iVar13 = iVar13 + 4;
        puVar12 = puVar7;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        uVar6 = *puVar15;
        *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(puVar15 + 1);
        *puVar7 = uVar6;
        puVar15 = (undefined4 *)((long)puVar15 + 6);
        iVar13 = iVar13 + 1;
        puVar7 = (undefined4 *)((long)puVar7 + 6);
      } while (iVar13 != 0);
    }
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x60);
  puVar16 = *(undefined2 **)(param_2 + 0x58);
  if ((int)uVar5 < 1) {
    param_1[0xb] = 0;
    param_1[0xc] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar14,2,&local_34);
    *(uint *)(param_1 + 0xc) = uVar5;
    *(uint *)((long)param_1 + 100) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0xb] = puVar8;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar11 = puVar8;
      do {
        *puVar11 = *puVar16;
        puVar11[1] = puVar16[1];
        puVar11[2] = puVar16[2];
        puVar2 = puVar16 + 3;
        puVar8 = puVar11 + 4;
        puVar16 = puVar16 + 4;
        puVar11[3] = *puVar2;
        iVar13 = iVar13 + 4;
        puVar11 = puVar8;
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
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x70);
  puVar16 = *(undefined2 **)(param_2 + 0x68);
  if ((int)uVar5 < 1) {
    param_1[0xd] = 0;
    param_1[0xe] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar14,2,&local_34);
    *(uint *)(param_1 + 0xe) = uVar5;
    *(uint *)((long)param_1 + 0x74) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0xd] = puVar8;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar11 = puVar8;
      do {
        *puVar11 = *puVar16;
        puVar11[1] = puVar16[1];
        puVar11[2] = puVar16[2];
        puVar2 = puVar16 + 3;
        puVar8 = puVar11 + 4;
        puVar16 = puVar16 + 4;
        puVar11[3] = *puVar2;
        iVar13 = iVar13 + 4;
        puVar11 = puVar8;
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
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x80);
  puVar16 = *(undefined2 **)(param_2 + 0x78);
  if ((int)uVar5 < 1) {
    param_1[0xf] = 0;
    param_1[0x10] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar14,2,&local_34);
    *(uint *)(param_1 + 0x10) = uVar5;
    *(uint *)((long)param_1 + 0x84) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0xf] = puVar8;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar11 = puVar8;
      do {
        *puVar11 = *puVar16;
        puVar11[1] = puVar16[1];
        puVar11[2] = puVar16[2];
        puVar2 = puVar16 + 3;
        puVar8 = puVar11 + 4;
        puVar16 = puVar16 + 4;
        puVar11[3] = *puVar2;
        iVar13 = iVar13 + 4;
        puVar11 = puVar8;
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
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x90);
  puVar17 = *(undefined1 **)(param_2 + 0x88);
  if ((int)uVar5 < 1) {
    param_1[0x11] = 0;
    param_1[0x12] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar9 = (undefined1 *)FUN_00421ed0(uVar14,1,&local_34);
    *(uint *)(param_1 + 0x12) = uVar5;
    *(uint *)((long)param_1 + 0x94) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x11] = puVar9;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar17;
        puVar10[1] = puVar17[1];
        puVar10[2] = puVar17[2];
        puVar1 = puVar17 + 3;
        puVar9 = puVar10 + 4;
        puVar17 = puVar17 + 4;
        puVar10[3] = *puVar1;
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
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xa0);
  puVar16 = *(undefined2 **)(param_2 + 0x98);
  if ((int)uVar5 < 1) {
    param_1[0x13] = 0;
    param_1[0x14] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar14,2,&local_34);
    *(uint *)(param_1 + 0x14) = uVar5;
    *(uint *)((long)param_1 + 0xa4) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x13] = puVar8;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar11 = puVar8;
      do {
        *puVar11 = *puVar16;
        puVar11[1] = puVar16[1];
        puVar11[2] = puVar16[2];
        puVar2 = puVar16 + 3;
        puVar8 = puVar11 + 4;
        puVar16 = puVar16 + 4;
        puVar11[3] = *puVar2;
        iVar13 = iVar13 + 4;
        puVar11 = puVar8;
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
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xb0);
  puVar15 = *(undefined4 **)(param_2 + 0xa8);
  if ((int)uVar5 < 1) {
    param_1[0x15] = 0;
    param_1[0x16] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar14,4,&local_34);
    *(uint *)(param_1 + 0x16) = uVar5;
    *(uint *)((long)param_1 + 0xb4) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x15] = puVar7;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar12 = puVar7;
      do {
        *puVar12 = *puVar15;
        puVar12[1] = puVar15[1];
        puVar12[2] = puVar15[2];
        puVar3 = puVar15 + 3;
        puVar7 = puVar12 + 4;
        puVar15 = puVar15 + 4;
        puVar12[3] = *puVar3;
        iVar13 = iVar13 + 4;
        puVar12 = puVar7;
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
  param_1[0x17] = 0;
  param_1[0x18] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xc0);
  puVar15 = *(undefined4 **)(param_2 + 0xb8);
  if ((int)uVar5 < 1) {
    param_1[0x17] = 0;
    param_1[0x18] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar14,4,&local_34);
    *(uint *)(param_1 + 0x18) = uVar5;
    *(uint *)((long)param_1 + 0xc4) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x17] = puVar7;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar12 = puVar7;
      do {
        *puVar12 = *puVar15;
        puVar12[1] = puVar15[1];
        puVar12[2] = puVar15[2];
        puVar3 = puVar15 + 3;
        puVar7 = puVar12 + 4;
        puVar15 = puVar15 + 4;
        puVar12[3] = *puVar3;
        iVar13 = iVar13 + 4;
        puVar12 = puVar7;
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
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xd0);
  puVar15 = *(undefined4 **)(param_2 + 200);
  if ((int)uVar5 < 1) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar14,4,&local_34);
    *(uint *)(param_1 + 0x1a) = uVar5;
    *(uint *)((long)param_1 + 0xd4) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x19] = puVar7;
    if (2 < uVar5 - 1) {
      iVar13 = uVar4 - uVar5;
      puVar12 = puVar7;
      do {
        *puVar12 = *puVar15;
        puVar12[1] = puVar15[1];
        puVar12[2] = puVar15[2];
        puVar3 = puVar15 + 3;
        puVar7 = puVar12 + 4;
        puVar15 = puVar15 + 4;
        puVar12[3] = *puVar3;
        iVar13 = iVar13 + 4;
        puVar12 = puVar7;
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
  uVar14 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)((long)param_1 + 0xdf) = *(undefined4 *)(param_2 + 0xdf);
  param_1[0x1b] = uVar14;
  return;
}

