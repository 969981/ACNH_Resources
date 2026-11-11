
void FUN_00579be0(uint param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 float *param_6)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
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
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  int iVar40;
  int iVar42;
  float fVar43;
  undefined1 auVar41 [16];
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar52;
  undefined8 uVar53;
  float fVar55;
  undefined1 auVar54 [16];
  float fVar56;
  undefined1 auVar57 [16];
  float fVar58;
  int iVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  int iVar63;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    pfVar3 = (float *)(param_4 + 0x10);
    do {
      lVar6 = (ulong)*(ushort *)(pfVar3 + 2) * 0x10;
      lVar5 = (ulong)*(ushort *)(pfVar3 + 3) * 0x10;
      lVar4 = (ulong)*(ushort *)((long)pfVar3 + 0xe) * 0x10;
      uVar62 = ((undefined8 *)(param_2 + lVar5))[1];
      uVar53 = *(undefined8 *)(param_2 + lVar5);
      uVar19 = ((undefined8 *)(param_2 + lVar4))[1];
      uVar16 = *(undefined8 *)(param_2 + lVar4);
      lVar7 = (ulong)*(ushort *)((long)pfVar3 + 10) * 0x10;
      uVar47 = ((undefined8 *)(param_2 + lVar6))[1];
      uVar46 = *(undefined8 *)(param_2 + lVar6);
      fVar22 = (float)uVar53;
      fVar12 = (float)uVar16;
      fVar26 = fVar12 - fVar22;
      fVar13 = (float)((ulong)uVar53 >> 0x20);
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar27 = fVar17 - fVar13;
      fVar14 = (float)uVar62;
      fVar18 = (float)uVar19;
      fVar28 = fVar18 - fVar14;
      fVar15 = (float)((ulong)uVar62 >> 0x20);
      fVar20 = (float)((ulong)uVar19 >> 0x20);
      fVar29 = fVar20 - fVar15;
      auVar39._4_4_ = fVar27;
      auVar39._0_4_ = fVar26;
      auVar39._8_4_ = fVar28;
      auVar39._12_4_ = fVar29;
      auVar41._4_4_ = fVar27;
      auVar41._0_4_ = fVar26;
      auVar41._8_4_ = fVar28;
      auVar41._12_4_ = fVar29;
      auVar39 = NEON_ext(auVar39,auVar41,4,1);
      uVar62 = ((undefined8 *)(param_2 + lVar7))[1];
      uVar53 = *(undefined8 *)(param_2 + lVar7);
      auVar48 = NEON_ext(auVar39,auVar39,8,1);
      fVar8 = (float)uVar46;
      auVar30._0_4_ = fVar8 - fVar22;
      fVar9 = (float)((ulong)uVar46 >> 0x20);
      auVar30._4_4_ = fVar9 - fVar13;
      fVar10 = (float)uVar47;
      auVar30._8_4_ = fVar10 - fVar14;
      fVar11 = (float)((ulong)uVar47 >> 0x20);
      auVar30._12_4_ = fVar11 - fVar15;
      auVar41 = NEON_ext(auVar30,auVar30,4,1);
      fVar21 = (float)uVar53;
      fVar32 = fVar21 - fVar22;
      fVar23 = (float)((ulong)uVar53 >> 0x20);
      fVar34 = fVar23 - fVar13;
      fVar24 = (float)uVar62;
      fVar37 = fVar24 - fVar14;
      fVar25 = (float)((ulong)uVar62 >> 0x20);
      fVar38 = fVar25 - fVar15;
      auVar54 = NEON_ext(auVar41,auVar41,8,1);
      auVar49._4_4_ = fVar34;
      auVar49._0_4_ = fVar32;
      auVar49._8_4_ = fVar37;
      auVar49._12_4_ = fVar38;
      auVar57._4_4_ = fVar34;
      auVar57._0_4_ = fVar32;
      auVar57._8_4_ = fVar37;
      auVar57._12_4_ = fVar38;
      auVar57 = NEON_ext(auVar49,auVar57,4,1);
      uVar46 = NEON_rev64(auVar48._0_8_,4);
      uVar53 = NEON_rev64(auVar54._0_8_,4);
      auVar49 = NEON_ext(auVar57,auVar57,8,1);
      uVar47 = NEON_rev64(auVar49._0_8_,4);
      uVar2 = uVar2 - 1;
      fVar36 = (float)((ulong)uVar46 >> 0x20);
      auVar31._0_4_ = fVar26 * auVar41._0_4_ - auVar30._0_4_ * auVar39._0_4_;
      auVar31._4_4_ = fVar27 * auVar41._4_4_ - auVar30._4_4_ * auVar39._4_4_;
      auVar31._8_4_ = fVar28 * (float)uVar53 - auVar30._8_4_ * (float)uVar46;
      auVar31._12_4_ = fVar29 * (float)((ulong)uVar53 >> 0x20) - auVar30._12_4_ * fVar36;
      fVar33 = fVar32 * auVar39._0_4_ - fVar26 * auVar57._0_4_;
      fVar35 = fVar34 * auVar39._4_4_ - fVar27 * auVar57._4_4_;
      fVar32 = fVar37 * (float)uVar46 - fVar28 * (float)uVar47;
      fVar29 = fVar38 * fVar36 - fVar29 * (float)((ulong)uVar47 >> 0x20);
      auVar41 = NEON_ext(auVar31,auVar31,4,1);
      auVar48._4_4_ = fVar35;
      auVar48._0_4_ = fVar33;
      auVar48._8_4_ = fVar32;
      auVar48._12_4_ = fVar29;
      auVar54._4_4_ = fVar35;
      auVar54._0_4_ = fVar33;
      auVar54._8_4_ = fVar32;
      auVar54._12_4_ = fVar29;
      auVar39 = NEON_ext(auVar48,auVar54,4,1);
      fVar34 = auVar41._0_4_;
      fVar37 = auVar41._4_4_;
      fVar38 = fVar34 * fVar34 + fVar37 * fVar37 + auVar31._0_4_ * auVar31._0_4_;
      fVar36 = fVar34 * fVar34 + fVar37 * fVar37 + auVar31._0_4_ * auVar31._0_4_;
      uVar46 = NEON_frsqrte(CONCAT44(fVar36,fVar38),4);
      fVar29 = auVar39._0_4_;
      fVar32 = auVar39._4_4_;
      fVar52 = fVar29 * fVar29 + fVar32 * fVar32 + fVar33 * fVar33;
      fVar55 = fVar29 * fVar29 + fVar32 * fVar32 + fVar33 * fVar33;
      fVar44 = (float)uVar46;
      fVar50 = (float)((ulong)uVar46 >> 0x20);
      uVar46 = NEON_frsqrts(CONCAT44(fVar36,fVar38),CONCAT44(fVar50 * fVar50,fVar44 * fVar44),4);
      fVar44 = fVar44 * (float)uVar46;
      fVar50 = fVar50 * (float)((ulong)uVar46 >> 0x20);
      uVar46 = NEON_frsqrte(CONCAT44(fVar55,fVar52),4);
      iVar40 = -(uint)(fVar38 <= 0.0);
      iVar42 = -(uint)(fVar36 <= 0.0);
      fVar45 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                               CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar44 >> 8) &
                                                  ~(byte)((uint)iVar40 >> 8),
                                                  SUB41(fVar44,0) & ~(byte)iVar40)));
      fVar44 = (float)uVar46;
      fVar51 = (float)((ulong)uVar46 >> 0x20);
      uVar46 = NEON_frsqrts(CONCAT44(fVar55,fVar52),CONCAT44(fVar51 * fVar51,fVar44 * fVar44),4);
      iVar40 = -(uint)(fVar52 <= 0.0);
      iVar59 = -(uint)(fVar55 <= 0.0);
      fVar44 = fVar44 * (float)uVar46;
      fVar51 = fVar51 * (float)((ulong)uVar46 >> 0x20);
      fVar56 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                               CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar44 >> 8) &
                                                  ~(byte)((uint)iVar40 >> 8),
                                                  SUB41(fVar44,0) & ~(byte)iVar40)));
      fVar43 = (float)(CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                                CONCAT16((byte)((uint)fVar50 >> 0x10) &
                                         ~(byte)((uint)iVar42 >> 0x10),
                                         CONCAT15((byte)((uint)fVar50 >> 8) &
                                                  ~(byte)((uint)iVar42 >> 8),
                                                  CONCAT14(SUB41(fVar50,0) & ~(byte)iVar42,fVar45)))
                               ) >> 0x20);
      fVar60 = (float)(CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                                CONCAT16((byte)((uint)fVar51 >> 0x10) &
                                         ~(byte)((uint)iVar59 >> 0x10),
                                         CONCAT15((byte)((uint)fVar51 >> 8) &
                                                  ~(byte)((uint)iVar59 >> 8),
                                                  CONCAT14(SUB41(fVar51,0) & ~(byte)iVar59,fVar56)))
                               ) >> 0x20);
      fVar34 = fVar34 * fVar45 + fVar29 * fVar56;
      fVar37 = fVar37 * fVar43 + fVar32 * fVar60;
      fVar33 = auVar31._0_4_ * fVar45 + fVar33 * fVar56;
      fVar32 = fVar34 * fVar34 + fVar37 * fVar37 + fVar33 * fVar33;
      fVar44 = fVar34 * fVar34 + fVar37 * fVar37 + fVar33 * fVar33;
      uVar46 = CONCAT44(fVar44,fVar32);
      fVar29 = fVar28 * fVar28 + fVar26 * fVar26 + fVar27 * fVar27;
      fVar26 = fVar28 * fVar28 + fVar26 * fVar26 + fVar27 * fVar27;
      uVar47 = NEON_frsqrte(uVar46,4);
      uVar53 = NEON_frecpe(CONCAT44(fVar26,fVar29),4);
      uVar62 = NEON_frecps(CONCAT44(fVar26,fVar29),uVar53,4);
      fVar27 = (float)uVar47;
      fVar28 = (float)((ulong)uVar47 >> 0x20);
      fVar58 = (float)uVar53 * (float)uVar62;
      fVar61 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar62 >> 0x20);
      iVar40 = -(uint)(fVar32 <= 0.0);
      iVar42 = -(uint)(fVar44 <= 0.0);
      uVar47 = NEON_frsqrts(uVar46,CONCAT44(fVar28 * fVar28,fVar27 * fVar27),4);
      iVar59 = -(uint)(fVar29 == 0.0);
      iVar63 = -(uint)(fVar26 == 0.0);
      uVar46 = NEON_frecps(CONCAT44(fVar26,fVar29),CONCAT44(fVar61,fVar58),4);
      fVar27 = fVar27 * (float)uVar47;
      fVar28 = fVar28 * (float)((ulong)uVar47 >> 0x20);
      fVar44 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                               CONCAT12((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar27 >> 8) &
                                                  ~(byte)((uint)iVar40 >> 8),
                                                  SUB41(fVar27,0) & ~(byte)iVar40)));
      fVar51 = pfVar3[1];
      fVar50 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                                CONCAT16((byte)((uint)fVar28 >> 0x10) &
                                         ~(byte)((uint)iVar42 >> 0x10),
                                         CONCAT15((byte)((uint)fVar28 >> 8) &
                                                  ~(byte)((uint)iVar42 >> 8),
                                                  CONCAT14(SUB41(fVar28,0) & ~(byte)iVar42,fVar44)))
                               ) >> 0x20);
      uVar1 = CONCAT44(fVar61 * (float)((ulong)uVar46 >> 0x20),fVar58 * (float)uVar46) &
              CONCAT17(~(byte)((uint)iVar63 >> 0x18),
                       CONCAT16(~(byte)((uint)iVar63 >> 0x10),
                                CONCAT15(~(byte)((uint)iVar63 >> 8),
                                         CONCAT14(~(byte)iVar63,
                                                  CONCAT13(~(byte)((uint)iVar59 >> 0x18),
                                                           CONCAT12(~(byte)((uint)iVar59 >> 0x10),
                                                                    CONCAT11(~(byte)((uint)iVar59 >>
                                                                                    8),~(byte)iVar59
                                                                            )))))));
      fVar28 = (float)uVar1 * fVar38 * fVar45 * fVar52 * fVar56;
      fVar32 = (float)(uVar1 >> 0x20) * fVar36 * fVar43 * fVar55 * fVar60;
      fVar38 = pfVar3[-4];
      fVar36 = pfVar3[-3];
      fVar45 = *pfVar3 * *param_6;
      fVar56 = pfVar3[-2];
      fVar52 = pfVar3[-1];
      pfVar3 = pfVar3 + 8;
      fVar26 = *(float *)(param_3 + lVar7 + 4);
      fVar27 = fVar38 * fVar45 * *(float *)(param_3 + lVar6 + 4);
      fVar29 = *(float *)(param_3 + lVar5 + 4);
      fVar12 = fVar8 * fVar38 + fVar21 * fVar36 + fVar22 * fVar56 + fVar12 * fVar52 +
               fVar28 * fVar34 * fVar44 * fVar51;
      fVar13 = fVar9 * fVar38 + fVar23 * fVar36 + fVar13 * fVar56 + fVar17 * fVar52 +
               fVar32 * fVar37 * fVar50 * fVar51;
      fVar14 = fVar10 * fVar38 + fVar24 * fVar36 + fVar14 * fVar56 + fVar18 * fVar52 +
               fVar28 * fVar33 * fVar44 * fVar51;
      fVar15 = fVar11 * fVar38 + fVar25 * fVar36 + fVar15 * fVar56 + fVar20 * fVar52 +
               fVar32 * (auVar31._4_4_ * fVar43 + fVar35 * fVar60) * fVar50 * fVar51;
      fVar22 = *(float *)(param_3 + lVar4 + 4);
      ((undefined8 *)(param_2 + lVar6))[1] =
           CONCAT44(fVar11 + fVar15 * fVar27,fVar10 + fVar14 * fVar27);
      *(undefined8 *)(param_2 + lVar6) = CONCAT44(fVar9 + fVar13 * fVar27,fVar8 + fVar12 * fVar27);
      uVar47 = ((undefined8 *)(param_2 + lVar7))[1];
      uVar46 = *(undefined8 *)(param_2 + lVar7);
      fVar26 = fVar45 * fVar36 * fVar26;
      ((undefined8 *)(param_2 + lVar7))[1] =
           CONCAT44((float)((ulong)uVar47 >> 0x20) + fVar15 * fVar26,(float)uVar47 + fVar14 * fVar26
                   );
      *(undefined8 *)(param_2 + lVar7) =
           CONCAT44((float)((ulong)uVar46 >> 0x20) + fVar13 * fVar26,(float)uVar46 + fVar12 * fVar26
                   );
      uVar47 = ((undefined8 *)(param_2 + lVar5))[1];
      uVar46 = *(undefined8 *)(param_2 + lVar5);
      fVar29 = fVar45 * fVar56 * fVar29;
      ((undefined8 *)(param_2 + lVar5))[1] =
           CONCAT44((float)((ulong)uVar47 >> 0x20) + fVar15 * fVar29,(float)uVar47 + fVar14 * fVar29
                   );
      *(undefined8 *)(param_2 + lVar5) =
           CONCAT44((float)((ulong)uVar46 >> 0x20) + fVar13 * fVar29,(float)uVar46 + fVar12 * fVar29
                   );
      fVar22 = fVar45 * fVar52 * fVar22;
      uVar47 = ((undefined8 *)(param_2 + lVar4))[1];
      uVar46 = *(undefined8 *)(param_2 + lVar4);
      ((undefined8 *)(param_2 + lVar4))[1] =
           CONCAT44(fVar15 * fVar22 + (float)((ulong)uVar47 >> 0x20),fVar14 * fVar22 + (float)uVar47
                   );
      *(undefined8 *)(param_2 + lVar4) =
           CONCAT44(fVar13 * fVar22 + (float)((ulong)uVar46 >> 0x20),fVar12 * fVar22 + (float)uVar46
                   );
    } while (uVar2 != 0);
  }
  return;
}

