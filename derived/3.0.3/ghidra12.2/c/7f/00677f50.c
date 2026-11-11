
ulong FUN_00677f50(float param_1,long *param_2,uint *param_3,uint *param_4,byte param_5,
                  float *param_6)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  ushort *puVar17;
  float *pfVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  float fVar23;
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar31 [16];
  
  puVar17 = (ushort *)*param_2;
  *param_2 = (long)(puVar17 + 1);
  pbVar14 = (byte *)((long)puVar17 + 3);
  uVar2 = *puVar17;
  uVar13 = (ulong)uVar2;
  uVar22 = uVar13 + 1;
  *param_2 = (long)pbVar14;
  bVar1 = (byte)puVar17[1];
  uVar16 = (ulong)bVar1;
  uVar12 = uVar13;
  if ((param_5 < pbVar14[uVar22]) && (uVar12 = uVar16, *pbVar14 < param_5)) {
    uVar15 = (uint)bVar1;
    uVar11 = (int)uVar22 + uVar15;
    while( true ) {
      if ((int)uVar11 < 0) {
        uVar11 = uVar11 + 1;
      }
      lVar20 = (long)((ulong)uVar11 << 0x20) >> 0x21;
      uVar11 = (int)uVar11 >> 1;
      uVar12 = (ulong)uVar11;
      if ((pbVar14[lVar20] <= param_5) && (param_5 < pbVar14[lVar20 + 1])) break;
      uVar19 = uVar11;
      if (pbVar14[lVar20] <= param_5) {
        uVar19 = (uint)uVar22;
        uVar15 = uVar11;
      }
      uVar22 = (ulong)uVar19;
      uVar11 = uVar15 + uVar19;
    }
  }
  lVar20 = uVar16 * 2;
  if ((int)(lVar20 + -3) < 1) {
    uVar22 = 0;
    if ((uint)lVar20 == 0) goto LAB_0067807c;
  }
  else {
    uVar22 = 0;
    pfVar18 = param_6;
    do {
      auVar31 = *(undefined1 (*) [16])((long)puVar17 + uVar22 + ((long)(int)uVar12 - uVar16) + 4);
      uVar22 = uVar22 + 4;
      auVar24._0_8_ = auVar31._7_8_ << 0x38;
      auVar24._9_7_ = auVar31._9_7_;
      auVar24[8] = auVar31[4];
      auVar26._11_5_ = auVar31._11_5_;
      auVar26._0_10_ = auVar24._0_10_;
      auVar26[10] = auVar31[5];
      auVar28._13_3_ = auVar31._13_3_;
      auVar28._0_12_ = auVar26._0_12_;
      auVar28[0xc] = auVar31[6];
      auVar30[0xf] = auVar31[0xf];
      auVar30._0_14_ = auVar28._0_14_;
      auVar30[0xe] = auVar31[7];
      auVar25._0_9_ = (unkuint9)auVar30._8_8_ << 0x40;
      auVar25._10_6_ = auVar30._10_6_;
      auVar25[9] = 0;
      auVar27._12_4_ = auVar30._12_4_;
      auVar27._0_11_ = auVar25._0_11_;
      auVar27[0xb] = 0;
      auVar29._14_2_ = auVar30._14_2_;
      auVar29._0_13_ = auVar27._0_13_;
      auVar29[0xd] = 0;
      auVar4._2_13_ = auVar29._2_13_;
      auVar4._0_2_ = auVar31._0_2_ & 0xff;
      auVar5[4] = auVar31[1];
      auVar5._0_4_ = auVar4._0_4_;
      auVar5[5] = 0;
      auVar5._6_9_ = auVar29._6_9_;
      auVar6[8] = auVar31[2];
      auVar6._0_8_ = auVar5._0_8_;
      auVar6[9] = 0;
      auVar6._10_5_ = auVar29._10_5_;
      auVar7[0xc] = auVar31[3];
      auVar7._0_12_ = auVar6._0_12_;
      auVar7[0xd] = 0;
      auVar7[0xe] = auVar31[7];
      auVar8._4_11_ = auVar7._4_11_;
      auVar8._0_4_ = auVar4._0_4_;
      auVar9._6_2_ = 0;
      auVar9._0_6_ = auVar8._0_6_;
      auVar9._8_7_ = auVar7._8_7_;
      auVar10._10_2_ = 0;
      auVar10._0_10_ = auVar9._0_10_;
      auVar10._12_3_ = auVar7._12_3_;
      auVar31._0_14_ = auVar10._0_14_;
      auVar31._14_2_ = 0;
      auVar31 = NEON_scvtf(auVar31,4);
      pfVar18[2] = param_1 * auVar31._8_4_;
      pfVar18[3] = param_1 * auVar31._12_4_;
      *pfVar18 = param_1 * auVar31._0_4_;
      pfVar18[1] = param_1 * auVar31._4_4_;
      pfVar18 = pfVar18 + 4;
    } while ((long)uVar22 < lVar20 + -3);
    if ((uint)lVar20 <= (uint)uVar22) goto LAB_0067807c;
  }
  lVar20 = lVar20 - (uVar22 & 0xffffffff);
  iVar21 = ((int)uVar12 + (int)uVar22 + 1) - (uint)bVar1;
  pfVar18 = param_6 + (uVar22 & 0xffffffff);
  do {
    lVar3 = (long)iVar21;
    iVar21 = iVar21 + 1;
    lVar20 = lVar20 + -1;
    fVar23 = (float)NEON_ucvtf((uint)pbVar14[lVar3]);
    *pfVar18 = fVar23 * param_1;
    pfVar18 = pfVar18 + 1;
  } while (lVar20 != 0);
LAB_0067807c:
  *param_2 = (long)(pbVar14 + uVar13 + uVar16 + 2);
  *param_3 = (uint)uVar2;
  *param_4 = (uint)bVar1;
  return uVar12;
}

