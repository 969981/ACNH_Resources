
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00392ea0(float param_1,undefined8 param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar1 = param_4[8];
  if (uVar1 < 2) {
    fVar6 = *(float *)(param_4 + 0xc);
    fVar14 = *(float *)(param_4 + 0xe);
  }
  else {
    uVar4 = (ulong)(uVar1 - 1);
    pfVar5 = *(float **)(param_4 + 0xc);
    pfVar3 = pfVar5 + (ulong)(uVar1 - 2) * 0xe;
    fVar6 = *pfVar5;
    do {
      fVar14 = pfVar5[0xe];
      if ((fVar6 <= param_1) && (param_1 < fVar14)) {
        pfVar3 = pfVar5;
        goto LAB_00392f2c;
      }
      pfVar5 = pfVar5 + 0xe;
      uVar4 = uVar4 - 1;
      fVar6 = fVar14;
    } while (uVar4 != 0);
    if (pfVar3 == (float *)0x0) {
      fVar14 = 0.0;
      fVar6 = 0.0;
    }
    else {
LAB_00392f2c:
      uVar2 = *(undefined8 *)(pfVar3 + 7);
      fVar14 = (param_1 - *pfVar3) / (fVar14 - *pfVar3);
      fVar6 = 0.0;
      if (0.0 <= fVar14) {
        fVar6 = fVar14;
      }
      fVar14 = 1.0;
      if (fVar6 <= 1.0) {
        fVar14 = fVar6;
      }
      fVar7 = 1.0 - fVar14;
      fVar9 = fVar7 * fVar7 * fVar7;
      fVar8 = fVar7 * fVar14 * 3.0 * fVar7;
      fVar7 = fVar7 * fVar14 * fVar14 * 3.0;
      fVar14 = fVar14 * fVar14 * fVar14;
      fVar6 = (float)uVar2 * fVar14 +
              (pfVar3[7] + pfVar3[0xb]) * fVar7 +
              pfVar3[5] * fVar9 + (pfVar3[5] + pfVar3[9]) * fVar8;
      fVar14 = (float)((ulong)uVar2 >> 0x20) * fVar14 +
               (pfVar3[8] + pfVar3[0xc]) * fVar7 +
               pfVar3[6] * fVar9 + (pfVar3[6] + pfVar3[10]) * fVar8;
    }
  }
  fVar7 = (float)FUN_0038ef70(param_1,param_4 + 0x10);
  fVar8 = (float)FUN_0038ef70(param_1,param_4 + 0x18);
  fVar9 = (float)FUN_0038ef70(param_1,param_4 + 0x28);
  uVar1 = *param_4;
  if (uVar1 < 2) {
    fVar10 = *(float *)(param_4 + 4);
    fVar11 = *(float *)(param_4 + 6);
  }
  else {
    uVar4 = (ulong)(uVar1 - 1);
    pfVar5 = *(float **)(param_4 + 4);
    pfVar3 = pfVar5 + (ulong)(uVar1 - 2) * 0xe;
    fVar10 = *pfVar5;
    do {
      fVar11 = pfVar5[0xe];
      if ((fVar10 <= param_1) && (param_1 < fVar11)) {
        pfVar3 = pfVar5;
        goto LAB_0039305c;
      }
      pfVar5 = pfVar5 + 0xe;
      uVar4 = uVar4 - 1;
      fVar10 = fVar11;
    } while (uVar4 != 0);
    if (pfVar3 == (float *)0x0) {
      fVar11 = 0.0;
      fVar10 = 0.0;
    }
    else {
LAB_0039305c:
      uVar2 = *(undefined8 *)(pfVar3 + 7);
      fVar11 = (param_1 - *pfVar3) / (fVar11 - *pfVar3);
      fVar10 = 0.0;
      if (0.0 <= fVar11) {
        fVar10 = fVar11;
      }
      fVar11 = 1.0;
      if (fVar10 <= 1.0) {
        fVar11 = fVar10;
      }
      fVar12 = 1.0 - fVar11;
      fVar13 = fVar12 * fVar12 * fVar12;
      fVar15 = fVar12 * fVar11 * 3.0 * fVar12;
      fVar12 = fVar12 * fVar11 * fVar11 * 3.0;
      fVar11 = fVar11 * fVar11 * fVar11;
      fVar10 = (float)uVar2 * fVar11 +
               (pfVar3[7] + pfVar3[0xb]) * fVar12 +
               pfVar3[5] * fVar13 + (pfVar3[5] + pfVar3[9]) * fVar15;
      fVar11 = (float)((ulong)uVar2 >> 0x20) * fVar11 +
               (pfVar3[8] + pfVar3[0xc]) * fVar12 +
               pfVar3[6] * fVar13 + (pfVar3[6] + pfVar3[10]) * fVar15;
    }
  }
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
  fVar14 = -fVar14;
  uVar4 = (ulong)(fVar9 * (fVar12 / *(float *)PTR_FloatDegree180_04bcedf8));
  pfVar5 = (float *)(PTR_SinCosSampleTable_04bcef98 + (uVar4 >> 0x18 & 0xff) * 0x10);
  fVar6 = -fVar6;
  fVar9 = (float)((uint)uVar4 & 0xffffff) * 5.9604645e-08;
  fVar12 = pfVar5[1] + fVar9 * pfVar5[3];
  fVar9 = *pfVar5 + fVar9 * pfVar5[2];
  fVar13 = fVar7 * fVar9;
  fVar7 = fVar7 * fVar12;
  fVar12 = -(fVar8 * fVar12);
  fVar8 = fVar8 * fVar9;
  param_3[1] = CONCAT44(fVar10 + fVar6 * fVar13 + fVar14 * fVar12 + 0.0,
                        fVar13 * 0.0 + fVar12 * 0.0 + 0.0 + 0.0);
  *param_3 = CONCAT44(fVar13 * 0.0 + fVar12 * 1.0 + 0.0 + 0.0,
                      fVar13 * 1.0 + fVar12 * 0.0 + 0.0 + 0.0);
  param_3[3] = CONCAT44(fVar11 + fVar6 * fVar7 + fVar14 * fVar8 + 0.0,
                        fVar7 * 0.0 + fVar8 * 0.0 + 0.0 + 0.0);
  param_3[2] = CONCAT44(fVar7 * 0.0 + fVar8 * 1.0 + 0.0 + 0.0,fVar7 * 1.0 + fVar8 * 0.0 + 0.0 + 0.0)
  ;
  fVar7 = (float)_DAT_041023d0;
  uVar4 = (ulong)_DAT_041023d0 >> 0x20;
  param_3[5] = CONCAT44(fVar6 * 0.0 + fVar14 * 0.0 + (float)((ulong)_UNK_041023d8 >> 0x20),
                        (float)_UNK_041023d8 + 0.0);
  param_3[4] = CONCAT44((float)uVar4 + 0.0,fVar7 + 0.0);
  return;
}

