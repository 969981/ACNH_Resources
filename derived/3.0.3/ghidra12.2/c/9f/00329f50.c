
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00329f50(float param_1,ulong *param_2,undefined8 *param_3,long param_4,undefined8 param_5,
            undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined2 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 uVar14;
  byte bVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 uVar18;
  byte bVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 uVar22;
  byte bVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined1 uVar26;
  byte bVar27;
  undefined1 uVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  
  puVar12 = PTR_CosCoefficients_04bcedf0;
  puVar11 = PTR_SinCoefficients_04bcede8;
  lVar13 = *(long *)(param_4 + 0xa0);
  uVar40 = *(undefined4 *)(lVar13 + 0x890);
  uVar1 = *(uint *)(param_4 + 0xac) * 0x41c64e6d + 0x3039;
  fVar38 = *(float *)PTR_FloatPi_04bcee68 * param_1 + *(float *)PTR_FloatPi_04bcee68 * param_1;
  uVar14 = (char)uVar40;
  uVar16 = (char)((uint)uVar40 >> 8);
  uVar18 = (char)((uint)uVar40 >> 0x10);
  uVar20 = (char)((uint)uVar40 >> 0x18);
  if (*(char *)(lVar13 + 0x881) != '\0') {
    uVar14 = SUB41(fVar38,0);
    uVar16 = (char)((uint)fVar38 >> 8);
    uVar18 = (char)((uint)fVar38 >> 0x10);
    uVar20 = (char)((uint)fVar38 >> 0x18);
  }
  fVar38 = (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) +
           *(float *)(lVar13 + 0x888) * (float)*(uint *)(param_4 + 0xac) * 2.3283064e-10 +
           *(float *)(lVar13 + 0x888) * -0.5;
  fVar38 = fVar38 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar38) *
                    *(float *)PTR_Float2Pi_04bcede0;
  if (fVar38 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
    if (-*(float *)PTR_FloatPiDivided2_04bcedc0 <= fVar38) {
      fVar41 = 1.0;
      goto LAB_0032a028;
    }
    fVar41 = -*(float *)PTR_FloatPi_04bcedc8;
  }
  else {
    fVar41 = *(float *)PTR_FloatPi_04bcedc8;
  }
  fVar38 = fVar41 - fVar38;
  fVar41 = -1.0;
LAB_0032a028:
  fVar44 = fVar38 * fVar38;
  *(uint *)(param_4 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
  fVar48 = *(float *)puVar11;
  fVar50 = *(float *)(puVar11 + 4);
  fVar51 = *(float *)puVar12;
  fVar56 = *(float *)(puVar12 + 4);
  fVar52 = *(float *)(puVar11 + 8);
  fVar57 = *(float *)(puVar11 + 0xc);
  fVar53 = *(float *)(puVar12 + 8);
  fVar58 = *(float *)(puVar12 + 0xc);
  fVar54 = *(float *)(puVar11 + 0x10);
  fVar55 = *(float *)(puVar12 + 0x10);
  fVar39 = (float)uVar1 * 2.3283064e-10;
  fVar49 = 1.0 - *(float *)(lVar13 + 0x898);
  fVar39 = fVar39 + (1.0 - fVar39) * fVar49 * fVar49;
  uVar14 = 0;
  uVar16 = 0;
  uVar18 = 0;
  uVar20 = 0;
  if (0.0 < fVar39) {
    fVar49 = SQRT(fVar39);
    uVar14 = SUB41(fVar49,0);
    uVar16 = (undefined1)((uint)fVar49 >> 8);
    uVar18 = (undefined1)((uint)fVar49 >> 0x10);
    uVar20 = (undefined1)((uint)fVar49 >> 0x18);
    if (NAN(fVar49)) {
      fVar39 = sqrtf(fVar39);
      uVar14 = SUB41(fVar39,0);
      uVar16 = (undefined1)((uint)fVar39 >> 8);
      uVar18 = (undefined1)((uint)fVar39 >> 0x10);
      uVar20 = (undefined1)((uint)fVar39 >> 0x18);
    }
  }
  fVar49 = fVar38 * (fVar44 * ((fVar57 + fVar44 * ((fVar50 - fVar44 * fVar48) * fVar44 - fVar52)) *
                               fVar44 - fVar54) + 1.0) *
           (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14)));
  fVar48 = *(float *)(lVar13 + 0x8a4) * *(float *)(param_7 + 0x90);
  fVar39 = (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) * fVar49;
  fVar44 = fVar41 * (fVar44 * ((fVar58 + fVar44 * ((fVar56 - fVar44 * fVar51) * fVar44 - fVar53)) *
                               fVar44 - fVar55) + 1.0) *
           (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14)));
  fVar41 = *(float *)(lVar13 + 0x8ac) * *(float *)(param_7 + 0x98);
  fVar38 = (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) * fVar44;
  param_2[1] = (ulong)(uint)(fVar44 * fVar41);
  *param_2 = (ulong)(uint)(fVar49 * fVar48);
  if (fVar48 <= fVar41) {
    fVar39 = fVar39 * (fVar48 / fVar41);
    fVar41 = fVar39 * fVar39;
    fVar44 = fVar38 * fVar38;
    uVar14 = (undefined1)((uint)fVar44 >> 8);
    uVar16 = (undefined1)((uint)fVar44 >> 0x10);
    uVar18 = (undefined1)((uint)fVar44 >> 0x18);
    auVar42._4_4_ = 0;
    auVar42._0_4_ = fVar41;
    auVar42[8] = SUB41(fVar44,0);
    auVar42[9] = uVar14;
    auVar42[10] = uVar16;
    auVar42[0xb] = uVar18;
    auVar42._12_4_ = 0;
    auVar46._4_4_ = 0;
    auVar46._0_4_ = fVar41;
    auVar46[8] = SUB41(fVar44,0);
    auVar46[9] = uVar14;
    auVar46[10] = uVar16;
    auVar46[0xb] = uVar18;
    auVar46._12_4_ = 0;
    auVar42 = NEON_ext(auVar42,auVar46,8,1);
    fVar41 = auVar42._0_4_ + fVar41;
    fVar44 = auVar42._4_4_ + 0.0;
    fVar48 = fVar41 + fVar44;
    fVar41 = fVar41 + fVar44;
    uVar14 = SUB41(fVar48,0);
    uVar16 = (undefined1)((uint)fVar48 >> 8);
    uVar18 = (undefined1)((uint)fVar48 >> 0x10);
    uVar20 = (undefined1)((uint)fVar48 >> 0x18);
    uVar22 = SUB41(fVar41,0);
    uVar24 = (undefined1)((uint)fVar41 >> 8);
    uVar26 = (undefined1)((uint)fVar41 >> 0x10);
    uVar28 = (undefined1)((uint)fVar41 >> 0x18);
  }
  else {
    fVar38 = fVar38 * (fVar41 / fVar48);
    fVar41 = fVar39 * fVar39;
    fVar44 = fVar38 * fVar38;
    uVar14 = (undefined1)((uint)fVar44 >> 8);
    uVar16 = (undefined1)((uint)fVar44 >> 0x10);
    uVar18 = (undefined1)((uint)fVar44 >> 0x18);
    auVar3._4_4_ = 0;
    auVar3._0_4_ = fVar41;
    auVar3[8] = SUB41(fVar44,0);
    auVar3[9] = uVar14;
    auVar3[10] = uVar16;
    auVar3[0xb] = uVar18;
    auVar3._12_4_ = 0;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = fVar41;
    auVar4[8] = SUB41(fVar44,0);
    auVar4[9] = uVar14;
    auVar4[10] = uVar16;
    auVar4[0xb] = uVar18;
    auVar4._12_4_ = 0;
    auVar42 = NEON_ext(auVar3,auVar4,8,1);
    fVar41 = auVar42._0_4_ + fVar41;
    fVar44 = auVar42._4_4_ + 0.0;
    fVar48 = fVar41 + fVar44;
    fVar41 = fVar41 + fVar44;
    uVar14 = SUB41(fVar48,0);
    uVar16 = (undefined1)((uint)fVar48 >> 8);
    uVar18 = (undefined1)((uint)fVar48 >> 0x10);
    uVar20 = (undefined1)((uint)fVar48 >> 0x18);
    uVar22 = SUB41(fVar41,0);
    uVar24 = (undefined1)((uint)fVar41 >> 8);
    uVar26 = (undefined1)((uint)fVar41 >> 0x10);
    uVar28 = (undefined1)((uint)fVar41 >> 0x18);
  }
  if (0.0 < fVar48) {
    uVar2 = CONCAT11(uVar16,uVar14);
    uVar10 = CONCAT11(uVar24,uVar22);
    auVar5[1] = uVar16;
    auVar5[0] = uVar14;
    auVar5[2] = uVar18;
    auVar5[3] = uVar20;
    auVar5[4] = uVar22;
    auVar5[5] = uVar24;
    auVar5[6] = uVar26;
    auVar5[7] = uVar28;
    auVar5[8] = uVar14;
    auVar5[9] = uVar16;
    auVar5[10] = uVar18;
    auVar5[0xb] = uVar20;
    auVar5[0xc] = uVar22;
    auVar5[0xd] = uVar24;
    auVar5[0xe] = uVar26;
    auVar5[0xf] = uVar28;
    auVar42 = NEON_frsqrte(auVar5,4);
    auVar45._0_4_ = (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) * auVar42._0_4_
    ;
    auVar45._4_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar24,uVar22))) * auVar42._4_4_
    ;
    auVar45._8_4_ = (float)CONCAT13(uVar20,CONCAT12(uVar18,uVar2)) * auVar42._8_4_;
    auVar45._12_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar26,uVar10)) * auVar42._12_4_;
    auVar46 = NEON_frsqrts(auVar42,auVar45,4);
    auVar43._0_4_ = auVar42._0_4_ * auVar46._0_4_;
    auVar43._4_4_ = auVar42._4_4_ * auVar46._4_4_;
    auVar43._8_4_ = auVar42._8_4_ * auVar46._8_4_;
    auVar43._12_4_ = auVar42._12_4_ * auVar46._12_4_;
    auVar47._0_4_ = (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) * auVar43._0_4_
    ;
    auVar47._4_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar24,uVar22))) * auVar43._4_4_
    ;
    auVar47._8_4_ = (float)CONCAT13(uVar20,CONCAT12(uVar18,uVar2)) * auVar43._8_4_;
    auVar47._12_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar26,uVar10)) * auVar43._12_4_;
    iVar6 = -(uint)((float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) == 0.0);
    iVar7 = -(uint)((float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar24,uVar22))) == 0.0);
    iVar8 = -(uint)((float)CONCAT13(uVar20,CONCAT12(uVar18,uVar2)) == 0.0);
    iVar9 = -(uint)((float)CONCAT13(uVar28,CONCAT12(uVar26,uVar10)) == 0.0);
    auVar42 = NEON_frsqrts(auVar43,auVar47,4);
    fVar39 = fVar39 * auVar43._0_4_ * auVar42._0_4_;
    fVar41 = auVar43._4_4_ * auVar42._4_4_ * 0.0;
    fVar38 = fVar38 * auVar43._8_4_ * auVar42._8_4_;
    fVar44 = auVar43._12_4_ * auVar42._12_4_ * 0.0;
    bVar15 = SUB41(fVar39,0) & ~(byte)iVar6;
    bVar17 = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar6 >> 8);
    bVar19 = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
    bVar21 = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
    bVar23 = SUB41(fVar41,0) & ~(byte)iVar7;
    bVar25 = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar7 >> 8);
    bVar27 = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
    bVar29 = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
    bVar30 = SUB41(fVar38,0) & ~(byte)iVar8;
    bVar31 = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar8 >> 8);
    bVar32 = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
    bVar33 = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
    bVar34 = SUB41(fVar44,0) & ~(byte)iVar9;
    bVar35 = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar9 >> 8);
    bVar36 = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
    bVar37 = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
  }
  else {
    bVar30 = (byte)_UNK_041023d8;
    bVar31 = (byte)((ulong)_UNK_041023d8 >> 8);
    bVar32 = (byte)((ulong)_UNK_041023d8 >> 0x10);
    bVar33 = (byte)((ulong)_UNK_041023d8 >> 0x18);
    bVar34 = (byte)((ulong)_UNK_041023d8 >> 0x20);
    bVar35 = (byte)((ulong)_UNK_041023d8 >> 0x28);
    bVar36 = (byte)((ulong)_UNK_041023d8 >> 0x30);
    bVar37 = (byte)((ulong)_UNK_041023d8 >> 0x38);
    bVar15 = (byte)_DAT_041023d0;
    bVar17 = (byte)((ulong)_DAT_041023d0 >> 8);
    bVar19 = (byte)((ulong)_DAT_041023d0 >> 0x10);
    bVar21 = (byte)((ulong)_DAT_041023d0 >> 0x18);
    bVar23 = (byte)((ulong)_DAT_041023d0 >> 0x20);
    bVar25 = (byte)((ulong)_DAT_041023d0 >> 0x28);
    bVar27 = (byte)((ulong)_DAT_041023d0 >> 0x30);
    bVar29 = (byte)((ulong)_DAT_041023d0 >> 0x38);
  }
  fVar39 = *(float *)(param_7 + 0x6c);
  fVar38 = (float)CONCAT13(bVar29,CONCAT12(bVar27,CONCAT11(bVar25,bVar23))) * fVar39;
  fVar41 = (float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34))) * fVar39;
  param_3[1] = CONCAT17((char)((uint)fVar41 >> 0x18),
                        CONCAT16((char)((uint)fVar41 >> 0x10),
                                 CONCAT15((char)((uint)fVar41 >> 8),
                                          CONCAT14(SUB41(fVar41,0),
                                                   (float)CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(
                                                  bVar31,bVar30))) * fVar39))));
  *param_3 = CONCAT17((char)((uint)fVar38 >> 0x18),
                      CONCAT16((char)((uint)fVar38 >> 0x10),
                               CONCAT15((char)((uint)fVar38 >> 8),
                                        CONCAT14(SUB41(fVar38,0),
                                                 (float)CONCAT13(bVar21,CONCAT12(bVar19,CONCAT11(
                                                  bVar17,bVar15))) * fVar39))));
  return 1;
}

