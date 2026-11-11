
void FUN_0064ffa0(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  long *plVar21;
  uint local_44;
  
  *param_1 = &PTR_LAB_048e5058;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  uVar20 = *(uint *)(param_2 + 0x20);
  puVar16 = *(undefined2 **)(param_2 + 0x18);
  uVar15 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar20 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    local_44 = uVar20;
    puVar4 = (undefined2 *)FUN_00421ed0(uVar15,2,&local_44);
    *(uint *)(param_1 + 4) = uVar20;
    *(uint *)((long)param_1 + 0x24) = local_44;
    uVar3 = uVar20 & 3;
    param_1[3] = puVar4;
    if (2 < uVar20 - 1) {
      iVar12 = uVar3 - uVar20;
      puVar5 = puVar4;
      do {
        *puVar5 = *puVar16;
        puVar5[1] = puVar16[1];
        puVar5[2] = puVar16[2];
        puVar1 = puVar16 + 3;
        puVar4 = puVar5 + 4;
        puVar16 = puVar16 + 4;
        puVar5[3] = *puVar1;
        iVar12 = iVar12 + 4;
        puVar5 = puVar4;
      } while (iVar12 != 0);
    }
    if (uVar3 != 0) {
      iVar12 = -uVar3;
      do {
        iVar12 = iVar12 + 1;
        *puVar4 = *puVar16;
        puVar4 = puVar4 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar20 = *(uint *)(param_2 + 0x30);
  puVar17 = *(undefined4 **)(param_2 + 0x28);
  if ((int)uVar20 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    local_44 = uVar20;
    puVar6 = (undefined4 *)FUN_00421ed0(uVar15,4,&local_44);
    *(uint *)(param_1 + 6) = uVar20;
    *(uint *)((long)param_1 + 0x34) = local_44;
    uVar3 = uVar20 & 3;
    param_1[5] = puVar6;
    if (2 < uVar20 - 1) {
      iVar12 = uVar3 - uVar20;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar17;
        puVar7[1] = puVar17[1];
        puVar7[2] = puVar17[2];
        puVar2 = puVar17 + 3;
        puVar6 = puVar7 + 4;
        puVar17 = puVar17 + 4;
        puVar7[3] = *puVar2;
        iVar12 = iVar12 + 4;
        puVar7 = puVar6;
      } while (iVar12 != 0);
    }
    if (uVar3 != 0) {
      iVar12 = -uVar3;
      do {
        iVar12 = iVar12 + 1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar12 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  uVar20 = *(uint *)(param_2 + 0x40);
  plVar21 = *(long **)(param_2 + 0x38);
  if ((int)uVar20 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    local_44 = uVar20;
    plVar8 = (long *)FUN_00421ed0(uVar15,0x10,&local_44);
    param_1[7] = plVar8;
    *(uint *)(param_1 + 8) = uVar20;
    *(uint *)((long)param_1 + 0x44) = local_44;
    do {
      lVar9 = *plVar21;
      *plVar8 = lVar9;
      if (lVar9 != 0) {
        FUN_004435a0();
      }
      *(int *)(plVar8 + 1) = (int)plVar21[1];
      uVar20 = uVar20 - 1;
      plVar21 = plVar21 + 2;
      plVar8 = plVar8 + 2;
    } while (uVar20 != 0);
  }
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar20 = *(uint *)(param_2 + 0x50);
  puVar18 = *(undefined8 **)(param_2 + 0x48);
  local_44 = uVar20;
  if ((int)uVar20 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    puVar10 = (undefined8 *)FUN_00421ed0(uVar15,0x30,&local_44);
    *(uint *)(param_1 + 10) = uVar20;
    *(uint *)((long)param_1 + 0x54) = local_44;
    uVar3 = uVar20 & 3;
    param_1[9] = puVar10;
    if (2 < uVar20 - 1) {
      iVar12 = uVar3 - uVar20;
      puVar11 = puVar10;
      puVar19 = puVar18;
      do {
        puVar11[1] = puVar19[1];
        *puVar11 = *puVar19;
        uVar13 = puVar19[3];
        puVar11[5] = puVar19[5];
        uVar15 = puVar19[2];
        uVar14 = puVar19[4];
        puVar11[3] = uVar13;
        puVar11[4] = uVar14;
        puVar11[2] = uVar15;
        puVar11[7] = puVar19[7];
        uVar13 = puVar19[9];
        puVar11[0xb] = puVar19[0xb];
        uVar15 = puVar19[8];
        uVar14 = puVar19[10];
        puVar11[9] = uVar13;
        puVar11[10] = uVar14;
        puVar11[8] = uVar15;
        puVar11[6] = puVar19[6];
        uVar15 = puVar19[0xd];
        puVar10 = puVar11 + 0x18;
        puVar11[0xc] = puVar19[0xc];
        puVar11[0xd] = uVar15;
        puVar18 = puVar19 + 0x18;
        uVar15 = puVar19[0xe];
        uVar13 = puVar19[0xf];
        iVar12 = iVar12 + 4;
        uVar14 = puVar19[0x11];
        puVar11[0x10] = puVar19[0x10];
        puVar11[0x11] = uVar14;
        puVar11[0xe] = uVar15;
        puVar11[0xf] = uVar13;
        uVar15 = puVar19[0x13];
        puVar11[0x12] = puVar19[0x12];
        puVar11[0x13] = uVar15;
        uVar15 = puVar19[0x14];
        uVar13 = puVar19[0x15];
        uVar14 = puVar19[0x17];
        puVar11[0x16] = puVar19[0x16];
        puVar11[0x17] = uVar14;
        puVar11[0x14] = uVar15;
        puVar11[0x15] = uVar13;
        puVar11 = puVar10;
        puVar19 = puVar18;
      } while (iVar12 != 0);
    }
    if (uVar3 != 0) {
      iVar12 = -uVar3;
      do {
        puVar10[1] = puVar18[1];
        uVar15 = puVar18[3];
        puVar10[5] = puVar18[5];
        puVar10[3] = uVar15;
        *puVar10 = *puVar18;
        uVar15 = puVar18[2];
        puVar10[4] = puVar18[4];
        puVar10[2] = uVar15;
        puVar10 = puVar10 + 6;
        puVar18 = puVar18 + 6;
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0);
    }
  }
  FUN_0043bd50(param_1 + 0xb,param_2 + 0x58);
  return;
}

