
undefined8 FUN_03f04168(float *param_1,float *param_2,uint param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar13;
  float fVar14;
  float fVar15;
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
  float in_s30;
  float fVar30;
  
  fVar8 = *param_2;
  fVar2 = param_2[1];
  fVar21 = 1.0;
  fVar10 = param_2[4];
  fVar4 = param_2[5];
  fVar15 = param_2[8];
  fVar6 = param_2[9];
  fVar12 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar15 * fVar15);
  if (0.0 < fVar12) {
    fVar11 = 1.0 / fVar12;
    fVar8 = fVar8 * fVar11;
    fVar10 = fVar10 * fVar11;
    fVar15 = fVar15 * fVar11;
  }
  bVar1 = fVar12 != 0.0;
  fVar17 = param_2[2];
  fVar11 = 1.0;
  if (bVar1) {
    fVar11 = fVar8;
  }
  fVar19 = param_2[6];
  fVar20 = param_2[10];
  fVar8 = 0.0;
  if (bVar1) {
    fVar8 = fVar10;
  }
  fVar10 = 0.0;
  if (bVar1) {
    fVar10 = fVar15;
  }
  fVar15 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar6 * fVar6);
  if (0.0 < fVar15) {
    fVar16 = 1.0 / fVar15;
    fVar2 = fVar2 * fVar16;
    fVar4 = fVar4 * fVar16;
    fVar6 = fVar6 * fVar16;
  }
  bVar1 = fVar15 != 0.0;
  fVar16 = 0.0;
  if (bVar1) {
    fVar16 = fVar2;
  }
  fVar2 = 1.0;
  if (bVar1) {
    fVar2 = fVar4;
  }
  fVar4 = 0.0;
  if (bVar1) {
    fVar4 = fVar6;
  }
  fVar6 = SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar20 * fVar20);
  if (0.0 < fVar6) {
    fVar3 = 1.0 / fVar6;
    fVar17 = fVar17 * fVar3;
    fVar19 = fVar19 * fVar3;
    fVar20 = fVar20 * fVar3;
  }
  bVar1 = fVar6 != 0.0;
  fVar3 = 0.001;
  fVar5 = param_2[3];
  fVar9 = param_2[7];
  fVar7 = param_2[0xb];
  fVar22 = 0.0;
  if (bVar1) {
    fVar22 = fVar17;
  }
  fVar17 = 1.0;
  if (bVar1) {
    fVar17 = fVar20;
  }
  fVar20 = 0.0;
  if (bVar1) {
    fVar20 = fVar19;
  }
  if (fVar12 <= 0.001) {
    fVar12 = fVar3;
  }
  if (fVar15 <= 0.001) {
    fVar15 = fVar3;
  }
  if (fVar6 <= 0.001) {
    fVar6 = fVar3;
  }
  if ((((-1.1920929e-07 <= fVar12 + -1.0) && (fVar12 + -1.0 <= 1.1920929e-07)) &&
      (-1.1920929e-07 <= fVar15 + -1.0)) &&
     (((fVar15 + -1.0 <= 1.1920929e-07 && (-1.1920929e-07 <= fVar6 + -1.0)) &&
      (fVar6 + -1.0 <= 1.1920929e-07)))) {
    return 0;
  }
  fVar19 = -fVar5;
  fVar3 = -fVar9;
  fVar28 = -fVar7;
  if ((param_3 & 1) != 0) {
    fVar12 = 1.0 / fVar12;
    fVar15 = 1.0 / fVar15;
    fVar6 = 1.0 / fVar6;
  }
  fVar26 = -(fVar4 * fVar20) + fVar17 * fVar2;
  fVar30 = fVar16 * (-(fVar8 * fVar17) + fVar10 * fVar20);
  fVar27 = -(fVar10 * fVar2) + fVar4 * fVar8;
  fVar29 = fVar30 + fVar26 * fVar11 + fVar27 * fVar22;
  if (fVar29 != 0.0) {
    fVar14 = 1.0 / fVar29;
    fVar13 = -fVar10;
    unaff_s9 = fVar26 * fVar14;
    fVar29 = -((fVar22 * -fVar4 + fVar17 * fVar16) * fVar14);
    fVar26 = (-(fVar2 * fVar22) + fVar20 * fVar16) * fVar14;
    fVar30 = (fVar22 * fVar13 + fVar17 * fVar11) * fVar14;
    fVar21 = fVar27 * fVar14;
    unaff_s8 = -((fVar20 * fVar13 + fVar17 * fVar8) * fVar14);
    unaff_s10 = -((fVar22 * -fVar8 + fVar20 * fVar11) * fVar14);
    fVar27 = -((fVar16 * fVar13 + fVar4 * fVar11) * fVar14);
    in_s30 = (fVar16 * -fVar8 + fVar2 * fVar11) * fVar14;
  }
  fVar14 = fVar8 + fVar11 * 0.0 + fVar10 * 0.0;
  fVar18 = fVar2 + fVar16 * 0.0 + fVar4 * 0.0;
  fVar24 = fVar20 + fVar22 * 0.0 + fVar17 * 0.0;
  fVar13 = fVar11 + fVar8 * 0.0 + fVar10 * 0.0;
  fVar25 = fVar16 + fVar2 * 0.0 + fVar4 * 0.0;
  fVar10 = fVar10 + fVar8 * 0.0 + fVar11 * 0.0;
  fVar4 = fVar4 + fVar2 * 0.0 + fVar16 * 0.0;
  fVar2 = fVar22 + fVar20 * 0.0 + fVar17 * 0.0;
  fVar17 = fVar17 + fVar20 * 0.0 + fVar22 * 0.0;
  fVar8 = fVar18 * 0.0;
  fVar16 = fVar4 * 0.0;
  fVar22 = fVar25 * 0.0;
  fVar23 = fVar8 + fVar12 * fVar14 + fVar24 * 0.0;
  fVar11 = fVar18 * fVar15 + fVar14 * 0.0 + fVar24 * 0.0;
  fVar8 = fVar8 + fVar14 * 0.0 + fVar6 * fVar24;
  fVar14 = fVar16 + fVar12 * fVar10 + fVar17 * 0.0;
  fVar4 = fVar4 * fVar15 + fVar10 * 0.0 + fVar17 * 0.0;
  fVar20 = fVar22 + fVar12 * fVar13 + fVar2 * 0.0;
  fVar15 = fVar25 * fVar15 + fVar13 * 0.0 + fVar2 * 0.0;
  fVar12 = fVar16 + fVar10 * 0.0 + fVar6 * fVar17;
  fVar2 = fVar22 + fVar13 * 0.0 + fVar6 * fVar2;
  param_1[4] = fVar11 * unaff_s8 + unaff_s9 * fVar23 + fVar21 * fVar8;
  param_1[5] = fVar11 * fVar30 + fVar29 * fVar23 + fVar27 * fVar8;
  param_1[6] = fVar11 * unaff_s10 + fVar26 * fVar23 + in_s30 * fVar8;
  param_1[7] = fVar9;
  param_1[8] = fVar4 * unaff_s8 + unaff_s9 * fVar14 + fVar21 * fVar12;
  param_1[9] = fVar4 * fVar30 + fVar29 * fVar14 + fVar27 * fVar12;
  param_1[10] = fVar4 * unaff_s10 + fVar26 * fVar14 + in_s30 * fVar12;
  param_1[0xb] = fVar7;
  *param_1 = fVar15 * unaff_s8 + unaff_s9 * fVar20 + fVar21 * fVar2;
  param_1[1] = fVar15 * fVar30 + fVar29 * fVar20 + fVar27 * fVar2;
  param_1[2] = fVar15 * unaff_s10 + fVar26 * fVar20 + in_s30 * fVar2;
  param_1[3] = fVar5;
  fVar12 = (float)*(undefined8 *)(param_1 + 8);
  fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar6 = (float)*(undefined8 *)param_1;
  fVar8 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar15 = (float)*(undefined8 *)(param_1 + 4);
  fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_1 + 10);
  fVar10 = (float)*(undefined8 *)(param_1 + 2);
  fVar11 = (float)*(undefined8 *)(param_1 + 6);
  *(ulong *)(param_1 + 2) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                fVar19 * fVar6 + fVar3 * fVar8 + fVar28 * fVar10,
                fVar6 * 0.0 + fVar8 * 0.0 + fVar10 * 1.0 + 0.0);
  *(ulong *)param_1 =
       CONCAT44(fVar6 * 0.0 + fVar8 * 1.0 + fVar10 * 0.0 + 0.0,
                fVar6 * 1.0 + fVar8 * 0.0 + fVar10 * 0.0 + 0.0);
  *(ulong *)(param_1 + 6) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) +
                fVar19 * fVar15 + fVar3 * fVar21 + fVar28 * fVar11,
                fVar15 * 0.0 + fVar21 * 0.0 + fVar11 * 1.0 + 0.0);
  *(ulong *)(param_1 + 4) =
       CONCAT44(fVar15 * 0.0 + fVar21 * 1.0 + fVar11 * 0.0 + 0.0,
                fVar15 * 1.0 + fVar21 * 0.0 + fVar11 * 0.0 + 0.0);
  *(ulong *)(param_1 + 10) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20) +
                fVar19 * fVar12 + fVar3 * fVar2 + fVar28 * fVar4,
                fVar12 * 0.0 + fVar2 * 0.0 + fVar4 * 1.0 + 0.0);
  *(ulong *)(param_1 + 8) =
       CONCAT44(fVar12 * 0.0 + fVar2 * 1.0 + fVar4 * 0.0 + 0.0,
                fVar12 * 1.0 + fVar2 * 0.0 + fVar4 * 0.0 + 0.0);
  return 1;
}

