
long FUN_03d49900(long *param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  float fVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
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
  
  lVar5 = *param_1;
  lVar9 = param_1[1];
  fVar19 = *(float *)(lVar9 + 4);
  fVar20 = *(float *)(lVar9 + 8);
  lVar15 = *(long *)(lVar9 + 0x10);
  if (((lVar15 != 0) && (uVar11 = *(uint *)(lVar9 + 0x120), uVar11 != param_2)) &&
     ((((param_2 ^ (uVar11 & 2) >> 1) & 1) != 0 ||
      (((((uVar11 ^ (param_2 & 2) >> 1) & 1) != 0 || ((param_2 >> 2 & 1) != (uVar11 & 8) >> 3)) ||
       ((uint)((param_2 & 8) == 0) == (uVar11 & 4) >> 2)))))) {
    fVar19 = *(float *)(lVar15 + 0x14a0);
    fVar20 = *(float *)(lVar15 + 0x14a4);
  }
  fVar21 = 1.0;
  fVar22 = 0.0;
  switch(param_2) {
  case 2:
    fVar21 = -1.0;
    break;
  case 3:
  case 7:
    break;
  case 4:
    fVar21 = 0.0;
    fVar22 = -1.0;
    break;
  case 5:
    fVar21 = *(float *)(lVar5 + 0x3c);
    fVar22 = -*(float *)(lVar5 + 0x38);
    break;
  case 6:
    fVar22 = -*(float *)(lVar5 + 0x38);
    fVar21 = -*(float *)(lVar5 + 0x3c);
    break;
  case 8:
    fVar21 = 0.0;
    fVar22 = 1.0;
    break;
  case 9:
    fVar22 = *(float *)(lVar5 + 0x38);
    fVar21 = *(float *)(lVar5 + 0x3c);
    break;
  case 10:
    fVar22 = *(float *)(lVar5 + 0x38);
    fVar21 = -*(float *)(lVar5 + 0x3c);
    break;
  default:
    fVar22 = 0.0;
  }
  fVar24 = -fVar22;
  fVar23 = fVar21;
  if (*(char *)(lVar5 + 0x42) != '\0') {
    fVar23 = 0.0;
  }
  if (*(char *)(lVar5 + 0x41) != '\0') {
    fVar24 = 0.0;
  }
  if (*(long *)(lVar5 + 8) == lVar5) {
    lVar9 = 0;
  }
  else {
    lVar16 = (long)*(int *)(lVar5 + 0x14);
    pfVar1 = (float *)(lVar5 + 0x28);
    pfVar2 = (float *)(lVar5 + 0x30);
    fVar10 = 3.4028235e+38;
    cVar6 = *(char *)((long)param_1 + 0x14);
    pfVar3 = pfVar1;
    if ((param_2 & 4) != 0) {
      pfVar3 = pfVar2;
    }
    lVar9 = 0;
    lVar17 = *(long *)(lVar5 + 8) - lVar16;
    pfVar4 = pfVar2;
    if ((param_2 & 1) != 0) {
      pfVar4 = pfVar1;
    }
    uVar11 = 3;
    do {
      if ((lVar15 != lVar17) &&
         ((*(uint *)(lVar17 + 0x14b0) & 1 << (ulong)(*(uint *)(param_1 + 2) & 0x1f)) != 0)) {
        fVar27 = *(float *)(lVar17 + 0x14a4);
        fVar25 = fVar27 - fVar20;
        fVar26 = *(float *)(lVar17 + 0x14a0);
        if ((param_2 & 1) == 0) {
          if ((((param_2 >> 1 & 1) == 0) ||
              (fVar28 = *(float *)(lVar17 + 0x14ac), fVar27 + fVar28 * 0.5 < fVar20)) ||
             ((lVar15 == 0 && (fVar27 + fVar28 * -0.5 < fVar20)))) {
LAB_03d49b30:
            bVar12 = 0;
            bVar8 = 0;
            uVar13 = 0;
          }
          else if ((cVar6 == '\0') || (fVar20 <= fVar27 + fVar28 * -0.5)) {
            if (*(char *)(lVar5 + 0x43) == '\0') goto LAB_03d49a80;
            fVar25 = fVar25 - (*(float *)(lVar5 + 0x34) - *(float *)(lVar5 + 0x2c));
LAB_03d49cc8:
            uVar13 = 2;
            bVar12 = 1;
            bVar8 = 1;
          }
          else {
LAB_03d49c9c:
            bVar8 = 0;
            bVar12 = 1;
            uVar13 = 1;
          }
          fVar28 = fVar26 - fVar19;
          if ((param_2 >> 2 & 1) == 0) {
            if ((((param_2 >> 3 & 1) == 0) || (fVar19 < fVar26 + *(float *)(lVar17 + 0x14a8) * -0.5)
                ) || ((fVar29 = fVar26 + *(float *)(lVar17 + 0x14a8) * 0.5, lVar15 == 0 &&
                      (fVar19 < fVar29)))) {
LAB_03d49ba4:
              bVar14 = 0;
              bVar7 = 0;
              uVar18 = 0;
            }
            else if ((cVar6 == '\0') || (fVar29 <= fVar19)) {
              if (*(char *)(lVar5 + 0x44) == '\0') goto LAB_03d49a80;
              fVar28 = fVar28 + (*pfVar2 - *pfVar1);
LAB_03d49c84:
              uVar18 = 2;
              bVar14 = 1;
              bVar7 = 1;
            }
            else {
LAB_03d49c38:
              bVar14 = 0;
              bVar7 = 1;
              uVar18 = 1;
            }
            if (((*(char *)(lVar5 + 0x44) == '\0') || (*(char *)(lVar5 + 0x43) == '\0')) ||
               ((!(bool)(bVar12 & bVar14) && (!(bool)(bVar8 & bVar7))))) {
              if (uVar18 <= uVar13) {
                uVar18 = uVar13;
              }
              if (uVar18 <= uVar11) goto LAB_03d49be0;
            }
            else {
              uVar18 = 3;
              fVar28 = fVar26 - *pfVar3;
              fVar25 = fVar27 - pfVar4[1];
              if (2 < uVar11) {
LAB_03d49be0:
                fVar27 = fVar24 * fVar25 + fVar28 * fVar23;
                fVar26 = -(fVar23 * fVar28) - fVar24 * fVar25;
                if (0.0 <= fVar27) {
                  fVar26 = fVar27;
                }
                fVar25 = fVar21 * fVar25 + fVar28 * fVar22 + fVar26 * 2.0;
                if ((uVar18 < uVar11) || ((uVar18 == uVar11 && (fVar25 < fVar10)))) {
                  lVar9 = lVar17;
                  fVar10 = fVar25;
                  uVar11 = uVar18;
                }
              }
            }
          }
          else {
            fVar29 = *(float *)(lVar17 + 0x14a8);
            if ((fVar26 + fVar29 * 0.5 < fVar19) ||
               ((lVar15 == 0 && (fVar26 + fVar29 * -0.5 < fVar19)))) goto LAB_03d49ba4;
            if ((cVar6 != '\0') && (fVar26 + fVar29 * -0.5 < fVar19)) goto LAB_03d49c38;
            if (*(char *)(lVar5 + 0x44) != '\0') {
              fVar28 = fVar28 - (*pfVar2 - *pfVar1);
              goto LAB_03d49c84;
            }
          }
        }
        else {
          if ((fVar20 < fVar27 + *(float *)(lVar17 + 0x14ac) * -0.5) ||
             ((fVar28 = fVar27 + *(float *)(lVar17 + 0x14ac) * 0.5, lVar15 == 0 && (fVar20 < fVar28)
              ))) goto LAB_03d49b30;
          if ((cVar6 != '\0') && (fVar20 < fVar28)) goto LAB_03d49c9c;
          if (*(char *)(lVar5 + 0x43) != '\0') {
            fVar25 = fVar25 + (*(float *)(lVar5 + 0x34) - *(float *)(lVar5 + 0x2c));
            goto LAB_03d49cc8;
          }
        }
      }
LAB_03d49a80:
      lVar17 = *(long *)(lVar17 + lVar16 + 8) - lVar16;
    } while (lVar17 != lVar5 - lVar16);
  }
  return lVar9;
}

