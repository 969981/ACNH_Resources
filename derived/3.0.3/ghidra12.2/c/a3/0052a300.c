
void FUN_0052a300(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined2 *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint local_44;
  uint local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_048c9e50;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *param_1 = &PTR_LAB_048c9480;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x28);
  puVar19 = *(undefined2 **)(param_2 + 0x20);
  uVar18 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_44 = uVar8;
  if ((int)uVar8 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    puVar9 = (undefined2 *)FUN_00421ed0(uVar18,2,&local_44);
    *(uint *)(param_1 + 5) = uVar8;
    *(uint *)((long)param_1 + 0x2c) = local_44;
    uVar3 = uVar8 & 3;
    param_1[4] = puVar9;
    if (2 < uVar8 - 1) {
      iVar15 = uVar3 - uVar8;
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar19;
        puVar10[1] = puVar19[1];
        puVar10[2] = puVar19[2];
        puVar2 = puVar19 + 3;
        puVar9 = puVar10 + 4;
        puVar19 = puVar19 + 4;
        puVar10[3] = *puVar2;
        iVar15 = iVar15 + 4;
        puVar10 = puVar9;
      } while (iVar15 != 0);
    }
    if (uVar3 != 0) {
      iVar15 = -uVar3;
      do {
        iVar15 = iVar15 + 1;
        *puVar9 = *puVar19;
        puVar9 = puVar9 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar15 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x38);
  puVar20 = *(undefined1 **)(param_2 + 0x30);
  local_38 = uVar8;
  if ((int)uVar8 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    puVar11 = (undefined1 *)FUN_00421ed0(uVar18,1,&local_38);
    *(uint *)(param_1 + 7) = uVar8;
    *(uint *)((long)param_1 + 0x3c) = local_38;
    uVar3 = uVar8 & 3;
    param_1[6] = puVar11;
    if (2 < uVar8 - 1) {
      iVar15 = uVar3 - uVar8;
      puVar12 = puVar11;
      do {
        *puVar12 = *puVar20;
        puVar12[1] = puVar20[1];
        puVar12[2] = puVar20[2];
        puVar1 = puVar20 + 3;
        puVar11 = puVar12 + 4;
        puVar20 = puVar20 + 4;
        puVar12[3] = *puVar1;
        iVar15 = iVar15 + 4;
        puVar12 = puVar11;
      } while (iVar15 != 0);
    }
    if (uVar3 != 0) {
      iVar15 = -uVar3;
      do {
        iVar15 = iVar15 + 1;
        *puVar11 = *puVar20;
        puVar11 = puVar11 + 1;
        puVar20 = puVar20 + 1;
      } while (iVar15 != 0);
    }
  }
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x48);
  puVar21 = *(undefined8 **)(param_2 + 0x40);
  local_34 = uVar8;
  if ((int)uVar8 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    puVar13 = (undefined8 *)FUN_00421ed0(uVar18,0x40,&local_34);
    *(uint *)(param_1 + 9) = uVar8;
    *(uint *)((long)param_1 + 0x4c) = local_34;
    uVar3 = uVar8 & 3;
    param_1[8] = puVar13;
    if (2 < uVar8 - 1) {
      iVar15 = uVar3 - uVar8;
      puVar14 = puVar13;
      puVar22 = puVar21;
      do {
        uVar18 = puVar22[1];
        puVar14[3] = puVar22[3];
        uVar16 = puVar22[2];
        *puVar14 = *puVar22;
        puVar14[1] = uVar18;
        puVar14[2] = uVar16;
        uVar16 = puVar22[5];
        puVar14[7] = puVar22[7];
        uVar18 = puVar22[4];
        uVar17 = puVar22[6];
        puVar14[5] = uVar16;
        puVar14[6] = uVar17;
        puVar14[4] = uVar18;
        uVar4 = puVar22[0xd];
        uVar18 = puVar22[0xe];
        uVar5 = puVar22[0xf];
        puVar14[0xc] = puVar22[0xc];
        uVar16 = puVar22[8];
        uVar6 = puVar22[9];
        puVar13 = puVar14 + 0x20;
        uVar17 = puVar22[10];
        uVar7 = puVar22[0xb];
        puVar14[0xd] = uVar4;
        puVar14[0xe] = uVar18;
        puVar14[0xf] = uVar5;
        puVar21 = puVar22 + 0x20;
        puVar14[10] = uVar17;
        puVar14[0xb] = uVar7;
        iVar15 = iVar15 + 4;
        puVar14[8] = uVar16;
        puVar14[9] = uVar6;
        uVar18 = puVar22[0x10];
        uVar16 = puVar22[0x11];
        uVar17 = puVar22[0x13];
        puVar14[0x12] = puVar22[0x12];
        puVar14[0x13] = uVar17;
        puVar14[0x10] = uVar18;
        puVar14[0x11] = uVar16;
        uVar18 = puVar22[0x14];
        uVar16 = puVar22[0x15];
        uVar17 = puVar22[0x17];
        puVar14[0x16] = puVar22[0x16];
        puVar14[0x17] = uVar17;
        puVar14[0x14] = uVar18;
        puVar14[0x15] = uVar16;
        uVar18 = puVar22[0x18];
        uVar16 = puVar22[0x19];
        uVar17 = puVar22[0x1b];
        puVar14[0x1a] = puVar22[0x1a];
        puVar14[0x1b] = uVar17;
        puVar14[0x18] = uVar18;
        puVar14[0x19] = uVar16;
        uVar18 = puVar22[0x1c];
        uVar16 = puVar22[0x1d];
        uVar17 = puVar22[0x1f];
        puVar14[0x1e] = puVar22[0x1e];
        puVar14[0x1f] = uVar17;
        puVar14[0x1c] = uVar18;
        puVar14[0x1d] = uVar16;
        puVar14 = puVar13;
        puVar22 = puVar21;
      } while (iVar15 != 0);
    }
    if (uVar3 != 0) {
      iVar15 = -uVar3;
      do {
        uVar18 = puVar21[1];
        puVar13[3] = puVar21[3];
        puVar13[1] = uVar18;
        uVar18 = puVar21[5];
        puVar13[7] = puVar21[7];
        puVar13[5] = uVar18;
        uVar18 = *puVar21;
        puVar13[2] = puVar21[2];
        *puVar13 = uVar18;
        uVar18 = puVar21[4];
        puVar13[6] = puVar21[6];
        puVar13[4] = uVar18;
        puVar13 = puVar13 + 8;
        puVar21 = puVar21 + 8;
        iVar15 = iVar15 + 1;
      } while (iVar15 != 0);
    }
  }
  FUN_004385f0(param_1 + 10,param_2 + 0x50);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  FUN_004385f0(param_1 + 0x12,param_2 + 0x90);
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  uVar16 = *(undefined8 *)(param_2 + 0x108);
  uVar18 = *(undefined8 *)(param_2 + 0xf8);
  uVar17 = *(undefined8 *)(param_2 + 0x100);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_2 + 0x110);
  param_1[0x21] = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  uVar5 = *(undefined8 *)(param_2 + 0xf0);
  param_1[0x1d] = *(undefined8 *)(param_2 + 0xe8);
  param_1[0x1e] = uVar5;
  param_1[0x1b] = uVar16;
  param_1[0x1c] = uVar4;
  param_1[0x1f] = uVar18;
  param_1[0x20] = uVar17;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  return;
}

