
/* WARNING: Removing unreachable block (ram,0x02a07e14) */

void FUN_02a07990(long param_1,long param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  float fVar8;
  long *plVar9;
  char cVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulong local_c0;
  long lStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  
  fVar38 = 0.0;
  lVar16 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x38);
  piVar14 = *(int **)(*(long *)PTR_DAT_04bc3ee8 + 0x10);
  lVar18 = *(long *)(lVar16 + 0x38);
  bVar6 = *(byte *)(lVar16 + 0x58);
  uVar4 = *(uint *)(param_1 + 0x38);
  if (*(int *)(lVar18 + 0x1c) <= (int)uVar4) {
    uVar4 = 0;
  }
  fVar37 = *(float *)(*(long *)(lVar16 + 0x48) + (long)(int)uVar4 * 4);
  lVar16 = *(long *)(piVar14 + 2);
  if ((((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 8), lVar16 != 0)) &&
      (*(long *)(lVar16 + 0x10) != 0)) && (uVar17 = *(uint *)(lVar16 + 8), uVar17 != 0)) {
    uVar19 = uVar4;
    if (-1 < (int)*(uint *)(lVar16 + 0x18)) {
      uVar19 = *(uint *)(lVar16 + 0x18);
    }
    if ((int)uVar17 <= (int)uVar19) {
      uVar19 = 0;
    }
    if ((uVar19 < uVar17) &&
       (lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar19 * 8), lVar16 != 0)) {
      fVar38 = *(float *)(lVar16 + 0x1c);
    }
  }
  local_c0 = local_c0 & 0xffffffff00000000;
  iVar5 = *piVar14;
  if (param_7 != (float *)0x0) {
    *param_7 = 0.0;
  }
  uVar19 = *(uint *)(param_1 + 0x148c);
  uVar17 = uVar19;
  if (0x7f < uVar19) {
    uVar17 = 0x80;
  }
  if (uVar17 == 0) {
    fVar29 = 0.0;
    fVar34 = 0.5;
    fVar35 = 0.0;
    fVar30 = 0.0;
    fVar38 = 0.0;
    *(float *)(param_1 + 0x1480) = 0.0 / (float)(int)uVar19;
  }
  else {
    fVar34 = 0.5;
    fVar36 = 0.0;
    fVar20 = 0.0;
    fVar39 = 0.0;
    fVar33 = 0.0;
    fVar31 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    uVar19 = 0;
    fVar30 = 0.0;
    fVar35 = 0.0;
    lVar16 = param_1 + 0x80;
    pcVar1 = (char *)(param_1 + 0x149e);
    do {
      uVar7 = uVar19 + 0x1f;
      if (-1 < (int)uVar19) {
        uVar7 = uVar19;
      }
      uVar11 = (ulong)(uint)((int)uVar7 >> 5);
      if (3 < (uint)((int)uVar7 >> 5)) {
        uVar11 = 0;
      }
      if ((*(uint *)(param_1 + 0x70 + uVar11 * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0) {
        lVar12 = lVar16 + (long)(int)uVar19 * 0x28;
        fVar32 = *(float *)(lVar12 + 4);
        fVar23 = *(float *)(lVar12 + 0x20);
        if (fVar32 <= fVar20) {
          if (fVar20 == fVar32) {
            if (param_7 != (float *)0x0) {
              *param_7 = fVar32;
            }
            lVar12 = lVar16 + (long)(int)uVar19 * 0x28;
            fVar26 = *(float *)(lVar12 + 0xc);
            fVar24 = *(float *)(lVar12 + 0x10);
            if (fVar26 <= fVar30) {
              fVar30 = fVar26;
            }
            if (fVar24 <= fVar35) {
              fVar35 = fVar24;
            }
            cVar10 = '\0';
            if (*pcVar1 != '\0') {
              lVar12 = lVar16 + (long)(int)uVar19 * 0x28;
              fVar20 = *(float *)(lVar12 + 0x14);
              if (fVar20 <= fVar29) {
                fVar29 = fVar20;
              }
              fVar20 = *(float *)(lVar12 + 0x1c);
              cVar10 = '\x01';
              if (fVar34 <= fVar20) {
                fVar34 = fVar20;
              }
            }
            goto LAB_02a07ca8;
          }
          lVar12 = lVar16 + (long)(int)uVar19 * 0x28;
          fVar26 = *(float *)(lVar12 + 0xc);
          fVar24 = *(float *)(lVar12 + 0x10);
          cVar10 = *pcVar1;
        }
        else {
          if (param_7 != (float *)0x0) {
            *param_7 = fVar32;
          }
          lVar12 = lVar16 + (long)(int)uVar19 * 0x28;
          fVar30 = *(float *)(lVar12 + 0xc);
          fVar35 = *(float *)(lVar12 + 0x10);
          fVar26 = fVar30;
          fVar24 = fVar35;
          if (*pcVar1 == '\0') {
            cVar10 = '\0';
          }
          else {
            lVar12 = lVar16 + (long)(int)uVar19 * 0x28;
            cVar10 = '\x01';
            fVar29 = *(float *)(lVar12 + 0x14);
            fVar34 = *(float *)(lVar12 + 0x1c);
          }
LAB_02a07ca8:
          fVar20 = fVar32;
        }
        fVar21 = *(float *)(lVar16 + (long)(int)uVar19 * 0x28);
        fVar25 = fVar21 - fVar28;
        fVar22 = -fVar25;
        if (0.0 <= fVar25) {
          fVar22 = fVar25;
        }
        fVar27 = (fVar21 + -6.2831855) - fVar28;
        fVar25 = -fVar27;
        if (0.0 <= fVar27) {
          fVar25 = fVar27;
        }
        fVar28 = (fVar21 + 6.2831855) - fVar28;
        fVar27 = -fVar28;
        if (0.0 <= fVar28) {
          fVar27 = fVar28;
        }
        fVar8 = fVar21 + -6.2831855;
        if (fVar22 <= fVar25) {
          fVar8 = fVar21;
          fVar25 = fVar22;
        }
        fVar28 = fVar21 + 6.2831855;
        if (fVar25 <= fVar27) {
          fVar28 = fVar8;
        }
        if (cVar10 == '\0') {
          fVar22 = 0.0;
          if (*(long *)(param_1 + 0x28) != 0) {
            local_c0 = CONCAT44(local_c0._4_4_,3);
            plVar9 = *(long **)(*(long *)(param_1 + 0x28) + 0x78);
            if (plVar9 != (long *)0x0) {
              fVar22 = (float)(**(code **)(*plVar9 + 0x28))(fVar23 / 10.0);
            }
          }
        }
        else {
          fVar22 = *(float *)(lVar16 + (long)(int)uVar19 * 0x28 + 0x18);
        }
        fVar21 = *(float *)(lVar16 + (long)(int)uVar19 * 0x28 + 0x24);
        fVar23 = SQRT(fVar21);
        if (NAN(fVar23)) {
          fVar23 = sqrtf(fVar21);
        }
        fVar31 = fVar31 + fVar32 * fVar28;
        fVar39 = fVar39 + fVar32 * fVar26;
        fVar33 = fVar33 + fVar32 * fVar24;
        fVar36 = fVar36 + fVar32;
        if ((bVar6 & 1) != 0) {
          if (fVar37 == 0.0 || iVar5 == 0) {
            fVar22 = 0.0;
            fVar24 = 0.0;
            fVar21 = fVar32 * 180.285;
            fVar26 = 0.0;
            fVar23 = fVar21;
          }
          else {
            fVar22 = fVar22 + *(float *)(param_1 + 0x3c);
            fVar26 = 0.0;
            if (fVar23 < fVar37) {
              fVar26 = fVar23 / fVar37;
              if (fVar22 < 0.0) {
                fVar26 = 1.0;
                if (0.0 < fVar22 + 1.0) {
                  fVar26 = (fVar23 / fVar37) / (fVar22 + 1.0);
                }
                fVar22 = 0.0;
              }
              fVar26 = 1.0 - fVar26;
            }
            if (fVar26 <= fVar22) {
              fVar26 = fVar22;
            }
            uVar7 = uVar19 << (ulong)(*(uint *)(param_1 + 0x1498) & 0x1f);
            fVar23 = fVar38 + (1.0 - fVar38) * fVar26;
            if (fVar38 <= 0.0) {
              fVar23 = fVar26;
            }
            fVar26 = 1.0;
            if (fVar23 <= 1.0) {
              fVar26 = fVar23;
            }
            fVar24 = 0.0;
            if (0.0 <= fVar23) {
              fVar24 = fVar26;
            }
            if (fVar24 == 0.0) {
              uVar3 = uVar4;
              if (**(uint **)(lVar18 + 8) <= uVar4) {
                uVar3 = 0;
              }
              puVar13 = (uint *)(*(long *)(*(uint **)(lVar18 + 8) + 2) + (long)(int)uVar3 * 0x300);
            }
            else {
              uVar3 = uVar4;
              if (**(uint **)(lVar18 + 8) <= uVar4) {
                uVar3 = 0;
              }
              puVar15 = (uint *)(*(long *)(*(uint **)(lVar18 + 8) + 2) + (long)(int)uVar3 * 0x300);
              puVar13 = puVar15 + (ulong)(uint)(int)(fVar24 * 47.0) * 4;
              if (0x2f < (uint)(int)(fVar24 * 47.0)) {
                puVar13 = puVar15;
              }
            }
            local_c0 = local_c0 & 0xffffffff00000000;
            if (*puVar13 <= uVar7) {
              uVar7 = 0;
            }
            pbVar2 = (byte *)(*(long *)(puVar13 + 2) + (long)(int)uVar7 + (long)(int)uVar7 * 4);
            fVar26 = fVar32 * (float)pbVar2[4];
            fVar24 = fVar32 * (float)pbVar2[3];
            fVar22 = fVar32 * (float)pbVar2[2];
            fVar21 = fVar32 * (float)pbVar2[1];
            fVar23 = fVar32 * (float)*pbVar2;
          }
          fVar32 = **(float **)(param_2 + 8);
          if (fVar32 <= fVar23) {
            fVar32 = fVar23;
          }
          **(float **)(param_2 + 8) = fVar32;
          fVar23 = *(float *)(*(long *)(param_2 + 8) + 4);
          if (fVar23 <= fVar21) {
            fVar23 = fVar21;
          }
          *(float *)(*(long *)(param_2 + 8) + 4) = fVar23;
          fVar23 = *(float *)(*(long *)(param_2 + 8) + 8);
          if (fVar23 <= fVar22) {
            fVar23 = fVar22;
          }
          *(float *)(*(long *)(param_2 + 8) + 8) = fVar23;
          fVar23 = *(float *)(*(long *)(param_2 + 8) + 0xc);
          if (fVar23 <= fVar24) {
            fVar23 = fVar24;
          }
          *(float *)(*(long *)(param_2 + 8) + 0xc) = fVar23;
          fVar23 = *(float *)(*(long *)(param_2 + 8) + 0x10);
          if (fVar23 <= fVar26) {
            fVar23 = fVar26;
          }
          *(float *)(*(long *)(param_2 + 8) + 0x10) = fVar23;
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar17 != uVar19);
    fVar38 = 0.0;
    *(float *)(param_1 + 0x1480) = fVar36 / (float)*(int *)(param_1 + 0x148c);
    if (0.0 < fVar36) {
      fVar38 = fVar31 / fVar36;
      fVar30 = fVar39 / fVar36;
      fVar35 = fVar33 / fVar36;
    }
  }
  *param_4 = fVar30;
  *param_5 = fVar35;
  if (*(char *)(param_1 + 0x149e) == '\0') {
    local_ac = *(undefined4 *)(param_1 + 0x5c);
    local_b0 = 0;
    local_c0 = 0;
    lStack_b8 = (ulong)*(uint *)(param_1 + 0x54) << 0x20;
    FUN_02a08108(param_3,0,0,0,param_6,*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30),&local_c0);
  }
  else {
    *param_3 = fVar29;
    *param_6 = fVar34;
  }
  fVar37 = 6.2831855;
  if (0.0 <= fVar38) {
    if (fVar38 < 6.2831855) goto LAB_02a080d4;
    fVar37 = -6.2831855;
  }
  fVar38 = fVar38 + fVar37;
LAB_02a080d4:
  *param_8 = fVar38;
  return;
}

