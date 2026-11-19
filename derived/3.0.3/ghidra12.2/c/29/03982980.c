
/* WARNING: Type propagation algorithm not settling */

void FUN_03982980(long param_1)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
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
  float fVar32;
  float fVar33;
  float local_a0 [6];
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  
  fVar20 = *(float *)(param_1 + 0x30);
  fVar23 = *(float *)(param_1 + 0x34);
  *(undefined8 *)(param_1 + 0x21c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x224) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x22c) = 0xff7fffffff7fffff;
  fVar7 = -3.4028235e+38;
  lVar4 = 0;
  fVar10 = 3.4028235e+38;
  fVar12 = *(float *)(param_1 + 0x38);
  fVar5 = *(float *)(param_1 + 0x3c);
  fVar22 = *(float *)(param_1 + 0x40);
  fVar25 = *(float *)(param_1 + 0x44);
  fVar15 = *(float *)(param_1 + 0x48);
  fVar6 = *(float *)(param_1 + 0x4c);
  fVar26 = *(float *)(param_1 + 0x50);
  fVar27 = *(float *)(param_1 + 0x54);
  fVar16 = -3.4028235e+38;
  fVar19 = *(float *)(param_1 + 0x58);
  fVar11 = *(float *)(param_1 + 0x5c);
  fVar17 = -3.4028235e+38;
  fVar8 = 3.4028235e+38;
  fVar9 = 3.4028235e+38;
  do {
    pfVar1 = (float *)(param_1 + 0x144 + lVar4);
    fVar33 = pfVar1[2];
    fVar18 = *pfVar1;
    fVar32 = pfVar1[1];
    fVar29 = fVar5 + fVar23 * fVar32 + fVar18 * fVar20 + fVar33 * fVar12;
    fVar28 = fVar6 + fVar25 * fVar32 + fVar18 * fVar22 + fVar33 * fVar15;
    fVar18 = fVar11 + fVar27 * fVar32 + fVar18 * fVar26 + fVar33 * fVar19;
    *(float *)((long)local_a0 + lVar4) = fVar29;
    *(float *)((long)local_a0 + lVar4 + 4) = fVar28;
    *(float *)((long)local_a0 + lVar4 + 8) = fVar18;
    if (fVar29 < fVar10) {
      *(float *)(param_1 + 0x21c) = fVar29;
      fVar10 = fVar29;
    }
    if (fVar28 < fVar8) {
      *(float *)(param_1 + 0x220) = fVar28;
      fVar8 = fVar28;
    }
    if (fVar18 < fVar9) {
      *(float *)(param_1 + 0x224) = fVar18;
      fVar9 = fVar18;
    }
    if (fVar7 < fVar29) {
      *(float *)(param_1 + 0x228) = fVar29;
      fVar7 = fVar29;
    }
    if (fVar16 < fVar28) {
      *(float *)(param_1 + 0x22c) = fVar28;
      fVar16 = fVar28;
    }
    if (fVar17 < fVar18) {
      *(float *)(param_1 + 0x230) = fVar18;
      fVar17 = fVar18;
    }
    lVar4 = lVar4 + 0xc;
  } while (lVar4 != 0x60);
  fVar16 = *(float *)(param_1 + 0x104);
  fVar7 = *(float *)(param_1 + 0x108);
  fVar9 = *(float *)(param_1 + 0x10c);
  fVar11 = *(float *)(param_1 + 0x118);
  fVar6 = *(float *)(param_1 + 0x120);
  fVar17 = fVar23 * fVar7 + fVar16 * fVar20 + fVar9 * fVar12;
  fVar10 = fVar25 * fVar7 + fVar16 * fVar22 + fVar9 * fVar15;
  fVar8 = fVar27 * fVar7 + fVar16 * fVar26 + fVar9 * fVar19;
  fVar9 = *(float *)(param_1 + 0x110);
  fVar5 = *(float *)(param_1 + 0x114);
  fVar16 = fVar23 * fVar5 + fVar9 * fVar20 + fVar11 * fVar12;
  fVar7 = fVar25 * fVar5 + fVar9 * fVar22 + fVar11 * fVar15;
  fVar9 = fVar27 * fVar5 + fVar9 * fVar26 + fVar11 * fVar19;
  fVar5 = SQRT(fVar10 * fVar10 + fVar17 * fVar17 + fVar8 * fVar8);
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
    fVar17 = fVar17 * fVar5;
    fVar10 = fVar10 * fVar5;
    fVar8 = fVar8 * fVar5;
  }
  fVar29 = *(float *)(param_1 + 300);
  fVar32 = *(float *)(param_1 + 0x11c);
  fVar18 = fVar12 + fVar23 * 0.0 + fVar20 * 0.0;
  fVar11 = fVar15 + fVar25 * 0.0 + fVar22 * 0.0;
  fVar5 = fVar19 + fVar27 * 0.0 + fVar26 * 0.0;
  fVar28 = SQRT(fVar7 * fVar7 + fVar16 * fVar16 + fVar9 * fVar9);
  if (0.0 < fVar28) {
    fVar28 = 1.0 / fVar28;
    fVar16 = fVar16 * fVar28;
    fVar7 = fVar7 * fVar28;
    fVar9 = fVar9 * fVar28;
  }
  fVar28 = (fVar27 * -0.0 + fVar26 * -0.0) - fVar19;
  fVar13 = *(float *)(param_1 + 0x128);
  fVar14 = *(float *)(param_1 + 0x124);
  fVar24 = (fVar23 * -0.0 + fVar20 * -0.0) - fVar12;
  fVar33 = (fVar25 * -0.0 + fVar22 * -0.0) - fVar15;
  fVar30 = SQRT(fVar11 * fVar11 + fVar18 * fVar18 + fVar5 * fVar5);
  if (0.0 < fVar30) {
    fVar30 = 1.0 / fVar30;
    fVar18 = fVar18 * fVar30;
    fVar11 = fVar11 * fVar30;
    fVar5 = fVar5 * fVar30;
  }
  fVar30 = fVar27 * fVar6 + fVar32 * fVar26 + fVar14 * fVar19;
  fVar31 = *(float *)(param_1 + 0x130);
  fVar21 = fVar23 * fVar6 + fVar32 * fVar20 + fVar14 * fVar12;
  fVar6 = fVar25 * fVar6 + fVar32 * fVar22 + fVar14 * fVar15;
  fVar32 = SQRT(fVar33 * fVar33 + fVar24 * fVar24 + fVar28 * fVar28);
  if (0.0 < fVar32) {
    fVar32 = 1.0 / fVar32;
    fVar24 = fVar24 * fVar32;
    fVar33 = fVar33 * fVar32;
    fVar28 = fVar28 * fVar32;
  }
  fVar15 = fVar25 * fVar29 + fVar13 * fVar22 + fVar31 * fVar15;
  fVar19 = fVar27 * fVar29 + fVar13 * fVar26 + fVar31 * fVar19;
  fVar12 = fVar23 * fVar29 + fVar13 * fVar20 + fVar31 * fVar12;
  fVar20 = SQRT(fVar6 * fVar6 + fVar21 * fVar21 + fVar30 * fVar30);
  if (0.0 < fVar20) {
    fVar20 = 1.0 / fVar20;
    fVar21 = fVar21 * fVar20;
    fVar6 = fVar6 * fVar20;
    fVar30 = fVar30 * fVar20;
  }
  fVar20 = SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar19 * fVar19);
  if (0.0 < fVar20) {
    fVar20 = 1.0 / fVar20;
    fVar12 = fVar12 * fVar20;
    fVar15 = fVar15 * fVar20;
    fVar19 = fVar19 * fVar20;
    fVar20 = SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar19 * fVar19);
  }
  *(float *)(param_1 + 0x1d0) =
       -(local_a0[2] * fVar5) - (fVar11 * local_a0[1] + fVar18 * local_a0[0]);
  *(float *)(param_1 + 0x1b0) =
       -(local_a0[2] * fVar8) - (fVar10 * local_a0[1] + fVar17 * local_a0[0]);
  *(float *)(param_1 + 0x1f0) =
       -(local_a0[5] * fVar30) - (fVar6 * local_a0[4] + fVar21 * local_a0[3]);
  *(float *)(param_1 + 0x1c0) = -(local_80 * fVar9) - (fVar7 * fStack_84 + fVar16 * local_88);
  *(float *)(param_1 + 0x200) = -(fStack_74 * fVar19) - (fVar15 * local_78 + fVar12 * fStack_7c);
  *(float *)(param_1 + 0x1e0) = -(local_68 * fVar28) - (fVar33 * fStack_6c + fVar24 * local_70);
  fVar22 = SQRT(fVar7 * fVar7 + fVar16 * fVar16 + fVar9 * fVar9) + -1.0;
  fVar23 = SQRT(fVar10 * fVar10 + fVar17 * fVar17 + fVar8 * fVar8) + -1.0;
  bVar2 = fVar23 < -0.0001;
  bVar3 = 0.0001 < fVar23;
  if (bVar2 || bVar3) {
    fVar17 = 0.0;
  }
  if (bVar2 || bVar3) {
    fVar10 = 0.0;
  }
  if (bVar2 || bVar3) {
    fVar8 = 1.0;
  }
  bVar2 = fVar22 < -0.0001;
  *(float *)(param_1 + 0x1a4) = fVar17;
  *(float *)(param_1 + 0x1a8) = fVar10;
  *(float *)(param_1 + 0x1ac) = fVar8;
  bVar3 = 0.0001 < fVar22;
  if (bVar2 || bVar3) {
    fVar9 = 1.0;
  }
  if (bVar2 || bVar3) {
    fVar7 = 0.0;
  }
  if (bVar2 || bVar3) {
    fVar16 = 0.0;
  }
  *(float *)(param_1 + 0x1b4) = fVar16;
  *(float *)(param_1 + 0x1b8) = fVar7;
  *(float *)(param_1 + 0x1bc) = fVar9;
  fVar7 = SQRT(fVar11 * fVar11 + fVar18 * fVar18 + fVar5 * fVar5) + -1.0;
  fVar16 = SQRT(fVar33 * fVar33 + fVar24 * fVar24 + fVar28 * fVar28) + -1.0;
  bVar3 = fVar7 < -0.0001;
  if (bVar3 || 0.0001 < fVar7) {
    fVar5 = 1.0;
  }
  if (bVar3 || 0.0001 < fVar7) {
    fVar11 = 0.0;
  }
  if (bVar3 || 0.0001 < fVar7) {
    fVar18 = 0.0;
  }
  bVar2 = fVar16 < -0.0001;
  *(float *)(param_1 + 0x1cc) = fVar5;
  *(float *)(param_1 + 0x1c4) = fVar18;
  *(float *)(param_1 + 0x1c8) = fVar11;
  bVar3 = 0.0001 < fVar16;
  if (bVar2 || bVar3) {
    fVar28 = 1.0;
  }
  if (bVar2 || bVar3) {
    fVar33 = 0.0;
  }
  if (bVar2 || bVar3) {
    fVar24 = 0.0;
  }
  *(float *)(param_1 + 0x1dc) = fVar28;
  fVar20 = fVar20 + -1.0;
  *(float *)(param_1 + 0x1d4) = fVar24;
  *(float *)(param_1 + 0x1d8) = fVar33;
  fVar16 = SQRT(fVar6 * fVar6 + fVar21 * fVar21 + fVar30 * fVar30) + -1.0;
  bVar3 = fVar16 < -0.0001;
  if (bVar3 || 0.0001 < fVar16) {
    fVar30 = 1.0;
  }
  if (bVar3 || 0.0001 < fVar16) {
    fVar6 = 0.0;
  }
  if (bVar3 || 0.0001 < fVar16) {
    fVar21 = 0.0;
  }
  *(float *)(param_1 + 0x1e8) = fVar6;
  *(float *)(param_1 + 0x1ec) = fVar30;
  *(float *)(param_1 + 0x1e4) = fVar21;
  if (fVar20 < -0.0001 || 0.0001 < fVar20) {
    fVar15 = 0.0;
  }
  if (fVar20 < -0.0001 || 0.0001 < fVar20) {
    fVar19 = 1.0;
    fVar12 = 0.0;
  }
  *(float *)(param_1 + 500) = fVar12;
  *(float *)(param_1 + 0x1f8) = fVar15;
  *(float *)(param_1 + 0x1fc) = fVar19;
  return;
}

