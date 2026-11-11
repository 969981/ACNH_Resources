
void FUN_0066efd0(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined2 *puVar18;
  undefined4 *puVar19;
  uint local_44;
  uint local_38;
  uint local_34;
  
  FUN_006725b0();
  *param_1 = &PTR_LAB_048e8db0;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x48);
  puVar17 = *(undefined1 **)(param_2 + 0x40);
  uVar16 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_44 = uVar6;
  if ((int)uVar6 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    puVar8 = (undefined1 *)FUN_00421ed0(uVar16,1,&local_44);
    *(uint *)(param_1 + 9) = uVar6;
    *(uint *)((long)param_1 + 0x4c) = local_44;
    uVar4 = uVar6 & 3;
    param_1[8] = puVar8;
    if (2 < uVar6 - 1) {
      iVar14 = uVar4 - uVar6;
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar17;
        puVar9[1] = puVar17[1];
        puVar9[2] = puVar17[2];
        puVar1 = puVar17 + 3;
        puVar8 = puVar9 + 4;
        puVar17 = puVar17 + 4;
        puVar9[3] = *puVar1;
        iVar14 = iVar14 + 4;
        puVar9 = puVar8;
      } while (iVar14 != 0);
    }
    if (uVar4 != 0) {
      iVar14 = -uVar4;
      do {
        iVar14 = iVar14 + 1;
        *puVar8 = *puVar17;
        puVar8 = puVar8 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar14 != 0);
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x58);
  puVar18 = *(undefined2 **)(param_2 + 0x50);
  local_38 = uVar6;
  if ((int)uVar6 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    puVar10 = (undefined2 *)FUN_00421ed0(uVar16,2,&local_38);
    *(uint *)(param_1 + 0xb) = uVar6;
    *(uint *)((long)param_1 + 0x5c) = local_38;
    uVar4 = uVar6 & 3;
    param_1[10] = puVar10;
    if (2 < uVar6 - 1) {
      iVar14 = uVar4 - uVar6;
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar18;
        puVar11[1] = puVar18[1];
        puVar11[2] = puVar18[2];
        puVar2 = puVar18 + 3;
        puVar10 = puVar11 + 4;
        puVar18 = puVar18 + 4;
        puVar11[3] = *puVar2;
        iVar14 = iVar14 + 4;
        puVar11 = puVar10;
      } while (iVar14 != 0);
    }
    if (uVar4 != 0) {
      iVar14 = -uVar4;
      do {
        iVar14 = iVar14 + 1;
        *puVar10 = *puVar18;
        puVar10 = puVar10 + 1;
        puVar18 = puVar18 + 1;
      } while (iVar14 != 0);
    }
  }
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  uVar15 = *(undefined8 *)(param_2 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined4 *)(param_2 + 0x80);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar15;
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x90);
  puVar19 = *(undefined4 **)(param_2 + 0x88);
  if ((int)uVar6 < 1) {
    param_1[0x11] = 0;
    param_1[0x12] = 0x8000000000000000;
  }
  else {
    local_34 = uVar6;
    puVar12 = (undefined4 *)FUN_00421ed0(uVar16,4,&local_34);
    *(uint *)(param_1 + 0x12) = uVar6;
    *(uint *)((long)param_1 + 0x94) = local_34;
    uVar4 = uVar6 & 3;
    param_1[0x11] = puVar12;
    if (2 < uVar6 - 1) {
      iVar14 = uVar4 - uVar6;
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar19;
        puVar13[1] = puVar19[1];
        puVar13[2] = puVar19[2];
        puVar3 = puVar19 + 3;
        puVar12 = puVar13 + 4;
        puVar19 = puVar19 + 4;
        puVar13[3] = *puVar3;
        iVar14 = iVar14 + 4;
        puVar13 = puVar12;
      } while (iVar14 != 0);
    }
    if (uVar4 != 0) {
      iVar14 = -uVar4;
      do {
        iVar14 = iVar14 + 1;
        *puVar12 = *puVar19;
        puVar12 = puVar12 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar14 != 0);
    }
  }
  uVar16 = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x14] = uVar16;
  uVar15 = *(undefined8 *)(param_2 + 0xb8);
  uVar16 = *(undefined8 *)(param_2 + 0xa8);
  uVar5 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  param_1[0x16] = uVar5;
  param_1[0x17] = uVar15;
  param_1[0x15] = uVar16;
  return;
}

