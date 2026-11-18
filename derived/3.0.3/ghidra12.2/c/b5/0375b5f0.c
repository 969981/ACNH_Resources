
void FUN_0375b5f0(long *param_1,float *param_2,long param_3,int *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  float *pfVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  puVar19 = (uint *)*param_1;
  if (*puVar19 != 0) {
    plVar11 = *(long **)(puVar19 + 2);
    do {
      lVar9 = *plVar11;
      fVar21 = (float)*(int *)(lVar9 + 8) * 5.0 + 2.5;
      fVar20 = (float)*(int *)(lVar9 + 0xc) * 5.0 + 2.5;
      if ((param_5 & 1) == 0) {
        fVar22 = *param_2;
        fVar23 = param_2[2];
        fVar24 = (float)*(int *)(lVar9 + 0x10);
      }
      else {
        fVar22 = *param_2;
        fVar24 = fVar22 - fVar21;
        fVar23 = param_2[2];
        fVar25 = fVar23 - fVar20;
        lVar13 = 0x10;
        if (fVar24 == 0.0 || fVar24 < 0.0) {
          lVar13 = 0xc;
        }
        lVar1 = 0;
        if (fVar24 != 0.0) {
          lVar1 = lVar13;
        }
        lVar13 = 4;
        if (fVar25 == 0.0 || fVar25 < 0.0) {
          lVar13 = 8;
        }
        lVar2 = 0;
        if (fVar25 != 0.0) {
          lVar2 = lVar13;
        }
        if (*(char *)(lVar9 + 0x14) == '\0') {
          fVar26 = -fVar24;
          if (0.0 <= fVar24) {
            fVar26 = fVar24;
          }
          fVar24 = -fVar25;
          if (0.0 <= fVar25) {
            fVar24 = fVar25;
          }
          fVar24 = *(float *)(param_3 + lVar2) * fVar24 + *(float *)(param_3 + lVar1) * fVar26;
        }
        else {
          fVar26 = -fVar24;
          if (0.0 <= fVar24) {
            fVar26 = fVar24;
          }
          fVar24 = -fVar25;
          if (0.0 <= fVar25) {
            fVar24 = fVar25;
          }
          fVar24 = (float)*(int *)(lVar9 + 0x10) + *(float *)(param_3 + lVar1) * fVar26 +
                   *(float *)(param_3 + lVar2) * fVar24;
        }
      }
      fVar26 = fVar22 + -5.0;
      fVar22 = fVar22 + 5.0;
      fVar25 = fVar23 + 5.0;
      if (*(char *)(lVar9 + 0x15) != '\0') {
        fVar24 = fVar24 + 200.0;
      }
      fVar23 = fVar23 + -5.0;
      if (*param_4 == 2) {
        bVar4 = true;
        bVar6 = false;
        if (fVar21 <= fVar22) {
          bVar4 = false;
          bVar6 = true;
          if (!NAN(fVar21) && !NAN(fVar26)) {
            bVar4 = fVar21 < fVar26;
            bVar6 = false;
          }
        }
        if (bVar4 == bVar6) {
          bVar4 = false;
          bVar6 = true;
          if (fVar23 <= fVar20) {
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar20) && !NAN(fVar25)) {
              bVar4 = fVar20 == fVar25;
              bVar6 = fVar25 <= fVar20;
            }
          }
          if (!bVar6 || bVar4) goto LAB_0375b79c;
        }
        else {
          bVar4 = true;
          bVar6 = false;
          if (fVar20 <= fVar25) {
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar20) && !NAN(fVar23)) {
              bVar4 = fVar20 < fVar23;
              bVar6 = false;
            }
          }
          if (bVar4 != bVar6) goto LAB_0375b63c;
        }
        fVar20 = 30.0;
LAB_0375b634:
        fVar24 = fVar24 + fVar20;
        *(undefined1 *)(lVar9 + 0x14) = 1;
      }
      else if (*param_4 == 1) {
        bVar4 = false;
        bVar6 = true;
        if (fVar26 <= fVar21) {
          bVar4 = false;
          bVar6 = true;
          if (!NAN(fVar21) && !NAN(fVar22)) {
            bVar4 = fVar21 == fVar22;
            bVar6 = fVar22 <= fVar21;
          }
        }
        bVar5 = false;
        bVar7 = true;
        if (!bVar6 || bVar4) {
          bVar5 = false;
          bVar7 = true;
          if (!NAN(fVar23) && !NAN(fVar20)) {
            bVar5 = fVar23 == fVar20;
            bVar7 = fVar20 <= fVar23;
          }
        }
        bVar4 = false;
        bVar6 = true;
        if (!bVar7 || bVar5) {
          bVar4 = false;
          bVar6 = true;
          if (!NAN(fVar20) && !NAN(fVar25)) {
            bVar4 = fVar20 == fVar25;
            bVar6 = fVar25 <= fVar20;
          }
        }
        if (!bVar6 || bVar4) {
LAB_0375b79c:
          fVar20 = 400.0;
        }
        else {
          fVar20 = 30.0;
          bVar4 = true;
          bVar6 = false;
          if (fVar21 <= fVar22) {
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar21) && !NAN(fVar26)) {
              bVar4 = fVar21 < fVar26;
              bVar6 = false;
            }
          }
          if (bVar4 != bVar6) goto LAB_0375b63c;
        }
        goto LAB_0375b634;
      }
LAB_0375b63c:
      plVar11 = plVar11 + 1;
      *(int *)(lVar9 + 0x10) = (int)fVar24;
      puVar19 = (uint *)*param_1;
      plVar8 = *(long **)(puVar19 + 2);
      uVar14 = *puVar19;
    } while (plVar11 != plVar8 + (int)uVar14);
    if (1 < (int)uVar14) {
      uVar12 = (ulong)(uVar14 >> 1);
      do {
        uVar18 = (uint)uVar12 * 2;
        lVar9 = plVar8[uVar12 - 1 & 0xffffffff];
        if ((int)uVar14 < (int)uVar18) {
          uVar16 = (uint)uVar12;
        }
        else {
          uVar15 = uVar12 & 0xffffffff;
          do {
            if ((int)uVar18 < (int)uVar14) {
              uVar17 = uVar18 | *(int *)((plVar8 + (int)uVar18)[-1] + 0x10) <
                                *(int *)(plVar8[(int)uVar18] + 0x10);
            }
            else {
              uVar17 = uVar18;
            }
            uVar16 = (uint)uVar15;
            if (*(int *)(plVar8[(int)(uVar17 - 1)] + 0x10) <= *(int *)(lVar9 + 0x10)) break;
            plVar8[(int)((uint)uVar15 - 1)] = plVar8[(int)(uVar17 - 1)];
            uVar18 = uVar17 * 2;
            uVar15 = (ulong)uVar17;
            uVar16 = uVar17;
          } while ((int)uVar18 <= (int)uVar14);
        }
        plVar8[(int)(uVar16 - 1)] = lVar9;
        bVar4 = 1 < (long)uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar4);
      uVar15 = (ulong)uVar14 - 1;
      uVar12 = uVar15 & 0xffffffff;
      lVar9 = plVar8[uVar12];
      plVar8[uVar12] = *plVar8;
      uVar12 = (ulong)uVar14;
      if (2 < uVar14) {
        do {
          uVar14 = 2;
          uVar18 = 1;
          do {
            if ((int)uVar14 < (int)uVar15) {
              uVar16 = uVar14 | *(int *)((plVar8 + (int)uVar14)[-1] + 0x10) <
                                *(int *)(plVar8[(int)uVar14] + 0x10);
            }
            else {
              uVar16 = uVar14;
            }
            lVar13 = (long)(int)(uVar18 - 1);
            if (*(int *)(plVar8[(int)(uVar16 - 1)] + 0x10) <= *(int *)(lVar9 + 0x10))
            goto LAB_0375b950;
            plVar8[lVar13] = plVar8[(int)(uVar16 - 1)];
            uVar14 = uVar16 << 1;
            uVar18 = uVar16;
          } while ((long)(int)uVar14 < (long)uVar12);
          lVar13 = (long)(int)(uVar16 - 1);
LAB_0375b950:
          plVar8[lVar13] = lVar9;
          uVar12 = uVar15 - 1 & 0xffffffff;
          lVar9 = plVar8[uVar12];
          plVar8[uVar12] = *plVar8;
          bVar4 = 2 < uVar15;
          uVar12 = uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar4);
      }
      *plVar8 = lVar9;
      puVar19 = (uint *)*param_1;
    }
  }
  lVar9 = *(long *)param_1[1];
  if (lVar9 != 0) {
    pfVar10 = (float *)(lVar9 + (long)(int)((long *)param_1[1])[1] * 0xc);
    lVar9 = **(long **)(puVar19 + 2);
    *pfVar10 = (float)*(int *)(lVar9 + 8) * 5.0 + 2.5;
    pfVar10[2] = (float)*(int *)(lVar9 + 0xc) * 5.0 + 2.5;
    puVar19 = (uint *)*param_1;
  }
  *(int *)(**(long **)(puVar19 + 2) + 0x10) = *(int *)(**(long **)(puVar19 + 2) + 0x10) + 1000;
  *(undefined1 *)(**(long **)(*param_1 + 8) + 0x14) = 1;
  pfVar10 = (float *)(*(long *)param_1[1] + (long)(int)((long *)param_1[1])[1] * 0xc);
  *param_2 = *pfVar10;
  param_2[1] = pfVar10[1];
  param_2[2] = pfVar10[2];
  iVar3 = *(int *)(param_1[1] + 8);
  if (iVar3 != *(int *)(param_1[2] + 8)) {
    *(int *)(param_1[1] + 8) = iVar3 + 1;
  }
  return;
}

