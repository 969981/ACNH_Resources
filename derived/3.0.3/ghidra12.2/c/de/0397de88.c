
void FUN_0397de88(undefined8 param_1,byte *param_2)

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
  
  fVar1 = *(float *)(param_2 + 0x5c);
  fVar3 = *(float *)(param_2 + 0x54);
  fVar2 = *(float *)(param_2 + 0x58);
  fVar9 = -(fVar1 * *(float *)(param_2 + 100)) + *(float *)(param_2 + 0x68) * fVar2;
  fVar11 = -(fVar3 * *(float *)(param_2 + 0x68)) + *(float *)(param_2 + 0x60) * fVar1;
  fVar8 = -(fVar2 * *(float *)(param_2 + 0x60)) + *(float *)(param_2 + 100) * fVar3;
  fVar4 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar8 * fVar8);
  if (0.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
    fVar9 = fVar9 * fVar4;
    fVar11 = fVar11 * fVar4;
    fVar8 = fVar8 * fVar4;
  }
  fVar4 = -(fVar8 * fVar2) + fVar1 * fVar11;
  fVar16 = -(fVar9 * fVar1) + fVar3 * fVar8;
  fVar13 = -(fVar11 * fVar3) + fVar2 * fVar9;
  fVar5 = SQRT(fVar16 * fVar16 + fVar4 * fVar4 + fVar13 * fVar13);
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
    fVar4 = fVar4 * fVar5;
    fVar16 = fVar16 * fVar5;
    fVar13 = fVar13 * fVar5;
  }
  if ((*param_2 >> 2 & 1) == 0) {
    fVar1 = tanf(*(float *)(param_2 + 0x74) * 0.5);
    fVar25 = *(float *)(param_2 + 0x6c);
    fVar3 = *(float *)(param_2 + 0x70);
    *(float *)(param_2 + 0x1a0) = fVar1;
    fVar1 = fVar1 * fVar3;
    *(float *)(param_2 + 0x1a8) = *(float *)(param_2 + 0x14);
    *(float *)(param_2 + 0x1a4) = *(float *)(param_2 + 0x10);
    *(float *)(param_2 + 0x1ac) = *(float *)(param_2 + 0x18);
    fVar2 = fVar1 * *(float *)(param_2 + 0x78);
    *(float *)(param_2 + 0x1b4) = fVar1;
    fVar22 = *(float *)(param_2 + 0x14) + fVar25 * *(float *)(param_2 + 0x58);
    fVar5 = fVar25 / fVar3;
    fVar23 = *(float *)(param_2 + 0x10) + fVar25 * *(float *)(param_2 + 0x54);
    fVar16 = fVar16 * fVar1;
    fVar21 = *(float *)(param_2 + 0x18) + fVar25 * *(float *)(param_2 + 0x5c);
    fVar9 = fVar9 * fVar2;
    fVar11 = fVar11 * fVar2;
    *(float *)(param_2 + 0x1b0) = fVar2;
    fVar8 = fVar8 * fVar2;
    fVar4 = fVar4 * fVar1;
    fVar13 = fVar13 * fVar1;
    *(float *)(param_2 + 0x1b8) = fVar23;
    *(float *)(param_2 + 0x1bc) = fVar22;
    *(float *)(param_2 + 0x1c0) = fVar21;
    *(float *)(param_2 + 0x1c4) = fVar23;
    *(float *)(param_2 + 0x1c8) = fVar22;
    *(float *)(param_2 + 0x1cc) = fVar21;
    fVar27 = fVar4 * fVar5;
    fVar28 = fVar16 * fVar5;
    fVar26 = fVar13 * fVar5;
    fVar10 = fVar9 * fVar5 + fVar23;
    fVar12 = fVar11 * fVar5 + fVar22;
    fVar29 = fVar8 * fVar5 + fVar21;
    fVar2 = fVar27 + fVar10;
    fVar20 = fVar28 + fVar12;
    fVar1 = fVar23;
    if (fVar2 < fVar23) {
      *(float *)(param_2 + 0x1b8) = fVar2;
      fVar1 = fVar2;
    }
    fVar14 = fVar26 + fVar29;
    fVar24 = fVar22;
    if (fVar20 < fVar22) {
      *(float *)(param_2 + 0x1bc) = fVar20;
      fVar24 = fVar20;
    }
    fVar6 = fVar21;
    if (fVar14 < fVar21) {
      *(float *)(param_2 + 0x1c0) = fVar14;
      fVar6 = fVar14;
    }
    fVar7 = fVar23;
    if (fVar23 < fVar2) {
      *(float *)(param_2 + 0x1c4) = fVar2;
      fVar7 = fVar2;
    }
    fVar2 = fVar22;
    if (fVar22 < fVar20) {
      *(float *)(param_2 + 0x1c8) = fVar20;
      fVar2 = fVar20;
    }
    fVar20 = fVar21;
    if (fVar21 < fVar14) {
      *(float *)(param_2 + 0x1cc) = fVar14;
      fVar20 = fVar14;
    }
    fVar14 = fVar23 - fVar9 * fVar5;
    fVar15 = fVar22 - fVar11 * fVar5;
    fVar5 = fVar21 - fVar8 * fVar5;
    fVar19 = fVar27 + fVar14;
    fVar17 = fVar28 + fVar15;
    if (fVar19 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar19;
      fVar1 = fVar19;
    }
    fVar18 = fVar26 + fVar5;
    if (fVar17 < fVar24) {
      *(float *)(param_2 + 0x1bc) = fVar17;
      fVar24 = fVar17;
    }
    if (fVar18 < fVar6) {
      *(float *)(param_2 + 0x1c0) = fVar18;
      fVar6 = fVar18;
    }
    if (fVar7 < fVar19) {
      *(float *)(param_2 + 0x1c4) = fVar19;
      fVar7 = fVar19;
    }
    if (fVar2 < fVar17) {
      *(float *)(param_2 + 0x1c8) = fVar17;
      fVar2 = fVar17;
    }
    if (fVar20 < fVar18) {
      *(float *)(param_2 + 0x1cc) = fVar18;
      fVar20 = fVar18;
    }
    fVar10 = fVar10 - fVar27;
    fVar12 = fVar12 - fVar28;
    if (fVar10 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar10;
      fVar1 = fVar10;
    }
    fVar29 = fVar29 - fVar26;
    if (fVar12 < fVar24) {
      *(float *)(param_2 + 0x1bc) = fVar12;
      fVar24 = fVar12;
    }
    if (fVar29 < fVar6) {
      *(float *)(param_2 + 0x1c0) = fVar29;
      fVar6 = fVar29;
    }
    if (fVar7 < fVar10) {
      *(float *)(param_2 + 0x1c4) = fVar10;
      fVar7 = fVar10;
    }
    if (fVar2 < fVar12) {
      *(float *)(param_2 + 0x1c8) = fVar12;
      fVar2 = fVar12;
    }
    if (fVar20 < fVar29) {
      *(float *)(param_2 + 0x1cc) = fVar29;
      fVar20 = fVar29;
    }
    fVar14 = fVar14 - fVar27;
    fVar15 = fVar15 - fVar28;
    if (fVar14 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar14;
      fVar1 = fVar14;
    }
    fVar5 = fVar5 - fVar26;
    if (fVar15 < fVar24) {
      *(float *)(param_2 + 0x1bc) = fVar15;
      fVar24 = fVar15;
    }
    if (fVar5 < fVar6) {
      *(float *)(param_2 + 0x1c0) = fVar5;
      fVar6 = fVar5;
    }
    if (fVar7 < fVar14) {
      *(float *)(param_2 + 0x1c4) = fVar14;
      fVar7 = fVar14;
    }
    fVar3 = fVar3 - fVar25;
    if (fVar2 < fVar15) {
      *(float *)(param_2 + 0x1c8) = fVar15;
      fVar2 = fVar15;
    }
    fVar12 = *(float *)(param_2 + 0x54) * fVar3;
    fVar10 = fVar3 * *(float *)(param_2 + 0x58);
    if (fVar20 < fVar5) {
      *(float *)(param_2 + 0x1cc) = fVar5;
      fVar20 = fVar5;
    }
    fVar3 = fVar3 * *(float *)(param_2 + 0x5c);
    fVar25 = fVar12 + fVar4 + fVar9 + fVar23;
    fVar5 = fVar10 + fVar16 + fVar11 + fVar22;
    if (fVar25 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar25;
      fVar1 = fVar25;
    }
    fVar26 = fVar3 + fVar13 + fVar8 + fVar21;
    if (fVar5 < fVar24) {
      *(float *)(param_2 + 0x1bc) = fVar5;
      fVar24 = fVar5;
    }
    if (fVar26 < fVar6) {
      *(float *)(param_2 + 0x1c0) = fVar26;
      fVar6 = fVar26;
    }
    if (fVar7 < fVar25) {
      *(float *)(param_2 + 0x1c4) = fVar25;
      fVar7 = fVar25;
    }
    if (fVar2 < fVar5) {
      *(float *)(param_2 + 0x1c8) = fVar5;
      fVar2 = fVar5;
    }
    if (fVar20 < fVar26) {
      *(float *)(param_2 + 0x1cc) = fVar26;
      fVar20 = fVar26;
    }
    fVar25 = fVar12 + fVar4 + (fVar23 - fVar9);
    fVar5 = fVar10 + fVar16 + (fVar22 - fVar11);
    if (fVar25 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar25;
      fVar1 = fVar25;
    }
    fVar26 = fVar3 + fVar13 + (fVar21 - fVar8);
    if (fVar5 < fVar24) {
      *(float *)(param_2 + 0x1bc) = fVar5;
      fVar24 = fVar5;
    }
    if (fVar26 < fVar6) {
      *(float *)(param_2 + 0x1c0) = fVar26;
      fVar6 = fVar26;
    }
    if (fVar7 < fVar25) {
      *(float *)(param_2 + 0x1c4) = fVar25;
      fVar7 = fVar25;
    }
    if (fVar2 < fVar5) {
      *(float *)(param_2 + 0x1c8) = fVar5;
      fVar2 = fVar5;
    }
    if (fVar20 < fVar26) {
      *(float *)(param_2 + 0x1cc) = fVar26;
      fVar20 = fVar26;
    }
    fVar25 = fVar12 + ((fVar9 + fVar23) - fVar4);
    fVar5 = fVar10 + ((fVar11 + fVar22) - fVar16);
    if (fVar25 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar25;
      fVar1 = fVar25;
    }
    fVar26 = fVar3 + ((fVar8 + fVar21) - fVar13);
    if (fVar5 < fVar24) {
      *(float *)(param_2 + 0x1bc) = fVar5;
      fVar24 = fVar5;
    }
    if (fVar26 < fVar6) {
      *(float *)(param_2 + 0x1c0) = fVar26;
      fVar6 = fVar26;
    }
    if (fVar7 < fVar25) {
      *(float *)(param_2 + 0x1c4) = fVar25;
      fVar7 = fVar25;
    }
    if (fVar2 < fVar5) {
      *(float *)(param_2 + 0x1c8) = fVar5;
      fVar2 = fVar5;
    }
    if (fVar20 < fVar26) {
      *(float *)(param_2 + 0x1cc) = fVar26;
      fVar20 = fVar26;
    }
    fVar12 = fVar12 + ((fVar23 - fVar9) - fVar4);
    fVar10 = fVar10 + ((fVar22 - fVar11) - fVar16);
    if (fVar12 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar12;
    }
    fVar3 = fVar3 + ((fVar21 - fVar8) - fVar13);
    if (fVar10 < fVar24) {
      *(float *)(param_2 + 0x1bc) = fVar10;
    }
    if (fVar3 < fVar6) {
      *(float *)(param_2 + 0x1c0) = fVar3;
    }
    if (fVar7 < fVar12) {
      *(float *)(param_2 + 0x1c4) = fVar12;
    }
    if (fVar2 < fVar10) {
      *(float *)(param_2 + 0x1c8) = fVar10;
    }
    if (fVar20 < fVar3) {
      *(float *)(param_2 + 0x1cc) = fVar3;
    }
  }
  else {
    fVar22 = (*(float *)(param_2 + 0x7c) - *(float *)(param_2 + 0x80)) * 0.5;
    fVar12 = *(float *)(param_2 + 0x80) + fVar22;
    *(float *)(param_2 + 0x1b4) = fVar22;
    fVar26 = (*(float *)(param_2 + 0x88) - *(float *)(param_2 + 0x84)) * 0.5;
    fVar21 = *(float *)(param_2 + 0x84) + fVar26;
    *(float *)(param_2 + 0x1b0) = fVar26;
    fVar25 = fVar16 * fVar12 + fVar11 * fVar21 + *(float *)(param_2 + 0x14);
    *(float *)(param_2 + 0x78) = fVar26 / fVar22;
    *(float *)(param_2 + 0x1a8) = fVar25;
    fVar20 = *(float *)(param_2 + 0x6c);
    fVar10 = *(float *)(param_2 + 0x70) - fVar20;
    fVar5 = fVar1 * fVar10;
    *(float *)(param_2 + 0x1a0) = fVar22 / *(float *)(param_2 + 0x70);
    fVar23 = fVar4 * fVar12 + fVar9 * fVar21 + *(float *)(param_2 + 0x10);
    fVar21 = fVar13 * fVar12 + fVar8 * fVar21 + *(float *)(param_2 + 0x18);
    fVar12 = fVar3 * fVar10;
    fVar10 = fVar2 * fVar10;
    *(float *)(param_2 + 0x1a4) = fVar23;
    *(float *)(param_2 + 0x1ac) = fVar21;
    fVar23 = ((fVar23 + fVar3 * fVar20) - fVar9 * fVar26) - fVar4 * fVar22;
    fVar25 = ((fVar25 + fVar2 * fVar20) - fVar11 * fVar26) - fVar16 * fVar22;
    fVar20 = ((fVar21 + fVar1 * fVar20) - fVar8 * fVar26) - fVar13 * fVar22;
    fVar3 = fVar12 + fVar23;
    fVar2 = fVar10 + fVar25;
    *(float *)(param_2 + 0x1b8) = fVar23;
    *(float *)(param_2 + 0x1bc) = fVar25;
    *(float *)(param_2 + 0x1c0) = fVar20;
    *(float *)(param_2 + 0x1c4) = fVar23;
    *(float *)(param_2 + 0x1c8) = fVar25;
    *(float *)(param_2 + 0x1cc) = fVar20;
    fVar1 = fVar23;
    if (fVar3 < fVar23) {
      *(float *)(param_2 + 0x1b8) = fVar3;
      fVar1 = fVar3;
    }
    fVar27 = fVar5 + fVar20;
    fVar21 = fVar25;
    if (fVar2 < fVar25) {
      *(float *)(param_2 + 0x1bc) = fVar2;
      fVar21 = fVar2;
    }
    fVar28 = fVar20;
    if (fVar27 < fVar20) {
      *(float *)(param_2 + 0x1c0) = fVar27;
      fVar28 = fVar27;
    }
    fVar29 = fVar23;
    if (fVar23 < fVar3) {
      *(float *)(param_2 + 0x1c4) = fVar3;
      fVar29 = fVar3;
    }
    fVar22 = fVar22 + fVar22;
    fVar3 = fVar25;
    if (fVar25 < fVar2) {
      *(float *)(param_2 + 0x1c8) = fVar2;
      fVar3 = fVar2;
    }
    fVar2 = fVar20;
    if (fVar20 < fVar27) {
      *(float *)(param_2 + 0x1cc) = fVar27;
      fVar2 = fVar27;
    }
    fVar27 = fVar4 * fVar22 + fVar23;
    fVar24 = fVar16 * fVar22 + fVar25;
    if (fVar27 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar27;
      fVar1 = fVar27;
    }
    fVar14 = fVar13 * fVar22 + fVar20;
    if (fVar24 < fVar21) {
      *(float *)(param_2 + 0x1bc) = fVar24;
      fVar21 = fVar24;
    }
    if (fVar14 < fVar28) {
      *(float *)(param_2 + 0x1c0) = fVar14;
      fVar28 = fVar14;
    }
    if (fVar29 < fVar27) {
      *(float *)(param_2 + 0x1c4) = fVar27;
      fVar29 = fVar27;
    }
    if (fVar3 < fVar24) {
      *(float *)(param_2 + 0x1c8) = fVar24;
      fVar3 = fVar24;
    }
    if (fVar2 < fVar14) {
      *(float *)(param_2 + 0x1cc) = fVar14;
      fVar2 = fVar14;
    }
    fVar27 = fVar12 + fVar27;
    fVar24 = fVar10 + fVar24;
    if (fVar27 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar27;
      fVar1 = fVar27;
    }
    fVar14 = fVar5 + fVar14;
    if (fVar24 < fVar21) {
      *(float *)(param_2 + 0x1bc) = fVar24;
      fVar21 = fVar24;
    }
    if (fVar14 < fVar28) {
      *(float *)(param_2 + 0x1c0) = fVar14;
      fVar28 = fVar14;
    }
    if (fVar29 < fVar27) {
      *(float *)(param_2 + 0x1c4) = fVar27;
      fVar29 = fVar27;
    }
    fVar26 = fVar26 + fVar26;
    if (fVar3 < fVar24) {
      *(float *)(param_2 + 0x1c8) = fVar24;
      fVar3 = fVar24;
    }
    if (fVar2 < fVar14) {
      *(float *)(param_2 + 0x1cc) = fVar14;
      fVar2 = fVar14;
    }
    fVar23 = fVar9 * fVar26 + fVar23;
    fVar25 = fVar11 * fVar26 + fVar25;
    if (fVar23 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar23;
      fVar1 = fVar23;
    }
    fVar20 = fVar8 * fVar26 + fVar20;
    if (fVar25 < fVar21) {
      *(float *)(param_2 + 0x1bc) = fVar25;
      fVar21 = fVar25;
    }
    if (fVar20 < fVar28) {
      *(float *)(param_2 + 0x1c0) = fVar20;
      fVar28 = fVar20;
    }
    if (fVar29 < fVar23) {
      *(float *)(param_2 + 0x1c4) = fVar23;
      fVar29 = fVar23;
    }
    if (fVar3 < fVar25) {
      *(float *)(param_2 + 0x1c8) = fVar25;
      fVar3 = fVar25;
    }
    if (fVar2 < fVar20) {
      *(float *)(param_2 + 0x1cc) = fVar20;
      fVar2 = fVar20;
    }
    fVar9 = fVar12 + fVar23;
    fVar8 = fVar10 + fVar25;
    if (fVar9 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar9;
      fVar1 = fVar9;
    }
    fVar11 = fVar5 + fVar20;
    if (fVar8 < fVar21) {
      *(float *)(param_2 + 0x1bc) = fVar8;
      fVar21 = fVar8;
    }
    if (fVar11 < fVar28) {
      *(float *)(param_2 + 0x1c0) = fVar11;
      fVar28 = fVar11;
    }
    if (fVar29 < fVar9) {
      *(float *)(param_2 + 0x1c4) = fVar9;
      fVar29 = fVar9;
    }
    if (fVar3 < fVar8) {
      *(float *)(param_2 + 0x1c8) = fVar8;
      fVar3 = fVar8;
    }
    if (fVar2 < fVar11) {
      *(float *)(param_2 + 0x1cc) = fVar11;
      fVar2 = fVar11;
    }
    fVar23 = fVar4 * fVar22 + fVar23;
    fVar25 = fVar16 * fVar22 + fVar25;
    if (fVar23 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar23;
      fVar1 = fVar23;
    }
    fVar20 = fVar13 * fVar22 + fVar20;
    if (fVar25 < fVar21) {
      *(float *)(param_2 + 0x1bc) = fVar25;
      fVar21 = fVar25;
    }
    if (fVar20 < fVar28) {
      *(float *)(param_2 + 0x1c0) = fVar20;
      fVar28 = fVar20;
    }
    if (fVar29 < fVar23) {
      *(float *)(param_2 + 0x1c4) = fVar23;
      fVar29 = fVar23;
    }
    if (fVar3 < fVar25) {
      *(float *)(param_2 + 0x1c8) = fVar25;
      fVar3 = fVar25;
    }
    if (fVar2 < fVar20) {
      *(float *)(param_2 + 0x1cc) = fVar20;
      fVar2 = fVar20;
    }
    fVar12 = fVar12 + fVar23;
    fVar10 = fVar10 + fVar25;
    if (fVar12 < fVar1) {
      *(float *)(param_2 + 0x1b8) = fVar12;
    }
    fVar5 = fVar5 + fVar20;
    if (fVar10 < fVar21) {
      *(float *)(param_2 + 0x1bc) = fVar10;
    }
    if (fVar5 < fVar28) {
      *(float *)(param_2 + 0x1c0) = fVar5;
    }
    if (fVar29 < fVar12) {
      *(float *)(param_2 + 0x1c4) = fVar12;
    }
    if (fVar3 < fVar10) {
      *(float *)(param_2 + 0x1c8) = fVar10;
    }
    if (fVar2 < fVar5) {
      *(float *)(param_2 + 0x1cc) = fVar5;
    }
  }
  return;
}

