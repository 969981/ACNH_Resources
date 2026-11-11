
void FUN_00480c70(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_0485b888;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 0x20);
  puVar8 = *(undefined8 **)(param_2 + 0x18);
  uVar7 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_34 = uVar2;
  if ((int)uVar2 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    puVar3 = (undefined8 *)FUN_00421ed0(uVar7,0x10,&local_34);
    *(uint *)(param_1 + 4) = uVar2;
    *(uint *)((long)param_1 + 0x24) = local_34;
    uVar1 = uVar2 & 3;
    param_1[3] = puVar3;
    if (2 < uVar2 - 1) {
      iVar5 = uVar1 - uVar2;
      puVar4 = puVar3;
      do {
        puVar4[1] = puVar8[1];
        *puVar4 = *puVar8;
        puVar4[3] = puVar8[3];
        puVar4[2] = puVar8[2];
        puVar4[5] = puVar8[5];
        puVar4[4] = puVar8[4];
        puVar4[7] = puVar8[7];
        puVar6 = puVar8 + 6;
        puVar3 = puVar4 + 8;
        puVar8 = puVar8 + 8;
        puVar4[6] = *puVar6;
        iVar5 = iVar5 + 4;
        puVar4 = puVar3;
      } while (iVar5 != 0);
    }
    if (uVar1 != 0) {
      iVar5 = -uVar1;
      do {
        puVar3[1] = puVar8[1];
        iVar5 = iVar5 + 1;
        *puVar3 = *puVar8;
        puVar3 = puVar3 + 2;
        puVar8 = puVar8 + 2;
      } while (iVar5 != 0);
    }
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 0x30);
  puVar8 = *(undefined8 **)(param_2 + 0x28);
  if ((int)uVar2 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    local_38 = uVar2;
    puVar3 = (undefined8 *)FUN_00421ed0(uVar7,0x10,&local_38);
    *(uint *)(param_1 + 6) = uVar2;
    *(uint *)((long)param_1 + 0x34) = local_38;
    uVar1 = uVar2 & 3;
    param_1[5] = puVar3;
    if (2 < uVar2 - 1) {
      iVar5 = uVar1 - uVar2;
      puVar4 = puVar3;
      puVar6 = puVar8;
      do {
        uVar7 = puVar6[1];
        puVar3 = puVar4 + 8;
        *puVar4 = *puVar6;
        puVar4[1] = uVar7;
        puVar8 = puVar6 + 8;
        uVar7 = puVar6[3];
        iVar5 = iVar5 + 4;
        puVar4[2] = puVar6[2];
        puVar4[3] = uVar7;
        uVar7 = puVar6[5];
        puVar4[4] = puVar6[4];
        puVar4[5] = uVar7;
        uVar7 = puVar6[7];
        puVar4[6] = puVar6[6];
        puVar4[7] = uVar7;
        puVar4 = puVar3;
        puVar6 = puVar8;
      } while (iVar5 != 0);
    }
    if (uVar1 != 0) {
      iVar5 = -uVar1;
      do {
        uVar7 = puVar8[1];
        *puVar3 = *puVar8;
        puVar3[1] = uVar7;
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + 2;
        puVar8 = puVar8 + 2;
      } while (iVar5 != 0);
    }
  }
  return;
}

