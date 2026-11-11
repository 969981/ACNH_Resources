
void FUN_0064fc10(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_048e3888;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  lVar7 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar7;
  if (lVar7 != 0) {
    FUN_004435a0();
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x28);
  puVar16 = *(undefined8 **)(param_2 + 0x20);
  uVar15 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_34 = uVar6;
  if ((int)uVar6 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    puVar8 = (undefined8 *)FUN_00421ed0(uVar15,0x40,&local_34);
    *(uint *)(param_1 + 5) = uVar6;
    *(uint *)((long)param_1 + 0x2c) = local_34;
    uVar1 = uVar6 & 3;
    param_1[4] = puVar8;
    if (2 < uVar6 - 1) {
      iVar11 = uVar1 - uVar6;
      puVar9 = puVar8;
      puVar17 = puVar16;
      do {
        uVar12 = puVar17[1];
        puVar9[3] = puVar17[3];
        uVar13 = puVar17[2];
        *puVar9 = *puVar17;
        puVar9[1] = uVar12;
        puVar9[2] = uVar13;
        uVar13 = puVar17[5];
        puVar9[7] = puVar17[7];
        uVar12 = puVar17[4];
        uVar14 = puVar17[6];
        puVar9[5] = uVar13;
        puVar9[6] = uVar14;
        puVar9[4] = uVar12;
        uVar2 = puVar17[0xd];
        uVar12 = puVar17[0xe];
        uVar3 = puVar17[0xf];
        puVar9[0xc] = puVar17[0xc];
        uVar13 = puVar17[8];
        uVar4 = puVar17[9];
        puVar8 = puVar9 + 0x20;
        uVar14 = puVar17[10];
        uVar5 = puVar17[0xb];
        puVar9[0xd] = uVar2;
        puVar9[0xe] = uVar12;
        puVar9[0xf] = uVar3;
        puVar16 = puVar17 + 0x20;
        puVar9[10] = uVar14;
        puVar9[0xb] = uVar5;
        iVar11 = iVar11 + 4;
        puVar9[8] = uVar13;
        puVar9[9] = uVar4;
        uVar12 = puVar17[0x10];
        uVar13 = puVar17[0x11];
        uVar14 = puVar17[0x13];
        puVar9[0x12] = puVar17[0x12];
        puVar9[0x13] = uVar14;
        puVar9[0x10] = uVar12;
        puVar9[0x11] = uVar13;
        uVar12 = puVar17[0x14];
        uVar13 = puVar17[0x15];
        uVar14 = puVar17[0x17];
        puVar9[0x16] = puVar17[0x16];
        puVar9[0x17] = uVar14;
        puVar9[0x14] = uVar12;
        puVar9[0x15] = uVar13;
        uVar12 = puVar17[0x18];
        uVar13 = puVar17[0x19];
        uVar14 = puVar17[0x1b];
        puVar9[0x1a] = puVar17[0x1a];
        puVar9[0x1b] = uVar14;
        puVar9[0x18] = uVar12;
        puVar9[0x19] = uVar13;
        uVar12 = puVar17[0x1c];
        uVar13 = puVar17[0x1d];
        uVar14 = puVar17[0x1f];
        puVar9[0x1e] = puVar17[0x1e];
        puVar9[0x1f] = uVar14;
        puVar9[0x1c] = uVar12;
        puVar9[0x1d] = uVar13;
        puVar9 = puVar8;
        puVar17 = puVar16;
      } while (iVar11 != 0);
    }
    if (uVar1 != 0) {
      iVar11 = -uVar1;
      do {
        uVar12 = puVar16[1];
        puVar8[3] = puVar16[3];
        puVar8[1] = uVar12;
        uVar12 = puVar16[5];
        puVar8[7] = puVar16[7];
        puVar8[5] = uVar12;
        uVar12 = *puVar16;
        puVar8[2] = puVar16[2];
        *puVar8 = uVar12;
        uVar12 = puVar16[4];
        puVar8[6] = puVar16[6];
        puVar8[4] = uVar12;
        puVar8 = puVar8 + 8;
        puVar16 = puVar16 + 8;
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  iVar11 = *(int *)(param_2 + 0x38);
  lVar7 = *(long *)(param_2 + 0x30);
  if (iVar11 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_38 = iVar11;
    lVar10 = FUN_00421ed0(uVar15,8,&local_38);
    param_1[6] = lVar10;
    *(int *)(param_1 + 7) = iVar11;
    *(int *)((long)param_1 + 0x3c) = local_38;
    do {
      FUN_0043bd50(lVar10,lVar7);
      iVar11 = iVar11 + -1;
      lVar10 = lVar10 + 8;
      lVar7 = lVar7 + 8;
    } while (iVar11 != 0);
  }
  return;
}

