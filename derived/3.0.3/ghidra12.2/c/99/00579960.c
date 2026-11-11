
void FUN_00579960(uint param_1,long param_2,long param_3,long param_4,undefined8 *param_5,
                 float *param_6)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar25;
  ulong uVar24;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  int iVar47;
  int iVar49;
  float fVar50;
  undefined1 auVar48 [16];
  undefined8 uVar51;
  undefined8 uVar52;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar53 [16];
  float fVar57;
  undefined8 uVar58;
  float fVar60;
  float fVar61;
  undefined1 auVar59 [16];
  float fVar62;
  undefined1 auVar63 [16];
  int iVar64;
  float fVar65;
  float fVar66;
  
  if (0 < (int)param_1) {
    uVar8 = *param_5;
    uVar9 = *(ulong *)(PTR_DAT_04bd4c80 + 0x50);
    uVar2 = (ulong)param_1;
    pfVar3 = (float *)(param_4 + 0x10);
    do {
      lVar7 = (ulong)*(ushort *)(pfVar3 + 2) * 0x10;
      lVar4 = (ulong)*(ushort *)(pfVar3 + 3) * 0x10;
      lVar6 = (ulong)*(ushort *)((long)pfVar3 + 10) * 0x10;
      lVar5 = (ulong)*(ushort *)((long)pfVar3 + 0xe) * 0x10;
      uVar16 = ((undefined8 *)(param_2 + lVar4))[1];
      uVar58 = *(undefined8 *)(param_2 + lVar4);
      uVar2 = uVar2 - 1;
      uVar21 = ((undefined8 *)(param_2 + lVar5))[1];
      uVar20 = *(undefined8 *)(param_2 + lVar5);
      uVar52 = ((undefined8 *)(param_2 + lVar7))[1];
      uVar51 = *(undefined8 *)(param_2 + lVar7);
      uVar27 = ((undefined8 *)(param_2 + lVar6))[1];
      uVar23 = *(undefined8 *)(param_2 + lVar6);
      fVar35 = (float)uVar58;
      fVar13 = (float)uVar20;
      fVar29 = fVar13 - fVar35;
      fVar14 = (float)((ulong)uVar58 >> 0x20);
      fVar18 = (float)((ulong)uVar20 >> 0x20);
      fVar31 = fVar18 - fVar14;
      fVar15 = (float)uVar16;
      fVar30 = (float)uVar21;
      fVar32 = fVar30 - fVar15;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar34 = (float)((ulong)uVar21 >> 0x20);
      fVar33 = fVar34 - fVar17;
      auVar46._4_4_ = fVar31;
      auVar46._0_4_ = fVar29;
      auVar46._8_4_ = fVar32;
      auVar46._12_4_ = fVar33;
      auVar48._4_4_ = fVar31;
      auVar48._0_4_ = fVar29;
      auVar48._8_4_ = fVar32;
      auVar48._12_4_ = fVar33;
      auVar46 = NEON_ext(auVar46,auVar48,4,1);
      fVar10 = (float)uVar51;
      auVar36._0_4_ = fVar10 - fVar35;
      fVar19 = (float)((ulong)uVar51 >> 0x20);
      auVar36._4_4_ = fVar19 - fVar14;
      fVar11 = (float)uVar52;
      auVar36._8_4_ = fVar11 - fVar15;
      fVar12 = (float)((ulong)uVar52 >> 0x20);
      auVar36._12_4_ = fVar12 - fVar17;
      auVar48 = NEON_ext(auVar36,auVar36,4,1);
      fVar22 = (float)uVar23;
      fVar38 = fVar22 - fVar35;
      fVar25 = (float)((ulong)uVar23 >> 0x20);
      fVar41 = fVar25 - fVar14;
      fVar26 = (float)uVar27;
      fVar44 = fVar26 - fVar15;
      fVar28 = (float)((ulong)uVar27 >> 0x20);
      fVar45 = fVar28 - fVar17;
      auVar53._4_4_ = fVar41;
      auVar53._0_4_ = fVar38;
      auVar53._8_4_ = fVar44;
      auVar53._12_4_ = fVar45;
      auVar59._4_4_ = fVar41;
      auVar59._0_4_ = fVar38;
      auVar59._8_4_ = fVar44;
      auVar59._12_4_ = fVar45;
      auVar63 = NEON_ext(auVar53,auVar59,4,1);
      auVar53 = NEON_ext(auVar46,auVar46,8,1);
      auVar59 = NEON_ext(auVar48,auVar48,8,1);
      uVar51 = NEON_rev64(auVar53._0_8_,4);
      uVar58 = NEON_rev64(auVar59._0_8_,4);
      auVar53 = NEON_ext(auVar63,auVar63,8,1);
      uVar52 = NEON_rev64(auVar53._0_8_,4);
      fVar40 = (float)((ulong)uVar51 >> 0x20);
      auVar37._0_4_ = fVar29 * auVar48._0_4_ - auVar36._0_4_ * auVar46._0_4_;
      auVar37._4_4_ = fVar31 * auVar48._4_4_ - auVar36._4_4_ * auVar46._4_4_;
      auVar37._8_4_ = fVar32 * (float)uVar58 - auVar36._8_4_ * (float)uVar51;
      auVar37._12_4_ = fVar33 * (float)((ulong)uVar58 >> 0x20) - auVar36._12_4_ * fVar40;
      fVar39 = fVar38 * auVar46._0_4_ - fVar29 * auVar63._0_4_;
      fVar42 = fVar41 * auVar46._4_4_ - fVar31 * auVar63._4_4_;
      fVar38 = fVar44 * (float)uVar51 - fVar32 * (float)uVar52;
      fVar33 = fVar45 * fVar40 - fVar33 * (float)((ulong)uVar52 >> 0x20);
      auVar48 = NEON_ext(auVar37,auVar37,4,1);
      auVar63._4_4_ = fVar42;
      auVar63._0_4_ = fVar39;
      auVar63._8_4_ = fVar38;
      auVar63._12_4_ = fVar33;
      auVar1._4_4_ = fVar42;
      auVar1._0_4_ = fVar39;
      auVar1._8_4_ = fVar38;
      auVar1._12_4_ = fVar33;
      auVar46 = NEON_ext(auVar63,auVar1,4,1);
      fVar41 = auVar48._0_4_;
      fVar45 = auVar48._4_4_;
      fVar40 = fVar41 * fVar41 + fVar45 * fVar45 + auVar37._0_4_ * auVar37._0_4_;
      fVar43 = fVar41 * fVar41 + fVar45 * fVar45 + auVar37._0_4_ * auVar37._0_4_;
      uVar51 = NEON_frsqrte(CONCAT44(fVar43,fVar40),4);
      fVar38 = auVar46._0_4_;
      fVar44 = auVar46._4_4_;
      fVar57 = fVar38 * fVar38 + fVar44 * fVar44 + fVar39 * fVar39;
      fVar60 = fVar38 * fVar38 + fVar44 * fVar44 + fVar39 * fVar39;
      fVar33 = (float)uVar51;
      fVar54 = (float)((ulong)uVar51 >> 0x20);
      uVar51 = NEON_frsqrts(CONCAT44(fVar43,fVar40),CONCAT44(fVar54 * fVar54,fVar33 * fVar33),4);
      fVar33 = fVar33 * (float)uVar51;
      fVar54 = fVar54 * (float)((ulong)uVar51 >> 0x20);
      uVar51 = NEON_frsqrte(CONCAT44(fVar60,fVar57),4);
      iVar47 = -(uint)(fVar40 <= 0.0);
      iVar49 = -(uint)(fVar43 <= 0.0);
      fVar62 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                               CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar47 >> 8),
                                                  SUB41(fVar33,0) & ~(byte)iVar47)));
      fVar33 = (float)uVar51;
      fVar55 = (float)((ulong)uVar51 >> 0x20);
      uVar51 = NEON_frsqrts(CONCAT44(fVar60,fVar57),CONCAT44(fVar55 * fVar55,fVar33 * fVar33),4);
      iVar47 = -(uint)(fVar57 <= 0.0);
      iVar64 = -(uint)(fVar60 <= 0.0);
      fVar33 = fVar33 * (float)uVar51;
      fVar55 = fVar55 * (float)((ulong)uVar51 >> 0x20);
      fVar66 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                               CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar47 >> 8),
                                                  SUB41(fVar33,0) & ~(byte)iVar47)));
      fVar50 = (float)(CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                CONCAT16((byte)((uint)fVar54 >> 0x10) &
                                         ~(byte)((uint)iVar49 >> 0x10),
                                         CONCAT15((byte)((uint)fVar54 >> 8) &
                                                  ~(byte)((uint)iVar49 >> 8),
                                                  CONCAT14(SUB41(fVar54,0) & ~(byte)iVar49,fVar62)))
                               ) >> 0x20);
      fVar56 = (float)(CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                                CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                         ~(byte)((uint)iVar64 >> 0x10),
                                         CONCAT15((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar64 >> 8),
                                                  CONCAT14(SUB41(fVar55,0) & ~(byte)iVar64,fVar66)))
                               ) >> 0x20);
      fVar33 = fVar32 * fVar32 + fVar29 * fVar29 + fVar31 * fVar31;
      fVar29 = fVar32 * fVar32 + fVar29 * fVar29 + fVar31 * fVar31;
      uVar51 = NEON_frecpe(CONCAT44(fVar29,fVar33),4);
      uVar52 = NEON_frecps(CONCAT44(fVar29,fVar33),uVar51,4);
      fVar41 = fVar41 * fVar62 + fVar38 * fVar66;
      fVar45 = fVar45 * fVar50 + fVar44 * fVar56;
      fVar39 = auVar37._0_4_ * fVar62 + fVar39 * fVar66;
      fVar32 = (float)uVar51 * (float)uVar52;
      fVar38 = (float)((ulong)uVar51 >> 0x20) * (float)((ulong)uVar52 >> 0x20);
      fVar31 = fVar41 * fVar41 + fVar45 * fVar45 + fVar39 * fVar39;
      fVar44 = fVar41 * fVar41 + fVar45 * fVar45 + fVar39 * fVar39;
      uVar52 = CONCAT44(fVar44,fVar31);
      iVar47 = -(uint)(fVar33 == 0.0);
      iVar49 = -(uint)(fVar29 == 0.0);
      uVar51 = NEON_frecps(CONCAT44(fVar29,fVar33),CONCAT44(fVar38,fVar32),4);
      uVar58 = NEON_frsqrte(uVar52,4);
      fVar33 = (float)uVar58;
      fVar61 = (float)((ulong)uVar58 >> 0x20);
      uVar24 = CONCAT44(fVar38 * (float)((ulong)uVar51 >> 0x20),fVar32 * (float)uVar51) &
               CONCAT17(~(byte)((uint)iVar49 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar49 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar49 >> 8),
                                          CONCAT14(~(byte)iVar49,
                                                   CONCAT13(~(byte)((uint)iVar47 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar47 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar47
                                                                                     >> 8),
                                                                              ~(byte)iVar47)))))));
      fVar65 = pfVar3[1];
      uVar51 = NEON_frsqrts(uVar52,CONCAT44(fVar61 * fVar61,fVar33 * fVar33),4);
      fVar54 = pfVar3[-4];
      fVar55 = pfVar3[-3];
      fVar32 = (float)uVar24 * fVar40 * fVar62 * fVar57 * fVar66;
      fVar38 = (float)(uVar24 >> 0x20) * fVar43 * fVar50 * fVar60 * fVar56;
      iVar47 = -(uint)(fVar31 <= 0.0);
      iVar49 = -(uint)(fVar44 <= 0.0);
      fVar29 = *pfVar3 * *param_6;
      fVar33 = fVar33 * (float)uVar51;
      fVar61 = fVar61 * (float)((ulong)uVar51 >> 0x20);
      fVar62 = pfVar3[-2];
      fVar66 = pfVar3[-1];
      pfVar3 = pfVar3 + 8;
      fVar40 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                               CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar47 >> 8),
                                                  SUB41(fVar33,0) & ~(byte)iVar47)));
      uVar24 = CONCAT44(fVar29,fVar29) ^
               (CONCAT44(fVar29,fVar29) ^ uVar9) &
               CONCAT44(-(uint)((float)((ulong)uVar8 >> 0x20) < fVar38 * fVar65 * fVar38 * fVar65),
                        -(uint)((float)uVar8 < fVar32 * fVar65 * fVar32 * fVar65));
      fVar43 = (float)(CONCAT17((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                CONCAT16((byte)((uint)fVar61 >> 0x10) &
                                         ~(byte)((uint)iVar49 >> 0x10),
                                         CONCAT15((byte)((uint)fVar61 >> 8) &
                                                  ~(byte)((uint)iVar49 >> 8),
                                                  CONCAT14(SUB41(fVar61,0) & ~(byte)iVar49,fVar40)))
                               ) >> 0x20);
      fVar33 = (float)uVar24;
      fVar31 = (float)(uVar24 >> 0x20);
      fVar44 = *(float *)(param_3 + lVar7 + 4);
      fVar29 = *(float *)(param_3 + lVar6 + 4);
      fVar13 = fVar10 * fVar54 + fVar22 * fVar55 + fVar35 * fVar62 + fVar13 * fVar66 +
               fVar32 * fVar41 * fVar40 * fVar65;
      fVar14 = fVar19 * fVar54 + fVar25 * fVar55 + fVar14 * fVar62 + fVar18 * fVar66 +
               fVar38 * fVar45 * fVar43 * fVar65;
      fVar15 = fVar11 * fVar54 + fVar26 * fVar55 + fVar15 * fVar62 + fVar30 * fVar66 +
               fVar32 * fVar39 * fVar40 * fVar65;
      fVar17 = fVar12 * fVar54 + fVar28 * fVar55 + fVar17 * fVar62 + fVar34 * fVar66 +
               fVar38 * (auVar37._4_4_ * fVar50 + fVar42 * fVar56) * fVar43 * fVar65;
      fVar34 = fVar33 * fVar54 * fVar44;
      fVar44 = fVar31 * fVar54 * fVar44;
      fVar18 = fVar33 * fVar55 * fVar29;
      fVar29 = fVar31 * fVar55 * fVar29;
      fVar35 = *(float *)(param_3 + lVar4 + 4);
      fVar30 = *(float *)(param_3 + lVar5 + 4);
      ((undefined8 *)(param_2 + lVar7))[1] =
           CONCAT44(fVar12 + fVar44 * fVar17,fVar11 + fVar34 * fVar15);
      *(undefined8 *)(param_2 + lVar7) = CONCAT44(fVar19 + fVar44 * fVar14,fVar10 + fVar34 * fVar13)
      ;
      uVar52 = ((undefined8 *)(param_2 + lVar6))[1];
      uVar51 = *(undefined8 *)(param_2 + lVar6);
      fVar10 = fVar33 * fVar62 * fVar35;
      fVar35 = fVar31 * fVar62 * fVar35;
      ((undefined8 *)(param_2 + lVar6))[1] =
           CONCAT44((float)((ulong)uVar52 >> 0x20) + fVar29 * fVar17,(float)uVar52 + fVar18 * fVar15
                   );
      *(undefined8 *)(param_2 + lVar6) =
           CONCAT44((float)((ulong)uVar51 >> 0x20) + fVar29 * fVar14,(float)uVar51 + fVar18 * fVar13
                   );
      uVar52 = ((undefined8 *)(param_2 + lVar4))[1];
      uVar51 = *(undefined8 *)(param_2 + lVar4);
      fVar19 = fVar33 * fVar66 * fVar30;
      fVar30 = fVar31 * fVar66 * fVar30;
      ((undefined8 *)(param_2 + lVar4))[1] =
           CONCAT44((float)((ulong)uVar52 >> 0x20) + fVar17 * fVar35,(float)uVar52 + fVar15 * fVar10
                   );
      *(undefined8 *)(param_2 + lVar4) =
           CONCAT44((float)((ulong)uVar51 >> 0x20) + fVar14 * fVar35,(float)uVar51 + fVar13 * fVar10
                   );
      uVar52 = ((undefined8 *)(param_2 + lVar5))[1];
      uVar51 = *(undefined8 *)(param_2 + lVar5);
      ((undefined8 *)(param_2 + lVar5))[1] =
           CONCAT44(fVar17 * fVar30 + (float)((ulong)uVar52 >> 0x20),fVar15 * fVar19 + (float)uVar52
                   );
      *(undefined8 *)(param_2 + lVar5) =
           CONCAT44(fVar14 * fVar30 + (float)((ulong)uVar51 >> 0x20),fVar13 * fVar19 + (float)uVar51
                   );
    } while (uVar2 != 0);
  }
  return;
}

