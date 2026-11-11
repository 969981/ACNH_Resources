
void FUN_006851e0(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  undefined1 *puVar18;
  uint local_34;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 1);
  puVar16 = (undefined4 *)*param_2;
  uVar15 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar6 < 1) {
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
  }
  else {
    local_34 = uVar6;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar15,4,&local_34);
    *(uint *)(param_1 + 1) = uVar6;
    *(uint *)((long)param_1 + 0xc) = local_34;
    uVar4 = uVar6 & 3;
    *param_1 = (long)puVar7;
    if (2 < uVar6 - 1) {
      iVar13 = uVar4 - uVar6;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar16;
        puVar8[1] = puVar16[1];
        puVar8[2] = puVar16[2];
        puVar3 = puVar16 + 3;
        puVar7 = puVar8 + 4;
        puVar16 = puVar16 + 4;
        puVar8[3] = *puVar3;
        iVar13 = iVar13 + 4;
        puVar8 = puVar7;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar7 = *puVar16;
        puVar7 = puVar7 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[2] = 0;
  param_1[3] = -0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 3);
  puVar16 = (undefined4 *)param_2[2];
  if ((int)uVar6 < 1) {
    param_1[2] = 0;
    param_1[3] = -0x8000000000000000;
  }
  else {
    local_34 = uVar6;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar15,4,&local_34);
    *(uint *)(param_1 + 3) = uVar6;
    *(uint *)((long)param_1 + 0x1c) = local_34;
    uVar4 = uVar6 & 3;
    param_1[2] = (long)puVar7;
    if (2 < uVar6 - 1) {
      iVar13 = uVar4 - uVar6;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar16;
        puVar8[1] = puVar16[1];
        puVar8[2] = puVar16[2];
        puVar3 = puVar16 + 3;
        puVar7 = puVar8 + 4;
        puVar16 = puVar16 + 4;
        puVar8[3] = *puVar3;
        iVar13 = iVar13 + 4;
        puVar8 = puVar7;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar7 = *puVar16;
        puVar7 = puVar7 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 5);
  puVar16 = (undefined4 *)param_2[4];
  if ((int)uVar6 < 1) {
    param_1[4] = 0;
    param_1[5] = -0x8000000000000000;
  }
  else {
    local_34 = uVar6;
    puVar7 = (undefined4 *)FUN_00421ed0(uVar15,4,&local_34);
    *(uint *)(param_1 + 5) = uVar6;
    *(uint *)((long)param_1 + 0x2c) = local_34;
    uVar4 = uVar6 & 3;
    param_1[4] = (long)puVar7;
    if (2 < uVar6 - 1) {
      iVar13 = uVar4 - uVar6;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar16;
        puVar8[1] = puVar16[1];
        puVar8[2] = puVar16[2];
        puVar3 = puVar16 + 3;
        puVar7 = puVar8 + 4;
        puVar16 = puVar16 + 4;
        puVar8[3] = *puVar3;
        iVar13 = iVar13 + 4;
        puVar8 = puVar7;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar7 = *puVar16;
        puVar7 = puVar7 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 7);
  puVar17 = (undefined2 *)param_2[6];
  if ((int)uVar6 < 1) {
    param_1[6] = 0;
    param_1[7] = -0x8000000000000000;
  }
  else {
    local_34 = uVar6;
    puVar9 = (undefined2 *)FUN_00421ed0(uVar15,2,&local_34);
    *(uint *)(param_1 + 7) = uVar6;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    uVar4 = uVar6 & 3;
    param_1[6] = (long)puVar9;
    if (2 < uVar6 - 1) {
      iVar13 = uVar4 - uVar6;
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar17;
        puVar10[1] = puVar17[1];
        puVar10[2] = puVar17[2];
        puVar2 = puVar17 + 3;
        puVar9 = puVar10 + 4;
        puVar17 = puVar17 + 4;
        puVar10[3] = *puVar2;
        iVar13 = iVar13 + 4;
        puVar10 = puVar9;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar9 = *puVar17;
        puVar9 = puVar9 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar13 != 0);
    }
  }
  param_1[8] = 0;
  param_1[9] = -0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 9);
  puVar18 = (undefined1 *)param_2[8];
  if ((int)uVar6 < 1) {
    param_1[8] = 0;
    param_1[9] = -0x8000000000000000;
  }
  else {
    local_34 = uVar6;
    puVar11 = (undefined1 *)FUN_00421ed0(uVar15,1,&local_34);
    *(uint *)(param_1 + 9) = uVar6;
    *(uint *)((long)param_1 + 0x4c) = local_34;
    uVar4 = uVar6 & 3;
    param_1[8] = (long)puVar11;
    if (2 < uVar6 - 1) {
      iVar13 = uVar4 - uVar6;
      puVar12 = puVar11;
      do {
        *puVar12 = *puVar18;
        puVar12[1] = puVar18[1];
        puVar12[2] = puVar18[2];
        puVar1 = puVar18 + 3;
        puVar11 = puVar12 + 4;
        puVar18 = puVar18 + 4;
        puVar12[3] = *puVar1;
        iVar13 = iVar13 + 4;
        puVar12 = puVar11;
      } while (iVar13 != 0);
    }
    if (uVar4 != 0) {
      iVar13 = -uVar4;
      do {
        iVar13 = iVar13 + 1;
        *puVar11 = *puVar18;
        puVar11 = puVar11 + 1;
        puVar18 = puVar18 + 1;
      } while (iVar13 != 0);
    }
  }
  lVar5 = param_2[10];
  lVar14 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = lVar14;
  param_1[10] = lVar5;
  return;
}

