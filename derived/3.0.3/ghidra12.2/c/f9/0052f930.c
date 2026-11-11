
void FUN_0052f930(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined2 *puVar19;
  uint local_38;
  uint local_34;
  
  FUN_0052c800();
  *param_1 = &PTR_LAB_048d6598;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x50);
  puVar17 = *(undefined8 **)(param_2 + 0x48);
  uVar16 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar7;
  if ((int)uVar7 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    puVar8 = (undefined8 *)FUN_00421ed0(uVar16,0x40,&local_38);
    *(uint *)(param_1 + 10) = uVar7;
    *(uint *)((long)param_1 + 0x54) = local_38;
    uVar2 = uVar7 & 3;
    param_1[9] = puVar8;
    if (2 < uVar7 - 1) {
      iVar12 = uVar2 - uVar7;
      puVar9 = puVar8;
      puVar18 = puVar17;
      do {
        uVar13 = puVar18[1];
        puVar9[3] = puVar18[3];
        uVar14 = puVar18[2];
        *puVar9 = *puVar18;
        puVar9[1] = uVar13;
        puVar9[2] = uVar14;
        uVar14 = puVar18[5];
        puVar9[7] = puVar18[7];
        uVar13 = puVar18[4];
        uVar15 = puVar18[6];
        puVar9[5] = uVar14;
        puVar9[6] = uVar15;
        puVar9[4] = uVar13;
        uVar3 = puVar18[0xd];
        uVar13 = puVar18[0xe];
        uVar4 = puVar18[0xf];
        puVar9[0xc] = puVar18[0xc];
        uVar14 = puVar18[8];
        uVar5 = puVar18[9];
        puVar8 = puVar9 + 0x20;
        uVar15 = puVar18[10];
        uVar6 = puVar18[0xb];
        puVar9[0xd] = uVar3;
        puVar9[0xe] = uVar13;
        puVar9[0xf] = uVar4;
        puVar17 = puVar18 + 0x20;
        puVar9[10] = uVar15;
        puVar9[0xb] = uVar6;
        iVar12 = iVar12 + 4;
        puVar9[8] = uVar14;
        puVar9[9] = uVar5;
        uVar13 = puVar18[0x10];
        uVar14 = puVar18[0x11];
        uVar15 = puVar18[0x13];
        puVar9[0x12] = puVar18[0x12];
        puVar9[0x13] = uVar15;
        puVar9[0x10] = uVar13;
        puVar9[0x11] = uVar14;
        uVar13 = puVar18[0x14];
        uVar14 = puVar18[0x15];
        uVar15 = puVar18[0x17];
        puVar9[0x16] = puVar18[0x16];
        puVar9[0x17] = uVar15;
        puVar9[0x14] = uVar13;
        puVar9[0x15] = uVar14;
        uVar13 = puVar18[0x18];
        uVar14 = puVar18[0x19];
        uVar15 = puVar18[0x1b];
        puVar9[0x1a] = puVar18[0x1a];
        puVar9[0x1b] = uVar15;
        puVar9[0x18] = uVar13;
        puVar9[0x19] = uVar14;
        uVar13 = puVar18[0x1c];
        uVar14 = puVar18[0x1d];
        uVar15 = puVar18[0x1f];
        puVar9[0x1e] = puVar18[0x1e];
        puVar9[0x1f] = uVar15;
        puVar9[0x1c] = uVar13;
        puVar9[0x1d] = uVar14;
        puVar9 = puVar8;
        puVar18 = puVar17;
      } while (iVar12 != 0);
    }
    if (uVar2 != 0) {
      iVar12 = -uVar2;
      do {
        uVar13 = puVar17[1];
        puVar8[3] = puVar17[3];
        puVar8[1] = uVar13;
        uVar13 = puVar17[5];
        puVar8[7] = puVar17[7];
        puVar8[5] = uVar13;
        uVar13 = *puVar17;
        puVar8[2] = puVar17[2];
        *puVar8 = uVar13;
        uVar13 = puVar17[4];
        puVar8[6] = puVar17[6];
        puVar8[4] = uVar13;
        puVar8 = puVar8 + 8;
        puVar17 = puVar17 + 8;
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x60);
  puVar19 = *(undefined2 **)(param_2 + 0x58);
  local_34 = uVar7;
  if ((int)uVar7 < 1) {
    param_1[0xb] = 0;
    param_1[0xc] = 0x8000000000000000;
  }
  else {
    puVar10 = (undefined2 *)FUN_00421ed0(uVar16,2,&local_34);
    *(uint *)(param_1 + 0xc) = uVar7;
    *(uint *)((long)param_1 + 100) = local_34;
    uVar2 = uVar7 & 3;
    param_1[0xb] = puVar10;
    if (2 < uVar7 - 1) {
      iVar12 = uVar2 - uVar7;
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar19;
        puVar11[1] = puVar19[1];
        puVar11[2] = puVar19[2];
        puVar1 = puVar19 + 3;
        puVar10 = puVar11 + 4;
        puVar19 = puVar19 + 4;
        puVar11[3] = *puVar1;
        iVar12 = iVar12 + 4;
        puVar11 = puVar10;
      } while (iVar12 != 0);
    }
    if (uVar2 != 0) {
      iVar12 = -uVar2;
      do {
        iVar12 = iVar12 + 1;
        *puVar10 = *puVar19;
        puVar10 = puVar10 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  FUN_0052f010(param_1 + 0xe,param_2 + 0x70);
  return;
}

