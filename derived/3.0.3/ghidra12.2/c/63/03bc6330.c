
/* WARNING: Removing unreachable block (ram,0x03bc6b68) */
/* WARNING: Removing unreachable block (ram,0x03bc6ae4) */
/* WARNING: Removing unreachable block (ram,0x03bc63dc) */
/* WARNING: Removing unreachable block (ram,0x03bc63f8) */
/* WARNING: Removing unreachable block (ram,0x03bc6b24) */
/* WARNING: Removing unreachable block (ram,0x03bc6bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03bc6330(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,float *param_5
                 ,long param_6,uint param_7,float *param_8)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  float *pfVar12;
  uint *puVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  uint unaff_w27;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s12;
  
  lVar8 = *(long *)PTR_DAT_04bc3ee8;
  if (lVar8 == 0) {
    lVar6 = *(long *)(param_1 + 4);
    lVar17 = 0;
    puVar16 = _DAT_00000038;
LAB_03bc63c8:
    plVar14 = *(long **)(lVar6 + 0x60);
    plVar4 = *(long **)(lVar6 + 0x78);
  }
  else {
    lVar17 = *(long *)(lVar8 + 0x38);
    puVar16 = *(uint **)(lVar17 + 0x38);
    lVar6 = *(long *)(param_1 + 4);
    if (lVar6 != 0) goto LAB_03bc63c8;
    lVar6 = *(long *)(*(long *)(lVar8 + 0x28) + 0x88);
    *(long *)(param_1 + 4) = lVar6;
    if (lVar6 != 0) goto LAB_03bc63c8;
    plVar14 = (long *)0x0;
    plVar4 = (long *)0x0;
  }
  if (param_8 != (float *)0x0) {
    *param_8 = 0.0;
  }
  puVar13 = param_1 + 4;
  if (0 < (int)param_7) {
    uVar5 = 0;
    lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 8);
    do {
      unaff_s12 = 0.0;
      unaff_w27 = param_1[7];
      if ((int)puVar16[(long)(int)uVar5 + 7] <= (int)param_1[7]) {
        unaff_w27 = 0;
      }
      if ((((lVar8 != 0) && (lVar6 = *(long *)(lVar8 + 8), lVar6 != 0)) &&
          (*(long *)(lVar6 + 0x10) != 0)) && (uVar15 = *(uint *)(lVar6 + 8), uVar15 != 0)) {
        uVar2 = unaff_w27;
        if (-1 < (int)*(uint *)(lVar6 + 0x18)) {
          uVar2 = *(uint *)(lVar6 + 0x18);
        }
        if ((int)uVar15 <= (int)uVar2) {
          uVar2 = 0;
        }
        if ((uVar2 < uVar15) &&
           (lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar2 * 8), lVar6 != 0)) {
          unaff_s12 = *(float *)(lVar6 + 0x1c);
        }
      }
      uVar5 = uVar5 + 1;
    } while (param_7 != uVar5);
  }
  uVar5 = *param_1;
  if (0 < (int)uVar5) {
    fVar27 = 3.4028235e+38;
    uVar15 = 0;
    do {
      uVar2 = uVar15;
      if (uVar5 <= uVar15) {
        uVar2 = 0;
      }
      lVar8 = *(long *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 8);
      if (*(char *)(lVar8 + 0x14) != '\0') {
        fVar29 = SQRT(*(float *)(lVar8 + 0xc));
        if (NAN(fVar29)) {
          fVar29 = sqrtf(*(float *)(lVar8 + 0xc));
        }
        fVar28 = SQRT(*(float *)(lVar8 + 0x10));
        if (NAN(fVar28)) {
          fVar28 = sqrtf(*(float *)(lVar8 + 0x10));
        }
        lVar6 = *(long *)puVar13;
        fVar29 = fVar29 / *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x20);
        if (lVar6 == 0) {
          fVar21 = 0.0;
          fVar18 = 1.0;
          if (fVar29 <= fVar27) {
            fVar27 = fVar29;
          }
        }
        else {
          if (*(char *)(lVar6 + 0x98) == '\0' && (char)param_1[9] == '\0') {
            if (fVar29 <= fVar27) {
              fVar27 = fVar29;
            }
          }
          else {
            fVar18 = (float)FUN_03baa634(param_6 + 0x60,lVar8);
            fVar29 = fVar29 * fVar18;
            lVar6 = *(long *)puVar13;
            if (fVar29 <= fVar27) {
              fVar27 = fVar29;
            }
            if (lVar6 == 0) {
              fVar21 = 0.0;
              fVar18 = 1.0;
              goto joined_r0x03bc6624;
            }
          }
          if (plVar14 == (long *)0x0) {
            lVar8 = *(long *)(lVar6 + 0x90);
            fVar21 = 1.0;
            fVar18 = 1.0;
            if (lVar8 != 0) {
              fVar19 = *(float *)(lVar8 + 0x50);
              fVar21 = 1.0;
              fVar18 = 1.0;
              if (0.0 < fVar19) {
                fVar21 = 0.0;
                fVar18 = 1.0;
                if (fVar29 < fVar19) {
                  fVar20 = *(float *)(lVar8 + 0x54);
                  fVar21 = 1.0;
                  fVar18 = 1.0;
                  if (0.0 < fVar20) {
                    fVar21 = 1.0;
                    fVar18 = 1.0;
                    if (fVar19 - fVar20 < fVar29) {
                      fVar18 = 1.0;
                      fVar20 = (fVar29 - (fVar19 - fVar20)) / fVar20;
                      goto LAB_03bc675c;
                    }
                  }
                }
              }
            }
            goto LAB_03bc6790;
          }
          fVar18 = (float)(**(code **)(*plVar14 + 0x28))(fVar29,plVar14);
          lVar8 = *(long *)(*(long *)puVar13 + 0x90);
          fVar19 = (float)(**(code **)(*plVar14 + 0x30))(plVar14);
          if (lVar8 == 0) {
            fVar21 = 0.0;
            if (fVar29 < fVar19) {
              fVar21 = 1.0;
            }
            fVar20 = 1.0;
            if (0.0 < fVar19) {
              fVar20 = fVar21;
            }
            fVar18 = fVar20 * fVar18;
          }
          else {
            if (fVar19 == 0.0) {
              fVar19 = *(float *)(lVar8 + 0x50);
              if (0.0 < fVar19) {
                fVar21 = 0.0;
                if (fVar29 < fVar19) {
                  fVar20 = *(float *)(lVar8 + 0x54);
                  if (fVar20 <= 0.0) goto LAB_03bc6770;
                  if (fVar19 - fVar20 < fVar29) {
                    fVar20 = (fVar29 - (fVar19 - fVar20)) / fVar20;
                    goto LAB_03bc675c;
                  }
                  fVar21 = 1.0;
                }
LAB_03bc6790:
                fVar18 = fVar21 * fVar18;
                goto joined_r0x03bc66f8;
              }
            }
            else {
              fVar20 = *(float *)(lVar8 + 0x54);
              fVar19 = fVar19 + fVar20;
              if (0.0 < fVar19) {
                fVar21 = 0.0;
                if (fVar19 <= fVar29) goto LAB_03bc6790;
                if ((0.0 < fVar20) && (fVar19 - fVar20 < fVar29)) {
                  fVar20 = (fVar29 - (fVar19 - fVar20)) / fVar20;
LAB_03bc675c:
                  fVar18 = (1.0 - fVar20) * (1.0 - fVar20) * fVar18;
                  goto joined_r0x03bc66f8;
                }
              }
            }
LAB_03bc6770:
            fVar18 = fVar18 * 1.0;
          }
joined_r0x03bc66f8:
          if (plVar4 == (long *)0x0) {
            fVar21 = 0.0;
          }
          else {
            fVar21 = (float)(**(code **)(*plVar4 + 0x28))(fVar29);
          }
        }
joined_r0x03bc6624:
        if (param_8 != (float *)0x0) {
          fVar29 = fVar18;
          if (fVar18 <= *param_8) {
            fVar29 = *param_8;
          }
          *param_8 = fVar29;
        }
        if (0 < (int)param_7) {
          uVar7 = 0;
          do {
            uVar5 = (uint)uVar7;
            if ((*(byte *)(lVar17 + 0x58) >> (ulong)(uVar5 & 0x1f) & 1) != 0) {
              fVar25 = 0.0;
              fVar29 = 0.0;
              fVar24 = 0.0;
              fVar26 = *(float *)(*(long *)(lVar17 + 0x48) + (long)(int)unaff_w27 * 4);
              fVar19 = fVar18 * 180.285;
              fVar20 = fVar18 * 180.285;
              if (fVar26 != 0.0) {
                fVar19 = fVar21 + (float)param_1[8];
                if (fVar28 < fVar26) {
                  fVar29 = fVar28 / fVar26;
                  if (fVar19 < 0.0) {
                    fVar29 = 1.0;
                    if (0.0 < fVar19 + 1.0) {
                      fVar29 = (fVar28 / fVar26) / (fVar19 + 1.0);
                    }
                    fVar19 = 0.0;
                  }
                  fVar29 = 1.0 - fVar29;
                }
                if (fVar29 <= fVar19) {
                  fVar29 = fVar19;
                }
                fVar19 = unaff_s12 + (1.0 - unaff_s12) * fVar29;
                if (unaff_s12 <= 0.0) {
                  fVar19 = fVar29;
                }
                fVar29 = 1.0;
                if (fVar19 <= 1.0) {
                  fVar29 = fVar19;
                }
                fVar20 = 0.0;
                if (0.0 <= fVar19) {
                  fVar20 = fVar29;
                }
                if (fVar20 == 0.0) {
                  if (*puVar16 <= uVar5) {
                    uVar5 = 0;
                  }
                  puVar9 = (uint *)(*(long *)(puVar16 + 2) + (long)(int)uVar5 * 0x10);
                  uVar5 = unaff_w27;
                  if (*puVar9 <= unaff_w27) {
                    uVar5 = 0;
                  }
                  puVar9 = (uint *)(*(long *)(puVar9 + 2) + (long)(int)uVar5 * 0x300);
                }
                else {
                  if (*puVar16 <= uVar5) {
                    uVar5 = 0;
                  }
                  puVar9 = (uint *)(*(long *)(puVar16 + 2) + (long)(int)uVar5 * 0x10);
                  uVar5 = unaff_w27;
                  if (*puVar9 <= unaff_w27) {
                    uVar5 = 0;
                  }
                  puVar11 = (uint *)(*(long *)(puVar9 + 2) + (long)(int)uVar5 * 0x300);
                  puVar9 = puVar11 + (ulong)(uint)(int)(fVar20 * 47.0) * 4;
                  if (0x2f < (uint)(int)(fVar20 * 47.0)) {
                    puVar9 = puVar11;
                  }
                }
                uVar5 = uVar15;
                if (*puVar9 <= uVar15) {
                  uVar5 = 0;
                }
                pbVar1 = (byte *)(*(long *)(puVar9 + 2) + (ulong)uVar5 * 5);
                fVar20 = fVar18 * (float)*pbVar1;
                fVar24 = fVar18 * (float)pbVar1[4];
                fVar29 = fVar18 * (float)pbVar1[3];
                fVar25 = fVar18 * (float)pbVar1[2];
                fVar19 = fVar18 * (float)pbVar1[1];
              }
              uVar10 = (ulong)*param_2;
              lVar8 = *(long *)(param_2 + 2);
              uVar3 = uVar7;
              if (uVar10 <= uVar7) {
                uVar3 = 0;
              }
              pfVar12 = (float *)(lVar8 + uVar3 * 0x18);
              if (*pfVar12 < fVar20) {
                *pfVar12 = fVar20;
                uVar10 = (ulong)*param_2;
                lVar8 = *(long *)(param_2 + 2);
              }
              uVar3 = uVar7;
              if (uVar10 <= uVar7) {
                uVar3 = 0;
              }
              lVar6 = lVar8 + uVar3 * 0x18;
              if (*(float *)(lVar6 + 4) < fVar19) {
                *(float *)(lVar6 + 4) = fVar19;
                uVar10 = (ulong)*param_2;
                lVar8 = *(long *)(param_2 + 2);
              }
              uVar3 = uVar7;
              if (uVar10 <= uVar7) {
                uVar3 = 0;
              }
              pfVar12 = (float *)(lVar8 + uVar3 * 0x18 + 8);
              if (*pfVar12 < fVar25) {
                *pfVar12 = fVar25;
                uVar10 = (ulong)*param_2;
                lVar8 = *(long *)(param_2 + 2);
              }
              uVar3 = uVar7;
              if (uVar10 <= uVar7) {
                uVar3 = 0;
              }
              lVar6 = lVar8 + uVar3 * 0x18;
              if (*(float *)(lVar6 + 0xc) < fVar29) {
                *(float *)(lVar6 + 0xc) = fVar29;
                uVar10 = (ulong)*param_2;
                lVar8 = *(long *)(param_2 + 2);
              }
              uVar3 = uVar7;
              if (uVar10 <= uVar7) {
                uVar3 = 0;
              }
              pfVar12 = (float *)(lVar8 + uVar3 * 0x18 + 0x10);
              if (*pfVar12 < fVar24) {
                *pfVar12 = fVar24;
              }
            }
            uVar7 = uVar7 + 1;
          } while (param_7 != uVar7);
        }
      }
      uVar5 = *param_1;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar5);
    if ((fVar27 != 3.4028235e+38) && (*(long *)puVar13 != 0)) {
      uVar23 = 0;
      uVar22 = 0;
      plVar4 = *(long **)(*(long *)puVar13 + 0x68);
      if (plVar4 != (long *)0x0) {
        uVar22 = (**(code **)(*plVar4 + 0x28))(fVar27);
      }
      *param_3 = uVar22;
      if (*(long **)(*(long *)puVar13 + 0x70) != (long *)0x0) {
        uVar23 = (**(code **)(**(long **)(*(long *)puVar13 + 0x70) + 0x28))(fVar27);
      }
      *param_4 = uVar23;
      if (*(long **)(*(long *)puVar13 + 0x80) == (long *)0x0) {
        fVar29 = 1.0;
      }
      else {
        fVar29 = (float)(**(code **)(**(long **)(*(long *)puVar13 + 0x80) + 0x28))(fVar27);
      }
      *param_5 = fVar29;
      lVar8 = *(long *)(*(long *)puVar13 + 0x90);
      if (lVar8 == 0) {
        return;
      }
      if (*(char *)(lVar8 + 0x58) == '\0') {
        return;
      }
      plVar4 = *(long **)(*(long *)puVar13 + 0x60);
      if ((plVar4 == (long *)0x0) ||
         (fVar28 = (float)(**(code **)(*plVar4 + 0x30))(), fVar28 == 0.0)) {
        fVar28 = *(float *)(lVar8 + 0x50);
        if (fVar28 <= 0.0) {
LAB_03bc6c20:
          fVar29 = 1.0;
        }
        else {
          fVar29 = 0.0;
          if (fVar27 < fVar28) {
            fVar18 = *(float *)(lVar8 + 0x54);
            if (fVar18 <= 0.0) goto LAB_03bc6c20;
            fVar29 = 1.0;
            if (fVar28 - fVar18 < fVar27) {
              fVar18 = (fVar27 - (fVar28 - fVar18)) / fVar18;
              goto LAB_03bc6c6c;
            }
          }
        }
      }
      else {
        fVar18 = *(float *)(lVar8 + 0x54);
        fVar28 = fVar28 + fVar18;
        if (fVar28 <= 0.0) {
LAB_03bc6c78:
          fVar29 = 1.0;
        }
        else {
          fVar29 = 0.0;
          if (fVar27 < fVar28) {
            if (fVar18 <= 0.0) goto LAB_03bc6c78;
            fVar29 = 1.0;
            if (fVar28 - fVar18 < fVar27) {
              fVar18 = (fVar27 - (fVar28 - fVar18)) / fVar18;
LAB_03bc6c6c:
              fVar29 = (1.0 - fVar18) * (1.0 - fVar18);
            }
          }
        }
      }
      fVar29 = fVar29 * *param_5;
      goto LAB_03bc6a88;
    }
  }
  *param_3 = 0;
  fVar29 = 0.0;
  *param_4 = 0;
LAB_03bc6a88:
  *param_5 = fVar29;
  return;
}

