
void FUN_03f45d40(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  pfVar1 = param_1 + 0x1915;
  lVar6 = 0;
  pfVar2 = param_1 + 0x200f;
  lVar8 = 0x6964;
  fVar18 = -param_1[4];
  do {
    pfVar5 = (float *)((long)param_1 + lVar8);
    fVar21 = *pfVar5;
    fVar24 = (fVar21 - pfVar5[0x144]) * pfVar5[0x288];
    if (fVar24 <= 0.0) {
      if (fVar24 < fVar18) {
        fVar12 = fVar12 + 1.0;
        fVar24 = 230.0;
        if (fVar21 <= 230.0) {
          fVar24 = fVar21;
        }
        pfVar5[0x144] = fVar24;
        pfVar5[0x288] = -pfVar5[0x288];
        fVar10 = fVar10 + (float)*(int *)((long)param_1 + lVar6 + 0x7ef4);
      }
    }
    else {
      fVar24 = 230.0;
      if (fVar21 <= 230.0) {
        fVar24 = fVar21;
      }
      pfVar5[0x144] = fVar24;
    }
    fVar21 = pfVar5[1];
    fVar24 = (fVar21 - pfVar5[0x145]) * pfVar5[0x289];
    if (fVar24 <= 0.0) {
      if (fVar24 < fVar18) {
        fVar24 = 230.0;
        if (fVar21 <= 230.0) {
          fVar24 = fVar21;
        }
        pfVar5[0x145] = fVar24;
        pfVar5[0x289] = -pfVar5[0x289];
      }
    }
    else {
      fVar24 = 230.0;
      if (fVar21 <= 230.0) {
        fVar24 = fVar21;
      }
      pfVar5[0x145] = fVar24;
    }
    fVar21 = pfVar5[2];
    fVar24 = (fVar21 - pfVar5[0x146]) * pfVar5[0x28a];
    if (0.0 < fVar24) {
      fVar24 = 230.0;
      if (fVar21 <= 230.0) {
        fVar24 = fVar21;
      }
      pfVar5[0x146] = fVar24;
    }
    else if (fVar24 < fVar18) {
      fVar13 = fVar13 + 1.0;
      fVar24 = 230.0;
      if (fVar21 <= 230.0) {
        fVar24 = fVar21;
      }
      pfVar5[0x146] = fVar24;
      pfVar5[0x28a] = -pfVar5[0x28a];
      fVar11 = fVar11 + (float)*(int *)((long)param_1 + lVar6 + 0x7ef4);
    }
    lVar6 = lVar6 + 4;
    lVar8 = lVar8 + 0x10;
  } while (lVar6 != 0x144);
  fVar18 = *pfVar2;
  fVar19 = *param_1;
  fVar21 = param_1[0x2011];
  fVar24 = param_1[0x2012];
  fVar14 = param_1[0x2013];
  fVar15 = param_1[0x2016];
  fVar4 = param_1[0x2017];
  if ((int)fVar18 < 2) {
    fVar18 = 1.4013e-45;
  }
  fVar16 = param_1[8];
  *pfVar2 = (float)((int)fVar18 + -1);
  pfVar5 = param_1 + 0x2010;
  fVar18 = *pfVar5;
  if ((int)fVar18 < 2) {
    fVar18 = 1.4013e-45;
  }
  if ((int)fVar21 < 2) {
    fVar21 = 1.4013e-45;
  }
  if ((int)fVar24 < 2) {
    fVar24 = 1.4013e-45;
  }
  *pfVar5 = (float)((int)fVar18 + -1);
  fVar18 = param_1[0x2018];
  fVar22 = fVar16 * 9.0 * 9.0;
  param_1[0x2011] = (float)((int)fVar21 + -1);
  param_1[0x2012] = (float)((int)fVar24 + -1);
  if ((int)fVar14 < 2) {
    fVar14 = 1.4013e-45;
  }
  pfVar7 = param_1 + 0x2014;
  fVar21 = *pfVar7;
  param_1[0x2013] = (float)((int)fVar14 + -1);
  pfVar9 = param_1 + 0x2015;
  fVar24 = *pfVar9;
  if ((int)fVar21 < 2) {
    fVar21 = 1.4013e-45;
  }
  if ((int)fVar24 < 2) {
    fVar24 = 1.4013e-45;
  }
  *pfVar7 = (float)((int)fVar21 + -1);
  if ((int)fVar15 < 2) {
    fVar15 = 1.4013e-45;
  }
  if ((int)fVar4 < 2) {
    fVar4 = 1.4013e-45;
  }
  *pfVar9 = (float)((int)fVar24 + -1);
  if ((int)fVar18 < 2) {
    fVar18 = 1.4013e-45;
  }
  param_1[0x2016] = (float)((int)fVar15 + -1);
  param_1[0x2017] = (float)((int)fVar4 + -1);
  param_1[0x2018] = (float)((int)fVar18 + -1);
  if ((fVar22 < fVar12 * fVar19) && (fVar16 * (float)(int)param_1[0x200e] < fVar10 * fVar19)) {
    *(undefined8 *)pfVar2 = *(undefined8 *)pfVar5;
    *(undefined8 *)(param_1 + 0x2011) = *(undefined8 *)(param_1 + 0x2012);
    param_1[0x2013] = param_1[9];
  }
  if ((fVar22 < fVar13 * fVar19) && (fVar16 * (float)(int)param_1[0x200e] < fVar11 * fVar19)) {
    *(undefined8 *)pfVar7 = *(undefined8 *)pfVar9;
    *(undefined8 *)(param_1 + 0x2016) = *(undefined8 *)(param_1 + 0x2017);
    param_1[0x2018] = param_1[9];
  }
  if (((uint)param_1[0xb] & 1) == 0) {
    fVar11 = param_1[5];
    fVar12 = param_1[1];
    auVar17 = NEON_fmov(0xbf800000,4);
    auVar20 = NEON_fmov(0x3f800000,4);
    fVar13 = param_1[6];
    fVar18 = param_1[2];
    fVar10 = param_1[7];
    fVar21 = param_1[3];
    lVar6 = 0x51;
    fVar24 = -fVar12;
    fVar14 = -fVar18;
    fVar15 = -fVar21;
    pfVar5 = pfVar1;
    pfVar7 = param_1 + 0x1e28;
    do {
      fVar4 = pfVar5[0x144];
      fVar19 = pfVar5[0x145];
      fVar16 = pfVar5[0x146];
      fVar22 = pfVar5[0x147];
      lVar6 = lVar6 + -1;
      auVar23._0_4_ =
           fVar4 + (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)fVar12) & -(uint)(0.0 <= fVar4));
      auVar23._4_4_ =
           fVar19 + (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)fVar18) & -(uint)(0.0 <= fVar19));
      auVar23._8_4_ =
           fVar16 + (float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)fVar21) & -(uint)(0.0 <= fVar16));
      auVar23._12_4_ = fVar22 + -(float)(-(uint)(0.0 <= fVar22) & 0x80000000);
      auVar25._0_4_ = -(uint)(0.0 <= fVar4 - *pfVar5);
      auVar25._4_4_ = -(uint)(0.0 <= fVar19 - pfVar5[1]);
      auVar25._8_4_ = -(uint)(0.0 <= fVar16 - pfVar5[2]);
      auVar25._12_4_ = -(uint)(0.0 <= fVar22 - pfVar5[3]);
      auVar27 = NEON_frecpe(auVar23,4);
      auVar25 = auVar17 ^ (auVar17 ^ auVar20) & auVar25;
      auVar29 = NEON_frecps(auVar23,auVar27,4);
      auVar26._0_4_ = (fVar4 - *pfVar5) * auVar25._0_4_ - fVar11;
      auVar26._4_4_ = (fVar19 - pfVar5[1]) * auVar25._4_4_ - fVar13;
      auVar26._8_4_ = (fVar16 - pfVar5[2]) * auVar25._8_4_ - fVar10;
      auVar26._12_4_ = (fVar22 - pfVar5[3]) * auVar25._12_4_ - 0.0;
      auVar26 = NEON_fmax(auVar26,ZEXT816(0),4);
      auVar28._0_4_ = auVar27._0_4_ * auVar29._0_4_;
      auVar28._4_4_ = auVar27._4_4_ * auVar29._4_4_;
      auVar28._8_4_ = auVar27._8_4_ * auVar29._8_4_;
      auVar28._12_4_ = auVar27._12_4_ * auVar29._12_4_;
      auVar27._8_4_ = 0x437f0000;
      auVar27._0_8_ = 0x437f0000437f0000;
      auVar27._12_4_ = 0x437f0000;
      auVar26 = NEON_fmin(auVar26,auVar27,4);
      auVar27 = NEON_frecps(auVar23,auVar28,4);
      pfVar7[2] = auVar20._8_4_ - auVar26._8_4_ * auVar25._8_4_ * auVar27._8_4_ * auVar28._8_4_;
      pfVar7[3] = auVar20._12_4_ - auVar26._12_4_ * auVar25._12_4_ * auVar27._12_4_ * auVar28._12_4_
      ;
      *pfVar7 = auVar20._0_4_ - auVar26._0_4_ * auVar25._0_4_ * auVar27._0_4_ * auVar28._0_4_;
      pfVar7[1] = auVar20._4_4_ - auVar26._4_4_ * auVar25._4_4_ * auVar27._4_4_ * auVar28._4_4_;
      pfVar5 = pfVar5 + 4;
      pfVar7 = pfVar7 + 4;
    } while (lVar6 != 0);
  }
  else {
    fVar11 = param_1[5];
    fVar13 = param_1[7];
    lVar6 = 0;
    pfVar5 = pfVar1;
    do {
      fVar10 = 1.0;
      if (*pfVar2 != 0.0) {
        fVar12 = fVar11 / ABS(pfVar5[0x144] - *pfVar5);
        fVar10 = 1.0;
        if (fVar12 <= 1.0) {
          fVar10 = fVar12;
        }
      }
      if (*pfVar7 != 0.0) {
        fVar12 = fVar13 / ABS(pfVar5[0x146] - pfVar5[2]);
        if (fVar12 <= fVar10) {
          fVar10 = fVar12;
        }
      }
      pfVar5 = pfVar5 + 4;
      *(float *)((long)param_1 + lVar6 + 0x7db0) = fVar10 * 128.0;
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0x144);
  }
  lVar6 = 0;
  do {
    puVar3 = (undefined4 *)((long)pfVar1 + lVar6);
    lVar6 = lVar6 + 0x10;
    *puVar3 = puVar3[0x144];
    *(undefined8 *)(puVar3 + 1) = *(undefined8 *)(puVar3 + 0x145);
    puVar3[3] = puVar3[0x147];
  } while (lVar6 != 0x510);
  *(bool *)(param_1 + 0x2019) = *pfVar2 != 0.0 || param_1[0x2014] != 0.0;
  return;
}

