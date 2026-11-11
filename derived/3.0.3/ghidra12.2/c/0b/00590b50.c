
void FUN_00590b50(long param_1,long param_2,undefined8 param_3,float *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  int iVar45;
  float fVar46;
  int iVar48;
  float fVar49;
  undefined1 auVar47 [16];
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  float fVar55;
  float fVar56;
  undefined1 auVar54 [16];
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar61;
  undefined1 auVar60 [16];
  float fVar62;
  undefined1 auVar63 [16];
  int iVar64;
  int iVar65;
  undefined8 uVar66;
  
  iVar1 = *(int *)(param_1 + 0x40);
  lVar5 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d90);
  if (lVar5 != 0) {
    FUN_00443a00(lVar5,"TtSingle Bend Stiffness");
  }
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      pfVar7 = (float *)(*(long *)(param_1 + 0x38) + (long)iVar6 * 0x30);
      iVar6 = iVar6 + 1;
      lVar9 = (ulong)*(ushort *)(pfVar7 + 0xb) * 0x10;
      lVar8 = (ulong)*(ushort *)((long)pfVar7 + 0x2e) * 0x10;
      lVar10 = (ulong)*(ushort *)((long)pfVar7 + 0x2a) * 0x10;
      uVar66 = ((undefined8 *)(param_2 + lVar9))[1];
      uVar59 = *(undefined8 *)(param_2 + lVar9);
      uVar21 = ((undefined8 *)(param_2 + lVar8))[1];
      uVar19 = *(undefined8 *)(param_2 + lVar8);
      puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar7 + 10) * 0x10);
      uVar53 = puVar2[1];
      uVar52 = *puVar2;
      uVar27 = ((undefined8 *)(param_2 + lVar10))[1];
      uVar24 = *(undefined8 *)(param_2 + lVar10);
      fVar30 = (float)uVar59;
      fVar15 = (float)uVar19;
      fVar29 = fVar15 - fVar30;
      fVar43 = (float)((ulong)uVar59 >> 0x20);
      fVar16 = (float)((ulong)uVar19 >> 0x20);
      fVar31 = fVar16 - fVar43;
      fVar17 = (float)uVar66;
      fVar20 = (float)uVar21;
      fVar32 = fVar20 - fVar17;
      fVar18 = (float)((ulong)uVar66 >> 0x20);
      fVar22 = (float)((ulong)uVar21 >> 0x20);
      fVar33 = fVar22 - fVar18;
      auVar44._4_4_ = fVar31;
      auVar44._0_4_ = fVar29;
      auVar44._8_4_ = fVar32;
      auVar44._12_4_ = fVar33;
      auVar47._4_4_ = fVar31;
      auVar47._0_4_ = fVar29;
      auVar47._8_4_ = fVar32;
      auVar47._12_4_ = fVar33;
      auVar44 = NEON_ext(auVar44,auVar47,4,1);
      fVar11 = (float)uVar52;
      auVar34._0_4_ = fVar11 - fVar30;
      fVar12 = (float)((ulong)uVar52 >> 0x20);
      auVar34._4_4_ = fVar12 - fVar43;
      fVar13 = (float)uVar53;
      auVar34._8_4_ = fVar13 - fVar17;
      fVar14 = (float)((ulong)uVar53 >> 0x20);
      auVar34._12_4_ = fVar14 - fVar18;
      auVar47 = NEON_ext(auVar34,auVar34,4,1);
      fVar23 = (float)uVar24;
      fVar36 = fVar23 - fVar30;
      fVar25 = (float)((ulong)uVar24 >> 0x20);
      fVar38 = fVar25 - fVar43;
      fVar26 = (float)uVar27;
      fVar41 = fVar26 - fVar17;
      fVar28 = (float)((ulong)uVar27 >> 0x20);
      fVar42 = fVar28 - fVar18;
      auVar54._4_4_ = fVar38;
      auVar54._0_4_ = fVar36;
      auVar54._8_4_ = fVar41;
      auVar54._12_4_ = fVar42;
      auVar60._4_4_ = fVar38;
      auVar60._0_4_ = fVar36;
      auVar60._8_4_ = fVar41;
      auVar60._12_4_ = fVar42;
      auVar63 = NEON_ext(auVar54,auVar60,4,1);
      auVar54 = NEON_ext(auVar44,auVar44,8,1);
      auVar60 = NEON_ext(auVar47,auVar47,8,1);
      uVar52 = NEON_rev64(auVar54._0_8_,4);
      uVar59 = NEON_rev64(auVar60._0_8_,4);
      auVar54 = NEON_ext(auVar63,auVar63,8,1);
      uVar53 = NEON_rev64(auVar54._0_8_,4);
      fVar40 = (float)((ulong)uVar52 >> 0x20);
      auVar35._0_4_ = fVar29 * auVar47._0_4_ - auVar34._0_4_ * auVar44._0_4_;
      auVar35._4_4_ = fVar31 * auVar47._4_4_ - auVar34._4_4_ * auVar44._4_4_;
      auVar35._8_4_ = fVar32 * (float)uVar59 - auVar34._8_4_ * (float)uVar52;
      auVar35._12_4_ = fVar33 * (float)((ulong)uVar59 >> 0x20) - auVar34._12_4_ * fVar40;
      fVar37 = fVar36 * auVar44._0_4_ - fVar29 * auVar63._0_4_;
      fVar39 = fVar38 * auVar44._4_4_ - fVar31 * auVar63._4_4_;
      fVar36 = fVar41 * (float)uVar52 - fVar32 * (float)uVar53;
      fVar33 = fVar42 * fVar40 - fVar33 * (float)((ulong)uVar53 >> 0x20);
      auVar47 = NEON_ext(auVar35,auVar35,4,1);
      auVar63._4_4_ = fVar39;
      auVar63._0_4_ = fVar37;
      auVar63._8_4_ = fVar36;
      auVar63._12_4_ = fVar33;
      auVar4._4_4_ = fVar39;
      auVar4._0_4_ = fVar37;
      auVar4._8_4_ = fVar36;
      auVar4._12_4_ = fVar33;
      auVar44 = NEON_ext(auVar63,auVar4,4,1);
      fVar36 = auVar47._0_4_;
      fVar41 = auVar47._4_4_;
      fVar42 = fVar36 * fVar36 + fVar41 * fVar41 + auVar35._0_4_ * auVar35._0_4_;
      fVar40 = fVar36 * fVar36 + fVar41 * fVar41 + auVar35._0_4_ * auVar35._0_4_;
      uVar52 = NEON_frsqrte(CONCAT44(fVar40,fVar42),4);
      fVar33 = auVar44._0_4_;
      fVar38 = auVar44._4_4_;
      fVar57 = fVar33 * fVar33 + fVar38 * fVar38 + fVar37 * fVar37;
      fVar61 = fVar33 * fVar33 + fVar38 * fVar38 + fVar37 * fVar37;
      fVar50 = (float)uVar52;
      fVar55 = (float)((ulong)uVar52 >> 0x20);
      uVar52 = NEON_frsqrts(CONCAT44(fVar40,fVar42),CONCAT44(fVar55 * fVar55,fVar50 * fVar50),4);
      fVar50 = fVar50 * (float)uVar52;
      fVar55 = fVar55 * (float)((ulong)uVar52 >> 0x20);
      uVar52 = NEON_frsqrte(CONCAT44(fVar61,fVar57),4);
      iVar45 = -(uint)(fVar42 <= 0.0);
      iVar48 = -(uint)(fVar40 <= 0.0);
      fVar46 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                               CONCAT12((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar50 >> 8) &
                                                  ~(byte)((uint)iVar45 >> 8),
                                                  SUB41(fVar50,0) & ~(byte)iVar45)));
      fVar50 = (float)uVar52;
      fVar56 = (float)((ulong)uVar52 >> 0x20);
      uVar52 = NEON_frsqrts(CONCAT44(fVar61,fVar57),CONCAT44(fVar56 * fVar56,fVar50 * fVar50),4);
      iVar45 = -(uint)(fVar57 <= 0.0);
      iVar64 = -(uint)(fVar61 <= 0.0);
      fVar50 = fVar50 * (float)uVar52;
      fVar56 = fVar56 * (float)((ulong)uVar52 >> 0x20);
      fVar51 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                               CONCAT12((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar50 >> 8) &
                                                  ~(byte)((uint)iVar45 >> 8),
                                                  SUB41(fVar50,0) & ~(byte)iVar45)));
      fVar49 = (float)(CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                         ~(byte)((uint)iVar48 >> 0x10),
                                         CONCAT15((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar48 >> 8),
                                                  CONCAT14(SUB41(fVar55,0) & ~(byte)iVar48,fVar46)))
                               ) >> 0x20);
      fVar56 = (float)(CONCAT17((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                                CONCAT16((byte)((uint)fVar56 >> 0x10) &
                                         ~(byte)((uint)iVar64 >> 0x10),
                                         CONCAT15((byte)((uint)fVar56 >> 8) &
                                                  ~(byte)((uint)iVar64 >> 8),
                                                  CONCAT14(SUB41(fVar56,0) & ~(byte)iVar64,fVar51)))
                               ) >> 0x20);
      fVar36 = fVar36 * fVar46 + fVar33 * fVar51;
      fVar41 = fVar41 * fVar49 + fVar38 * fVar56;
      fVar37 = auVar35._0_4_ * fVar46 + fVar37 * fVar51;
      fVar33 = fVar32 * fVar32 + fVar29 * fVar29 + fVar31 * fVar31;
      fVar29 = fVar32 * fVar32 + fVar29 * fVar29 + fVar31 * fVar31;
      fVar31 = fVar36 * fVar36 + fVar41 * fVar41 + fVar37 * fVar37;
      fVar38 = fVar36 * fVar36 + fVar41 * fVar41 + fVar37 * fVar37;
      uVar52 = CONCAT44(fVar38,fVar31);
      uVar59 = NEON_frecpe(CONCAT44(fVar29,fVar33),4);
      uVar66 = NEON_frecps(CONCAT44(fVar29,fVar33),uVar59,4);
      uVar53 = NEON_frsqrte(uVar52,4);
      fVar32 = (float)uVar53;
      fVar55 = (float)((ulong)uVar53 >> 0x20);
      iVar45 = -(uint)(fVar31 <= 0.0);
      iVar48 = -(uint)(fVar38 <= 0.0);
      uVar53 = NEON_frsqrts(uVar52,CONCAT44(fVar55 * fVar55,fVar32 * fVar32),4);
      fVar31 = (float)uVar59 * (float)uVar66;
      fVar38 = (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar66 >> 0x20);
      iVar64 = -(uint)(fVar33 == 0.0);
      iVar65 = -(uint)(fVar29 == 0.0);
      uVar52 = NEON_frecps(CONCAT44(fVar29,fVar33),CONCAT44(fVar38,fVar31),4);
      fVar32 = fVar32 * (float)uVar53;
      fVar55 = fVar55 * (float)((ulong)uVar53 >> 0x20);
      uVar3 = CONCAT44(fVar38 * (float)((ulong)uVar52 >> 0x20),fVar31 * (float)uVar52) &
              CONCAT17(~(byte)((uint)iVar65 >> 0x18),
                       CONCAT16(~(byte)((uint)iVar65 >> 0x10),
                                CONCAT15(~(byte)((uint)iVar65 >> 8),
                                         CONCAT14(~(byte)iVar65,
                                                  CONCAT13(~(byte)((uint)iVar64 >> 0x18),
                                                           CONCAT12(~(byte)((uint)iVar64 >> 0x10),
                                                                    CONCAT11(~(byte)((uint)iVar64 >>
                                                                                    8),~(byte)iVar64
                                                                            )))))));
      fVar58 = *pfVar7;
      fVar62 = pfVar7[1];
      fVar50 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                               CONCAT12((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar32 >> 8) &
                                                  ~(byte)((uint)iVar45 >> 8),
                                                  SUB41(fVar32,0) & ~(byte)iVar45)));
      fVar31 = (float)uVar3 * fVar42 * fVar46 * fVar57 * fVar51;
      fVar32 = (float)(uVar3 >> 0x20) * fVar40 * fVar49 * fVar61 * fVar56;
      fVar42 = pfVar7[2];
      fVar46 = pfVar7[3];
      fVar40 = (float)(CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                         ~(byte)((uint)iVar48 >> 0x10),
                                         CONCAT15((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar48 >> 8),
                                                  CONCAT14(SUB41(fVar55,0) & ~(byte)iVar48,fVar50)))
                               ) >> 0x20);
      fVar55 = pfVar7[5];
      fVar33 = pfVar7[4] * *param_4;
      fVar29 = pfVar7[7];
      fVar38 = fVar58 * fVar33 * pfVar7[6];
      fVar15 = fVar11 * fVar58 + fVar23 * fVar62 + fVar30 * fVar42 + fVar15 * fVar46 +
               fVar31 * fVar36 * fVar50 * fVar55;
      fVar16 = fVar12 * fVar58 + fVar25 * fVar62 + fVar43 * fVar42 + fVar16 * fVar46 +
               fVar32 * fVar41 * fVar40 * fVar55;
      fVar17 = fVar13 * fVar58 + fVar26 * fVar62 + fVar17 * fVar42 + fVar20 * fVar46 +
               fVar31 * fVar37 * fVar50 * fVar55;
      fVar18 = fVar14 * fVar58 + fVar28 * fVar62 + fVar18 * fVar42 + fVar22 * fVar46 +
               fVar32 * (auVar35._4_4_ * fVar49 + fVar39 * fVar56) * fVar40 * fVar55;
      fVar30 = pfVar7[8];
      fVar43 = pfVar7[9];
      puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar7 + 10) * 0x10);
      puVar2[1] = CONCAT44(fVar14 + fVar18 * fVar38,fVar13 + fVar17 * fVar38);
      *puVar2 = CONCAT44(fVar12 + fVar16 * fVar38,fVar11 + fVar15 * fVar38);
      pfVar7 = (float *)(param_2 + lVar10);
      fVar11 = *pfVar7;
      fVar29 = fVar33 * fVar62 * fVar29;
      ((undefined8 *)(param_2 + lVar10))[1] =
           CONCAT44(pfVar7[3] + fVar18 * fVar29,pfVar7[2] + fVar17 * fVar29);
      *(undefined8 *)(param_2 + lVar10) =
           CONCAT44(pfVar7[1] + fVar16 * fVar29,fVar11 + fVar15 * fVar29);
      fVar30 = fVar33 * fVar42 * fVar30;
      uVar53 = ((undefined8 *)(param_2 + lVar9))[1];
      uVar52 = *(undefined8 *)(param_2 + lVar9);
      ((undefined8 *)(param_2 + lVar9))[1] =
           CONCAT44((float)((ulong)uVar53 >> 0x20) + fVar18 * fVar30,(float)uVar53 + fVar17 * fVar30
                   );
      *(undefined8 *)(param_2 + lVar9) =
           CONCAT44((float)((ulong)uVar52 >> 0x20) + fVar16 * fVar30,(float)uVar52 + fVar15 * fVar30
                   );
      fVar43 = fVar33 * fVar46 * fVar43;
      uVar53 = ((undefined8 *)(param_2 + lVar8))[1];
      uVar52 = *(undefined8 *)(param_2 + lVar8);
      ((undefined8 *)(param_2 + lVar8))[1] =
           CONCAT44(fVar18 * fVar43 + (float)((ulong)uVar53 >> 0x20),fVar17 * fVar43 + (float)uVar53
                   );
      *(undefined8 *)(param_2 + lVar8) =
           CONCAT44(fVar16 * fVar43 + (float)((ulong)uVar52 >> 0x20),fVar15 * fVar43 + (float)uVar52
                   );
    } while (iVar1 != iVar6);
  }
  if (lVar5 != 0) {
    FUN_00443a70(lVar5,&DAT_04085310);
  }
  return;
}

