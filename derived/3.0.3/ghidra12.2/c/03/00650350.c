
void FUN_00650350(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  uint local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_048e3cc8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  lVar5 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar5;
  if (lVar5 != 0) {
    FUN_004435a0();
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x28);
  puVar12 = *(undefined2 **)(param_2 + 0x20);
  uVar11 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_34 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    puVar6 = (undefined2 *)FUN_00421ed0(uVar11,2,&local_34);
    *(uint *)(param_1 + 5) = uVar4;
    *(uint *)((long)param_1 + 0x2c) = local_34;
    uVar3 = uVar4 & 3;
    param_1[4] = puVar6;
    if (2 < uVar4 - 1) {
      iVar10 = uVar3 - uVar4;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar12;
        puVar7[1] = puVar12[1];
        puVar7[2] = puVar12[2];
        puVar1 = puVar12 + 3;
        puVar6 = puVar7 + 4;
        puVar12 = puVar12 + 4;
        puVar7[3] = *puVar1;
        iVar10 = iVar10 + 4;
        puVar7 = puVar6;
      } while (iVar10 != 0);
    }
    if (uVar3 != 0) {
      iVar10 = -uVar3;
      do {
        iVar10 = iVar10 + 1;
        *puVar6 = *puVar12;
        puVar6 = puVar6 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar10 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x38);
  puVar13 = *(undefined8 **)(param_2 + 0x30);
  local_38 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    puVar8 = (undefined8 *)FUN_00421ed0(uVar11,0x10,&local_38);
    *(uint *)(param_1 + 7) = uVar4;
    *(uint *)((long)param_1 + 0x3c) = local_38;
    uVar3 = uVar4 & 3;
    param_1[6] = puVar8;
    if (2 < uVar4 - 1) {
      iVar10 = uVar3 - uVar4;
      puVar9 = puVar8;
      do {
        puVar9[1] = puVar13[1];
        *puVar9 = *puVar13;
        puVar9[3] = puVar13[3];
        puVar9[2] = puVar13[2];
        puVar9[5] = puVar13[5];
        puVar9[4] = puVar13[4];
        puVar9[7] = puVar13[7];
        puVar2 = puVar13 + 6;
        puVar8 = puVar9 + 8;
        puVar13 = puVar13 + 8;
        puVar9[6] = *puVar2;
        iVar10 = iVar10 + 4;
        puVar9 = puVar8;
      } while (iVar10 != 0);
    }
    if (uVar3 != 0) {
      iVar10 = -uVar3;
      do {
        puVar8[1] = puVar13[1];
        iVar10 = iVar10 + 1;
        *puVar8 = *puVar13;
        puVar8 = puVar8 + 2;
        puVar13 = puVar13 + 2;
      } while (iVar10 != 0);
    }
  }
  FUN_0043bd50(param_1 + 8,param_2 + 0x40);
  return;
}

