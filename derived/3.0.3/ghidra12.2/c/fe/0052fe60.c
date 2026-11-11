
void FUN_0052fe60(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint local_34;
  
  FUN_0052c800();
  *param_1 = &PTR_LAB_048d68a8;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x50);
  puVar17 = *(undefined2 **)(param_2 + 0x48);
  uVar16 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar7 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar16,2,&local_34);
    *(uint *)(param_1 + 10) = uVar7;
    *(uint *)((long)param_1 + 0x54) = local_34;
    uVar2 = uVar7 & 3;
    param_1[9] = puVar8;
    if (2 < uVar7 - 1) {
      iVar12 = uVar2 - uVar7;
      puVar11 = puVar8;
      do {
        *puVar11 = *puVar17;
        puVar11[1] = puVar17[1];
        puVar11[2] = puVar17[2];
        puVar1 = puVar17 + 3;
        puVar8 = puVar11 + 4;
        puVar17 = puVar17 + 4;
        puVar11[3] = *puVar1;
        iVar12 = iVar12 + 4;
        puVar11 = puVar8;
      } while (iVar12 != 0);
    }
    if (uVar2 != 0) {
      iVar12 = -uVar2;
      do {
        iVar12 = iVar12 + 1;
        *puVar8 = *puVar17;
        puVar8 = puVar8 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x60);
  puVar17 = *(undefined2 **)(param_2 + 0x58);
  if ((int)uVar7 < 1) {
    param_1[0xb] = 0;
    param_1[0xc] = 0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar16,2,&local_34);
    *(uint *)(param_1 + 0xc) = uVar7;
    *(uint *)((long)param_1 + 100) = local_34;
    uVar2 = uVar7 & 3;
    param_1[0xb] = puVar8;
    if (2 < uVar7 - 1) {
      iVar12 = uVar2 - uVar7;
      puVar11 = puVar8;
      do {
        *puVar11 = *puVar17;
        puVar11[1] = puVar17[1];
        puVar11[2] = puVar17[2];
        puVar1 = puVar17 + 3;
        puVar8 = puVar11 + 4;
        puVar17 = puVar17 + 4;
        puVar11[3] = *puVar1;
        iVar12 = iVar12 + 4;
        puVar11 = puVar8;
      } while (iVar12 != 0);
    }
    if (uVar2 != 0) {
      iVar12 = -uVar2;
      do {
        iVar12 = iVar12 + 1;
        *puVar8 = *puVar17;
        puVar8 = puVar8 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x70);
  puVar18 = *(undefined8 **)(param_2 + 0x68);
  if ((int)uVar7 < 1) {
    param_1[0xd] = 0;
    param_1[0xe] = 0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar9 = (undefined8 *)FUN_00421ed0(uVar16,0x40,&local_34);
    *(uint *)(param_1 + 0xe) = uVar7;
    *(uint *)((long)param_1 + 0x74) = local_34;
    uVar2 = uVar7 & 3;
    param_1[0xd] = puVar9;
    if (2 < uVar7 - 1) {
      iVar12 = uVar2 - uVar7;
      puVar10 = puVar9;
      puVar19 = puVar18;
      do {
        uVar13 = puVar19[1];
        puVar10[3] = puVar19[3];
        uVar14 = puVar19[2];
        *puVar10 = *puVar19;
        puVar10[1] = uVar13;
        puVar10[2] = uVar14;
        uVar14 = puVar19[5];
        puVar10[7] = puVar19[7];
        uVar13 = puVar19[4];
        uVar15 = puVar19[6];
        puVar10[5] = uVar14;
        puVar10[6] = uVar15;
        puVar10[4] = uVar13;
        uVar3 = puVar19[0xd];
        uVar13 = puVar19[0xe];
        uVar4 = puVar19[0xf];
        puVar10[0xc] = puVar19[0xc];
        uVar14 = puVar19[8];
        uVar5 = puVar19[9];
        puVar9 = puVar10 + 0x20;
        uVar15 = puVar19[10];
        uVar6 = puVar19[0xb];
        puVar10[0xd] = uVar3;
        puVar10[0xe] = uVar13;
        puVar10[0xf] = uVar4;
        puVar18 = puVar19 + 0x20;
        puVar10[10] = uVar15;
        puVar10[0xb] = uVar6;
        iVar12 = iVar12 + 4;
        puVar10[8] = uVar14;
        puVar10[9] = uVar5;
        uVar13 = puVar19[0x10];
        uVar14 = puVar19[0x11];
        uVar15 = puVar19[0x13];
        puVar10[0x12] = puVar19[0x12];
        puVar10[0x13] = uVar15;
        puVar10[0x10] = uVar13;
        puVar10[0x11] = uVar14;
        uVar13 = puVar19[0x14];
        uVar14 = puVar19[0x15];
        uVar15 = puVar19[0x17];
        puVar10[0x16] = puVar19[0x16];
        puVar10[0x17] = uVar15;
        puVar10[0x14] = uVar13;
        puVar10[0x15] = uVar14;
        uVar13 = puVar19[0x18];
        uVar14 = puVar19[0x19];
        uVar15 = puVar19[0x1b];
        puVar10[0x1a] = puVar19[0x1a];
        puVar10[0x1b] = uVar15;
        puVar10[0x18] = uVar13;
        puVar10[0x19] = uVar14;
        uVar13 = puVar19[0x1c];
        uVar14 = puVar19[0x1d];
        uVar15 = puVar19[0x1f];
        puVar10[0x1e] = puVar19[0x1e];
        puVar10[0x1f] = uVar15;
        puVar10[0x1c] = uVar13;
        puVar10[0x1d] = uVar14;
        puVar10 = puVar9;
        puVar19 = puVar18;
      } while (iVar12 != 0);
    }
    if (uVar2 != 0) {
      iVar12 = -uVar2;
      do {
        uVar13 = puVar18[1];
        puVar9[3] = puVar18[3];
        puVar9[1] = uVar13;
        uVar13 = puVar18[5];
        puVar9[7] = puVar18[7];
        puVar9[5] = uVar13;
        uVar13 = *puVar18;
        puVar9[2] = puVar18[2];
        *puVar9 = uVar13;
        uVar13 = puVar18[4];
        puVar9[6] = puVar18[6];
        puVar9[4] = uVar13;
        puVar9 = puVar9 + 8;
        puVar18 = puVar18 + 8;
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x80);
  puVar17 = *(undefined2 **)(param_2 + 0x78);
  if ((int)uVar7 < 1) {
    param_1[0xf] = 0;
    param_1[0x10] = 0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar16,2,&local_34);
    *(uint *)(param_1 + 0x10) = uVar7;
    *(uint *)((long)param_1 + 0x84) = local_34;
    uVar2 = uVar7 & 3;
    param_1[0xf] = puVar8;
    if (2 < uVar7 - 1) {
      iVar12 = uVar2 - uVar7;
      puVar11 = puVar8;
      do {
        *puVar11 = *puVar17;
        puVar11[1] = puVar17[1];
        puVar11[2] = puVar17[2];
        puVar1 = puVar17 + 3;
        puVar8 = puVar11 + 4;
        puVar17 = puVar17 + 4;
        puVar11[3] = *puVar1;
        iVar12 = iVar12 + 4;
        puVar11 = puVar8;
      } while (iVar12 != 0);
    }
    if (uVar2 != 0) {
      iVar12 = -uVar2;
      do {
        iVar12 = iVar12 + 1;
        *puVar8 = *puVar17;
        puVar8 = puVar8 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar12 != 0);
    }
  }
  uVar16 = *(undefined8 *)(param_2 + 0x88);
  uVar13 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)((long)param_1 + 0x97) = *(undefined8 *)(param_2 + 0x97);
  param_1[0x11] = uVar16;
  param_1[0x12] = uVar13;
  return;
}

