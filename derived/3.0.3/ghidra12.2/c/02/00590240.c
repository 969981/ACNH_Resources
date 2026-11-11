
void FUN_00590240(long param_1,long param_2,undefined8 *param_3,float *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar27;
  ulong uVar26;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  int iVar49;
  int iVar51;
  float fVar52;
  undefined1 auVar50 [16];
  undefined8 uVar53;
  undefined8 uVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [16];
  float fVar59;
  undefined8 uVar60;
  float fVar62;
  float fVar63;
  undefined1 auVar61 [16];
  float fVar64;
  undefined1 auVar65 [16];
  int iVar66;
  float fVar67;
  float fVar68;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar47 = *param_3;
  lVar5 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d90);
  if (lVar5 != 0) {
    FUN_00443a00(lVar5,"TtSingle Bend Stiffness");
  }
  uVar4 = DAT_0413f310;
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      pfVar9 = (float *)(*(long *)(param_1 + 0x38) + (long)iVar6 * 0x30);
      iVar6 = iVar6 + 1;
      lVar7 = (ulong)*(ushort *)(pfVar9 + 0xb) * 0x10;
      lVar10 = (ulong)*(ushort *)((long)pfVar9 + 0x2a) * 0x10;
      lVar8 = (ulong)*(ushort *)((long)pfVar9 + 0x2e) * 0x10;
      uVar17 = ((undefined8 *)(param_2 + lVar7))[1];
      uVar60 = *(undefined8 *)(param_2 + lVar7);
      uVar23 = ((undefined8 *)(param_2 + lVar8))[1];
      uVar21 = *(undefined8 *)(param_2 + lVar8);
      puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar9 + 10) * 0x10);
      uVar54 = puVar2[1];
      uVar53 = *puVar2;
      uVar29 = ((undefined8 *)(param_2 + lVar10))[1];
      uVar25 = *(undefined8 *)(param_2 + lVar10);
      fVar32 = (float)uVar60;
      fVar14 = (float)uVar21;
      fVar31 = fVar14 - fVar32;
      fVar15 = (float)((ulong)uVar60 >> 0x20);
      fVar19 = (float)((ulong)uVar21 >> 0x20);
      fVar33 = fVar19 - fVar15;
      fVar16 = (float)uVar17;
      fVar22 = (float)uVar23;
      fVar34 = fVar22 - fVar16;
      fVar18 = (float)((ulong)uVar17 >> 0x20);
      fVar36 = (float)((ulong)uVar23 >> 0x20);
      fVar35 = fVar36 - fVar18;
      auVar48._4_4_ = fVar33;
      auVar48._0_4_ = fVar31;
      auVar48._8_4_ = fVar34;
      auVar48._12_4_ = fVar35;
      auVar50._4_4_ = fVar33;
      auVar50._0_4_ = fVar31;
      auVar50._8_4_ = fVar34;
      auVar50._12_4_ = fVar35;
      auVar48 = NEON_ext(auVar48,auVar50,4,1);
      fVar11 = (float)uVar53;
      auVar37._0_4_ = fVar11 - fVar32;
      fVar20 = (float)((ulong)uVar53 >> 0x20);
      auVar37._4_4_ = fVar20 - fVar15;
      fVar12 = (float)uVar54;
      auVar37._8_4_ = fVar12 - fVar16;
      fVar13 = (float)((ulong)uVar54 >> 0x20);
      auVar37._12_4_ = fVar13 - fVar18;
      auVar50 = NEON_ext(auVar37,auVar37,4,1);
      fVar24 = (float)uVar25;
      fVar39 = fVar24 - fVar32;
      fVar27 = (float)((ulong)uVar25 >> 0x20);
      fVar42 = fVar27 - fVar15;
      fVar28 = (float)uVar29;
      fVar45 = fVar28 - fVar16;
      fVar30 = (float)((ulong)uVar29 >> 0x20);
      fVar46 = fVar30 - fVar18;
      auVar55._4_4_ = fVar42;
      auVar55._0_4_ = fVar39;
      auVar55._8_4_ = fVar45;
      auVar55._12_4_ = fVar46;
      auVar61._4_4_ = fVar42;
      auVar61._0_4_ = fVar39;
      auVar61._8_4_ = fVar45;
      auVar61._12_4_ = fVar46;
      auVar65 = NEON_ext(auVar55,auVar61,4,1);
      auVar55 = NEON_ext(auVar48,auVar48,8,1);
      auVar61 = NEON_ext(auVar50,auVar50,8,1);
      uVar53 = NEON_rev64(auVar55._0_8_,4);
      uVar60 = NEON_rev64(auVar61._0_8_,4);
      auVar55 = NEON_ext(auVar65,auVar65,8,1);
      uVar54 = NEON_rev64(auVar55._0_8_,4);
      fVar41 = (float)((ulong)uVar53 >> 0x20);
      auVar38._0_4_ = fVar31 * auVar50._0_4_ - auVar37._0_4_ * auVar48._0_4_;
      auVar38._4_4_ = fVar33 * auVar50._4_4_ - auVar37._4_4_ * auVar48._4_4_;
      auVar38._8_4_ = fVar34 * (float)uVar60 - auVar37._8_4_ * (float)uVar53;
      auVar38._12_4_ = fVar35 * (float)((ulong)uVar60 >> 0x20) - auVar37._12_4_ * fVar41;
      fVar40 = fVar39 * auVar48._0_4_ - fVar31 * auVar65._0_4_;
      fVar43 = fVar42 * auVar48._4_4_ - fVar33 * auVar65._4_4_;
      fVar39 = fVar45 * (float)uVar53 - fVar34 * (float)uVar54;
      fVar35 = fVar46 * fVar41 - fVar35 * (float)((ulong)uVar54 >> 0x20);
      auVar50 = NEON_ext(auVar38,auVar38,4,1);
      auVar65._4_4_ = fVar43;
      auVar65._0_4_ = fVar40;
      auVar65._8_4_ = fVar39;
      auVar65._12_4_ = fVar35;
      auVar3._4_4_ = fVar43;
      auVar3._0_4_ = fVar40;
      auVar3._8_4_ = fVar39;
      auVar3._12_4_ = fVar35;
      auVar48 = NEON_ext(auVar65,auVar3,4,1);
      fVar45 = auVar50._0_4_;
      fVar46 = auVar50._4_4_;
      fVar41 = fVar45 * fVar45 + fVar46 * fVar46 + auVar38._0_4_ * auVar38._0_4_;
      fVar44 = fVar45 * fVar45 + fVar46 * fVar46 + auVar38._0_4_ * auVar38._0_4_;
      uVar53 = NEON_frsqrte(CONCAT44(fVar44,fVar41),4);
      fVar39 = auVar48._0_4_;
      fVar42 = auVar48._4_4_;
      fVar59 = fVar39 * fVar39 + fVar42 * fVar42 + fVar40 * fVar40;
      fVar62 = fVar39 * fVar39 + fVar42 * fVar42 + fVar40 * fVar40;
      fVar35 = (float)uVar53;
      fVar56 = (float)((ulong)uVar53 >> 0x20);
      uVar53 = NEON_frsqrts(CONCAT44(fVar44,fVar41),CONCAT44(fVar56 * fVar56,fVar35 * fVar35),4);
      fVar35 = fVar35 * (float)uVar53;
      fVar56 = fVar56 * (float)((ulong)uVar53 >> 0x20);
      uVar53 = NEON_frsqrte(CONCAT44(fVar62,fVar59),4);
      iVar49 = -(uint)(fVar41 <= 0.0);
      iVar51 = -(uint)(fVar44 <= 0.0);
      fVar64 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar35 >> 8) &
                                                  ~(byte)((uint)iVar49 >> 8),
                                                  SUB41(fVar35,0) & ~(byte)iVar49)));
      fVar35 = (float)uVar53;
      fVar57 = (float)((ulong)uVar53 >> 0x20);
      uVar53 = NEON_frsqrts(CONCAT44(fVar62,fVar59),CONCAT44(fVar57 * fVar57,fVar35 * fVar35),4);
      iVar49 = -(uint)(fVar59 <= 0.0);
      iVar66 = -(uint)(fVar62 <= 0.0);
      fVar35 = fVar35 * (float)uVar53;
      fVar57 = fVar57 * (float)((ulong)uVar53 >> 0x20);
      fVar68 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar35 >> 8) &
                                                  ~(byte)((uint)iVar49 >> 8),
                                                  SUB41(fVar35,0) & ~(byte)iVar49)));
      fVar52 = (float)(CONCAT17((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                                CONCAT16((byte)((uint)fVar56 >> 0x10) &
                                         ~(byte)((uint)iVar51 >> 0x10),
                                         CONCAT15((byte)((uint)fVar56 >> 8) &
                                                  ~(byte)((uint)iVar51 >> 8),
                                                  CONCAT14(SUB41(fVar56,0) & ~(byte)iVar51,fVar64)))
                               ) >> 0x20);
      fVar58 = (float)(CONCAT17((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                                CONCAT16((byte)((uint)fVar57 >> 0x10) &
                                         ~(byte)((uint)iVar66 >> 0x10),
                                         CONCAT15((byte)((uint)fVar57 >> 8) &
                                                  ~(byte)((uint)iVar66 >> 8),
                                                  CONCAT14(SUB41(fVar57,0) & ~(byte)iVar66,fVar68)))
                               ) >> 0x20);
      fVar35 = fVar34 * fVar34 + fVar31 * fVar31 + fVar33 * fVar33;
      fVar31 = fVar34 * fVar34 + fVar31 * fVar31 + fVar33 * fVar33;
      uVar53 = NEON_frecpe(CONCAT44(fVar31,fVar35),4);
      uVar54 = NEON_frecps(CONCAT44(fVar31,fVar35),uVar53,4);
      fVar39 = fVar45 * fVar64 + fVar39 * fVar68;
      fVar45 = fVar46 * fVar52 + fVar42 * fVar58;
      fVar46 = auVar38._0_4_ * fVar64 + fVar40 * fVar68;
      fVar33 = (float)uVar53 * (float)uVar54;
      fVar34 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar54 >> 0x20);
      fVar42 = fVar39 * fVar39 + fVar45 * fVar45 + fVar46 * fVar46;
      fVar40 = fVar39 * fVar39 + fVar45 * fVar45 + fVar46 * fVar46;
      uVar54 = CONCAT44(fVar40,fVar42);
      iVar49 = -(uint)(fVar35 == 0.0);
      iVar51 = -(uint)(fVar31 == 0.0);
      uVar53 = NEON_frecps(CONCAT44(fVar31,fVar35),CONCAT44(fVar34,fVar33),4);
      uVar60 = NEON_frsqrte(uVar54,4);
      fVar35 = (float)uVar60;
      fVar63 = (float)((ulong)uVar60 >> 0x20);
      uVar26 = CONCAT44(fVar34 * (float)((ulong)uVar53 >> 0x20),fVar33 * (float)uVar53) &
               CONCAT17(~(byte)((uint)iVar51 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar51 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar51 >> 8),
                                          CONCAT14(~(byte)iVar51,
                                                   CONCAT13(~(byte)((uint)iVar49 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar49 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar49
                                                                                     >> 8),
                                                                              ~(byte)iVar49)))))));
      fVar67 = pfVar9[5];
      uVar53 = NEON_frsqrts(uVar54,CONCAT44(fVar63 * fVar63,fVar35 * fVar35),4);
      fVar56 = *pfVar9;
      fVar57 = pfVar9[1];
      fVar33 = (float)uVar26 * fVar41 * fVar64 * fVar59 * fVar68;
      fVar34 = (float)(uVar26 >> 0x20) * fVar44 * fVar52 * fVar62 * fVar58;
      iVar49 = -(uint)(fVar42 <= 0.0);
      iVar51 = -(uint)(fVar40 <= 0.0);
      fVar31 = pfVar9[4] * *param_4;
      fVar35 = fVar35 * (float)uVar53;
      fVar63 = fVar63 * (float)((ulong)uVar53 >> 0x20);
      fVar64 = pfVar9[2];
      fVar68 = pfVar9[3];
      fVar41 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar35 >> 8) &
                                                  ~(byte)((uint)iVar49 >> 8),
                                                  SUB41(fVar35,0) & ~(byte)iVar49)));
      uVar26 = CONCAT44(fVar31,fVar31) ^
               (CONCAT44(fVar31,fVar31) ^ uVar4) &
               CONCAT44(-(uint)((float)((ulong)uVar47 >> 0x20) < fVar34 * fVar67 * fVar34 * fVar67),
                        -(uint)((float)uVar47 < fVar33 * fVar67 * fVar33 * fVar67));
      fVar31 = (float)uVar26;
      fVar35 = (float)(uVar26 >> 0x20);
      fVar44 = (float)(CONCAT17((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                                CONCAT16((byte)((uint)fVar63 >> 0x10) &
                                         ~(byte)((uint)iVar51 >> 0x10),
                                         CONCAT15((byte)((uint)fVar63 >> 8) &
                                                  ~(byte)((uint)iVar51 >> 8),
                                                  CONCAT14(SUB41(fVar63,0) & ~(byte)iVar51,fVar41)))
                               ) >> 0x20);
      fVar42 = fVar31 * fVar56 * pfVar9[6];
      fVar40 = fVar35 * fVar56 * pfVar9[6];
      fVar14 = fVar11 * fVar56 + fVar24 * fVar57 + fVar32 * fVar64 + fVar14 * fVar68 +
               fVar33 * fVar39 * fVar41 * fVar67;
      fVar15 = fVar20 * fVar56 + fVar27 * fVar57 + fVar15 * fVar64 + fVar19 * fVar68 +
               fVar34 * fVar45 * fVar44 * fVar67;
      fVar16 = fVar12 * fVar56 + fVar28 * fVar57 + fVar16 * fVar64 + fVar22 * fVar68 +
               fVar33 * fVar46 * fVar41 * fVar67;
      fVar18 = fVar13 * fVar56 + fVar30 * fVar57 + fVar18 * fVar64 + fVar36 * fVar68 +
               fVar34 * (auVar38._4_4_ * fVar52 + fVar43 * fVar58) * fVar44 * fVar67;
      fVar19 = fVar31 * fVar57 * pfVar9[7];
      fVar22 = fVar35 * fVar57 * pfVar9[7];
      fVar32 = pfVar9[8];
      fVar36 = pfVar9[9];
      puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar9 + 10) * 0x10);
      puVar2[1] = CONCAT44(fVar13 + fVar40 * fVar18,fVar12 + fVar42 * fVar16);
      *puVar2 = CONCAT44(fVar20 + fVar40 * fVar15,fVar11 + fVar42 * fVar14);
      uVar54 = ((undefined8 *)(param_2 + lVar10))[1];
      uVar53 = *(undefined8 *)(param_2 + lVar10);
      fVar11 = fVar31 * fVar64 * fVar32;
      fVar32 = fVar35 * fVar64 * fVar32;
      ((undefined8 *)(param_2 + lVar10))[1] =
           CONCAT44((float)((ulong)uVar54 >> 0x20) + fVar22 * fVar18,(float)uVar54 + fVar19 * fVar16
                   );
      *(undefined8 *)(param_2 + lVar10) =
           CONCAT44((float)((ulong)uVar53 >> 0x20) + fVar22 * fVar15,(float)uVar53 + fVar19 * fVar14
                   );
      uVar54 = ((undefined8 *)(param_2 + lVar7))[1];
      uVar53 = *(undefined8 *)(param_2 + lVar7);
      fVar20 = fVar31 * fVar68 * fVar36;
      fVar36 = fVar35 * fVar68 * fVar36;
      ((undefined8 *)(param_2 + lVar7))[1] =
           CONCAT44((float)((ulong)uVar54 >> 0x20) + fVar18 * fVar32,(float)uVar54 + fVar16 * fVar11
                   );
      *(undefined8 *)(param_2 + lVar7) =
           CONCAT44((float)((ulong)uVar53 >> 0x20) + fVar15 * fVar32,(float)uVar53 + fVar14 * fVar11
                   );
      uVar54 = ((undefined8 *)(param_2 + lVar8))[1];
      uVar53 = *(undefined8 *)(param_2 + lVar8);
      ((undefined8 *)(param_2 + lVar8))[1] =
           CONCAT44(fVar18 * fVar36 + (float)((ulong)uVar54 >> 0x20),fVar16 * fVar20 + (float)uVar54
                   );
      *(undefined8 *)(param_2 + lVar8) =
           CONCAT44(fVar15 * fVar36 + (float)((ulong)uVar53 >> 0x20),fVar14 * fVar20 + (float)uVar53
                   );
    } while (iVar1 != iVar6);
  }
  if (lVar5 != 0) {
    FUN_00443a70(lVar5,&DAT_04085310);
  }
  return;
}

