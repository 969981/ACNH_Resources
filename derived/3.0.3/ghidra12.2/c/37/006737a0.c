
void FUN_006737a0(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  uint local_44;
  uint local_38;
  uint local_34;
  
  param_1[2] = 1;
  *param_1 = &PTR_LAB_048eb380;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  lVar4 = *(long *)(param_2 + 0x20);
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    FUN_004435a0();
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar9 = *(undefined2 **)(param_2 + 0x28);
  uVar8 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    puVar5 = (undefined2 *)FUN_00421ed0(uVar8,2,&local_38);
    *(uint *)(param_1 + 6) = uVar3;
    *(uint *)((long)param_1 + 0x34) = local_38;
    uVar2 = uVar3 & 3;
    param_1[5] = puVar5;
    if (2 < uVar3 - 1) {
      iVar7 = uVar2 - uVar3;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
        puVar6[2] = puVar9[2];
        puVar1 = puVar9 + 3;
        puVar5 = puVar6 + 4;
        puVar9 = puVar9 + 4;
        puVar6[3] = *puVar1;
        iVar7 = iVar7 + 4;
        puVar6 = puVar5;
      } while (iVar7 != 0);
    }
    if (uVar2 != 0) {
      iVar7 = -uVar2;
      do {
        iVar7 = iVar7 + 1;
        *puVar5 = *puVar9;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar7 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x40);
  puVar9 = *(undefined2 **)(param_2 + 0x38);
  local_34 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    puVar5 = (undefined2 *)FUN_00421ed0(uVar8,2,&local_34);
    *(uint *)(param_1 + 8) = uVar3;
    *(uint *)((long)param_1 + 0x44) = local_34;
    uVar2 = uVar3 & 3;
    param_1[7] = puVar5;
    if (2 < uVar3 - 1) {
      iVar7 = uVar2 - uVar3;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
        puVar6[2] = puVar9[2];
        puVar1 = puVar9 + 3;
        puVar5 = puVar6 + 4;
        puVar9 = puVar9 + 4;
        puVar6[3] = *puVar1;
        iVar7 = iVar7 + 4;
        puVar6 = puVar5;
      } while (iVar7 != 0);
    }
    if (uVar2 != 0) {
      iVar7 = -uVar2;
      do {
        iVar7 = iVar7 + 1;
        *puVar5 = *puVar9;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar7 != 0);
    }
  }
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x50);
  puVar9 = *(undefined2 **)(param_2 + 0x48);
  if ((int)uVar3 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    local_44 = uVar3;
    puVar5 = (undefined2 *)FUN_00421ed0(uVar8,2,&local_44);
    *(uint *)(param_1 + 10) = uVar3;
    *(uint *)((long)param_1 + 0x54) = local_44;
    uVar2 = uVar3 & 3;
    param_1[9] = puVar5;
    if (2 < uVar3 - 1) {
      iVar7 = uVar2 - uVar3;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
        puVar6[2] = puVar9[2];
        puVar1 = puVar9 + 3;
        puVar5 = puVar6 + 4;
        puVar9 = puVar9 + 4;
        puVar6[3] = *puVar1;
        iVar7 = iVar7 + 4;
        puVar6 = puVar5;
      } while (iVar7 != 0);
    }
    if (uVar2 != 0) {
      iVar7 = -uVar2;
      do {
        iVar7 = iVar7 + 1;
        *puVar5 = *puVar9;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar7 != 0);
    }
  }
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  return;
}

