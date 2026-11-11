
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437eb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined1 uVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 uVar17;
  byte bVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined1 uVar23;
  byte bVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  ulong uVar28;
  int iVar30;
  undefined1 auVar29 [16];
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined8 uVar33;
  ulong uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fStack_7c;
  float fStack_6c;
  
  fVar5 = (float)param_2[1];
  fVar25 = (float)((ulong)param_2[1] >> 0x20);
  uVar8 = *param_2;
  uVar9 = (undefined1)uVar8;
  uVar11 = (undefined1)((ulong)uVar8 >> 8);
  uVar13 = (undefined1)((ulong)uVar8 >> 0x10);
  uVar15 = (undefined1)((ulong)uVar8 >> 0x18);
  uVar17 = (undefined1)((ulong)uVar8 >> 0x20);
  uVar19 = (undefined1)((ulong)uVar8 >> 0x28);
  uVar21 = (undefined1)((ulong)uVar8 >> 0x30);
  uVar23 = (undefined1)((ulong)uVar8 >> 0x38);
  uVar31 = param_3[1];
  uVar33 = *param_3;
  auVar29._0_4_ = (float)uVar8 * (float)uVar33;
  auVar29._4_4_ = (float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar33 >> 0x20);
  auVar29._8_4_ = fVar5 * (float)uVar31;
  auVar29._12_4_ = fVar25 * (float)((ulong)uVar31 >> 0x20);
  auVar32 = NEON_ext(auVar29,auVar29,8,1);
  fVar4 = auVar32._0_4_ + auVar32._4_4_;
  fVar3 = auVar29._0_4_ + auVar29._4_4_ + fVar4;
  fVar4 = auVar29._0_4_ + auVar29._4_4_ + fVar4;
  uVar34 = CONCAT44(-(uint)(fVar4 < 0.0),-(uint)(fVar3 < 0.0)) & 0x8000000080000000;
  bVar10 = (byte)(uVar34 >> 0x18);
  fVar3 = (float)CONCAT13(bVar10 ^ (byte)((uint)fVar3 >> 0x18),SUB43(fVar3,0));
  bVar12 = (byte)(uVar34 >> 0x38);
  fVar26 = (float)_DAT_0413f320;
  fVar7 = (float)((ulong)_DAT_0413f320 >> 0x20);
  if (DAT_04102ea8 <= fVar3) {
    uVar8 = *param_4;
    fVar26 = fVar26 - (float)uVar8;
    fVar7 = fVar7 - (float)((ulong)uVar8 >> 0x20);
  }
  else {
    fVar5 = (float)FUN_00437380();
    uVar33 = DAT_0413f660;
    uVar2 = _DAT_0413f620;
    fStack_6c = (float)(CONCAT17(bVar12 ^ (byte)((uint)fVar4 >> 0x18),
                                 CONCAT16((char)((uint)fVar4 >> 0x10),
                                          CONCAT15((char)((uint)fVar4 >> 8),
                                                   CONCAT14(SUB41(fVar4,0),fVar3)))) >> 0x20);
    uVar8 = CONCAT44(fVar7 - fStack_6c * fStack_6c,fVar26 - fVar3 * fVar3);
    uVar31 = NEON_frsqrte(uVar8,4);
    fVar36 = (float)uVar31;
    fVar37 = (float)((ulong)uVar31 >> 0x20);
    uVar31 = NEON_frsqrts(uVar8,CONCAT44(fVar37 * fVar37,fVar36 * fVar36),4);
    fVar36 = fVar36 * (float)uVar31;
    fVar37 = fVar37 * (float)((ulong)uVar31 >> 0x20);
    uVar38 = NEON_frsqrts(uVar8,CONCAT44(fVar37 * fVar37,fVar36 * fVar36),4);
    fVar3 = (float)*param_4 * fVar5;
    fVar4 = (float)((ulong)*param_4 >> 0x20) * fVar5;
    uVar34 = CONCAT44(fVar4,fVar3);
    uVar28 = CONCAT44(fVar5 - fVar4,fVar5 - fVar3);
    uVar31 = NEON_frecpe(DAT_0413f660,4);
    uVar8 = NEON_frecps(DAT_0413f660,uVar31,4);
    fVar3 = (float)uVar31 * (float)uVar8;
    uVar8 = NEON_frecps(DAT_0413f660,
                        CONCAT44((float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar8 >> 0x20),
                                 fVar3),4);
    fVar3 = fVar3 * (float)uVar8;
    fVar4 = (float)_DAT_0413f620;
    fVar7 = (float)(_DAT_0413f620 >> 0x20);
    do {
      fVar5 = (float)FUN_004373b0(fVar3 * (fVar4 + (float)uVar28));
      fStack_7c = (float)(uVar28 >> 0x20);
      fVar26 = (float)uVar33;
      fVar35 = (float)((ulong)uVar33 >> 0x20);
      fVar25 = (float)uVar28 - fVar26 * fVar5;
      fStack_7c = fStack_7c - fVar35 * fVar5;
      uVar28 = CONCAT44(fStack_7c,fVar25);
      uVar8 = NEON_fmax(CONCAT44(-fVar7,-fVar4),
                        uVar2 ^ (uVar2 ^ uVar28) &
                                CONCAT44(-(uint)(fStack_7c < fVar7),-(uint)(fVar25 < fVar4)),4);
    } while ((float)uVar8 != fVar25);
    fVar36 = (float)uVar38 * fVar36;
    fVar37 = (float)((ulong)uVar38 >> 0x20) * fVar37;
    do {
      fVar6 = (float)FUN_004373b0(fVar3 * (fVar4 + (float)uVar34));
      fVar5 = (float)uVar34 - fVar26 * fVar6;
      fVar6 = (float)(uVar34 >> 0x20) - fVar35 * fVar6;
      uVar34 = CONCAT17((char)((uint)fVar6 >> 0x18),
                        CONCAT16((char)((uint)fVar6 >> 0x10),
                                 CONCAT15((char)((uint)fVar6 >> 8),CONCAT14(SUB41(fVar6,0),fVar5))))
      ;
      uVar8 = NEON_fmax(CONCAT44(-fVar7,-fVar4),
                        uVar2 ^ (uVar2 ^ uVar34) &
                                CONCAT44(-(uint)((float)(uVar34 >> 0x20) < fVar7),
                                         -(uint)(fVar5 < fVar4)),4);
    } while ((float)uVar8 != fVar5);
    fVar7 = sinf(fVar25);
    fVar3 = sinf(fVar5);
    fVar26 = fVar36 * fVar7;
    fVar7 = fVar37 * fVar7;
    fVar5 = (float)param_2[1];
    fVar25 = (float)((ulong)param_2[1] >> 0x20);
    uVar8 = *param_2;
    uVar9 = (undefined1)uVar8;
    uVar11 = (undefined1)((ulong)uVar8 >> 8);
    uVar13 = (undefined1)((ulong)uVar8 >> 0x10);
    uVar15 = (undefined1)((ulong)uVar8 >> 0x18);
    uVar17 = (undefined1)((ulong)uVar8 >> 0x20);
    uVar19 = (undefined1)((ulong)uVar8 >> 0x28);
    uVar21 = (undefined1)((ulong)uVar8 >> 0x30);
    uVar23 = (undefined1)((ulong)uVar8 >> 0x38);
    uVar31 = param_3[1];
    uVar33 = *param_3;
    uVar8 = CONCAT44(fVar37 * fVar3,fVar36 * fVar3);
  }
  fVar3 = (float)CONCAT13(bVar10 ^ (byte)((ulong)uVar8 >> 0x18),(int3)uVar8);
  fVar4 = (float)(CONCAT17(bVar12 ^ (byte)((ulong)uVar8 >> 0x38),
                           CONCAT16((char)((ulong)uVar8 >> 0x30),
                                    CONCAT15((char)((ulong)uVar8 >> 0x28),
                                             CONCAT14((char)((ulong)uVar8 >> 0x20),fVar3)))) >> 0x20
                 );
  fVar36 = fVar26 * (float)CONCAT13(uVar15,CONCAT12(uVar13,CONCAT11(uVar11,uVar9))) +
           (float)uVar33 * fVar3;
  fVar37 = fVar7 * (float)CONCAT13(uVar23,CONCAT12(uVar21,CONCAT11(uVar19,uVar17))) +
           (float)((ulong)uVar33 >> 0x20) * fVar4;
  fVar26 = fVar26 * fVar5 + (float)uVar31 * fVar3;
  fVar25 = fVar7 * fVar25 + (float)((ulong)uVar31 >> 0x20) * fVar4;
  fVar3 = fVar36 * fVar36;
  fVar4 = fVar37 * fVar37;
  uVar9 = (undefined1)((uint)fVar4 >> 8);
  uVar11 = (undefined1)((uint)fVar4 >> 0x10);
  uVar13 = (undefined1)((uint)fVar4 >> 0x18);
  auVar32[4] = SUB41(fVar4,0);
  auVar32._0_4_ = fVar3;
  auVar32[5] = uVar9;
  auVar32[6] = uVar11;
  auVar32[7] = uVar13;
  auVar32._8_4_ = fVar26 * fVar26;
  auVar32._12_4_ = fVar25 * fVar25;
  auVar1[4] = SUB41(fVar4,0);
  auVar1._0_4_ = fVar3;
  auVar1[5] = uVar9;
  auVar1[6] = uVar11;
  auVar1[7] = uVar13;
  auVar1._8_4_ = fVar26 * fVar26;
  auVar1._12_4_ = fVar25 * fVar25;
  auVar29 = NEON_ext(auVar32,auVar1,8,1);
  fVar5 = auVar29._0_4_ + auVar29._4_4_;
  fVar7 = fVar3 + fVar4 + fVar5;
  fVar5 = fVar3 + fVar4 + fVar5;
  uVar9 = SUB41(fVar5,0);
  uVar11 = (undefined1)((uint)fVar5 >> 8);
  uVar13 = (undefined1)((uint)fVar5 >> 0x10);
  uVar15 = (undefined1)((uint)fVar5 >> 0x18);
  uVar8 = NEON_frsqrte(CONCAT17(uVar15,CONCAT16(uVar13,CONCAT15(uVar11,CONCAT14(uVar9,fVar7)))),4);
  fVar3 = (float)uVar8;
  fVar4 = (float)((ulong)uVar8 >> 0x20);
  uVar8 = NEON_frsqrts(CONCAT17(uVar15,CONCAT16(uVar13,CONCAT15(uVar11,CONCAT14(uVar9,fVar7)))),
                       CONCAT44(fVar4 * fVar4,fVar3 * fVar3),4);
  fVar3 = fVar3 * (float)uVar8;
  fVar4 = fVar4 * (float)((ulong)uVar8 >> 0x20);
  iVar27 = -(uint)(fVar7 <= 0.0);
  iVar30 = -(uint)(fVar5 <= 0.0);
  uVar8 = NEON_frsqrts(CONCAT17(uVar15,CONCAT16(uVar13,CONCAT15(uVar11,CONCAT14(uVar9,fVar7)))),
                       CONCAT44(fVar4 * fVar4,fVar3 * fVar3),4);
  fVar3 = (float)uVar8 * fVar3;
  fVar4 = (float)((ulong)uVar8 >> 0x20) * fVar4;
  bVar10 = SUB41(fVar3,0) & ~(byte)iVar27;
  bVar12 = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar27 >> 8);
  bVar14 = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
  bVar16 = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
  bVar18 = SUB41(fVar4,0) & ~(byte)iVar30;
  bVar20 = (byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar30 >> 8);
  bVar22 = (byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  bVar24 = (byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  fVar3 = (float)CONCAT13(bVar16,CONCAT12(bVar14,CONCAT11(bVar12,bVar10)));
  param_1[1] = CONCAT44(fVar25 * (float)(CONCAT17(bVar24,CONCAT16(bVar22,CONCAT15(bVar20,CONCAT14(
                                                  bVar18,fVar3)))) >> 0x20),fVar26 * fVar3);
  *param_1 = CONCAT44(fVar37 * (float)CONCAT13(bVar24,CONCAT12(bVar22,CONCAT11(bVar20,bVar18))),
                      fVar36 * (float)CONCAT13(bVar16,CONCAT12(bVar14,CONCAT11(bVar12,bVar10))));
  return;
}

