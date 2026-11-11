
void FUN_0064f4e0(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  uint local_6c;
  int local_68;
  uint local_64;
  
  param_1[4] = 0x8000000000000000;
  *param_1 = &PTR_LAB_048e2e08;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  iVar18 = *(int *)(param_2 + 0x20);
  lVar19 = *(long *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_68 = iVar18;
  if (iVar18 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    lVar9 = FUN_00421ed0(uVar8,0x38,&local_68);
    lVar20 = 0;
    param_1[3] = lVar9;
    *(int *)(param_1 + 4) = iVar18;
    *(int *)((long)param_1 + 0x24) = local_68;
    do {
      plVar3 = (long *)(lVar19 + lVar20);
      lVar10 = *plVar3;
      plVar4 = (long *)(lVar9 + lVar20);
      *plVar4 = lVar10;
      if (lVar10 != 0) {
        FUN_004435a0();
      }
      lVar10 = plVar3[1];
      plVar4[1] = lVar10;
      if (lVar10 != 0) {
        FUN_004435a0();
      }
      plVar4[2] = 0;
      plVar4[3] = -0x8000000000000000;
      if (plVar4 != plVar3) {
        iVar6 = (int)plVar3[3];
        lVar10 = plVar3[2];
        if (iVar6 < 1) {
          lVar11 = 0;
        }
        else {
          lVar11 = FUN_004267f0(uVar8,iVar6,2,0,0,(long)plVar4 + 0x1c);
          plVar4[2] = lVar11;
        }
        FUN_0043aa30(lVar11,lVar10,(long)iVar6 << 1);
        *(int *)(plVar4 + 3) = iVar6;
      }
      lVar10 = plVar3[5];
      lVar11 = plVar3[6];
      iVar18 = iVar18 + -1;
      lVar20 = lVar20 + 0x38;
      plVar4[4] = plVar3[4];
      plVar4[5] = lVar10;
      plVar4[6] = lVar11;
    } while (iVar18 != 0);
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x30);
  puVar16 = *(undefined2 **)(param_2 + 0x28);
  local_64 = uVar7;
  if ((int)uVar7 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    puVar12 = (undefined2 *)FUN_00421ed0(uVar8,2,&local_64);
    *(uint *)(param_1 + 6) = uVar7;
    *(uint *)((long)param_1 + 0x34) = local_64;
    uVar5 = uVar7 & 3;
    param_1[5] = puVar12;
    if (2 < uVar7 - 1) {
      iVar18 = uVar5 - uVar7;
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar16;
        puVar13[1] = puVar16[1];
        puVar13[2] = puVar16[2];
        puVar1 = puVar16 + 3;
        puVar12 = puVar13 + 4;
        puVar16 = puVar16 + 4;
        puVar13[3] = *puVar1;
        iVar18 = iVar18 + 4;
        puVar13 = puVar12;
      } while (iVar18 != 0);
    }
    if (uVar5 != 0) {
      iVar18 = -uVar5;
      do {
        iVar18 = iVar18 + 1;
        *puVar12 = *puVar16;
        puVar12 = puVar12 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar18 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x40);
  puVar17 = *(undefined4 **)(param_2 + 0x38);
  local_6c = uVar7;
  if ((int)uVar7 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    puVar14 = (undefined4 *)FUN_00421ed0(uVar8,4,&local_6c);
    *(uint *)(param_1 + 8) = uVar7;
    *(uint *)((long)param_1 + 0x44) = local_6c;
    uVar5 = uVar7 & 3;
    param_1[7] = puVar14;
    if (2 < uVar7 - 1) {
      iVar18 = uVar5 - uVar7;
      puVar15 = puVar14;
      do {
        *puVar15 = *puVar17;
        puVar15[1] = puVar17[1];
        puVar15[2] = puVar17[2];
        puVar2 = puVar17 + 3;
        puVar14 = puVar15 + 4;
        puVar17 = puVar17 + 4;
        puVar15[3] = *puVar2;
        iVar18 = iVar18 + 4;
        puVar15 = puVar14;
      } while (iVar18 != 0);
    }
    if (uVar5 != 0) {
      iVar18 = -uVar5;
      do {
        iVar18 = iVar18 + 1;
        *puVar14 = *puVar17;
        puVar14 = puVar14 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar18 != 0);
    }
  }
  FUN_0043bd50(param_1 + 9,param_2 + 0x48);
  return;
}

