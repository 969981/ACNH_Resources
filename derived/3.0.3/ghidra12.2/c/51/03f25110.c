
/* WARNING: Removing unreachable block (ram,0x03f257ec) */
/* WARNING: Removing unreachable block (ram,0x03f25788) */
/* WARNING: Removing unreachable block (ram,0x03f251d4) */
/* WARNING: Removing unreachable block (ram,0x03f251f0) */
/* WARNING: Removing unreachable block (ram,0x03f257b8) */
/* WARNING: Removing unreachable block (ram,0x03f25870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03f25110(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,float *param_5,
                 float *param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long local_d0;
  long *local_c0;
  
  plVar10 = (long *)PTR_DAT_04bc3ee8;
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bc3ee8;
  if (lVar6 == 0) {
    lVar9 = *(long *)(param_1 + 0x18);
    lVar11 = 0;
    local_d0 = _DAT_00000038;
LAB_03f251bc:
    bVar4 = false;
    plVar13 = *(long **)(lVar9 + 0x60);
    local_c0 = *(long **)(lVar9 + 0x78);
  }
  else {
    lVar11 = *(long *)(lVar6 + 0x38);
    lVar9 = *(long *)(param_1 + 0x18);
    local_d0 = *(long *)(lVar11 + 0x38);
    if ((lVar9 != 0) || (lVar9 = *(long *)(*(long *)(lVar6 + 0x28) + 0x88), lVar9 != 0))
    goto LAB_03f251bc;
    plVar13 = (long *)0x0;
    bVar4 = true;
    local_c0 = (long *)0x0;
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  fVar23 = 0.0;
  if (*(int *)(local_d0 + 0x1c) <= (int)uVar3) {
    uVar3 = 0;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + 8);
  if ((((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 8), lVar6 != 0)) &&
      (*(long *)(lVar6 + 0x10) != 0)) && (uVar5 = *(uint *)(lVar6 + 8), uVar5 != 0)) {
    uVar12 = uVar3;
    if (-1 < (int)*(uint *)(lVar6 + 0x18)) {
      uVar12 = *(uint *)(lVar6 + 0x18);
    }
    if ((int)uVar5 <= (int)uVar12) {
      uVar12 = 0;
    }
    if ((uVar12 < uVar5) &&
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar12 * 8), lVar6 != 0)) {
      fVar23 = *(float *)(lVar6 + 0x1c);
    }
  }
  if (param_6 != (float *)0x0) {
    *param_6 = 0.0;
  }
  uVar5 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar5) {
    uVar12 = 0;
    fVar22 = 3.4028235e+38;
    do {
      lVar6 = *(long *)(param_1 + 0x38);
      uVar2 = uVar12;
      if (uVar5 <= uVar12) {
        uVar2 = 0;
      }
      if (*(char *)(lVar6 + (ulong)uVar2 * 0x14) != '\0') {
        uVar5 = *(uint *)(param_1 + 0x50);
        fVar18 = *(float *)(lVar6 + (ulong)uVar2 * 0x14 + 0x10);
        fVar14 = SQRT(fVar18);
        if (NAN(fVar14)) {
          fVar14 = sqrtf(fVar18);
          plVar10 = (long *)PTR_DAT_04bc3ee8;
        }
        lVar6 = lVar6 + (ulong)uVar2 * 0x14;
        fVar18 = *(float *)(lVar6 + 4);
        fVar19 = *(float *)(lVar6 + 0xc);
        fVar18 = SQRT(fVar19 * fVar19 + fVar18 * fVar18);
        fVar14 = fVar14 / *(float *)(*(long *)(*plVar10 + 0x10) + 0x20);
        if (bVar4) {
          fVar15 = 0.0;
          fVar19 = 1.0;
          if (fVar14 <= fVar22) {
            fVar22 = fVar14;
          }
        }
        else {
          if (*(char *)(lVar9 + 0x98) != '\0' || *(char *)(param_1 + 0x28) != '\0') {
            fVar19 = (float)FUN_03baa634(*(long *)(param_1 + 0x10) + 0x60);
            fVar14 = fVar14 * fVar19;
            fVar18 = fVar18 * fVar19;
          }
          if (fVar14 <= fVar22) {
            fVar22 = fVar14;
          }
          if (plVar13 == (long *)0x0) {
            fVar19 = 1.0;
            fVar15 = 1.0;
            lVar6 = *(long *)(lVar9 + 0x90);
            if (lVar6 != 0) {
              fVar20 = *(float *)(lVar6 + 0x50);
              fVar19 = 1.0;
              fVar15 = 1.0;
              if (0.0 < fVar20) {
                fVar19 = 0.0;
                fVar15 = 1.0;
                if (fVar14 < fVar20) {
                  fVar21 = *(float *)(lVar6 + 0x54);
                  fVar19 = 1.0;
                  fVar15 = 1.0;
                  if (0.0 < fVar21) {
                    fVar19 = 1.0;
                    fVar15 = 1.0;
                    if (fVar20 - fVar21 < fVar14) {
                      fVar15 = 1.0;
                      fVar21 = (fVar14 - (fVar20 - fVar21)) / fVar21;
                      goto LAB_03f25548;
                    }
                  }
                }
              }
            }
          }
          else {
            fVar15 = (float)(**(code **)(*plVar13 + 0x28))(fVar14,plVar13);
            lVar6 = *(long *)(lVar9 + 0x90);
            fVar20 = (float)(**(code **)(*plVar13 + 0x30))(plVar13);
            if (lVar6 == 0) {
              fVar21 = 0.0;
              if (fVar14 < fVar20) {
                fVar21 = 1.0;
              }
              fVar19 = 1.0;
              if (0.0 < fVar20) {
                fVar19 = fVar21;
              }
            }
            else {
              if (fVar20 == 0.0) {
                fVar20 = *(float *)(lVar6 + 0x50);
                if (0.0 < fVar20) {
                  fVar19 = 0.0;
                  if (fVar20 <= fVar14) goto LAB_03f25558;
                  fVar21 = *(float *)(lVar6 + 0x54);
                  if ((0.0 < fVar21) && (fVar20 - fVar21 < fVar14)) {
                    fVar21 = (fVar14 - (fVar20 - fVar21)) / fVar21;
                    goto LAB_03f25548;
                  }
                }
              }
              else {
                fVar21 = *(float *)(lVar6 + 0x54);
                fVar20 = fVar20 + fVar21;
                if (0.0 < fVar20) {
                  fVar19 = 0.0;
                  if (fVar14 < fVar20) {
                    if ((fVar21 <= 0.0) || (fVar14 <= fVar20 - fVar21)) goto LAB_03f25554;
                    fVar21 = (fVar14 - (fVar20 - fVar21)) / fVar21;
LAB_03f25548:
                    fVar19 = (1.0 - fVar21) * (1.0 - fVar21);
                  }
                  goto LAB_03f25558;
                }
              }
LAB_03f25554:
              fVar19 = 1.0;
            }
          }
LAB_03f25558:
          fVar19 = fVar19 * fVar15;
          if (local_c0 == (long *)0x0) {
            fVar15 = 0.0;
          }
          else {
            fVar15 = (float)(**(code **)(*local_c0 + 0x28))(fVar14);
          }
          plVar10 = &DAT_05aebb78;
        }
        if (param_6 != (float *)0x0) {
          fVar14 = fVar19;
          if (fVar19 <= *param_6) {
            fVar14 = *param_6;
          }
          *param_6 = fVar14;
        }
        if ((*(byte *)(lVar11 + 0x58) & 1) != 0) {
          fVar14 = *(float *)(*(long *)(lVar11 + 0x48) + (long)(int)uVar3 * 4);
          if (fVar14 == 0.0) {
            fVar20 = 0.0;
            fVar15 = 0.0;
            fVar21 = fVar19 * 180.285;
            fVar18 = 0.0;
            fVar14 = fVar21;
          }
          else {
            fVar15 = fVar15 + *(float *)(param_1 + 0x24);
            fVar20 = 0.0;
            if (fVar18 < fVar14) {
              fVar20 = fVar18 / fVar14;
              if (fVar15 < 0.0) {
                fVar20 = 1.0;
                if (0.0 < fVar15 + 1.0) {
                  fVar20 = (fVar18 / fVar14) / (fVar15 + 1.0);
                }
                fVar15 = 0.0;
              }
              fVar20 = 1.0 - fVar20;
            }
            uVar5 = uVar12 << (ulong)(uVar5 & 0x1f);
            if (fVar20 <= fVar15) {
              fVar20 = fVar15;
            }
            fVar14 = fVar23 + (1.0 - fVar23) * fVar20;
            if (fVar23 <= 0.0) {
              fVar14 = fVar20;
            }
            fVar18 = 1.0;
            if (fVar14 <= 1.0) {
              fVar18 = fVar14;
            }
            fVar15 = 0.0;
            if (0.0 <= fVar14) {
              fVar15 = fVar18;
            }
            if (fVar15 == 0.0) {
              uVar2 = uVar3;
              if (**(uint **)(local_d0 + 8) <= uVar3) {
                uVar2 = 0;
              }
              puVar7 = (uint *)(*(long *)(*(uint **)(local_d0 + 8) + 2) + (long)(int)uVar2 * 0x300);
            }
            else {
              uVar2 = uVar3;
              if (**(uint **)(local_d0 + 8) <= uVar3) {
                uVar2 = 0;
              }
              puVar8 = (uint *)(*(long *)(*(uint **)(local_d0 + 8) + 2) + (long)(int)uVar2 * 0x300);
              puVar7 = puVar8 + (ulong)(uint)(int)(fVar15 * 47.0) * 4;
              if (0x2f < (uint)(int)(fVar15 * 47.0)) {
                puVar7 = puVar8;
              }
            }
            if (*puVar7 <= uVar5) {
              uVar5 = 0;
            }
            pbVar1 = (byte *)(*(long *)(puVar7 + 2) + (long)(int)uVar5 + (long)(int)uVar5 * 4);
            fVar18 = fVar19 * (float)pbVar1[4];
            fVar15 = fVar19 * (float)pbVar1[3];
            fVar20 = fVar19 * (float)pbVar1[2];
            fVar21 = fVar19 * (float)pbVar1[1];
            fVar14 = fVar19 * (float)*pbVar1;
          }
          fVar19 = **(float **)(param_2 + 8);
          if (fVar19 <= fVar14) {
            fVar19 = fVar14;
          }
          **(float **)(param_2 + 8) = fVar19;
          fVar14 = *(float *)(*(long *)(param_2 + 8) + 4);
          if (fVar14 <= fVar21) {
            fVar14 = fVar21;
          }
          *(float *)(*(long *)(param_2 + 8) + 4) = fVar14;
          fVar14 = *(float *)(*(long *)(param_2 + 8) + 8);
          if (fVar14 <= fVar20) {
            fVar14 = fVar20;
          }
          *(float *)(*(long *)(param_2 + 8) + 8) = fVar14;
          fVar14 = *(float *)(*(long *)(param_2 + 8) + 0xc);
          if (fVar14 <= fVar15) {
            fVar14 = fVar15;
          }
          *(float *)(*(long *)(param_2 + 8) + 0xc) = fVar14;
          fVar14 = *(float *)(*(long *)(param_2 + 8) + 0x10);
          if (fVar14 <= fVar18) {
            fVar14 = fVar18;
          }
          *(float *)(*(long *)(param_2 + 8) + 0x10) = fVar14;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x30);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar5);
    if ((lVar9 != 0) && (fVar22 != 3.4028235e+38)) {
      uVar17 = 0;
      uVar16 = 0;
      if (*(long **)(lVar9 + 0x68) != (long *)0x0) {
        uVar16 = (**(code **)(**(long **)(lVar9 + 0x68) + 0x28))(fVar22);
      }
      *param_3 = uVar16;
      if (*(long **)(lVar9 + 0x70) != (long *)0x0) {
        uVar17 = (**(code **)(**(long **)(lVar9 + 0x70) + 0x28))(fVar22);
      }
      *param_4 = uVar17;
      if (*(long **)(lVar9 + 0x80) == (long *)0x0) {
        fVar23 = 1.0;
      }
      else {
        fVar23 = (float)(**(code **)(**(long **)(lVar9 + 0x80) + 0x28))(fVar22);
      }
      *param_5 = fVar23;
      lVar6 = *(long *)(lVar9 + 0x90);
      if (lVar6 == 0) {
        return;
      }
      if (*(char *)(lVar6 + 0x58) == '\0') {
        return;
      }
      if ((*(long **)(lVar9 + 0x60) == (long *)0x0) ||
         (fVar14 = (float)(**(code **)(**(long **)(lVar9 + 0x60) + 0x30))(), fVar14 == 0.0)) {
        fVar14 = *(float *)(lVar6 + 0x50);
        if (fVar14 <= 0.0) {
LAB_03f258d4:
          fVar23 = 1.0;
        }
        else {
          fVar23 = 0.0;
          if (fVar22 < fVar14) {
            fVar18 = *(float *)(lVar6 + 0x54);
            if (fVar18 <= 0.0) goto LAB_03f258d4;
            fVar23 = 1.0;
            if (fVar14 - fVar18 < fVar22) {
              fVar18 = (fVar22 - (fVar14 - fVar18)) / fVar18;
              goto LAB_03f25920;
            }
          }
        }
      }
      else {
        fVar18 = *(float *)(lVar6 + 0x54);
        fVar14 = fVar14 + fVar18;
        if (fVar14 <= 0.0) {
LAB_03f2592c:
          fVar23 = 1.0;
        }
        else {
          fVar23 = 0.0;
          if (fVar22 < fVar14) {
            if (fVar18 <= 0.0) goto LAB_03f2592c;
            fVar23 = 1.0;
            if (fVar14 - fVar18 < fVar22) {
              fVar18 = (fVar22 - (fVar14 - fVar18)) / fVar18;
LAB_03f25920:
              fVar23 = (1.0 - fVar18) * (1.0 - fVar18);
            }
          }
        }
      }
      fVar23 = fVar23 * *param_5;
      goto LAB_03f25818;
    }
  }
  fVar23 = 0.0;
  *param_3 = 0;
  *param_4 = 0;
LAB_03f25818:
  *param_5 = fVar23;
  return;
}

