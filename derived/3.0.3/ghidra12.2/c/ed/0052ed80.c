
void FUN_0052ed80(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint local_38;
  uint local_34;
  
  FUN_0052c800();
  *param_1 = &PTR_LAB_048d6208;
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 10) = uVar7;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x60);
  puVar17 = *(undefined2 **)(param_2 + 0x58);
  uVar16 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar8;
  if ((int)uVar8 < 1) {
    param_1[0xb] = 0;
    param_1[0xc] = 0x8000000000000000;
  }
  else {
    puVar9 = (undefined2 *)FUN_00421ed0(uVar16,2,&local_38);
    *(uint *)(param_1 + 0xc) = uVar8;
    *(uint *)((long)param_1 + 100) = local_38;
    uVar2 = uVar8 & 3;
    param_1[0xb] = puVar9;
    if (2 < uVar8 - 1) {
      iVar13 = uVar2 - uVar8;
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
    if (uVar2 != 0) {
      iVar13 = -uVar2;
      do {
        iVar13 = iVar13 + 1;
        *puVar9 = *puVar17;
        puVar9 = puVar9 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x70);
  puVar18 = *(undefined8 **)(param_2 + 0x68);
  local_34 = uVar8;
  if ((int)uVar8 < 1) {
    param_1[0xd] = 0;
    param_1[0xe] = 0x8000000000000000;
  }
  else {
    puVar11 = (undefined8 *)FUN_00421ed0(uVar16,0x40,&local_34);
    *(uint *)(param_1 + 0xe) = uVar8;
    *(uint *)((long)param_1 + 0x74) = local_34;
    uVar2 = uVar8 & 3;
    param_1[0xd] = puVar11;
    if (2 < uVar8 - 1) {
      iVar13 = uVar2 - uVar8;
      puVar12 = puVar11;
      puVar19 = puVar18;
      do {
        uVar16 = puVar19[1];
        puVar12[3] = puVar19[3];
        uVar14 = puVar19[2];
        *puVar12 = *puVar19;
        puVar12[1] = uVar16;
        puVar12[2] = uVar14;
        uVar14 = puVar19[5];
        puVar12[7] = puVar19[7];
        uVar16 = puVar19[4];
        uVar15 = puVar19[6];
        puVar12[5] = uVar14;
        puVar12[6] = uVar15;
        puVar12[4] = uVar16;
        uVar3 = puVar19[0xd];
        uVar16 = puVar19[0xe];
        uVar4 = puVar19[0xf];
        puVar12[0xc] = puVar19[0xc];
        uVar14 = puVar19[8];
        uVar5 = puVar19[9];
        puVar11 = puVar12 + 0x20;
        uVar15 = puVar19[10];
        uVar6 = puVar19[0xb];
        puVar12[0xd] = uVar3;
        puVar12[0xe] = uVar16;
        puVar12[0xf] = uVar4;
        puVar18 = puVar19 + 0x20;
        puVar12[10] = uVar15;
        puVar12[0xb] = uVar6;
        iVar13 = iVar13 + 4;
        puVar12[8] = uVar14;
        puVar12[9] = uVar5;
        uVar16 = puVar19[0x10];
        uVar14 = puVar19[0x11];
        uVar15 = puVar19[0x13];
        puVar12[0x12] = puVar19[0x12];
        puVar12[0x13] = uVar15;
        puVar12[0x10] = uVar16;
        puVar12[0x11] = uVar14;
        uVar16 = puVar19[0x14];
        uVar14 = puVar19[0x15];
        uVar15 = puVar19[0x17];
        puVar12[0x16] = puVar19[0x16];
        puVar12[0x17] = uVar15;
        puVar12[0x14] = uVar16;
        puVar12[0x15] = uVar14;
        uVar16 = puVar19[0x18];
        uVar14 = puVar19[0x19];
        uVar15 = puVar19[0x1b];
        puVar12[0x1a] = puVar19[0x1a];
        puVar12[0x1b] = uVar15;
        puVar12[0x18] = uVar16;
        puVar12[0x19] = uVar14;
        uVar16 = puVar19[0x1c];
        uVar14 = puVar19[0x1d];
        uVar15 = puVar19[0x1f];
        puVar12[0x1e] = puVar19[0x1e];
        puVar12[0x1f] = uVar15;
        puVar12[0x1c] = uVar16;
        puVar12[0x1d] = uVar14;
        puVar12 = puVar11;
        puVar19 = puVar18;
      } while (iVar13 != 0);
    }
    if (uVar2 != 0) {
      iVar13 = -uVar2;
      do {
        uVar16 = puVar18[1];
        puVar11[3] = puVar18[3];
        puVar11[1] = uVar16;
        uVar16 = puVar18[5];
        puVar11[7] = puVar18[7];
        puVar11[5] = uVar16;
        uVar16 = *puVar18;
        puVar11[2] = puVar18[2];
        *puVar11 = uVar16;
        uVar16 = puVar18[4];
        puVar11[6] = puVar18[6];
        puVar11[4] = uVar16;
        puVar11 = puVar11 + 8;
        puVar18 = puVar18 + 8;
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0);
    }
  }
  FUN_0052f010(param_1 + 0xf,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x110);
  return;
}

