
void FUN_0052b9f0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint local_38;
  uint local_34;
  
  param_1[2] = 1;
  *param_1 = (long)&PTR_LAB_048d59a0;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  puVar4 = PTR_DAT_04bddd38;
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[6] = -0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar10 = *(undefined8 **)(param_2 + 0x28);
  uVar9 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[5] = 0;
    param_1[6] = -0x8000000000000000;
  }
  else {
    puVar5 = (undefined8 *)FUN_00421ed0(uVar9,0x60,&local_38);
    *(uint *)(param_1 + 6) = uVar3;
    *(uint *)((long)param_1 + 0x34) = local_38;
    uVar2 = uVar3 & 3;
    param_1[5] = (long)puVar5;
    if (2 < uVar3 - 1) {
      iVar7 = uVar2 - uVar3;
      puVar6 = puVar5;
      do {
        uVar8 = puVar10[1];
        puVar6[3] = puVar10[3];
        puVar6[1] = uVar8;
        uVar8 = puVar10[5];
        puVar6[7] = puVar10[7];
        puVar6[5] = uVar8;
        uVar8 = puVar10[9];
        puVar6[0xb] = puVar10[0xb];
        puVar6[9] = uVar8;
        uVar8 = *puVar10;
        puVar6[2] = puVar10[2];
        *puVar6 = uVar8;
        uVar8 = puVar10[4];
        puVar6[6] = puVar10[6];
        puVar6[4] = uVar8;
        uVar8 = puVar10[8];
        puVar6[10] = puVar10[10];
        puVar6[8] = uVar8;
        uVar8 = puVar10[0xd];
        puVar6[0xf] = puVar10[0xf];
        puVar6[0xd] = uVar8;
        uVar8 = puVar10[0x11];
        puVar6[0x13] = puVar10[0x13];
        puVar6[0x11] = uVar8;
        uVar8 = puVar10[0x15];
        puVar6[0x17] = puVar10[0x17];
        puVar6[0x15] = uVar8;
        uVar8 = puVar10[0xc];
        puVar6[0xe] = puVar10[0xe];
        puVar6[0xc] = uVar8;
        uVar8 = puVar10[0x10];
        puVar6[0x12] = puVar10[0x12];
        puVar6[0x10] = uVar8;
        uVar8 = puVar10[0x14];
        puVar6[0x16] = puVar10[0x16];
        puVar6[0x14] = uVar8;
        uVar8 = puVar10[0x19];
        puVar6[0x1b] = puVar10[0x1b];
        puVar6[0x19] = uVar8;
        uVar8 = puVar10[0x1d];
        puVar6[0x1f] = puVar10[0x1f];
        puVar6[0x1d] = uVar8;
        uVar8 = puVar10[0x21];
        puVar6[0x23] = puVar10[0x23];
        puVar6[0x21] = uVar8;
        uVar8 = puVar10[0x18];
        puVar6[0x1a] = puVar10[0x1a];
        puVar6[0x18] = uVar8;
        uVar8 = puVar10[0x1c];
        puVar6[0x1e] = puVar10[0x1e];
        puVar6[0x1c] = uVar8;
        uVar8 = puVar10[0x20];
        puVar6[0x22] = puVar10[0x22];
        puVar6[0x20] = uVar8;
        uVar8 = puVar10[0x25];
        puVar6[0x27] = puVar10[0x27];
        puVar6[0x25] = uVar8;
        uVar8 = puVar10[0x29];
        puVar6[0x2b] = puVar10[0x2b];
        puVar6[0x29] = uVar8;
        uVar8 = puVar10[0x2d];
        puVar6[0x2f] = puVar10[0x2f];
        puVar6[0x2d] = uVar8;
        uVar8 = puVar10[0x24];
        puVar6[0x26] = puVar10[0x26];
        puVar6[0x24] = uVar8;
        uVar8 = puVar10[0x28];
        puVar6[0x2a] = puVar10[0x2a];
        puVar6[0x28] = uVar8;
        uVar8 = puVar10[0x2c];
        puVar1 = puVar10 + 0x2e;
        puVar5 = puVar6 + 0x30;
        puVar10 = puVar10 + 0x30;
        puVar6[0x2e] = *puVar1;
        puVar6[0x2c] = uVar8;
        iVar7 = iVar7 + 4;
        puVar6 = puVar5;
      } while (iVar7 != 0);
    }
    if (uVar2 != 0) {
      iVar7 = -uVar2;
      do {
        uVar8 = puVar10[1];
        puVar5[3] = puVar10[3];
        puVar5[1] = uVar8;
        uVar8 = puVar10[5];
        puVar5[7] = puVar10[7];
        puVar5[5] = uVar8;
        uVar8 = puVar10[9];
        puVar5[0xb] = puVar10[0xb];
        puVar5[9] = uVar8;
        uVar8 = *puVar10;
        puVar5[2] = puVar10[2];
        *puVar5 = uVar8;
        uVar8 = puVar10[4];
        puVar5[6] = puVar10[6];
        puVar5[4] = uVar8;
        uVar8 = puVar10[8];
        puVar5[10] = puVar10[10];
        puVar5[8] = uVar8;
        puVar5 = puVar5 + 0xc;
        puVar10 = puVar10 + 0xc;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x40);
  puVar10 = *(undefined8 **)(param_2 + 0x38);
  if ((int)uVar3 < 1) {
    param_1[7] = 0;
    param_1[8] = -0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar5 = (undefined8 *)FUN_00421ed0(uVar9,0x60,&local_34);
    *(uint *)(param_1 + 8) = uVar3;
    *(uint *)((long)param_1 + 0x44) = local_34;
    uVar2 = uVar3 & 3;
    param_1[7] = (long)puVar5;
    if (2 < uVar3 - 1) {
      iVar7 = uVar2 - uVar3;
      puVar6 = puVar5;
      do {
        uVar9 = puVar10[1];
        puVar6[3] = puVar10[3];
        puVar6[1] = uVar9;
        uVar9 = puVar10[5];
        puVar6[7] = puVar10[7];
        puVar6[5] = uVar9;
        uVar9 = puVar10[9];
        puVar6[0xb] = puVar10[0xb];
        puVar6[9] = uVar9;
        uVar9 = *puVar10;
        puVar6[2] = puVar10[2];
        *puVar6 = uVar9;
        uVar9 = puVar10[4];
        puVar6[6] = puVar10[6];
        puVar6[4] = uVar9;
        uVar9 = puVar10[8];
        puVar6[10] = puVar10[10];
        puVar6[8] = uVar9;
        uVar9 = puVar10[0xd];
        puVar6[0xf] = puVar10[0xf];
        puVar6[0xd] = uVar9;
        uVar9 = puVar10[0x11];
        puVar6[0x13] = puVar10[0x13];
        puVar6[0x11] = uVar9;
        uVar9 = puVar10[0x15];
        puVar6[0x17] = puVar10[0x17];
        puVar6[0x15] = uVar9;
        uVar9 = puVar10[0xc];
        puVar6[0xe] = puVar10[0xe];
        puVar6[0xc] = uVar9;
        uVar9 = puVar10[0x10];
        puVar6[0x12] = puVar10[0x12];
        puVar6[0x10] = uVar9;
        uVar9 = puVar10[0x14];
        puVar6[0x16] = puVar10[0x16];
        puVar6[0x14] = uVar9;
        uVar9 = puVar10[0x19];
        puVar6[0x1b] = puVar10[0x1b];
        puVar6[0x19] = uVar9;
        uVar9 = puVar10[0x1d];
        puVar6[0x1f] = puVar10[0x1f];
        puVar6[0x1d] = uVar9;
        uVar9 = puVar10[0x21];
        puVar6[0x23] = puVar10[0x23];
        puVar6[0x21] = uVar9;
        uVar9 = puVar10[0x18];
        puVar6[0x1a] = puVar10[0x1a];
        puVar6[0x18] = uVar9;
        uVar9 = puVar10[0x1c];
        puVar6[0x1e] = puVar10[0x1e];
        puVar6[0x1c] = uVar9;
        uVar9 = puVar10[0x20];
        puVar6[0x22] = puVar10[0x22];
        puVar6[0x20] = uVar9;
        uVar9 = puVar10[0x25];
        puVar6[0x27] = puVar10[0x27];
        puVar6[0x25] = uVar9;
        uVar9 = puVar10[0x29];
        puVar6[0x2b] = puVar10[0x2b];
        puVar6[0x29] = uVar9;
        uVar9 = puVar10[0x2d];
        puVar6[0x2f] = puVar10[0x2f];
        puVar6[0x2d] = uVar9;
        uVar9 = puVar10[0x24];
        puVar6[0x26] = puVar10[0x26];
        puVar6[0x24] = uVar9;
        uVar9 = puVar10[0x28];
        puVar6[0x2a] = puVar10[0x2a];
        puVar6[0x28] = uVar9;
        uVar9 = puVar10[0x2c];
        puVar1 = puVar10 + 0x2e;
        puVar5 = puVar6 + 0x30;
        puVar10 = puVar10 + 0x30;
        puVar6[0x2e] = *puVar1;
        puVar6[0x2c] = uVar9;
        iVar7 = iVar7 + 4;
        puVar6 = puVar5;
      } while (iVar7 != 0);
    }
    if (uVar2 != 0) {
      iVar7 = -uVar2;
      do {
        uVar9 = puVar10[1];
        puVar5[3] = puVar10[3];
        puVar5[1] = uVar9;
        uVar9 = puVar10[5];
        puVar5[7] = puVar10[7];
        puVar5[5] = uVar9;
        uVar9 = puVar10[9];
        puVar5[0xb] = puVar10[0xb];
        puVar5[9] = uVar9;
        uVar9 = *puVar10;
        puVar5[2] = puVar10[2];
        *puVar5 = uVar9;
        uVar9 = puVar10[4];
        puVar5[6] = puVar10[6];
        puVar5[4] = uVar9;
        uVar9 = puVar10[8];
        puVar5[10] = puVar10[10];
        puVar5[8] = uVar9;
        puVar5 = puVar5 + 0xc;
        puVar10 = puVar10 + 0xc;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0);
    }
  }
  return;
}

