
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067d290(ushort *param_1,float *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  short sVar15;
  float fVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  float fVar24;
  undefined8 uVar25;
  int iVar26;
  uint local_10 [2];
  undefined8 uStack_8;
  
  uVar25 = DAT_04101cc0;
  uVar2 = param_1[1];
  uVar4 = uVar2 >> 0xe & 2 | (uint)(*param_1 >> 0xf);
  uVar3 = param_1[2];
  uStack_8 = DAT_04101cc8;
  *(uint *)((ulong)local_10 | (ulong)(uVar4 == 0) << 2) = *param_1 & 0x7fff;
  uVar8 = 1;
  if (uVar4 == 0) {
    uVar8 = 2;
  }
  if (uVar8 == uVar4) {
    uVar8 = uVar8 + 1;
  }
  local_10[uVar8] = uVar2 & 0x7fff;
  uVar1 = uVar8 + 2;
  if (uVar8 + 1 != uVar4) {
    uVar1 = uVar8 + 1;
  }
  local_10[uVar1] = uVar3 & 0x7fff;
  auVar7._8_8_ = uStack_8;
  auVar7._0_8_ = uVar25;
  auVar11 = NEON_scvtf(auVar7,4);
  fVar10 = (auVar11._0_4_ + -16383.0) * 4.3161006e-05;
  fVar12 = (auVar11._4_4_ + -16383.0) * 4.3161006e-05;
  fVar13 = (auVar11._8_4_ + -16383.0) * 4.3161006e-05;
  fVar14 = (auVar11._12_4_ + -16383.0) * 4.3161006e-05;
  fVar16 = fVar10 * fVar10;
  fVar24 = fVar12 * fVar12;
  uVar21 = (undefined1)((uint)fVar24 >> 8);
  uVar22 = (undefined1)((uint)fVar24 >> 0x10);
  uVar23 = (undefined1)((uint)fVar24 >> 0x18);
  auVar11[4] = SUB41(fVar24,0);
  auVar11._0_4_ = fVar16;
  auVar11[5] = uVar21;
  auVar11[6] = uVar22;
  auVar11[7] = uVar23;
  auVar11._8_4_ = fVar13 * fVar13;
  auVar11._12_4_ = fVar14 * fVar14;
  auVar5[4] = SUB41(fVar24,0);
  auVar5._0_4_ = fVar16;
  auVar5[5] = uVar21;
  auVar5[6] = uVar22;
  auVar5[7] = uVar23;
  auVar5._8_4_ = fVar13 * fVar13;
  auVar5._12_4_ = fVar14 * fVar14;
  auVar11 = NEON_ext(auVar11,auVar5,8,1);
  fVar9 = auVar11._0_4_ + auVar11._4_4_;
  fVar6 = (float)_DAT_0413f320 - (fVar16 + fVar24 + fVar9);
  fVar16 = (float)((ulong)_DAT_0413f320 >> 0x20) - (fVar16 + fVar24 + fVar9);
  uVar21 = (undefined1)((uint)fVar16 >> 8);
  uVar22 = (undefined1)((uint)fVar16 >> 0x10);
  uVar23 = (undefined1)((uint)fVar16 >> 0x18);
  uVar25 = NEON_frsqrte(CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(SUB41(fVar16,0),
                                                                                 fVar6)))),4);
  fVar24 = (float)uVar25;
  fVar9 = (float)((ulong)uVar25 >> 0x20);
  uVar25 = NEON_frsqrts(CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(SUB41(fVar16,0),
                                                                                 fVar6)))),
                        CONCAT44(fVar9 * fVar9,fVar24 * fVar24),4);
  iVar26 = -(uint)(fVar6 <= 0.0);
  fVar6 = fVar6 * fVar24 * (float)uVar25;
  bVar17 = SUB41(fVar6,0) & ~(byte)iVar26;
  bVar18 = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar26 >> 8);
  bVar19 = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
  bVar20 = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
  sVar15 = -(ushort)((short)uVar3 < 0);
  fVar16 = (float)(CONCAT13(bVar20,CONCAT12(bVar19,CONCAT11(bVar18,bVar17))) ^
                  (CONCAT13(bVar20,CONCAT12(bVar19,CONCAT11(bVar18,bVar17))) ^
                  (uint)-(float)CONCAT13(bVar20,CONCAT12(bVar19,CONCAT11(bVar18,bVar17)))) &
                  CONCAT22(sVar15,sVar15));
  if (uVar4 == 3) {
    param_2[2] = fVar13;
    param_2[3] = fVar16;
    *param_2 = fVar10;
    param_2[1] = fVar12;
    return;
  }
  if (uVar4 == 2) {
    param_2[2] = fVar16;
    param_2[3] = fVar14;
    *param_2 = fVar10;
    param_2[1] = fVar12;
    return;
  }
  if (uVar4 == 1) {
    param_2[2] = fVar13;
    param_2[3] = fVar14;
    *(ulong *)param_2 = CONCAT44(fVar16,fVar10);
    return;
  }
  param_2[2] = fVar13;
  param_2[3] = fVar14;
  *param_2 = fVar16;
  param_2[1] = fVar12;
  return;
}

