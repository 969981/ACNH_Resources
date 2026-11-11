
void FUN_00535d40(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  uint local_64;
  
  *param_1 = &PTR_LAB_048d69a0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  uVar12 = *(uint *)(param_2 + 0x20);
  lVar10 = *(long *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar12 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    local_64 = uVar12;
    lVar4 = FUN_00421ed0(uVar9,0x38,&local_64);
    param_1[3] = lVar4;
    *(uint *)(param_1 + 4) = uVar12;
    *(uint *)((long)param_1 + 0x24) = local_64;
    do {
      FUN_00536140(lVar4,lVar10);
      uVar12 = uVar12 - 1;
      lVar4 = lVar4 + 0x38;
      lVar10 = lVar10 + 0x38;
    } while (uVar12 != 0);
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar12 = *(uint *)(param_2 + 0x30);
  puVar11 = *(undefined4 **)(param_2 + 0x28);
  if ((int)uVar12 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    local_64 = uVar12;
    puVar5 = (undefined4 *)FUN_00421ed0(uVar9,4,&local_64);
    *(uint *)(param_1 + 6) = uVar12;
    *(uint *)((long)param_1 + 0x34) = local_64;
    uVar14 = uVar12 & 3;
    param_1[5] = puVar5;
    if (2 < uVar12 - 1) {
      iVar8 = uVar14 - uVar12;
      puVar7 = puVar5;
      do {
        *puVar7 = *puVar11;
        puVar7[1] = puVar11[1];
        puVar7[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar5 = puVar7 + 4;
        puVar11 = puVar11 + 4;
        puVar7[3] = *puVar1;
        iVar8 = iVar8 + 4;
        puVar7 = puVar5;
      } while (iVar8 != 0);
    }
    if (uVar14 != 0) {
      iVar8 = -uVar14;
      do {
        iVar8 = iVar8 + 1;
        *puVar5 = *puVar11;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar8 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  uVar12 = *(uint *)(param_2 + 0x40);
  plVar13 = *(long **)(param_2 + 0x38);
  if ((int)uVar12 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    local_64 = uVar12;
    plVar6 = (long *)FUN_00421ed0(uVar9,0x10,&local_64);
    uVar14 = 0;
    param_1[7] = plVar6;
    *(uint *)(param_1 + 8) = uVar12;
    *(uint *)((long)param_1 + 0x44) = local_64;
    do {
      while( true ) {
        *plVar6 = 0;
        plVar6[1] = -0x8000000000000000;
        uVar3 = *(uint *)(plVar13 + 1);
        puVar11 = (undefined4 *)*plVar13;
        if ((int)uVar3 < 1) break;
        local_64 = uVar3;
        puVar5 = (undefined4 *)FUN_00421ed0(uVar9,4,&local_64);
        *(uint *)(plVar6 + 1) = uVar3;
        *(uint *)((long)plVar6 + 0xc) = local_64;
        uVar2 = uVar3 & 7;
        *plVar6 = (long)puVar5;
        if (6 < uVar3 - 1) {
          iVar8 = uVar2 - uVar3;
          puVar7 = puVar5;
          do {
            *puVar7 = *puVar11;
            puVar7[1] = puVar11[1];
            puVar7[2] = puVar11[2];
            puVar7[3] = puVar11[3];
            puVar7[4] = puVar11[4];
            puVar7[5] = puVar11[5];
            puVar7[6] = puVar11[6];
            puVar1 = puVar11 + 7;
            puVar5 = puVar7 + 8;
            puVar11 = puVar11 + 8;
            puVar7[7] = *puVar1;
            iVar8 = iVar8 + 8;
            puVar7 = puVar5;
          } while (iVar8 != 0);
        }
        if (uVar2 != 0) {
          iVar8 = -uVar2;
          do {
            iVar8 = iVar8 + 1;
            *puVar5 = *puVar11;
            puVar5 = puVar5 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar8 != 0);
        }
        uVar14 = uVar14 + 1;
        plVar6 = plVar6 + 2;
        plVar13 = plVar13 + 2;
        if (uVar14 == uVar12) goto LAB_00535fd4;
      }
      *plVar6 = 0;
      plVar6[1] = -0x8000000000000000;
      uVar14 = uVar14 + 1;
      plVar6 = plVar6 + 2;
      plVar13 = plVar13 + 2;
    } while (uVar14 != uVar12);
  }
LAB_00535fd4:
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar12 = *(uint *)(param_2 + 0x50);
  plVar13 = *(long **)(param_2 + 0x48);
  if ((int)uVar12 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    local_64 = uVar12;
    plVar6 = (long *)FUN_00421ed0(uVar9,0x10,&local_64);
    uVar14 = 0;
    param_1[9] = plVar6;
    *(uint *)(param_1 + 10) = uVar12;
    *(uint *)((long)param_1 + 0x54) = local_64;
    do {
      while( true ) {
        *plVar6 = 0;
        plVar6[1] = -0x8000000000000000;
        uVar3 = *(uint *)(plVar13 + 1);
        puVar11 = (undefined4 *)*plVar13;
        if ((int)uVar3 < 1) break;
        local_64 = uVar3;
        puVar5 = (undefined4 *)FUN_00421ed0(uVar9,4,&local_64);
        *(uint *)(plVar6 + 1) = uVar3;
        *(uint *)((long)plVar6 + 0xc) = local_64;
        uVar2 = uVar3 & 7;
        *plVar6 = (long)puVar5;
        if (6 < uVar3 - 1) {
          iVar8 = uVar2 - uVar3;
          puVar7 = puVar5;
          do {
            *puVar7 = *puVar11;
            puVar7[1] = puVar11[1];
            puVar7[2] = puVar11[2];
            puVar7[3] = puVar11[3];
            puVar7[4] = puVar11[4];
            puVar7[5] = puVar11[5];
            puVar7[6] = puVar11[6];
            puVar1 = puVar11 + 7;
            puVar5 = puVar7 + 8;
            puVar11 = puVar11 + 8;
            puVar7[7] = *puVar1;
            iVar8 = iVar8 + 8;
            puVar7 = puVar5;
          } while (iVar8 != 0);
        }
        if (uVar2 != 0) {
          iVar8 = -uVar2;
          do {
            iVar8 = iVar8 + 1;
            *puVar5 = *puVar11;
            puVar5 = puVar5 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar8 != 0);
        }
        uVar14 = uVar14 + 1;
        plVar6 = plVar6 + 2;
        plVar13 = plVar13 + 2;
        if (uVar14 == uVar12) goto LAB_0053610c;
      }
      *plVar6 = 0;
      plVar6[1] = -0x8000000000000000;
      uVar14 = uVar14 + 1;
      plVar6 = plVar6 + 2;
      plVar13 = plVar13 + 2;
    } while (uVar14 != uVar12);
  }
LAB_0053610c:
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  return;
}

