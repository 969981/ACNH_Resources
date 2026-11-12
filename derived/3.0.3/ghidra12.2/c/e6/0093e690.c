
undefined8 FUN_0093e690(long param_1,int param_2,undefined1 *param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 *local_110;
  uint local_108;
  uint local_104;
  undefined *local_100;
  int local_f8;
  int local_f4;
  uint local_ec;
  undefined8 local_e8;
  undefined **local_e0;
  byte local_d8;
  
  local_100 = PTR_DAT_04bb2018;
  fVar24 = *(float *)(param_4 + 8);
  fVar22 = *(float *)(param_4 + 0xc);
  fVar23 = *(float *)(param_4 + 0x10);
  *param_3 = 0;
  local_f8 = *(int *)(param_1 + 8);
  local_f4 = *(int *)(param_1 + 0xc);
  local_100 = local_100 + 0x10;
  if (param_2 == 2) {
    local_f4 = local_f4 + -1;
    fVar18 = -10.0;
LAB_0093e740:
    fVar23 = fVar23 + fVar18;
  }
  else {
    if (param_2 == 1) {
      fVar18 = 10.0;
      local_f8 = local_f8 + 1;
    }
    else {
      if (param_2 != 3) {
        fVar18 = 10.0;
        local_f4 = local_f4 + 1;
        goto LAB_0093e740;
      }
      fVar18 = -10.0;
      local_f8 = local_f8 + -1;
    }
    fVar24 = fVar24 + fVar18;
  }
  uVar8 = FUN_00977640(&local_100);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  fVar21 = (float)local_f4 * 10.0 + 2.5;
  fVar20 = (float)local_f8 * 10.0 + 2.5;
  fVar19 = (float)local_f4 * 10.0 + 10.0 + -2.5;
  fVar18 = (float)local_f8 * 10.0 + 10.0 + -2.5;
  uVar2 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  uVar16 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  uVar15 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  uVar3 = uVar2;
  if ((int)uVar15 <= (int)uVar2) {
    uVar3 = uVar15;
  }
  if ((int)uVar2 <= (int)uVar15) {
    uVar2 = uVar15;
  }
  uVar14 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  uVar15 = uVar16;
  if ((int)uVar16 <= (int)uVar14) {
    uVar15 = uVar14;
  }
  if ((int)uVar14 <= (int)uVar16) {
    uVar16 = uVar14;
  }
  if (uVar15 + 1 != uVar16) {
    iVar17 = 0;
    puVar1 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    uVar14 = uVar3;
    do {
      local_110 = puVar1;
      local_108 = uVar14;
      local_104 = uVar16;
      uVar8 = FUN_0097abd0(&local_110,1);
      if ((uVar8 & 1) != 0) goto LAB_0093ed54;
      iVar7 = FUN_009763c0(&local_110);
      iVar17 = iVar7 + iVar17;
      if (2 < iVar17) {
        return 0;
      }
      if ((((DAT_04cfae30 == 0) || (lVar9 = *(long *)(DAT_04cfae30 + 0xa8), lVar9 == 0)) ||
          (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) || ((int)local_108 < 0)) {
        fVar18 = -500.0;
      }
      else {
        fVar18 = -500.0;
        if (((-1 < (int)local_104) && (local_108 < *(uint *)(lVar9 + 0x38))) &&
           (local_104 < *(uint *)(lVar9 + 0x3c))) {
          FUN_00962530(lVar9,&local_110,&local_e0);
          fVar18 = local_e0._0_4_;
        }
      }
      fVar18 = fVar18 - fVar22;
      fVar19 = -fVar18;
      if (0.0 <= fVar18) {
        fVar19 = fVar18;
      }
      if (12.0 < fVar19) {
        return 0;
      }
      local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
      local_e8 = 0;
      lVar9 = *(long *)PTR_DAT_04bb27c8;
      local_ec = 0;
      if (((lVar9 != 0) && (*(long *)(lVar9 + 0xa8) != 0)) &&
         (uVar8 = FUN_009493f8(lVar9 + 0x28,&local_110,&local_e0,(long)&local_e8 + 4,&local_e8,
                               &local_ec), (uVar8 & 1) != 0)) {
        if (((uint)local_e0._0_4_ & 0xfffffffe) == 0x2a) {
          return 0;
        }
        if ((local_e8._4_4_ & 0xfffffffe) == 0x2a) {
          return 0;
        }
        if (((uint)local_e8 & 0xfffffffe) == 0x2a) {
          return 0;
        }
        if ((local_ec & 0xfffffffe) == 0x2a) {
          return 0;
        }
      }
      if ((int)uVar14 < (int)uVar2) {
        uVar14 = uVar14 + 1;
      }
      else {
        uVar16 = uVar16 + 1;
        uVar14 = uVar3;
      }
    } while ((uVar3 != uVar14) || (uVar15 + 1 != uVar16));
    if (iVar17 != 0) goto LAB_0093ea0c;
  }
  if ((*(long *)(DAT_04cfae30 + 0xa8) == *(long *)(DAT_04cfae30 + 0x90)) &&
     (uVar8 = FUN_0097e070(&local_100), (uVar8 & 1) == 0)) {
    *param_3 = 1;
    return 0;
  }
LAB_0093ea0c:
  fVar18 = *(float *)(param_4 + 0x2c) * 0.575;
  if (fVar18 < 0.0) {
    fVar18 = 0.0;
  }
  uVar3 = (int)((float)(int)(fVar24 - fVar18) / 5.0) - (uint)(fVar24 - fVar18 < 0.0);
  uVar2 = (int)((float)(int)(fVar23 - fVar18) / 5.0) - (uint)(fVar23 - fVar18 < 0.0);
  uVar15 = (int)((float)(int)(fVar24 + fVar18) / 5.0) - (uint)(fVar24 + fVar18 < 0.0);
  uVar16 = uVar3;
  if ((int)uVar15 <= (int)uVar3) {
    uVar16 = uVar15;
  }
  if ((int)uVar3 <= (int)uVar15) {
    uVar3 = uVar15;
  }
  uVar14 = (int)((float)(int)(fVar23 + fVar18) / 5.0) - (uint)(fVar23 + fVar18 < 0.0);
  uVar15 = uVar2;
  if ((int)uVar14 <= (int)uVar2) {
    uVar15 = uVar14;
  }
  if ((int)uVar2 <= (int)uVar14) {
    uVar2 = uVar14;
  }
  fVar18 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar24 = fVar18 + 2.5;
  fVar19 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar23 = fVar19 + 2.5;
  iVar10 = (int)((float)(int)fVar24 / 5.0);
  iVar7 = iVar10 - (uint)(fVar24 < 0.0);
  iVar11 = (int)((float)(int)fVar23 / 5.0);
  fVar20 = fVar18 + 10.0 + -2.5;
  fVar18 = fVar19 + 10.0 + -2.5;
  iVar4 = iVar11 - (uint)(fVar23 < 0.0);
  iVar12 = (int)((float)(int)fVar20 / 5.0);
  iVar5 = iVar12 - (uint)(fVar20 < 0.0);
  iVar17 = iVar7;
  if (iVar5 <= iVar7) {
    iVar17 = iVar5;
  }
  if (iVar7 <= iVar5) {
    iVar7 = iVar5;
  }
  iVar13 = (int)((float)(int)fVar18 / 5.0);
  iVar6 = iVar13 - (uint)(fVar18 < 0.0);
  iVar5 = iVar4;
  if (iVar6 <= iVar4) {
    iVar5 = iVar6;
  }
  if (iVar4 <= iVar6) {
    iVar4 = iVar6;
  }
  if (uVar2 + 1 != uVar15) {
    iVar12 = 0;
    puVar1 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    uVar14 = uVar16;
    do {
      local_110 = puVar1;
      local_108 = uVar14;
      local_104 = uVar15;
      uVar8 = FUN_0097abd0(&local_110,1);
      if (((uVar8 & 1) != 0) ||
         ((((iVar17 <= (int)local_108 && ((int)local_108 <= iVar7)) && (iVar5 <= (int)local_104)) &&
          ((int)local_104 <= iVar4)))) {
LAB_0093ed54:
        *param_3 = 1;
        return 0;
      }
      iVar10 = FUN_009763c0(&local_110);
      iVar12 = iVar10 + iVar12;
      if (2 < iVar12) {
        return 0;
      }
      if (((DAT_04cfae30 == 0) || (lVar9 = *(long *)(DAT_04cfae30 + 0xa8), lVar9 == 0)) ||
         ((*(char *)(DAT_04cfae30 + 0x11c8) != '\0' || ((int)local_108 < 0)))) {
        fVar23 = -500.0;
      }
      else {
        fVar23 = -500.0;
        if (((-1 < (int)local_104) && (local_108 < *(uint *)(lVar9 + 0x38))) &&
           (local_104 < *(uint *)(lVar9 + 0x3c))) {
          FUN_00962530(lVar9,&local_110,&local_e0);
          fVar23 = local_e0._0_4_;
        }
      }
      fVar23 = fVar23 - fVar22;
      fVar24 = -fVar23;
      if (0.0 <= fVar23) {
        fVar24 = fVar23;
      }
      if (12.0 < fVar24) {
        return 0;
      }
      if ((int)uVar14 < (int)uVar3) {
        uVar14 = uVar14 + 1;
      }
      else {
        uVar15 = uVar15 + 1;
        uVar14 = uVar16;
      }
    } while ((uVar16 != uVar14) || (uVar2 + 1 != uVar15));
    fVar22 = (float)*(int *)(param_1 + 8) * 10.0;
    fVar24 = fVar22 + 2.5;
    fVar18 = (float)*(int *)(param_1 + 0xc) * 10.0;
    fVar23 = fVar18 + 2.5;
    iVar10 = (int)((float)(int)fVar24 / 5.0);
    iVar11 = (int)((float)(int)fVar23 / 5.0);
    fVar20 = fVar22 + 10.0 + -2.5;
    fVar18 = fVar18 + 10.0 + -2.5;
    iVar12 = (int)((float)(int)fVar20 / 5.0);
    iVar13 = (int)((float)(int)fVar18 / 5.0);
  }
  local_e0 = &PTR_LAB_04929b90;
  local_d8 = 0;
  local_108 = iVar10 - (uint)(fVar24 < 0.0);
  local_104 = iVar11 - (uint)(fVar23 < 0.0);
  iVar12 = iVar12 - (uint)(fVar20 < 0.0);
  iVar13 = iVar13 - (uint)(fVar18 < 0.0);
  iVar17 = local_108;
  if (iVar12 <= (int)local_108) {
    iVar17 = iVar12;
  }
  if ((int)local_108 <= iVar12) {
    local_108 = iVar12;
  }
  iVar7 = local_104;
  if (iVar13 <= (int)local_104) {
    iVar7 = iVar13;
  }
  if ((int)local_104 <= iVar13) {
    local_104 = iVar13;
  }
  if (param_2 == 2) {
    local_d8 = 0;
    local_110 = &DAT_048f9750;
    if (DAT_04cfae30 == 0) {
      return 0;
    }
    if (*(long *)(DAT_04cfae30 + 0xa8) == 0) {
      return 0;
    }
    local_108 = iVar17;
    local_104 = iVar7;
    FUN_00974bc8(*(long *)(DAT_04cfae30 + 0xa8),&local_110,&local_e0);
    local_d8 = local_d8 >> 2;
  }
  else if (param_2 == 1) {
    local_110 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    FUN_00977020(&local_110,&local_e0);
    local_d8 = local_d8 >> 1;
  }
  else if (param_2 == 3) {
    local_110 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    local_108 = iVar17;
    local_104 = iVar7;
    FUN_00977020(&local_110,&local_e0);
    local_d8 = local_d8 >> 3;
  }
  else {
    local_110 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    FUN_00977020(&local_110,&local_e0);
  }
  if ((local_d8 & 1) == 0) {
    return 0;
  }
  return 1;
}

