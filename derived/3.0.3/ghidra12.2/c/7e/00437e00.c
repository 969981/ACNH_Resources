
void FUN_00437e00(undefined8 *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  
  auVar7 = *param_2;
  fVar22 = auVar7._4_4_;
  fVar23 = auVar7._0_4_;
  fVar1 = auVar7._8_4_;
  fVar21 = fVar1 * fVar1;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = fVar21;
  auVar5._8_4_ = fVar23 * fVar23;
  auVar5._12_4_ = 0;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = fVar21;
  auVar6._8_4_ = fVar23 * fVar23;
  auVar6._12_4_ = 0;
  auVar25 = NEON_ext(auVar5,auVar6,8,1);
  fVar8 = auVar25._0_4_ + auVar25._4_4_;
  auVar9._0_8_ = CONCAT44(-(uint)(fVar23 * fVar23 + fVar22 * fVar22 < fVar21 + 0.0 + fVar8),
                          -(uint)(fVar23 * fVar23 + fVar22 * fVar22 < fVar21 + 0.0 + fVar8));
  auVar9._8_8_ = auVar9._0_8_;
  auVar25._4_4_ = 0;
  auVar25._0_4_ = -fVar1;
  auVar25._8_4_ = fVar23;
  auVar25._12_4_ = 0;
  auVar2[4] = auVar7[0];
  auVar2._0_4_ = -fVar22;
  auVar2[5] = auVar7[1];
  auVar2[6] = auVar7[2];
  auVar2[7] = auVar7[3];
  auVar2._8_8_ = 0;
  auVar10[4] = auVar7[0];
  auVar10._0_4_ = -fVar22;
  auVar10[5] = auVar7[1];
  auVar10[6] = auVar7[2];
  auVar10[7] = auVar7[3];
  auVar10._8_8_ = 0;
  auVar10 = auVar10 ^ (auVar2 ^ auVar25) & auVar9;
  fVar21 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar1 = fVar21 * fVar21 + fVar11 * fVar11 + fVar12 * fVar12;
  fVar8 = fVar21 * fVar21 + fVar11 * fVar11 + fVar12 * fVar12;
  uVar17 = SUB41(fVar8,0);
  uVar18 = (undefined1)((uint)fVar8 >> 8);
  uVar19 = (undefined1)((uint)fVar8 >> 0x10);
  uVar20 = (undefined1)((uint)fVar8 >> 0x18);
  uVar24 = NEON_frsqrte(CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,fVar1)))),4)
  ;
  fVar22 = (float)uVar24;
  fVar23 = (float)((ulong)uVar24 >> 0x20);
  uVar24 = NEON_frsqrts(CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,fVar1)))),
                        CONCAT44(fVar23 * fVar23,fVar22 * fVar22),4);
  fVar22 = fVar22 * (float)uVar24;
  fVar23 = fVar23 * (float)((ulong)uVar24 >> 0x20);
  iVar3 = -(uint)(fVar1 <= 0.0);
  iVar4 = -(uint)(fVar8 <= 0.0);
  uVar24 = NEON_frsqrts(CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,fVar1)))),
                        CONCAT44(fVar23 * fVar23,fVar22 * fVar22),4);
  fVar22 = (float)uVar24 * fVar22;
  fVar23 = (float)((ulong)uVar24 >> 0x20) * fVar23;
  bVar13 = SUB41(fVar22,0) & ~(byte)iVar3;
  bVar14 = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar3 >> 8);
  bVar15 = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10);
  bVar16 = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18);
  param_1[1] = (ulong)(uint)(fVar12 * (float)CONCAT13(bVar16,CONCAT12(bVar15,CONCAT11(bVar14,bVar13)
                                                                     )));
  *param_1 = CONCAT44(fVar11 * (float)CONCAT13((byte)((uint)fVar23 >> 0x18) &
                                               ~(byte)((uint)iVar4 >> 0x18),
                                               CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                                        ~(byte)((uint)iVar4 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar23 >> 8) &
                                                                 ~(byte)((uint)iVar4 >> 8),
                                                                 SUB41(fVar23,0) & ~(byte)iVar4))),
                      fVar21 * (float)CONCAT13(bVar16,CONCAT12(bVar15,CONCAT11(bVar14,bVar13))));
  return;
}

