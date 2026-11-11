
void FUN_0052ad10(long *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
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
  puVar6 = PTR_DAT_04bddeb0;
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[6] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x30);
  puVar12 = *(undefined8 **)(param_2 + 0x28);
  uVar11 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar5;
  if ((int)uVar5 < 1) {
    param_1[5] = 0;
    param_1[6] = -0x8000000000000000;
  }
  else {
    puVar7 = (undefined8 *)FUN_00421ed0(uVar11,0x50,&local_38);
    *(uint *)(param_1 + 6) = uVar5;
    *(uint *)((long)param_1 + 0x34) = local_38;
    uVar2 = uVar5 & 3;
    param_1[5] = (long)puVar7;
    if (2 < uVar5 - 1) {
      iVar9 = uVar2 - uVar5;
      puVar8 = puVar7;
      puVar13 = puVar12;
      do {
        uVar10 = puVar13[1];
        puVar7 = puVar8 + 0x28;
        *puVar8 = *puVar13;
        puVar8[1] = uVar10;
        puVar12 = puVar13 + 0x28;
        uVar10 = puVar13[2];
        uVar3 = puVar13[3];
        iVar9 = iVar9 + 4;
        uVar4 = puVar13[5];
        puVar8[4] = puVar13[4];
        puVar8[5] = uVar4;
        puVar8[2] = uVar10;
        puVar8[3] = uVar3;
        uVar10 = puVar13[6];
        uVar3 = puVar13[7];
        uVar4 = puVar13[9];
        puVar8[8] = puVar13[8];
        puVar8[9] = uVar4;
        puVar8[6] = uVar10;
        puVar8[7] = uVar3;
        uVar10 = puVar13[0xb];
        puVar8[10] = puVar13[10];
        puVar8[0xb] = uVar10;
        uVar10 = puVar13[0xc];
        uVar3 = puVar13[0xd];
        uVar4 = puVar13[0xf];
        puVar8[0xe] = puVar13[0xe];
        puVar8[0xf] = uVar4;
        puVar8[0xc] = uVar10;
        puVar8[0xd] = uVar3;
        uVar10 = puVar13[0x10];
        uVar3 = puVar13[0x11];
        uVar4 = puVar13[0x13];
        puVar8[0x12] = puVar13[0x12];
        puVar8[0x13] = uVar4;
        puVar8[0x10] = uVar10;
        puVar8[0x11] = uVar3;
        uVar10 = puVar13[0x15];
        puVar8[0x14] = puVar13[0x14];
        puVar8[0x15] = uVar10;
        uVar10 = puVar13[0x16];
        uVar3 = puVar13[0x17];
        uVar4 = puVar13[0x19];
        puVar8[0x18] = puVar13[0x18];
        puVar8[0x19] = uVar4;
        puVar8[0x16] = uVar10;
        puVar8[0x17] = uVar3;
        uVar10 = puVar13[0x1a];
        uVar3 = puVar13[0x1b];
        uVar4 = puVar13[0x1d];
        puVar8[0x1c] = puVar13[0x1c];
        puVar8[0x1d] = uVar4;
        puVar8[0x1a] = uVar10;
        puVar8[0x1b] = uVar3;
        uVar10 = puVar13[0x1f];
        puVar8[0x1e] = puVar13[0x1e];
        puVar8[0x1f] = uVar10;
        uVar10 = puVar13[0x20];
        uVar3 = puVar13[0x21];
        uVar4 = puVar13[0x23];
        puVar8[0x22] = puVar13[0x22];
        puVar8[0x23] = uVar4;
        puVar8[0x20] = uVar10;
        puVar8[0x21] = uVar3;
        uVar10 = puVar13[0x24];
        uVar3 = puVar13[0x25];
        uVar4 = puVar13[0x27];
        puVar8[0x26] = puVar13[0x26];
        puVar8[0x27] = uVar4;
        puVar8[0x24] = uVar10;
        puVar8[0x25] = uVar3;
        puVar8 = puVar7;
        puVar13 = puVar12;
      } while (iVar9 != 0);
    }
    if (uVar2 != 0) {
      iVar9 = -uVar2;
      do {
        uVar10 = puVar12[1];
        iVar9 = iVar9 + 1;
        *puVar7 = *puVar12;
        puVar7[1] = uVar10;
        uVar10 = puVar12[2];
        uVar3 = puVar12[3];
        uVar4 = puVar12[5];
        puVar7[4] = puVar12[4];
        puVar7[5] = uVar4;
        puVar7[2] = uVar10;
        puVar7[3] = uVar3;
        uVar10 = puVar12[6];
        uVar3 = puVar12[7];
        puVar8 = puVar12 + 8;
        uVar4 = puVar12[9];
        puVar12 = puVar12 + 10;
        puVar7[8] = *puVar8;
        puVar7[9] = uVar4;
        puVar7[6] = uVar10;
        puVar7[7] = uVar3;
        puVar7 = puVar7 + 10;
      } while (iVar9 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x40);
  puVar12 = *(undefined8 **)(param_2 + 0x38);
  if ((int)uVar5 < 1) {
    param_1[7] = 0;
    param_1[8] = -0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined8 *)FUN_00421ed0(uVar11,0x14,&local_34);
    *(uint *)(param_1 + 8) = uVar5;
    *(uint *)((long)param_1 + 0x44) = local_34;
    uVar2 = uVar5 & 3;
    param_1[7] = (long)puVar7;
    if (2 < uVar5 - 1) {
      iVar9 = uVar2 - uVar5;
      puVar8 = puVar7;
      do {
        uVar11 = *puVar12;
        uVar10 = puVar12[1];
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar12 + 2);
        *puVar8 = uVar11;
        puVar8[1] = uVar10;
        uVar11 = *(undefined8 *)((long)puVar12 + 0x14);
        uVar10 = *(undefined8 *)((long)puVar12 + 0x1c);
        *(undefined4 *)((long)puVar8 + 0x24) = *(undefined4 *)((long)puVar12 + 0x24);
        *(undefined8 *)((long)puVar8 + 0x1c) = uVar10;
        *(undefined8 *)((long)puVar8 + 0x14) = uVar11;
        uVar11 = puVar12[5];
        uVar10 = puVar12[6];
        *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar12 + 7);
        puVar8[5] = uVar11;
        puVar8[6] = uVar10;
        uVar11 = *(undefined8 *)((long)puVar12 + 0x3c);
        uVar10 = *(undefined8 *)((long)puVar12 + 0x44);
        puVar1 = (undefined4 *)((long)puVar12 + 0x4c);
        puVar7 = puVar8 + 10;
        puVar12 = puVar12 + 10;
        *(undefined4 *)((long)puVar8 + 0x4c) = *puVar1;
        *(undefined8 *)((long)puVar8 + 0x44) = uVar10;
        *(undefined8 *)((long)puVar8 + 0x3c) = uVar11;
        iVar9 = iVar9 + 4;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    if (uVar2 != 0) {
      iVar9 = -uVar2;
      do {
        uVar11 = *puVar12;
        uVar10 = puVar12[1];
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar12 + 2);
        *puVar7 = uVar11;
        puVar7[1] = uVar10;
        puVar7 = (undefined8 *)((long)puVar7 + 0x14);
        puVar12 = (undefined8 *)((long)puVar12 + 0x14);
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0);
    }
  }
  return;
}

