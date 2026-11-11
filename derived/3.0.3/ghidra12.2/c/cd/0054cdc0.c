
void FUN_0054cdc0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5,float *param_6,undefined8 *param_7)

{
  undefined1 (*pauVar1) [12];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  float fVar10;
  byte bVar11;
  undefined1 uVar12;
  byte bVar13;
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
  int iVar27;
  int iVar29;
  undefined8 uVar28;
  float fVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar38;
  undefined1 auVar37 [16];
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x50);
  fVar9 = (float)*(undefined8 *)(param_1 + 0x58);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  auVar31._12_4_ = fVar8;
  auVar31._0_12_ = *pauVar1;
  auVar37._12_4_ = fVar8;
  auVar37._0_12_ = *pauVar1;
  auVar37 = NEON_ext(auVar31,auVar37,4,1);
  auVar43 = NEON_ext(auVar37,auVar37,8,1);
  fVar3 = (float)*param_2;
  auVar6._0_4_ = fVar3 - *(float *)(param_1 + 0x40);
  fVar33 = (float)((ulong)*param_2 >> 0x20);
  auVar6._4_4_ = fVar33 - *(float *)(param_1 + 0x44);
  fVar2 = (float)param_2[1];
  auVar6._8_4_ = fVar2 - *(float *)(param_1 + 0x48);
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  auVar6._12_4_ = fVar4 - *(float *)(param_1 + 0x4c);
  auVar31 = NEON_ext(auVar6,auVar6,4,1);
  fVar10 = (float)*(undefined8 *)*pauVar1;
  fVar34 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar42 = NEON_ext(auVar31,auVar31,8,1);
  uVar40 = NEON_rev64(auVar42._0_8_,4);
  uVar41 = NEON_rev64(auVar43._0_8_,4);
  fVar35 = (float)((ulong)uVar41 >> 0x20);
  fVar5 = auVar6._0_4_ * auVar37._0_4_ - fVar10 * auVar31._0_4_;
  fVar7 = auVar6._4_4_ * auVar37._4_4_ - fVar34 * auVar31._4_4_;
  auVar42._0_8_ = CONCAT44(fVar7,fVar5);
  auVar42._8_4_ = auVar6._8_4_ * (float)uVar41 - fVar9 * (float)uVar40;
  auVar42._12_4_ = auVar6._12_4_ * fVar35 - fVar8 * (float)((ulong)uVar40 >> 0x20);
  auVar31 = NEON_ext(auVar42,auVar42,4,1);
  uVar40 = NEON_ext(auVar31._0_8_,auVar42._0_8_,4,1);
  auVar43._0_4_ = fVar10 * (float)uVar40 - auVar37._0_4_ * auVar31._0_4_;
  auVar43._4_4_ = fVar34 * (float)((ulong)uVar40 >> 0x20) - auVar37._4_4_ * auVar31._4_4_;
  auVar43._8_4_ = fVar9 * fVar7 - (float)uVar41 * fVar5;
  auVar43._12_4_ = fVar8 * fVar7 - fVar35 * fVar7;
  auVar31 = NEON_ext(auVar43,auVar43,4,1);
  fVar5 = auVar6._0_4_ * fVar10 + auVar6._4_4_ * fVar34 + auVar6._8_4_ * fVar9;
  fVar7 = auVar31._0_4_;
  fVar8 = auVar31._4_4_;
  fVar30 = fVar7 * fVar7 + fVar8 * fVar8 + auVar43._0_4_ * auVar43._0_4_;
  fVar32 = fVar7 * fVar7 + fVar8 * fVar8 + auVar43._0_4_ * auVar43._0_4_;
  uVar40 = CONCAT44(fVar32,fVar30);
  uVar41 = NEON_frsqrte(uVar40,4);
  fVar35 = (float)uVar41;
  fVar38 = (float)((ulong)uVar41 >> 0x20);
  uVar41 = NEON_frsqrts(uVar40,CONCAT44(fVar38 * fVar38,fVar35 * fVar35),4);
  fVar35 = fVar35 * (float)uVar41;
  fVar38 = fVar38 * (float)((ulong)uVar41 >> 0x20);
  uVar40 = NEON_frsqrts(uVar40,CONCAT44(fVar38 * fVar38,fVar35 * fVar35),4);
  iVar27 = -(uint)(fVar30 <= 0.0);
  iVar29 = -(uint)(fVar32 <= 0.0);
  fVar35 = (float)uVar40 * fVar35;
  fVar38 = (float)((ulong)uVar40 >> 0x20) * fVar38;
  fVar35 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                           CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                    CONCAT11((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                             SUB41(fVar35,0) & ~(byte)iVar27)));
  fVar36 = *(float *)(param_1 + 0xa8);
  fVar38 = (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                            CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                     CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar29 >> 8)
                                              ,CONCAT14(SUB41(fVar38,0) & ~(byte)iVar29,fVar35))))
                  >> 0x20);
  fVar39 = *(float *)(param_1 + 0x9c) - fVar30 * fVar35 * fVar36;
  if (fVar5 <= fVar39) {
    fVar5 = *(float *)(param_1 + 0x20);
    fVar7 = *(float *)(param_1 + 0x24);
    fVar8 = *(float *)(param_1 + 0x28);
    fVar9 = *(float *)(param_1 + 0x2c);
    fVar3 = fVar3 - fVar5;
    fVar33 = fVar33 - fVar7;
    fVar2 = fVar2 - fVar8;
    fVar10 = fVar3 * fVar3 + fVar33 * fVar33 + fVar2 * fVar2;
    uVar12 = SUB41(fVar10,0);
    uVar14 = (undefined1)((uint)fVar10 >> 8);
    uVar16 = (undefined1)((uint)fVar10 >> 0x10);
    uVar18 = (undefined1)((uint)fVar10 >> 0x18);
    fVar34 = fVar3 * fVar3 + fVar33 * fVar33 + fVar2 * fVar2;
    uVar20 = SUB41(fVar34,0);
    uVar22 = (undefined1)((uint)fVar34 >> 8);
    uVar24 = (undefined1)((uint)fVar34 >> 0x10);
    uVar26 = (undefined1)((uint)fVar34 >> 0x18);
    uVar40 = NEON_frsqrte(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar10))))
                          ,4);
    fVar35 = (float)uVar40;
    fVar38 = (float)((ulong)uVar40 >> 0x20);
    uVar40 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar10))))
                          ,CONCAT44(fVar38 * fVar38,fVar35 * fVar35),4);
    fVar35 = fVar35 * (float)uVar40;
    fVar38 = fVar38 * (float)((ulong)uVar40 >> 0x20);
    uVar40 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar10))))
                          ,CONCAT44(fVar38 * fVar38,fVar35 * fVar35),4);
    iVar27 = -(uint)(fVar10 <= 0.0);
    iVar29 = -(uint)(fVar34 <= 0.0);
    fVar35 = (float)uVar40 * fVar35;
    fVar38 = (float)((ulong)uVar40 >> 0x20) * fVar38;
    fVar10 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                             CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                      CONCAT11((byte)((uint)fVar35 >> 8) &
                                               ~(byte)((uint)iVar27 >> 8),
                                               SUB41(fVar35,0) & ~(byte)iVar27)));
    uVar28 = CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                      CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                               CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                        CONCAT14(SUB41(fVar38,0) & ~(byte)iVar29,fVar10))));
    fVar34 = (float)((ulong)uVar28 >> 0x20);
    uVar40 = CONCAT44(fVar33 * fVar34,fVar3 * fVar10);
    uVar41 = CONCAT44((fVar4 - fVar9) * fVar34,fVar2 * fVar10);
    fVar10 = *(float *)(param_1 + 0x90);
  }
  else {
    if (fVar5 < fVar39 + *(float *)(param_1 + 0x98)) {
      fVar2 = (fVar5 * fVar36 - fVar30 * fVar35) * *(float *)(param_1 + 0xa0);
      fVar4 = ((auVar6._0_4_ * fVar10 + auVar6._4_4_ * fVar34 + auVar6._8_4_ * fVar9) * fVar36 -
              fVar32 * fVar38) * *(float *)(param_1 + 0xa0);
      fVar10 = -fVar4;
      *param_7 = CONCAT17((char)((uint)fVar10 >> 0x18),
                          CONCAT16((char)((uint)fVar10 >> 0x10),
                                   CONCAT15((char)((uint)fVar10 >> 8),
                                            CONCAT14(SUB41(fVar10,0),-fVar2))));
      fVar34 = *(float *)(param_1 + 0xa0);
      fVar30 = *(float *)(param_1 + 0xa4);
      fVar7 = fVar7 * fVar35 * fVar34 - (float)*(undefined8 *)(param_1 + 0x50) * fVar30;
      fVar8 = fVar8 * fVar38 * fVar34 -
              (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) * fVar30;
      fVar9 = auVar43._0_4_ * fVar35 * fVar34 - (float)*(undefined8 *)(param_1 + 0x58) * fVar30;
      fVar10 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
      fVar3 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
      uVar12 = SUB41(fVar3,0);
      uVar14 = (undefined1)((uint)fVar3 >> 8);
      uVar16 = (undefined1)((uint)fVar3 >> 0x10);
      uVar18 = (undefined1)((uint)fVar3 >> 0x18);
      uVar40 = NEON_frsqrte(CONCAT17(uVar18,CONCAT16(uVar16,CONCAT15(uVar14,CONCAT14(uVar12,fVar10))
                                                    )),4);
      fVar5 = (float)uVar40;
      fVar33 = (float)((ulong)uVar40 >> 0x20);
      uVar40 = NEON_frsqrts(CONCAT17(uVar18,CONCAT16(uVar16,CONCAT15(uVar14,CONCAT14(uVar12,fVar10))
                                                    )),CONCAT44(fVar33 * fVar33,fVar5 * fVar5),4);
      fVar5 = fVar5 * (float)uVar40;
      fVar33 = fVar33 * (float)((ulong)uVar40 >> 0x20);
      iVar27 = -(uint)(fVar10 <= 0.0);
      iVar29 = -(uint)(fVar3 <= 0.0);
      uVar40 = NEON_frsqrts(CONCAT17(uVar18,CONCAT16(uVar16,CONCAT15(uVar14,CONCAT14(uVar12,fVar10))
                                                    )),CONCAT44(fVar33 * fVar33,fVar5 * fVar5),4);
      fVar5 = (float)uVar40 * fVar5;
      fVar33 = (float)((ulong)uVar40 >> 0x20) * fVar33;
      bVar11 = SUB41(fVar5,0) & ~(byte)iVar27;
      bVar13 = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar27 >> 8);
      bVar15 = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
      bVar17 = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
      bVar19 = SUB41(fVar33,0) & ~(byte)iVar29;
      bVar21 = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar29 >> 8);
      bVar23 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
      bVar25 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
      fVar10 = (float)CONCAT13(bVar17,CONCAT12(bVar15,CONCAT11(bVar13,bVar11)));
      fVar7 = fVar7 * (float)CONCAT13(bVar17,CONCAT12(bVar15,CONCAT11(bVar13,bVar11)));
      fVar8 = fVar8 * (float)CONCAT13(bVar25,CONCAT12(bVar23,CONCAT11(bVar21,bVar19)));
      fVar9 = fVar9 * fVar10;
      fVar10 = (auVar43._4_4_ * fVar38 * fVar34 -
               (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) * fVar30) *
               (float)(CONCAT17(bVar25,CONCAT16(bVar23,CONCAT15(bVar21,CONCAT14(bVar19,fVar10)))) >>
                      0x20);
      uVar40 = *param_2;
      *(ulong *)(param_5 + 2) =
           CONCAT44((float)((ulong)param_2[1] >> 0x20) + fVar4 * fVar10,
                    (float)param_2[1] + fVar2 * fVar9);
      *(ulong *)param_5 =
           CONCAT44((float)((ulong)uVar40 >> 0x20) + fVar4 * fVar8,(float)uVar40 + fVar2 * fVar7);
      param_6[2] = fVar9;
      param_6[3] = fVar10;
      *param_6 = fVar7;
      param_6[1] = fVar8;
      return;
    }
    fVar5 = *(float *)(param_1 + 0x30);
    fVar7 = *(float *)(param_1 + 0x34);
    fVar8 = *(float *)(param_1 + 0x38);
    fVar9 = *(float *)(param_1 + 0x3c);
    fVar3 = fVar3 - fVar5;
    fVar33 = fVar33 - fVar7;
    fVar2 = fVar2 - fVar8;
    fVar10 = fVar3 * fVar3 + fVar33 * fVar33 + fVar2 * fVar2;
    uVar12 = SUB41(fVar10,0);
    uVar14 = (undefined1)((uint)fVar10 >> 8);
    uVar16 = (undefined1)((uint)fVar10 >> 0x10);
    uVar18 = (undefined1)((uint)fVar10 >> 0x18);
    fVar34 = fVar3 * fVar3 + fVar33 * fVar33 + fVar2 * fVar2;
    uVar20 = SUB41(fVar34,0);
    uVar22 = (undefined1)((uint)fVar34 >> 8);
    uVar24 = (undefined1)((uint)fVar34 >> 0x10);
    uVar26 = (undefined1)((uint)fVar34 >> 0x18);
    uVar40 = NEON_frsqrte(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar10))))
                          ,4);
    fVar35 = (float)uVar40;
    fVar38 = (float)((ulong)uVar40 >> 0x20);
    uVar40 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar10))))
                          ,CONCAT44(fVar38 * fVar38,fVar35 * fVar35),4);
    fVar35 = fVar35 * (float)uVar40;
    fVar38 = fVar38 * (float)((ulong)uVar40 >> 0x20);
    uVar40 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar24,CONCAT15(uVar22,CONCAT14(uVar20,fVar10))))
                          ,CONCAT44(fVar38 * fVar38,fVar35 * fVar35),4);
    iVar27 = -(uint)(fVar10 <= 0.0);
    iVar29 = -(uint)(fVar34 <= 0.0);
    fVar35 = (float)uVar40 * fVar35;
    fVar38 = (float)((ulong)uVar40 >> 0x20) * fVar38;
    fVar10 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                             CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                      CONCAT11((byte)((uint)fVar35 >> 8) &
                                               ~(byte)((uint)iVar27 >> 8),
                                               SUB41(fVar35,0) & ~(byte)iVar27)));
    uVar28 = CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                      CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                               CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                        CONCAT14(SUB41(fVar38,0) & ~(byte)iVar29,fVar10))));
    fVar34 = (float)((ulong)uVar28 >> 0x20);
    uVar40 = CONCAT44(fVar33 * fVar34,fVar3 * fVar10);
    uVar41 = CONCAT44((fVar4 - fVar9) * fVar34,fVar2 * fVar10);
    fVar10 = *(float *)(param_1 + 0x94);
  }
  param_5[2] = fVar8 + (float)uVar41 * fVar10;
  param_5[3] = fVar9 + (float)((ulong)uVar41 >> 0x20) * fVar10;
  *param_5 = fVar5 + (float)uVar40 * fVar10;
  param_5[1] = fVar7 + (float)((ulong)uVar40 >> 0x20) * fVar10;
  *(undefined8 *)(param_6 + 2) = uVar41;
  *(undefined8 *)param_6 = uVar40;
  *param_7 = CONCAT44((float)CONCAT13(uVar26,CONCAT12(uVar24,CONCAT11(uVar22,uVar20))) *
                      (float)((ulong)uVar28 >> 0x20) - fVar10,
                      (float)CONCAT13(uVar18,CONCAT12(uVar16,CONCAT11(uVar14,uVar12))) *
                      (float)uVar28 - fVar10);
  return;
}

