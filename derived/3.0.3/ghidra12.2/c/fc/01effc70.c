
/* WARNING: Removing unreachable block (ram,0x01f00200) */
/* WARNING: Removing unreachable block (ram,0x01f00100) */
/* WARNING: Removing unreachable block (ram,0x01f00180) */
/* WARNING: Removing unreachable block (ram,0x01f00280) */
/* WARNING: Removing unreachable block (ram,0x01efff80) */
/* WARNING: Removing unreachable block (ram,0x01efff70) */
/* WARNING: Removing unreachable block (ram,0x01efff8c) */
/* WARNING: Removing unreachable block (ram,0x01f00668) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe60 : 0x01f00190 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01effc70(long *param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  float fVar24;
  uint uVar25;
  int iVar26;
  undefined8 *puVar27;
  int iVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined *local_1d8;
  undefined8 local_1d0;
  uint *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  int local_188;
  int iStack_184;
  undefined8 local_180;
  int local_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  undefined *local_128;
  int local_120;
  undefined8 local_11c;
  float local_114;
  float fStack_110;
  float local_10c;
  float fStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  uint local_9c;
  
  puVar11 = PTR_DAT_04bbc1a0;
  puVar9 = PTR_DAT_04bb2010;
  local_120 = 0;
  local_128 = PTR_DAT_04bc1968 + 0x10;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  local_e0 = 0;
  local_d8 = (undefined *)0xfffe;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  lVar29 = *(long *)(param_1[1] + 0x68);
  local_f0 = 0;
  local_100 = puVar1;
  puStack_f8 = puVar2;
  puStack_e8 = puVar2;
  FUN_0277d4ac(&local_d8);
  local_c0 = 0;
  local_120 = 0x10;
  local_f0 = 0;
  local_e0 = 0;
  local_11c = 0;
  local_114 = 0.0;
  fStack_110 = 0.0;
  local_10c = 0.0;
  fStack_108 = 0.0;
  local_1b8 = (undefined *)0xfffe;
  local_b0 = 0;
  local_d0 = puVar1;
  puStack_c8 = puVar2;
  local_b8 = puVar2;
  FUN_0277d4ac(&local_1b8);
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_d8 = local_1b8;
  if (0xc < *param_2 - 2U) {
    return 0;
  }
  lVar19 = lVar29 + 0x278;
  switch(*param_2) {
  case 2:
    local_130 = 0.0;
    local_138 = 0.0;
    fStack_134 = 0.0;
    lVar21 = *(long *)PTR_DAT_04bb26a8;
    lVar20 = *(long *)(lVar21 + 0x1469a0);
    if (lVar20 == lVar21 + 0x146998) {
      fVar34 = 0.0;
      fVar35 = 0.0;
      fVar24 = 0.0;
    }
    else {
      fVar34 = 0.0;
      fVar35 = 0.0;
      fVar24 = 0.0;
      fVar30 = 3.4028235e+38;
      lVar23 = lVar20 + -0x28;
      do {
        fVar31 = *(float *)(lVar20 + -0x28);
        fVar33 = *(float *)(lVar29 + 0x278) - fVar31;
        fVar32 = *(float *)(lVar23 + 8);
        fVar36 = *(float *)(lVar29 + 0x280) - fVar32;
        fVar33 = fVar36 * fVar36 + fVar33 * fVar33;
        if (fVar33 < fVar30) {
          fStack_134 = *(float *)(lVar23 + 4);
          fVar30 = fVar33;
          local_138 = fVar31;
          local_130 = fVar32;
          fVar35 = fStack_134;
          fVar34 = fVar32;
          fVar24 = fVar31;
        }
        lVar20 = *(long *)(lVar20 + 8);
        lVar23 = lVar20 + -0x28;
      } while (lVar23 != lVar21 + 0x146970);
    }
    if (((fVar24 == 0.0) && (fVar35 == 0.0)) && (fVar34 == 0.0)) {
      return 0;
    }
    local_1d8 = puVar9 + 0x10;
    local_1d0 = 0;
    uVar17 = FUN_021e7e60(&local_138,lVar19,&local_1d8);
    if ((uVar17 & 1) == 0) {
      return 0;
    }
    local_1b0 = (undefined *)0xffffffff00000000;
    local_190 = 0x100000000;
    lVar29 = *(long *)PTR_DAT_04bb27c8;
    local_180 = 0xffffffff;
    local_1a0 = (undefined *)0x1;
    fVar35 = (float)(int)local_1d0 * 5.0 + 2.5;
    local_114 = (float)local_1d0._4_4_ * 5.0 + 2.5;
    uVar25 = (int)((float)(int)(fVar35 + -10.0) / 5.0) - (uint)(fVar35 + -10.0 < 0.0);
    uVar6 = (int)((float)(int)(local_114 + -10.0) / 5.0) - (uint)(local_114 + -10.0 < 0.0);
    iVar14 = uVar25 + 4;
    iVar28 = uVar6 + 4;
    uVar16 = uVar6;
    uVar13 = uVar25;
    do {
      if ((((int)uVar25 < (int)uVar13) && ((int)uVar13 < iVar14)) &&
         (((int)uVar6 < (int)uVar16 && ((int)uVar16 < iVar28)))) {
        if (((lVar29 != 0) && (-1 < (int)uVar13)) &&
           ((lVar19 = *(long *)(lVar29 + 0xa8), lVar19 != 0 &&
            (((-1 < (int)uVar16 && (uVar13 < *(uint *)(lVar19 + 0x38))) &&
             (uVar16 < *(uint *)(lVar19 + 0x3c))))))) {
          uVar18 = uVar13 + *(uint *)(lVar19 + 0x38) * uVar16;
          goto LAB_01f002c4;
        }
      }
      else {
        local_9c = 0;
        if (((((lVar29 != 0) && (lVar19 = *(long *)(lVar29 + 0xa8), lVar19 != 0)) &&
             ((-1 < (int)uVar13 &&
              ((uVar18 = uVar16 - 1, -1 < (int)uVar18 && (uVar13 < *(uint *)(lVar19 + 0x38))))))) &&
            (uVar18 < *(uint *)(lVar19 + 0x3c))) &&
           ((uVar18 = uVar13 + *(uint *)(lVar19 + 0x38) * uVar18, uVar18 < *(uint *)(lVar19 + 0x68)
            && (*(long *)(lVar19 + 0x70) != 0)))) {
          local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,3);
          if ((*(uint *)(*(long *)(lVar19 + 0x70) + (long)(int)uVar18 * 4) >> 3 & 1) != 0) {
            return 0;
          }
        }
        local_9c = 1;
        if ((((((lVar29 != 0) && (lVar19 = *(long *)(lVar29 + 0xa8), lVar19 != 0)) &&
              (uVar18 = uVar13 + 1, -1 < (int)uVar18)) &&
             ((-1 < (int)uVar16 && (uVar18 < *(uint *)(lVar19 + 0x38))))) &&
            (uVar16 < *(uint *)(lVar19 + 0x3c))) &&
           ((uVar18 = uVar18 + *(uint *)(lVar19 + 0x38) * uVar16, uVar18 < *(uint *)(lVar19 + 0x68)
            && (*(long *)(lVar19 + 0x70) != 0)))) {
          local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,3);
          if ((*(uint *)(*(long *)(lVar19 + 0x70) + (long)(int)uVar18 * 4) >> 3 & 1) != 0) {
            return 0;
          }
        }
        local_9c = 2;
        if ((((lVar29 != 0) && (lVar19 = *(long *)(lVar29 + 0xa8), lVar19 != 0)) &&
            (-1 < (int)uVar13)) &&
           (((uVar18 = uVar16 + 1, -1 < (int)uVar18 && (uVar13 < *(uint *)(lVar19 + 0x38))) &&
            ((uVar18 < *(uint *)(lVar19 + 0x3c) &&
             ((uVar18 = uVar13 + *(uint *)(lVar19 + 0x38) * uVar18,
              uVar18 < *(uint *)(lVar19 + 0x68) && (*(long *)(lVar19 + 0x70) != 0)))))))) {
          local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,3);
          if ((*(uint *)(*(long *)(lVar19 + 0x70) + (long)(int)uVar18 * 4) >> 3 & 1) != 0) {
            return 0;
          }
        }
        local_9c = 3;
        if (((((lVar29 != 0) && (lVar19 = *(long *)(lVar29 + 0xa8), lVar19 != 0)) &&
             (uVar18 = uVar13 - 1, -1 < (int)uVar18)) &&
            ((-1 < (int)uVar16 && (uVar18 < *(uint *)(lVar19 + 0x38))))) &&
           (uVar16 < *(uint *)(lVar19 + 0x3c))) {
          uVar18 = uVar18 + *(uint *)(lVar19 + 0x38) * uVar16;
LAB_01f002c4:
          if ((uVar18 < *(uint *)(lVar19 + 0x68)) && (*(long *)(lVar19 + 0x70) != 0)) {
            local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,3);
            if ((*(uint *)(*(long *)(lVar19 + 0x70) + (long)(int)uVar18 * 4) >> 3 & 1) != 0) {
              return 0;
            }
          }
        }
      }
      if ((int)uVar13 < iVar14) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar16 = uVar16 + 1;
        uVar13 = uVar25;
      }
    } while ((uVar25 != uVar13) || (uVar6 + 5 != uVar16));
    lVar29 = *(long *)PTR_DAT_04bb3968;
    if (((int)uVar25 <= *(int *)(lVar29 + 0x2e18)) &&
       (((*(int *)(lVar29 + 0x2e28) <= iVar14 && ((int)uVar6 <= *(int *)(lVar29 + 0x2e1c))) &&
        (*(int *)(lVar29 + 0x2e2c) <= iVar28)))) {
      return 0;
    }
    local_120 = *param_2;
    local_f0 = CONCAT44(uVar6,uVar25);
    local_e0 = CONCAT44(iVar28,iVar14);
    goto LAB_01f00608;
  case 4:
    lVar20 = *(long *)PTR_DAT_04bb26a8;
    lVar19 = *(long *)(lVar20 + 0x146c80);
    if (lVar19 == lVar20 + 0x146c78) {
      fVar34 = 0.0;
      local_114 = 0.0;
      fVar35 = 0.0;
    }
    else {
      local_114 = 0.0;
      fVar34 = 0.0;
      fVar35 = 0.0;
      fVar24 = 3.4028235e+38;
      lVar21 = lVar19 + -0x30;
      do {
        fVar30 = *(float *)(lVar29 + 0x278) - *(float *)(lVar21 + 0x20);
        fVar31 = *(float *)(lVar29 + 0x280) - *(float *)(lVar21 + 0x28);
        fVar30 = fVar31 * fVar31 + fVar30 * fVar30;
        if (fVar30 < fVar24) {
          fVar34 = *(float *)(lVar21 + 0x24);
          fVar24 = fVar30;
          fVar35 = *(float *)(lVar21 + 0x20);
          local_114 = *(float *)(lVar21 + 0x28);
        }
        lVar19 = *(long *)(lVar19 + 8);
        lVar21 = lVar19 + -0x30;
      } while (lVar21 != lVar20 + 0x146c48);
    }
    lVar29 = *(long *)PTR_DAT_04bb3968;
    iVar14 = (int)((float)(int)(fVar35 + -12.5) / 5.0) - (uint)(fVar35 + -12.5 < 0.0);
    iVar28 = (int)((float)(int)(local_114 + -12.5) / 5.0) - (uint)(local_114 + -12.5 < 0.0);
    if (((*(int *)(lVar29 + 0x2e1c) <= iVar28 + 5 && iVar28 <= *(int *)(lVar29 + 0x2e2c)) &&
        *(int *)(lVar29 + 0x2e18) <= iVar14 + 5) && iVar14 <= *(int *)(lVar29 + 0x2e28)) {
      return 0;
    }
    if (((fVar35 == 0.0) && (fVar34 == 0.0)) && (local_114 == 0.0)) {
      return 0;
    }
    local_f0 = CONCAT44(iVar28,iVar14);
    local_120 = 4;
    lVar29 = param_1[1];
    local_11c = CONCAT44(fVar34,fVar35);
    fStack_110 = 0.0;
    local_10c = 0.0;
    fStack_108 = 0.0;
    local_e0 = CONCAT44(iVar28 + 5,iVar14 + 5);
    goto LAB_01f00628;
  case 6:
    fStack_134 = 0.0;
    local_130 = 0.0;
    lVar21 = *(long *)PTR_DAT_04bb26a8;
    lVar20 = *(long *)(lVar21 + 0x146b58);
    if (lVar20 == lVar21 + 0x146b50) {
      fVar34 = 0.0;
      fVar35 = 0.0;
      local_138 = 0.0;
    }
    else {
      fVar34 = 0.0;
      fVar35 = 0.0;
      local_138 = 0.0;
      fVar24 = 3.4028235e+38;
      lVar23 = lVar20 + -0x28;
      do {
        fVar31 = *(float *)(lVar29 + 0x278) - *(float *)(lVar23 + 4);
        fVar30 = *(float *)(lVar23 + 0xc);
        fVar32 = *(float *)(lVar29 + 0x280) - fVar30;
        fVar31 = fVar32 * fVar32 + fVar31 * fVar31;
        if (fVar31 < fVar24) {
          fStack_134 = *(float *)(lVar23 + 8);
          fVar24 = fVar31;
          local_130 = fVar30;
          fVar35 = fStack_134;
          fVar34 = fVar30;
          local_138 = *(float *)(lVar23 + 4);
        }
        lVar20 = *(long *)(lVar20 + 8);
        lVar23 = lVar20 + -0x28;
      } while (lVar23 != lVar21 + 0x146b28);
    }
    if (((local_138 == 0.0) && (fVar35 == 0.0)) && (fVar34 == 0.0)) {
      return 0;
    }
    local_1d8 = puVar9 + 0x10;
    local_1d0 = 0;
    uVar17 = FUN_021e7e60(&local_138,lVar19,&local_1d8);
    if ((uVar17 & 1) == 0) {
      return 0;
    }
    iStack_13c = local_1d0._4_4_ + -1;
    iVar14 = (int)local_1d0 + -1;
    iStack_184 = local_1d0._4_4_ + 1;
    local_168 = (int)local_1d0 + 1;
    local_1a0 = (undefined *)CONCAT44(iStack_13c,iVar14);
    fVar35 = (float)(int)local_1d0 * 5.0 + 2.5;
    fVar34 = (float)local_1d0._4_4_ * 5.0 + 2.5;
    local_188 = (int)((float)(int)(fVar35 + -10.0) / 5.0) - (uint)(fVar35 + -10.0 < 0.0);
    iStack_154 = (int)((float)(int)(fVar34 + -10.0) / 5.0) - (uint)(fVar34 + -10.0 < 0.0);
    local_170 = local_188 + 4;
    iStack_16c = iStack_154 + 4;
    local_1b8 = (undefined *)CONCAT44(iStack_154,local_188);
    local_1a8 = CONCAT44(iStack_154,local_188);
    local_198 = CONCAT44(iStack_154,local_188);
    local_1b0 = (undefined *)CONCAT44(iStack_13c,local_170);
    local_190 = CONCAT44(iStack_16c,iVar14);
    local_180 = CONCAT44(iStack_16c,iVar14);
    local_178 = local_188;
    iStack_174 = iStack_184;
    iStack_164 = iStack_184;
    local_160 = local_170;
    iStack_15c = iStack_16c;
    local_158 = local_168;
    local_150 = local_170;
    iStack_14c = iStack_16c;
    local_148 = local_168;
    iStack_144 = iStack_154;
    local_140 = local_170;
    iVar14 = FUN_006f0400(local_138 - fVar35,local_130 - fVar34);
    uVar16 = iVar14 + 0x10000000U >> 0x1d;
    local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,uVar16);
    uVar17 = (ulong)uVar16;
    bVar12 = 7 < uVar16;
    piVar4 = (int *)((long)&local_1b8 + uVar17 * 4 * 4);
    if (bVar12) {
      piVar4 = (int *)&local_1b8;
    }
    piVar3 = (int *)((long)&local_1b8 + uVar17 * 0x10 + 4);
    piVar8 = (int *)(&local_1b0 + uVar17 * 2);
    if (bVar12) {
      piVar3 = (int *)((long)&local_1b8 + 4);
      piVar8 = (int *)&local_1b0;
    }
    iVar14 = *piVar4;
    piVar4 = (int *)((long)&local_1b0 + uVar17 * 0x10 + 4);
    if (bVar12) {
      piVar4 = (int *)((long)&local_1b0 + 4);
    }
    iVar26 = *piVar8;
    iVar7 = *piVar3;
    iVar15 = *piVar4;
    iVar28 = iVar14;
    if (iVar26 <= iVar14) {
      iVar28 = iVar26;
    }
    if (iVar14 <= iVar26) {
      iVar14 = iVar26;
    }
    iVar26 = iVar7;
    if (iVar15 <= iVar7) {
      iVar26 = iVar15;
    }
    if (iVar7 <= iVar15) {
      iVar7 = iVar15;
    }
    lVar29 = *(long *)PTR_DAT_04bb3968;
    if (((iVar28 <= *(int *)(lVar29 + 0x2e18)) && (*(int *)(lVar29 + 0x2e28) <= iVar14)) &&
       ((iVar26 <= *(int *)(lVar29 + 0x2e1c) && (*(int *)(lVar29 + 0x2e2c) <= iVar7)))) {
      return 0;
    }
    local_120 = *param_2;
    local_f0 = CONCAT44(iVar26,iVar28);
    local_e0 = CONCAT44(iVar7,iVar14);
    local_114 = fVar34;
LAB_01f00608:
    local_11c = (ulong)(uint)fVar35;
    fStack_110 = local_138;
    local_10c = fStack_134;
    fStack_108 = local_130;
    lVar29 = param_1[1];
LAB_01f00628:
    local_a8 = 0;
    FUN_021dd4e0(&local_128,lVar29);
    return 1;
  case 9:
    lVar20 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    if (lVar20 != 0) {
      local_1b8 = (undefined *)((ulong)local_1b8 & 0xffffffff00000000);
      local_130 = 0.0;
      local_138 = 0.0;
      fStack_134 = 0.0;
      local_1c0 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_1c0);
      puVar2 = PTR_DAT_04bb37e0;
      local_208 = 0;
      uStack_204 = 0;
      local_200 = 0;
      local_1fc = 0;
      fVar24 = 0.0;
      fVar34 = 0.0;
      fVar30 = *(float *)(lVar29 + 0x278) + 2.5;
      fVar31 = *(float *)(lVar29 + 0x280) + 2.5;
      fVar35 = 3.4028235e+38;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      fVar30 = (float)((int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0) & 0xffff) * 5.0 +
               -237.5;
      fVar31 = (float)((int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0) & 0xffff) * 5.0 +
               -237.5;
      iVar7 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
      iVar28 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
      iVar14 = iVar28 + 0x60;
      iVar26 = iVar7;
      do {
        local_1a8 = 0;
        local_198 = 0;
        lVar21 = *(long *)(lVar20 + 0xd0);
        puVar27 = (undefined8 *)puVar2;
        if (lVar21 != 0) {
          lVar23 = lVar21 + 0x130 + (ulong)*(uint *)(lVar21 + 0x198) * 0x30;
          if (1 < *(uint *)(lVar21 + 0x198)) {
            lVar23 = lVar21 + 0x130;
          }
          iVar15 = *(int *)(lVar23 + 0x28);
          if (iVar15 <= iVar26 && iVar26 <= *(int *)(lVar23 + 8) + iVar15 + -1) {
            iVar5 = *(int *)(lVar23 + 0x2c);
            if ((iVar5 <= iVar28 && iVar28 <= *(int *)(lVar23 + 0xc) + iVar5 + -1) &&
               (uVar16 = (iVar28 - iVar5) + (iVar26 - iVar15) * *(int *)(lVar23 + 0xc),
               uVar16 < *(uint *)(lVar23 + 0x10))) {
              puVar27 = (undefined8 *)(*(long *)(lVar23 + 0x18) + (long)(int)uVar16 * 8);
            }
          }
        }
        local_1b8 = puVar11 + 0x10;
        local_1b0 = puVar9 + 0x10;
        local_1a0 = puVar9 + 0x10;
        lVar21 = (**(code **)(*param_1 + 0x3a0))();
        if (*(int *)(lVar21 + 0x88) == 0xf) {
          iVar15 = FUN_0277d6c4(puVar27);
          if (iVar15 != 0x1002) {
            iVar15 = FUN_0277d6c4(puVar27);
            if (iVar15 != 0x789) {
              iVar15 = FUN_0277d6c4(puVar27);
              if (iVar15 != 0xad8) {
                iVar15 = FUN_0277d6c4(puVar27);
                if (iVar15 != 0xd90) goto LAB_01f00884;
              }
            }
          }
        }
        else {
LAB_01f00884:
          puVar10 = PTR_DAT_04bb43c0;
          lVar21 = *(long *)PTR_DAT_04bb43c0;
          uVar16 = FUN_0277d6c4(puVar27);
          if (*(long *)puVar10 == 0) {
LAB_01f008f0:
            uVar17 = FUN_016d948c(puVar27);
            fVar30 = 0.0;
            fVar31 = 0.0;
            if ((uVar17 & 1) != 0) {
              uVar16 = iVar26 << 1 | 1;
              uVar25 = iVar28 << 1 | 1;
              local_1a8._0_4_ = iVar26 << 1;
              local_1a8._4_4_ = iVar28 << 1;
LAB_01f0091c:
              local_198 = CONCAT44(uVar25,uVar16);
              fVar31 = ((float)(int)local_1a8 * 5.0 + (float)(int)uVar16 * 5.0 + 5.0) * 0.5;
              fVar30 = ((float)local_1a8._4_4_ * 5.0 + (float)(int)uVar25 * 5.0 + 5.0) * 0.5;
            }
          }
          else {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if (((*(uint *)(lVar21 + 0x1d8) <= uVar16) ||
                (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8) == 0)) ||
               (uVar17 = FUN_0277e158(puVar27), (uVar17 & 1) != 0)) goto LAB_01f008f0;
            uVar17 = FUN_0277e024(puVar27);
            puVar10 = PTR_DAT_04bb43c0;
            if ((uVar17 & 1) != 0) goto LAB_01f008f0;
            local_1d0 = *puVar27;
            local_1c8 = (uint *)0x0;
            lVar21 = *(long *)PTR_DAT_04bb43c0;
            local_1d8 = puVar1;
            uVar16 = FUN_0277d6c4(&local_1d0);
            if (*(long *)puVar10 == 0) {
LAB_01f00ab8:
              if (local_1c8 != (uint *)0x0) goto LAB_01f00ac0;
LAB_01f00b48:
              local_9c = 0;
            }
            else {
              lVar21 = *(long *)(lVar21 + 0x57e58);
              uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
              if ((*(uint *)(lVar21 + 0x1d8) <= uVar16) ||
                 (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8) == 0))
              goto LAB_01f00ab8;
              lVar21 = *(long *)PTR_DAT_04bc0428;
              uVar16 = FUN_0277d6c4(puVar27);
              uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
              if ((*(uint *)(lVar21 + 0x1d8) <= uVar16) ||
                 (puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8),
                 puVar22 == (uint *)0x0)) goto LAB_01f00ab8;
              local_1c8 = puVar22;
LAB_01f00ac0:
              uVar16 = *local_1c8;
              local_9c = 0;
              if ((uVar16 != 0) && (local_1c8 != (uint *)(ulong)uVar16)) {
                puVar22 = (uint *)((long)local_1c8 - (long)(ulong)uVar16);
                local_9c = 0;
                if (*puVar22 != 0) {
                  uVar16 = puVar22[1];
                  if ((uVar16 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                    lVar21 = 0xc;
                    if (*(char *)((long)puVar22 + 10) != '\0') {
                      lVar21 = 0x1c;
                    }
                    lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
                    if (lVar21 != 0) {
                      uVar25 = 0;
                      if ((ulong)uVar16 != 0) {
                        uVar25 = (uint)((ulong)((long)local_1c8 - lVar21) / (ulong)uVar16);
                      }
                      if (*puVar22 <= uVar25) {
                        uVar25 = 0xffffffff;
                      }
                      if ((uVar25 < *(uint *)PTR_DAT_04bc0048) &&
                         (local_9c = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar25 * 2
                                            ), local_9c < 0x52)) goto LAB_01f00b4c;
                    }
                  }
                  goto LAB_01f00b48;
                }
              }
            }
LAB_01f00b4c:
            fVar30 = 0.0;
            fVar31 = 0.0;
            if (local_9c - 1 < 9) {
              FUN_01afb480(&local_1d8,&local_1b8);
              local_1a8._0_4_ = (int)local_1a8 + iVar26;
              local_1a8._4_4_ = local_1a8._4_4_ + iVar28;
              uVar16 = (int)local_198 + iVar26;
              uVar25 = local_198._4_4_ + iVar28;
              goto LAB_01f0091c;
            }
          }
          if (fVar31 == 0.0) {
            if (fVar30 == 0.0) goto LAB_01f009e0;
          }
          fVar32 = *(float *)(lVar29 + 0x278) - fVar31;
          fVar33 = *(float *)(lVar29 + 0x280) - fVar30;
          fVar32 = fVar33 * fVar33 + fVar32 * fVar32;
          if (fVar32 < fVar35) {
            fStack_134 = 0.0;
            local_1c0 = (undefined *)*puVar27;
            local_200 = local_1a8._4_4_;
            local_1fc = (int)local_1a8;
            local_208 = local_198._4_4_;
            uStack_204 = (int)local_198;
            fVar35 = fVar32;
            local_138 = fVar31;
            local_130 = fVar30;
            fVar34 = fVar31;
            fVar24 = fVar30;
          }
        }
LAB_01f009e0:
        if (iVar26 < iVar7 + 0x5f) {
          iVar26 = iVar26 + 1;
        }
        else {
          iVar28 = iVar28 + 1;
          iVar26 = iVar7;
        }
      } while ((iVar7 != iVar26) || (iVar14 != iVar28));
      if ((fVar34 != 0.0) || (fVar24 != 0.0)) {
        local_1b8 = PTR_DAT_04bb2010 + 0x10;
        local_1b0 = (undefined *)0x0;
        uVar17 = FUN_021e7e60(&local_138,lVar19,&local_1b8);
        if ((uVar17 & 1) != 0) {
          lVar29 = *(long *)PTR_DAT_04bb3968;
          iVar14 = (int)((float)(int)(local_138 + -12.5) / 5.0) - (uint)(local_138 + -12.5 < 0.0);
          iVar28 = (int)((float)(int)(local_130 + -12.5) / 5.0) - (uint)(local_130 + -12.5 < 0.0);
          if (((iVar14 + 5 < *(int *)(lVar29 + 0x2e18) || *(int *)(lVar29 + 0x2e28) < iVar14) ||
              iVar28 + 5 < *(int *)(lVar29 + 0x2e1c)) || *(int *)(lVar29 + 0x2e2c) < iVar28) {
            local_f0 = CONCAT44(iVar28,iVar14);
            local_e0 = CONCAT44(iVar28 + 5,iVar14 + 5);
            fStack_110 = 0.0;
            local_10c = 0.0;
            fStack_108 = 0.0;
            local_120 = *param_2;
            local_114 = (float)local_1b0._4_4_ * 5.0 + 2.5;
            local_d8 = local_1c0;
            local_c0 = CONCAT44(local_200,local_1fc);
            local_b0 = CONCAT44(local_208,uStack_204);
            lVar29 = param_1[1];
            local_11c = (ulong)(uint)((float)(int)local_1b0 * 5.0 + 2.5);
            goto LAB_01f00628;
          }
        }
      }
    }
    break;
  case 0xe:
    local_120 = 0xe;
    FUN_021dd4e0(&local_128,param_1[1]);
  }
  return 0;
}

