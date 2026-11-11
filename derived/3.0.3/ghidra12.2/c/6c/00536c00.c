
void FUN_00536c00(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  uint local_54;
  
  param_1[2] = 1;
  *param_1 = &PTR_LAB_048df748;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar12 = *(uint *)(param_2 + 0x28);
  puVar10 = *(undefined4 **)(param_2 + 0x20);
  uVar9 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar12 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    local_54 = uVar12;
    puVar4 = (undefined4 *)FUN_00421ed0(uVar9,4,&local_54);
    *(uint *)(param_1 + 5) = uVar12;
    *(uint *)((long)param_1 + 0x2c) = local_54;
    uVar14 = uVar12 & 3;
    param_1[4] = puVar4;
    if (2 < uVar12 - 1) {
      iVar8 = uVar14 - uVar12;
      puVar7 = puVar4;
      do {
        *puVar7 = *puVar10;
        puVar7[1] = puVar10[1];
        puVar7[2] = puVar10[2];
        puVar1 = puVar10 + 3;
        puVar4 = puVar7 + 4;
        puVar10 = puVar10 + 4;
        puVar7[3] = *puVar1;
        iVar8 = iVar8 + 4;
        puVar7 = puVar4;
      } while (iVar8 != 0);
    }
    if (uVar14 != 0) {
      iVar8 = -uVar14;
      do {
        iVar8 = iVar8 + 1;
        *puVar4 = *puVar10;
        puVar4 = puVar4 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar8 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar12 = *(uint *)(param_2 + 0x38);
  lVar11 = *(long *)(param_2 + 0x30);
  if ((int)uVar12 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_54 = uVar12;
    lVar5 = FUN_00421ed0(uVar9,0x28,&local_54);
    param_1[6] = lVar5;
    *(uint *)(param_1 + 7) = uVar12;
    *(uint *)((long)param_1 + 0x3c) = local_54;
    do {
      FUN_00536eb0(lVar5,lVar11);
      uVar12 = uVar12 - 1;
      lVar5 = lVar5 + 0x28;
      lVar11 = lVar11 + 0x28;
    } while (uVar12 != 0);
  }
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar12 = *(uint *)(param_2 + 0x48);
  plVar13 = *(long **)(param_2 + 0x40);
  if ((int)uVar12 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    local_54 = uVar12;
    plVar6 = (long *)FUN_00421ed0(uVar9,0x10,&local_54);
    uVar14 = 0;
    param_1[8] = plVar6;
    *(uint *)(param_1 + 9) = uVar12;
    *(uint *)((long)param_1 + 0x4c) = local_54;
    do {
      while( true ) {
        *plVar6 = 0;
        plVar6[1] = -0x8000000000000000;
        uVar3 = *(uint *)(plVar13 + 1);
        puVar10 = (undefined4 *)*plVar13;
        if ((int)uVar3 < 1) break;
        local_54 = uVar3;
        puVar4 = (undefined4 *)FUN_00421ed0(uVar9,4,&local_54);
        *(uint *)(plVar6 + 1) = uVar3;
        *(uint *)((long)plVar6 + 0xc) = local_54;
        uVar2 = uVar3 & 7;
        *plVar6 = (long)puVar4;
        if (6 < uVar3 - 1) {
          iVar8 = uVar2 - uVar3;
          puVar7 = puVar4;
          do {
            *puVar7 = *puVar10;
            puVar7[1] = puVar10[1];
            puVar7[2] = puVar10[2];
            puVar7[3] = puVar10[3];
            puVar7[4] = puVar10[4];
            puVar7[5] = puVar10[5];
            puVar7[6] = puVar10[6];
            puVar1 = puVar10 + 7;
            puVar4 = puVar7 + 8;
            puVar10 = puVar10 + 8;
            puVar7[7] = *puVar1;
            iVar8 = iVar8 + 8;
            puVar7 = puVar4;
          } while (iVar8 != 0);
        }
        if (uVar2 != 0) {
          iVar8 = -uVar2;
          do {
            iVar8 = iVar8 + 1;
            *puVar4 = *puVar10;
            puVar4 = puVar4 + 1;
            puVar10 = puVar10 + 1;
          } while (iVar8 != 0);
        }
        uVar14 = uVar14 + 1;
        plVar6 = plVar6 + 2;
        plVar13 = plVar13 + 2;
        if (uVar14 == uVar12) {
          return;
        }
      }
      *plVar6 = 0;
      plVar6[1] = -0x8000000000000000;
      uVar14 = uVar14 + 1;
      plVar6 = plVar6 + 2;
      plVar13 = plVar13 + 2;
    } while (uVar14 != uVar12);
  }
  return;
}

