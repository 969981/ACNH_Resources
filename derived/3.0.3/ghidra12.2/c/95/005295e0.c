
void FUN_005295e0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint local_34;
  
  param_1[2] = 1;
  *param_1 = &PTR_LAB_048c85e0;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x28);
  puVar8 = *(undefined8 **)(param_2 + 0x20);
  uVar7 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar3 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar7,8,&local_34);
    *(uint *)(param_1 + 5) = uVar3;
    *(uint *)((long)param_1 + 0x2c) = local_34;
    uVar2 = uVar3 & 3;
    param_1[4] = puVar4;
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
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x38);
  puVar8 = *(undefined8 **)(param_2 + 0x30);
  if ((int)uVar3 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar7,8,&local_34);
    *(uint *)(param_1 + 7) = uVar3;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    uVar2 = uVar3 & 3;
    param_1[6] = puVar4;
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
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x48);
  puVar8 = *(undefined8 **)(param_2 + 0x40);
  if ((int)uVar3 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar7,8,&local_34);
    *(uint *)(param_1 + 9) = uVar3;
    *(uint *)((long)param_1 + 0x4c) = local_34;
    uVar2 = uVar3 & 3;
    param_1[8] = puVar4;
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
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x58);
  puVar8 = *(undefined8 **)(param_2 + 0x50);
  if ((int)uVar3 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar7,8,&local_34);
    *(uint *)(param_1 + 0xb) = uVar3;
    *(uint *)((long)param_1 + 0x5c) = local_34;
    uVar2 = uVar3 & 3;
    param_1[10] = puVar4;
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
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x68);
  puVar8 = *(undefined8 **)(param_2 + 0x60);
  if ((int)uVar3 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar7,8,&local_34);
    *(uint *)(param_1 + 0xd) = uVar3;
    *(uint *)((long)param_1 + 0x6c) = local_34;
    uVar2 = uVar3 & 3;
    param_1[0xc] = puVar4;
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
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x78);
  puVar8 = *(undefined8 **)(param_2 + 0x70);
  if ((int)uVar3 < 1) {
    param_1[0xe] = 0;
    param_1[0xf] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar7,8,&local_34);
    *(uint *)(param_1 + 0xf) = uVar3;
    *(uint *)((long)param_1 + 0x7c) = local_34;
    uVar2 = uVar3 & 3;
    param_1[0xe] = puVar4;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x88);
  puVar8 = *(undefined8 **)(param_2 + 0x80);
  if ((int)uVar3 < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar7,8,&local_34);
    *(uint *)(param_1 + 0x11) = uVar3;
    *(uint *)((long)param_1 + 0x8c) = local_34;
    uVar2 = uVar3 & 3;
    param_1[0x10] = puVar4;
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
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  return;
}

