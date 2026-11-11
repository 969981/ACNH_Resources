
void FUN_0052ea50(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint local_44;
  uint local_38;
  uint local_34;
  
  FUN_0052c800();
  *param_1 = &PTR_LAB_048d4ba8;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x50);
  puVar13 = *(undefined2 **)(param_2 + 0x48);
  uVar12 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_44 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    puVar4 = (undefined2 *)FUN_00421ed0(uVar12,2,&local_44);
    *(uint *)(param_1 + 10) = uVar3;
    *(uint *)((long)param_1 + 0x54) = local_44;
    uVar2 = uVar3 & 3;
    param_1[9] = puVar4;
    if (2 < uVar3 - 1) {
      iVar8 = uVar2 - uVar3;
      puVar7 = puVar4;
      do {
        *puVar7 = *puVar13;
        puVar7[1] = puVar13[1];
        puVar7[2] = puVar13[2];
        puVar1 = puVar13 + 3;
        puVar4 = puVar7 + 4;
        puVar13 = puVar13 + 4;
        puVar7[3] = *puVar1;
        iVar8 = iVar8 + 4;
        puVar7 = puVar4;
      } while (iVar8 != 0);
    }
    if (uVar2 != 0) {
      iVar8 = -uVar2;
      do {
        iVar8 = iVar8 + 1;
        *puVar4 = *puVar13;
        puVar4 = puVar4 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar8 != 0);
    }
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x60);
  puVar14 = *(undefined8 **)(param_2 + 0x58);
  local_38 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[0xb] = 0;
    param_1[0xc] = 0x8000000000000000;
  }
  else {
    puVar5 = (undefined8 *)FUN_00421ed0(uVar12,0x30,&local_38);
    *(uint *)(param_1 + 0xc) = uVar3;
    *(uint *)((long)param_1 + 100) = local_38;
    uVar2 = uVar3 & 3;
    param_1[0xb] = puVar5;
    if (2 < uVar3 - 1) {
      iVar8 = uVar2 - uVar3;
      puVar6 = puVar5;
      puVar15 = puVar14;
      do {
        puVar6[1] = puVar15[1];
        *puVar6 = *puVar15;
        uVar10 = puVar15[3];
        puVar6[5] = puVar15[5];
        uVar9 = puVar15[2];
        uVar11 = puVar15[4];
        puVar6[3] = uVar10;
        puVar6[4] = uVar11;
        puVar6[2] = uVar9;
        puVar6[7] = puVar15[7];
        uVar10 = puVar15[9];
        puVar6[0xb] = puVar15[0xb];
        uVar9 = puVar15[8];
        uVar11 = puVar15[10];
        puVar6[9] = uVar10;
        puVar6[10] = uVar11;
        puVar6[8] = uVar9;
        puVar6[6] = puVar15[6];
        uVar9 = puVar15[0xd];
        puVar5 = puVar6 + 0x18;
        puVar6[0xc] = puVar15[0xc];
        puVar6[0xd] = uVar9;
        puVar14 = puVar15 + 0x18;
        uVar9 = puVar15[0xe];
        uVar10 = puVar15[0xf];
        iVar8 = iVar8 + 4;
        uVar11 = puVar15[0x11];
        puVar6[0x10] = puVar15[0x10];
        puVar6[0x11] = uVar11;
        puVar6[0xe] = uVar9;
        puVar6[0xf] = uVar10;
        uVar9 = puVar15[0x13];
        puVar6[0x12] = puVar15[0x12];
        puVar6[0x13] = uVar9;
        uVar9 = puVar15[0x14];
        uVar10 = puVar15[0x15];
        uVar11 = puVar15[0x17];
        puVar6[0x16] = puVar15[0x16];
        puVar6[0x17] = uVar11;
        puVar6[0x14] = uVar9;
        puVar6[0x15] = uVar10;
        puVar6 = puVar5;
        puVar15 = puVar14;
      } while (iVar8 != 0);
    }
    if (uVar2 != 0) {
      iVar8 = -uVar2;
      do {
        puVar5[1] = puVar14[1];
        uVar9 = puVar14[3];
        puVar5[5] = puVar14[5];
        puVar5[3] = uVar9;
        *puVar5 = *puVar14;
        uVar9 = puVar14[2];
        puVar5[4] = puVar14[4];
        puVar5[2] = uVar9;
        puVar5 = puVar5 + 6;
        puVar14 = puVar14 + 6;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0);
    }
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x70);
  puVar13 = *(undefined2 **)(param_2 + 0x68);
  if ((int)uVar3 < 1) {
    param_1[0xd] = 0;
    param_1[0xe] = 0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar4 = (undefined2 *)FUN_00421ed0(uVar12,2,&local_34);
    *(uint *)(param_1 + 0xe) = uVar3;
    *(uint *)((long)param_1 + 0x74) = local_34;
    uVar2 = uVar3 & 3;
    param_1[0xd] = puVar4;
    if (2 < uVar3 - 1) {
      iVar8 = uVar2 - uVar3;
      puVar7 = puVar4;
      do {
        *puVar7 = *puVar13;
        puVar7[1] = puVar13[1];
        puVar7[2] = puVar13[2];
        puVar1 = puVar13 + 3;
        puVar4 = puVar7 + 4;
        puVar13 = puVar13 + 4;
        puVar7[3] = *puVar1;
        iVar8 = iVar8 + 4;
        puVar7 = puVar4;
      } while (iVar8 != 0);
    }
    if (uVar2 != 0) {
      iVar8 = -uVar2;
      do {
        iVar8 = iVar8 + 1;
        *puVar4 = *puVar13;
        puVar4 = puVar4 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar8 != 0);
    }
  }
  uVar12 = *(undefined8 *)(param_2 + 0x78);
  uVar9 = *(undefined8 *)(param_2 + 0x80);
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x88);
  param_1[0xf] = uVar12;
  param_1[0x10] = uVar9;
  return;
}

