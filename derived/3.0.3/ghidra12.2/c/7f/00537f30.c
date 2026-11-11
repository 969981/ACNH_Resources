
void FUN_00537f30(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint local_64;
  
  param_1[2] = 1;
  *param_1 = &PTR_LAB_048d29d0;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x28);
  puVar11 = *(undefined4 **)(param_2 + 0x20);
  uVar14 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar3 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    local_64 = uVar3;
    puVar4 = (undefined4 *)FUN_00421ed0(uVar14,4,&local_64);
    *(uint *)(param_1 + 5) = uVar3;
    *(uint *)((long)param_1 + 0x2c) = local_64;
    uVar10 = uVar3 & 3;
    param_1[4] = puVar4;
    if (2 < uVar3 - 1) {
      iVar9 = uVar10 - uVar3;
      puVar8 = puVar4;
      do {
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar4 = puVar8 + 4;
        puVar11 = puVar11 + 4;
        puVar8[3] = *puVar1;
        iVar9 = iVar9 + 4;
        puVar8 = puVar4;
      } while (iVar9 != 0);
    }
    if (uVar10 != 0) {
      iVar9 = -uVar10;
      do {
        iVar9 = iVar9 + 1;
        *puVar4 = *puVar11;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x38);
  puVar12 = *(undefined8 **)(param_2 + 0x30);
  if ((int)uVar3 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    local_64 = uVar3;
    puVar5 = (undefined8 *)FUN_00421ed0(uVar14,0x10,&local_64);
    *(uint *)(param_1 + 7) = uVar3;
    *(uint *)((long)param_1 + 0x3c) = local_64;
    uVar10 = uVar3 & 3;
    param_1[6] = puVar5;
    if (2 < uVar3 - 1) {
      iVar9 = uVar10 - uVar3;
      puVar6 = puVar5;
      puVar13 = puVar12;
      do {
        uVar2 = puVar13[1];
        puVar5 = puVar6 + 8;
        *puVar6 = *puVar13;
        puVar6[1] = uVar2;
        puVar12 = puVar13 + 8;
        uVar2 = puVar13[3];
        iVar9 = iVar9 + 4;
        puVar6[2] = puVar13[2];
        puVar6[3] = uVar2;
        uVar2 = puVar13[5];
        puVar6[4] = puVar13[4];
        puVar6[5] = uVar2;
        uVar2 = puVar13[7];
        puVar6[6] = puVar13[6];
        puVar6[7] = uVar2;
        puVar6 = puVar5;
        puVar13 = puVar12;
      } while (iVar9 != 0);
    }
    if (uVar10 != 0) {
      iVar9 = -uVar10;
      do {
        uVar2 = puVar12[1];
        *puVar5 = *puVar12;
        puVar5[1] = uVar2;
        iVar9 = iVar9 + 1;
        puVar5 = puVar5 + 2;
        puVar12 = puVar12 + 2;
      } while (iVar9 != 0);
    }
  }
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x48);
  puVar11 = *(undefined4 **)(param_2 + 0x40);
  if ((int)uVar3 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    local_64 = uVar3;
    puVar4 = (undefined4 *)FUN_00421ed0(uVar14,0x20,&local_64);
    uVar10 = 0;
    param_1[8] = puVar4;
    *(uint *)(param_1 + 9) = uVar3;
    *(uint *)((long)param_1 + 0x4c) = local_64;
    do {
      *puVar4 = *puVar11;
      *(undefined8 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 6) = 0x8000000000000000;
      iVar9 = puVar11[6];
      lVar16 = *(long *)(puVar11 + 4);
      if (iVar9 < 1) {
        if (iVar9 != 0) {
          lVar7 = 0;
          goto LAB_00538178;
        }
      }
      else {
        lVar7 = FUN_00426720(uVar14,iVar9,0x48,0,0,puVar4 + 7);
        *(long *)(puVar4 + 4) = lVar7;
LAB_00538178:
        lVar15 = (long)iVar9 * 0x48;
        do {
          FUN_0052ca20(lVar7,lVar16);
          lVar16 = lVar16 + 0x48;
          lVar15 = lVar15 + -0x48;
          lVar7 = lVar7 + 0x48;
        } while (lVar15 != 0);
      }
      puVar4[6] = iVar9;
      *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(puVar11 + 2);
      uVar10 = uVar10 + 1;
      *(undefined1 *)((long)puVar4 + 9) = *(undefined1 *)((long)puVar11 + 9);
      puVar4 = puVar4 + 8;
      puVar11 = puVar11 + 8;
    } while (uVar10 != uVar3);
  }
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x58);
  puVar11 = *(undefined4 **)(param_2 + 0x50);
  if ((int)uVar3 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    local_64 = uVar3;
    puVar4 = (undefined4 *)FUN_00421ed0(uVar14,4,&local_64);
    *(uint *)(param_1 + 0xb) = uVar3;
    *(uint *)((long)param_1 + 0x5c) = local_64;
    uVar10 = uVar3 & 3;
    param_1[10] = puVar4;
    if (2 < uVar3 - 1) {
      iVar9 = uVar10 - uVar3;
      puVar8 = puVar4;
      do {
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar4 = puVar8 + 4;
        puVar11 = puVar11 + 4;
        puVar8[3] = *puVar1;
        iVar9 = iVar9 + 4;
        puVar8 = puVar4;
      } while (iVar9 != 0);
    }
    if (uVar10 != 0) {
      iVar9 = -uVar10;
      do {
        iVar9 = iVar9 + 1;
        *puVar4 = *puVar11;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  return;
}

