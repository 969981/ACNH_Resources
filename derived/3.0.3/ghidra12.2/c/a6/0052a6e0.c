
void FUN_0052a6e0(long *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint local_38;
  uint local_34;
  
  param_1[2] = 1;
  *param_1 = (long)&PTR_LAB_048d59a0;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  puVar5 = PTR_DAT_04bdddc0;
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[6] = -0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x30);
  puVar12 = *(undefined8 **)(param_2 + 0x28);
  uVar11 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[5] = 0;
    param_1[6] = -0x8000000000000000;
  }
  else {
    puVar6 = (undefined8 *)FUN_00421ed0(uVar11,0x70,&local_38);
    *(uint *)(param_1 + 6) = uVar4;
    *(uint *)((long)param_1 + 0x34) = local_38;
    uVar2 = uVar4 & 3;
    param_1[5] = (long)puVar6;
    if (2 < uVar4 - 1) {
      iVar8 = uVar2 - uVar4;
      puVar7 = puVar6;
      puVar13 = puVar12;
      do {
        uVar9 = puVar13[1];
        puVar6 = puVar7 + 0x38;
        *puVar7 = *puVar13;
        puVar7[1] = uVar9;
        puVar12 = puVar13 + 0x38;
        uVar9 = puVar13[2];
        uVar10 = puVar13[3];
        iVar8 = iVar8 + 4;
        uVar3 = puVar13[5];
        puVar7[4] = puVar13[4];
        puVar7[5] = uVar3;
        puVar7[2] = uVar9;
        puVar7[3] = uVar10;
        uVar9 = puVar13[6];
        uVar10 = puVar13[7];
        uVar3 = puVar13[9];
        puVar7[8] = puVar13[8];
        puVar7[9] = uVar3;
        puVar7[6] = uVar9;
        puVar7[7] = uVar10;
        uVar9 = puVar13[10];
        uVar10 = puVar13[0xb];
        uVar3 = puVar13[0xd];
        puVar7[0xc] = puVar13[0xc];
        puVar7[0xd] = uVar3;
        puVar7[10] = uVar9;
        puVar7[0xb] = uVar10;
        uVar9 = puVar13[0xf];
        puVar7[0xe] = puVar13[0xe];
        puVar7[0xf] = uVar9;
        uVar9 = puVar13[0x10];
        uVar10 = puVar13[0x11];
        uVar3 = puVar13[0x13];
        puVar7[0x12] = puVar13[0x12];
        puVar7[0x13] = uVar3;
        puVar7[0x10] = uVar9;
        puVar7[0x11] = uVar10;
        uVar9 = puVar13[0x14];
        uVar10 = puVar13[0x15];
        uVar3 = puVar13[0x17];
        puVar7[0x16] = puVar13[0x16];
        puVar7[0x17] = uVar3;
        puVar7[0x14] = uVar9;
        puVar7[0x15] = uVar10;
        uVar9 = puVar13[0x18];
        uVar10 = puVar13[0x19];
        uVar3 = puVar13[0x1b];
        puVar7[0x1a] = puVar13[0x1a];
        puVar7[0x1b] = uVar3;
        puVar7[0x18] = uVar9;
        puVar7[0x19] = uVar10;
        uVar9 = puVar13[0x1d];
        puVar7[0x1c] = puVar13[0x1c];
        puVar7[0x1d] = uVar9;
        uVar9 = puVar13[0x1e];
        uVar10 = puVar13[0x1f];
        uVar3 = puVar13[0x21];
        puVar7[0x20] = puVar13[0x20];
        puVar7[0x21] = uVar3;
        puVar7[0x1e] = uVar9;
        puVar7[0x1f] = uVar10;
        uVar9 = puVar13[0x22];
        uVar10 = puVar13[0x23];
        uVar3 = puVar13[0x25];
        puVar7[0x24] = puVar13[0x24];
        puVar7[0x25] = uVar3;
        puVar7[0x22] = uVar9;
        puVar7[0x23] = uVar10;
        uVar9 = puVar13[0x26];
        uVar10 = puVar13[0x27];
        uVar3 = puVar13[0x29];
        puVar7[0x28] = puVar13[0x28];
        puVar7[0x29] = uVar3;
        puVar7[0x26] = uVar9;
        puVar7[0x27] = uVar10;
        uVar9 = puVar13[0x2b];
        puVar7[0x2a] = puVar13[0x2a];
        puVar7[0x2b] = uVar9;
        uVar9 = puVar13[0x2c];
        uVar10 = puVar13[0x2d];
        uVar3 = puVar13[0x2f];
        puVar7[0x2e] = puVar13[0x2e];
        puVar7[0x2f] = uVar3;
        puVar7[0x2c] = uVar9;
        puVar7[0x2d] = uVar10;
        uVar9 = puVar13[0x30];
        uVar10 = puVar13[0x31];
        uVar3 = puVar13[0x33];
        puVar7[0x32] = puVar13[0x32];
        puVar7[0x33] = uVar3;
        puVar7[0x30] = uVar9;
        puVar7[0x31] = uVar10;
        uVar9 = puVar13[0x34];
        uVar10 = puVar13[0x35];
        uVar3 = puVar13[0x37];
        puVar7[0x36] = puVar13[0x36];
        puVar7[0x37] = uVar3;
        puVar7[0x34] = uVar9;
        puVar7[0x35] = uVar10;
        puVar7 = puVar6;
        puVar13 = puVar12;
      } while (iVar8 != 0);
    }
    if (uVar2 != 0) {
      iVar8 = -uVar2;
      do {
        uVar9 = puVar12[1];
        iVar8 = iVar8 + 1;
        *puVar6 = *puVar12;
        puVar6[1] = uVar9;
        uVar9 = puVar12[2];
        uVar10 = puVar12[3];
        uVar3 = puVar12[5];
        puVar6[4] = puVar12[4];
        puVar6[5] = uVar3;
        puVar6[2] = uVar9;
        puVar6[3] = uVar10;
        uVar9 = puVar12[6];
        uVar10 = puVar12[7];
        uVar3 = puVar12[9];
        puVar6[8] = puVar12[8];
        puVar6[9] = uVar3;
        puVar6[6] = uVar9;
        puVar6[7] = uVar10;
        uVar9 = puVar12[10];
        uVar10 = puVar12[0xb];
        puVar7 = puVar12 + 0xc;
        uVar3 = puVar12[0xd];
        puVar12 = puVar12 + 0xe;
        puVar6[0xc] = *puVar7;
        puVar6[0xd] = uVar3;
        puVar6[10] = uVar9;
        puVar6[0xb] = uVar10;
        puVar6 = puVar6 + 0xe;
      } while (iVar8 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x40);
  puVar12 = *(undefined8 **)(param_2 + 0x38);
  if ((int)uVar4 < 1) {
    param_1[7] = 0;
    param_1[8] = -0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar6 = (undefined8 *)FUN_00421ed0(uVar11,0x1c,&local_34);
    *(uint *)(param_1 + 8) = uVar4;
    *(uint *)((long)param_1 + 0x44) = local_34;
    uVar2 = uVar4 & 3;
    param_1[7] = (long)puVar6;
    if (2 < uVar4 - 1) {
      iVar8 = uVar2 - uVar4;
      puVar7 = puVar6;
      do {
        uVar11 = *puVar12;
        uVar9 = puVar12[1];
        uVar10 = puVar12[2];
        *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar12 + 3);
        *puVar7 = uVar11;
        puVar7[1] = uVar9;
        puVar7[2] = uVar10;
        uVar11 = *(undefined8 *)((long)puVar12 + 0x1c);
        uVar9 = *(undefined8 *)((long)puVar12 + 0x24);
        uVar10 = *(undefined8 *)((long)puVar12 + 0x2c);
        *(undefined4 *)((long)puVar7 + 0x34) = *(undefined4 *)((long)puVar12 + 0x34);
        *(undefined8 *)((long)puVar7 + 0x2c) = uVar10;
        *(undefined8 *)((long)puVar7 + 0x24) = uVar9;
        *(undefined8 *)((long)puVar7 + 0x1c) = uVar11;
        uVar11 = puVar12[7];
        uVar9 = puVar12[8];
        uVar10 = puVar12[9];
        *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(puVar12 + 10);
        puVar7[8] = uVar9;
        puVar7[9] = uVar10;
        puVar7[7] = uVar11;
        uVar11 = *(undefined8 *)((long)puVar12 + 0x54);
        uVar9 = *(undefined8 *)((long)puVar12 + 0x5c);
        uVar10 = *(undefined8 *)((long)puVar12 + 100);
        puVar1 = (undefined4 *)((long)puVar12 + 0x6c);
        puVar6 = puVar7 + 0xe;
        puVar12 = puVar12 + 0xe;
        *(undefined4 *)((long)puVar7 + 0x6c) = *puVar1;
        *(undefined8 *)((long)puVar7 + 100) = uVar10;
        *(undefined8 *)((long)puVar7 + 0x5c) = uVar9;
        *(undefined8 *)((long)puVar7 + 0x54) = uVar11;
        iVar8 = iVar8 + 4;
        puVar7 = puVar6;
      } while (iVar8 != 0);
    }
    if (uVar2 != 0) {
      iVar8 = -uVar2;
      do {
        uVar11 = *puVar12;
        uVar9 = puVar12[1];
        uVar10 = puVar12[2];
        *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar12 + 3);
        puVar12 = (undefined8 *)((long)puVar12 + 0x1c);
        puVar6[1] = uVar9;
        puVar6[2] = uVar10;
        iVar8 = iVar8 + 1;
        *puVar6 = uVar11;
        puVar6 = (undefined8 *)((long)puVar6 + 0x1c);
      } while (iVar8 != 0);
    }
  }
  return;
}

