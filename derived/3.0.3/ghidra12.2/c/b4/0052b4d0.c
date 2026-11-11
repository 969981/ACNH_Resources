
void FUN_0052b4d0(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint local_38;
  uint local_34;
  
  param_1[2] = 1;
  *param_1 = (long)&PTR_LAB_048d59a0;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  puVar8 = PTR_DAT_04bdde58;
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = 0;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[6] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x30);
  puVar14 = *(undefined8 **)(param_2 + 0x28);
  uVar13 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar7;
  if ((int)uVar7 < 1) {
    param_1[5] = 0;
    param_1[6] = -0x8000000000000000;
  }
  else {
    puVar9 = (undefined8 *)FUN_00421ed0(uVar13,0x30,&local_38);
    *(uint *)(param_1 + 6) = uVar7;
    *(uint *)((long)param_1 + 0x34) = local_38;
    uVar1 = uVar7 & 3;
    param_1[5] = (long)puVar9;
    if (2 < uVar7 - 1) {
      iVar11 = uVar1 - uVar7;
      puVar10 = puVar9;
      puVar12 = puVar14;
      do {
        uVar2 = puVar12[1];
        puVar9 = puVar10 + 0x18;
        *puVar10 = *puVar12;
        puVar10[1] = uVar2;
        iVar11 = iVar11 + 4;
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        uVar4 = puVar12[5];
        puVar10[4] = puVar12[4];
        puVar10[5] = uVar4;
        puVar10[2] = uVar2;
        puVar10[3] = uVar3;
        uVar2 = puVar12[6];
        puVar10[7] = puVar12[7];
        uVar3 = puVar12[8];
        uVar5 = puVar12[9];
        uVar4 = puVar12[10];
        uVar6 = puVar12[0xb];
        puVar10[6] = uVar2;
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar6;
        puVar10[8] = uVar3;
        puVar10[9] = uVar5;
        uVar2 = puVar12[0xc];
        puVar10[0xd] = puVar12[0xd];
        uVar3 = puVar12[0xe];
        uVar5 = puVar12[0xf];
        uVar4 = puVar12[0x10];
        uVar6 = puVar12[0x11];
        puVar10[0xc] = uVar2;
        puVar10[0x10] = uVar4;
        puVar10[0x11] = uVar6;
        puVar14 = puVar12 + 0x18;
        puVar10[0xe] = uVar3;
        puVar10[0xf] = uVar5;
        uVar2 = puVar12[0x13];
        puVar10[0x12] = puVar12[0x12];
        puVar10[0x13] = uVar2;
        uVar2 = puVar12[0x14];
        uVar3 = puVar12[0x15];
        uVar4 = puVar12[0x17];
        puVar10[0x16] = puVar12[0x16];
        puVar10[0x17] = uVar4;
        puVar10[0x14] = uVar2;
        puVar10[0x15] = uVar3;
        puVar10 = puVar9;
        puVar12 = puVar14;
      } while (iVar11 != 0);
    }
    if (uVar1 != 0) {
      iVar11 = -uVar1;
      do {
        uVar2 = puVar14[1];
        iVar11 = iVar11 + 1;
        *puVar9 = *puVar14;
        puVar9[1] = uVar2;
        uVar2 = puVar14[2];
        uVar3 = puVar14[3];
        puVar10 = puVar14 + 4;
        uVar4 = puVar14[5];
        puVar14 = puVar14 + 6;
        puVar9[4] = *puVar10;
        puVar9[5] = uVar4;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        puVar9 = puVar9 + 6;
      } while (iVar11 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x40);
  puVar14 = *(undefined8 **)(param_2 + 0x38);
  if ((int)uVar7 < 1) {
    param_1[7] = 0;
    param_1[8] = -0x8000000000000000;
  }
  else {
    local_34 = uVar7;
    puVar9 = (undefined8 *)FUN_00421ed0(uVar13,0x10,&local_34);
    *(uint *)(param_1 + 8) = uVar7;
    *(uint *)((long)param_1 + 0x44) = local_34;
    uVar1 = uVar7 & 3;
    param_1[7] = (long)puVar9;
    if (2 < uVar7 - 1) {
      iVar11 = uVar1 - uVar7;
      puVar10 = puVar9;
      puVar12 = puVar14;
      do {
        uVar13 = puVar12[1];
        puVar9 = puVar10 + 8;
        *puVar10 = *puVar12;
        puVar10[1] = uVar13;
        puVar14 = puVar12 + 8;
        uVar13 = puVar12[3];
        iVar11 = iVar11 + 4;
        puVar10[2] = puVar12[2];
        puVar10[3] = uVar13;
        uVar13 = puVar12[5];
        puVar10[4] = puVar12[4];
        puVar10[5] = uVar13;
        uVar13 = puVar12[7];
        puVar10[6] = puVar12[6];
        puVar10[7] = uVar13;
        puVar10 = puVar9;
        puVar12 = puVar14;
      } while (iVar11 != 0);
    }
    if (uVar1 != 0) {
      iVar11 = -uVar1;
      do {
        uVar13 = puVar14[1];
        *puVar9 = *puVar14;
        puVar9[1] = uVar13;
        iVar11 = iVar11 + 1;
        puVar9 = puVar9 + 2;
        puVar14 = puVar14 + 2;
      } while (iVar11 != 0);
    }
  }
  return;
}

