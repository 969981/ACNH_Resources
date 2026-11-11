
void FUN_00669840(long param_1,uint param_2,undefined8 *param_3,float *param_4,float *param_5)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  double dVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  double dVar37;
  float afStack_50 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float local_c;
  uint uStack_8;
  uint local_4;
  
  lVar1 = param_1 + 0xd60;
  uVar13 = (ulong)(long)(int)(param_2 << 2) >> 2;
  bVar3 = *(byte *)(lVar1 + (-(ulong)((param_2 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                            (ulong)(param_2 << 2) << 2) + 2);
  bVar4 = *(byte *)(lVar1 + (uVar13 << 4 | 4) + 2);
  local_c = (float)(uint)bVar3;
  uStack_8 = (uint)bVar4;
  bVar5 = *(byte *)(lVar1 + (uVar13 << 4 | 8) + 2);
  param_1 = param_1 + 0x8d0;
  local_4 = (uint)bVar5;
  pfVar8 = (float *)(param_1 + (ulong)bVar5 * 0x10);
  pfVar9 = (float *)(param_1 + (ulong)bVar4 * 0x10);
  fVar23 = *pfVar8 - *pfVar9;
  fVar26 = pfVar8[1] - pfVar9[1];
  fVar28 = pfVar8[2] - pfVar9[2];
  uStack_38 = CONCAT44(pfVar8[3] - pfVar9[3],fVar28);
  local_40 = CONCAT44(fVar26,fVar23);
  puVar10 = (undefined8 *)(param_1 + (ulong)bVar3 * 0x10);
  uVar31 = puVar10[1];
  uVar30 = *puVar10;
  fStack_20 = (float)uVar30;
  local_30 = fStack_20 - *pfVar8;
  fStack_1c = (float)((ulong)uVar30 >> 0x20);
  fStack_2c = fStack_1c - pfVar8[1];
  fStack_18 = (float)uVar31;
  fStack_28 = fStack_18 - pfVar8[2];
  fVar24 = (float)((ulong)uVar31 >> 0x20);
  auVar16._0_4_ = fVar23 * fVar23;
  auVar16._4_4_ = fVar26 * fVar26;
  auVar16._8_4_ = fVar28 * fVar28;
  fStack_20 = *pfVar9 - fStack_20;
  fStack_1c = pfVar9[1] - fStack_1c;
  fStack_18 = pfVar9[2] - fStack_18;
  auVar16._12_4_ = fStack_28 * fStack_28;
  auVar17 = NEON_ext(auVar16,auVar16,8,1);
  fStack_24 = fVar24 - pfVar8[3];
  fStack_14 = pfVar9[3] - fVar24;
  fVar23 = auVar16._0_4_ + auVar16._4_4_ + auVar17._0_4_;
  fVar26 = local_30 * local_30 + fStack_2c * fStack_2c + auVar17._4_4_;
  auVar18._0_8_ = CONCAT44(fVar26,fVar23);
  fVar28 = fStack_20 * fStack_20 + fStack_1c * fStack_1c + fStack_18 * fStack_18;
  uVar30 = NEON_fminp(auVar18._0_8_,auVar18._0_8_,4);
  auVar18._12_4_ = fStack_20 * fStack_20 + fStack_1c * fStack_1c + fStack_18 * fStack_18;
  auVar18._8_4_ = fVar28;
  uVar30 = NEON_fmin(CONCAT44(fVar28,fVar28),uVar30,4);
  cVar6 = PTR_DAT_04bd4c60
          [-(uint)(fVar26 <= (float)((ulong)uVar30 >> 0x20)) & 2 |
           -(uint)(fVar23 <= (float)uVar30) & 1 | -(uint)(fVar28 <= (float)uVar30) & 4];
  lVar14 = (long)cVar6;
  uVar12 = (uint)cVar6;
  uVar7 = (uVar12 & 3) << 1;
  uVar2 = 0x36U >> (ulong)uVar7 & 3 ^ uVar12;
  lVar1 = (long)(int)uVar2;
  uVar13 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
  dVar21 = (double)afStack_50[lVar1 * 4 + 5];
  dVar19 = (double)afStack_50[lVar1 * 4 + 4];
  dVar11 = (double)(&local_c)[lVar1 * 4 + -0xb];
  dVar32 = *(double *)(PTR_DAT_04bd4c78 + 0xc0) /
           (dVar19 * dVar19 + dVar21 * dVar21 + dVar11 * dVar11);
  dVar33 = (double)afStack_50[lVar14 * 4 + 4];
  dVar37 = (dVar33 * dVar19 + (double)afStack_50[lVar14 * 4 + 5] * dVar21 +
           (double)(&local_c)[lVar14 * 4 + -0xb] * dVar11) * dVar32;
  fVar23 = (float)(dVar33 - dVar37 * dVar19);
  fVar28 = (float)((double)afStack_50[lVar14 * 4 + 5] - dVar37 * dVar21);
  fVar24 = (float)((double)(&local_c)[lVar14 * 4 + -0xb] - dVar37 * dVar11);
  uVar35 = param_3[1];
  uVar15 = -(ulong)((uint)(int)cVar6 >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(0x2dU >> (ulong)uVar7 & 3 ^ (int)cVar6) << 2;
  uVar22 = CONCAT44(fVar23 * fVar23 + fVar28 * fVar28 + fVar24 * fVar24,
                    fVar23 * fVar23 + fVar28 * fVar28 + fVar24 * fVar24);
  puVar10 = (undefined8 *)(param_1 + (long)*(int *)((long)&local_c + uVar15) * 0x10);
  uVar31 = puVar10[1];
  uVar30 = *puVar10;
  fVar25 = (float)*param_3 - (float)uVar30;
  fVar27 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)uVar30 >> 0x20);
  fVar29 = (float)uVar35 - (float)uVar31;
  fVar23 = fVar25 * fVar23;
  fVar28 = fVar27 * fVar28;
  fVar24 = fVar29 * fVar24;
  uVar30 = NEON_frecpe(uVar22,4);
  uVar36 = NEON_frecps(uVar22,uVar30,4);
  fVar26 = (float)uVar30 * (float)uVar36;
  fVar34 = (float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar36 >> 0x20);
  uVar30 = NEON_frecps(uVar22,CONCAT44(fVar34,fVar26),4);
  fVar26 = fVar26 * (float)uVar30 * (fVar23 + fVar28 + fVar24);
  fVar23 = fVar34 * (float)((ulong)uVar30 >> 0x20) * (fVar23 + fVar28 + fVar24);
  uVar36 = *(undefined8 *)(&local_c + lVar14 * 4 + -0xb);
  uVar30 = *(undefined8 *)(afStack_50 + lVar14 * 4 + 4);
  *(float *)((long)afStack_50 + uVar13) = fVar26;
  uVar22 = *(undefined8 *)(afStack_50 + lVar1 * 4 + 4);
  fVar28 = (float)dVar32;
  auVar20._0_4_ = (float)uVar22 * (fVar25 - (float)uVar30 * fVar26);
  auVar20._4_4_ =
       (float)((ulong)uVar22 >> 0x20) * (fVar27 - (float)((ulong)uVar30 >> 0x20) * fVar23);
  auVar20._8_4_ =
       (float)*(undefined8 *)(&local_c + lVar1 * 4 + -0xb) * (fVar29 - (float)uVar36 * fVar26);
  auVar20._12_4_ =
       (float)((ulong)*(undefined8 *)(&local_c + lVar1 * 4 + -0xb) >> 0x20) *
       (((float)((ulong)uVar35 >> 0x20) - (float)((ulong)uVar31 >> 0x20)) -
       (float)((ulong)uVar36 >> 0x20) * fVar23);
  auVar17 = NEON_ext(auVar20,auVar20,8,1);
  fVar23 = auVar20._0_4_ + auVar20._4_4_ + auVar17._0_4_;
  afStack_50[lVar14] = -(fVar23 * fVar28);
  *(float *)((long)afStack_50 + uVar15) =
       (fVar28 * fVar23 + 1.0) - *(float *)((long)afStack_50 + uVar13);
  auVar17 = NEON_frsqrte(auVar18,4);
  param_4[2] = afStack_50[2];
  param_4[3] = 0.0;
  *param_4 = afStack_50[0];
  param_4[1] = afStack_50[1];
  fVar23 = auVar17._0_4_;
  fVar26 = auVar17._4_4_;
  fVar28 = auVar17._8_4_;
  fVar24 = auVar17._12_4_;
  auVar17._4_4_ = fVar26 * fVar26;
  auVar17._0_4_ = fVar23 * fVar23;
  auVar17._8_4_ = fVar28 * fVar28;
  auVar17._12_4_ = fVar24 * fVar24;
  auVar17 = NEON_frsqrts(auVar18,auVar17,4);
  param_5[2] = afStack_50[2] * fVar28 * auVar17._8_4_;
  param_5[3] = fVar24 * auVar17._12_4_ * 0.0;
  *param_5 = afStack_50[0] * fVar23 * auVar17._0_4_;
  param_5[1] = afStack_50[1] * fVar26 * auVar17._4_4_;
  return;
}

