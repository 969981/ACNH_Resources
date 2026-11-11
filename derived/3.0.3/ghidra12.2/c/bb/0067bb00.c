
/* WARNING: Removing unreachable block (ram,0x0067bc90) */

void FUN_0067bb00(undefined1 param_1 [16],undefined8 param_2,uint param_3,long param_4,uint param_5,
                 long param_6,long *param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  uint5 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined8 *puVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar29;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  
  fVar5 = param_1._0_4_;
  lVar8 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar8 != 0) {
    FUN_00443a00(lVar8,"TtSampleInterleavedChunk");
  }
  lVar9 = *param_7;
  iVar4 = *(int *)(lVar9 + 0x20);
  if (iVar4 < 1) {
    lVar10 = 1;
    iVar4 = *(int *)(lVar9 + 0x24);
  }
  else if (param_3 == 0) {
    lVar10 = 2;
    iVar4 = *(int *)(lVar9 + 0x24);
  }
  else {
    fVar18 = (float)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x60) - fVar5;
    fVar19 = (float)((ulong)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x60) >> 0x20) - fVar5;
    uVar11 = (ulong)param_3;
    puVar12 = (undefined8 *)(param_7[2] + 0x20);
    puVar14 = (undefined8 *)(param_4 + 0x20);
    lVar10 = 2;
    do {
      puVar3 = puVar12 + (long)iVar4 * 6;
      uVar27 = *puVar3;
      fVar16 = (float)*puVar12;
      fVar17 = (float)((ulong)*puVar12 >> 0x20);
      fVar20 = (float)puVar12[1];
      fVar21 = (float)((ulong)puVar12[1] >> 0x20);
      uVar11 = uVar11 - 1;
      puVar14[1] = CONCAT44(fVar21 + fVar5 * ((float)((ulong)puVar3[1] >> 0x20) - fVar21),
                            fVar20 + fVar5 * ((float)puVar3[1] - fVar20));
      *puVar14 = CONCAT44(fVar17 + fVar5 * ((float)((ulong)uVar27 >> 0x20) - fVar17),
                          fVar16 + fVar5 * ((float)uVar27 - fVar16));
      uVar27 = puVar3[-4];
      fVar20 = (float)puVar12[-3];
      fVar21 = (float)((ulong)puVar12[-3] >> 0x20);
      fVar16 = (float)puVar12[-4];
      fVar17 = (float)((ulong)puVar12[-4] >> 0x20);
      puVar14[-3] = CONCAT44(fVar21 + fVar5 * ((float)((ulong)puVar3[-3] >> 0x20) - fVar21),
                             fVar20 + fVar5 * ((float)puVar3[-3] - fVar20));
      puVar14[-4] = CONCAT44(fVar17 + fVar5 * ((float)((ulong)uVar27 >> 0x20) - fVar17),
                             fVar16 + fVar5 * ((float)uVar27 - fVar16));
      fVar25 = (float)puVar3[-1];
      fVar26 = (float)((ulong)puVar3[-1] >> 0x20);
      fVar20 = (float)puVar3[-2];
      fVar24 = (float)((ulong)puVar3[-2] >> 0x20);
      fVar17 = (float)puVar12[-2];
      auVar28._0_4_ = fVar17 * fVar20;
      fVar21 = (float)((ulong)puVar12[-2] >> 0x20);
      auVar28._4_4_ = fVar21 * fVar24;
      fVar22 = (float)puVar12[-1];
      auVar28._8_4_ = fVar22 * fVar25;
      fVar23 = (float)((ulong)puVar12[-1] >> 0x20);
      auVar28._12_4_ = fVar23 * fVar26;
      auVar30 = NEON_ext(auVar28,auVar28,8,1);
      fVar16 = auVar30._0_4_ + auVar30._4_4_;
      uVar7 = (uint5)(CONCAT44(-(uint)(auVar28._0_4_ + auVar28._4_4_ + fVar16 < 0.0),
                               -(uint)(auVar28._0_4_ + auVar28._4_4_ + fVar16 < 0.0)) >> 0x18) &
              0x8000000080;
      fVar16 = (float)CONCAT13((byte)uVar7 ^ param_1[3],param_1._0_3_);
      puVar12 = puVar12 + 6;
      fVar29 = (float)(CONCAT17((byte)(uVar7 >> 0x20) ^ param_1[3],
                                CONCAT16(param_1[2],CONCAT15(param_1[1],CONCAT14(param_1[0],fVar16))
                                        )) >> 0x20);
      fVar20 = fVar17 * fVar18 + fVar20 * fVar16;
      fVar21 = fVar21 * fVar19 + fVar24 * fVar29;
      fVar22 = fVar22 * fVar18 + fVar25 * fVar16;
      fVar23 = fVar23 * fVar19 + fVar26 * fVar29;
      fVar24 = fVar20 * fVar20;
      fVar25 = fVar21 * fVar21;
      auVar30._4_4_ = fVar25;
      auVar30._0_4_ = fVar24;
      auVar30._8_4_ = fVar22 * fVar22;
      auVar30._12_4_ = fVar23 * fVar23;
      auVar6._4_4_ = fVar25;
      auVar6._0_4_ = fVar24;
      auVar6._8_4_ = fVar22 * fVar22;
      auVar6._12_4_ = fVar23 * fVar23;
      auVar30 = NEON_ext(auVar30,auVar6,8,1);
      fVar17 = auVar30._0_4_ + auVar30._4_4_;
      fVar16 = fVar24 + fVar25 + fVar17;
      fVar17 = fVar24 + fVar25 + fVar17;
      uVar27 = NEON_frsqrte(CONCAT44(fVar17,fVar16),4);
      fVar24 = (float)uVar27;
      fVar25 = (float)((ulong)uVar27 >> 0x20);
      uVar27 = NEON_frsqrts(CONCAT44(fVar17,fVar16),CONCAT44(fVar25 * fVar25,fVar24 * fVar24),4);
      fVar24 = fVar24 * (float)uVar27;
      fVar25 = fVar25 * (float)((ulong)uVar27 >> 0x20);
      uVar27 = NEON_frsqrts(CONCAT44(fVar17,fVar16),CONCAT44(fVar25 * fVar25,fVar24 * fVar24),4);
      fVar24 = (float)uVar27 * fVar24;
      fVar25 = (float)((ulong)uVar27 >> 0x20) * fVar25;
      puVar14[-1] = CONCAT44(fVar23 * fVar25,fVar22 * fVar24);
      puVar14[-2] = CONCAT44(fVar21 * fVar25,fVar20 * fVar24);
      puVar14 = puVar14 + 6;
    } while (uVar11 != 0);
    iVar4 = *(int *)(lVar9 + 0x24);
  }
  if ((0 < iVar4) && (param_5 != 0)) {
    pfVar13 = (float *)param_7[lVar10 * 2];
    if (param_5 == 1) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      pfVar15 = (float *)(param_6 + 4);
      do {
        lVar9 = lVar9 + 2;
        pfVar15[-1] = *pfVar13 + (pfVar13[iVar4] - *pfVar13) * fVar5;
        pfVar1 = pfVar13 + 1;
        pfVar2 = pfVar13 + (long)iVar4 + 1;
        pfVar13 = pfVar13 + 2;
        *pfVar15 = *pfVar1 + (*pfVar2 - *pfVar1) * fVar5;
        pfVar15 = pfVar15 + 2;
      } while ((ulong)param_5 - ((ulong)param_5 & 1) != lVar9);
      if ((param_5 & 1) == 0) goto LAB_0067bd2c;
    }
    *(float *)(param_6 + lVar9 * 4) = *pfVar13 + (pfVar13[iVar4] - *pfVar13) * fVar5;
  }
LAB_0067bd2c:
  if (lVar8 != 0) {
    FUN_00443a70(lVar8,&DAT_04085310);
  }
  return;
}

