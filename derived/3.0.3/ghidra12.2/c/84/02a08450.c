
/* WARNING: Removing unreachable block (ram,0x02a08530) */
/* WARNING: Removing unreachable block (ram,0x02a088c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02a08450(undefined1 (*param_1) [12],float *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  bool bVar30;
  long lVar31;
  long *plVar32;
  undefined8 *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined1 auVar46 [16];
  undefined8 uVar45;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  
  if (*(long *)(param_1[2] + 8) == 0) {
    return 0;
  }
  pfVar5 = param_2 + 8;
  fVar37 = *pfVar5;
  fVar42 = param_2[9];
  uVar45 = *(undefined8 *)pfVar5;
  uVar44 = *(undefined8 *)pfVar5;
  uVar26 = *(undefined8 *)pfVar5;
  uVar25 = *(undefined8 *)*param_1;
  bVar30 = param_1[0x1b7][10] != '\0';
  puVar33 = *(undefined8 **)(param_2 + 6);
  uVar20 = *(undefined8 *)(*param_1 + 8);
  auVar29 = *param_1;
  auVar28 = *param_1;
  auVar27 = *param_1;
  fVar56 = *param_2;
  fVar54 = param_2[1];
  lVar31 = *(long *)(param_1[3] + 4);
  if (*(long *)(param_2 + 2) != 0 && bVar30) {
    lVar31 = *(long *)(param_2 + 2);
  }
  plVar3 = *(long **)param_1[4];
  if (*(long **)(param_2 + 4) != (long *)0x0 && bVar30) {
    plVar3 = *(long **)(param_2 + 4);
  }
  fVar43 = param_2[10];
  uVar21 = *(undefined8 *)(param_1[1] + 4);
  fVar38 = *(float *)param_1[2];
  lVar7 = *(long *)(lVar31 + 0x88);
  lVar8 = *(long *)(lVar31 + 0x90);
  cVar9 = *(char *)(lVar31 + 0x98);
  plVar32 = *(long **)(lVar31 + 0x60);
  local_b8 = 0.0;
  fStack_b4 = 0.0;
  local_b0 = 0.0;
  local_ac = 0.0;
  local_c0 = 0;
  FUN_02a1e4c0(fVar37,*(undefined8 *)(DAT_055f6860 + 0xb4510),&local_c0);
  fVar55 = fVar54 + local_c0._4_4_;
  local_b8 = fVar54 + local_b8;
  fStack_b4 = fVar54 + fStack_b4;
  local_b0 = fVar54 + local_b0;
  local_ac = fVar54 + local_ac;
  local_c0 = CONCAT44(fVar55,fVar54 + (float)local_c0);
  if ((param_1[0x1b7][9] != '\0') && (*(float *)(param_1[0x1b5] + 8) <= fVar55 * fVar55)) {
    return 0;
  }
  fVar34 = 1.0;
  fVar54 = (float)uVar25;
  fVar35 = (float)((ulong)uVar25 >> 0x20);
  fVar36 = (float)((ulong)uVar20 >> 0x20);
  auVar46._0_4_ = fVar54 * (float)_DAT_04101dc0;
  auVar46._4_4_ = fVar35 * (float)((ulong)_DAT_04101dc0 >> 0x20);
  auVar46._8_4_ = (float)uVar20 * (float)_UNK_04101dc8;
  auVar46._12_4_ = fVar36 * (float)((ulong)_UNK_04101dc8 >> 0x20);
  uVar53 = a64_TBL(ZEXT816(0),auVar46,DAT_04101618);
  uVar59 = a64_TBL(ZEXT816(0),auVar46,DAT_04101578);
  uVar60 = a64_TBL(ZEXT816(0),auVar46,DAT_04101598);
  auVar22._8_4_ = fVar43;
  auVar22._0_8_ = uVar26;
  auVar22._12_4_ = 0;
  uVar50 = a64_TBL(ZEXT816(0),auVar22,DAT_04101598);
  auVar23._8_4_ = fVar43;
  auVar23._0_8_ = uVar44;
  auVar23._12_4_ = 0;
  uVar20 = a64_TBL(ZEXT816(0),auVar23,DAT_04101618);
  fVar39 = (float)((ulong)uVar20 >> 0x20);
  fVar51 = (float)((ulong)uVar50 >> 0x20);
  fVar57 = (float)_DAT_04102a00;
  fVar52 = (float)((ulong)_DAT_04102a00 >> 0x20);
  fVar48 = (float)_UNK_04102a08;
  fVar49 = (float)((ulong)_UNK_04102a08 >> 0x20);
  auVar24._8_4_ = fVar43;
  auVar24._0_8_ = uVar45;
  auVar24._12_4_ = 0;
  uVar25 = a64_TBL(ZEXT816(0),auVar24,DAT_04101580);
  fVar58 = (float)((ulong)uVar25 >> 0x20);
  uVar26 = a64_TBL(ZEXT816(0),auVar46,DAT_04101580);
  uVar44 = a64_TBL(ZEXT816(0),auVar46,DAT_041015b8);
  auVar47._12_4_ = fVar36;
  auVar47._0_12_ = auVar27;
  uVar45 = a64_TBL(ZEXT816(0),auVar47,DAT_04101618);
  fVar43 = (auVar46._0_4_ * (float)uVar20 + fVar57 * fVar37 * (float)uVar53 +
           fVar57 * (float)uVar25 * (float)uVar60) - (float)uVar26 * (float)uVar50;
  fVar40 = (auVar46._4_4_ * fVar39 + fVar52 * fVar42 * (float)((ulong)uVar53 >> 0x20) +
           fVar52 * fVar58 * (float)((ulong)uVar60 >> 0x20)) -
           (float)((ulong)uVar26 >> 0x20) * fVar51;
  fVar41 = (auVar46._8_4_ * (float)uVar20 + fVar48 * (float)uVar50 * (float)uVar59 +
           fVar48 * fVar37 * auVar46._4_4_) - (float)uVar44 * (float)uVar25;
  fVar37 = (auVar46._12_4_ * fVar39 + fVar49 * fVar51 * (float)((ulong)uVar59 >> 0x20) +
           fVar49 * fVar42 * auVar46._4_4_) - (float)((ulong)uVar44 >> 0x20) * fVar58;
  auVar11._12_4_ = fVar36;
  auVar11._0_12_ = auVar28;
  uVar44 = a64_TBL(ZEXT816(0),auVar11,DAT_04101598);
  auVar12._12_4_ = fVar36;
  auVar12._0_12_ = auVar29;
  uVar20 = a64_TBL(ZEXT816(0),auVar12,DAT_04101580);
  auVar13._4_4_ = fVar40;
  auVar13._0_4_ = fVar43;
  auVar13._8_4_ = fVar41;
  auVar13._12_4_ = fVar37;
  uVar50 = a64_TBL(ZEXT816(0),auVar13,DAT_04101618);
  auVar14._4_4_ = fVar40;
  auVar14._0_4_ = fVar43;
  auVar14._8_4_ = fVar41;
  auVar14._12_4_ = fVar37;
  uVar59 = a64_TBL(ZEXT816(0),auVar14,DAT_04101578);
  auVar15._4_4_ = fVar40;
  auVar15._0_4_ = fVar43;
  auVar15._8_4_ = fVar41;
  auVar15._12_4_ = fVar37;
  uVar53 = a64_TBL(ZEXT816(0),auVar15,DAT_04101598);
  auVar16._4_4_ = fVar40;
  auVar16._0_4_ = fVar43;
  auVar16._8_4_ = fVar41;
  auVar16._12_4_ = fVar37;
  uVar25 = a64_TBL(ZEXT816(0),auVar16,DAT_04101580);
  auVar17._4_4_ = fVar40;
  auVar17._0_4_ = fVar43;
  auVar17._8_4_ = fVar41;
  auVar17._12_4_ = fVar37;
  uVar26 = a64_TBL(ZEXT816(0),auVar17,DAT_041015b8);
  fVar37 = (float)uVar21 +
           (((float)uVar45 * fVar43 + fVar57 * fVar54 * (float)uVar50 +
            fVar57 * (float)uVar20 * (float)uVar53) - (float)uVar25 * (float)uVar44);
  fVar42 = (float)((ulong)uVar21 >> 0x20) +
           (((float)((ulong)uVar45 >> 0x20) * fVar40 +
             fVar52 * fVar35 * (float)((ulong)uVar50 >> 0x20) +
            fVar52 * (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar53 >> 0x20)) -
           (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar44 >> 0x20));
  fVar38 = fVar38 + (((float)uVar45 * fVar41 + fVar48 * (float)uVar44 * (float)uVar59 +
                     fVar48 * fVar54 * fVar40) - (float)uVar26 * (float)uVar20);
  if ((cVar9 != '\0' || param_1[5][4] != '\0') && (*(long *)(param_1[2] + 8) != 0)) {
    local_d0 = CONCAT44(fVar42,fVar37);
    local_c8 = fVar38;
    fVar34 = (float)FUN_03baa634(*(long *)(param_1[2] + 8) + 0x60,&local_d0);
  }
  fVar55 = fVar55 * fVar34;
  fVar54 = fVar55 / 10.0;
  if (plVar32 == (long *)0x0) {
    fVar43 = 1.0;
    if ((lVar8 == 0) || (fVar35 = *(float *)(lVar8 + 0x50), fVar35 <= 0.0)) {
LAB_02a087e4:
      fVar36 = 1.0;
    }
    else {
      fVar36 = 0.0;
      if (fVar54 < fVar35) {
        fVar39 = *(float *)(lVar8 + 0x54);
        if (fVar39 <= 0.0) goto LAB_02a087e4;
        fVar36 = 1.0;
        if (fVar35 - fVar39 < fVar54) {
          fVar36 = 1.0 - (fVar54 - (fVar35 - fVar39)) / fVar39;
          fVar36 = fVar36 * fVar36;
        }
      }
    }
  }
  else {
    fVar43 = (float)(**(code **)(*plVar32 + 0x28))(fVar54,plVar32);
    fVar35 = (float)(**(code **)(*plVar32 + 0x30))(plVar32);
    if (lVar8 == 0) {
      fVar36 = 1.0;
      if ((0.0 < fVar35) && (fVar35 <= fVar54)) {
        fVar36 = 0.0;
      }
    }
    else if (fVar35 == 0.0) {
      fVar35 = *(float *)(lVar8 + 0x50);
      fVar36 = 1.0;
      if (0.0 < fVar35) {
        if (fVar35 <= fVar54) goto LAB_02a08d38;
        fVar39 = *(float *)(lVar8 + 0x54);
        if ((0.0 < fVar39) && (fVar35 = fVar35 - fVar39, fVar35 < fVar54)) goto LAB_02a08848;
      }
    }
    else {
      fVar39 = *(float *)(lVar8 + 0x54);
      fVar36 = 1.0;
      fVar35 = fVar35 + fVar39;
      if (0.0 < fVar35) {
        if (fVar35 <= fVar54) {
LAB_02a08d38:
          fVar36 = 0.0;
        }
        else if ((0.0 < fVar39) && (fVar35 = fVar35 - fVar39, fVar35 < fVar54)) {
LAB_02a08848:
          fVar36 = 1.0 - (fVar54 - fVar35) / fVar39;
          fVar36 = fVar36 * fVar36;
        }
      }
    }
  }
  local_d8 = -1.0;
  local_d4 = -1.0;
  local_e0 = 0;
  local_e4 = 0.5;
  if (param_1[0x1b7][10] == '\0') {
    local_d0 = CONCAT44(local_d0._4_4_,2);
    if (*(long **)(lVar31 + 0x70) == (long *)0x0) {
      fVar35 = -1.0;
      fVar54 = 0.0;
    }
    else {
      fVar35 = local_b8 / 10.0;
      fVar54 = (float)(**(code **)(**(long **)(lVar31 + 0x70) + 0x28))(fVar35);
    }
    fVar39 = fVar54;
    if (plVar3 != (long *)0x0) {
      fVar39 = (float)(**(code **)(*plVar3 + 0x28))(fVar35,plVar3);
    }
  }
  else {
    FUN_02a08108((long)&local_e0 + 4,&local_d4,&local_d8,&local_e0,&local_e4,lVar31,plVar3,&local_c0
                );
    fVar39 = local_d8;
    fVar54 = local_d4;
  }
  local_d4 = fVar54;
  local_d8 = fVar39;
  fVar54 = fVar36 * fVar56 * fVar43;
  if ((puVar33 == (undefined8 *)0x0) || (fVar54 = fVar36 * fVar56 * fVar43, lVar7 == 0))
  goto LAB_02a08b20;
  fVar35 = 0.0;
  lVar31 = *(long *)(param_1[2] + 8);
  fVar40 = *(float *)(lVar7 + 0x54) * 0.017453292;
  fVar39 = *(float *)(lVar7 + 0x50) * 0.017453292;
  fVar36 = (float)((ulong)puVar33[1] >> 0x20);
  fVar41 = (float)((ulong)puVar33[3] >> 0x20);
  fVar43 = 0.0;
  if (0.0 <= fVar40) {
    fVar43 = fVar40;
  }
  fVar58 = 0.0;
  fVar40 = 3.1415927;
  if (fVar43 <= 3.1415927) {
    fVar40 = fVar43;
  }
  fVar43 = 0.0;
  if (0.0 <= fVar39) {
    fVar43 = fVar39;
  }
  fVar51 = (float)((ulong)puVar33[5] >> 0x20);
  fVar39 = fVar40;
  if (fVar43 <= fVar40) {
    fVar39 = fVar43;
  }
  fVar52 = 0.0;
  fVar43 = (fVar36 + (float)puVar33[1] +
                     (float)((ulong)*puVar33 >> 0x20) * 0.0 + (float)*puVar33 * 0.0) - fVar36;
  fVar57 = 0.0;
  if (lVar31 != 0) {
    bVar30 = *(char *)(lVar31 + 0x1a8) != '\0';
    lVar8 = 0x134;
    if (bVar30) {
      lVar8 = 0x1ac;
    }
    lVar4 = 0x144;
    if (bVar30) {
      lVar4 = 0x1b0;
    }
    fVar58 = *(float *)(lVar31 + lVar8);
    lVar8 = 0x154;
    if (bVar30) {
      lVar8 = 0x1b4;
    }
    fVar57 = *(float *)(lVar31 + lVar4);
    fVar52 = *(float *)(lVar31 + lVar8);
  }
  fVar48 = (fVar41 + (float)puVar33[3] +
                     (float)((ulong)puVar33[2] >> 0x20) * 0.0 + (float)puVar33[2] * 0.0) - fVar41;
  fVar49 = (fVar51 + (float)puVar33[5] +
                     (float)((ulong)puVar33[4] >> 0x20) * 0.0 + (float)puVar33[4] * 0.0) - fVar51;
  if (((fVar43 != 0.0) || (fVar48 != 0.0)) || (fVar49 != 0.0)) {
    fVar58 = fVar58 - fVar36;
    fVar57 = fVar57 - fVar41;
    fVar52 = fVar52 - fVar51;
    if (((fVar58 != 0.0) || (fVar57 != 0.0)) || (fVar52 != 0.0)) {
      fVar35 = -(fVar49 * fVar57) + fVar52 * fVar48;
      fVar41 = -(fVar43 * fVar52) + fVar58 * fVar49;
      fVar36 = -(fVar48 * fVar58) + fVar57 * fVar43;
      fVar35 = atan2f(SQRT(fVar41 * fVar41 + fVar35 * fVar35 + fVar36 * fVar36),
                      fVar48 * fVar57 + fVar58 * fVar43 + fVar52 * fVar49);
    }
  }
  if (fVar35 <= fVar39) {
LAB_02a08ae8:
    fVar35 = 0.0;
  }
  else if (fVar35 <= fVar40) {
    fVar43 = (fVar35 - fVar39) / (fVar40 - fVar39);
    if (fVar43 <= 0.0) goto LAB_02a08ae8;
    fVar35 = *(float *)(lVar7 + 0x5c);
    fVar36 = 1.0 - fVar43 * (1.0 - *(float *)(lVar7 + 0x58));
    if (1.0 <= fVar43) {
      fVar36 = *(float *)(lVar7 + 0x58);
    }
    fVar54 = fVar54 * fVar36;
    if (1.0 > fVar43) {
      fVar35 = fVar43 * fVar35;
    }
  }
  else {
    fVar35 = *(float *)(lVar7 + 0x5c);
    fVar54 = fVar54 * *(float *)(lVar7 + 0x58);
  }
  fVar43 = 1.0;
  if (fVar35 <= 1.0) {
    fVar43 = fVar35;
  }
  fVar36 = 0.0;
  if (0.0 <= fVar35) {
    fVar36 = fVar43;
  }
  fVar36 = fVar36 + (1.0 - fVar36) * local_d4;
  fVar43 = 1.0;
  if (fVar36 <= 1.0) {
    fVar43 = fVar36;
  }
  local_d4 = 0.0;
  if (0.0 <= fVar36) {
    local_d4 = fVar43;
  }
LAB_02a08b20:
  *(float *)param_1[6] = fVar54 + *(float *)param_1[6];
  fVar43 = atan2f(fVar38,fVar37);
  uVar1 = (int)(long)(fVar43 * 6.8356525e+08) + 0x40000000;
  uVar2 = (uVar1 & *(uint *)(param_1[0x1b6] + 8)) >> ((ulong)*(uint *)param_1[0x1b7] & 0x3f);
  pfVar5 = (float *)((long)(param_1[10] + 8) + (ulong)uVar2 * 10 * 4);
  if (0x7f < uVar2) {
    pfVar5 = (float *)(param_1[10] + 8);
  }
  puVar6 = (uint *)((long)(param_1[9] + 4) + (ulong)(uVar2 >> 5) * 4);
  if (0x7f < uVar2) {
    puVar6 = (uint *)(param_1[9] + 4);
  }
  uVar10 = 1 << (ulong)(uVar2 & 0x1f);
  uVar2 = uVar10 & *puVar6;
  if (((uVar2 == 0) || (pfVar5[1] < fVar54)) ||
     ((pfVar5[1] == fVar54 &&
      ((local_d4 < pfVar5[3] || ((local_d4 <= pfVar5[3] && (fVar55 < pfVar5[2])))))))) {
    pfVar5[2] = fVar55;
    pfVar5[3] = local_d4;
    fVar37 = fVar37 * fVar37;
    fVar43 = fVar42 * fVar42;
    pfVar5[4] = local_d8;
    auVar18._4_4_ = fVar43;
    auVar18._0_4_ = fVar37;
    auVar18._8_4_ = fVar38 * fVar38;
    auVar18._12_4_ = 0;
    auVar19._4_4_ = fVar43;
    auVar19._0_4_ = fVar37;
    auVar19._8_4_ = fVar38 * fVar38;
    auVar19._12_4_ = 0;
    auVar47 = NEON_ext(auVar18,auVar19,8,1);
    *pfVar5 = (float)uVar1 * 1.4629181e-09;
    pfVar5[1] = fVar54;
    if (param_1[0x1b7][10] != '\0') {
      pfVar5[5] = local_e0._4_4_;
      pfVar5[6] = (float)local_e0;
      pfVar5[7] = local_e4;
    }
    pfVar5[8] = fVar34 * local_b0;
    pfVar5[9] = (auVar47._0_4_ + fVar37 + auVar47._4_4_ + fVar43) - fVar42 * fVar42;
    if (uVar2 == 0) {
      *(int *)param_1[0x1b6] = *(int *)param_1[0x1b6] + 1;
      *puVar6 = *puVar6 | uVar10;
    }
  }
  if (fVar54 <= *(float *)(param_1[5] + 8)) {
    if (*(float *)(param_1[5] + 8) != fVar54) {
      return 1;
    }
    if (fVar55 < *(float *)(param_1[6] + 4)) {
      *(float *)(param_1[5] + 8) = fVar54;
      *(float *)(param_1[8] + 4) = param_2[0xb];
      *(float *)(param_1[8] + 8) = param_2[0xc];
      fVar37 = param_2[0xd];
      *(float *)param_1[8] = fVar56;
      *(float *)(param_1[6] + 4) = fVar55;
      *(float *)param_1[9] = fVar37;
    }
    fVar37 = *(float *)param_1[7];
    fVar42 = *(float *)(param_1[6] + 8);
    if (local_b8 <= *(float *)(param_1[6] + 8)) {
      fVar42 = local_b8;
    }
    *(float *)(param_1[6] + 8) = fVar42;
    if (fStack_b4 <= fVar37) {
      fVar37 = fStack_b4;
    }
    *(float *)param_1[7] = fVar37;
    fVar37 = *(float *)(param_1[7] + 8);
    fVar42 = *(float *)(param_1[7] + 4);
    if (local_b0 <= *(float *)(param_1[7] + 4)) {
      fVar42 = local_b0;
    }
    *(float *)(param_1[7] + 4) = fVar42;
    if (local_ac <= fVar37) {
      fVar37 = local_ac;
    }
  }
  else {
    *(float *)(param_1[5] + 8) = fVar54;
    *(float *)(param_1[8] + 4) = param_2[0xb];
    *(float *)(param_1[8] + 8) = param_2[0xc];
    fVar37 = param_2[0xd];
    *(ulong *)param_1[7] = CONCAT44(local_b0,fStack_b4);
    *(float *)param_1[8] = fVar56;
    *(float *)(param_1[6] + 4) = fVar55;
    *(float *)(param_1[6] + 8) = local_b8;
    *(float *)param_1[9] = fVar37;
    fVar37 = local_ac;
  }
  *(float *)(param_1[7] + 8) = fVar37;
  return 1;
}

