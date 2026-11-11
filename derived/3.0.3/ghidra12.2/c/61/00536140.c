
void FUN_00536140(undefined4 *param_1,undefined4 *param_2)

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
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
  uVar3 = param_2[4];
  puVar8 = *(undefined4 **)(param_2 + 2);
  uVar7 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_44 = uVar3;
  if ((int)uVar3 < 1) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0x8000000000000000;
  }
  else {
    puVar4 = (undefined4 *)FUN_00421ed0(uVar7,4,&local_44);
    param_1[4] = uVar3;
    param_1[5] = local_44;
    uVar2 = uVar3 & 3;
    *(undefined4 **)(param_1 + 2) = puVar4;
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
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  uVar3 = param_2[8];
  puVar8 = *(undefined4 **)(param_2 + 6);
  local_38 = uVar3;
  if ((int)uVar3 < 1) {
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  }
  else {
    puVar4 = (undefined4 *)FUN_00421ed0(uVar7,4,&local_38);
    param_1[8] = uVar3;
    param_1[9] = local_38;
    uVar2 = uVar3 & 3;
    *(undefined4 **)(param_1 + 6) = puVar4;
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
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x8000000000000000;
  uVar3 = param_2[0xc];
  puVar8 = *(undefined4 **)(param_2 + 10);
  if ((int)uVar3 < 1) {
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined4 *)FUN_00421ed0(uVar7,4,&local_34);
    param_1[0xc] = uVar3;
    param_1[0xd] = local_34;
    uVar2 = uVar3 & 3;
    *(undefined4 **)(param_1 + 10) = puVar4;
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
  return;
}

