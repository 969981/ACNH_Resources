
bool FUN_038e6ab4(float *param_1,float *param_2)

{
  float fVar1;
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
  float fVar30;
  float fVar31;
  
  fVar2 = param_2[4];
  fVar5 = param_2[5];
  fVar3 = param_2[6];
  fVar8 = param_2[7];
  fVar18 = param_2[8];
  fVar22 = param_2[9];
  fVar30 = fVar8 * fVar22;
  fVar19 = param_2[10];
  fVar24 = param_2[0xb];
  fVar28 = fVar2 * fVar24;
  fVar23 = param_2[0xe];
  fVar25 = param_2[0xf];
  fVar29 = fVar3 * fVar18;
  fVar20 = param_2[0xc];
  fVar21 = param_2[0xd];
  fVar17 = *param_2;
  fVar1 = param_2[1];
  fVar27 = fVar5 * fVar19;
  fVar10 = fVar3 * fVar24;
  fVar9 = fVar2 * fVar22;
  fVar7 = param_2[2];
  fVar4 = param_2[3];
  fVar6 = ((((fVar1 * (fVar29 * fVar25 + fVar23 * fVar28 + fVar20 * fVar8 * fVar19) +
              (fVar10 * fVar21 + fVar25 * fVar27 + fVar23 * fVar30) * fVar17 +
              (fVar5 * fVar24 * fVar20 + fVar25 * fVar9 + fVar21 * fVar8 * fVar18) * fVar7 +
             (fVar5 * fVar18 * fVar23 + fVar21 * fVar2 * fVar19 + fVar20 * fVar3 * fVar22) * fVar4)
            - (fVar3 * fVar22 * fVar25 + fVar23 * fVar5 * fVar24 + fVar21 * fVar8 * fVar19) * fVar17
            ) - (fVar10 * fVar20 + fVar25 * fVar2 * fVar19 + fVar23 * fVar8 * fVar18) * fVar1) -
          (fVar5 * fVar18 * fVar25 + fVar21 * fVar28 + fVar20 * fVar30) * fVar7) -
          (fVar27 * fVar20 + fVar23 * fVar9 + fVar21 * fVar29) * fVar4;
  if (fVar6 != 0.0) {
    fVar26 = -(fVar24 * fVar23) + fVar25 * fVar19;
    fVar13 = -(fVar24 * fVar21) + fVar25 * fVar22;
    fVar11 = -(fVar22 * fVar23) + fVar21 * fVar19;
    fVar14 = -(fVar18 * fVar23) + fVar20 * fVar19;
    fVar15 = -(fVar24 * fVar20) + fVar25 * fVar18;
    fVar16 = -(fVar18 * fVar21) + fVar20 * fVar22;
    fVar12 = -(fVar8 * fVar23) + fVar25 * fVar3;
    fVar30 = fVar5 * fVar24 - fVar30;
    fVar31 = -(fVar5 * fVar25) + fVar21 * fVar8;
    fVar27 = fVar3 * fVar22 - fVar27;
    fVar24 = -(fVar8 * fVar20) + fVar25 * fVar2;
    fVar25 = -(fVar3 * fVar21) + fVar23 * fVar5;
    fVar23 = -(fVar2 * fVar23) + fVar20 * fVar3;
    fVar20 = -(fVar5 * fVar20) + fVar21 * fVar2;
    fVar22 = -fVar7;
    fVar21 = -fVar17;
    fVar28 = fVar8 * fVar18 - fVar28;
    fVar9 = fVar5 * fVar18 - fVar9;
    fVar10 = fVar8 * fVar19 - fVar10;
    fVar29 = fVar2 * fVar19 - fVar29;
    fVar19 = 1.0 / fVar6;
    fVar18 = -fVar1;
    *param_1 = ((-(fVar3 * fVar13) + fVar26 * fVar5) - fVar11 * fVar8) * fVar19;
    param_1[1] = (fVar4 * fVar11 + fVar13 * fVar7 + fVar26 * fVar18) * fVar19;
    param_1[2] = (fVar7 * fVar31 + fVar12 * fVar1 + fVar25 * fVar4) * fVar19;
    param_1[3] = (fVar7 * fVar30 + fVar10 * fVar1 + fVar27 * fVar4) * fVar19;
    param_1[4] = ((fVar8 * fVar14 + fVar15 * fVar3) - fVar26 * fVar2) * fVar19;
    param_1[5] = (fVar15 * fVar22 + fVar26 * fVar17 + fVar14 * -fVar4) * fVar19;
    param_1[6] = (fVar4 * fVar23 + fVar24 * fVar7 + fVar12 * fVar21) * fVar19;
    param_1[7] = (fVar4 * fVar29 + fVar28 * fVar7 + fVar10 * fVar21) * fVar19;
    param_1[8] = ((-(fVar5 * fVar15) + fVar13 * fVar2) - fVar16 * fVar8) * fVar19;
    param_1[9] = (fVar4 * fVar16 + fVar15 * fVar1 + fVar13 * fVar21) * fVar19;
    param_1[10] = (fVar31 * fVar21 + fVar20 * fVar4 + fVar24 * fVar18) * fVar19;
    param_1[0xb] = (fVar30 * fVar21 + fVar9 * fVar4 + fVar28 * fVar18) * fVar19;
    param_1[0xc] = (-(fVar5 * fVar14) + fVar11 * fVar2 + fVar16 * fVar3) * fVar19;
    param_1[0xd] = (fVar16 * fVar22 + fVar14 * fVar1 + fVar11 * fVar21) * fVar19;
    param_1[0xe] = (fVar25 * fVar21 + fVar20 * fVar22 + fVar23 * fVar18) * fVar19;
    param_1[0xf] = (fVar27 * fVar21 + fVar9 * fVar22 + fVar29 * fVar18) * fVar19;
  }
  return fVar6 != 0.0;
}

