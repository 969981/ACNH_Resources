
undefined8 FUN_03eaf1e0(long param_1,long param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
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
  
  fVar5 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
  fVar4 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  fVar12 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 8);
  fVar11 = *(float *)(param_1 + 0x10) - *(float *)(param_2 + 0x10);
  fVar13 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x10);
  fVar14 = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0xc);
  fVar6 = fVar5 * *(float *)(param_2 + 0x18) + fVar4 * *(float *)(param_2 + 0x14) +
          fVar11 * *(float *)(param_2 + 0x1c);
  fVar7 = *(float *)(param_2 + 0x18) * fVar14 + fVar12 * *(float *)(param_2 + 0x14) +
          fVar13 * *(float *)(param_2 + 0x1c);
  fVar3 = fVar6 - (fVar6 + fVar7);
  if (fVar3 == 0.0) {
    fVar3 = 0.0;
    fVar8 = -*(float *)(param_2 + 0x38);
    bVar1 = false;
    bVar2 = false;
    if (fVar6 < *(float *)(param_2 + 0x38)) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar6) && !NAN(fVar8)) {
        bVar1 = fVar6 == fVar8;
        bVar2 = fVar8 <= fVar6;
      }
    }
    fVar8 = 1.0;
    if (!bVar2 || bVar1) {
      return 0;
    }
  }
  else {
    fVar8 = *(float *)(param_2 + 0x38);
    fVar9 = -fVar8;
    if (0.0 <= fVar3) {
      fVar9 = fVar8;
      fVar8 = -fVar8;
    }
    fVar9 = (1.0 / fVar3) * (fVar6 + fVar9);
    fVar3 = (1.0 / fVar3) * (fVar6 + fVar8);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar8 = 1.0;
    if (fVar9 < 1.0) {
      fVar8 = fVar9;
    }
  }
  fVar9 = fVar5 * *(float *)(param_2 + 0x24) + fVar4 * *(float *)(param_2 + 0x20) +
          fVar11 * *(float *)(param_2 + 0x28);
  fVar10 = *(float *)(param_2 + 0x24) * fVar14 + fVar12 * *(float *)(param_2 + 0x20) +
           fVar13 * *(float *)(param_2 + 0x28);
  fVar15 = fVar9 - (fVar9 + fVar10);
  if (fVar15 == 0.0) {
    if (*(float *)(param_2 + 0x3c) <= fVar9) {
      return 0;
    }
    if (fVar9 <= -*(float *)(param_2 + 0x3c)) {
      return 0;
    }
  }
  else {
    fVar16 = *(float *)(param_2 + 0x3c);
    fVar17 = -fVar16;
    if (0.0 <= fVar15) {
      fVar17 = fVar16;
      fVar16 = -fVar16;
    }
    fVar16 = (1.0 / fVar15) * (fVar9 + fVar16);
    fVar15 = (1.0 / fVar15) * (fVar9 + fVar17);
    if (fVar16 <= fVar3) {
      fVar16 = fVar3;
    }
    fVar3 = fVar16;
    if (fVar15 < fVar8) {
      fVar8 = fVar15;
    }
  }
  fVar5 = fVar5 * *(float *)(param_2 + 0x30) + fVar4 * *(float *)(param_2 + 0x2c) +
          fVar11 * *(float *)(param_2 + 0x34);
  fVar11 = *(float *)(param_2 + 0x30) * fVar14 + fVar12 * *(float *)(param_2 + 0x2c) +
           fVar13 * *(float *)(param_2 + 0x34);
  fVar4 = fVar5 - (fVar5 + fVar11);
  if (fVar4 == 0.0) {
    if ((*(float *)(param_2 + 0x40) <= fVar5) || (fVar5 <= -*(float *)(param_2 + 0x40))) {
      return 0;
    }
    if (fVar8 <= fVar3) {
      return 0;
    }
  }
  else {
    fVar12 = *(float *)(param_2 + 0x40);
    fVar13 = -fVar12;
    if (0.0 <= fVar4) {
      fVar13 = fVar12;
      fVar12 = -fVar12;
    }
    fVar12 = (1.0 / fVar4) * (fVar5 + fVar12);
    fVar4 = (1.0 / fVar4) * (fVar5 + fVar13);
    if (fVar12 <= fVar3) {
      fVar12 = fVar3;
    }
    fVar3 = fVar12;
    if (fVar4 < fVar8) {
      fVar8 = fVar4;
    }
    if (fVar8 <= fVar3) {
      return 0;
    }
  }
  if (param_3 != (float *)0x0) {
    param_3[3] = 3.4028235e+38;
    fVar12 = fVar6 + fVar7 * fVar3;
    fVar13 = fVar9 + fVar10 * fVar3;
    fVar14 = fVar5 + fVar11 * fVar3;
    fVar6 = fVar6 + fVar7 * fVar8;
    fVar5 = fVar5 + fVar11 * fVar8;
    fVar15 = *(float *)(param_2 + 0x38);
    fVar9 = fVar9 + fVar10 * fVar8;
    fVar8 = 3.4028235e+38;
    fVar11 = fVar15 - fVar12;
    fVar3 = fVar12;
    fVar4 = fVar13;
    fVar7 = fVar14;
    if (fVar11 < fVar15 - fVar6) {
      fVar3 = fVar6;
      fVar4 = fVar9;
      fVar7 = fVar5;
      fVar11 = fVar15 - fVar6;
    }
    if (fVar11 < 3.4028235e+38) {
      param_3[3] = fVar11;
      *param_3 = *(float *)(param_2 + 0x14);
      param_3[1] = *(float *)(param_2 + 0x18);
      fVar8 = *(float *)(param_2 + 0x1c);
      param_3[4] = fVar3;
      param_3[5] = fVar4;
      param_3[6] = fVar7;
      param_3[2] = fVar8;
      fVar15 = *(float *)(param_2 + 0x38);
      fVar8 = fVar11;
    }
    fVar11 = fVar12 + fVar15;
    fVar3 = fVar12;
    fVar4 = fVar13;
    fVar7 = fVar14;
    if (fVar11 < fVar6 + fVar15) {
      fVar3 = fVar6;
      fVar4 = fVar9;
      fVar7 = fVar5;
      fVar11 = fVar6 + fVar15;
    }
    if (fVar11 < fVar8) {
      param_3[3] = fVar11;
      fVar8 = *(float *)(param_2 + 0x14);
      fVar10 = *(float *)(param_2 + 0x18);
      fVar15 = *(float *)(param_2 + 0x1c);
      param_3[4] = fVar3;
      param_3[5] = fVar4;
      param_3[6] = fVar7;
      *param_3 = -fVar8;
      param_3[1] = -fVar10;
      param_3[2] = -fVar15;
      fVar8 = fVar11;
    }
    fVar10 = *(float *)(param_2 + 0x3c);
    fVar11 = fVar10 - fVar13;
    fVar3 = fVar12;
    fVar4 = fVar13;
    fVar7 = fVar14;
    if (fVar11 < fVar10 - fVar9) {
      fVar3 = fVar6;
      fVar4 = fVar9;
      fVar7 = fVar5;
      fVar11 = fVar10 - fVar9;
    }
    if (fVar11 < fVar8) {
      param_3[3] = fVar11;
      *param_3 = *(float *)(param_2 + 0x20);
      param_3[1] = *(float *)(param_2 + 0x24);
      fVar8 = *(float *)(param_2 + 0x28);
      param_3[4] = fVar3;
      param_3[5] = fVar4;
      param_3[6] = fVar7;
      param_3[2] = fVar8;
      fVar10 = *(float *)(param_2 + 0x3c);
      fVar8 = fVar11;
    }
    fVar11 = fVar13 + fVar10;
    fVar3 = fVar12;
    fVar4 = fVar13;
    fVar7 = fVar14;
    if (fVar11 < fVar9 + fVar10) {
      fVar3 = fVar6;
      fVar4 = fVar9;
      fVar7 = fVar5;
      fVar11 = fVar9 + fVar10;
    }
    if (fVar11 < fVar8) {
      param_3[3] = fVar11;
      fVar8 = *(float *)(param_2 + 0x20);
      fVar10 = *(float *)(param_2 + 0x24);
      fVar15 = *(float *)(param_2 + 0x28);
      param_3[4] = fVar3;
      param_3[5] = fVar4;
      param_3[6] = fVar7;
      *param_3 = -fVar8;
      param_3[1] = -fVar10;
      param_3[2] = -fVar15;
      fVar8 = fVar11;
    }
    fVar10 = *(float *)(param_2 + 0x40);
    fVar11 = fVar10 - fVar14;
    fVar3 = fVar12;
    fVar4 = fVar13;
    fVar7 = fVar14;
    if (fVar11 < fVar10 - fVar5) {
      fVar3 = fVar6;
      fVar4 = fVar9;
      fVar7 = fVar5;
      fVar11 = fVar10 - fVar5;
    }
    if (fVar11 < fVar8) {
      param_3[3] = fVar11;
      *param_3 = *(float *)(param_2 + 0x2c);
      param_3[1] = *(float *)(param_2 + 0x30);
      fVar8 = *(float *)(param_2 + 0x34);
      param_3[4] = fVar3;
      param_3[5] = fVar4;
      param_3[6] = fVar7;
      param_3[2] = fVar8;
      fVar10 = *(float *)(param_2 + 0x40);
      fVar8 = fVar11;
    }
    fVar3 = fVar14 + fVar10;
    if (fVar3 < fVar5 + fVar10) {
      fVar12 = fVar6;
      fVar13 = fVar9;
      fVar14 = fVar5;
      fVar3 = fVar5 + fVar10;
    }
    if (fVar3 < fVar8) {
      param_3[3] = fVar3;
      fVar3 = *(float *)(param_2 + 0x2c);
      fVar4 = *(float *)(param_2 + 0x30);
      fVar5 = *(float *)(param_2 + 0x34);
      param_3[4] = fVar12;
      param_3[5] = fVar13;
      param_3[6] = fVar14;
      *param_3 = -fVar3;
      param_3[1] = -fVar4;
      param_3[2] = -fVar5;
    }
    fVar3 = param_3[4];
    fVar4 = param_3[5];
    fVar6 = param_3[6];
    fVar5 = *(float *)(param_2 + 0x20) * fVar4 + fVar3 * *(float *)(param_2 + 0x14) +
            fVar6 * *(float *)(param_2 + 0x2c);
    fVar7 = fVar4 * *(float *)(param_2 + 0x24) + fVar3 * *(float *)(param_2 + 0x18) +
            fVar6 * *(float *)(param_2 + 0x30);
    fVar3 = fVar4 * *(float *)(param_2 + 0x28) + fVar3 * *(float *)(param_2 + 0x1c) +
            fVar6 * *(float *)(param_2 + 0x34);
    param_3[4] = fVar5;
    param_3[5] = fVar7;
    param_3[6] = fVar3;
    param_3[4] = fVar5 + *(float *)(param_2 + 8);
    param_3[5] = fVar7 + *(float *)(param_2 + 0xc);
    param_3[6] = fVar3 + *(float *)(param_2 + 0x10);
  }
  return 1;
}

