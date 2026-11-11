
void FUN_00529e50(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint local_34;
  
  *param_1 = &PTR_LAB_048d51b8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x28);
  puVar9 = *(undefined8 **)(param_2 + 0x20);
  uVar8 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar3 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar8,8,&local_34);
    *(uint *)(param_1 + 5) = uVar3;
    *(uint *)((long)param_1 + 0x2c) = local_34;
    uVar1 = uVar3 & 3;
    param_1[4] = puVar4;
    if (2 < uVar3 - 1) {
      iVar6 = uVar1 - uVar3;
      puVar5 = puVar4;
      do {
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        puVar5[2] = puVar9[2];
        puVar10 = puVar9 + 3;
        puVar4 = puVar5 + 4;
        puVar9 = puVar9 + 4;
        puVar5[3] = *puVar10;
        iVar6 = iVar6 + 4;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if (uVar1 != 0) {
      iVar6 = -uVar1;
      do {
        iVar6 = iVar6 + 1;
        *puVar4 = *puVar9;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar6 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x38);
  puVar9 = *(undefined8 **)(param_2 + 0x30);
  if ((int)uVar3 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar8,8,&local_34);
    *(uint *)(param_1 + 7) = uVar3;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    uVar1 = uVar3 & 3;
    param_1[6] = puVar4;
    if (2 < uVar3 - 1) {
      iVar6 = uVar1 - uVar3;
      puVar5 = puVar4;
      do {
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        puVar5[2] = puVar9[2];
        puVar10 = puVar9 + 3;
        puVar4 = puVar5 + 4;
        puVar9 = puVar9 + 4;
        puVar5[3] = *puVar10;
        iVar6 = iVar6 + 4;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if (uVar1 != 0) {
      iVar6 = -uVar1;
      do {
        iVar6 = iVar6 + 1;
        *puVar4 = *puVar9;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar6 != 0);
    }
  }
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x48);
  puVar9 = *(undefined8 **)(param_2 + 0x40);
  if ((int)uVar3 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar8,8,&local_34);
    *(uint *)(param_1 + 9) = uVar3;
    *(uint *)((long)param_1 + 0x4c) = local_34;
    uVar1 = uVar3 & 3;
    param_1[8] = puVar4;
    if (2 < uVar3 - 1) {
      iVar6 = uVar1 - uVar3;
      puVar5 = puVar4;
      do {
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        puVar5[2] = puVar9[2];
        puVar10 = puVar9 + 3;
        puVar4 = puVar5 + 4;
        puVar9 = puVar9 + 4;
        puVar5[3] = *puVar10;
        iVar6 = iVar6 + 4;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if (uVar1 != 0) {
      iVar6 = -uVar1;
      do {
        iVar6 = iVar6 + 1;
        *puVar4 = *puVar9;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar6 != 0);
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar7;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x70);
  puVar9 = *(undefined8 **)(param_2 + 0x68);
  if ((int)uVar3 < 1) {
    param_1[0xd] = 0;
    param_1[0xe] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar8,8,&local_34);
    *(uint *)(param_1 + 0xe) = uVar3;
    *(uint *)((long)param_1 + 0x74) = local_34;
    uVar1 = uVar3 & 3;
    param_1[0xd] = puVar4;
    if (2 < uVar3 - 1) {
      iVar6 = uVar1 - uVar3;
      puVar5 = puVar4;
      do {
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        puVar5[2] = puVar9[2];
        puVar10 = puVar9 + 3;
        puVar4 = puVar5 + 4;
        puVar9 = puVar9 + 4;
        puVar5[3] = *puVar10;
        iVar6 = iVar6 + 4;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if (uVar1 != 0) {
      iVar6 = -uVar1;
      do {
        iVar6 = iVar6 + 1;
        *puVar4 = *puVar9;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar6 != 0);
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x80);
  puVar9 = *(undefined8 **)(param_2 + 0x78);
  if ((int)uVar3 < 1) {
    param_1[0xf] = 0;
    param_1[0x10] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar8,0x10,&local_34);
    *(uint *)(param_1 + 0x10) = uVar3;
    *(uint *)((long)param_1 + 0x84) = local_34;
    uVar1 = uVar3 & 3;
    param_1[0xf] = puVar4;
    if (2 < uVar3 - 1) {
      iVar6 = uVar1 - uVar3;
      puVar5 = puVar4;
      puVar10 = puVar9;
      do {
        uVar2 = puVar10[1];
        puVar4 = puVar5 + 8;
        *puVar5 = *puVar10;
        puVar5[1] = uVar2;
        puVar9 = puVar10 + 8;
        uVar2 = puVar10[3];
        iVar6 = iVar6 + 4;
        puVar5[2] = puVar10[2];
        puVar5[3] = uVar2;
        uVar2 = puVar10[5];
        puVar5[4] = puVar10[4];
        puVar5[5] = uVar2;
        uVar2 = puVar10[7];
        puVar5[6] = puVar10[6];
        puVar5[7] = uVar2;
        puVar5 = puVar4;
        puVar10 = puVar9;
      } while (iVar6 != 0);
    }
    if (uVar1 != 0) {
      iVar6 = -uVar1;
      do {
        uVar2 = puVar9[1];
        *puVar4 = *puVar9;
        puVar4[1] = uVar2;
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 2;
        puVar9 = puVar9 + 2;
      } while (iVar6 != 0);
    }
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x90);
  puVar9 = *(undefined8 **)(param_2 + 0x88);
  if ((int)uVar3 < 1) {
    param_1[0x11] = 0;
    param_1[0x12] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined8 *)FUN_00421ed0(uVar8,0x10,&local_34);
    *(uint *)(param_1 + 0x12) = uVar3;
    *(uint *)((long)param_1 + 0x94) = local_34;
    uVar1 = uVar3 & 3;
    param_1[0x11] = puVar4;
    if (2 < uVar3 - 1) {
      iVar6 = uVar1 - uVar3;
      puVar5 = puVar4;
      puVar10 = puVar9;
      do {
        uVar8 = puVar10[1];
        puVar4 = puVar5 + 8;
        *puVar5 = *puVar10;
        puVar5[1] = uVar8;
        puVar9 = puVar10 + 8;
        uVar8 = puVar10[3];
        iVar6 = iVar6 + 4;
        puVar5[2] = puVar10[2];
        puVar5[3] = uVar8;
        uVar8 = puVar10[5];
        puVar5[4] = puVar10[4];
        puVar5[5] = uVar8;
        uVar8 = puVar10[7];
        puVar5[6] = puVar10[6];
        puVar5[7] = uVar8;
        puVar5 = puVar4;
        puVar10 = puVar9;
      } while (iVar6 != 0);
    }
    if (uVar1 != 0) {
      iVar6 = -uVar1;
      do {
        uVar8 = puVar9[1];
        *puVar4 = *puVar9;
        puVar4[1] = uVar8;
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 2;
        puVar9 = puVar9 + 2;
      } while (iVar6 != 0);
    }
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x13] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar8 = *(undefined8 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x138);
  param_1[0x26] = uVar8;
  return;
}

