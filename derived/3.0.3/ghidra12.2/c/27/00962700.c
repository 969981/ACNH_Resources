
/* WARNING: Type propagation algorithm not settling */

float FUN_00962700(long param_1,float *param_2,uint *param_3,uint param_4,undefined1 *param_5)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  *param_5 = 0;
  fVar19 = *param_2;
  fVar20 = param_2[2];
  uVar12 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  if ((int)uVar12 < 0) {
    return 100.0;
  }
  uVar11 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  if ((int)uVar11 < 0) {
    return 100.0;
  }
  if (*(uint *)(param_1 + 0x38) <= uVar12 || *(uint *)(param_1 + 0x3c) <= uVar11) {
    return 100.0;
  }
  uVar2 = uVar12 + *(uint *)(param_1 + 0x38) * uVar11;
  fVar19 = fVar19 - (float)(int)uVar12 * 5.0;
  fVar20 = fVar20 - (float)(int)uVar11 * 5.0;
  if ((param_4 & 1) == 0) {
    uVar12 = 0x10;
  }
  else {
    uVar12 = 0x11;
  }
  if ((*(uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar2 * 4) >> (ulong)uVar12 & 1) == 0) {
    fVar17 = *(float *)(param_1 + 0x28);
    lVar13 = *(long *)(param_1 + 0x60);
    fVar21 = (fVar19 + fVar20) - fVar17;
    if (0.0 <= fVar20 - fVar19) {
      uVar12 = *(uint *)(param_1 + 0x58);
      bVar9 = lVar13 != 0;
      bVar5 = uVar2 <= uVar12;
      bVar3 = uVar12 != uVar2;
      if (0.0 <= fVar21) {
        if (((!(bVar9 && (bVar5 && bVar3))) ||
            (bVar1 = *(byte *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x32), bVar1 == 7)) ||
           ((param_4 & 1) != 0)) {
          lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
          if (*(uint *)(param_1 + 0x48) <= uVar2) {
            lVar16 = 0;
          }
          pfVar14 = (float *)(lVar16 + 0x18);
LAB_00962e94:
          bVar1 = *(byte *)(lVar16 + 0x32);
        }
        else {
          pfVar14 = (float *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x18);
          if (bVar1 == 9) {
            lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
            if (*(uint *)(param_1 + 0x48) <= uVar2) {
              lVar16 = 0;
            }
            goto LAB_00962e94;
          }
        }
        uVar11 = (uint)bVar1;
        fVar18 = *(float *)(param_1 + 0x2c);
        fVar23 = *pfVar14;
        fVar17 = fVar17 - fVar18;
        fVar22 = -(fVar17 * (pfVar14[2] - fVar23)) + fVar17 * (pfVar14[1] - fVar23);
        fVar21 = -((0.0 - fVar18) * fVar17) + fVar17 * fVar17;
        fVar24 = -((pfVar14[1] - fVar23) * fVar17) + (pfVar14[2] - fVar23) * (0.0 - fVar18);
        fVar17 = SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar24 * fVar24);
        if (0.0 < fVar17) {
          fVar17 = 1.0 / fVar17;
          fVar22 = fVar22 * fVar17;
          fVar21 = fVar21 * fVar17;
          fVar24 = fVar24 * fVar17;
        }
        fVar17 = fVar23 * fVar21 + fVar18 * fVar22 + fVar18 * fVar24;
        bVar5 = false;
        bVar3 = true;
        if (-1.1920929e-07 <= fVar22) {
          bVar5 = false;
          bVar3 = true;
          if (!NAN(fVar22)) {
            bVar5 = fVar22 == 1.1920929e-07;
            bVar3 = 1.1920929e-07 <= fVar22;
          }
        }
        bVar7 = true;
        bVar6 = false;
        if (!bVar3 || bVar5) {
          bVar7 = false;
          bVar6 = true;
          if (!NAN(fVar24)) {
            bVar7 = fVar24 < -1.1920929e-07;
            bVar6 = false;
          }
        }
        bVar5 = false;
        bVar3 = true;
        if (bVar7 == bVar6) {
          bVar5 = false;
          bVar3 = true;
          if (!NAN(fVar24)) {
            bVar5 = fVar24 == 1.1920929e-07;
            bVar3 = 1.1920929e-07 <= fVar24;
          }
        }
        if (!bVar3 || bVar5) {
          fVar18 = fVar17;
        }
        else if ((fVar21 < -1.1920929e-07) || (fVar18 = 0.0, 1.1920929e-07 < fVar21)) {
          fVar18 = -((fVar20 * fVar24 + fVar19 * fVar22) - fVar17) / fVar21;
        }
        if (bVar9 && uVar2 < uVar12) goto LAB_00962fa4;
      }
      else {
        if (((!(bVar9 && (bVar5 && bVar3))) ||
            (bVar1 = *(byte *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x31), bVar1 == 7)) ||
           ((param_4 & 1) != 0)) {
          lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
          if (*(uint *)(param_1 + 0x48) <= uVar2) {
            lVar16 = 0;
          }
          pfVar14 = (float *)(lVar16 + 0xc);
LAB_00962cb4:
          bVar1 = *(byte *)(lVar16 + 0x31);
        }
        else {
          pfVar14 = (float *)(lVar13 + (long)(int)uVar2 * 0x34 + 0xc);
          if (bVar1 == 9) {
            lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
            if (*(uint *)(param_1 + 0x48) <= uVar2) {
              lVar16 = 0;
            }
            goto LAB_00962cb4;
          }
        }
        uVar11 = (uint)bVar1;
        fVar18 = *(float *)(param_1 + 0x2c);
        fVar24 = 0.0 - fVar18;
        fVar23 = *pfVar14;
        fVar22 = -(fVar24 * (pfVar14[2] - fVar23)) + (fVar17 - fVar18) * (pfVar14[1] - fVar23);
        fVar21 = -(fVar24 * (fVar17 - fVar18)) + fVar24 * fVar24;
        fVar24 = -((pfVar14[1] - fVar23) * fVar24) + (pfVar14[2] - fVar23) * fVar24;
        fVar17 = SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar24 * fVar24);
        if (0.0 < fVar17) {
          fVar17 = 1.0 / fVar17;
          fVar22 = fVar22 * fVar17;
          fVar21 = fVar21 * fVar17;
          fVar24 = fVar24 * fVar17;
        }
        fVar18 = fVar23 * fVar21 + fVar18 * fVar22 + fVar18 * fVar24;
        bVar7 = false;
        bVar6 = true;
        if (-1.1920929e-07 <= fVar22) {
          bVar7 = false;
          bVar6 = true;
          if (!NAN(fVar22)) {
            bVar7 = fVar22 == 1.1920929e-07;
            bVar6 = 1.1920929e-07 <= fVar22;
          }
        }
        bVar4 = true;
        bVar8 = false;
        if (!bVar6 || bVar7) {
          bVar4 = false;
          bVar8 = true;
          if (!NAN(fVar24)) {
            bVar4 = fVar24 < -1.1920929e-07;
            bVar8 = false;
          }
        }
        bVar7 = false;
        bVar6 = true;
        if (bVar4 == bVar8) {
          bVar7 = false;
          bVar6 = true;
          if (!NAN(fVar24)) {
            bVar7 = fVar24 == 1.1920929e-07;
            bVar6 = 1.1920929e-07 <= fVar24;
          }
        }
        if (!bVar6 || bVar7) {
          if (bVar9 && uVar2 < uVar12) goto LAB_00962f74;
        }
        else {
          if ((fVar21 < -1.1920929e-07) || (fVar17 = 0.0, 1.1920929e-07 < fVar21)) {
            fVar17 = -((fVar20 * fVar24 + fVar19 * fVar22) - fVar18) / fVar21;
          }
          fVar18 = fVar17;
          if ((bVar9 && bVar5) && (lVar13 == 0 || bVar3)) {
LAB_00962f74:
            cVar10 = *(char *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x31);
            goto LAB_00962fbc;
          }
        }
      }
    }
    else {
      if (fVar21 < 0.0) {
        if ((((lVar13 == 0) || (*(uint *)(param_1 + 0x58) <= uVar2)) ||
            (bVar1 = *(byte *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x30), bVar1 == 7)) ||
           ((param_4 & 1) != 0)) {
          pfVar14 = (float *)(*(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34);
          if (*(uint *)(param_1 + 0x48) <= uVar2) {
            pfVar14 = (float *)0x0;
          }
          pfVar15 = pfVar14;
LAB_00962bc8:
          bVar1 = *(byte *)(pfVar14 + 0xc);
        }
        else {
          pfVar15 = (float *)(lVar13 + (long)(int)uVar2 * 0x34);
          if (bVar1 == 9) {
            pfVar14 = (float *)(*(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34);
            if (*(uint *)(param_1 + 0x48) <= uVar2) {
              pfVar14 = (float *)0x0;
            }
            goto LAB_00962bc8;
          }
        }
        uVar11 = (uint)bVar1;
        fVar23 = *pfVar15;
        fVar18 = *(float *)(param_1 + 0x2c);
        fVar24 = 0.0 - fVar18;
        fVar22 = -(fVar24 * (pfVar15[2] - fVar23)) + fVar24 * (pfVar15[1] - fVar23);
        fVar21 = -((fVar17 - fVar18) * fVar24) + fVar24 * fVar24;
        fVar24 = -((pfVar15[1] - fVar23) * fVar24) + (pfVar15[2] - fVar23) * (fVar17 - fVar18);
        fVar17 = SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar24 * fVar24);
        if (0.0 < fVar17) {
          fVar17 = 1.0 / fVar17;
          fVar22 = fVar22 * fVar17;
          fVar21 = fVar21 * fVar17;
          fVar24 = fVar24 * fVar17;
        }
        fVar17 = fVar23 * fVar21 + fVar18 * fVar22 + fVar18 * fVar24;
        bVar9 = false;
        bVar5 = true;
        if (-1.1920929e-07 <= fVar22) {
          bVar9 = false;
          bVar5 = true;
          if (!NAN(fVar22)) {
            bVar9 = fVar22 == 1.1920929e-07;
            bVar5 = 1.1920929e-07 <= fVar22;
          }
        }
        bVar3 = true;
        bVar7 = false;
        if (!bVar5 || bVar9) {
          bVar3 = false;
          bVar7 = true;
          if (!NAN(fVar24)) {
            bVar3 = fVar24 < -1.1920929e-07;
            bVar7 = false;
          }
        }
        bVar9 = false;
        bVar5 = true;
        if (bVar3 == bVar7) {
          bVar9 = false;
          bVar5 = true;
          if (!NAN(fVar24)) {
            bVar9 = fVar24 == 1.1920929e-07;
            bVar5 = 1.1920929e-07 <= fVar24;
          }
        }
        if (!bVar5 || bVar9) {
          fVar18 = fVar17;
        }
        else if ((fVar21 < -1.1920929e-07) || (fVar18 = 0.0, 1.1920929e-07 < fVar21)) {
          fVar18 = -((fVar20 * fVar24 + fVar19 * fVar22) - fVar17) / fVar21;
        }
        goto LAB_00962a60;
      }
      if (((lVar13 == 0 || *(uint *)(param_1 + 0x58) <= uVar2) ||
          (bVar1 = *(byte *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x33), bVar1 == 7)) ||
         ((param_4 & 1) != 0)) {
        lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
        if (*(uint *)(param_1 + 0x48) <= uVar2) {
          lVar16 = 0;
        }
        pfVar14 = (float *)(lVar16 + 0x24);
LAB_00962da4:
        bVar1 = *(byte *)(lVar16 + 0x33);
      }
      else {
        pfVar14 = (float *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x24);
        if (bVar1 == 9) {
          lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
          if (*(uint *)(param_1 + 0x48) <= uVar2) {
            lVar16 = 0;
          }
          goto LAB_00962da4;
        }
      }
      uVar11 = (uint)bVar1;
      fVar23 = *pfVar14;
      fVar18 = *(float *)(param_1 + 0x2c);
      fVar17 = fVar17 - fVar18;
      fVar22 = -(fVar17 * (pfVar14[2] - fVar23)) + (0.0 - fVar18) * (pfVar14[1] - fVar23);
      fVar21 = -(fVar17 * (0.0 - fVar18)) + fVar17 * fVar17;
      fVar24 = -((pfVar14[1] - fVar23) * fVar17) + (pfVar14[2] - fVar23) * fVar17;
      fVar17 = SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar24 * fVar24);
      if (0.0 < fVar17) {
        fVar17 = 1.0 / fVar17;
        fVar22 = fVar22 * fVar17;
        fVar21 = fVar21 * fVar17;
        fVar24 = fVar24 * fVar17;
      }
      fVar17 = fVar23 * fVar21 + fVar18 * fVar22 + fVar18 * fVar24;
      bVar9 = false;
      bVar5 = true;
      if (-1.1920929e-07 <= fVar22) {
        bVar9 = false;
        bVar5 = true;
        if (!NAN(fVar22)) {
          bVar9 = fVar22 == 1.1920929e-07;
          bVar5 = 1.1920929e-07 <= fVar22;
        }
      }
      bVar3 = true;
      bVar7 = false;
      if (!bVar5 || bVar9) {
        bVar3 = false;
        bVar7 = true;
        if (!NAN(fVar24)) {
          bVar3 = fVar24 < -1.1920929e-07;
          bVar7 = false;
        }
      }
      bVar9 = false;
      bVar5 = true;
      if (bVar3 == bVar7) {
        bVar9 = false;
        bVar5 = true;
        if (!NAN(fVar24)) {
          bVar9 = fVar24 == 1.1920929e-07;
          bVar5 = 1.1920929e-07 <= fVar24;
        }
      }
      fVar18 = fVar17;
      if ((bVar5 && !bVar9) && ((fVar21 < -1.1920929e-07 || (fVar18 = 0.0, 1.1920929e-07 < fVar21)))
         ) {
        fVar18 = -((fVar20 * fVar24 + fVar19 * fVar22) - fVar17) / fVar21;
      }
      if (lVar13 != 0 && uVar2 < *(uint *)(param_1 + 0x58)) goto LAB_00962f8c;
    }
LAB_00962fb4:
    cVar10 = '\a';
  }
  else {
    lVar13 = *(long *)(param_1 + 0x60);
    fVar17 = (fVar19 + fVar20) - *(float *)(param_1 + 0x28);
    if (0.0 <= fVar20 - fVar19) {
      uVar12 = *(uint *)(param_1 + 0x58);
      bVar9 = lVar13 == 0;
      if (0.0 <= fVar17) {
        if (((bVar9 || uVar12 <= uVar2) ||
            (bVar1 = *(byte *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x32), bVar1 == 7)) ||
           ((param_4 & 1) != 0)) {
          lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
          if (*(uint *)(param_1 + 0x48) <= uVar2) {
            lVar16 = 0;
          }
          fVar18 = *(float *)(lVar16 + 0x18);
          uVar11 = (uint)*(byte *)(lVar16 + 0x32);
          if (bVar9 || uVar12 <= uVar2) goto LAB_00962fb4;
        }
        else {
          if (bVar1 == 9) {
            lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
            if (*(uint *)(param_1 + 0x48) <= uVar2) {
              lVar16 = 0;
            }
            bVar1 = *(byte *)(lVar16 + 0x32);
          }
          uVar11 = (uint)bVar1;
          fVar18 = *(float *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x18);
        }
LAB_00962fa4:
        cVar10 = *(char *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x32);
        goto LAB_00962fbc;
      }
      if (((bVar9 || uVar12 <= uVar2) ||
          (bVar1 = *(byte *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x31), bVar1 == 7)) ||
         ((param_4 & 1) != 0)) {
        lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
        if (*(uint *)(param_1 + 0x48) <= uVar2) {
          lVar16 = 0;
        }
        fVar18 = *(float *)(lVar16 + 0xc);
        uVar11 = (uint)*(byte *)(lVar16 + 0x31);
        if (bVar9 || uVar12 <= uVar2) goto LAB_00962fb4;
      }
      else {
        if (bVar1 == 9) {
          lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
          if (*(uint *)(param_1 + 0x48) <= uVar2) {
            lVar16 = 0;
          }
          bVar1 = *(byte *)(lVar16 + 0x31);
        }
        uVar11 = (uint)bVar1;
        fVar18 = *(float *)(lVar13 + (long)(int)uVar2 * 0x34 + 0xc);
      }
      goto LAB_00962f74;
    }
    if (0.0 <= fVar17) {
      if (((lVar13 == 0 || *(uint *)(param_1 + 0x58) <= uVar2) ||
          (bVar1 = *(byte *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x33), bVar1 == 7)) ||
         ((param_4 & 1) != 0)) {
        lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
        if (*(uint *)(param_1 + 0x48) <= uVar2) {
          lVar16 = 0;
        }
        fVar18 = *(float *)(lVar16 + 0x24);
        uVar11 = (uint)*(byte *)(lVar16 + 0x33);
        if (lVar13 == 0 || *(uint *)(param_1 + 0x58) <= uVar2) goto LAB_00962fb4;
      }
      else {
        if (bVar1 == 9) {
          lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
          if (*(uint *)(param_1 + 0x48) <= uVar2) {
            lVar16 = 0;
          }
          bVar1 = *(byte *)(lVar16 + 0x33);
        }
        uVar11 = (uint)bVar1;
        fVar18 = *(float *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x24);
      }
LAB_00962f8c:
      cVar10 = *(char *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x33);
      goto LAB_00962fbc;
    }
    if ((lVar13 == 0) || (*(uint *)(param_1 + 0x58) <= uVar2)) {
LAB_00962a40:
      pfVar14 = (float *)(*(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34);
      if (*(uint *)(param_1 + 0x48) <= uVar2) {
        pfVar14 = (float *)0x0;
      }
      uVar11 = (uint)*(byte *)(pfVar14 + 0xc);
    }
    else {
      bVar1 = *(byte *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x30);
      uVar11 = (uint)bVar1;
      if ((bVar1 == 7) || ((param_4 & 1) != 0)) goto LAB_00962a40;
      pfVar14 = (float *)(lVar13 + (long)(int)uVar2 * 0x34);
      if (bVar1 == 9) {
        lVar16 = *(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34;
        if (*(uint *)(param_1 + 0x48) <= uVar2) {
          lVar16 = 0;
        }
        uVar11 = (uint)*(byte *)(lVar16 + 0x30);
      }
    }
    fVar18 = *pfVar14;
LAB_00962a60:
    cVar10 = '\a';
    if ((lVar13 != 0) && (uVar2 < *(uint *)(param_1 + 0x58))) {
      cVar10 = *(char *)(lVar13 + (long)(int)uVar2 * 0x34 + 0x30);
    }
  }
LAB_00962fbc:
  *param_5 = cVar10 != '\a';
  *param_3 = uVar11;
  return fVar18;
}

