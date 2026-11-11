
void FUN_005da110(long param_1,undefined8 param_2,uint param_3,long param_4,long *param_5,
                 undefined8 *param_6,undefined8 param_7,long param_8)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar41;
  undefined1 auVar40 [16];
  float fVar42;
  float fVar46;
  float fVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 uVar51;
  undefined1 auStack_250 [32];
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined8 local_50;
  undefined8 uStack_48;
  
  fVar22 = (float)*param_6;
  fVar21 = (float)((ulong)*param_6 >> 0x20);
  uVar31 = *(undefined8 *)(*param_5 + 0x28);
  uVar19 = *(undefined8 *)(*param_5 + 0x20);
  fVar30 = (float)uVar19;
  uVar51 = CONCAT44(fVar21 * fVar21 + 0.0001,fVar22 * fVar22 + 0.0001);
  fVar36 = (float)((ulong)uVar19 >> 0x20);
  auVar20 = *(undefined1 (*) [16])(param_5 + 8);
  fVar16 = (float)uVar31;
  uVar25 = NEON_frecpe(uVar51,4);
  uVar19 = NEON_frecps(uVar51,uVar25,4);
  fVar24 = (float)uVar25 * (float)uVar19;
  fVar26 = (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar19 >> 0x20);
  uVar19 = NEON_frecps(uVar51,CONCAT44(fVar26,fVar24),4);
  fVar21 = (float)param_5[6] * fVar16 + (float)param_5[2] * fVar30 + (float)param_5[4] * fVar36;
  fVar22 = (float)((ulong)param_5[6] >> 0x20) * fVar16 +
           (float)((ulong)param_5[2] >> 0x20) * fVar30 + (float)((ulong)param_5[4] >> 0x20) * fVar36
  ;
  fVar23 = (float)param_5[7] * fVar16 + (float)param_5[3] * fVar30 + (float)param_5[5] * fVar36;
  fVar24 = -((float)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x70) * fVar24 * (float)uVar19);
  fVar26 = -((float)((ulong)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x70) >> 0x20) *
            fVar26 * (float)((ulong)uVar19 >> 0x20));
  fVar27 = auVar20._0_4_ * fVar21;
  fVar28 = auVar20._4_4_ * fVar22;
  fVar29 = auVar20._8_4_ * fVar23;
  fVar30 = auVar20._12_4_ *
           ((float)((ulong)param_5[7] >> 0x20) * fVar16 +
           (float)((ulong)param_5[3] >> 0x20) * fVar30 + (float)((ulong)param_5[5] >> 0x20) * fVar36
           );
  auVar20._4_4_ = fVar28;
  auVar20._0_4_ = fVar27;
  auVar20._8_4_ = fVar29;
  auVar20._12_4_ = fVar30;
  auVar44._4_4_ = fVar28;
  auVar44._0_4_ = fVar27;
  auVar44._8_4_ = fVar29;
  auVar44._12_4_ = fVar30;
  auVar20 = NEON_ext(auVar20,auVar44,8,1);
  uStack_48 = CONCAT44((float)((ulong)uVar31 >> 0x20) - (fVar27 + fVar28 + auVar20._0_4_),fVar23);
  local_50 = CONCAT44(fVar22,fVar21);
  FUN_0053da30(auStack_250,&local_50);
  fVar23 = DAT_04102f3c;
  fVar22 = DAT_04102ed8;
  fVar21 = DAT_04102e58;
  uVar1 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  uVar1 = uVar1 & 0xfffffffc;
  if (0 < (int)uVar1) {
    lVar13 = 0;
    puVar12 = (ushort *)(param_4 + 0x26);
    do {
      lVar17 = (ulong)puVar12[-0x10] * 0x10;
      lVar18 = (ulong)puVar12[-8] * 0x10;
      pfVar2 = (float *)(lVar17 + param_1);
      fVar29 = *pfVar2;
      fVar30 = pfVar2[1];
      fVar36 = pfVar2[2];
      lVar15 = (ulong)*puVar12 * 0x10;
      pfVar2 = (float *)(lVar18 + param_1);
      fVar16 = *pfVar2;
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      lVar14 = (ulong)puVar12[8] * 0x10;
      pfVar2 = (float *)(lVar15 + param_1);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      lVar13 = lVar13 + 4;
      puVar12 = puVar12 + 0x20;
      pfVar2 = (float *)(lVar14 + param_1);
      fVar9 = *pfVar2;
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      auVar40._0_4_ = fVar29 * local_230;
      auVar40._4_4_ = fVar30 * fStack_22c;
      auVar40._8_4_ = fVar36 * fStack_228;
      auVar40._12_4_ = fStack_224 * 0.0;
      auVar43._0_4_ = fVar16 * local_230;
      auVar43._4_4_ = fVar4 * fStack_22c;
      auVar43._8_4_ = fVar5 * fStack_228;
      auVar43._12_4_ = fStack_224 * 0.0;
      auVar49._0_4_ = fVar6 * local_230;
      auVar49._4_4_ = fVar7 * fStack_22c;
      auVar49._8_4_ = fVar8 * fStack_228;
      auVar49._12_4_ = fStack_224 * 0.0;
      fVar27 = local_230 * fVar9;
      fVar28 = fStack_22c * fVar10;
      auVar20 = NEON_ext(auVar40,auVar40,8,1);
      auVar44 = NEON_ext(auVar43,auVar43,8,1);
      auVar45 = NEON_ext(auVar49,auVar49,8,1);
      auVar50._4_4_ = fVar28;
      auVar50._0_4_ = fVar27;
      auVar50._8_4_ = fStack_228 * fVar11;
      auVar50._12_4_ = fStack_224 * 0.0;
      auVar38._4_4_ = fVar28;
      auVar38._0_4_ = fVar27;
      auVar38._8_4_ = fStack_228 * fVar11;
      auVar38._12_4_ = fStack_224 * 0.0;
      auVar50 = NEON_ext(auVar50,auVar38,8,1);
      fVar42 = fStack_224 + auVar20._0_4_ + auVar40._0_4_ + auVar40._4_4_;
      fVar46 = fStack_224 + auVar44._0_4_ + auVar43._0_4_ + auVar43._4_4_;
      fVar47 = fStack_224 + auVar45._0_4_ + auVar49._0_4_ + auVar49._4_4_;
      fVar48 = fStack_224 + auVar50._0_4_ + fVar27 + fVar28;
      fVar39 = fVar24 * fVar42 * fVar42;
      fVar27 = fVar26 * fVar46 * fVar46;
      fVar41 = fVar24 * fVar47 * fVar47;
      fVar28 = fVar26 * fVar48 * fVar48;
      if (fVar39 <= fVar22) {
        fVar39 = fVar22;
      }
      auVar45._0_4_ = local_230 * ((fVar29 - local_230 * fVar42) - fVar29);
      auVar45._4_4_ = fStack_22c * ((fVar30 - fStack_22c * fVar42) - fVar30);
      auVar45._8_4_ = fStack_228 * ((fVar36 - fStack_228 * fVar42) - fVar36);
      auVar45._12_4_ = fStack_224 * ((0.0 - fStack_224 * fVar42) - 0.0);
      auVar33._0_4_ = local_230 * ((fVar16 - local_230 * fVar46) - fVar16);
      auVar33._4_4_ = fStack_22c * ((fVar4 - fStack_22c * fVar46) - fVar4);
      auVar33._8_4_ = fStack_228 * ((fVar5 - fStack_228 * fVar46) - fVar5);
      auVar33._12_4_ = fStack_224 * ((0.0 - fStack_224 * fVar46) - 0.0);
      if (fVar27 <= fVar22) {
        fVar27 = fVar22;
      }
      auVar20 = NEON_ext(auVar45,auVar45,8,1);
      auVar44 = NEON_ext(auVar33,auVar33,8,1);
      auVar35._0_4_ = local_230 * ((fVar6 - local_230 * fVar47) - fVar6);
      auVar35._4_4_ = fStack_22c * ((fVar7 - fStack_22c * fVar47) - fVar7);
      auVar35._8_4_ = fStack_228 * ((fVar8 - fStack_228 * fVar47) - fVar8);
      auVar35._12_4_ = fStack_224 * ((0.0 - fStack_224 * fVar47) - 0.0);
      auVar37._0_4_ = local_230 * ((fVar9 - local_230 * fVar48) - fVar9);
      auVar37._4_4_ = fStack_22c * ((fVar10 - fStack_22c * fVar48) - fVar10);
      auVar37._8_4_ = fStack_228 * ((fVar11 - fStack_228 * fVar48) - fVar11);
      auVar37._12_4_ = fStack_224 * ((0.0 - fStack_224 * fVar48) - 0.0);
      fVar29 = (float)(int)(fVar39 * fVar23 + fVar21);
      auVar50 = NEON_ext(auVar35,auVar35,8,1);
      auVar38 = NEON_ext(auVar37,auVar37,8,1);
      if (fVar41 <= fVar22) {
        fVar41 = fVar22;
      }
      uVar51 = ((undefined8 *)(param_8 + lVar17))[1];
      uVar19 = *(undefined8 *)(param_8 + lVar17);
      fVar30 = (float)(int)(fVar41 * fVar23 + fVar21);
      fVar27 = (float)(int)(fVar27 * fVar23 + fVar21);
      if (fVar28 <= fVar22) {
        fVar28 = fVar22;
      }
      pfVar2 = (float *)(param_8 + lVar17);
      pfVar2[2] = (float)uVar51 + fStack_228 * fVar29;
      pfVar2[3] = (float)((ulong)uVar51 >> 0x20) +
                  (auVar20._0_4_ + auVar45._0_4_ + auVar45._4_4_) * fVar29;
      *pfVar2 = (float)uVar19 + local_230 * fVar29;
      pfVar2[1] = (float)((ulong)uVar19 >> 0x20) + fStack_22c * fVar29;
      pfVar2 = (float *)(param_8 + lVar18);
      fVar29 = *pfVar2;
      fVar36 = pfVar2[1];
      fVar16 = (float)(int)(fVar28 * fVar23 + fVar21);
      pfVar3 = (float *)(param_8 + lVar18);
      pfVar3[2] = pfVar2[2] + fStack_228 * fVar27;
      pfVar3[3] = pfVar2[3] + (auVar44._0_4_ + auVar33._0_4_ + auVar33._4_4_) * fVar27;
      *pfVar3 = fVar29 + local_230 * fVar27;
      pfVar3[1] = fVar36 + fStack_22c * fVar27;
      pfVar2 = (float *)(param_8 + lVar15);
      fVar27 = *pfVar2;
      fVar28 = pfVar2[1];
      pfVar3 = (float *)(param_8 + lVar15);
      pfVar3[2] = pfVar2[2] + fStack_228 * fVar30;
      pfVar3[3] = pfVar2[3] + (auVar50._0_4_ + auVar35._0_4_ + auVar35._4_4_) * fVar30;
      *pfVar3 = fVar27 + local_230 * fVar30;
      pfVar3[1] = fVar28 + fStack_22c * fVar30;
      pfVar2 = (float *)(param_8 + lVar14);
      fVar27 = *pfVar2;
      ((undefined8 *)(param_8 + lVar14))[1] =
           CONCAT44(pfVar2[3] + (auVar38._0_4_ + auVar37._0_4_ + auVar37._4_4_) * fVar16,
                    pfVar2[2] + fStack_228 * fVar16);
      *(undefined8 *)(param_8 + lVar14) =
           CONCAT44(pfVar2[1] + fStack_22c * fVar16,fVar27 + local_230 * fVar16);
    } while (lVar13 < (int)uVar1);
  }
  fVar23 = DAT_04102f3c;
  fVar22 = DAT_04102ed8;
  fVar21 = DAT_04102e58;
  if (0 < (int)param_3 % 4) {
    lVar13 = (long)(int)uVar1;
    puVar12 = (ushort *)(param_4 + (long)(int)uVar1 * 0x10 + 6);
    do {
      lVar14 = (ulong)*puVar12 * 0x10;
      pfVar2 = (float *)(param_1 + lVar14);
      fVar27 = *pfVar2;
      fVar28 = pfVar2[1];
      fVar29 = pfVar2[2];
      lVar13 = lVar13 + 1;
      auVar34._0_4_ = local_230 * fVar27;
      auVar34._4_4_ = fStack_22c * fVar28;
      auVar34._8_4_ = fStack_228 * fVar29;
      auVar34._12_4_ = fStack_224 * 0.0;
      auVar20 = NEON_ext(auVar34,auVar34,8,1);
      fVar26 = auVar20._0_4_ + fStack_224;
      fVar30 = auVar34._0_4_ + auVar34._4_4_ + fVar26;
      fVar36 = -(auVar34._0_4_ + auVar34._4_4_ + fVar26);
      fVar26 = fVar30 * fVar30 * fVar24;
      if (fVar26 <= fVar22) {
        fVar26 = fVar22;
      }
      fVar16 = (float)(int)(fVar26 * fVar23 + fVar21);
      auVar32._0_4_ = local_230 * ((fVar27 + local_230 * -fVar30) - fVar27);
      auVar32._4_4_ = fStack_22c * ((fVar28 + fStack_22c * fVar36) - fVar28);
      auVar32._8_4_ = fStack_228 * ((fVar29 + fStack_228 * -fVar30) - fVar29);
      auVar32._12_4_ = fStack_224 * ((fStack_224 * fVar36 + 0.0) - 0.0);
      auVar20 = NEON_ext(auVar32,auVar32,8,1);
      pfVar2 = (float *)(param_8 + lVar14);
      fVar26 = *pfVar2;
      fVar27 = pfVar2[1];
      pfVar3 = (float *)(param_8 + lVar14);
      pfVar3[2] = pfVar2[2] + fStack_228 * fVar16;
      pfVar3[3] = pfVar2[3] + (auVar32._0_4_ + auVar32._4_4_ + auVar20._0_4_) * fVar16;
      *pfVar3 = fVar26 + local_230 * fVar16;
      pfVar3[1] = fVar27 + fStack_22c * fVar16;
      puVar12 = puVar12 + 8;
    } while (lVar13 < (int)param_3);
  }
  return;
}

