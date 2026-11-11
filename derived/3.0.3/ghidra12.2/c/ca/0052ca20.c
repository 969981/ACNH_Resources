
void FUN_0052ca20(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint local_44;
  uint local_38;
  uint local_34;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 1);
  puVar8 = (undefined4 *)*param_2;
  uVar7 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_44 = uVar3;
  if ((int)uVar3 < 1) {
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
  }
  else {
    puVar4 = (undefined4 *)FUN_00421ed0(uVar7,4,&local_44);
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = local_44;
    uVar2 = uVar3 & 3;
    *param_1 = (long)puVar4;
    if (2 < uVar3 - 1) {
      iVar6 = uVar2 - uVar3;
      puVar5 = puVar4;
      do {
        *puVar5 = *puVar8;
        puVar5[1] = puVar8[1];
        puVar5[2] = puVar8[2];
        puVar1 = puVar8 + 3;
        puVar4 = puVar5 + 4;
        puVar8 = puVar8 + 4;
        puVar5[3] = *puVar1;
        iVar6 = iVar6 + 4;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if (uVar2 != 0) {
      iVar6 = -uVar2;
      do {
        iVar6 = iVar6 + 1;
        *puVar4 = *puVar8;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar6 != 0);
    }
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  param_1[3] = 0;
  param_1[4] = -0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 4);
  puVar8 = (undefined4 *)param_2[3];
  local_38 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[3] = 0;
    param_1[4] = -0x8000000000000000;
  }
  else {
    puVar4 = (undefined4 *)FUN_00421ed0(uVar7,4,&local_38);
    *(uint *)(param_1 + 4) = uVar3;
    *(uint *)((long)param_1 + 0x24) = local_38;
    uVar2 = uVar3 & 3;
    param_1[3] = (long)puVar4;
    if (2 < uVar3 - 1) {
      iVar6 = uVar2 - uVar3;
      puVar5 = puVar4;
      do {
        *puVar5 = *puVar8;
        puVar5[1] = puVar8[1];
        puVar5[2] = puVar8[2];
        puVar1 = puVar8 + 3;
        puVar4 = puVar5 + 4;
        puVar8 = puVar8 + 4;
        puVar5[3] = *puVar1;
        iVar6 = iVar6 + 4;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if (uVar2 != 0) {
      iVar6 = -uVar2;
      do {
        iVar6 = iVar6 + 1;
        *puVar4 = *puVar8;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar6 != 0);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 7);
  puVar8 = (undefined4 *)param_2[6];
  if ((int)uVar3 < 1) {
    param_1[6] = 0;
    param_1[7] = -0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined4 *)FUN_00421ed0(uVar7,4,&local_34);
    *(uint *)(param_1 + 7) = uVar3;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    uVar2 = uVar3 & 3;
    param_1[6] = (long)puVar4;
    if (2 < uVar3 - 1) {
      iVar6 = uVar2 - uVar3;
      puVar5 = puVar4;
      do {
        *puVar5 = *puVar8;
        puVar5[1] = puVar8[1];
        puVar5[2] = puVar8[2];
        puVar1 = puVar8 + 3;
        puVar4 = puVar5 + 4;
        puVar8 = puVar8 + 4;
        puVar5[3] = *puVar1;
        iVar6 = iVar6 + 4;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if (uVar2 != 0) {
      iVar6 = -uVar2;
      do {
        iVar6 = iVar6 + 1;
        *puVar4 = *puVar8;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar6 != 0);
    }
  }
  *(int *)(param_1 + 8) = (int)param_2[8];
  return;
}

