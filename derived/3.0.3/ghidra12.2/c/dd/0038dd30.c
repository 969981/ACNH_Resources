
/* WARNING: Type propagation algorithm not settling */

float * FUN_0038dd30(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
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
  
  pfVar3 = (float *)FUN_003b49b0();
  iVar7 = *(int *)(param_1 + 0x48);
  fVar16 = 1.0;
  if (*(float *)(param_1 + 0x40) <= 1.0) {
    fVar16 = *(float *)(param_1 + 0x40);
  }
  fVar18 = 1.0;
  if (*(float *)(param_1 + 0x44) <= 1.0) {
    fVar18 = *(float *)(param_1 + 0x44);
  }
  fVar19 = 1.0 - fVar16;
  fVar11 = 1.0 - fVar18;
  uVar4 = FUN_003b49f4(param_1);
  puVar1 = PTR_FloatPi_04bcee68;
  fVar15 = -fVar11;
  fVar17 = -fVar19;
  if (iVar7 == -1) {
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_003b49f4(param_1);
      pfVar5 = pfVar3;
      if ((uVar2 >> 2 & 1) == 0) goto LAB_0038e144;
LAB_0038e5fc:
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar19 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar11 * 0.5 + 0.5);
      uVar4 = FUN_003b49f4(param_1);
      pfVar5 = pfVar3;
      if ((uVar4 & 1) != 0) goto LAB_0038e61c;
LAB_0038e150:
      uVar2 = FUN_003b49f4(param_1);
      pfVar3 = pfVar5;
      if ((uVar2 >> 2 & 1) == 0) goto LAB_0038e15c;
LAB_0038e634:
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar17 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar11 * 0.5 + 0.5);
      uVar4 = FUN_003b49f4(param_1);
      if ((uVar4 & 1) != 0) goto LAB_0038e654;
LAB_0038e168:
      uVar2 = FUN_003b49f4(param_1);
      pfVar5 = pfVar3;
      if ((uVar2 >> 2 & 1) == 0) goto LAB_0038e174;
LAB_0038e66c:
      pfVar5 = pfVar3 + 2;
      *pfVar3 = fVar17 * 0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar15 * 0.5 + 0.5);
      uVar4 = FUN_003b49f4(param_1);
      if ((uVar4 & 1) != 0) goto LAB_0038e688;
LAB_0038e180:
      uVar2 = FUN_003b49f4(param_1);
    }
    else {
      pfVar3[2] = 0.0;
      pfVar5 = pfVar3 + 3;
      *pfVar3 = fVar19;
      pfVar3[1] = fVar11;
      uVar2 = FUN_003b49f4(param_1);
      pfVar3 = pfVar5;
      if ((uVar2 >> 2 & 1) != 0) goto LAB_0038e5fc;
LAB_0038e144:
      uVar4 = FUN_003b49f4(param_1);
      pfVar5 = pfVar3;
      if ((uVar4 & 1) == 0) goto LAB_0038e150;
LAB_0038e61c:
      pfVar3[2] = 0.0;
      pfVar5 = pfVar3 + 3;
      *pfVar3 = fVar17;
      pfVar3[1] = fVar11;
      uVar2 = FUN_003b49f4(param_1);
      pfVar3 = pfVar5;
      if ((uVar2 >> 2 & 1) != 0) goto LAB_0038e634;
LAB_0038e15c:
      uVar4 = FUN_003b49f4(param_1);
      if ((uVar4 & 1) == 0) goto LAB_0038e168;
LAB_0038e654:
      *pfVar3 = fVar17;
      pfVar3[1] = fVar15;
      pfVar3[2] = 0.0;
      pfVar3 = pfVar3 + 3;
      uVar2 = FUN_003b49f4(param_1);
      pfVar5 = pfVar3;
      if ((uVar2 >> 2 & 1) != 0) goto LAB_0038e66c;
LAB_0038e174:
      uVar4 = FUN_003b49f4(param_1);
      if ((uVar4 & 1) == 0) goto LAB_0038e180;
LAB_0038e688:
      *pfVar5 = fVar19;
      pfVar5[1] = fVar15;
      pfVar5[2] = 0.0;
      pfVar5 = pfVar5 + 3;
      uVar2 = FUN_003b49f4(param_1);
    }
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar19 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar15 * 0.5 + 0.5);
    }
  }
  else {
    pfVar5 = pfVar3;
    if ((uVar4 & 1) != 0) {
      pfVar3[2] = 0.0;
      pfVar5 = pfVar3 + 3;
      *pfVar3 = fVar19;
      pfVar3[1] = fVar11;
    }
    fVar12 = *(float *)puVar1;
    uVar2 = FUN_003b49f4(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar19 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar11 * 0.5 + 0.5);
    }
    fVar12 = fVar12 * 0.5;
    fVar13 = 0.0;
    iVar8 = iVar7 + 1;
    do {
      while( true ) {
        fVar9 = cosf(fVar13);
        fVar10 = sinf(fVar13);
        fVar14 = fVar19 + fVar16 * fVar9;
        fVar9 = fVar11 + fVar18 * fVar10;
        uVar4 = FUN_003b49f4(param_1);
        pfVar5 = pfVar3;
        if ((uVar4 & 1) != 0) {
          *pfVar3 = fVar14;
          pfVar3[1] = fVar9;
          pfVar3[2] = 0.0;
          pfVar5 = pfVar3 + 3;
        }
        uVar2 = FUN_003b49f4(param_1);
        if ((uVar2 >> 2 & 1) != 0) break;
        iVar8 = iVar8 + -1;
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
        fVar13 = fVar13 + (1.0 / fVar9) * fVar12;
        pfVar3 = pfVar5;
        if (iVar8 == 0) goto LAB_0038de88;
      }
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar14 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar9 * 0.5 + 0.5);
      iVar8 = iVar8 + -1;
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar13 = fVar13 + (1.0 / fVar9) * fVar12;
    } while (iVar8 != 0);
LAB_0038de88:
    uVar4 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar4 & 1) != 0) {
      pfVar3[2] = 0.0;
      pfVar5 = pfVar3 + 3;
      *pfVar3 = fVar17;
      pfVar3[1] = fVar11;
    }
    uVar2 = FUN_003b49f4(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar17 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar11 * 0.5 + 0.5);
    }
    fVar13 = 0.0;
    iVar8 = iVar7 + 1;
    do {
      while( true ) {
        fVar9 = cosf(fVar13);
        fVar10 = sinf(fVar13);
        fVar14 = -(fVar9 * fVar16) - fVar19;
        fVar9 = fVar11 + fVar18 * fVar10;
        uVar4 = FUN_003b49f4(param_1);
        pfVar5 = pfVar3;
        if ((uVar4 & 1) != 0) {
          *pfVar3 = fVar14;
          pfVar3[1] = fVar9;
          pfVar3[2] = 0.0;
          pfVar5 = pfVar3 + 3;
        }
        uVar2 = FUN_003b49f4(param_1);
        if ((uVar2 >> 2 & 1) != 0) break;
        iVar8 = iVar8 + -1;
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
        fVar13 = fVar13 + (1.0 / fVar9) * fVar12;
        pfVar3 = pfVar5;
        if (iVar8 == 0) goto LAB_0038df70;
      }
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar14 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar9 * 0.5 + 0.5);
      iVar8 = iVar8 + -1;
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar13 = fVar13 + (1.0 / fVar9) * fVar12;
    } while (iVar8 != 0);
LAB_0038df70:
    uVar4 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar4 & 1) != 0) {
      pfVar3[2] = 0.0;
      pfVar5 = pfVar3 + 3;
      *pfVar3 = fVar17;
      pfVar3[1] = fVar15;
    }
    uVar2 = FUN_003b49f4(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar17 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar15 * 0.5 + 0.5);
    }
    fVar13 = 0.0;
    iVar8 = iVar7 + 1;
    do {
      while( true ) {
        fVar9 = cosf(fVar13);
        fVar10 = sinf(fVar13);
        fVar14 = -(fVar9 * fVar16) - fVar19;
        fVar9 = -(fVar10 * fVar18) - fVar11;
        uVar4 = FUN_003b49f4(param_1);
        pfVar5 = pfVar3;
        if ((uVar4 & 1) != 0) {
          *pfVar3 = fVar14;
          pfVar3[1] = fVar9;
          pfVar3[2] = 0.0;
          pfVar5 = pfVar3 + 3;
        }
        uVar2 = FUN_003b49f4(param_1);
        if ((uVar2 >> 2 & 1) != 0) break;
        iVar8 = iVar8 + -1;
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
        fVar13 = fVar13 + (1.0 / fVar9) * fVar12;
        pfVar3 = pfVar5;
        if (iVar8 == 0) goto LAB_0038e050;
      }
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar14 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar9 * 0.5 + 0.5);
      iVar8 = iVar8 + -1;
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar13 = fVar13 + (1.0 / fVar9) * fVar12;
    } while (iVar8 != 0);
LAB_0038e050:
    uVar4 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar4 & 1) != 0) {
      pfVar3[2] = 0.0;
      pfVar5 = pfVar3 + 3;
      *pfVar3 = fVar19;
      pfVar3[1] = fVar15;
    }
    uVar2 = FUN_003b49f4(param_1);
    pfVar6 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar6 = pfVar5 + 2;
      *pfVar5 = fVar19 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar15 * 0.5 + 0.5);
    }
    fVar13 = 0.0;
    iVar7 = iVar7 + 1;
    do {
      while( true ) {
        fVar9 = cosf(fVar13);
        fVar10 = sinf(fVar13);
        fVar14 = fVar19 + fVar16 * fVar9;
        fVar9 = -(fVar10 * fVar18) - fVar11;
        uVar4 = FUN_003b49f4(param_1);
        pfVar3 = pfVar6;
        if ((uVar4 & 1) != 0) {
          *pfVar6 = fVar14;
          pfVar6[1] = fVar9;
          pfVar6[2] = 0.0;
          pfVar3 = pfVar6 + 3;
        }
        uVar2 = FUN_003b49f4(param_1);
        if ((uVar2 >> 2 & 1) != 0) break;
        iVar7 = iVar7 + -1;
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
        fVar13 = fVar13 + (1.0 / fVar9) * fVar12;
        pfVar6 = pfVar3;
        if (iVar7 == 0) goto LAB_0038e19c;
      }
      pfVar6 = pfVar3 + 2;
      *pfVar3 = fVar14 * 0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar9 * 0.5 + 0.5);
      iVar7 = iVar7 + -1;
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar13 = fVar13 + (1.0 / fVar9) * fVar12;
      pfVar3 = pfVar6;
    } while (iVar7 != 0);
  }
LAB_0038e19c:
  if (2.0 <= fVar16 + fVar16) goto joined_r0x0038e450;
  uVar4 = FUN_003b49f4(param_1);
  if ((uVar4 & 1) == 0) {
    uVar2 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_0038e1cc;
LAB_0038e2c0:
    pfVar3[1] = 0.0;
    pfVar5 = pfVar3 + 2;
    *pfVar3 = fVar19 * 0.5 + 0.5;
    uVar4 = FUN_003b49f4(param_1);
    pfVar3 = pfVar5;
    if ((uVar4 & 1) != 0) goto LAB_0038e2d8;
LAB_0038e1d8:
    uVar2 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_0038e1e4;
LAB_0038e2f0:
    pfVar5 = pfVar3 + 2;
    *pfVar3 = fVar19 * 0.5 + 0.5;
    pfVar3[1] = 1.0 - (fVar11 * 0.5 + 0.5);
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) != 0) goto LAB_0038e310;
LAB_0038e1f0:
    uVar2 = FUN_003b49f4(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_0038e1fc;
LAB_0038e32c:
    pfVar5[1] = 0.0;
    pfVar3 = pfVar5 + 2;
    *pfVar5 = fVar17 * 0.5 + 0.5;
    uVar4 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar4 & 1) != 0) goto LAB_0038e344;
LAB_0038e208:
    uVar2 = FUN_003b49f4(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_0038e214;
LAB_0038e35c:
    pfVar3 = pfVar5 + 2;
    *pfVar5 = fVar17 * 0.5 + 0.5;
    pfVar5[1] = 1.0 - (fVar11 * 0.5 + 0.5);
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) != 0) goto LAB_0038e37c;
LAB_0038e220:
    uVar2 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_0038e22c;
LAB_0038e398:
    pfVar3[1] = 1.0;
    pfVar5 = pfVar3 + 2;
    *pfVar3 = fVar17 * 0.5 + 0.5;
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) != 0) goto LAB_0038e3b4;
LAB_0038e238:
    uVar2 = FUN_003b49f4(param_1);
    pfVar6 = pfVar5;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_0038e244;
LAB_0038e3cc:
    pfVar6 = pfVar5 + 2;
    *pfVar5 = fVar17 * 0.5 + 0.5;
    pfVar5[1] = 1.0 - (fVar15 * 0.5 + 0.5);
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) != 0) goto LAB_0038e3e8;
LAB_0038e250:
    uVar2 = FUN_003b49f4(param_1);
    pfVar3 = pfVar6;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_0038e25c;
LAB_0038e404:
    pfVar6[1] = 1.0;
    pfVar3 = pfVar6 + 2;
    *pfVar6 = fVar19 * 0.5 + 0.5;
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) != 0) goto LAB_0038e420;
LAB_0038e268:
    uVar2 = FUN_003b49f4(param_1);
  }
  else {
    *pfVar3 = fVar19;
    pfVar3[1] = 1.0;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
    uVar2 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_0038e2c0;
LAB_0038e1cc:
    uVar4 = FUN_003b49f4(param_1);
    pfVar3 = pfVar5;
    if ((uVar4 & 1) == 0) goto LAB_0038e1d8;
LAB_0038e2d8:
    pfVar5[2] = 0.0;
    pfVar3 = pfVar5 + 3;
    *pfVar5 = fVar19;
    pfVar5[1] = fVar11;
    uVar2 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_0038e2f0;
LAB_0038e1e4:
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) == 0) goto LAB_0038e1f0;
LAB_0038e310:
    *pfVar5 = fVar17;
    pfVar5[1] = 1.0;
    pfVar5[2] = 0.0;
    pfVar5 = pfVar5 + 3;
    uVar2 = FUN_003b49f4(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_0038e32c;
LAB_0038e1fc:
    uVar4 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar4 & 1) == 0) goto LAB_0038e208;
LAB_0038e344:
    pfVar3[2] = 0.0;
    pfVar5 = pfVar3 + 3;
    *pfVar3 = fVar17;
    pfVar3[1] = fVar11;
    uVar2 = FUN_003b49f4(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_0038e35c;
LAB_0038e214:
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) == 0) goto LAB_0038e220;
LAB_0038e37c:
    *pfVar3 = fVar17;
    pfVar3[1] = -1.0;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
    uVar2 = FUN_003b49f4(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_0038e398;
LAB_0038e22c:
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) == 0) goto LAB_0038e238;
LAB_0038e3b4:
    *pfVar5 = fVar17;
    pfVar5[1] = fVar15;
    pfVar5[2] = 0.0;
    pfVar5 = pfVar5 + 3;
    uVar2 = FUN_003b49f4(param_1);
    pfVar6 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_0038e3cc;
LAB_0038e244:
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) == 0) goto LAB_0038e250;
LAB_0038e3e8:
    *pfVar6 = fVar19;
    pfVar6[1] = -1.0;
    pfVar6[2] = 0.0;
    pfVar6 = pfVar6 + 3;
    uVar2 = FUN_003b49f4(param_1);
    pfVar3 = pfVar6;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_0038e404;
LAB_0038e25c:
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) == 0) goto LAB_0038e268;
LAB_0038e420:
    *pfVar3 = fVar19;
    pfVar3[1] = fVar15;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
    uVar2 = FUN_003b49f4(param_1);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    *pfVar3 = fVar19 * 0.5 + 0.5;
    pfVar3[1] = 1.0 - (fVar15 * 0.5 + 0.5);
    pfVar3 = pfVar3 + 2;
  }
joined_r0x0038e450:
  if (fVar18 + fVar18 < 2.0) {
    uVar4 = FUN_003b49f4(param_1);
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_003b49f4(param_1);
    }
    else {
      pfVar3[2] = 0.0;
      *pfVar3 = 1.0;
      pfVar3[1] = fVar11;
      pfVar3 = pfVar3 + 3;
      uVar2 = FUN_003b49f4(param_1);
    }
    if ((uVar2 >> 2 & 1) == 0) {
      uVar4 = FUN_003b49f4(param_1);
    }
    else {
      *pfVar3 = 1.0;
      *(float *)((long)pfVar3 + 4) = 1.0 - (fVar11 * 0.5 + 0.5);
      pfVar3 = (float *)((long)pfVar3 + 8);
      uVar4 = FUN_003b49f4(param_1);
    }
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_003b49f4(param_1);
    }
    else {
      *(float *)((long)pfVar3 + 8) = 0.0;
      *pfVar3 = -1.0;
      *(float *)((long)pfVar3 + 4) = fVar11;
      pfVar3 = (float *)((long)pfVar3 + 0xc);
      uVar2 = FUN_003b49f4(param_1);
    }
    if ((uVar2 >> 2 & 1) == 0) {
      uVar4 = FUN_003b49f4(param_1);
    }
    else {
      *pfVar3 = 0.0;
      *(float *)((long)pfVar3 + 4) = 1.0 - (fVar11 * 0.5 + 0.5);
      pfVar3 = (float *)((long)pfVar3 + 8);
      uVar4 = FUN_003b49f4(param_1);
    }
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_003b49f4(param_1);
    }
    else {
      *(float *)((long)pfVar3 + 4) = fVar15;
      *(float *)((long)pfVar3 + 8) = 0.0;
      *pfVar3 = -1.0;
      uVar2 = FUN_003b49f4(param_1);
      pfVar3 = (float *)((long)pfVar3 + 0xc);
    }
    if ((uVar2 >> 2 & 1) == 0) {
      uVar4 = FUN_003b49f4(param_1);
    }
    else {
      *pfVar3 = 0.0;
      *(float *)((long)pfVar3 + 4) = 1.0 - (fVar15 * 0.5 + 0.5);
      pfVar3 = (float *)((long)pfVar3 + 8);
      uVar4 = FUN_003b49f4(param_1);
    }
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_003b49f4(param_1);
    }
    else {
      pfVar3[1] = fVar15;
      pfVar3[2] = 0.0;
      *pfVar3 = 1.0;
      uVar2 = FUN_003b49f4(param_1);
      pfVar3 = pfVar3 + 3;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *pfVar3 = 1.0;
      pfVar3[1] = 1.0 - (fVar15 * 0.5 + 0.5);
      pfVar3 = pfVar3 + 2;
    }
    return pfVar3;
  }
  return pfVar3;
}

