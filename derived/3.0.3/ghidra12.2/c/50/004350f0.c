
void FUN_004350f0(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  uint local_44;
  uint local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_04860708;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x20);
  puVar11 = *(undefined4 **)(param_2 + 0x18);
  uVar10 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    puVar5 = (undefined4 *)FUN_00421ed0(uVar10,4,&local_38);
    *(uint *)(param_1 + 4) = uVar4;
    *(uint *)((long)param_1 + 0x24) = local_38;
    uVar3 = uVar4 & 3;
    param_1[3] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar8 = puVar5;
      do {
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar5 = puVar8 + 4;
        puVar11 = puVar11 + 4;
        puVar8[3] = *puVar1;
        iVar9 = iVar9 + 4;
        puVar8 = puVar5;
      } while (iVar9 != 0);
    }
    if (uVar3 != 0) {
      iVar9 = -uVar3;
      do {
        iVar9 = iVar9 + 1;
        *puVar5 = *puVar11;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x30);
  puVar12 = *(undefined8 **)(param_2 + 0x28);
  local_34 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    puVar6 = (undefined8 *)FUN_00421ed0(uVar10,8,&local_34);
    *(uint *)(param_1 + 6) = uVar4;
    *(uint *)((long)param_1 + 0x34) = local_34;
    uVar3 = uVar4 & 3;
    param_1[5] = puVar6;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar12;
        puVar7[1] = puVar12[1];
        puVar7[2] = puVar12[2];
        puVar2 = puVar12 + 3;
        puVar6 = puVar7 + 4;
        puVar12 = puVar12 + 4;
        puVar7[3] = *puVar2;
        iVar9 = iVar9 + 4;
        puVar7 = puVar6;
      } while (iVar9 != 0);
    }
    if (uVar3 != 0) {
      iVar9 = -uVar3;
      do {
        iVar9 = iVar9 + 1;
        *puVar6 = *puVar12;
        puVar6 = puVar6 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  FUN_0043d5f0(param_1 + 7,param_2 + 0x38);
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x50);
  puVar11 = *(undefined4 **)(param_2 + 0x48);
  local_44 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    puVar5 = (undefined4 *)FUN_00421ed0(uVar10,4,&local_44);
    *(uint *)(param_1 + 10) = uVar4;
    *(uint *)((long)param_1 + 0x54) = local_44;
    uVar3 = uVar4 & 3;
    param_1[9] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar8 = puVar5;
      do {
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar5 = puVar8 + 4;
        puVar11 = puVar11 + 4;
        puVar8[3] = *puVar1;
        iVar9 = iVar9 + 4;
        puVar8 = puVar5;
      } while (iVar9 != 0);
    }
    if (uVar3 != 0) {
      iVar9 = -uVar3;
      do {
        iVar9 = iVar9 + 1;
        *puVar5 = *puVar11;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar9 != 0);
    }
  }
  FUN_0043d5f0(param_1 + 0xb,param_2 + 0x58);
  return;
}

