
void FUN_00530240(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  uint local_34;
  
  FUN_0052c800();
  *param_1 = &PTR_LAB_048d4cd8;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x50);
  puVar14 = *(undefined2 **)(param_2 + 0x48);
  uVar13 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar5 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar6 = (undefined2 *)FUN_00421ed0(uVar13,2,&local_34);
    *(uint *)(param_1 + 10) = uVar5;
    *(uint *)((long)param_1 + 0x54) = local_34;
    uVar4 = uVar5 & 3;
    param_1[9] = puVar6;
    if (2 < uVar5 - 1) {
      iVar12 = uVar4 - uVar5;
      puVar9 = puVar6;
      do {
        *puVar9 = *puVar14;
        puVar9[1] = puVar14[1];
        puVar9[2] = puVar14[2];
        puVar2 = puVar14 + 3;
        puVar6 = puVar9 + 4;
        puVar14 = puVar14 + 4;
        puVar9[3] = *puVar2;
        iVar12 = iVar12 + 4;
        puVar9 = puVar6;
      } while (iVar12 != 0);
    }
    if (uVar4 != 0) {
      iVar12 = -uVar4;
      do {
        iVar12 = iVar12 + 1;
        *puVar6 = *puVar14;
        puVar6 = puVar6 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x60);
  puVar15 = *(undefined1 **)(param_2 + 0x58);
  if ((int)uVar5 < 1) {
    param_1[0xb] = 0;
    param_1[0xc] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar7 = (undefined1 *)FUN_00421ed0(uVar13,1,&local_34);
    *(uint *)(param_1 + 0xc) = uVar5;
    *(uint *)((long)param_1 + 100) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0xb] = puVar7;
    if (2 < uVar5 - 1) {
      iVar12 = uVar4 - uVar5;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar15;
        puVar8[1] = puVar15[1];
        puVar8[2] = puVar15[2];
        puVar1 = puVar15 + 3;
        puVar7 = puVar8 + 4;
        puVar15 = puVar15 + 4;
        puVar8[3] = *puVar1;
        iVar12 = iVar12 + 4;
        puVar8 = puVar7;
      } while (iVar12 != 0);
    }
    if (uVar4 != 0) {
      iVar12 = -uVar4;
      do {
        iVar12 = iVar12 + 1;
        *puVar7 = *puVar15;
        puVar7 = puVar7 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x70);
  puVar14 = *(undefined2 **)(param_2 + 0x68);
  if ((int)uVar5 < 1) {
    param_1[0xd] = 0;
    param_1[0xe] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar6 = (undefined2 *)FUN_00421ed0(uVar13,2,&local_34);
    *(uint *)(param_1 + 0xe) = uVar5;
    *(uint *)((long)param_1 + 0x74) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0xd] = puVar6;
    if (2 < uVar5 - 1) {
      iVar12 = uVar4 - uVar5;
      puVar9 = puVar6;
      do {
        *puVar9 = *puVar14;
        puVar9[1] = puVar14[1];
        puVar9[2] = puVar14[2];
        puVar2 = puVar14 + 3;
        puVar6 = puVar9 + 4;
        puVar14 = puVar14 + 4;
        puVar9[3] = *puVar2;
        iVar12 = iVar12 + 4;
        puVar9 = puVar6;
      } while (iVar12 != 0);
    }
    if (uVar4 != 0) {
      iVar12 = -uVar4;
      do {
        iVar12 = iVar12 + 1;
        *puVar6 = *puVar14;
        puVar6 = puVar6 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x80);
  puVar16 = *(undefined4 **)(param_2 + 0x78);
  if ((int)uVar5 < 1) {
    param_1[0xf] = 0;
    param_1[0x10] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar10 = (undefined4 *)FUN_00421ed0(uVar13,4,&local_34);
    *(uint *)(param_1 + 0x10) = uVar5;
    *(uint *)((long)param_1 + 0x84) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0xf] = puVar10;
    if (2 < uVar5 - 1) {
      iVar12 = uVar4 - uVar5;
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar16;
        puVar11[1] = puVar16[1];
        puVar11[2] = puVar16[2];
        puVar3 = puVar16 + 3;
        puVar10 = puVar11 + 4;
        puVar16 = puVar16 + 4;
        puVar11[3] = *puVar3;
        iVar12 = iVar12 + 4;
        puVar11 = puVar10;
      } while (iVar12 != 0);
    }
    if (uVar4 != 0) {
      iVar12 = -uVar4;
      do {
        iVar12 = iVar12 + 1;
        *puVar10 = *puVar16;
        puVar10 = puVar10 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x90);
  puVar16 = *(undefined4 **)(param_2 + 0x88);
  if ((int)uVar5 < 1) {
    param_1[0x11] = 0;
    param_1[0x12] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar10 = (undefined4 *)FUN_00421ed0(uVar13,4,&local_34);
    *(uint *)(param_1 + 0x12) = uVar5;
    *(uint *)((long)param_1 + 0x94) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x11] = puVar10;
    if (2 < uVar5 - 1) {
      iVar12 = uVar4 - uVar5;
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar16;
        puVar11[1] = puVar16[1];
        puVar11[2] = puVar16[2];
        puVar3 = puVar16 + 3;
        puVar10 = puVar11 + 4;
        puVar16 = puVar16 + 4;
        puVar11[3] = *puVar3;
        iVar12 = iVar12 + 4;
        puVar11 = puVar10;
      } while (iVar12 != 0);
    }
    if (uVar4 != 0) {
      iVar12 = -uVar4;
      do {
        iVar12 = iVar12 + 1;
        *puVar10 = *puVar16;
        puVar10 = puVar10 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xa0);
  puVar16 = *(undefined4 **)(param_2 + 0x98);
  if ((int)uVar5 < 1) {
    param_1[0x13] = 0;
    param_1[0x14] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar10 = (undefined4 *)FUN_00421ed0(uVar13,4,&local_34);
    *(uint *)(param_1 + 0x14) = uVar5;
    *(uint *)((long)param_1 + 0xa4) = local_34;
    uVar4 = uVar5 & 3;
    param_1[0x13] = puVar10;
    if (2 < uVar5 - 1) {
      iVar12 = uVar4 - uVar5;
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar16;
        puVar11[1] = puVar16[1];
        puVar11[2] = puVar16[2];
        puVar3 = puVar16 + 3;
        puVar10 = puVar11 + 4;
        puVar16 = puVar16 + 4;
        puVar11[3] = *puVar3;
        iVar12 = iVar12 + 4;
        puVar11 = puVar10;
      } while (iVar12 != 0);
    }
    if (uVar4 != 0) {
      iVar12 = -uVar4;
      do {
        iVar12 = iVar12 + 1;
        *puVar10 = *puVar16;
        puVar10 = puVar10 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar12 != 0);
    }
  }
  uVar13 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)((long)param_1 + 0xaf) = *(undefined4 *)(param_2 + 0xaf);
  param_1[0x15] = uVar13;
  return;
}

