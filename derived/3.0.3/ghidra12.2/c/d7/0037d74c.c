
void FUN_0037d74c(long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  lVar6 = *(long *)(param_1 + 0x18);
  fVar18 = *(float *)(param_1 + 0x48);
  fVar12 = *(float *)(param_1 + 0x4c);
  pfVar4 = *(float **)(param_2 + 8);
  if (lVar6 != 0) {
    pfVar4 = (float *)(lVar6 + 0x70);
  }
  if ((*(char *)(param_2 + 0x1c) != '\0') && ((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0)) {
    fVar12 = fVar12 * *(float *)(param_2 + 0x14);
    fVar18 = fVar18 * *(float *)(param_2 + 0x10);
  }
  bVar5 = *(byte *)(param_1 + 0x5b) >> 4 & 3;
  fVar10 = *(float *)(param_1 + 0x30);
  if (bVar5 == 2) {
    fVar16 = *(float *)(lVar6 + 0x50);
    fVar17 = 0.5;
LAB_0037d7b0:
    fVar10 = fVar10 + fVar16 * fVar17;
  }
  else if (bVar5 == 1) {
    fVar16 = *(float *)(lVar6 + 0x50);
    fVar17 = -0.5;
    goto LAB_0037d7b0;
  }
  fVar16 = *(float *)(param_1 + 0x34);
  bVar5 = *(byte *)(param_1 + 0x5b) >> 6;
  if (bVar5 == 2) {
    fVar17 = *(float *)(lVar6 + 0x54);
    fVar21 = -0.5;
  }
  else {
    if (bVar5 != 1) goto LAB_0037d7ec;
    fVar17 = *(float *)(lVar6 + 0x54);
    fVar21 = 0.5;
  }
  fVar16 = fVar16 + fVar17 * fVar21;
LAB_0037d7ec:
  fVar17 = *(float *)(param_1 + 0x38);
  if ((*(float *)(param_1 + 0x3c) != 0.0) || (*(float *)(param_1 + 0x40) != 0.0)) {
    fVar21 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
    fVar21 = fVar21 / *(float *)PTR_FloatDegree180_04bcedf8;
    uVar7 = (ulong)(*(float *)(param_1 + 0x3c) * fVar21);
    uVar8 = (ulong)(fVar21 * *(float *)(param_1 + 0x40));
    uVar9 = (ulong)(fVar21 * *(float *)(param_1 + 0x44));
    pfVar1 = (float *)(PTR_SinCosSampleTable_04bcef98 + (uVar7 >> 0x18 & 0xff) * 0x10);
    pfVar2 = (float *)(PTR_SinCosSampleTable_04bcef98 + (uVar8 >> 0x18 & 0xff) * 0x10);
    fVar21 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08;
    pfVar3 = (float *)(PTR_SinCosSampleTable_04bcef98 + (uVar9 >> 0x18 & 0xff) * 0x10);
    fVar22 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
    fVar25 = (float)((uint)uVar9 & 0xffffff) * 5.9604645e-08;
    fVar27 = pfVar1[1] + fVar21 * pfVar1[3];
    fVar29 = pfVar2[1] + fVar22 * pfVar2[3];
    fVar20 = *pfVar1 + fVar21 * pfVar1[2];
    fVar21 = *pfVar2 + fVar22 * pfVar2[2];
    fVar26 = pfVar3[1] + fVar25 * pfVar3[3];
    fVar22 = *pfVar3 + fVar25 * pfVar3[2];
    fVar32 = fVar18 * fVar21 * fVar26;
    fVar31 = fVar18 * fVar21 * fVar22;
    fVar19 = -(fVar29 * fVar18);
    fVar30 = fVar12 * (fVar27 * fVar29 * fVar22 - fVar20 * fVar26);
    fVar28 = fVar12 * (fVar20 * fVar22 + fVar26 * fVar27 * fVar29);
    fVar12 = fVar12 * fVar27 * fVar21;
    fVar25 = fVar27 * fVar26 + fVar29 * fVar20 * fVar22;
    fVar26 = -(fVar27 * fVar22) + fVar29 * fVar20 * fVar26;
    fVar20 = fVar20 * fVar21;
    uVar11 = *(undefined8 *)(pfVar4 + 6);
    uVar15 = *(undefined8 *)(pfVar4 + 10);
    fVar18 = (float)*(undefined8 *)pfVar4;
    fVar21 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
    fVar22 = (float)*(undefined8 *)(pfVar4 + 2);
    fVar27 = (float)*(undefined8 *)(pfVar4 + 4);
    fVar29 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
    fVar13 = (float)uVar11;
    fVar14 = (float)*(undefined8 *)(pfVar4 + 8);
    fVar23 = (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20);
    fVar24 = (float)uVar15;
    *(ulong *)(param_1 + 0x78) =
         CONCAT44((float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) +
                  fVar10 * fVar18 + fVar16 * fVar21 + fVar17 * fVar22,
                  fVar25 * fVar18 + fVar26 * fVar21 + fVar20 * fVar22 + 0.0);
    *(ulong *)(param_1 + 0x70) =
         CONCAT44(fVar30 * fVar18 + fVar28 * fVar21 + fVar12 * fVar22 + 0.0,
                  fVar31 * fVar18 + fVar32 * fVar21 + fVar19 * fVar22 + 0.0);
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar11 >> 0x20) +
                  fVar10 * fVar27 + fVar16 * fVar29 + fVar17 * fVar13,
                  fVar25 * fVar27 + fVar26 * fVar29 + fVar20 * fVar13 + 0.0);
    *(ulong *)(param_1 + 0x80) =
         CONCAT44(fVar30 * fVar27 + fVar28 * fVar29 + fVar12 * fVar13 + 0.0,
                  fVar31 * fVar27 + fVar32 * fVar29 + fVar19 * fVar13 + 0.0);
    *(ulong *)(param_1 + 0x98) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) +
                  fVar10 * fVar14 + fVar16 * fVar23 + fVar17 * fVar24,
                  fVar25 * fVar14 + fVar26 * fVar23 + fVar20 * fVar24 + 0.0);
    *(ulong *)(param_1 + 0x90) =
         CONCAT44(fVar30 * fVar14 + fVar28 * fVar23 + fVar12 * fVar24 + 0.0,
                  fVar31 * fVar14 + fVar32 * fVar23 + fVar19 * fVar24 + 0.0);
    return;
  }
  if (*(float *)(param_1 + 0x44) == 0.0) {
    fVar21 = *pfVar4;
    fVar22 = pfVar4[1];
    uVar11 = *(undefined8 *)(pfVar4 + 6);
    uVar15 = *(undefined8 *)(pfVar4 + 10);
    fVar26 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
    fVar29 = (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20);
    fVar25 = (float)*(undefined8 *)(pfVar4 + 4);
    fVar27 = (float)*(undefined8 *)(pfVar4 + 8);
    fVar20 = (float)uVar11;
    fVar13 = (float)uVar15;
    *(ulong *)(param_1 + 0x78) =
         CONCAT44(pfVar4[3] + fVar16 * fVar22 + fVar17 * pfVar4[2] + fVar10 * fVar21,pfVar4[2]);
    *(ulong *)(param_1 + 0x70) = CONCAT44(fVar12 * fVar22,fVar18 * fVar21);
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar11 >> 0x20) +
                  fVar16 * fVar26 + fVar17 * fVar20 + fVar10 * fVar25,fVar20);
    *(ulong *)(param_1 + 0x80) = CONCAT44(fVar12 * fVar26,fVar18 * fVar25);
    *(ulong *)(param_1 + 0x98) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) +
                  fVar16 * fVar29 + fVar17 * fVar13 + fVar10 * fVar27,fVar13);
    *(ulong *)(param_1 + 0x90) = CONCAT44(fVar12 * fVar29,fVar18 * fVar27);
    return;
  }
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
  uVar7 = (ulong)(*(float *)(param_1 + 0x44) * (fVar21 / *(float *)PTR_FloatDegree180_04bcedf8));
  pfVar1 = (float *)(PTR_SinCosSampleTable_04bcef98 + (uVar7 >> 0x18 & 0xff) * 0x10);
  fVar21 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08;
  fVar22 = pfVar1[1] + fVar21 * pfVar1[3];
  fVar21 = *pfVar1 + fVar21 * pfVar1[2];
  fVar24 = fVar18 * fVar21;
  fVar18 = fVar18 * fVar22;
  fVar23 = -(fVar12 * fVar22);
  fVar12 = fVar12 * fVar21;
  uVar15 = *(undefined8 *)(pfVar4 + 6);
  fVar21 = (float)*(undefined8 *)pfVar4;
  fVar25 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
  fVar20 = (float)*(undefined8 *)(pfVar4 + 2);
  uVar11 = *(undefined8 *)(pfVar4 + 10);
  fVar29 = (float)*(undefined8 *)(pfVar4 + 4);
  fVar13 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
  fVar14 = (float)uVar15;
  fVar22 = (float)*(undefined8 *)(pfVar4 + 8);
  fVar26 = (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20);
  fVar27 = (float)uVar11;
  *(ulong *)(param_1 + 0x78) =
       CONCAT44((float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) +
                fVar10 * fVar21 + fVar16 * fVar25 + fVar17 * fVar20,
                fVar21 * 0.0 + fVar25 * 0.0 + fVar20 * 1.0 + 0.0);
  *(ulong *)(param_1 + 0x70) =
       CONCAT44(fVar23 * fVar21 + fVar12 * fVar25 + fVar20 * 0.0 + 0.0,
                fVar24 * fVar21 + fVar18 * fVar25 + fVar20 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x88) =
       CONCAT44((float)((ulong)uVar15 >> 0x20) + fVar10 * fVar29 + fVar16 * fVar13 + fVar17 * fVar14
                ,fVar29 * 0.0 + fVar13 * 0.0 + fVar14 * 1.0 + 0.0);
  *(ulong *)(param_1 + 0x80) =
       CONCAT44(fVar23 * fVar29 + fVar12 * fVar13 + fVar14 * 0.0 + 0.0,
                fVar24 * fVar29 + fVar18 * fVar13 + fVar14 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x98) =
       CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar10 * fVar22 + fVar16 * fVar26 + fVar17 * fVar27
                ,fVar22 * 0.0 + fVar26 * 0.0 + fVar27 * 1.0 + 0.0);
  *(ulong *)(param_1 + 0x90) =
       CONCAT44(fVar23 * fVar22 + fVar12 * fVar26 + fVar27 * 0.0 + 0.0,
                fVar24 * fVar22 + fVar18 * fVar26 + fVar27 * 0.0 + 0.0);
  return;
}

