
void FUN_0066f590(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  uint local_34;
  
  FUN_006725b0();
  *param_1 = &PTR_LAB_048e9510;
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  uVar11 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined4 *)(param_2 + 0x58);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xb) = uVar4;
  param_1[9] = uVar12;
  param_1[10] = uVar11;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x68);
  puVar13 = *(undefined4 **)(param_2 + 0x60);
  uVar12 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar5 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar6 = (undefined4 *)FUN_00421ed0(uVar12,4,&local_34);
    *(uint *)(param_1 + 0xd) = uVar5;
    *(uint *)((long)param_1 + 0x6c) = local_34;
    uVar3 = uVar5 & 3;
    param_1[0xc] = puVar6;
    if (2 < uVar5 - 1) {
      iVar10 = uVar3 - uVar5;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar13;
        puVar7[1] = puVar13[1];
        puVar7[2] = puVar13[2];
        puVar2 = puVar13 + 3;
        puVar6 = puVar7 + 4;
        puVar13 = puVar13 + 4;
        puVar7[3] = *puVar2;
        iVar10 = iVar10 + 4;
        puVar7 = puVar6;
      } while (iVar10 != 0);
    }
    if (uVar3 != 0) {
      iVar10 = -uVar3;
      do {
        iVar10 = iVar10 + 1;
        *puVar6 = *puVar13;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar10 != 0);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x78);
  puVar13 = *(undefined4 **)(param_2 + 0x70);
  if ((int)uVar5 < 1) {
    param_1[0xe] = 0;
    param_1[0xf] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar6 = (undefined4 *)FUN_00421ed0(uVar12,4,&local_34);
    *(uint *)(param_1 + 0xf) = uVar5;
    *(uint *)((long)param_1 + 0x7c) = local_34;
    uVar3 = uVar5 & 3;
    param_1[0xe] = puVar6;
    if (2 < uVar5 - 1) {
      iVar10 = uVar3 - uVar5;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar13;
        puVar7[1] = puVar13[1];
        puVar7[2] = puVar13[2];
        puVar2 = puVar13 + 3;
        puVar6 = puVar7 + 4;
        puVar13 = puVar13 + 4;
        puVar7[3] = *puVar2;
        iVar10 = iVar10 + 4;
        puVar7 = puVar6;
      } while (iVar10 != 0);
    }
    if (uVar3 != 0) {
      iVar10 = -uVar3;
      do {
        iVar10 = iVar10 + 1;
        *puVar6 = *puVar13;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar10 != 0);
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x88);
  puVar13 = *(undefined4 **)(param_2 + 0x80);
  if ((int)uVar5 < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar6 = (undefined4 *)FUN_00421ed0(uVar12,4,&local_34);
    *(uint *)(param_1 + 0x11) = uVar5;
    *(uint *)((long)param_1 + 0x8c) = local_34;
    uVar3 = uVar5 & 3;
    param_1[0x10] = puVar6;
    if (2 < uVar5 - 1) {
      iVar10 = uVar3 - uVar5;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar13;
        puVar7[1] = puVar13[1];
        puVar7[2] = puVar13[2];
        puVar2 = puVar13 + 3;
        puVar6 = puVar7 + 4;
        puVar13 = puVar13 + 4;
        puVar7[3] = *puVar2;
        iVar10 = iVar10 + 4;
        puVar7 = puVar6;
      } while (iVar10 != 0);
    }
    if (uVar3 != 0) {
      iVar10 = -uVar3;
      do {
        iVar10 = iVar10 + 1;
        *puVar6 = *puVar13;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar10 != 0);
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x98);
  puVar13 = *(undefined4 **)(param_2 + 0x90);
  if ((int)uVar5 < 1) {
    param_1[0x12] = 0;
    param_1[0x13] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar6 = (undefined4 *)FUN_00421ed0(uVar12,4,&local_34);
    *(uint *)(param_1 + 0x13) = uVar5;
    *(uint *)((long)param_1 + 0x9c) = local_34;
    uVar3 = uVar5 & 3;
    param_1[0x12] = puVar6;
    if (2 < uVar5 - 1) {
      iVar10 = uVar3 - uVar5;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar13;
        puVar7[1] = puVar13[1];
        puVar7[2] = puVar13[2];
        puVar2 = puVar13 + 3;
        puVar6 = puVar7 + 4;
        puVar13 = puVar13 + 4;
        puVar7[3] = *puVar2;
        iVar10 = iVar10 + 4;
        puVar7 = puVar6;
      } while (iVar10 != 0);
    }
    if (uVar3 != 0) {
      iVar10 = -uVar3;
      do {
        iVar10 = iVar10 + 1;
        *puVar6 = *puVar13;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar10 != 0);
    }
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xa8);
  puVar14 = *(undefined1 **)(param_2 + 0xa0);
  if ((int)uVar5 < 1) {
    param_1[0x14] = 0;
    param_1[0x15] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined1 *)FUN_00421ed0(uVar12,1,&local_34);
    *(uint *)(param_1 + 0x15) = uVar5;
    *(uint *)((long)param_1 + 0xac) = local_34;
    uVar3 = uVar5 & 3;
    param_1[0x14] = puVar8;
    if (2 < uVar5 - 1) {
      iVar10 = uVar3 - uVar5;
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar14;
        puVar9[1] = puVar14[1];
        puVar9[2] = puVar14[2];
        puVar1 = puVar14 + 3;
        puVar8 = puVar9 + 4;
        puVar14 = puVar14 + 4;
        puVar9[3] = *puVar1;
        iVar10 = iVar10 + 4;
        puVar9 = puVar8;
      } while (iVar10 != 0);
    }
    if (uVar3 != 0) {
      iVar10 = -uVar3;
      do {
        iVar10 = iVar10 + 1;
        *puVar8 = *puVar14;
        puVar8 = puVar8 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar10 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  return;
}

