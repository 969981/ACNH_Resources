
void FUN_0052b730(long *param_1,long param_2)

{
  undefined8 *puVar1;
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
  uint local_38;
  uint local_34;
  
  param_1[2] = 1;
  *param_1 = (long)&PTR_LAB_048d59a0;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  puVar5 = PTR_DAT_04bddd28;
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
    puVar6 = (undefined8 *)FUN_00421ed0(uVar11,0x20,&local_38);
    *(uint *)(param_1 + 6) = uVar4;
    *(uint *)((long)param_1 + 0x34) = local_38;
    uVar2 = uVar4 & 3;
    param_1[5] = (long)puVar6;
    if (2 < uVar4 - 1) {
      iVar8 = uVar2 - uVar4;
      puVar7 = puVar6;
      do {
        uVar9 = puVar12[1];
        puVar7[3] = puVar12[3];
        uVar10 = puVar12[2];
        *puVar7 = *puVar12;
        puVar7[1] = uVar9;
        puVar7[2] = uVar10;
        uVar9 = puVar12[5];
        puVar7[7] = puVar12[7];
        puVar7[5] = uVar9;
        uVar9 = puVar12[4];
        puVar7[6] = puVar12[6];
        puVar7[4] = uVar9;
        uVar9 = puVar12[9];
        puVar7[0xb] = puVar12[0xb];
        puVar7[9] = uVar9;
        uVar9 = puVar12[8];
        puVar7[10] = puVar12[10];
        puVar7[8] = uVar9;
        uVar9 = puVar12[0xc];
        uVar10 = puVar12[0xd];
        puVar6 = puVar7 + 0x10;
        puVar1 = puVar12 + 0xe;
        uVar3 = puVar12[0xf];
        puVar12 = puVar12 + 0x10;
        puVar7[0xe] = *puVar1;
        puVar7[0xf] = uVar3;
        iVar8 = iVar8 + 4;
        puVar7[0xc] = uVar9;
        puVar7[0xd] = uVar10;
        puVar7 = puVar6;
      } while (iVar8 != 0);
    }
    if (uVar2 != 0) {
      iVar8 = -uVar2;
      do {
        uVar9 = puVar12[1];
        puVar6[3] = puVar12[3];
        puVar6[1] = uVar9;
        uVar9 = *puVar12;
        puVar6[2] = puVar12[2];
        puVar12 = puVar12 + 4;
        iVar8 = iVar8 + 1;
        *puVar6 = uVar9;
        puVar6 = puVar6 + 4;
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
    puVar6 = (undefined8 *)FUN_00421ed0(uVar11,0x20,&local_34);
    *(uint *)(param_1 + 8) = uVar4;
    *(uint *)((long)param_1 + 0x44) = local_34;
    uVar2 = uVar4 & 3;
    param_1[7] = (long)puVar6;
    if (2 < uVar4 - 1) {
      iVar8 = uVar2 - uVar4;
      puVar7 = puVar6;
      do {
        uVar11 = puVar12[1];
        puVar7[3] = puVar12[3];
        uVar9 = puVar12[2];
        *puVar7 = *puVar12;
        puVar7[1] = uVar11;
        puVar7[2] = uVar9;
        uVar11 = puVar12[5];
        puVar7[7] = puVar12[7];
        puVar7[5] = uVar11;
        uVar11 = puVar12[4];
        puVar7[6] = puVar12[6];
        puVar7[4] = uVar11;
        uVar11 = puVar12[9];
        puVar7[0xb] = puVar12[0xb];
        puVar7[9] = uVar11;
        uVar11 = puVar12[8];
        puVar7[10] = puVar12[10];
        puVar7[8] = uVar11;
        uVar11 = puVar12[0xc];
        uVar9 = puVar12[0xd];
        puVar6 = puVar7 + 0x10;
        puVar1 = puVar12 + 0xe;
        uVar10 = puVar12[0xf];
        puVar12 = puVar12 + 0x10;
        puVar7[0xe] = *puVar1;
        puVar7[0xf] = uVar10;
        iVar8 = iVar8 + 4;
        puVar7[0xc] = uVar11;
        puVar7[0xd] = uVar9;
        puVar7 = puVar6;
      } while (iVar8 != 0);
    }
    if (uVar2 != 0) {
      iVar8 = -uVar2;
      do {
        uVar11 = puVar12[1];
        puVar6[3] = puVar12[3];
        puVar6[1] = uVar11;
        uVar11 = *puVar12;
        puVar6[2] = puVar12[2];
        puVar12 = puVar12 + 4;
        iVar8 = iVar8 + 1;
        *puVar6 = uVar11;
        puVar6 = puVar6 + 4;
      } while (iVar8 != 0);
    }
  }
  return;
}

