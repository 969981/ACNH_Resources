
void FUN_00438320(undefined1 (*param_1) [16],float *param_2,undefined1 (*param_3) [12],
                 undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  ulong uVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fStack_3c;
  
  uVar23 = *(undefined8 *)*param_1;
  *(undefined8 *)(*param_3 + 8) = *(undefined8 *)(*param_1 + 8);
  *(undefined8 *)*param_3 = uVar23;
  FUN_004380d0(param_3);
  auVar1 = *param_1;
  fVar5 = (float)*(undefined8 *)(*param_3 + 8);
  fVar21 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  auVar18 = NEON_ext(auVar1,auVar1,4,1);
  auVar22._12_4_ = fVar21;
  auVar22._0_12_ = *param_3;
  auVar25._12_4_ = fVar21;
  auVar25._0_12_ = *param_3;
  auVar22 = NEON_ext(auVar22,auVar25,4,1);
  auVar25 = NEON_ext(auVar18,auVar18,8,1);
  auVar26 = NEON_ext(auVar22,auVar22,8,1);
  uVar23 = NEON_rev64(auVar25._0_8_,4);
  uVar24 = NEON_rev64(auVar26._0_8_,4);
  fVar11 = (float)*(undefined8 *)*param_3;
  fVar14 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  fVar20 = auVar1._0_4_;
  fVar13 = auVar1._4_4_;
  fVar15 = auVar1._8_4_;
  fVar16 = auVar1._12_4_;
  auVar19._0_4_ = fVar20 * auVar22._0_4_ - fVar11 * auVar18._0_4_;
  auVar19._4_4_ = fVar13 * auVar22._4_4_ - fVar14 * auVar18._4_4_;
  auVar19._8_4_ = fVar15 * (float)uVar24 - fVar5 * (float)uVar23;
  auVar19._12_4_ = fVar16 * (float)((ulong)uVar24 >> 0x20) - fVar21 * (float)((ulong)uVar23 >> 0x20)
  ;
  auVar25 = NEON_ext(auVar19,auVar19,4,1);
  fVar3 = fVar11 * fVar20;
  fVar4 = fVar14 * fVar13;
  uVar7 = (undefined1)((uint)fVar4 >> 8);
  uVar8 = (undefined1)((uint)fVar4 >> 0x10);
  uVar9 = (undefined1)((uint)fVar4 >> 0x18);
  auVar1[4] = SUB41(fVar4,0);
  auVar1._0_4_ = fVar3;
  auVar1[5] = uVar7;
  auVar1[6] = uVar8;
  auVar1[7] = uVar9;
  auVar1._8_4_ = fVar5 * fVar15;
  auVar1._12_4_ = fVar21 * fVar16;
  auVar18[4] = SUB41(fVar4,0);
  auVar18._0_4_ = fVar3;
  auVar18[5] = uVar7;
  auVar18[6] = uVar8;
  auVar18[7] = uVar9;
  auVar18._8_4_ = fVar5 * fVar15;
  auVar18._12_4_ = fVar21 * fVar16;
  auVar22 = NEON_ext(auVar1,auVar18,8,1);
  fVar17 = (fVar20 * fVar21 + auVar25._0_4_) - fVar11 * fVar16;
  fVar20 = (fVar13 * fVar21 + auVar25._4_4_) - fVar14 * fVar16;
  fVar21 = (fVar15 * fVar21 + auVar19._0_4_) - fVar5 * fVar16;
  fVar3 = fVar3 + fVar4 + auVar22._0_4_ + auVar22._4_4_;
  fVar11 = fVar17 * fVar17;
  fVar14 = fVar20 * fVar20;
  uVar7 = (undefined1)((uint)fVar14 >> 8);
  uVar8 = (undefined1)((uint)fVar14 >> 0x10);
  uVar9 = (undefined1)((uint)fVar14 >> 0x18);
  auVar26[4] = SUB41(fVar14,0);
  auVar26._0_4_ = fVar11;
  auVar26[5] = uVar7;
  auVar26[6] = uVar8;
  auVar26[7] = uVar9;
  auVar26._8_4_ = fVar21 * fVar21;
  auVar26._12_4_ = fVar3 * fVar3;
  auVar2[4] = SUB41(fVar14,0);
  auVar2._0_4_ = fVar11;
  auVar2[5] = uVar7;
  auVar2[6] = uVar8;
  auVar2[7] = uVar9;
  auVar2._8_4_ = fVar21 * fVar21;
  auVar2._12_4_ = fVar3 * fVar3;
  auVar22 = NEON_ext(auVar26,auVar2,8,1);
  fVar5 = auVar22._0_4_ + auVar22._4_4_;
  fVar4 = fVar11 + fVar14 + fVar5;
  fVar5 = fVar11 + fVar14 + fVar5;
  uVar7 = SUB41(fVar5,0);
  uVar8 = (undefined1)((uint)fVar5 >> 8);
  uVar9 = (undefined1)((uint)fVar5 >> 0x10);
  uVar10 = (undefined1)((uint)fVar5 >> 0x18);
  uVar23 = NEON_frsqrte(CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,fVar4)))),4);
  fVar11 = (float)uVar23;
  fVar14 = (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frsqrts(CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,fVar4)))),
                        CONCAT44(fVar14 * fVar14,fVar11 * fVar11),4);
  fVar11 = fVar11 * (float)uVar23;
  fVar14 = fVar14 * (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frsqrts(CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,fVar4)))),
                        CONCAT44(fVar14 * fVar14,fVar11 * fVar11),4);
  fVar11 = (float)uVar23 * fVar11;
  fVar14 = (float)((ulong)uVar23 >> 0x20) * fVar14;
  fVar20 = fVar14 * fVar20;
  fVar3 = (float)(CONCAT17((char)((uint)fVar14 >> 0x18),
                           CONCAT16((char)((uint)fVar14 >> 0x10),
                                    CONCAT15((char)((uint)fVar14 >> 8),
                                             CONCAT14(SUB41(fVar14,0),fVar11)))) >> 0x20) * fVar3;
  FUN_00437380(SUB41(ABS(fVar3),0));
  fStack_3c = (float)(CONCAT17((char)((uint)fVar20 >> 0x18),
                               CONCAT16((char)((uint)fVar20 >> 0x10),
                                        CONCAT15((char)((uint)fVar20 >> 8),
                                                 CONCAT14(SUB41(fVar20,0),fVar11 * fVar17)))) >>
                     0x20);
  fVar14 = (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) +
           (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  bVar6 = (byte)((uint)fVar14 >> 0x18);
  fVar4 = *param_2 * fVar11 * fVar17;
  fVar11 = param_2[2] * fVar11 * fVar21;
  uVar12 = CONCAT44((fVar4 + param_2[1] * fStack_3c + fVar11) * fVar3,
                    (fVar4 + param_2[1] * fStack_3c + fVar11) * fVar3) & 0x8000000080000000;
  *param_4 = CONCAT17((byte)(uVar12 >> 0x38) ^ bVar6,
                      CONCAT16((char)((uint)fVar14 >> 0x10),
                               CONCAT15((char)((uint)fVar14 >> 8),
                                        CONCAT14(SUB41(fVar14,0),
                                                 CONCAT13((byte)(uVar12 >> 0x18) ^ bVar6,
                                                          SUB43(fVar14,0))))));
  return;
}

