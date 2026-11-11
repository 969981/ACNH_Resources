
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00646760(undefined8 *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
  undefined *puVar22;
  undefined4 local_68;
  undefined4 local_64;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  param_1[6] = &DAT_040b3e5e;
  puVar14 = PTR_DAT_048607b8;
  uVar13 = DAT_0413f4f8;
  uVar12 = DAT_0413f4f0;
  uVar11 = DAT_0413f4e8;
  uVar10 = DAT_0413f4e0;
  uVar9 = DAT_0413f4d8;
  uVar8 = DAT_0413f4d0;
  uVar7 = DAT_0413f4c8;
  uVar6 = DAT_0413f4c0;
  FUN_0043bce0(param_1 + 7,&DAT_040b3e5e,0xffffffff);
  puVar15 = (undefined8 *)FUN_00438810(0x18);
  puVar15[2] = 1;
  *puVar15 = &PTR_LAB_048e10f0;
  puVar15[1] = 0xffffffff;
  param_1[8] = puVar15;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  local_68 = 1;
  puVar16 = (undefined1 *)FUN_00421ed0(puVar14,1,&local_68);
  param_1[9] = puVar16;
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined4 *)((long)param_1 + 0x54) = local_68;
  *puVar16 = 1;
  FUN_004385d0(param_1 + 0xe);
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  puVar15 = param_1 + 0x4a;
  param_1[0x11] = uVar9;
  param_1[0x10] = uVar8;
  uVar3 = _UNK_04101fa8;
  uVar19 = _DAT_04101fa0;
  param_1[0xd] = _UNK_04101fa8;
  param_1[0xc] = uVar19;
  param_1[0x13] = uVar11;
  param_1[0x12] = uVar10;
  param_1[0x15] = uVar13;
  param_1[0x14] = uVar12;
  uVar5 = _UNK_04102208;
  uVar4 = _DAT_04102200;
  param_1[0x42] = 0;
  param_1[0x43] = 0x8000000000000000;
  param_1[0x44] = 0;
  param_1[0x45] = 0x8000000000000000;
  param_1[0x46] = 0;
  param_1[0x47] = 0x8000000000000000;
  param_1[0x48] = 0;
  param_1[0x49] = 0x8000000000000000;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0x8000000000000000;
  param_1[0x38] = 0;
  param_1[0x39] = 0x8000000000000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x8000000000000000;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x8000000000000000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x8000000000000000;
  param_1[0x40] = 0;
  param_1[0x41] = 0x8000000000000000;
  param_1[0x17] = uVar5;
  param_1[0x16] = uVar4;
  do {
    *puVar15 = &DAT_040b3e5e;
    FUN_0043bce0(puVar15 + 1,&DAT_040b3e5e,0xffffffff);
    puVar17 = (undefined8 *)FUN_00438810(0x18);
    *puVar17 = &PTR_LAB_048e10f0;
    puVar17[1] = 0xffffffff;
    puVar17[2] = 1;
    puVar15[4] = 0x8000000000000000;
    puVar15[2] = puVar17;
    puVar15[3] = 0;
    local_64 = 1;
    puVar16 = (undefined1 *)FUN_00421ed0(puVar14,1,&local_64);
    puVar15[3] = puVar16;
    *(undefined4 *)(puVar15 + 4) = 1;
    *(undefined4 *)((long)puVar15 + 0x24) = local_64;
    *puVar16 = 1;
    FUN_004385d0(puVar15 + 8);
    puVar15[7] = uVar3;
    puVar15[6] = uVar19;
    puVar15[9] = uVar7;
    puVar15[8] = uVar6;
    puVar15[0xb] = uVar9;
    puVar15[10] = uVar8;
    puVar15[0xd] = uVar11;
    puVar15[0xc] = uVar10;
    puVar15[0xf] = uVar13;
    puVar15[0xe] = uVar12;
    puVar15[0x11] = uVar5;
    puVar15[0x10] = uVar4;
    puVar15 = puVar15 + 0x12;
  } while (puVar15 != param_1 + 0xfe);
  puVar1 = &DAT_040b3e5e;
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_040d3199;
  }
  *param_1 = puVar1;
  FUN_0043be70(param_1 + 1,puVar1);
  if ((param_2 & 1) == 0) {
    lVar18 = param_1[2];
    param_1[2] = 0;
    puVar22 = PTR_DAT_04bdb8b8;
  }
  else {
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    puVar22 = &DAT_048e10e0;
    *puVar15 = &PTR_LAB_048e10f0;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[2];
    param_1[2] = puVar15;
  }
  if (lVar18 != 0) {
    FUN_004435c0();
  }
  if ((*(uint *)((long)param_1 + 0x24) & 0x3fffffff) == 0) {
    uVar19 = FUN_00426720(puVar14,1,1,param_1[3],*(undefined4 *)(param_1 + 4));
    param_1[3] = uVar19;
    iVar21 = *(int *)(param_1 + 4);
  }
  else {
    iVar21 = *(int *)(param_1 + 4);
  }
  if (iVar21 < 1) {
    *(undefined4 *)(param_1 + 4) = 1;
    memset((void *)(param_1[3] + (long)iVar21),param_2 & 1,(ulong)(uint)-iVar21 + 1);
  }
  else if (iVar21 != 1) {
    *(undefined4 *)(param_1 + 4) = 1;
  }
  FUN_004385e0(param_1 + 0xe);
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_00421f90(puVar14,param_1[9],1,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  if (param_1[8] != 0) {
    FUN_004435c0();
  }
  FUN_0043be10(param_1 + 7);
  FUN_00646660(param_1 + 6,param_2 & 1);
  param_1[0x18] = puVar1;
  param_1[0x19] = puVar1;
  param_1[0x1a] = puVar1;
  param_1[0x1b] = puVar1;
  param_1[0x1c] = puVar1;
  param_1[0x1d] = puVar1;
  param_1[0x1e] = puVar1;
  param_1[0x1f] = puVar1;
  param_1[0x20] = puVar1;
  param_1[0x21] = puVar1;
  FUN_0043be70(param_1 + 0x22,puVar1);
  FUN_0043be70(param_1 + 0x23,puVar1);
  FUN_0043be70(param_1 + 0x24,puVar1);
  FUN_0043be70(param_1 + 0x25,puVar1);
  FUN_0043be70(param_1 + 0x26,puVar1);
  FUN_0043be70(param_1 + 0x27,puVar1);
  FUN_0043be70(param_1 + 0x28,puVar1);
  FUN_0043be70(param_1 + 0x29,puVar1);
  FUN_0043be70(param_1 + 0x2a,puVar1);
  FUN_0043be70(param_1 + 0x2b,puVar1);
  if ((param_2 & 1) == 0) {
    lVar18 = param_1[0x2c];
    param_1[0x2c] = 0;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    lVar18 = param_1[0x2d];
    param_1[0x2d] = 0;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    lVar18 = param_1[0x2e];
    param_1[0x2e] = 0;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    lVar18 = param_1[0x2f];
    param_1[0x2f] = 0;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    lVar18 = param_1[0x30];
    param_1[0x30] = 0;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    lVar18 = param_1[0x31];
    param_1[0x31] = 0;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    lVar18 = param_1[0x32];
    param_1[0x32] = 0;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    lVar18 = param_1[0x33];
    param_1[0x33] = 0;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    lVar18 = param_1[0x34];
    param_1[0x34] = 0;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    lVar18 = param_1[0x35];
    param_1[0x35] = 0;
  }
  else {
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    *puVar15 = puVar22 + 0x10;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[0x2c];
    param_1[0x2c] = puVar15;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    *puVar15 = puVar22 + 0x10;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[0x2d];
    param_1[0x2d] = puVar15;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    *puVar15 = puVar22 + 0x10;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[0x2e];
    param_1[0x2e] = puVar15;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    *puVar15 = puVar22 + 0x10;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[0x2f];
    param_1[0x2f] = puVar15;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    *puVar15 = puVar22 + 0x10;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[0x30];
    param_1[0x30] = puVar15;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    *puVar15 = puVar22 + 0x10;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[0x31];
    param_1[0x31] = puVar15;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    *puVar15 = puVar22 + 0x10;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[0x32];
    param_1[0x32] = puVar15;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    *puVar15 = puVar22 + 0x10;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[0x33];
    param_1[0x33] = puVar15;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    *puVar15 = puVar22 + 0x10;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[0x34];
    param_1[0x34] = puVar15;
    if (lVar18 != 0) {
      FUN_004435c0();
    }
    puVar15 = (undefined8 *)FUN_00438810(0x18);
    *puVar15 = puVar22 + 0x10;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    lVar18 = param_1[0x35];
    param_1[0x35] = puVar15;
  }
  if (lVar18 != 0) {
    FUN_004435c0();
  }
  lVar18 = 0;
  do {
    while ((*(uint *)((long)param_1 + lVar18 + 0x1bc) & 0x3fffffff) != 0) {
      iVar21 = *(int *)((long)param_1 + lVar18 + 0x1b8);
      if (iVar21 < 1) goto LAB_00646db4;
LAB_00646d6c:
      if (iVar21 != 1) {
        *(undefined4 *)((long)param_1 + lVar18 + 0x1b8) = 1;
      }
      lVar18 = lVar18 + 0x10;
      if (lVar18 == 0xa0) goto LAB_00646ddc;
    }
    uVar19 = FUN_00426720(puVar14,1,1,*(undefined8 *)((long)param_1 + lVar18 + 0x1b0),
                          *(undefined4 *)((long)param_1 + lVar18 + 0x1b8),
                          (long)param_1 + lVar18 + 0x1bc);
    *(undefined8 *)((long)param_1 + lVar18 + 0x1b0) = uVar19;
    iVar21 = *(int *)((long)param_1 + lVar18 + 0x1b8);
    if (0 < iVar21) goto LAB_00646d6c;
LAB_00646db4:
    *(undefined4 *)((long)param_1 + lVar18 + 0x1b8) = 1;
    memset((void *)(*(long *)((long)param_1 + lVar18 + 0x1b0) + (long)iVar21),param_2 & 1,
           (ulong)(uint)-iVar21 + 1);
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0xa0);
LAB_00646ddc:
  lVar18 = 0;
  do {
    FUN_004385e0((long)param_1 + lVar18 + 0x290);
    uVar2 = *(uint *)((long)param_1 + lVar18 + 0x274);
    *(undefined4 *)((long)param_1 + lVar18 + 0x270) = 0;
    if ((-1 < (int)uVar2) && (lVar20 = *(long *)((long)param_1 + lVar18 + 0x268), lVar20 != 0)) {
      FUN_00421f90(puVar14,lVar20,1,uVar2 & 0x3fffffff);
    }
    *(undefined8 *)((long)param_1 + lVar18 + 0x268) = 0;
    *(undefined4 *)((long)param_1 + lVar18 + 0x274) = 0x80000000;
    if (*(long *)((long)param_1 + lVar18 + 0x260) != 0) {
      FUN_004435c0();
    }
    FUN_0043be10((long)param_1 + lVar18 + 600);
    FUN_00646660((long)param_1 + lVar18 + 0x250,param_2 & 1);
    lVar18 = lVar18 + 0x90;
  } while (lVar18 != 0x5a0);
  return;
}

