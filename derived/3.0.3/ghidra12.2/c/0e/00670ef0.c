
void FUN_00670ef0(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  uint local_34;
  
  *param_1 = &PTR_LAB_048ea7a0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x20);
  puVar11 = *(undefined1 **)(param_2 + 0x18);
  uVar10 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar4 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined1 *)FUN_00421ed0(uVar10,1,&local_34);
    *(uint *)(param_1 + 4) = uVar4;
    *(uint *)((long)param_1 + 0x24) = local_34;
    uVar3 = uVar4 & 3;
    param_1[3] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar11;
        puVar6[1] = puVar11[1];
        puVar6[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar5 = puVar6 + 4;
        puVar11 = puVar11 + 4;
        puVar6[3] = *puVar1;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
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
  puVar11 = *(undefined1 **)(param_2 + 0x28);
  if ((int)uVar4 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined1 *)FUN_00421ed0(uVar10,1,&local_34);
    *(uint *)(param_1 + 6) = uVar4;
    *(uint *)((long)param_1 + 0x34) = local_34;
    uVar3 = uVar4 & 3;
    param_1[5] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar11;
        puVar6[1] = puVar11[1];
        puVar6[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar5 = puVar6 + 4;
        puVar11 = puVar11 + 4;
        puVar6[3] = *puVar1;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
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
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x40);
  puVar11 = *(undefined1 **)(param_2 + 0x38);
  if ((int)uVar4 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined1 *)FUN_00421ed0(uVar10,1,&local_34);
    *(uint *)(param_1 + 8) = uVar4;
    *(uint *)((long)param_1 + 0x44) = local_34;
    uVar3 = uVar4 & 3;
    param_1[7] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar11;
        puVar6[1] = puVar11[1];
        puVar6[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar5 = puVar6 + 4;
        puVar11 = puVar11 + 4;
        puVar6[3] = *puVar1;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
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
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x50);
  puVar11 = *(undefined1 **)(param_2 + 0x48);
  if ((int)uVar4 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined1 *)FUN_00421ed0(uVar10,1,&local_34);
    *(uint *)(param_1 + 10) = uVar4;
    *(uint *)((long)param_1 + 0x54) = local_34;
    uVar3 = uVar4 & 3;
    param_1[9] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar11;
        puVar6[1] = puVar11[1];
        puVar6[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar5 = puVar6 + 4;
        puVar11 = puVar11 + 4;
        puVar6[3] = *puVar1;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
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
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x60);
  puVar11 = *(undefined1 **)(param_2 + 0x58);
  if ((int)uVar4 < 1) {
    param_1[0xb] = 0;
    param_1[0xc] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined1 *)FUN_00421ed0(uVar10,1,&local_34);
    *(uint *)(param_1 + 0xc) = uVar4;
    *(uint *)((long)param_1 + 100) = local_34;
    uVar3 = uVar4 & 3;
    param_1[0xb] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar11;
        puVar6[1] = puVar11[1];
        puVar6[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar5 = puVar6 + 4;
        puVar11 = puVar11 + 4;
        puVar6[3] = *puVar1;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
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
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x70);
  puVar12 = *(undefined4 **)(param_2 + 0x68);
  if ((int)uVar4 < 1) {
    param_1[0xd] = 0;
    param_1[0xe] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar10,4,&local_34);
    *(uint *)(param_1 + 0xe) = uVar4;
    *(uint *)((long)param_1 + 0x74) = local_34;
    uVar3 = uVar4 & 3;
    param_1[0xd] = puVar7;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar12;
        puVar8[1] = puVar12[1];
        puVar8[2] = puVar12[2];
        puVar2 = puVar12 + 3;
        puVar7 = puVar8 + 4;
        puVar12 = puVar12 + 4;
        puVar8[3] = *puVar2;
        iVar9 = iVar9 + 4;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    if (uVar3 != 0) {
      iVar9 = -uVar3;
      do {
        iVar9 = iVar9 + 1;
        *puVar7 = *puVar12;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x80);
  puVar12 = *(undefined4 **)(param_2 + 0x78);
  if ((int)uVar4 < 1) {
    param_1[0xf] = 0;
    param_1[0x10] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar10,4,&local_34);
    *(uint *)(param_1 + 0x10) = uVar4;
    *(uint *)((long)param_1 + 0x84) = local_34;
    uVar3 = uVar4 & 3;
    param_1[0xf] = puVar7;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar12;
        puVar8[1] = puVar12[1];
        puVar8[2] = puVar12[2];
        puVar2 = puVar12 + 3;
        puVar7 = puVar8 + 4;
        puVar12 = puVar12 + 4;
        puVar8[3] = *puVar2;
        iVar9 = iVar9 + 4;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    if (uVar3 != 0) {
      iVar9 = -uVar3;
      do {
        iVar9 = iVar9 + 1;
        *puVar7 = *puVar12;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x90);
  puVar12 = *(undefined4 **)(param_2 + 0x88);
  if ((int)uVar4 < 1) {
    param_1[0x11] = 0;
    param_1[0x12] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar10,4,&local_34);
    *(uint *)(param_1 + 0x12) = uVar4;
    *(uint *)((long)param_1 + 0x94) = local_34;
    uVar3 = uVar4 & 3;
    param_1[0x11] = puVar7;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar12;
        puVar8[1] = puVar12[1];
        puVar8[2] = puVar12[2];
        puVar2 = puVar12 + 3;
        puVar7 = puVar8 + 4;
        puVar12 = puVar12 + 4;
        puVar8[3] = *puVar2;
        iVar9 = iVar9 + 4;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    if (uVar3 != 0) {
      iVar9 = -uVar3;
      do {
        iVar9 = iVar9 + 1;
        *puVar7 = *puVar12;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0xa0);
  puVar12 = *(undefined4 **)(param_2 + 0x98);
  if ((int)uVar4 < 1) {
    param_1[0x13] = 0;
    param_1[0x14] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar10,4,&local_34);
    *(uint *)(param_1 + 0x14) = uVar4;
    *(uint *)((long)param_1 + 0xa4) = local_34;
    uVar3 = uVar4 & 3;
    param_1[0x13] = puVar7;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar12;
        puVar8[1] = puVar12[1];
        puVar8[2] = puVar12[2];
        puVar2 = puVar12 + 3;
        puVar7 = puVar8 + 4;
        puVar12 = puVar12 + 4;
        puVar8[3] = *puVar2;
        iVar9 = iVar9 + 4;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    if (uVar3 != 0) {
      iVar9 = -uVar3;
      do {
        iVar9 = iVar9 + 1;
        *puVar7 = *puVar12;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0xb0);
  puVar12 = *(undefined4 **)(param_2 + 0xa8);
  if ((int)uVar4 < 1) {
    param_1[0x15] = 0;
    param_1[0x16] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar10,4,&local_34);
    *(uint *)(param_1 + 0x16) = uVar4;
    *(uint *)((long)param_1 + 0xb4) = local_34;
    uVar3 = uVar4 & 3;
    param_1[0x15] = puVar7;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar12;
        puVar8[1] = puVar12[1];
        puVar8[2] = puVar12[2];
        puVar2 = puVar12 + 3;
        puVar7 = puVar8 + 4;
        puVar12 = puVar12 + 4;
        puVar8[3] = *puVar2;
        iVar9 = iVar9 + 4;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    if (uVar3 != 0) {
      iVar9 = -uVar3;
      do {
        iVar9 = iVar9 + 1;
        *puVar7 = *puVar12;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0xc0);
  puVar12 = *(undefined4 **)(param_2 + 0xb8);
  if ((int)uVar4 < 1) {
    param_1[0x17] = 0;
    param_1[0x18] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar10,4,&local_34);
    *(uint *)(param_1 + 0x18) = uVar4;
    *(uint *)((long)param_1 + 0xc4) = local_34;
    uVar3 = uVar4 & 3;
    param_1[0x17] = puVar7;
    if (2 < uVar4 - 1) {
      iVar9 = uVar3 - uVar4;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar12;
        puVar8[1] = puVar12[1];
        puVar8[2] = puVar12[2];
        puVar2 = puVar12 + 3;
        puVar7 = puVar8 + 4;
        puVar12 = puVar12 + 4;
        puVar8[3] = *puVar2;
        iVar9 = iVar9 + 4;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    if (uVar3 != 0) {
      iVar9 = -uVar3;
      do {
        iVar9 = iVar9 + 1;
        *puVar7 = *puVar12;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  param_1[0x19] = uVar10;
  return;
}

