
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067ce90(byte *param_1,float *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  char cVar14;
  float fVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  float fVar23;
  undefined8 uVar24;
  int iVar25;
  uint local_10 [2];
  undefined8 uStack_8;
  
  uVar24 = DAT_04102060;
  bVar16 = param_1[1];
  uVar3 = bVar16 >> 6 & 2 | (uint)(*param_1 >> 7);
  bVar2 = param_1[2];
  uStack_8 = DAT_04102068;
  *(uint *)((ulong)local_10 | (ulong)(uVar3 == 0) << 2) = *param_1 & 0x7f;
  uVar7 = 1;
  if (uVar3 == 0) {
    uVar7 = 2;
  }
  if (uVar7 == uVar3) {
    uVar7 = uVar7 + 1;
  }
  local_10[uVar7] = bVar16 & 0x7f;
  uVar1 = uVar7 + 2;
  if (uVar7 + 1 != uVar3) {
    uVar1 = uVar7 + 1;
  }
  local_10[uVar1] = bVar2 & 0x7f;
  auVar6._8_8_ = uStack_8;
  auVar6._0_8_ = uVar24;
  auVar10 = NEON_scvtf(auVar6,4);
  fVar9 = (auVar10._0_4_ + -63.0) * 0.011223917;
  fVar11 = (auVar10._4_4_ + -63.0) * 0.011223917;
  fVar12 = (auVar10._8_4_ + -63.0) * 0.011223917;
  fVar13 = (auVar10._12_4_ + -63.0) * 0.011223917;
  fVar15 = fVar9 * fVar9;
  fVar23 = fVar11 * fVar11;
  uVar20 = (undefined1)((uint)fVar23 >> 8);
  uVar21 = (undefined1)((uint)fVar23 >> 0x10);
  uVar22 = (undefined1)((uint)fVar23 >> 0x18);
  auVar10[4] = SUB41(fVar23,0);
  auVar10._0_4_ = fVar15;
  auVar10[5] = uVar20;
  auVar10[6] = uVar21;
  auVar10[7] = uVar22;
  auVar10._8_4_ = fVar12 * fVar12;
  auVar10._12_4_ = fVar13 * fVar13;
  auVar4[4] = SUB41(fVar23,0);
  auVar4._0_4_ = fVar15;
  auVar4[5] = uVar20;
  auVar4[6] = uVar21;
  auVar4[7] = uVar22;
  auVar4._8_4_ = fVar12 * fVar12;
  auVar4._12_4_ = fVar13 * fVar13;
  auVar10 = NEON_ext(auVar10,auVar4,8,1);
  fVar8 = auVar10._0_4_ + auVar10._4_4_;
  fVar5 = (float)_DAT_0413f320 - (fVar15 + fVar23 + fVar8);
  fVar15 = (float)((ulong)_DAT_0413f320 >> 0x20) - (fVar15 + fVar23 + fVar8);
  uVar20 = (undefined1)((uint)fVar15 >> 8);
  uVar21 = (undefined1)((uint)fVar15 >> 0x10);
  uVar22 = (undefined1)((uint)fVar15 >> 0x18);
  uVar24 = NEON_frsqrte(CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(SUB41(fVar15,0),
                                                                                 fVar5)))),4);
  fVar23 = (float)uVar24;
  fVar8 = (float)((ulong)uVar24 >> 0x20);
  uVar24 = NEON_frsqrts(CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(SUB41(fVar15,0),
                                                                                 fVar5)))),
                        CONCAT44(fVar8 * fVar8,fVar23 * fVar23),4);
  iVar25 = -(uint)(fVar5 <= 0.0);
  fVar5 = fVar5 * fVar23 * (float)uVar24;
  bVar16 = SUB41(fVar5,0) & ~(byte)iVar25;
  bVar17 = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar25 >> 8);
  bVar18 = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
  bVar19 = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
  cVar14 = -((char)bVar2 < '\0');
  fVar15 = (float)(CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16))) ^
                  (CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16))) ^
                  (uint)-(float)CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)))) &
                  CONCAT13(cVar14,CONCAT12(cVar14,CONCAT11(cVar14,cVar14))));
  if (uVar3 == 3) {
    param_2[2] = fVar12;
    param_2[3] = fVar15;
    *param_2 = fVar9;
    param_2[1] = fVar11;
    return;
  }
  if (uVar3 == 2) {
    param_2[2] = fVar15;
    param_2[3] = fVar13;
    *param_2 = fVar9;
    param_2[1] = fVar11;
    return;
  }
  if (uVar3 == 1) {
    param_2[2] = fVar12;
    param_2[3] = fVar13;
    *(ulong *)param_2 = CONCAT44(fVar15,fVar9);
    return;
  }
  param_2[2] = fVar12;
  param_2[3] = fVar13;
  *param_2 = fVar15;
  param_2[1] = fVar11;
  return;
}

