
void FUN_00534e10(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint local_34;
  
  *param_1 = &PTR_LAB_048d6958;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x28);
  puVar12 = *(undefined8 **)(param_2 + 0x20);
  uVar11 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar4 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined8 *)FUN_00421ed0(uVar11,0x10,&local_34);
    *(uint *)(param_1 + 5) = uVar4;
    *(uint *)((long)param_1 + 0x2c) = local_34;
    uVar1 = uVar4 & 3;
    param_1[4] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar1 - uVar4;
      puVar6 = puVar5;
      do {
        puVar6[1] = puVar12[1];
        *puVar6 = *puVar12;
        puVar6[3] = puVar12[3];
        puVar6[2] = puVar12[2];
        puVar6[5] = puVar12[5];
        puVar6[4] = puVar12[4];
        puVar6[7] = puVar12[7];
        puVar13 = puVar12 + 6;
        puVar5 = puVar6 + 8;
        puVar12 = puVar12 + 8;
        puVar6[6] = *puVar13;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        puVar5[1] = puVar12[1];
        iVar9 = iVar9 + 1;
        *puVar5 = *puVar12;
        puVar5 = puVar5 + 2;
        puVar12 = puVar12 + 2;
      } while (iVar9 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x38);
  puVar12 = *(undefined8 **)(param_2 + 0x30);
  if ((int)uVar4 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined8 *)FUN_00421ed0(uVar11,0x10,&local_34);
    *(uint *)(param_1 + 7) = uVar4;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    uVar1 = uVar4 & 3;
    param_1[6] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar1 - uVar4;
      puVar6 = puVar5;
      do {
        puVar6[1] = puVar12[1];
        *puVar6 = *puVar12;
        puVar6[3] = puVar12[3];
        puVar6[2] = puVar12[2];
        puVar6[5] = puVar12[5];
        puVar6[4] = puVar12[4];
        puVar6[7] = puVar12[7];
        puVar13 = puVar12 + 6;
        puVar5 = puVar6 + 8;
        puVar12 = puVar12 + 8;
        puVar6[6] = *puVar13;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        puVar5[1] = puVar12[1];
        iVar9 = iVar9 + 1;
        *puVar5 = *puVar12;
        puVar5 = puVar5 + 2;
        puVar12 = puVar12 + 2;
      } while (iVar9 != 0);
    }
  }
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x48);
  puVar12 = *(undefined8 **)(param_2 + 0x40);
  if ((int)uVar4 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined8 *)FUN_00421ed0(uVar11,0x10,&local_34);
    *(uint *)(param_1 + 9) = uVar4;
    *(uint *)((long)param_1 + 0x4c) = local_34;
    uVar1 = uVar4 & 3;
    param_1[8] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar1 - uVar4;
      puVar6 = puVar5;
      do {
        puVar6[1] = puVar12[1];
        *puVar6 = *puVar12;
        puVar6[3] = puVar12[3];
        puVar6[2] = puVar12[2];
        puVar6[5] = puVar12[5];
        puVar6[4] = puVar12[4];
        puVar6[7] = puVar12[7];
        puVar13 = puVar12 + 6;
        puVar5 = puVar6 + 8;
        puVar12 = puVar12 + 8;
        puVar6[6] = *puVar13;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        puVar5[1] = puVar12[1];
        iVar9 = iVar9 + 1;
        *puVar5 = *puVar12;
        puVar5 = puVar5 + 2;
        puVar12 = puVar12 + 2;
      } while (iVar9 != 0);
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xb] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0xf] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x13] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  param_1[0x17] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[10] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x70);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0xe] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x12] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x18] = uVar8;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0xd8);
  puVar12 = *(undefined8 **)(param_2 + 0xd0);
  if ((int)uVar4 < 1) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined8 *)FUN_00421ed0(uVar11,8,&local_34);
    *(uint *)(param_1 + 0x1b) = uVar4;
    *(uint *)((long)param_1 + 0xdc) = local_34;
    uVar1 = uVar4 & 3;
    param_1[0x1a] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar1 - uVar4;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar12;
        puVar6[1] = puVar12[1];
        puVar6[2] = puVar12[2];
        puVar13 = puVar12 + 3;
        puVar5 = puVar6 + 4;
        puVar12 = puVar12 + 4;
        puVar6[3] = *puVar13;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar5 = *puVar12;
        puVar5 = puVar5 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[0x1c] = *(undefined8 *)(param_2 + 0xe0);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0xf0);
  puVar12 = *(undefined8 **)(param_2 + 0xe8);
  local_34 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[0x1d] = 0;
    param_1[0x1e] = 0x8000000000000000;
  }
  else {
    puVar5 = (undefined8 *)FUN_00421ed0(uVar11,8,&local_34);
    *(uint *)(param_1 + 0x1e) = uVar4;
    *(uint *)((long)param_1 + 0xf4) = local_34;
    uVar1 = uVar4 & 3;
    param_1[0x1d] = puVar5;
    if (2 < uVar4 - 1) {
      iVar9 = uVar1 - uVar4;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar12;
        puVar6[1] = puVar12[1];
        puVar6[2] = puVar12[2];
        puVar13 = puVar12 + 3;
        puVar5 = puVar6 + 4;
        puVar12 = puVar12 + 4;
        puVar6[3] = *puVar13;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar5 = *puVar12;
        puVar5 = puVar5 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  FUN_004385f0(param_1 + 0x20,param_2 + 0x100);
  param_1[0x27] = *(undefined8 *)(param_2 + 0x138);
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  param_1[0x29] = *(undefined8 *)(param_2 + 0x148);
  uVar8 = *(undefined8 *)(param_2 + 0x150);
  param_1[0x28] = *(undefined8 *)(param_2 + 0x140);
  param_1[0x2a] = uVar8;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x160);
  puVar12 = *(undefined8 **)(param_2 + 0x158);
  if ((int)uVar4 < 1) {
    param_1[0x2b] = 0;
    param_1[0x2c] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined8 *)FUN_00421ed0(uVar11,0x10,&local_34);
    param_1[0x2b] = puVar5;
    *(uint *)((long)param_1 + 0x164) = local_34;
    uVar1 = uVar4 & 3;
    *(uint *)(param_1 + 0x2c) = uVar4;
    if (2 < uVar4 - 1) {
      iVar9 = uVar1 - uVar4;
      puVar6 = puVar5;
      puVar13 = puVar12;
      do {
        uVar8 = puVar13[1];
        puVar5 = puVar6 + 8;
        *puVar6 = *puVar13;
        puVar6[1] = uVar8;
        puVar12 = puVar13 + 8;
        uVar8 = puVar13[3];
        iVar9 = iVar9 + 4;
        puVar6[2] = puVar13[2];
        puVar6[3] = uVar8;
        uVar8 = puVar13[5];
        puVar6[4] = puVar13[4];
        puVar6[5] = uVar8;
        uVar8 = puVar13[7];
        puVar6[6] = puVar13[6];
        puVar6[7] = uVar8;
        puVar6 = puVar5;
        puVar13 = puVar12;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        uVar8 = puVar12[1];
        *puVar5 = *puVar12;
        puVar5[1] = uVar8;
        iVar9 = iVar9 + 1;
        puVar5 = puVar5 + 2;
        puVar12 = puVar12 + 2;
      } while (iVar9 != 0);
    }
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x170);
  puVar12 = *(undefined8 **)(param_2 + 0x168);
  if ((int)uVar4 < 1) {
    param_1[0x2d] = 0;
    param_1[0x2e] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined8 *)FUN_00421ed0(uVar11,8,&local_34);
    param_1[0x2d] = puVar5;
    *(uint *)((long)param_1 + 0x174) = local_34;
    uVar1 = uVar4 & 3;
    *(uint *)(param_1 + 0x2e) = uVar4;
    if (2 < uVar4 - 1) {
      iVar9 = uVar1 - uVar4;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar12;
        puVar6[1] = puVar12[1];
        puVar6[2] = puVar12[2];
        puVar13 = puVar12 + 3;
        puVar5 = puVar6 + 4;
        puVar12 = puVar12 + 4;
        puVar6[3] = *puVar13;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar5 = *puVar12;
        puVar5 = puVar5 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[0x2f] = 0;
  param_1[0x30] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x180);
  puVar12 = *(undefined8 **)(param_2 + 0x178);
  if ((int)uVar4 < 1) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0x8000000000000000;
  }
  else {
    local_34 = uVar4;
    puVar5 = (undefined8 *)FUN_00421ed0(uVar11,8,&local_34);
    param_1[0x2f] = puVar5;
    *(uint *)((long)param_1 + 0x184) = local_34;
    uVar1 = uVar4 & 3;
    *(uint *)(param_1 + 0x30) = uVar4;
    if (2 < uVar4 - 1) {
      iVar9 = uVar1 - uVar4;
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar12;
        puVar6[1] = puVar12[1];
        puVar6[2] = puVar12[2];
        puVar13 = puVar12 + 3;
        puVar5 = puVar6 + 4;
        puVar12 = puVar12 + 4;
        puVar6[3] = *puVar13;
        iVar9 = iVar9 + 4;
        puVar6 = puVar5;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar5 = *puVar12;
        puVar5 = puVar5 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0x188);
  uVar10 = *(undefined8 *)(param_2 + 0x198);
  param_1[0x32] = *(undefined8 *)(param_2 + 400);
  param_1[0x33] = uVar10;
  param_1[0x31] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x1a0);
  uVar10 = *(undefined8 *)(param_2 + 0x1a8);
  uVar2 = *(undefined8 *)(param_2 + 0x1b8);
  param_1[0x36] = *(undefined8 *)(param_2 + 0x1b0);
  param_1[0x37] = uVar2;
  param_1[0x34] = uVar8;
  param_1[0x35] = uVar10;
  uVar8 = *(undefined8 *)(param_2 + 0x1c0);
  uVar10 = *(undefined8 *)(param_2 + 0x1c8);
  uVar2 = *(undefined8 *)(param_2 + 0x1d8);
  param_1[0x3a] = *(undefined8 *)(param_2 + 0x1d0);
  param_1[0x3b] = uVar2;
  param_1[0x38] = uVar8;
  param_1[0x39] = uVar10;
  uVar8 = *(undefined8 *)(param_2 + 0x1e0);
  uVar2 = *(undefined8 *)(param_2 + 0x1e8);
  uVar10 = *(undefined8 *)(param_2 + 0x1f0);
  uVar3 = *(undefined8 *)(param_2 + 0x1f8);
  param_1[0x40] = 0;
  param_1[0x3c] = uVar8;
  param_1[0x3d] = uVar2;
  param_1[0x3e] = uVar10;
  param_1[0x3f] = uVar3;
  param_1[0x41] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x208);
  puVar12 = *(undefined8 **)(param_2 + 0x200);
  local_34 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[0x40] = 0;
    param_1[0x41] = 0x8000000000000000;
  }
  else {
    puVar5 = (undefined8 *)FUN_00421ed0(uVar11,0x10,&local_34);
    param_1[0x40] = puVar5;
    *(uint *)((long)param_1 + 0x20c) = local_34;
    uVar1 = uVar4 & 3;
    *(uint *)(param_1 + 0x41) = uVar4;
    if (2 < uVar4 - 1) {
      iVar9 = uVar1 - uVar4;
      puVar6 = puVar5;
      puVar13 = puVar12;
      do {
        uVar11 = puVar13[1];
        puVar5 = puVar6 + 8;
        *puVar6 = *puVar13;
        puVar6[1] = uVar11;
        puVar12 = puVar13 + 8;
        uVar11 = puVar13[3];
        iVar9 = iVar9 + 4;
        puVar6[2] = puVar13[2];
        puVar6[3] = uVar11;
        uVar11 = puVar13[5];
        puVar6[4] = puVar13[4];
        puVar6[5] = uVar11;
        uVar11 = puVar13[7];
        puVar6[6] = puVar13[6];
        puVar6[7] = uVar11;
        puVar6 = puVar5;
        puVar13 = puVar12;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        uVar11 = puVar12[1];
        *puVar5 = *puVar12;
        puVar5[1] = uVar11;
        iVar9 = iVar9 + 1;
        puVar5 = puVar5 + 2;
        puVar12 = puVar12 + 2;
      } while (iVar9 != 0);
    }
  }
  uVar11 = *(undefined8 *)(param_2 + 0x218);
  param_1[0x45] = *(undefined8 *)(param_2 + 0x228);
  param_1[0x43] = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 0x238);
  param_1[0x49] = *(undefined8 *)(param_2 + 0x248);
  param_1[0x47] = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 600);
  param_1[0x4d] = *(undefined8 *)(param_2 + 0x268);
  param_1[0x4b] = uVar11;
  param_1[0x42] = *(undefined8 *)(param_2 + 0x210);
  uVar11 = *(undefined8 *)(param_2 + 0x220);
  param_1[0x46] = *(undefined8 *)(param_2 + 0x230);
  param_1[0x44] = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 0x240);
  param_1[0x4a] = *(undefined8 *)(param_2 + 0x250);
  param_1[0x48] = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 0x260);
  param_1[0x4e] = *(undefined8 *)(param_2 + 0x270);
  param_1[0x4c] = uVar11;
  lVar7 = *(long *)(param_2 + 0x278);
  param_1[0x4f] = lVar7;
  if (lVar7 != 0) {
    FUN_004435a0();
  }
  param_1[0x51] = *(undefined8 *)(param_2 + 0x288);
  param_1[0x50] = *(undefined8 *)(param_2 + 0x280);
  return;
}

