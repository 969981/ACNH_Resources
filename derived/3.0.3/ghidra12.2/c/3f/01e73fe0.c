
/* WARNING: Removing unreachable block (ram,0x01e74ac0) */
/* WARNING: Removing unreachable block (ram,0x01e749c4) */
/* WARNING: Removing unreachable block (ram,0x01e74a40) */
/* WARNING: Removing unreachable block (ram,0x01e74b40) */
/* WARNING: Removing unreachable block (ram,0x01e74838) */
/* WARNING: Removing unreachable block (ram,0x01e7563c) */
/* WARNING: Removing unreachable block (ram,0x01e7564c) */
/* WARNING: Removing unreachable block (ram,0x01e76908) */
/* WARNING: Removing unreachable block (ram,0x01e74810) */
/* WARNING: Removing unreachable block (ram,0x01e74800) */
/* WARNING: Removing unreachable block (ram,0x01e7481c) */
/* WARNING: Removing unreachable block (ram,0x01e74f88) */
/* WARNING: Removing unreachable block (ram,0x01e74658) */
/* WARNING: Removing unreachable block (ram,0x01e74668) */
/* WARNING: Removing unreachable block (ram,0x01e74674) */
/* WARNING: Removing unreachable block (ram,0x01e74848) */
/* WARNING: Removing unreachable block (ram,0x01e74854) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe48 : 0x01e74a50 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01e73fe0(long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  int *piVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  long *plVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  long lVar31;
  uint *puVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  ulong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined8 local_198;
  int local_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
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
  float local_150;
  float fStack_14c;
  float local_148;
  undefined *local_140;
  uint local_138;
  undefined8 local_134;
  float local_12c;
  float fStack_128;
  float local_124;
  float fStack_120;
  undefined *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *puStack_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  uint *local_a8;
  uint local_a0;
  undefined4 local_9c;
  
  puVar12 = PTR_DAT_04bbc1a0;
  lVar48 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar55 = *(float *)(lVar48 + 0x278);
  local_138 = 0;
  fVar56 = *(float *)(lVar48 + 0x280);
  local_f8 = 0;
  local_f0 = (undefined *)0xfffe;
  local_140 = PTR_DAT_04bc1968 + 0x10;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_108 = 0;
  local_118 = puVar1;
  puStack_110 = puVar2;
  puStack_100 = puVar2;
  FUN_0277d4ac(&local_f0);
  local_d8 = 0;
  local_138 = 0x10;
  local_108 = 0;
  local_f8 = 0;
  local_134 = (undefined *)0x0;
  local_12c = 0.0;
  fStack_128 = 0.0;
  local_124 = 0.0;
  fStack_120 = 0.0;
  local_1d0 = (undefined *)0xfffe;
  local_c8 = 0;
  local_e8 = puVar1;
  puStack_e0 = puVar2;
  local_d0 = puVar2;
  FUN_0277d4ac(&local_1d0);
  puVar1 = PTR_DAT_04bb37e0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_f0 = local_1d0;
  uVar18 = *param_2;
  if (0xe < uVar18) {
    return 0;
  }
  lVar34 = lVar48 + 0x278;
  switch(uVar18) {
  case 0:
    lVar34 = *(long *)PTR_DAT_04bb26a8;
    lVar48 = *(long *)(FUN_00146c4c + lVar34 + 4);
    if (lVar48 == lVar34 + 0x146c48) {
      iVar41 = 0;
      iVar16 = 0;
      iVar33 = 0;
      iVar38 = 0;
      iVar39 = 0;
      iVar17 = 0;
    }
    else {
      iVar41 = 0;
      iVar16 = 0;
      iVar33 = 0;
      iVar38 = 0;
      iVar17 = 0;
      iVar39 = 0;
      lVar36 = lVar48 + -0x20;
      iVar40 = 0x7fffffff;
      do {
        if (*(long *)(lVar36 + 0x10) != lVar36 + 8) {
          lVar31 = (long)*(int *)(lVar36 + 0x1c);
          iVar26 = 0;
          iVar28 = 0;
          iVar27 = 0;
          iVar21 = -0x80000000;
          iVar42 = 0x7fffffff;
          iVar43 = 0x7fffffff;
          lVar35 = *(long *)(lVar36 + 0x10) - lVar31;
          iVar29 = -0x80000000;
          iVar46 = 0x7fffffff;
          iVar24 = 0x7fffffff;
          do {
            iVar14 = iVar46;
            iVar23 = iVar24;
            if (*(char *)(lVar35 + 0xc) == '\x05') {
              sVar6 = *(short *)(lVar35 + 8);
              iVar26 = iVar26 + 1;
              sVar7 = *(short *)(lVar35 + 10);
              iVar44 = (int)sVar6;
              iVar28 = iVar28 + iVar44;
              iVar45 = (int)sVar7;
              iVar27 = iVar27 + iVar45;
              iVar14 = iVar44;
              if (iVar42 <= sVar6) {
                iVar14 = iVar46;
              }
              if (sVar6 <= iVar42) {
                iVar42 = (int)sVar6;
              }
              iVar46 = (int)sVar7;
              iVar23 = iVar46;
              if (iVar43 == iVar46 || iVar43 < iVar45) {
                iVar23 = iVar24;
              }
              if (iVar45 <= iVar43) {
                iVar43 = (int)sVar7;
              }
              if (iVar21 == iVar44 || iVar21 < sVar6) {
                iVar21 = iVar44;
              }
              if (iVar29 == iVar46 || iVar29 < sVar7) {
                iVar29 = iVar46;
              }
            }
            lVar35 = *(long *)(lVar35 + lVar31 + 8) - lVar31;
            iVar46 = iVar14;
            iVar24 = iVar23;
          } while (lVar35 != (lVar36 + 8) - lVar31);
          if (2 < iVar26) {
            iVar42 = 0;
            if (iVar26 != 0) {
              iVar42 = iVar28 / iVar26;
            }
            iVar28 = ((uint)(fVar55 < 0.0) - (int)((float)(int)fVar55 / 5.0)) + iVar42;
            iVar43 = 0;
            if (iVar26 != 0) {
              iVar43 = iVar27 / iVar26;
            }
            iVar26 = -iVar28;
            if (-1 < iVar28) {
              iVar26 = iVar28;
            }
            iVar28 = ((uint)(fVar56 < 0.0) - (int)((float)(int)fVar56 / 5.0)) + iVar43;
            iVar27 = -iVar28;
            if (-1 < iVar28) {
              iVar27 = iVar28;
            }
            if (iVar27 + iVar26 < iVar40) {
              iVar16 = iVar29 + 1;
              iVar41 = iVar21 + 1;
              iVar40 = iVar27 + iVar26;
              iVar33 = iVar14;
              iVar38 = iVar23;
              iVar17 = iVar42;
              iVar39 = iVar43;
            }
          }
        }
        lVar48 = *(long *)(lVar48 + 8);
        lVar36 = lVar48 + -0x20;
      } while (lVar36 != lVar34 + 0x146c28);
    }
    if (iVar17 == *(int *)(PTR_DAT_04bbbd98 + 8) && iVar39 == *(int *)(PTR_DAT_04bbbd98 + 0xc)) {
      return 0;
    }
    uVar18 = iVar41 - iVar33;
    if (0x18 < (int)uVar18) {
      iVar17 = (uVar18 & 1) + (uVar18 - 0x18 >> 1);
      iVar33 = iVar17 + iVar33;
      iVar41 = iVar41 - iVar17;
    }
    uVar18 = iVar16 - iVar38;
    if (0x14 < (int)uVar18) {
      iVar17 = (uVar18 & 1) + (uVar18 - 0x14 >> 1);
      iVar38 = iVar17 + iVar38;
      iVar16 = iVar16 - iVar17;
    }
    iVar17 = iVar33;
    if (iVar41 <= iVar33) {
      iVar17 = iVar41;
    }
    iVar39 = iVar33;
    if (iVar33 <= iVar41) {
      iVar39 = iVar41;
    }
    lVar48 = *(long *)PTR_DAT_04bb3968;
    iVar40 = iVar38;
    if (iVar16 <= iVar38) {
      iVar40 = iVar16;
    }
    iVar26 = iVar38;
    if (iVar38 <= iVar16) {
      iVar26 = iVar16;
    }
    if (((*(int *)(lVar48 + 0x2e18) <= iVar39) && (iVar17 <= *(int *)(lVar48 + 0x2e28))) &&
       ((*(int *)(lVar48 + 0x2e1c) <= iVar26 && (iVar40 <= *(int *)(lVar48 + 0x2e2c))))) {
      return 0;
    }
    local_138 = 0;
    local_108 = CONCAT44(iVar40,iVar17);
    local_f8 = CONCAT44(iVar26,iVar39);
    local_12c = ((float)iVar38 * 5.0 + (float)iVar16 * 5.0 + 5.0) * 0.5;
    local_134 = (undefined *)(ulong)(uint)(((float)iVar33 * 5.0 + (float)iVar41 * 5.0 + 5.0) * 0.5);
    goto LAB_01e74f44;
  case 1:
  case 2:
    local_148 = 0.0;
    local_150 = 0.0;
    fStack_14c = 0.0;
    lVar35 = *(long *)PTR_DAT_04bb26a8;
    lVar36 = *(long *)(lVar35 + 0x1469a0);
    if (lVar36 == lVar35 + 0x146998) {
      fVar56 = 0.0;
      fVar55 = 0.0;
      fVar52 = 0.0;
    }
    else {
      fVar56 = 0.0;
      fVar55 = 0.0;
      fVar52 = 0.0;
      fVar49 = 3.4028235e+38;
      lVar31 = lVar36 + -0x28;
      do {
        fVar51 = *(float *)(lVar36 + -0x28);
        fVar53 = *(float *)(lVar48 + 0x278) - fVar51;
        fVar50 = *(float *)(lVar31 + 8);
        fVar54 = *(float *)(lVar48 + 0x280) - fVar50;
        fVar53 = fVar54 * fVar54 + fVar53 * fVar53;
        if (fVar53 < fVar49) {
          fStack_14c = *(float *)(lVar31 + 4);
          fVar49 = fVar53;
          local_150 = fVar51;
          local_148 = fVar50;
          fVar55 = fStack_14c;
          fVar56 = fVar50;
          fVar52 = fVar51;
        }
        lVar36 = *(long *)(lVar36 + 8);
        lVar31 = lVar36 + -0x28;
      } while (lVar31 != lVar35 + 0x146970);
    }
    if (((fVar52 == 0.0) && (fVar55 == 0.0)) && (fVar56 == 0.0)) {
      return 0;
    }
    local_b8 = PTR_DAT_04bb2010 + 0x10;
    local_b0 = 0;
    uVar19 = FUN_021e7e60(&local_150,lVar34,&local_b8);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    local_1c8 = &DAT_ffffffff00000000;
    local_1a8 = 0x100000000;
    lVar48 = *(long *)PTR_DAT_04bb27c8;
    local_198 = 0xffffffff;
    local_1b8 = (undefined1 *)0x1;
    fVar55 = (float)(int)local_b0 * 5.0 + 2.5;
    local_12c = (float)local_b0._4_4_ * 5.0 + 2.5;
    uVar30 = (int)((float)(int)(fVar55 + -10.0) / 5.0) - (uint)(fVar55 + -10.0 < 0.0);
    uVar8 = (int)((float)(int)(local_12c + -10.0) / 5.0) - (uint)(local_12c + -10.0 < 0.0);
    iVar16 = uVar30 + 4;
    iVar41 = uVar8 + 4;
    uVar18 = uVar8;
    uVar15 = uVar30;
    do {
      if ((((int)uVar30 < (int)uVar15) && ((int)uVar15 < iVar16)) &&
         (((int)uVar8 < (int)uVar18 && ((int)uVar18 < iVar41)))) {
        if (((lVar48 != 0) && (-1 < (int)uVar15)) &&
           ((lVar34 = *(long *)(lVar48 + 0xa8), lVar34 != 0 &&
            (((-1 < (int)uVar18 && (uVar15 < *(uint *)(lVar34 + 0x38))) &&
             (uVar18 < *(uint *)(lVar34 + 0x3c))))))) {
          uVar25 = uVar15 + *(uint *)(lVar34 + 0x38) * uVar18;
          goto LAB_01e74b84;
        }
      }
      else {
        uVar19 = (ulong)local_1d8 >> 0x20;
        local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
        if (((((lVar48 != 0) && (lVar34 = *(long *)(lVar48 + 0xa8), lVar34 != 0)) &&
             ((-1 < (int)uVar15 &&
              ((uVar25 = uVar18 - 1, -1 < (int)uVar25 && (uVar15 < *(uint *)(lVar34 + 0x38))))))) &&
            (uVar25 < *(uint *)(lVar34 + 0x3c))) &&
           (((uVar25 = uVar15 + *(uint *)(lVar34 + 0x38) * uVar25, uVar25 < *(uint *)(lVar34 + 0x68)
             && (*(long *)(lVar34 + 0x70) != 0)) &&
            (local_1d8 = (undefined *)CONCAT44((int)uVar19,3),
            (*(uint *)(*(long *)(lVar34 + 0x70) + (long)(int)uVar25 * 4) >> 3 & 1) != 0)))) {
          return 0;
        }
        local_1d8._0_4_ = 1;
        if (((lVar48 != 0) && (lVar34 = *(long *)(lVar48 + 0xa8), lVar34 != 0)) &&
           ((((uVar25 = uVar15 + 1, -1 < (int)uVar25 &&
              ((-1 < (int)uVar18 && (uVar25 < *(uint *)(lVar34 + 0x38))))) &&
             (uVar18 < *(uint *)(lVar34 + 0x3c))) &&
            (((uVar25 = uVar25 + *(uint *)(lVar34 + 0x38) * uVar18,
              uVar25 < *(uint *)(lVar34 + 0x68) && (*(long *)(lVar34 + 0x70) != 0)) &&
             ((*(uint *)(*(long *)(lVar34 + 0x70) + (long)(int)uVar25 * 4) >> 3 & 1) != 0)))))) {
          return 0;
        }
        local_1d8._0_4_ = 2;
        if ((((lVar48 != 0) && (lVar34 = *(long *)(lVar48 + 0xa8), lVar34 != 0)) &&
            ((-1 < (int)uVar15 &&
             ((uVar25 = uVar18 + 1, -1 < (int)uVar25 && (uVar15 < *(uint *)(lVar34 + 0x38))))))) &&
           ((uVar25 < *(uint *)(lVar34 + 0x3c) &&
            (((uVar25 = uVar15 + *(uint *)(lVar34 + 0x38) * uVar25,
              uVar25 < *(uint *)(lVar34 + 0x68) && (*(long *)(lVar34 + 0x70) != 0)) &&
             ((*(uint *)(*(long *)(lVar34 + 0x70) + (long)(int)uVar25 * 4) >> 3 & 1) != 0)))))) {
          return 0;
        }
        local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,3);
        if ((((lVar48 != 0) && (lVar34 = *(long *)(lVar48 + 0xa8), lVar34 != 0)) &&
            ((uVar25 = uVar15 - 1, -1 < (int)uVar25 &&
             ((-1 < (int)uVar18 && (uVar25 < *(uint *)(lVar34 + 0x38))))))) &&
           (uVar18 < *(uint *)(lVar34 + 0x3c))) {
          uVar25 = uVar25 + *(uint *)(lVar34 + 0x38) * uVar18;
LAB_01e74b84:
          if ((uVar25 < *(uint *)(lVar34 + 0x68)) && (*(long *)(lVar34 + 0x70) != 0)) {
            local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,3);
            if ((*(uint *)(*(long *)(lVar34 + 0x70) + (long)(int)uVar25 * 4) >> 3 & 1) != 0) {
              return 0;
            }
          }
        }
      }
      if ((int)uVar15 < iVar16) {
        uVar15 = uVar15 + 1;
      }
      else {
        uVar18 = uVar18 + 1;
        uVar15 = uVar30;
      }
    } while ((uVar30 != uVar15) || (uVar8 + 5 != uVar18));
    lVar48 = *(long *)PTR_DAT_04bb3968;
    if (((int)uVar30 <= *(int *)(lVar48 + 0x2e18)) &&
       (((*(int *)(lVar48 + 0x2e28) <= iVar16 && ((int)uVar8 <= *(int *)(lVar48 + 0x2e1c))) &&
        (*(int *)(lVar48 + 0x2e2c) <= iVar41)))) {
      return 0;
    }
    local_138 = *param_2;
    local_108 = CONCAT44(uVar8,uVar30);
    local_f8 = CONCAT44(iVar41,iVar16);
    goto LAB_01e74e00;
  default:
    lVar36 = *(long *)PTR_DAT_04bb26a8;
    lVar34 = *(long *)(lVar36 + 0x146c80);
    if (lVar34 == lVar36 + 0x146c78) {
      fVar56 = 0.0;
      local_12c = 0.0;
      fVar55 = 0.0;
    }
    else {
      local_12c = 0.0;
      fVar56 = 0.0;
      fVar55 = 0.0;
      fVar52 = 3.4028235e+38;
      lVar35 = lVar34 + -0x30;
      do {
        fVar49 = *(float *)(lVar48 + 0x278) - *(float *)(lVar35 + 0x20);
        fVar51 = *(float *)(lVar48 + 0x280) - *(float *)(lVar35 + 0x28);
        fVar49 = fVar51 * fVar51 + fVar49 * fVar49;
        if (fVar49 < fVar52) {
          fVar56 = *(float *)(lVar35 + 0x24);
          fVar52 = fVar49;
          fVar55 = *(float *)(lVar35 + 0x20);
          local_12c = *(float *)(lVar35 + 0x28);
        }
        lVar34 = *(long *)(lVar34 + 8);
        lVar35 = lVar34 + -0x30;
      } while (lVar35 != lVar36 + 0x146c48);
    }
    lVar48 = *(long *)PTR_DAT_04bb3968;
    iVar16 = (int)((float)(int)(fVar55 + -12.5) / 5.0) - (uint)(fVar55 + -12.5 < 0.0);
    iVar41 = (int)((float)(int)(local_12c + -12.5) / 5.0) - (uint)(local_12c + -12.5 < 0.0);
    if ((((iVar41 + 5 < *(int *)(lVar48 + 0x2e1c) || *(int *)(lVar48 + 0x2e2c) < iVar41) ||
         iVar16 + 5 < *(int *)(lVar48 + 0x2e18)) || *(int *)(lVar48 + 0x2e28) < iVar16) &&
       (((fVar55 != 0.0 || (fVar56 != 0.0)) || (local_12c != 0.0)))) {
      uVar22 = *(undefined8 *)(param_1 + 8);
      local_134 = (undefined *)CONCAT44(fVar56,fVar55);
      fStack_128 = 0.0;
      local_124 = 0.0;
      fStack_120 = 0.0;
      local_108 = CONCAT44(iVar41,iVar16);
      local_f8 = CONCAT44(iVar41 + 5,iVar16 + 5);
      local_138 = uVar18;
      goto LAB_01e74f48;
    }
    break;
  case 5:
  case 6:
    fStack_14c = 0.0;
    local_148 = 0.0;
    lVar35 = *(long *)PTR_DAT_04bb26a8;
    lVar36 = *(long *)(lVar35 + 0x146b58);
    if (lVar36 == lVar35 + 0x146b50) {
      fVar56 = 0.0;
      fVar55 = 0.0;
      local_150 = 0.0;
    }
    else {
      fVar56 = 0.0;
      fVar55 = 0.0;
      local_150 = 0.0;
      fVar52 = 3.4028235e+38;
      lVar31 = lVar36 + -0x28;
      do {
        fVar51 = *(float *)(lVar48 + 0x278) - *(float *)(lVar31 + 4);
        fVar49 = *(float *)(lVar31 + 0xc);
        fVar50 = *(float *)(lVar48 + 0x280) - fVar49;
        fVar51 = fVar50 * fVar50 + fVar51 * fVar51;
        if (fVar51 < fVar52) {
          fStack_14c = *(float *)(lVar31 + 8);
          fVar52 = fVar51;
          local_148 = fVar49;
          fVar55 = fStack_14c;
          fVar56 = fVar49;
          local_150 = *(float *)(lVar31 + 4);
        }
        lVar36 = *(long *)(lVar36 + 8);
        lVar31 = lVar36 + -0x28;
      } while (lVar31 != lVar35 + 0x146b28);
    }
    if (((local_150 == 0.0) && (fVar55 == 0.0)) && (fVar56 == 0.0)) {
      return 0;
    }
    local_b8 = PTR_DAT_04bb2010 + 0x10;
    local_b0 = 0;
    uVar19 = FUN_021e7e60(&local_150,lVar34,&local_b8);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    iStack_154 = local_b0._4_4_ + -1;
    iVar16 = (int)local_b0 + -1;
    iStack_19c = local_b0._4_4_ + 1;
    local_180 = (int)local_b0 + 1;
    local_1b8 = (undefined1 *)CONCAT44(iStack_154,iVar16);
    fVar55 = (float)(int)local_b0 * 5.0 + 2.5;
    fVar56 = (float)local_b0._4_4_ * 5.0 + 2.5;
    local_1a0 = (int)((float)(int)(fVar55 + -10.0) / 5.0) - (uint)(fVar55 + -10.0 < 0.0);
    iStack_16c = (int)((float)(int)(fVar56 + -10.0) / 5.0) - (uint)(fVar56 + -10.0 < 0.0);
    local_188 = local_1a0 + 4;
    iStack_184 = iStack_16c + 4;
    local_1d0 = (undefined *)CONCAT44(iStack_16c,local_1a0);
    local_1c0 = CONCAT44(iStack_16c,local_1a0);
    local_1b0 = CONCAT44(iStack_16c,local_1a0);
    local_1c8 = (undefined1 *)CONCAT44(iStack_154,local_188);
    local_1a8 = CONCAT44(iStack_184,iVar16);
    local_198 = CONCAT44(iStack_184,iVar16);
    local_190 = local_1a0;
    iStack_18c = iStack_19c;
    iStack_17c = iStack_19c;
    local_178 = local_188;
    iStack_174 = iStack_184;
    local_170 = local_180;
    local_168 = local_188;
    iStack_164 = iStack_184;
    local_160 = local_180;
    iStack_15c = iStack_16c;
    local_158 = local_188;
    iVar16 = FUN_006f0400(local_150 - fVar55,local_148 - fVar56);
    uVar18 = iVar16 + 0x10000000U >> 0x1d;
    local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,uVar18);
    uVar19 = (ulong)uVar18;
    bVar13 = 7 < uVar18;
    piVar5 = (int *)((long)&local_1d0 + uVar19 * 4 * 4);
    if (bVar13) {
      piVar5 = (int *)&local_1d0;
    }
    piVar4 = (int *)((long)&local_1d0 + uVar19 * 0x10 + 4);
    piVar9 = (int *)(&local_1c8 + uVar19 * 2);
    if (bVar13) {
      piVar4 = (int *)((long)&local_1d0 + 4);
      piVar9 = (int *)&local_1c8;
    }
    iVar16 = *piVar5;
    piVar5 = (int *)((long)&local_1c8 + uVar19 * 0x10 + 4);
    if (bVar13) {
      piVar5 = (int *)((long)&local_1c8 + 4);
    }
    iVar38 = *piVar9;
    iVar33 = *piVar4;
    iVar17 = *piVar5;
    iVar41 = iVar16;
    if (iVar38 <= iVar16) {
      iVar41 = iVar38;
    }
    if (iVar16 <= iVar38) {
      iVar16 = iVar38;
    }
    iVar38 = iVar33;
    if (iVar17 <= iVar33) {
      iVar38 = iVar17;
    }
    if (iVar33 <= iVar17) {
      iVar33 = iVar17;
    }
    lVar48 = *(long *)PTR_DAT_04bb3968;
    if (((iVar41 <= *(int *)(lVar48 + 0x2e18)) && (*(int *)(lVar48 + 0x2e28) <= iVar16)) &&
       ((iVar38 <= *(int *)(lVar48 + 0x2e1c) && (*(int *)(lVar48 + 0x2e2c) <= iVar33)))) {
      return 0;
    }
    local_138 = *param_2;
    local_108 = CONCAT44(iVar38,iVar41);
    local_f8 = CONCAT44(iVar33,iVar16);
    local_12c = fVar56;
LAB_01e74e00:
    local_134 = (undefined *)(ulong)(uint)fVar55;
    fStack_120 = local_148;
    uVar22 = *(undefined8 *)(param_1 + 8);
    fStack_128 = local_150;
    local_124 = fStack_14c;
    goto LAB_01e74f48;
  case 7:
    local_138 = 7;
    lVar48 = *(long *)PTR_DAT_04bb5c90;
    local_134 = *(undefined **)(lVar48 + 0x40);
    local_12c = *(float *)(lVar48 + 0x48);
    iVar33 = *(int *)(lVar48 + 0x28);
    iVar38 = *(int *)(lVar48 + 0x38);
    iVar17 = *(int *)(lVar48 + 0x3c);
    iVar16 = *(int *)(lVar48 + 0x2c) + 5;
    iVar41 = iVar33;
    if (iVar38 <= iVar33) {
      iVar41 = iVar38;
    }
    if (iVar33 <= iVar38) {
      iVar33 = iVar38;
    }
    iVar38 = iVar16;
    if (iVar17 <= iVar16) {
      iVar38 = iVar17;
    }
    if (iVar16 <= iVar17) {
      iVar16 = iVar17;
    }
    local_108 = CONCAT44(iVar38,iVar41);
    local_f8 = CONCAT44(iVar16,iVar33);
    goto LAB_01e74f44;
  case 8:
    local_1c8 = (undefined1 *)((ulong)local_1c8 & 0xffffffff00000000);
    local_1d0 = (undefined *)0x0;
    uVar19 = FUN_021d92a0(&local_1d0,*(long *)(param_1 + 8) + 0x508);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    local_12c = (float)local_1c8 + 25.0;
    local_138 = *param_2;
    local_134 = local_1d0;
    iVar16 = (int)((float)(int)((float)local_1d0 + -22.5) / 5.0) -
             (uint)((float)local_1d0 + -22.5 < 0.0);
    iVar41 = (int)((float)(int)(local_12c + -22.5) / 5.0) - (uint)(local_12c + -22.5 < 0.0);
    local_108 = CONCAT44(iVar41,iVar16);
    local_f8 = CONCAT44(iVar41 + 9,iVar16 + 9);
    goto LAB_01e74f44;
  case 9:
    lVar36 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    if (lVar36 != 0) {
      local_1d0 = (undefined *)((ulong)local_1d0._4_4_ << 0x20);
      local_148 = 0.0;
      local_150 = 0.0;
      fStack_14c = 0.0;
      local_1d8 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_1d8);
      puVar2 = PTR_DAT_04bb37e0;
      local_208._0_4_ = 0;
      local_208._4_4_ = 0;
      local_210 = 0;
      fVar52 = 0.0;
      fVar56 = 0.0;
      fVar49 = *(float *)(lVar48 + 0x278) + 2.5;
      fVar51 = *(float *)(lVar48 + 0x280) + 2.5;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      fVar55 = 3.4028235e+38;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      fVar49 = (float)((int)((float)(int)fVar49 / 5.0) - (uint)(fVar49 < 0.0) & 0xffff) * 5.0 +
               -237.5;
      fVar51 = (float)((int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0) & 0xffff) * 5.0 +
               -237.5;
      iVar33 = (int)((float)(int)fVar49 / 5.0) - (uint)(fVar49 < 0.0);
      iVar41 = (int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0);
      iVar16 = iVar41 + 0x60;
      local_200._0_4_ = 0;
      iVar38 = iVar33;
      do {
        local_1b0 = 0;
        local_1c0 = 0;
        lVar35 = *(long *)(lVar36 + 0xd0);
        plVar20 = (long *)puVar2;
        if (lVar35 != 0) {
          lVar31 = lVar35 + 0x130 + (ulong)*(uint *)(lVar35 + 0x198) * 0x30;
          if (1 < *(uint *)(lVar35 + 0x198)) {
            lVar31 = lVar35 + 0x130;
          }
          iVar17 = *(int *)(lVar31 + 0x28);
          if (iVar17 <= iVar38 && iVar38 <= *(int *)(lVar31 + 8) + iVar17 + -1) {
            iVar39 = *(int *)(lVar31 + 0x2c);
            if ((iVar39 <= iVar41 && iVar41 <= *(int *)(lVar31 + 0xc) + iVar39 + -1) &&
               (uVar18 = (iVar41 - iVar39) + (iVar38 - iVar17) * *(int *)(lVar31 + 0xc),
               uVar18 < *(uint *)(lVar31 + 0x10))) {
              plVar20 = (long *)(*(long *)(lVar31 + 0x18) + (long)(int)uVar18 * 8);
            }
          }
        }
        local_1d0 = puVar12 + 0x10;
        local_1c8 = puVar3;
        local_1b8 = puVar3;
        if (*(int *)(param_1 + 0xb038) == 0xf) {
          iVar17 = FUN_0277d6c4(plVar20);
          if (iVar17 != 0x1002) {
            iVar17 = FUN_0277d6c4(plVar20);
            if (iVar17 != 0x789) {
              iVar17 = FUN_0277d6c4(plVar20);
              if (iVar17 != 0xad8) {
                iVar17 = FUN_0277d6c4(plVar20);
                if (iVar17 != 0xd90) goto LAB_01e751b0;
              }
            }
          }
        }
        else {
LAB_01e751b0:
          puVar11 = PTR_DAT_04bb43c0;
          lVar35 = *(long *)PTR_DAT_04bb43c0;
          uVar18 = FUN_0277d6c4(plVar20);
          if (*(long *)puVar11 == 0) {
LAB_01e75214:
            uVar19 = FUN_016d948c(plVar20);
            fVar49 = 0.0;
            fVar51 = 0.0;
            if ((uVar19 & 1) != 0) {
              uVar18 = iVar38 << 1 | 1;
              uVar30 = iVar41 << 1 | 1;
              local_1c0._0_4_ = iVar38 << 1;
              local_1c0._4_4_ = iVar41 << 1;
LAB_01e75244:
              local_1b0 = CONCAT44(uVar30,uVar18);
              fVar51 = ((float)(int)local_1c0 * 5.0 + (float)(int)uVar18 * 5.0 + 5.0) * 0.5;
              fVar49 = ((float)local_1c0._4_4_ * 5.0 + (float)(int)uVar30 * 5.0 + 5.0) * 0.5;
            }
          }
          else {
            lVar35 = *(long *)(lVar35 + 0x57e58);
            uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
            if ((((*(uint *)(lVar35 + 0x1d8) <= uVar18) ||
                 (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8) == 0)) ||
                (uVar19 = FUN_0277e158(plVar20), (uVar19 & 1) != 0)) ||
               (uVar19 = FUN_0277e024(plVar20), (uVar19 & 1) != 0)) goto LAB_01e75214;
            lVar35 = *(long *)puVar11;
            local_b0 = *plVar20;
            local_a8 = (uint *)0x0;
            local_b8 = puVar1;
            uVar18 = FUN_0277d6c4(&local_b0);
            if (*(long *)puVar11 == 0) {
LAB_01e753e0:
              if (local_a8 != (uint *)0x0) goto LAB_01e753e8;
LAB_01e7547c:
              uVar30 = 0;
            }
            else {
              lVar35 = *(long *)(lVar35 + 0x57e58);
              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
              if ((*(uint *)(lVar35 + 0x1d8) <= uVar18) ||
                 (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
              goto LAB_01e753e0;
              lVar35 = *(long *)PTR_DAT_04bc0428;
              uVar18 = FUN_0277d6c4(plVar20);
              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
              if ((*(uint *)(lVar35 + 0x1d8) <= uVar18) ||
                 (puVar32 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8),
                 puVar32 == (uint *)0x0)) goto LAB_01e753e0;
              local_a8 = puVar32;
LAB_01e753e8:
              uVar18 = *local_a8;
              uVar30 = 0;
              if ((uVar18 != 0) && (local_a8 != (uint *)(ulong)uVar18)) {
                puVar32 = (uint *)((long)local_a8 - (long)(ulong)uVar18);
                uVar30 = 0;
                if (*puVar32 != 0) {
                  uVar18 = puVar32[1];
                  if ((uVar18 != 0) && ((ulong)(ushort)puVar32[2] != 0)) {
                    lVar35 = 0xc;
                    if (*(char *)((long)puVar32 + 10) != '\0') {
                      lVar35 = 0x1c;
                    }
                    lVar35 = (long)puVar32 + lVar35 + (ulong)(ushort)puVar32[2] * 8;
                    if (lVar35 != 0) {
                      uVar30 = 0;
                      if ((ulong)uVar18 != 0) {
                        uVar30 = (uint)((ulong)((long)local_a8 - lVar35) / (ulong)uVar18);
                      }
                      if (*puVar32 <= uVar30) {
                        uVar30 = 0xffffffff;
                      }
                      if ((uVar30 < *(uint *)PTR_DAT_04bc0048) &&
                         (uVar30 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar30 * 2),
                         uVar30 < 0x52)) goto LAB_01e75480;
                    }
                  }
                  goto LAB_01e7547c;
                }
              }
            }
LAB_01e75480:
            local_1e0 = (undefined *)CONCAT44(local_1e0._4_4_,uVar30);
            fVar49 = 0.0;
            fVar51 = 0.0;
            if (uVar30 - 1 < 9) {
              FUN_01afb480(&local_b8,&local_1d0);
              local_1c0._0_4_ = (int)local_1c0 + iVar38;
              local_1c0._4_4_ = local_1c0._4_4_ + iVar41;
              uVar18 = (int)local_1b0 + iVar38;
              uVar30 = local_1b0._4_4_ + iVar41;
              goto LAB_01e75244;
            }
          }
          if (fVar51 == 0.0) {
            if (fVar49 == 0.0) goto LAB_01e75310;
          }
          fVar50 = *(float *)(lVar48 + 0x278) - fVar51;
          fVar53 = *(float *)(lVar48 + 0x280) - fVar49;
          fVar50 = fVar53 * fVar53 + fVar50 * fVar50;
          if (fVar50 < fVar55) {
            fStack_14c = 0.0;
            local_1d8 = (undefined *)*plVar20;
            local_200._0_4_ = (int)local_1c0;
            local_208._0_4_ = (int)local_1b0;
            local_208._4_4_ = local_1c0._4_4_;
            local_210 = local_1b0 >> 0x20;
            fVar55 = fVar50;
            local_150 = fVar51;
            local_148 = fVar49;
            fVar56 = fVar51;
            fVar52 = fVar49;
          }
        }
LAB_01e75310:
        if (iVar38 < iVar33 + 0x5f) {
          iVar38 = iVar38 + 1;
        }
        else {
          iVar41 = iVar41 + 1;
          iVar38 = iVar33;
        }
      } while ((iVar33 != iVar38) || (iVar16 != iVar41));
      if ((fVar56 != 0.0) || (fVar52 != 0.0)) {
        local_1d0 = PTR_DAT_04bb2010 + 0x10;
        local_1c8 = (undefined1 *)0x0;
        uVar19 = FUN_021e7e60(&local_150,lVar34,&local_1d0);
        if ((uVar19 & 1) != 0) {
          lVar48 = *(long *)PTR_DAT_04bb3968;
          iVar16 = (int)((float)(int)(local_150 + -12.5) / 5.0) - (uint)(local_150 + -12.5 < 0.0);
          iVar41 = (int)((float)(int)(local_148 + -12.5) / 5.0) - (uint)(local_148 + -12.5 < 0.0);
          if (((iVar16 + 5 < *(int *)(lVar48 + 0x2e18) || *(int *)(lVar48 + 0x2e28) < iVar16) ||
              iVar41 + 5 < *(int *)(lVar48 + 0x2e1c)) || *(int *)(lVar48 + 0x2e2c) < iVar41) {
            local_108 = CONCAT44(iVar41,iVar16);
            local_f8 = CONCAT44(iVar41 + 5,iVar16 + 5);
            fStack_128 = 0.0;
            local_124 = 0.0;
            fStack_120 = 0.0;
            local_138 = *param_2;
            local_12c = (float)local_1c8._4_4_ * 5.0 + 2.5;
            local_f0 = local_1d8;
            local_d8 = CONCAT44(local_208._4_4_,(undefined4)local_200);
            local_c8 = CONCAT44((undefined4)local_210,(undefined4)local_208);
            uVar22 = *(undefined8 *)(param_1 + 8);
            local_134 = (undefined *)(ulong)(uint)((float)(int)(float)local_1c8 * 5.0 + 2.5);
            goto LAB_01e74f48;
          }
        }
      }
    }
    break;
  case 10:
    local_1d0 = puVar12 + 0x10;
    local_1c0 = 0;
    fVar55 = *(float *)(lVar48 + 0x278);
    local_1c8 = PTR_DAT_04bb2010 + 0x10;
    fVar56 = *(float *)(lVar48 + 0x280);
    local_1b0 = 0;
    lVar34 = *(long *)PTR_DAT_04bb26a8;
    lVar48 = *(long *)(FUN_00146c4c + lVar34 + 4);
    if (lVar48 == lVar34 + 0x146c48) {
      fVar52 = 0.0;
      fVar51 = 0.0;
      fVar49 = 0.0;
    }
    else {
      fVar52 = 0.0;
      fVar51 = 0.0;
      fVar49 = 0.0;
      iVar16 = (int)((float)(int)fVar56 / 5.0) - (uint)(fVar56 < 0.0);
      iVar41 = (int)((float)(int)fVar55 / 5.0) - (uint)(fVar55 < 0.0);
      lVar36 = lVar48 + -0x20;
      fVar50 = 3.4028235e+38;
      do {
        if (*(long *)(lVar36 + 0x10) != lVar36 + 8) {
          lVar31 = (long)*(int *)(lVar36 + 0x1c);
          lVar35 = *(long *)(lVar36 + 0x10) - lVar31;
          do {
            if (*(char *)(lVar35 + 0xc) != '\x05') break;
            sVar6 = *(short *)(lVar35 + 8);
            iVar33 = sVar6 + 1;
            sVar7 = *(short *)(lVar35 + 10);
            iVar38 = sVar7 + 1;
            if (((iVar41 < sVar6) || (iVar33 < iVar41)) || (iVar16 < sVar7)) {
LAB_01e747a4:
              fVar53 = fVar55 - *(float *)(lVar35 + 0x18);
              fVar54 = fVar56 - *(float *)(lVar35 + 0x20);
              fVar53 = (float)(int)(fVar54 * fVar54 + fVar53 * fVar53);
              if (fVar53 < fVar50) {
                fVar51 = *(float *)(lVar35 + 0x1c);
                local_1c0 = CONCAT44((int)sVar7,(int)sVar6);
                local_1b0 = CONCAT44(iVar38,iVar33);
                fVar50 = fVar53;
                fVar52 = *(float *)(lVar35 + 0x18);
                fVar49 = *(float *)(lVar35 + 0x20);
              }
            }
            else if (iVar38 < iVar16) goto LAB_01e747a4;
            lVar35 = *(long *)(lVar35 + lVar31 + 8) - lVar31;
          } while (lVar35 != (lVar36 + 8) - lVar31);
        }
        lVar48 = *(long *)(lVar48 + 8);
        lVar36 = lVar48 + -0x20;
      } while (lVar36 != lVar34 + 0x146c28);
    }
    if (((fVar52 == 0.0) && (fVar51 == 0.0)) && (fVar49 == 0.0)) {
      return 0;
    }
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) {
      return 0;
    }
    iVar16 = (int)((float)(int)(fVar52 + -12.5) / 5.0) - (uint)(fVar52 + -12.5 < 0.0);
    iVar41 = (int)((float)(int)(fVar49 + -12.5) / 5.0) - (uint)(fVar49 + -12.5 < 0.0);
    lVar48 = *(long *)PTR_DAT_04bb3968;
    if (((*(int *)(lVar48 + 0x2e18) <= iVar16 + 5 && iVar16 <= *(int *)(lVar48 + 0x2e28)) &&
        *(int *)(lVar48 + 0x2e1c) <= iVar41 + 5) && iVar41 <= *(int *)(lVar48 + 0x2e2c)) {
      return 0;
    }
    local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
    local_1b8 = local_1c8;
    plVar20 = (long *)FUN_012e7488(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 200,&local_1c8);
    local_134 = (undefined *)CONCAT44(fVar51,fVar52);
    local_138 = *param_2;
    local_108 = CONCAT44(iVar41,iVar16);
    local_f8 = CONCAT44(iVar41 + 5,iVar16 + 5);
    local_f0 = (undefined *)*plVar20;
    local_c8 = local_1b0;
    local_d8 = local_1c0;
    local_12c = fVar49;
LAB_01e74f44:
    local_124 = 0.0;
    fStack_128 = 0.0;
    fStack_120 = 0.0;
    uVar22 = *(undefined8 *)(param_1 + 8);
LAB_01e74f48:
    local_c0 = 0;
    FUN_021dd4e0(&local_140,uVar22);
    return 1;
  case 0xc:
    local_1d0 = (undefined *)((ulong)local_1d0._4_4_ << 0x20);
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
      lVar36 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 200;
      local_1d8 = (undefined *)0x1;
      lVar35 = 0;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      bVar13 = false;
      do {
        uVar18 = *(uint *)((long)&local_1d8 + lVar35 * 4);
        local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,uVar18);
        local_148 = 0.0;
        local_150 = 0.0;
        fStack_14c = 0.0;
        lVar35 = lVar36 + (ulong)uVar18 * 0x10;
        if (7 < uVar18) {
          lVar35 = lVar36;
        }
        local_1e0 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_1e0);
        local_208 = 0;
        local_200 = 0;
        fVar55 = *(float *)(lVar48 + 0x278) + 2.5;
        fVar56 = *(float *)(lVar48 + 0x280) + 2.5;
        fVar55 = (float)((int)((float)(int)fVar55 / 5.0) - (uint)(fVar55 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        fVar56 = (float)((int)((float)(int)fVar56 / 5.0) - (uint)(fVar56 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        iVar33 = (int)((float)(int)fVar55 / 5.0) - (uint)(fVar55 < 0.0);
        iVar41 = (int)((float)(int)fVar56 / 5.0) - (uint)(fVar56 < 0.0);
        iVar16 = iVar41 + 0x60;
        fVar55 = 3.4028235e+38;
        iVar38 = iVar33;
        do {
          local_1c0 = 0;
          local_1b0 = 0;
          lVar31 = *(long *)(lVar35 + 8);
          plVar20 = (long *)puVar1;
          if (lVar31 != 0) {
            lVar47 = lVar31 + 0x130 + (ulong)*(uint *)(lVar31 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar31 + 0x198)) {
              lVar47 = lVar31 + 0x130;
            }
            iVar17 = *(int *)(lVar47 + 0x28);
            if (iVar17 <= iVar38 && iVar38 <= *(int *)(lVar47 + 8) + iVar17 + -1) {
              iVar39 = *(int *)(lVar47 + 0x2c);
              if ((iVar39 <= iVar41 && iVar41 <= *(int *)(lVar47 + 0xc) + iVar39 + -1) &&
                 (uVar18 = (iVar41 - iVar39) + (iVar38 - iVar17) * *(int *)(lVar47 + 0xc),
                 uVar18 < *(uint *)(lVar47 + 0x10))) {
                plVar20 = (long *)(*(long *)(lVar47 + 0x18) + (long)(int)uVar18 * 8);
              }
            }
          }
          local_1d0 = puVar12 + 0x10;
          local_1c8 = puVar3;
          local_1b8 = puVar3;
          uVar19 = FUN_0277e158(plVar20);
          fVar56 = 0.0;
          if ((uVar19 & 1) == 0) {
            uVar19 = FUN_0277e024(plVar20);
            puVar11 = PTR_DAT_04bb43c0;
            if ((uVar19 & 1) != 0) goto LAB_01e75890;
            lVar47 = *(long *)PTR_DAT_04bb43c0;
            uVar18 = FUN_0277d6c4(plVar20);
            lVar31 = *(long *)puVar11;
            if (lVar31 == 0) {
LAB_01e75a3c:
              fVar52 = 0.0;
              fVar56 = 0.0;
            }
            else {
              lVar47 = *(long *)(lVar47 + 0x57e58);
              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar47 + 0x1f8);
              if (*(uint *)(lVar47 + 0x1d8) <= uVar18) goto LAB_01e75a3c;
              if (*(long *)(*(long *)(lVar47 + 0x1e0) + (long)(int)uVar18 * 8) == 0) {
                fVar52 = 0.0;
                fVar56 = 0.0;
              }
              else {
                local_b0 = *plVar20;
                local_a8 = (uint *)0x0;
                local_b8 = puVar2;
                uVar18 = FUN_0277d6c4(&local_b0);
                if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_01e75a80:
                  local_a0 = 0xbc;
                  local_9c = 0x56;
LAB_01e75ad0:
                  local_9c = 0x56;
                  fVar52 = 0.0;
                  if (local_a0 != 0x56) goto LAB_01e75d84;
                }
                else {
                  lVar31 = *(long *)(lVar31 + 0x57e58);
                  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                  if ((*(uint *)(lVar31 + 0x1d8) <= uVar18) ||
                     (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
                  goto LAB_01e75a80;
                  lVar31 = *(long *)PTR_DAT_04bc0428;
                  uVar18 = FUN_0277d6c4(plVar20);
                  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                  if ((*(uint *)(lVar31 + 0x1d8) <= uVar18) ||
                     (puVar32 = *(uint **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8),
                     puVar32 == (uint *)0x0)) goto LAB_01e75a80;
                  local_a8 = puVar32;
                  local_a0 = 0;
                  local_9c = 0x6a;
                  uVar18 = *puVar32;
                  if ((uVar18 != 0) && (puVar32 != (uint *)(ulong)uVar18)) {
                    puVar37 = (uint *)((long)puVar32 - (long)(ulong)uVar18);
                    local_a0 = 0;
                    if (*puVar37 != 0) {
                      uVar18 = puVar37[1];
                      if ((uVar18 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
                        lVar31 = 0xc;
                        if (*(char *)((long)puVar37 + 10) != '\0') {
                          lVar31 = 0x1c;
                        }
                        lVar31 = (long)puVar37 + lVar31 + (ulong)(ushort)puVar37[2] * 8;
                        if (lVar31 != 0) {
                          uVar30 = 0;
                          if ((ulong)uVar18 != 0) {
                            uVar30 = (uint)((ulong)((long)puVar32 - lVar31) / (ulong)uVar18);
                          }
                          if (*puVar37 <= uVar30) {
                            uVar30 = 0xffffffff;
                          }
                          if ((uVar30 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_a0 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar30 * 2), local_a0 < 0xbd))
                          goto LAB_01e75af0;
                        }
                      }
                      local_a0 = 0;
                    }
                  }
LAB_01e75af0:
                  if (local_a0 != 0x6a) {
                    local_a0 = 0;
                    local_9c = 0x6b;
                    uVar18 = *puVar32;
                    if ((uVar18 != 0) && (puVar32 != (uint *)(ulong)uVar18)) {
                      puVar37 = (uint *)((long)puVar32 - (long)(ulong)uVar18);
                      local_a0 = 0;
                      if (*puVar37 != 0) {
                        uVar18 = puVar37[1];
                        if ((uVar18 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
                          lVar31 = 0xc;
                          if (*(char *)((long)puVar37 + 10) != '\0') {
                            lVar31 = 0x1c;
                          }
                          lVar31 = (long)puVar37 + lVar31 + (ulong)(ushort)puVar37[2] * 8;
                          if (lVar31 != 0) {
                            uVar30 = 0;
                            if ((ulong)uVar18 != 0) {
                              uVar30 = (uint)((ulong)((long)puVar32 - lVar31) / (ulong)uVar18);
                            }
                            if (*puVar37 <= uVar30) {
                              uVar30 = 0xffffffff;
                            }
                            if ((uVar30 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_a0 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar30 * 2), local_a0 < 0xbd))
                            goto LAB_01e75b98;
                          }
                        }
                        local_a0 = 0;
                      }
                    }
LAB_01e75b98:
                    if (local_a0 == 0x6b) goto LAB_01e75c54;
                    local_a0 = 0;
                    local_9c = 0x69;
                    uVar18 = *puVar32;
                    if ((uVar18 != 0) && (puVar32 != (uint *)(ulong)uVar18)) {
                      puVar37 = (uint *)((long)puVar32 - (long)(ulong)uVar18);
                      local_a0 = 0;
                      if (*puVar37 != 0) {
                        uVar18 = puVar37[1];
                        if ((uVar18 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
                          lVar31 = 0xc;
                          if (*(char *)((long)puVar37 + 10) != '\0') {
                            lVar31 = 0x1c;
                          }
                          lVar31 = (long)puVar37 + lVar31 + (ulong)(ushort)puVar37[2] * 8;
                          if (lVar31 != 0) {
                            uVar30 = 0;
                            if ((ulong)uVar18 != 0) {
                              uVar30 = (uint)((ulong)((long)puVar32 - lVar31) / (ulong)uVar18);
                            }
                            if (*puVar37 <= uVar30) {
                              uVar30 = 0xffffffff;
                            }
                            if ((uVar30 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_a0 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar30 * 2), local_a0 < 0xbd))
                            goto LAB_01e75c40;
                          }
                        }
                        local_a0 = 0;
                      }
                    }
LAB_01e75c40:
                    if (local_a0 == 0x69) goto LAB_01e75c54;
                    local_a0 = 0;
                    local_9c = 0x56;
                    uVar18 = *puVar32;
                    if ((uVar18 != 0) && (puVar32 != (uint *)(ulong)uVar18)) {
                      puVar37 = (uint *)((long)puVar32 - (long)(ulong)uVar18);
                      local_a0 = 0;
                      if (*puVar37 != 0) {
                        uVar18 = puVar37[1];
                        if ((uVar18 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
                          lVar31 = 0xc;
                          if (*(char *)((long)puVar37 + 10) != '\0') {
                            lVar31 = 0x1c;
                          }
                          lVar31 = (long)puVar37 + lVar31 + (ulong)(ushort)puVar37[2] * 8;
                          if (lVar31 != 0) {
                            uVar30 = 0;
                            if ((ulong)uVar18 != 0) {
                              uVar30 = (uint)((ulong)((long)puVar32 - lVar31) / (ulong)uVar18);
                            }
                            if (*puVar37 <= uVar30) {
                              uVar30 = 0xffffffff;
                            }
                            if ((uVar30 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_a0 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar30 * 2), local_a0 < 0xbd))
                            goto LAB_01e75ad0;
                          }
                        }
                        local_a0 = 0;
                      }
                    }
                    goto LAB_01e75ad0;
                  }
                }
LAB_01e75c54:
                puVar11 = PTR_DAT_04bb43c0;
                local_b8 = PTR_DAT_04bc0510 + 0x10;
                local_b0 = *plVar20;
                local_a8 = (uint *)0x0;
                lVar31 = *(long *)PTR_DAT_04bb43c0;
                uVar18 = FUN_0277d6c4(&local_b0);
                if (*(long *)puVar11 != 0) {
                  lVar31 = *(long *)(lVar31 + 0x57e58);
                  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                  if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                    lVar31 = *(long *)PTR_DAT_04bc0428;
                    uVar18 = FUN_0277d6c4(plVar20);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                    if (uVar18 < *(uint *)(lVar31 + 0x1d8)) {
                      puVar32 = *(uint **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8);
                      if (puVar32 != (uint *)0x0) {
                        local_a8 = puVar32;
                      }
                    }
                  }
                }
                FUN_01afb480(&local_b8,&local_1d0);
                local_1b0._0_4_ = (int)local_1b0 + iVar38;
                local_1b0._4_4_ = local_1b0._4_4_ + iVar41;
                local_1c0._0_4_ = (int)local_1c0 + iVar38;
                local_1c0._4_4_ = local_1c0._4_4_ + iVar41;
                fVar52 = ((float)(int)local_1c0 * 5.0 + (float)(int)local_1b0 * 5.0 + 5.0) * 0.5;
                fVar56 = ((float)local_1c0._4_4_ * 5.0 + (float)local_1b0._4_4_ * 5.0 + 5.0) * 0.5;
              }
            }
          }
          else {
LAB_01e75890:
            fVar52 = 0.0;
          }
LAB_01e75d84:
          if ((fVar52 != 0.0) || (fVar56 != 0.0)) {
            fVar49 = *(float *)(lVar48 + 0x278) - fVar52;
            fVar51 = *(float *)(lVar48 + 0x280) - fVar56;
            fVar49 = fVar51 * fVar51 + fVar49 * fVar49;
            if (fVar49 < fVar55) {
              local_150 = fVar52;
              fStack_14c = 0.0;
              local_148 = fVar56;
              local_1e0 = (undefined *)*plVar20;
              local_200 = CONCAT44((int)local_1c0,local_1c0._4_4_);
              local_208 = local_1b0;
              fVar55 = fVar49;
            }
          }
          if (iVar38 < iVar33 + 0x5f) {
            iVar38 = iVar38 + 1;
          }
          else {
            iVar41 = iVar41 + 1;
            iVar38 = iVar33;
          }
        } while ((iVar33 != iVar38) || (iVar16 != iVar41));
        if ((local_150 != 0.0) || ((fStack_14c != 0.0 || (local_148 != 0.0)))) {
          local_1d0 = PTR_DAT_04bb2010 + 0x10;
          local_1c8 = (undefined1 *)0x0;
          uVar19 = FUN_021e7e60(&local_150,lVar34,&local_1d0);
          if ((uVar19 & 1) != 0) {
            lVar35 = *(long *)PTR_DAT_04bb3968;
            fVar56 = (float)(int)(float)local_1c8 * 5.0 + 2.5;
            fVar55 = (float)local_1c8._4_4_ * 5.0 + 2.5;
            fVar52 = fVar55 + -12.5;
            iVar33 = (int)((float)(int)(fVar56 + -12.5) / 5.0) - (uint)(fVar56 + -12.5 < 0.0);
            iVar16 = iVar33 + 5;
            iVar38 = (int)((float)(int)fVar52 / 5.0) - (uint)(fVar52 < 0.0);
            iVar41 = iVar38 + 5;
            if (((iVar16 < *(int *)(lVar35 + 0x2e18) || *(int *)(lVar35 + 0x2e28) < iVar33) ||
                iVar41 < *(int *)(lVar35 + 0x2e1c)) || *(int *)(lVar35 + 0x2e2c) < iVar38)
            goto LAB_01e76804;
          }
        }
        lVar35 = 1;
        bVar10 = !bVar13;
        bVar13 = true;
      } while (bVar10);
    }
    break;
  case 0xd:
    local_1d0 = (undefined *)((ulong)local_1d0._4_4_ << 0x20);
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
      lVar36 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 200;
      local_1d8 = (undefined *)0x1;
      lVar35 = 0;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      bVar13 = false;
      do {
        uVar18 = *(uint *)((long)&local_1d8 + lVar35 * 4);
        local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,uVar18);
        local_148 = 0.0;
        local_150 = 0.0;
        fStack_14c = 0.0;
        lVar35 = lVar36 + (ulong)uVar18 * 0x10;
        if (7 < uVar18) {
          lVar35 = lVar36;
        }
        local_1e0 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_1e0);
        local_208 = 0;
        local_200 = 0;
        fVar55 = *(float *)(lVar48 + 0x278) + 2.5;
        fVar56 = *(float *)(lVar48 + 0x280) + 2.5;
        fVar55 = (float)((int)((float)(int)fVar55 / 5.0) - (uint)(fVar55 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        fVar56 = (float)((int)((float)(int)fVar56 / 5.0) - (uint)(fVar56 < 0.0) & 0xffff) * 5.0 +
                 -237.5;
        iVar33 = (int)((float)(int)fVar55 / 5.0) - (uint)(fVar55 < 0.0);
        iVar41 = (int)((float)(int)fVar56 / 5.0) - (uint)(fVar56 < 0.0);
        iVar16 = iVar41 + 0x60;
        fVar55 = 3.4028235e+38;
        iVar38 = iVar33;
        do {
          local_1c0 = 0;
          local_1b0 = 0;
          lVar31 = *(long *)(lVar35 + 8);
          plVar20 = (long *)puVar1;
          if (lVar31 != 0) {
            lVar47 = lVar31 + 0x130 + (ulong)*(uint *)(lVar31 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar31 + 0x198)) {
              lVar47 = lVar31 + 0x130;
            }
            iVar17 = *(int *)(lVar47 + 0x28);
            if (iVar17 <= iVar38 && iVar38 <= *(int *)(lVar47 + 8) + iVar17 + -1) {
              iVar39 = *(int *)(lVar47 + 0x2c);
              if ((iVar39 <= iVar41 && iVar41 <= *(int *)(lVar47 + 0xc) + iVar39 + -1) &&
                 (uVar18 = (iVar41 - iVar39) + (iVar38 - iVar17) * *(int *)(lVar47 + 0xc),
                 uVar18 < *(uint *)(lVar47 + 0x10))) {
                plVar20 = (long *)(*(long *)(lVar47 + 0x18) + (long)(int)uVar18 * 8);
              }
            }
          }
          local_1d0 = puVar12 + 0x10;
          local_1c8 = puVar3;
          local_1b8 = puVar3;
          uVar19 = FUN_0277e158(plVar20);
          fVar56 = 0.0;
          if ((uVar19 & 1) == 0) {
            uVar19 = FUN_0277e024(plVar20);
            puVar11 = PTR_DAT_04bb43c0;
            if ((uVar19 & 1) != 0) goto LAB_01e761d0;
            lVar31 = *(long *)PTR_DAT_04bb43c0;
            uVar18 = FUN_0277d6c4(plVar20);
            lVar47 = *(long *)puVar11;
            if (lVar47 == 0) {
LAB_01e76388:
              fVar52 = 0.0;
              fVar56 = 0.0;
            }
            else {
              lVar31 = *(long *)(lVar31 + 0x57e58);
              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
              if ((*(uint *)(lVar31 + 0x1d8) <= uVar18) ||
                 (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
              goto LAB_01e76388;
              local_b0 = *plVar20;
              local_a8 = (uint *)0x0;
              local_b8 = puVar2;
              uVar18 = FUN_0277d6c4(&local_b0);
              if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_01e76458:
                local_a0 = 0xbc;
                local_9c = 0xa7;
LAB_01e76490:
                local_9c = 0xa7;
                fVar52 = 0.0;
                if (local_a0 == 0xa7) goto LAB_01e764a8;
              }
              else {
                lVar31 = *(long *)(lVar47 + 0x57e58);
                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                if ((*(uint *)(lVar31 + 0x1d8) <= uVar18) ||
                   (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) == 0))
                goto LAB_01e76458;
                lVar31 = *(long *)PTR_DAT_04bc0428;
                uVar18 = FUN_0277d6c4(plVar20);
                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                if ((*(uint *)(lVar31 + 0x1d8) <= uVar18) ||
                   (puVar32 = *(uint **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8),
                   puVar32 == (uint *)0x0)) goto LAB_01e76458;
                local_a8 = puVar32;
                local_a0 = 0;
                local_9c = 0x70;
                uVar18 = *puVar32;
                if ((uVar18 != 0) && (puVar32 != (uint *)(ulong)uVar18)) {
                  puVar37 = (uint *)((long)puVar32 - (long)(ulong)uVar18);
                  local_a0 = 0;
                  if (*puVar37 != 0) {
                    uVar18 = puVar37[1];
                    if ((uVar18 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
                      lVar31 = 0xc;
                      if (*(char *)((long)puVar37 + 10) != '\0') {
                        lVar31 = 0x1c;
                      }
                      lVar31 = (long)puVar37 + lVar31 + (ulong)(ushort)puVar37[2] * 8;
                      if (lVar31 != 0) {
                        uVar30 = 0;
                        if ((ulong)uVar18 != 0) {
                          uVar30 = (uint)((ulong)((long)puVar32 - lVar31) / (ulong)uVar18);
                        }
                        if (*puVar37 <= uVar30) {
                          uVar30 = 0xffffffff;
                        }
                        if ((uVar30 < *(uint *)PTR_DAT_04bc00c8) &&
                           (local_a0 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar30 * 2), local_a0 < 0xbd))
                        goto LAB_01e765d4;
                      }
                    }
                    local_a0 = 0;
                  }
                }
LAB_01e765d4:
                if (local_a0 != 0x70) {
                  local_a0 = 0;
                  local_9c = 0xa5;
                  uVar18 = *puVar32;
                  if ((uVar18 != 0) && (puVar32 != (uint *)(ulong)uVar18)) {
                    puVar37 = (uint *)((long)puVar32 - (long)(ulong)uVar18);
                    local_a0 = 0;
                    if (*puVar37 != 0) {
                      uVar18 = puVar37[1];
                      if ((uVar18 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
                        lVar31 = 0xc;
                        if (*(char *)((long)puVar37 + 10) != '\0') {
                          lVar31 = 0x1c;
                        }
                        lVar31 = (long)puVar37 + lVar31 + (ulong)(ushort)puVar37[2] * 8;
                        if (lVar31 != 0) {
                          uVar30 = 0;
                          if ((ulong)uVar18 != 0) {
                            uVar30 = (uint)((ulong)((long)puVar32 - lVar31) / (ulong)uVar18);
                          }
                          if (*puVar37 <= uVar30) {
                            uVar30 = 0xffffffff;
                          }
                          if ((uVar30 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_a0 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar30 * 2), local_a0 < 0xbd))
                          goto LAB_01e7667c;
                        }
                      }
                      local_a0 = 0;
                    }
                  }
LAB_01e7667c:
                  if (local_a0 == 0xa5) goto LAB_01e764a8;
                  local_a0 = 0;
                  local_9c = 0xa7;
                  uVar18 = *puVar32;
                  if ((uVar18 != 0) && (puVar32 != (uint *)(ulong)uVar18)) {
                    puVar37 = (uint *)((long)puVar32 - (long)(ulong)uVar18);
                    local_a0 = 0;
                    if (*puVar37 != 0) {
                      uVar18 = puVar37[1];
                      if ((uVar18 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
                        lVar31 = 0xc;
                        if (*(char *)((long)puVar37 + 10) != '\0') {
                          lVar31 = 0x1c;
                        }
                        lVar31 = (long)puVar37 + lVar31 + (ulong)(ushort)puVar37[2] * 8;
                        if (lVar31 != 0) {
                          uVar30 = 0;
                          if ((ulong)uVar18 != 0) {
                            uVar30 = (uint)((ulong)((long)puVar32 - lVar31) / (ulong)uVar18);
                          }
                          if (*puVar37 <= uVar30) {
                            uVar30 = 0xffffffff;
                          }
                          if ((uVar30 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_a0 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar30 * 2), local_a0 < 0xbd))
                          goto LAB_01e76490;
                        }
                      }
                      local_a0 = 0;
                    }
                  }
                  goto LAB_01e76490;
                }
LAB_01e764a8:
                puVar11 = PTR_DAT_04bb43c0;
                local_b8 = PTR_DAT_04bc0510 + 0x10;
                local_b0 = *plVar20;
                local_a8 = (uint *)0x0;
                lVar31 = *(long *)PTR_DAT_04bb43c0;
                uVar18 = FUN_0277d6c4(&local_b0);
                if (*(long *)puVar11 != 0) {
                  lVar31 = *(long *)(lVar31 + 0x57e58);
                  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                  if ((uVar18 < *(uint *)(lVar31 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                    lVar31 = *(long *)PTR_DAT_04bc0428;
                    uVar18 = FUN_0277d6c4(plVar20);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                    if (uVar18 < *(uint *)(lVar31 + 0x1d8)) {
                      puVar32 = *(uint **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar18 * 8);
                      if (puVar32 != (uint *)0x0) {
                        local_a8 = puVar32;
                      }
                    }
                  }
                }
                FUN_01afb480(&local_b8,&local_1d0);
                local_1b0._0_4_ = (int)local_1b0 + iVar38;
                local_1b0._4_4_ = local_1b0._4_4_ + iVar41;
                local_1c0._0_4_ = (int)local_1c0 + iVar38;
                local_1c0._4_4_ = local_1c0._4_4_ + iVar41;
                fVar52 = ((float)(int)local_1c0 * 5.0 + (float)(int)local_1b0 * 5.0 + 5.0) * 0.5;
                fVar56 = ((float)local_1c0._4_4_ * 5.0 + (float)local_1b0._4_4_ * 5.0 + 5.0) * 0.5;
              }
            }
          }
          else {
LAB_01e761d0:
            fVar52 = 0.0;
          }
          if ((fVar52 != 0.0) || (fVar56 != 0.0)) {
            fVar49 = *(float *)(lVar48 + 0x278) - fVar52;
            fVar51 = *(float *)(lVar48 + 0x280) - fVar56;
            fVar49 = fVar51 * fVar51 + fVar49 * fVar49;
            if (fVar49 < fVar55) {
              local_150 = fVar52;
              fStack_14c = 0.0;
              local_148 = fVar56;
              local_1e0 = (undefined *)*plVar20;
              local_200 = CONCAT44((int)local_1c0,local_1c0._4_4_);
              local_208 = local_1b0;
              fVar55 = fVar49;
            }
          }
          if (iVar38 < iVar33 + 0x5f) {
            iVar38 = iVar38 + 1;
          }
          else {
            iVar41 = iVar41 + 1;
            iVar38 = iVar33;
          }
        } while ((iVar33 != iVar38) || (iVar16 != iVar41));
        if ((local_150 != 0.0) || ((fStack_14c != 0.0 || (local_148 != 0.0)))) {
          local_1d0 = PTR_DAT_04bb2010 + 0x10;
          local_1c8 = (undefined1 *)0x0;
          uVar19 = FUN_021e7e60(&local_150,lVar34,&local_1d0);
          if ((uVar19 & 1) != 0) {
            lVar35 = *(long *)PTR_DAT_04bb3968;
            fVar56 = (float)(int)(float)local_1c8 * 5.0 + 2.5;
            fVar55 = (float)local_1c8._4_4_ * 5.0 + 2.5;
            fVar52 = fVar55 + -12.5;
            iVar33 = (int)((float)(int)(fVar56 + -12.5) / 5.0) - (uint)(fVar56 + -12.5 < 0.0);
            iVar16 = iVar33 + 5;
            iVar38 = (int)((float)(int)fVar52 / 5.0) - (uint)(fVar52 < 0.0);
            iVar41 = iVar38 + 5;
            if (((iVar16 < *(int *)(lVar35 + 0x2e18) || *(int *)(lVar35 + 0x2e28) < iVar33) ||
                iVar41 < *(int *)(lVar35 + 0x2e1c)) || *(int *)(lVar35 + 0x2e2c) < iVar38)
            goto LAB_01e76804;
          }
        }
        lVar35 = 1;
        bVar10 = !bVar13;
        bVar13 = true;
      } while (bVar10);
    }
    break;
  case 0xe:
    local_138 = 0xe;
    FUN_021dd4e0(&local_140,*(undefined8 *)(param_1 + 8));
  }
  return 0;
LAB_01e76804:
  local_12c = fVar55;
  local_f8 = CONCAT44(iVar41,iVar16);
  local_108 = CONCAT44(iVar38,iVar33);
  local_134 = (undefined *)(ulong)(uint)fVar56;
  fStack_128 = 0.0;
  local_124 = 0.0;
  fStack_120 = 0.0;
  local_f0 = local_1e0;
  local_d8 = CONCAT44((undefined4)local_200,local_200._4_4_);
  uVar22 = *(undefined8 *)(param_1 + 8);
  local_c8 = local_208;
  local_138 = *param_2;
  goto LAB_01e74f48;
}

