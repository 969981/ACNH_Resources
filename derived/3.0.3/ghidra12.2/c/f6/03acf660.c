
void FUN_03acf660(uint *param_1,float *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined4 *puVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
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
  
  uVar16 = param_1[0x12];
  uVar9 = (ulong)uVar16;
  puVar1 = param_1 + 6;
  param_1[4] = 0;
  puVar18 = puVar1 + uVar9 * 6;
  if (1 < uVar16) {
    puVar18 = puVar1;
  }
  if (0 < (int)puVar18[4]) {
    uVar16 = 0;
    do {
      uVar8 = ~(uint)uVar9 & 1;
      puVar18 = puVar1 + (ulong)uVar8 * 6 + 4;
      uVar6 = *puVar18;
      if ((int)uVar6 < 0x10) {
        if (puVar1[(ulong)uVar8 * 6] <= uVar6) {
          uVar6 = 0;
        }
        puVar17 = *(uint **)(*(long *)(puVar1 + (ulong)uVar8 * 6 + 2) + (long)(int)uVar6 * 8);
        memset(*(void **)(puVar17 + 2),0,(ulong)(*puVar17 * 0xc));
        puVar17[4] = 0;
        *puVar18 = *puVar18 + 1;
      }
      else {
        puVar17 = (uint *)0x0;
      }
      uVar6 = param_1[4];
      if (0xf < (int)uVar6) {
        uVar16 = param_1[0x12];
        goto LAB_03acfa84;
      }
      if (*param_1 <= uVar6) {
        uVar6 = 0;
      }
      puVar18 = *(uint **)(*(long *)(param_1 + 2) + (long)(int)uVar6 * 8);
      memset(*(void **)(puVar18 + 2),0,(ulong)(*puVar18 * 0xc));
      puVar18[4] = 0;
      uVar9 = (ulong)param_1[0x12];
      uVar6 = param_1[4] + 1;
      param_1[4] = uVar6;
      if (puVar17 == (uint *)0x0) goto LAB_03acfa70;
      puVar7 = puVar1 + uVar9 * 6;
      if (1 < uVar9) {
        puVar7 = puVar1;
      }
      uVar6 = uVar16;
      if (*puVar7 <= uVar16) {
        uVar6 = 0;
      }
      puVar7 = *(uint **)(*(long *)(puVar7 + 2) + (ulong)uVar6 * 8);
      uVar6 = puVar7[4];
      if (0 < (int)uVar6) {
        pfVar12 = *(float **)(puVar7 + 2);
        uVar8 = 0;
        fVar30 = (param_2[1] * pfVar12[1] + *pfVar12 * *param_2 + pfVar12[2] * param_2[2]) -
                 param_2[3];
        do {
          fVar20 = *param_2;
          fVar21 = param_2[1];
          uVar15 = uVar8;
          if (*puVar7 <= uVar8) {
            uVar15 = 0;
          }
          uVar8 = uVar8 + 1;
          fVar23 = param_2[2];
          fVar22 = param_2[3];
          iVar3 = 0;
          if (uVar6 != 0) {
            iVar3 = (int)uVar8 / (int)uVar6;
          }
          uVar2 = uVar8 - iVar3 * uVar6;
          if (*puVar7 <= uVar2) {
            uVar2 = 0;
          }
          pfVar12 = (float *)(*(long *)(puVar7 + 2) + (ulong)uVar2 * 0xc);
          fVar26 = *pfVar12;
          fVar25 = pfVar12[1];
          fVar27 = pfVar12[2];
          fVar19 = (fVar21 * fVar25 + fVar26 * fVar20 + fVar27 * fVar23) - fVar22;
          if ((0.0 < fVar30) && (0.0 < fVar19)) goto LAB_03acf82c;
          if ((0.0 < fVar30) || (0.0 < fVar19)) {
            pfVar14 = (float *)(*(long *)(puVar7 + 2) + (ulong)uVar15 * 0xc);
            if ((0.0 < fVar30) && (fVar19 <= 0.0)) {
              fVar24 = *pfVar14;
              fVar28 = pfVar14[1];
              fVar29 = pfVar14[2];
              fVar30 = fVar21 * (fVar25 - fVar28) + (fVar26 - fVar24) * fVar20 +
                       (fVar27 - fVar29) * fVar23;
              if (fVar30 != 0.0) {
                fVar30 = -((fVar21 * fVar28 + fVar24 * fVar20 + fVar29 * fVar23) - fVar22) / fVar30;
                bVar4 = false;
                bVar5 = true;
                if (0.0 <= fVar30) {
                  bVar4 = false;
                  bVar5 = true;
                  if (!NAN(fVar30)) {
                    bVar4 = fVar30 == 1.0;
                    bVar5 = 1.0 <= fVar30;
                  }
                }
                if (!bVar5 || bVar4) {
                  uVar6 = puVar17[4];
                  puVar17[4] = uVar6 + 1;
                  fVar24 = fVar24 + (fVar26 - fVar24) * fVar30;
                  fVar28 = fVar28 + (fVar25 - fVar28) * fVar30;
                  fVar29 = fVar29 + (fVar27 - fVar29) * fVar30;
                  if (*puVar17 <= uVar6) {
                    uVar6 = 0;
                  }
                  pfVar14 = (float *)(*(long *)(puVar17 + 2) + (long)(int)uVar6 * 0xc);
                  *pfVar14 = fVar24;
                  pfVar14[1] = fVar28;
                  pfVar14[2] = fVar29;
                  uVar6 = puVar18[4];
                  puVar18[4] = uVar6 + 1;
                  if (*puVar18 <= uVar6) {
                    uVar6 = 0;
                  }
                  pfVar14 = (float *)(*(long *)(puVar18 + 2) + (long)(int)uVar6 * 0xc);
                  *pfVar14 = fVar24;
                  pfVar14[1] = fVar28;
                  pfVar14[2] = fVar29;
                }
              }
              goto LAB_03acf7f0;
            }
            if ((fVar30 <= 0.0) && (0.0 < fVar19)) {
              fVar24 = *pfVar14;
              fVar28 = pfVar14[1];
              fVar30 = pfVar14[2];
              fVar29 = fVar21 * (fVar25 - fVar28) + (fVar26 - fVar24) * fVar20 +
                       (fVar27 - fVar30) * fVar23;
              if (fVar29 == 0.0) goto LAB_03acf82c;
              fVar29 = -((fVar21 * fVar28 + fVar24 * fVar20 + fVar30 * fVar23) - fVar22) / fVar29;
              bVar4 = false;
              bVar5 = true;
              if (0.0 <= fVar29) {
                bVar4 = false;
                bVar5 = true;
                if (!NAN(fVar29)) {
                  bVar4 = fVar29 == 1.0;
                  bVar5 = 1.0 <= fVar29;
                }
              }
              if (bVar5 && !bVar4) goto LAB_03acf82c;
              uVar6 = puVar17[4];
              puVar17[4] = uVar6 + 1;
              fVar24 = fVar24 + (fVar26 - fVar24) * fVar29;
              fVar28 = fVar28 + (fVar25 - fVar28) * fVar29;
              fVar30 = fVar30 + (fVar27 - fVar30) * fVar29;
              if (*puVar17 <= uVar6) {
                uVar6 = 0;
              }
              pfVar12 = (float *)(*(long *)(puVar17 + 2) + (long)(int)uVar6 * 0xc);
              *pfVar12 = fVar24;
              pfVar12[1] = fVar28;
              pfVar12[2] = fVar30;
              uVar6 = puVar18[4];
              puVar18[4] = uVar6 + 1;
              if (*puVar18 <= uVar6) {
                uVar6 = 0;
              }
              pfVar14 = (float *)(*(long *)(puVar18 + 2) + (long)(int)uVar6 * 0xc);
              *pfVar14 = fVar24;
              pfVar14[1] = fVar28;
              goto LAB_03acf824;
            }
          }
          else {
LAB_03acf7f0:
            uVar6 = puVar17[4];
            puVar17[4] = uVar6 + 1;
            if (*puVar17 <= uVar6) {
              uVar6 = 0;
            }
            pfVar14 = (float *)(*(long *)(puVar17 + 2) + (long)(int)uVar6 * 0xc);
            *pfVar14 = *pfVar12;
            pfVar14[1] = pfVar12[1];
            fVar30 = pfVar12[2];
LAB_03acf824:
            pfVar14[2] = fVar30;
            uVar6 = puVar7[4];
          }
LAB_03acf82c:
          fVar30 = fVar19;
        } while ((int)uVar8 < (int)uVar6);
        uVar9 = (ulong)param_1[0x12];
      }
      if (puVar17[4] == 0) {
        uVar6 = ~(uint)uVar9 & 1;
        puVar1[(ulong)uVar6 * 6 + 4] = puVar1[(ulong)uVar6 * 6 + 4] - 1;
        param_1[4] = param_1[4] - 1;
      }
      uVar16 = uVar16 + 1;
      puVar18 = puVar1 + uVar9 * 6;
      if (1 < uVar9) {
        puVar18 = puVar1;
      }
    } while ((int)uVar16 < (int)puVar18[4]);
    uVar6 = param_1[4];
LAB_03acfa70:
    uVar16 = (uint)uVar9;
    if (2 < (int)uVar6) {
LAB_03acfa84:
      uVar16 = ~uVar16 & 1;
      do {
        uVar8 = uVar6;
        uVar6 = uVar8 - 1;
        if (uVar6 == 0 || (int)uVar8 < 1) {
          param_1[4] = 1;
          goto LAB_03acfbec;
        }
        uVar15 = uVar6;
        if (*param_1 <= uVar6) {
          uVar15 = 0;
        }
      } while (*(int *)(*(long *)(*(long *)(param_1 + 2) + (ulong)uVar15 * 8) + 0x10) != 2);
      param_1[4] = uVar8;
      if (2 < uVar8) {
        puVar18 = puVar1 + (ulong)uVar16 * 6 + 4;
        uVar6 = *puVar18;
        if ((int)uVar6 < 0x10) {
          if (puVar1[(ulong)uVar16 * 6] <= uVar6) {
            uVar6 = 0;
          }
          puVar17 = *(uint **)(*(long *)(puVar1 + (ulong)uVar16 * 6 + 2) + (long)(int)uVar6 * 8);
          memset(*(void **)(puVar17 + 2),0,(ulong)(*puVar17 * 0xc));
          puVar17[4] = 0;
          uVar6 = *param_1;
          lVar10 = *(long *)(param_1 + 2);
          *puVar18 = *puVar18 + 1;
          uVar16 = param_1[4] - 1;
          if (uVar6 <= uVar16) {
            uVar16 = 0;
          }
          puVar18 = *(uint **)(lVar10 + (long)(int)uVar16 * 8);
          uVar16 = puVar17[4];
          puVar11 = *(undefined4 **)(puVar18 + 2);
          puVar17[4] = uVar16 + 1;
          if (*puVar17 <= uVar16) {
            uVar16 = 0;
          }
          puVar13 = (undefined4 *)(*(long *)(puVar17 + 2) + (long)(int)uVar16 * 0xc);
          *puVar13 = *puVar11;
          puVar13[1] = puVar11[1];
          puVar13[2] = puVar11[2];
          puVar11 = (undefined4 *)(*(long *)(puVar18 + 2) + (ulong)(1 < *puVar18) * 0xc);
          uVar16 = puVar17[4];
          puVar17[4] = uVar16 + 1;
          if (*puVar17 <= uVar16) {
            uVar16 = 0;
          }
          puVar13 = (undefined4 *)(*(long *)(puVar17 + 2) + (long)(int)uVar16 * 0xc);
          *puVar13 = *puVar11;
          puVar13[1] = puVar11[1];
          puVar13[2] = puVar11[2];
          uVar16 = param_1[4];
          uVar6 = uVar16 - 1;
          param_1[4] = uVar6;
          if (1 < (int)uVar16) {
            uVar8 = *param_1;
            do {
              uVar15 = uVar6 + 1;
              uVar2 = puVar17[4] - 1;
              fVar30 = (float)param_1[0x2c];
              fVar20 = -fVar30;
              if (*puVar17 <= uVar2) {
                uVar2 = 0;
              }
              pfVar12 = (float *)(*(long *)(puVar17 + 2) + (long)(int)uVar2 * 0xc);
              lVar10 = *(long *)(param_1 + 2);
              do {
                uVar2 = uVar15 - 2;
                if (uVar8 <= uVar2) {
                  uVar2 = 0;
                }
                puVar18 = *(uint **)(lVar10 + (ulong)uVar2 * 8);
                if (puVar18[4] == 2) {
                  pfVar14 = *(float **)(puVar18 + 2);
                  fVar21 = *pfVar14 - *pfVar12;
                  bVar4 = false;
                  bVar5 = true;
                  if (fVar20 <= fVar21) {
                    bVar4 = false;
                    bVar5 = true;
                    if (!NAN(fVar21) && !NAN(fVar30)) {
                      bVar4 = fVar21 == fVar30;
                      bVar5 = fVar30 <= fVar21;
                    }
                  }
                  if (!bVar5 || bVar4) {
                    fVar21 = pfVar14[1] - pfVar12[1];
                    bVar4 = false;
                    bVar5 = true;
                    if (fVar20 <= fVar21) {
                      bVar4 = false;
                      bVar5 = true;
                      if (!NAN(fVar21) && !NAN(fVar30)) {
                        bVar4 = fVar21 == fVar30;
                        bVar5 = fVar30 <= fVar21;
                      }
                    }
                    if (bVar5 && !bVar4) goto LAB_03acfd6c;
                    fVar21 = pfVar14[2] - pfVar12[2];
                    bVar4 = false;
                    bVar5 = true;
                    if (fVar20 <= fVar21) {
                      bVar4 = false;
                      bVar5 = true;
                      if (!NAN(fVar21) && !NAN(fVar30)) {
                        bVar4 = fVar21 == fVar30;
                        bVar5 = fVar30 <= fVar21;
                      }
                    }
                    if (bVar5 && !bVar4) goto LAB_03acfd6c;
                    uVar6 = 1;
LAB_03acfc18:
                    uVar16 = uVar16 - 2;
                    uVar15 = uVar16;
                    if (uVar8 <= uVar16) {
                      uVar15 = 0;
                    }
                    *(undefined8 *)(lVar10 + (ulong)uVar2 * 8) =
                         *(undefined8 *)(lVar10 + (ulong)uVar15 * 8);
                    if (*param_1 <= uVar16) {
                      uVar16 = 0;
                    }
                    *(uint **)(*(long *)(param_1 + 2) + (ulong)uVar16 * 8) = puVar18;
                    uVar16 = param_1[4] - 1;
                    if (*param_1 <= uVar16) {
                      uVar16 = 0;
                    }
                    puVar18 = *(uint **)(*(long *)(param_1 + 2) + (long)(int)uVar16 * 8);
                    if (*puVar18 <= uVar6) {
                      uVar6 = 0;
                    }
                    puVar11 = (undefined4 *)(*(long *)(puVar18 + 2) + (ulong)uVar6 * 0xc);
                    uVar16 = puVar17[4];
                    puVar17[4] = uVar16 + 1;
                    if (*puVar17 <= uVar16) {
                      uVar16 = 0;
                    }
                    puVar13 = (undefined4 *)(*(long *)(puVar17 + 2) + (long)(int)uVar16 * 0xc);
                    *puVar13 = *puVar11;
                    puVar13[1] = puVar11[1];
                    puVar13[2] = puVar11[2];
                    uVar8 = *param_1;
                    uVar6 = param_1[4];
                    break;
                  }
LAB_03acfd6c:
                  pfVar14 = pfVar14 + (ulong)(1 < *puVar18) * 3;
                  fVar21 = *pfVar14 - *pfVar12;
                  bVar4 = false;
                  bVar5 = true;
                  if (fVar20 <= fVar21) {
                    bVar4 = false;
                    bVar5 = true;
                    if (!NAN(fVar21) && !NAN(fVar30)) {
                      bVar4 = fVar21 == fVar30;
                      bVar5 = fVar30 <= fVar21;
                    }
                  }
                  if (!bVar5 || bVar4) {
                    fVar21 = pfVar14[1] - pfVar12[1];
                    bVar4 = false;
                    bVar5 = true;
                    if (fVar20 <= fVar21) {
                      bVar4 = false;
                      bVar5 = true;
                      if (!NAN(fVar21) && !NAN(fVar30)) {
                        bVar4 = fVar21 == fVar30;
                        bVar5 = fVar30 <= fVar21;
                      }
                    }
                    if (!bVar5 || bVar4) {
                      fVar21 = pfVar14[2] - pfVar12[2];
                      bVar4 = false;
                      bVar5 = true;
                      if (fVar20 <= fVar21) {
                        bVar4 = false;
                        bVar5 = true;
                        if (!NAN(fVar21) && !NAN(fVar30)) {
                          bVar4 = fVar21 == fVar30;
                          bVar5 = fVar30 <= fVar21;
                        }
                      }
                      if (!bVar5 || bVar4) {
                        uVar6 = 0;
                        goto LAB_03acfc18;
                      }
                    }
                  }
                }
                uVar15 = uVar15 - 1;
              } while (1 < uVar15);
              uVar16 = uVar6;
              uVar6 = uVar16 - 1;
              param_1[4] = uVar6;
            } while (uVar6 != 0 && 0 < (int)uVar16);
          }
          puVar17[4] = puVar17[4] - 1;
          uVar16 = param_1[0x12] & 1;
          param_1[0x12] = uVar16 ^ 1;
        }
      }
      goto LAB_03acfbec;
    }
  }
  uVar16 = ~uVar16 & 1;
LAB_03acfbec:
  puVar1[(ulong)uVar16 * 6 + 4] = 0;
  return;
}

