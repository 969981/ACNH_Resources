
void FUN_00531570(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined2 *puVar25;
  undefined4 *puVar26;
  undefined8 *puVar27;
  undefined1 *puVar28;
  uint local_34;
  
  param_1[2] = 1;
  *param_1 = &PTR_LAB_048d13b0;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  uVar19 = *(undefined8 *)(param_2 + 0x28);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  uVar21 = *(undefined8 *)(param_2 + 0x30);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar19;
  param_1[6] = uVar21;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0x48);
  puVar24 = *(undefined8 **)(param_2 + 0x40);
  uVar19 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar9 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar11 = (undefined8 *)FUN_00421ed0(uVar19,0x10,&local_34);
    *(uint *)(param_1 + 9) = uVar9;
    *(uint *)((long)param_1 + 0x4c) = local_34;
    uVar4 = uVar9 & 3;
    param_1[8] = puVar11;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar18 = puVar11;
      puVar27 = puVar24;
      do {
        uVar21 = puVar27[1];
        puVar11 = puVar18 + 8;
        *puVar18 = *puVar27;
        puVar18[1] = uVar21;
        puVar24 = puVar27 + 8;
        uVar21 = puVar27[3];
        iVar20 = iVar20 + 4;
        puVar18[2] = puVar27[2];
        puVar18[3] = uVar21;
        uVar21 = puVar27[5];
        puVar18[4] = puVar27[4];
        puVar18[5] = uVar21;
        uVar21 = puVar27[7];
        puVar18[6] = puVar27[6];
        puVar18[7] = uVar21;
        puVar18 = puVar11;
        puVar27 = puVar24;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        uVar21 = puVar24[1];
        *puVar11 = *puVar24;
        puVar11[1] = uVar21;
        iVar20 = iVar20 + 1;
        puVar11 = puVar11 + 2;
        puVar24 = puVar24 + 2;
      } while (iVar20 != 0);
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0x58);
  puVar25 = *(undefined2 **)(param_2 + 0x50);
  if ((int)uVar9 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar12 = (undefined2 *)FUN_00421ed0(uVar19,2,&local_34);
    *(uint *)(param_1 + 0xb) = uVar9;
    *(uint *)((long)param_1 + 0x5c) = local_34;
    uVar4 = uVar9 & 3;
    param_1[10] = puVar12;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar15 = puVar12;
      do {
        *puVar15 = *puVar25;
        puVar15[1] = puVar25[1];
        puVar15[2] = puVar25[2];
        puVar2 = puVar25 + 3;
        puVar12 = puVar15 + 4;
        puVar25 = puVar25 + 4;
        puVar15[3] = *puVar2;
        iVar20 = iVar20 + 4;
        puVar15 = puVar12;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar12 = *puVar25;
        puVar12 = puVar12 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar20 != 0);
    }
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0x70);
  puVar26 = *(undefined4 **)(param_2 + 0x68);
  if ((int)uVar9 < 1) {
    param_1[0xd] = 0;
    param_1[0xe] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar13 = (undefined4 *)FUN_00421ed0(uVar19,4,&local_34);
    *(uint *)(param_1 + 0xe) = uVar9;
    *(uint *)((long)param_1 + 0x74) = local_34;
    uVar4 = uVar9 & 3;
    param_1[0xd] = puVar13;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar14 = puVar13;
      do {
        *puVar14 = *puVar26;
        puVar14[1] = puVar26[1];
        puVar14[2] = puVar26[2];
        puVar3 = puVar26 + 3;
        puVar13 = puVar14 + 4;
        puVar26 = puVar26 + 4;
        puVar14[3] = *puVar3;
        iVar20 = iVar20 + 4;
        puVar14 = puVar13;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar13 = *puVar26;
        puVar13 = puVar13 + 1;
        puVar26 = puVar26 + 1;
      } while (iVar20 != 0);
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0x80);
  puVar24 = *(undefined8 **)(param_2 + 0x78);
  if ((int)uVar9 < 1) {
    param_1[0xf] = 0;
    param_1[0x10] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar11 = (undefined8 *)FUN_00421ed0(uVar19,8,&local_34);
    *(uint *)(param_1 + 0x10) = uVar9;
    *(uint *)((long)param_1 + 0x84) = local_34;
    uVar4 = uVar9 & 3;
    param_1[0xf] = puVar11;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar18 = puVar11;
      do {
        *puVar18 = *puVar24;
        puVar18[1] = puVar24[1];
        puVar18[2] = puVar24[2];
        puVar27 = puVar24 + 3;
        puVar11 = puVar18 + 4;
        puVar24 = puVar24 + 4;
        puVar18[3] = *puVar27;
        iVar20 = iVar20 + 4;
        puVar18 = puVar11;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar11 = *puVar24;
        puVar11 = puVar11 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar20 != 0);
    }
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0x90);
  puVar24 = *(undefined8 **)(param_2 + 0x88);
  if ((int)uVar9 < 1) {
    param_1[0x11] = 0;
    param_1[0x12] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar11 = (undefined8 *)FUN_00421ed0(uVar19,8,&local_34);
    *(uint *)(param_1 + 0x12) = uVar9;
    *(uint *)((long)param_1 + 0x94) = local_34;
    uVar4 = uVar9 & 3;
    param_1[0x11] = puVar11;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar18 = puVar11;
      do {
        *puVar18 = *puVar24;
        puVar18[1] = puVar24[1];
        puVar18[2] = puVar24[2];
        puVar27 = puVar24 + 3;
        puVar11 = puVar18 + 4;
        puVar24 = puVar24 + 4;
        puVar18[3] = *puVar27;
        iVar20 = iVar20 + 4;
        puVar18 = puVar11;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar11 = *puVar24;
        puVar11 = puVar11 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar20 != 0);
    }
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0xa0);
  puVar24 = *(undefined8 **)(param_2 + 0x98);
  if ((int)uVar9 < 1) {
    param_1[0x13] = 0;
    param_1[0x14] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar11 = (undefined8 *)FUN_00421ed0(uVar19,8,&local_34);
    *(uint *)(param_1 + 0x14) = uVar9;
    *(uint *)((long)param_1 + 0xa4) = local_34;
    uVar4 = uVar9 & 3;
    param_1[0x13] = puVar11;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar18 = puVar11;
      do {
        *puVar18 = *puVar24;
        puVar18[1] = puVar24[1];
        puVar18[2] = puVar24[2];
        puVar27 = puVar24 + 3;
        puVar11 = puVar18 + 4;
        puVar24 = puVar24 + 4;
        puVar18[3] = *puVar27;
        iVar20 = iVar20 + 4;
        puVar18 = puVar11;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar11 = *puVar24;
        puVar11 = puVar11 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar20 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0xb8);
  puVar26 = *(undefined4 **)(param_2 + 0xb0);
  if ((int)uVar9 < 1) {
    param_1[0x16] = 0;
    param_1[0x17] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar13 = (undefined4 *)FUN_00421ed0(uVar19,4,&local_34);
    *(uint *)(param_1 + 0x17) = uVar9;
    *(uint *)((long)param_1 + 0xbc) = local_34;
    uVar4 = uVar9 & 3;
    param_1[0x16] = puVar13;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar14 = puVar13;
      do {
        *puVar14 = *puVar26;
        puVar14[1] = puVar26[1];
        puVar14[2] = puVar26[2];
        puVar3 = puVar26 + 3;
        puVar13 = puVar14 + 4;
        puVar26 = puVar26 + 4;
        puVar14[3] = *puVar3;
        iVar20 = iVar20 + 4;
        puVar14 = puVar13;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar13 = *puVar26;
        puVar13 = puVar13 + 1;
        puVar26 = puVar26 + 1;
      } while (iVar20 != 0);
    }
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 200);
  puVar24 = *(undefined8 **)(param_2 + 0xc0);
  if ((int)uVar9 < 1) {
    param_1[0x18] = 0;
    param_1[0x19] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar11 = (undefined8 *)FUN_00421ed0(uVar19,0x40,&local_34);
    *(uint *)(param_1 + 0x19) = uVar9;
    *(uint *)((long)param_1 + 0xcc) = local_34;
    uVar4 = uVar9 & 3;
    param_1[0x18] = puVar11;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar18 = puVar11;
      puVar27 = puVar24;
      do {
        uVar21 = puVar27[1];
        puVar18[3] = puVar27[3];
        uVar22 = puVar27[2];
        *puVar18 = *puVar27;
        puVar18[1] = uVar21;
        puVar18[2] = uVar22;
        uVar22 = puVar27[5];
        puVar18[7] = puVar27[7];
        uVar21 = puVar27[4];
        uVar23 = puVar27[6];
        puVar18[5] = uVar22;
        puVar18[6] = uVar23;
        puVar18[4] = uVar21;
        uVar5 = puVar27[0xd];
        uVar21 = puVar27[0xe];
        uVar6 = puVar27[0xf];
        puVar18[0xc] = puVar27[0xc];
        uVar22 = puVar27[8];
        uVar7 = puVar27[9];
        puVar11 = puVar18 + 0x20;
        uVar23 = puVar27[10];
        uVar8 = puVar27[0xb];
        puVar18[0xd] = uVar5;
        puVar18[0xe] = uVar21;
        puVar18[0xf] = uVar6;
        puVar24 = puVar27 + 0x20;
        puVar18[10] = uVar23;
        puVar18[0xb] = uVar8;
        iVar20 = iVar20 + 4;
        puVar18[8] = uVar22;
        puVar18[9] = uVar7;
        uVar21 = puVar27[0x10];
        uVar22 = puVar27[0x11];
        uVar23 = puVar27[0x13];
        puVar18[0x12] = puVar27[0x12];
        puVar18[0x13] = uVar23;
        puVar18[0x10] = uVar21;
        puVar18[0x11] = uVar22;
        uVar21 = puVar27[0x14];
        uVar22 = puVar27[0x15];
        uVar23 = puVar27[0x17];
        puVar18[0x16] = puVar27[0x16];
        puVar18[0x17] = uVar23;
        puVar18[0x14] = uVar21;
        puVar18[0x15] = uVar22;
        uVar21 = puVar27[0x18];
        uVar22 = puVar27[0x19];
        uVar23 = puVar27[0x1b];
        puVar18[0x1a] = puVar27[0x1a];
        puVar18[0x1b] = uVar23;
        puVar18[0x18] = uVar21;
        puVar18[0x19] = uVar22;
        uVar21 = puVar27[0x1c];
        uVar22 = puVar27[0x1d];
        uVar23 = puVar27[0x1f];
        puVar18[0x1e] = puVar27[0x1e];
        puVar18[0x1f] = uVar23;
        puVar18[0x1c] = uVar21;
        puVar18[0x1d] = uVar22;
        puVar18 = puVar11;
        puVar27 = puVar24;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        uVar21 = puVar24[1];
        puVar11[3] = puVar24[3];
        puVar11[1] = uVar21;
        uVar21 = puVar24[5];
        puVar11[7] = puVar24[7];
        puVar11[5] = uVar21;
        uVar21 = *puVar24;
        puVar11[2] = puVar24[2];
        *puVar11 = uVar21;
        uVar21 = puVar24[4];
        puVar11[6] = puVar24[6];
        puVar11[4] = uVar21;
        puVar11 = puVar11 + 8;
        puVar24 = puVar24 + 8;
        iVar20 = iVar20 + 1;
      } while (iVar20 != 0);
    }
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0xd8);
  puVar24 = *(undefined8 **)(param_2 + 0xd0);
  if ((int)uVar9 < 1) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar11 = (undefined8 *)FUN_00421ed0(uVar19,8,&local_34);
    *(uint *)(param_1 + 0x1b) = uVar9;
    *(uint *)((long)param_1 + 0xdc) = local_34;
    uVar4 = uVar9 & 3;
    param_1[0x1a] = puVar11;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar18 = puVar11;
      do {
        *puVar18 = *puVar24;
        puVar18[1] = puVar24[1];
        puVar18[2] = puVar24[2];
        puVar27 = puVar24 + 3;
        puVar11 = puVar18 + 4;
        puVar24 = puVar24 + 4;
        puVar18[3] = *puVar27;
        iVar20 = iVar20 + 4;
        puVar18 = puVar11;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar11 = *puVar24;
        puVar11 = puVar11 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar20 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0xf0);
  puVar26 = *(undefined4 **)(param_2 + 0xe8);
  if ((int)uVar9 < 1) {
    param_1[0x1d] = 0;
    param_1[0x1e] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar13 = (undefined4 *)FUN_00421ed0(uVar19,4,&local_34);
    *(uint *)(param_1 + 0x1e) = uVar9;
    *(uint *)((long)param_1 + 0xf4) = local_34;
    uVar4 = uVar9 & 3;
    param_1[0x1d] = puVar13;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar14 = puVar13;
      do {
        *puVar14 = *puVar26;
        puVar14[1] = puVar26[1];
        puVar14[2] = puVar26[2];
        puVar3 = puVar26 + 3;
        puVar13 = puVar14 + 4;
        puVar26 = puVar26 + 4;
        puVar14[3] = *puVar3;
        iVar20 = iVar20 + 4;
        puVar14 = puVar13;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar13 = *puVar26;
        puVar13 = puVar13 + 1;
        puVar26 = puVar26 + 1;
      } while (iVar20 != 0);
    }
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0x100);
  puVar24 = *(undefined8 **)(param_2 + 0xf8);
  if ((int)uVar9 < 1) {
    param_1[0x1f] = 0;
    param_1[0x20] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar11 = (undefined8 *)FUN_00421ed0(uVar19,8,&local_34);
    param_1[0x1f] = puVar11;
    *(uint *)((long)param_1 + 0x104) = local_34;
    uVar4 = uVar9 & 3;
    *(uint *)(param_1 + 0x20) = uVar9;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar18 = puVar11;
      do {
        *puVar18 = *puVar24;
        puVar18[1] = puVar24[1];
        puVar18[2] = puVar24[2];
        puVar27 = puVar24 + 3;
        puVar11 = puVar18 + 4;
        puVar24 = puVar24 + 4;
        puVar18[3] = *puVar27;
        iVar20 = iVar20 + 4;
        puVar18 = puVar11;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar11 = *puVar24;
        puVar11 = puVar11 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar20 != 0);
    }
  }
  uVar21 = *(undefined8 *)(param_2 + 0x108);
  uVar22 = *(undefined8 *)(param_2 + 0x118);
  param_1[0x22] = *(undefined8 *)(param_2 + 0x110);
  param_1[0x23] = uVar22;
  param_1[0x21] = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0x120);
  uVar22 = *(undefined8 *)(param_2 + 0x128);
  uVar23 = *(undefined8 *)(param_2 + 0x138);
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  param_1[0x27] = uVar23;
  param_1[0x24] = uVar21;
  param_1[0x25] = uVar22;
  uVar22 = *(undefined8 *)(param_2 + 0x150);
  uVar21 = *(undefined8 *)(param_2 + 0x148);
  uVar10 = *(undefined4 *)(param_2 + 0x158);
  param_1[0x28] = *(undefined8 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x2b) = uVar10;
  param_1[0x29] = uVar21;
  param_1[0x2a] = uVar22;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0x168);
  puVar25 = *(undefined2 **)(param_2 + 0x160);
  if ((int)uVar9 < 1) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar12 = (undefined2 *)FUN_00421ed0(uVar19,2,&local_34);
    param_1[0x2c] = puVar12;
    *(uint *)((long)param_1 + 0x16c) = local_34;
    uVar4 = uVar9 & 3;
    *(uint *)(param_1 + 0x2d) = uVar9;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar15 = puVar12;
      do {
        *puVar15 = *puVar25;
        puVar15[1] = puVar25[1];
        puVar15[2] = puVar25[2];
        puVar2 = puVar25 + 3;
        puVar12 = puVar15 + 4;
        puVar25 = puVar25 + 4;
        puVar15[3] = *puVar2;
        iVar20 = iVar20 + 4;
        puVar15 = puVar12;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar12 = *puVar25;
        puVar12 = puVar12 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar20 != 0);
    }
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0x178);
  puVar28 = *(undefined1 **)(param_2 + 0x170);
  if ((int)uVar9 < 1) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar16 = (undefined1 *)FUN_00421ed0(uVar19,1,&local_34);
    param_1[0x2e] = puVar16;
    *(uint *)((long)param_1 + 0x17c) = local_34;
    uVar4 = uVar9 & 3;
    *(uint *)(param_1 + 0x2f) = uVar9;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar17 = puVar16;
      do {
        *puVar17 = *puVar28;
        puVar17[1] = puVar28[1];
        puVar17[2] = puVar28[2];
        puVar1 = puVar28 + 3;
        puVar16 = puVar17 + 4;
        puVar28 = puVar28 + 4;
        puVar17[3] = *puVar1;
        iVar20 = iVar20 + 4;
        puVar17 = puVar16;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar16 = *puVar28;
        puVar16 = puVar16 + 1;
        puVar28 = puVar28 + 1;
      } while (iVar20 != 0);
    }
  }
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x180);
  param_1[0x31] = 0;
  param_1[0x32] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 400);
  puVar28 = *(undefined1 **)(param_2 + 0x188);
  if ((int)uVar9 < 1) {
    param_1[0x31] = 0;
    param_1[0x32] = 0x8000000000000000;
  }
  else {
    local_34 = uVar9;
    puVar16 = (undefined1 *)FUN_00421ed0(uVar19,1,&local_34);
    param_1[0x31] = puVar16;
    *(uint *)((long)param_1 + 0x194) = local_34;
    uVar4 = uVar9 & 3;
    *(uint *)(param_1 + 0x32) = uVar9;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar17 = puVar16;
      do {
        *puVar17 = *puVar28;
        puVar17[1] = puVar28[1];
        puVar17[2] = puVar28[2];
        puVar1 = puVar28 + 3;
        puVar16 = puVar17 + 4;
        puVar28 = puVar28 + 4;
        puVar17[3] = *puVar1;
        iVar20 = iVar20 + 4;
        puVar17 = puVar16;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar16 = *puVar28;
        puVar16 = puVar16 + 1;
        puVar28 = puVar28 + 1;
      } while (iVar20 != 0);
    }
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0x8000000000000000;
  uVar9 = *(uint *)(param_2 + 0x1a0);
  puVar24 = *(undefined8 **)(param_2 + 0x198);
  local_34 = uVar9;
  if ((int)uVar9 < 1) {
    param_1[0x33] = 0;
    param_1[0x34] = 0x8000000000000000;
  }
  else {
    puVar11 = (undefined8 *)FUN_00421ed0(uVar19,8,&local_34);
    param_1[0x33] = puVar11;
    *(uint *)((long)param_1 + 0x1a4) = local_34;
    uVar4 = uVar9 & 3;
    *(uint *)(param_1 + 0x34) = uVar9;
    if (2 < uVar9 - 1) {
      iVar20 = uVar4 - uVar9;
      puVar18 = puVar11;
      do {
        *puVar18 = *puVar24;
        puVar18[1] = puVar24[1];
        puVar18[2] = puVar24[2];
        puVar27 = puVar24 + 3;
        puVar11 = puVar18 + 4;
        puVar24 = puVar24 + 4;
        puVar18[3] = *puVar27;
        iVar20 = iVar20 + 4;
        puVar18 = puVar11;
      } while (iVar20 != 0);
    }
    if (uVar4 != 0) {
      iVar20 = -uVar4;
      do {
        iVar20 = iVar20 + 1;
        *puVar11 = *puVar24;
        puVar11 = puVar11 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar20 != 0);
    }
  }
  param_1[0x35] = *(undefined8 *)(param_2 + 0x1a8);
  FUN_00532140(param_1 + 0x36,param_2 + 0x1b0);
  return;
}

