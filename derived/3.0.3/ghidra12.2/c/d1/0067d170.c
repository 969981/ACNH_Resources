
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067d170(undefined1 (*param_1) [16],undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [12];
  float fVar12;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  int iVar18;
  int iVar22;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  byte bVar25;
  undefined8 uVar24;
  float fVar26;
  
  auVar14 = *param_1;
  auVar7._8_8_ = _UNK_04102708;
  auVar7._0_8_ = _DAT_04102700;
  auVar20._8_8_ = uRam0000000004c1ec48;
  auVar20._0_8_ = _DAT_04c1ec40;
  auVar7 = a64_TBL(ZEXT816(0),auVar14,auVar7);
  uVar1 = auVar7._4_4_ >> 4;
  uVar2 = auVar7._8_4_ >> 4;
  uVar3 = auVar7._12_4_ >> 4;
  auVar9[3] = auVar7[3] >> 4;
  auVar9._0_3_ = (int3)(auVar7._0_4_ >> 4);
  auVar9[4] = (char)uVar1;
  auVar9[5] = (char)(uVar1 >> 8);
  auVar9[6] = (char)(uVar1 >> 0x10);
  auVar9[7] = auVar7[7] >> 4;
  auVar9[8] = (char)uVar2;
  auVar9[9] = (char)(uVar2 >> 8);
  auVar9[10] = (char)(uVar2 >> 0x10);
  auVar9[0xb] = auVar7[0xb] >> 4;
  auVar9[0xc] = (char)uVar3;
  auVar9[0xd] = (char)(uVar3 >> 8);
  auVar9[0xe] = (char)(uVar3 >> 0x10);
  auVar9[0xf] = auVar7[0xf] >> 4;
  auVar7 = auVar7 ^ (auVar7 ^ auVar9) & auVar20;
  auVar8[0] = auVar7[0] & (byte)_DAT_04101e70 | (byte)_DAT_04101d70;
  auVar8[1] = auVar7[1] & (byte)((ulong)_DAT_04101e70 >> 8) | (byte)((ulong)_DAT_04101d70 >> 8);
  auVar8[2] = auVar7[2] & (byte)((ulong)_DAT_04101e70 >> 0x10) |
              (byte)((ulong)_DAT_04101d70 >> 0x10);
  auVar8[3] = auVar7[3] & (byte)((ulong)_DAT_04101e70 >> 0x18) |
              (byte)((ulong)_DAT_04101d70 >> 0x18);
  auVar8[4] = auVar7[4] & (byte)((ulong)_DAT_04101e70 >> 0x20) |
              (byte)((ulong)_DAT_04101d70 >> 0x20);
  auVar8[5] = auVar7[5] & (byte)((ulong)_DAT_04101e70 >> 0x28) |
              (byte)((ulong)_DAT_04101d70 >> 0x28);
  auVar8[6] = auVar7[6] & (byte)((ulong)_DAT_04101e70 >> 0x30) |
              (byte)((ulong)_DAT_04101d70 >> 0x30);
  auVar8[7] = auVar7[7] & (byte)((ulong)_DAT_04101e70 >> 0x38) |
              (byte)((ulong)_DAT_04101d70 >> 0x38);
  auVar8[8] = auVar7[8] & (byte)_UNK_04101e78 | (byte)_UNK_04101d78;
  auVar8[9] = auVar7[9] & (byte)((ulong)_UNK_04101e78 >> 8) | (byte)((ulong)_UNK_04101d78 >> 8);
  auVar8[10] = auVar7[10] & (byte)((ulong)_UNK_04101e78 >> 0x10) |
               (byte)((ulong)_UNK_04101d78 >> 0x10);
  auVar8[0xb] = auVar7[0xb] & (byte)((ulong)_UNK_04101e78 >> 0x18) |
                (byte)((ulong)_UNK_04101d78 >> 0x18);
  auVar8[0xc] = auVar7[0xc] & (byte)((ulong)_UNK_04101e78 >> 0x20) |
                (byte)((ulong)_UNK_04101d78 >> 0x20);
  auVar8[0xd] = auVar7[0xd] & (byte)((ulong)_UNK_04101e78 >> 0x28) |
                (byte)((ulong)_UNK_04101d78 >> 0x28);
  auVar8[0xe] = auVar7[0xe] & (byte)((ulong)_UNK_04101e78 >> 0x30) |
                (byte)((ulong)_UNK_04101d78 >> 0x30);
  auVar8[0xf] = auVar7[0xf] & (byte)((ulong)_UNK_04101e78 >> 0x38) |
                (byte)((ulong)_UNK_04101d78 >> 0x38);
  auVar9 = NEON_scvtf(auVar8,4);
  fVar5 = (auVar9._0_4_ + -2047.0) * 0.00034543566;
  fVar12 = (auVar9._4_4_ + -2047.0) * 0.00034543566;
  auVar6._0_8_ = CONCAT44(fVar12,fVar5);
  auVar6._8_4_ = (auVar9._8_4_ + -2047.0) * 0.00034543566;
  auVar10._12_4_ = (auVar9._12_4_ + -2047.0) * 0.00034543566;
  auVar10._0_12_ = auVar6;
  auVar21._0_4_ = fVar5 * fVar5;
  auVar21._4_4_ = fVar12 * fVar12;
  auVar21._8_4_ = auVar6._8_4_ * auVar6._8_4_;
  auVar21._12_4_ = auVar10._12_4_ * auVar10._12_4_;
  uVar1 = auVar14._4_4_ >> 4 & 3;
  auVar9 = NEON_ext(auVar21,auVar21,8,1);
  fVar4 = auVar9._0_4_ + auVar9._4_4_;
  fVar12 = (float)_DAT_0413f320 - (auVar21._0_4_ + auVar21._4_4_ + fVar4);
  fVar4 = (float)((ulong)_DAT_0413f320 >> 0x20) - (auVar21._0_4_ + auVar21._4_4_ + fVar4);
  uVar15 = (undefined1)((uint)fVar4 >> 8);
  uVar16 = (undefined1)((uint)fVar4 >> 0x10);
  uVar17 = (undefined1)((uint)fVar4 >> 0x18);
  uVar24 = NEON_frsqrte(CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(SUB41(fVar4,0),
                                                                                 fVar12)))),4);
  fVar23 = (float)uVar24;
  fVar26 = (float)((ulong)uVar24 >> 0x20);
  uVar24 = NEON_frsqrts(CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(SUB41(fVar4,0),
                                                                                 fVar12)))),
                        CONCAT44(fVar26 * fVar26,fVar23 * fVar23),4);
  iVar18 = -(uint)(fVar12 <= 0.0);
  iVar22 = -(uint)(fVar4 <= 0.0);
  fVar12 = fVar12 * fVar23 * (float)uVar24;
  fVar4 = fVar4 * fVar26 * (float)((ulong)uVar24 >> 0x20);
  bVar25 = auVar14[4] & 0x40;
  uVar19 = CONCAT44(-(uint)(bVar25 == 0x40),-(uint)(bVar25 == 0x40)) & 0x8000000080000000;
  auVar14._0_4_ =
       CONCAT13((byte)(uVar19 >> 0x18) ^
                (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                         CONCAT11((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                  SUB41(fVar12,0) & ~(byte)iVar18)));
  auVar14[4] = SUB41(fVar4,0) & ~(byte)iVar22;
  auVar14[5] = (byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar22 >> 8);
  auVar14[6] = (byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
  auVar14[7] = (byte)(uVar19 >> 0x38) ^ (byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
  auVar14._8_8_ = 0;
  if (uVar1 == 1) {
    auVar13._4_4_ = auVar6._8_4_;
    auVar13._0_4_ = fVar5;
    auVar13._8_4_ = fVar5;
    auVar13._12_4_ = auVar14._0_4_;
    auVar9 = NEON_ext(auVar10,auVar10,4,1);
    auVar9 = NEON_ext(auVar13,auVar9,8,1);
    param_2[1] = auVar9._8_8_;
    *param_2 = auVar9._0_8_;
    return;
  }
  if (uVar1 == 2) {
    auVar9 = NEON_ext(auVar10,auVar10,8,1);
    auVar14 = NEON_ext(auVar9,auVar14,4,1);
    auVar9 = NEON_ext(auVar14,auVar9,4,1);
    param_2[1] = auVar9._8_8_;
    *param_2 = auVar9._0_8_;
    return;
  }
  if (uVar1 == 3) {
    auVar11._12_4_ = auVar14._0_4_;
    auVar11._0_12_ = auVar6;
    param_2[1] = auVar11._8_8_;
    *param_2 = auVar6._0_8_;
    return;
  }
  auVar9 = NEON_ext(auVar14,auVar14,4,1);
  auVar9 = NEON_ext(auVar9,auVar10,0xc,1);
  param_2[1] = auVar9._8_8_;
  *param_2 = auVar9._0_8_;
  return;
}

