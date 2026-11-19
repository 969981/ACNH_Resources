
void FUN_03ace150(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  int *piVar4;
  char cVar5;
  code *pcVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
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
  float fVar44;
  float fVar45;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  fVar22 = (float)*(undefined8 *)(param_3 + 0x180);
  fVar13 = (float)*(undefined8 *)(param_3 + 0x150);
  fVar14 = (float)((ulong)*(undefined8 *)(param_3 + 0x150) >> 0x20);
  fVar15 = (float)*(undefined8 *)(param_3 + 0x158);
  fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 0x158) >> 0x20);
  fVar23 = (float)((ulong)*(undefined8 *)(param_3 + 0x180) >> 0x20);
  fVar17 = (float)*(undefined8 *)(param_3 + 0x160);
  fVar18 = (float)((ulong)*(undefined8 *)(param_3 + 0x160) >> 0x20);
  fVar19 = (float)*(undefined8 *)(param_3 + 0x168);
  fVar21 = (float)((ulong)*(undefined8 *)(param_3 + 0x168) >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_3 + 400);
  fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 400) >> 0x20);
  fVar24 = (float)*(undefined8 *)(param_3 + 0x188);
  fVar26 = (float)*(undefined8 *)(param_3 + 0x170);
  fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 0x170) >> 0x20);
  fVar27 = (float)*(undefined8 *)(param_3 + 0x178);
  fVar28 = (float)((ulong)*(undefined8 *)(param_3 + 0x178) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_3 + 0x198);
  pfVar1 = (float *)(param_3 + 0x420);
  lVar7 = 0x390;
  *(undefined8 *)(param_3 + 0x420) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_3 + 0x428) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_3 + 0x430) = 0xff7fffffff7fffff;
  fVar20 = (float)*(undefined8 *)(param_3 + 0x1a0);
  fVar25 = (float)((ulong)*(undefined8 *)(param_3 + 0x1a0) >> 0x20);
  fVar34 = (float)*(undefined8 *)(param_3 + 0x1b0);
  fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 0x1b0) >> 0x20);
  fVar30 = (float)*(undefined8 *)(param_3 + 0x1a8);
  fVar12 = (float)*(undefined8 *)(param_3 + 0x1b8);
  local_120 = CONCAT44(fVar14 * fVar22 + fVar18 * fVar23 + fVar29 * fVar24 + 0.0,
                       fVar13 * fVar22 + fVar17 * fVar23 + fVar26 * fVar24 + 0.0);
  uStack_118 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x188) >> 0x20) +
                        fVar16 * fVar22 + fVar21 * fVar23 + fVar28 * fVar24,
                        fVar15 * fVar22 + fVar19 * fVar23 + fVar27 * fVar24 + 0.0);
  uStack_110 = CONCAT44(fVar14 * fVar8 + fVar18 * fVar9 + fVar29 * fVar11 + 0.0,
                        fVar13 * fVar8 + fVar17 * fVar9 + fVar26 * fVar11 + 0.0);
  uStack_108 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x198) >> 0x20) +
                        fVar16 * fVar8 + fVar21 * fVar9 + fVar28 * fVar11,
                        fVar15 * fVar8 + fVar19 * fVar9 + fVar27 * fVar11 + 0.0);
  local_100 = CONCAT44(fVar14 * fVar20 + fVar18 * fVar25 + fVar29 * fVar30 + 0.0,
                       fVar13 * fVar20 + fVar17 * fVar25 + fVar26 * fVar30 + 0.0);
  uStack_f8 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x1a8) >> 0x20) +
                       fVar16 * fVar20 + fVar21 * fVar25 + fVar28 * fVar30,
                       fVar15 * fVar20 + fVar19 * fVar25 + fVar27 * fVar30 + 0.0);
  uStack_f0 = CONCAT44(fVar14 * fVar34 + fVar18 * fVar10 + fVar29 * fVar12 + 0.0,
                       fVar13 * fVar34 + fVar17 * fVar10 + fVar26 * fVar12 + 0.0);
  uStack_e8 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x1b8) >> 0x20) +
                       fVar16 * fVar34 + fVar21 * fVar10 + fVar28 * fVar12,
                       fVar15 * fVar34 + fVar19 * fVar10 + fVar27 * fVar12 + 0.0);
  fVar8 = 3.4028235e+38;
  do {
    pfVar2 = (float *)(param_3 + lVar7);
    if (((*pfVar2 <= pfVar2[3]) && (pfVar2[1] <= pfVar2[4])) && (pfVar2[2] <= pfVar2[5])) {
      pcVar6 = *(code **)(param_3 + 0x40);
      local_b0 = 0xff7fffffff7fffff;
      local_c0 = 0x7f7fffff7f7fffff;
      uStack_b8 = 0xff7fffff7f7fffff;
      plVar3 = (long *)(param_3 + ((long)*(ulong *)(param_3 + 0x48) >> 1));
      if ((*(ulong *)(param_3 + 0x48) & 1) != 0) {
        pcVar6 = *(code **)(pcVar6 + *plVar3);
      }
      (*pcVar6)(plVar3,&local_c0,pfVar2);
      if ((float)local_c0 < pfVar2[0x12]) {
        pfVar2[0x12] = (float)local_c0;
      }
      if (local_c0._4_4_ < pfVar2[0x13]) {
        pfVar2[0x13] = local_c0._4_4_;
      }
      if ((float)uStack_b8 < pfVar2[0x14]) {
        pfVar2[0x14] = (float)uStack_b8;
      }
      if (pfVar2[0x15] < uStack_b8._4_4_) {
        pfVar2[0x15] = uStack_b8._4_4_;
      }
      if (pfVar2[0x16] < (float)local_b0) {
        pfVar2[0x16] = (float)local_b0;
      }
      if (pfVar2[0x17] < local_b0._4_4_) {
        pfVar2[0x17] = local_b0._4_4_;
      }
      fVar8 = *pfVar1;
    }
    fVar9 = pfVar2[0x12];
    if (fVar9 < fVar8) {
      *pfVar1 = fVar9;
      fVar8 = fVar9;
    }
    fVar11 = pfVar2[0x13];
    fVar9 = *(float *)(param_3 + 0x424);
    if (fVar11 < *(float *)(param_3 + 0x424)) {
      *(float *)(param_3 + 0x424) = fVar11;
      fVar9 = fVar11;
    }
    fVar20 = pfVar2[0x14];
    fVar11 = *(float *)(param_3 + 0x428);
    if (fVar20 < *(float *)(param_3 + 0x428)) {
      *(float *)(param_3 + 0x428) = fVar20;
      fVar11 = fVar20;
    }
    fVar25 = pfVar2[0x15];
    fVar20 = *(float *)(param_3 + 0x42c);
    if (*(float *)(param_3 + 0x42c) < fVar25) {
      *(float *)(param_3 + 0x42c) = fVar25;
      fVar20 = fVar25;
    }
    fVar30 = pfVar2[0x16];
    fVar25 = *(float *)(param_3 + 0x430);
    if (*(float *)(param_3 + 0x430) < fVar30) {
      *(float *)(param_3 + 0x430) = fVar30;
      fVar25 = fVar30;
    }
    fVar34 = pfVar2[0x17];
    fVar30 = *(float *)(param_3 + 0x434);
    if (*(float *)(param_3 + 0x434) < fVar34) {
      *(float *)(param_3 + 0x434) = fVar34;
      fVar30 = fVar34;
    }
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0x3d8);
  if (((fVar8 <= fVar20) && (fVar9 <= fVar25)) && (fVar11 <= fVar30)) {
    if (*(char *)(param_3 + 0x5bc) == '\0') {
      fVar8 = (float)*(undefined8 *)(param_3 + 400);
      fVar34 = (float)*(undefined8 *)(param_3 + 0x150);
      fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 0x150) >> 0x20);
      fVar12 = (float)*(undefined8 *)(param_3 + 0x158);
      fVar13 = (float)((ulong)*(undefined8 *)(param_3 + 0x158) >> 0x20);
      fVar18 = (float)*(undefined8 *)(param_3 + 0x180);
      fVar19 = (float)((ulong)*(undefined8 *)(param_3 + 0x180) >> 0x20);
      fVar14 = (float)*(undefined8 *)(param_3 + 0x160);
      fVar15 = (float)((ulong)*(undefined8 *)(param_3 + 0x160) >> 0x20);
      fVar16 = (float)*(undefined8 *)(param_3 + 0x168);
      fVar17 = (float)((ulong)*(undefined8 *)(param_3 + 0x168) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_3 + 0x1a0);
      fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 400) >> 0x20);
      fVar29 = (float)*(undefined8 *)(param_3 + 0x1b0);
      fVar25 = (float)((ulong)*(undefined8 *)(param_3 + 0x1a0) >> 0x20);
      fVar27 = (float)((ulong)*(undefined8 *)(param_3 + 0x1b0) >> 0x20);
      fVar21 = (float)*(undefined8 *)(param_3 + 0x188);
      fVar22 = (float)*(undefined8 *)(param_3 + 0x170);
      fVar23 = (float)((ulong)*(undefined8 *)(param_3 + 0x170) >> 0x20);
      fVar24 = (float)*(undefined8 *)(param_3 + 0x178);
      fVar26 = (float)((ulong)*(undefined8 *)(param_3 + 0x178) >> 0x20);
      fVar11 = (float)*(undefined8 *)(param_3 + 0x198);
      fVar30 = (float)*(undefined8 *)(param_3 + 0x1a8);
      fVar28 = (float)*(undefined8 *)(param_3 + 0x1b8);
      local_c0 = CONCAT44(fVar10 * fVar18 + fVar15 * fVar19 + fVar23 * fVar21 + 0.0,
                          fVar34 * fVar18 + fVar14 * fVar19 + fVar22 * fVar21 + 0.0);
      uStack_b8 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x188) >> 0x20) +
                           fVar13 * fVar18 + fVar17 * fVar19 + fVar26 * fVar21,
                           fVar12 * fVar18 + fVar16 * fVar19 + fVar24 * fVar21 + 0.0);
      local_b0 = CONCAT44(fVar10 * fVar8 + fVar15 * fVar9 + fVar23 * fVar11 + 0.0,
                          fVar34 * fVar8 + fVar14 * fVar9 + fVar22 * fVar11 + 0.0);
      uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x198) >> 0x20) +
                           fVar13 * fVar8 + fVar17 * fVar9 + fVar26 * fVar11,
                           fVar12 * fVar8 + fVar16 * fVar9 + fVar24 * fVar11 + 0.0);
      local_a0 = CONCAT44(fVar10 * fVar20 + fVar15 * fVar25 + fVar23 * fVar30 + 0.0,
                          fVar34 * fVar20 + fVar14 * fVar25 + fVar22 * fVar30 + 0.0);
      uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x1a8) >> 0x20) +
                           fVar13 * fVar20 + fVar17 * fVar25 + fVar26 * fVar30,
                           fVar12 * fVar20 + fVar16 * fVar25 + fVar24 * fVar30 + 0.0);
      uStack_90 = CONCAT44(fVar10 * fVar29 + fVar15 * fVar27 + fVar23 * fVar28 + 0.0,
                           fVar34 * fVar29 + fVar14 * fVar27 + fVar22 * fVar28 + 0.0);
      uStack_88 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x1b8) >> 0x20) +
                           fVar13 * fVar29 + fVar17 * fVar27 + fVar26 * fVar28,
                           fVar12 * fVar29 + fVar16 * fVar27 + fVar24 * fVar28 + 0.0);
      FUN_038e6ab4(&local_c0,&local_c0);
      FUN_03acf160(param_3 + 0x78,pfVar1,&local_c0,0xff);
    }
    else {
      FUN_007535b4(&local_c0,param_3 + 0x150);
      FUN_03acf290(param_3 + 0x78,pfVar1,&local_c0,0xfe);
    }
  }
  piVar4 = (int *)(param_3 + 0x90) + (ulong)*(uint *)(param_3 + 0xc0) * 6;
  if (1 < *(uint *)(param_3 + 0xc0)) {
    piVar4 = (int *)(param_3 + 0x90);
  }
  if (*piVar4 < 1) {
    FUN_03acff50(param_3 + 0x78);
    cVar5 = *(char *)(param_3 + 0x5bc);
  }
  else {
    cVar5 = *(char *)(param_3 + 0x5bc);
  }
  if (cVar5 == '\0') {
    FUN_038e6ab4(&local_c0,&local_120);
    local_d8 = 0xbf800000bf800000;
    uStack_d0 = 0x3f800000bf800000;
    local_c8 = &DAT_3f8000003f800000;
    FUN_03acf160(param_3 + 0x78,&local_d8,&local_c0,0xff);
  }
  local_c0 = CONCAT44(param_5,param_4);
  FUN_03acc68c(param_1,param_2,param_3,param_3 + 800,*(undefined4 *)(param_3 + 0x68),&local_c0);
  fVar13 = (float)*(undefined8 *)(param_3 + 0x2a0);
  fVar8 = (float)*(undefined8 *)(param_3 + 0x150);
  fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 0x150) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_3 + 0x158);
  fVar20 = (float)((ulong)*(undefined8 *)(param_3 + 0x158) >> 0x20);
  fVar15 = (float)((ulong)*(undefined8 *)(param_3 + 0x2a0) >> 0x20);
  fVar25 = (float)*(undefined8 *)(param_3 + 0x160);
  fVar30 = (float)((ulong)*(undefined8 *)(param_3 + 0x160) >> 0x20);
  fVar34 = (float)*(undefined8 *)(param_3 + 0x168);
  fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 0x168) >> 0x20);
  fVar17 = (float)*(undefined8 *)(param_3 + 0x2a8);
  fVar12 = (float)*(undefined8 *)(param_3 + 0x170);
  fVar14 = (float)((ulong)*(undefined8 *)(param_3 + 0x170) >> 0x20);
  fVar16 = (float)*(undefined8 *)(param_3 + 0x178);
  fVar18 = (float)((ulong)*(undefined8 *)(param_3 + 0x178) >> 0x20);
  fVar19 = (float)*(undefined8 *)(param_3 + 0x2b0);
  fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 0x2b0) >> 0x20);
  fVar21 = fVar8 * fVar13 + fVar25 * fVar15 + fVar12 * fVar17 + 0.0;
  fVar22 = fVar9 * fVar13 + fVar30 * fVar15 + fVar14 * fVar17 + 0.0;
  fVar23 = fVar11 * fVar13 + fVar34 * fVar15 + fVar16 * fVar17 + 0.0;
  fVar24 = (float)((ulong)*(undefined8 *)(param_3 + 0x2a8) >> 0x20) +
           fVar20 * fVar13 + fVar10 * fVar15 + fVar18 * fVar17;
  fVar13 = (float)*(undefined8 *)(param_3 + 0x2b8);
  fVar31 = (float)*(undefined8 *)(param_3 + 0x2c0);
  fVar32 = (float)((ulong)*(undefined8 *)(param_3 + 0x2c0) >> 0x20);
  fVar35 = (float)*(undefined8 *)(param_3 + 0x2d0);
  fVar36 = (float)((ulong)*(undefined8 *)(param_3 + 0x2d0) >> 0x20);
  fVar33 = (float)*(undefined8 *)(param_3 + 0x2c8);
  fVar37 = (float)*(undefined8 *)(param_3 + 0x2d8);
  fVar26 = fVar8 * fVar19 + fVar25 * fVar29 + fVar12 * fVar13 + 0.0;
  fVar27 = fVar9 * fVar19 + fVar30 * fVar29 + fVar14 * fVar13 + 0.0;
  fVar28 = fVar11 * fVar19 + fVar34 * fVar29 + fVar16 * fVar13 + 0.0;
  fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 0x2b8) >> 0x20) +
           fVar20 * fVar19 + fVar10 * fVar29 + fVar18 * fVar13;
  fVar38 = fVar21 * 0.0;
  fVar40 = fVar22 * 0.0;
  fVar42 = fVar23 * 0.0;
  fVar44 = fVar24 * 0.0;
  fVar39 = fVar38 + fVar26 * 0.0;
  fVar41 = fVar40 + fVar27 * 0.0;
  fVar43 = fVar42 + fVar28 * 0.0;
  fVar45 = fVar44 + fVar29 * 0.0;
  fVar13 = fVar8 * fVar31 + fVar25 * fVar32 + fVar12 * fVar33 + 0.0;
  fVar15 = fVar9 * fVar31 + fVar30 * fVar32 + fVar14 * fVar33 + 0.0;
  fVar17 = fVar11 * fVar31 + fVar34 * fVar32 + fVar16 * fVar33 + 0.0;
  fVar19 = (float)((ulong)*(undefined8 *)(param_3 + 0x2c8) >> 0x20) +
           fVar20 * fVar31 + fVar10 * fVar32 + fVar18 * fVar33;
  fVar8 = fVar8 * fVar35 + fVar25 * fVar36 + fVar12 * fVar37 + 0.0;
  fVar9 = fVar9 * fVar35 + fVar30 * fVar36 + fVar14 * fVar37 + 0.0;
  fVar11 = fVar11 * fVar35 + fVar34 * fVar36 + fVar16 * fVar37 + 0.0;
  fVar20 = (float)((ulong)*(undefined8 *)(param_3 + 0x2d8) >> 0x20) +
           fVar20 * fVar35 + fVar10 * fVar36 + fVar18 * fVar37;
  *(ulong *)(param_3 + 0x2e8) =
       CONCAT44(fVar24 * 0.5 + fVar29 * 0.0 + fVar19 * 0.0 + fVar20 * 0.5,
                fVar23 * 0.5 + fVar28 * 0.0 + fVar17 * 0.0 + fVar11 * 0.5);
  *(ulong *)(param_3 + 0x2e0) =
       CONCAT44(fVar22 * 0.5 + fVar27 * 0.0 + fVar15 * 0.0 + fVar9 * 0.5,
                fVar21 * 0.5 + fVar26 * 0.0 + fVar13 * 0.0 + fVar8 * 0.5);
  *(ulong *)(param_3 + 0x2f8) =
       CONCAT44(fVar44 + fVar29 * -0.5 + fVar19 * 0.0 + fVar20 * 0.5,
                fVar42 + fVar28 * -0.5 + fVar17 * 0.0 + fVar11 * 0.5);
  *(ulong *)(param_3 + 0x2f0) =
       CONCAT44(fVar40 + fVar27 * -0.5 + fVar15 * 0.0 + fVar9 * 0.5,
                fVar38 + fVar26 * -0.5 + fVar13 * 0.0 + fVar8 * 0.5);
  *(ulong *)(param_3 + 0x308) =
       CONCAT44(fVar45 + fVar19 * 0.5 + fVar20 * 0.5,fVar43 + fVar17 * 0.5 + fVar11 * 0.5);
  *(ulong *)(param_3 + 0x300) =
       CONCAT44(fVar41 + fVar15 * 0.5 + fVar9 * 0.5,fVar39 + fVar13 * 0.5 + fVar8 * 0.5);
  *(ulong *)(param_3 + 0x318) =
       CONCAT44(fVar20 + fVar45 + fVar19 * 0.0,fVar11 + fVar43 + fVar17 * 0.0);
  *(ulong *)(param_3 + 0x310) =
       CONCAT44(fVar9 + fVar41 + fVar15 * 0.0,fVar8 + fVar39 + fVar13 * 0.0);
  return;
}

