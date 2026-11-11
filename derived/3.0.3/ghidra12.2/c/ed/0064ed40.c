
void FUN_0064ed40(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint local_44;
  uint local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_048e25c8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x20);
  puVar14 = *(undefined8 **)(param_2 + 0x18);
  uVar13 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar6;
  if ((int)uVar6 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    puVar7 = (undefined8 *)FUN_00421ed0(uVar13,8,&local_38);
    *(uint *)(param_1 + 4) = uVar6;
    *(uint *)((long)param_1 + 0x24) = local_38;
    uVar1 = uVar6 & 3;
    param_1[3] = puVar7;
    if (2 < uVar6 - 1) {
      iVar9 = uVar1 - uVar6;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar14;
        puVar8[1] = puVar14[1];
        puVar8[2] = puVar14[2];
        puVar15 = puVar14 + 3;
        puVar7 = puVar8 + 4;
        puVar14 = puVar14 + 4;
        puVar8[3] = *puVar15;
        iVar9 = iVar9 + 4;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar7 = *puVar14;
        puVar7 = puVar7 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x30);
  puVar14 = *(undefined8 **)(param_2 + 0x28);
  local_34 = uVar6;
  if ((int)uVar6 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    puVar7 = (undefined8 *)FUN_00421ed0(uVar13,0x40,&local_34);
    *(uint *)(param_1 + 6) = uVar6;
    *(uint *)((long)param_1 + 0x34) = local_34;
    uVar1 = uVar6 & 3;
    param_1[5] = puVar7;
    if (2 < uVar6 - 1) {
      iVar9 = uVar1 - uVar6;
      puVar8 = puVar7;
      puVar15 = puVar14;
      do {
        uVar10 = puVar15[1];
        puVar8[3] = puVar15[3];
        uVar11 = puVar15[2];
        *puVar8 = *puVar15;
        puVar8[1] = uVar10;
        puVar8[2] = uVar11;
        uVar11 = puVar15[5];
        puVar8[7] = puVar15[7];
        uVar10 = puVar15[4];
        uVar12 = puVar15[6];
        puVar8[5] = uVar11;
        puVar8[6] = uVar12;
        puVar8[4] = uVar10;
        uVar2 = puVar15[0xd];
        uVar10 = puVar15[0xe];
        uVar3 = puVar15[0xf];
        puVar8[0xc] = puVar15[0xc];
        uVar11 = puVar15[8];
        uVar4 = puVar15[9];
        puVar7 = puVar8 + 0x20;
        uVar12 = puVar15[10];
        uVar5 = puVar15[0xb];
        puVar8[0xd] = uVar2;
        puVar8[0xe] = uVar10;
        puVar8[0xf] = uVar3;
        puVar14 = puVar15 + 0x20;
        puVar8[10] = uVar12;
        puVar8[0xb] = uVar5;
        iVar9 = iVar9 + 4;
        puVar8[8] = uVar11;
        puVar8[9] = uVar4;
        uVar10 = puVar15[0x10];
        uVar11 = puVar15[0x11];
        uVar12 = puVar15[0x13];
        puVar8[0x12] = puVar15[0x12];
        puVar8[0x13] = uVar12;
        puVar8[0x10] = uVar10;
        puVar8[0x11] = uVar11;
        uVar10 = puVar15[0x14];
        uVar11 = puVar15[0x15];
        uVar12 = puVar15[0x17];
        puVar8[0x16] = puVar15[0x16];
        puVar8[0x17] = uVar12;
        puVar8[0x14] = uVar10;
        puVar8[0x15] = uVar11;
        uVar10 = puVar15[0x18];
        uVar11 = puVar15[0x19];
        uVar12 = puVar15[0x1b];
        puVar8[0x1a] = puVar15[0x1a];
        puVar8[0x1b] = uVar12;
        puVar8[0x18] = uVar10;
        puVar8[0x19] = uVar11;
        uVar10 = puVar15[0x1c];
        uVar11 = puVar15[0x1d];
        uVar12 = puVar15[0x1f];
        puVar8[0x1e] = puVar15[0x1e];
        puVar8[0x1f] = uVar12;
        puVar8[0x1c] = uVar10;
        puVar8[0x1d] = uVar11;
        puVar8 = puVar7;
        puVar15 = puVar14;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        uVar10 = puVar14[1];
        puVar7[3] = puVar14[3];
        puVar7[1] = uVar10;
        uVar10 = puVar14[5];
        puVar7[7] = puVar14[7];
        puVar7[5] = uVar10;
        uVar10 = *puVar14;
        puVar7[2] = puVar14[2];
        *puVar7 = uVar10;
        uVar10 = puVar14[4];
        puVar7[6] = puVar14[6];
        puVar7[4] = uVar10;
        puVar7 = puVar7 + 8;
        puVar14 = puVar14 + 8;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x40);
  puVar14 = *(undefined8 **)(param_2 + 0x38);
  if ((int)uVar6 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    local_44 = uVar6;
    puVar7 = (undefined8 *)FUN_00421ed0(uVar13,8,&local_44);
    *(uint *)(param_1 + 8) = uVar6;
    *(uint *)((long)param_1 + 0x44) = local_44;
    uVar1 = uVar6 & 3;
    param_1[7] = puVar7;
    if (2 < uVar6 - 1) {
      iVar9 = uVar1 - uVar6;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar14;
        puVar8[1] = puVar14[1];
        puVar8[2] = puVar14[2];
        puVar15 = puVar14 + 3;
        puVar7 = puVar8 + 4;
        puVar14 = puVar14 + 4;
        puVar8[3] = *puVar15;
        iVar9 = iVar9 + 4;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        iVar9 = iVar9 + 1;
        *puVar7 = *puVar14;
        puVar7 = puVar7 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar9 != 0);
    }
  }
  return;
}

