
/* WARNING: Removing unreachable block (ram,0x03441d5c) */
/* WARNING: Removing unreachable block (ram,0x03441d68) */
/* WARNING: Removing unreachable block (ram,0x03441cc0) */
/* WARNING: Removing unreachable block (ram,0x03441d6c) */
/* WARNING: Removing unreachable block (ram,0x03441dbc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_03441520(long *param_1,long param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  float *pfVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  float *pfVar23;
  long *plVar24;
  float **ppfVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  float **ppfVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 local_1e0;
  float **local_1d8;
  undefined8 **local_1d0;
  float *local_1c8;
  float local_1c0 [4];
  undefined8 *local_1b0;
  float local_1a8;
  undefined8 *local_1a0 [2];
  undefined8 local_190 [2];
  float *local_180;
  undefined8 **local_178;
  undefined8 **local_170;
  undefined8 **local_168;
  float *local_160 [26];
  undefined4 local_88 [2];
  
  fVar31 = 0.0;
  iVar11 = *(int *)((long)param_1 + 0x14);
  if ((long *)param_1[1] == param_1) {
LAB_03441680:
    fVar32 = 0.0;
  }
  else {
    lVar12 = (long)iVar11;
    lVar15 = param_1[1] - lVar12;
    do {
      *(undefined8 *)(lVar15 + 0x48) = 0;
      *(undefined8 *)(lVar15 + 0x50) = 0;
      lVar15 = *(long *)(lVar15 + lVar12 + 8) - lVar12;
    } while (lVar15 != (long)param_1 - lVar12);
    iVar11 = *(int *)((long)param_1 + 0x14);
    if ((long *)param_1[1] == param_1) goto LAB_03441680;
    lVar12 = (long)iVar11;
    lVar15 = param_1[1] - lVar12;
    fVar32 = 3.4028235e+38;
    fVar33 = -3.4028235e+38;
    fVar31 = 3.4028235e+38;
    fVar34 = -3.4028235e+38;
    do {
      *(undefined8 *)(lVar15 + 100) = 0;
      lVar30 = (long)*(int *)((long)param_1 + 0x14);
      plVar13 = *(long **)(lVar15 + lVar30 + 8);
      fVar35 = *(float *)(lVar15 + 0x98);
      if (fVar31 <= *(float *)(lVar15 + 0x98)) {
        fVar35 = fVar31;
      }
      fVar31 = fVar35;
      fVar35 = *(float *)(lVar15 + 0x9c);
      if (fVar32 <= *(float *)(lVar15 + 0x9c)) {
        fVar35 = fVar32;
      }
      fVar32 = fVar35;
      fVar35 = *(float *)(lVar15 + 0xa0);
      if (*(float *)(lVar15 + 0xa0) <= fVar34) {
        fVar35 = fVar34;
      }
      fVar34 = fVar35;
      fVar35 = *(float *)(lVar15 + 0xa4);
      if (*(float *)(lVar15 + 0xa4) <= fVar33) {
        fVar35 = fVar33;
      }
      fVar33 = fVar35;
      if (plVar13 != param_1) {
        lVar26 = (long)plVar13 - lVar30;
        do {
          FUN_03453d78(param_3,lVar15,lVar26);
          lVar26 = *(long *)(lVar26 + lVar30 + 8) - lVar30;
        } while (lVar26 != (long)param_1 - lVar30);
      }
      lVar15 = *(long *)(lVar15 + lVar12 + 8) - lVar12;
    } while ((long)param_1 - lVar12 != lVar15);
    fVar31 = fVar31 + fVar34;
    fVar32 = fVar32 + fVar33;
    iVar11 = *(int *)((long)param_1 + 0x14);
  }
  iVar14 = (int)param_1[2];
  if (iVar14 < 2) {
LAB_03441850:
    if (0 < iVar14) goto LAB_03441858;
    plVar13 = (long *)0x0;
  }
  else {
    if (*(long **)(param_1[1] + 8) != param_1) {
      fVar31 = fVar31 * 0.5;
      fVar32 = fVar32 * 0.5;
      lVar15 = (long)-iVar11;
      plVar13 = *(long **)(param_1[1] + 8);
      do {
        plVar16 = (long *)*plVar13;
        iVar14 = *(int *)((long)plVar13 + lVar15 + 0x48);
        iVar2 = *(int *)((long)plVar13 + lVar15 + 0x58);
        iVar1 = *(int *)((long)plVar13 + lVar15 + 0x54);
        iVar11 = *(int *)((long)plVar13 + lVar15 + 0x50) + *(int *)((long)plVar13 + lVar15 + 0x4c);
        iVar3 = ((iVar11 - (*(int *)((long)plVar16 + lVar15 + 0x48) +
                            *(int *)((long)plVar16 + lVar15 + 0x4c) +
                           *(int *)((long)plVar16 + lVar15 + 0x50) +
                           *(int *)((long)plVar16 + lVar15 + 0x54))) +
                iVar14 + iVar1 + *(int *)((long)plVar16 + lVar15 + 0x58)) - iVar2;
        if (iVar3 == 0) {
          fVar34 = fVar32 - *(float *)((long)plVar16 + lVar15 + 0x60);
          fVar33 = fVar31 - *(float *)((long)plVar16 + lVar15 + 0x5c);
          fVar36 = fVar32 - *(float *)((long)plVar13 + lVar15 + 0x60);
          fVar35 = fVar31 - *(float *)((long)plVar13 + lVar15 + 0x5c);
          fVar33 = SQRT(fVar34 * fVar34 + fVar33 * fVar33);
          fVar34 = SQRT(fVar36 * fVar36 + fVar35 * fVar35);
          iVar7 = -1;
          if ((fVar34 <= fVar33) && (iVar7 = 1, fVar33 == fVar34)) goto LAB_03441760;
        }
        else {
LAB_03441760:
          iVar7 = iVar3;
        }
        plVar18 = (long *)plVar13[1];
        if (0 < iVar7) {
          plVar24 = plVar16;
          do {
            plVar24 = (long *)*plVar24;
            if (plVar24 == param_1) {
              plVar24 = param_1;
              break;
            }
            iVar3 = (((iVar11 + iVar14 + iVar1) - *(int *)((long)plVar24 + lVar15 + 0x54)) -
                    (iVar2 + *(int *)((long)plVar24 + lVar15 + 0x48) +
                    *(int *)((long)plVar24 + lVar15 + 0x4c) +
                    *(int *)((long)plVar24 + lVar15 + 0x50))) +
                    *(int *)((long)plVar24 + lVar15 + 0x58);
            if (iVar3 == 0) {
              fVar34 = fVar32 - *(float *)((long)plVar24 + lVar15 + 0x60);
              fVar33 = fVar31 - *(float *)((long)plVar24 + lVar15 + 0x5c);
              fVar36 = fVar32 - *(float *)((long)plVar13 + lVar15 + 0x60);
              fVar35 = fVar31 - *(float *)((long)plVar13 + lVar15 + 0x5c);
              fVar33 = SQRT(fVar34 * fVar34 + fVar33 * fVar33);
              fVar34 = SQRT(fVar36 * fVar36 + fVar35 * fVar35);
              iVar7 = -1;
              if ((fVar34 <= fVar33) && (iVar7 = 1, fVar33 == fVar34)) goto LAB_034417c0;
            }
            else {
LAB_034417c0:
              iVar7 = iVar3;
            }
          } while (0 < iVar7);
          plVar21 = plVar18;
          if (plVar16 != (long *)0x0) {
            plVar16[1] = (long)plVar18;
            plVar21 = (long *)plVar13[1];
          }
          if (plVar21 != (long *)0x0) {
            *plVar21 = *plVar13;
          }
          *plVar13 = 0;
          plVar13[1] = 0;
          puVar17 = (undefined8 *)plVar24[1];
          plVar24[1] = (long)plVar13;
          *plVar13 = (long)plVar24;
          plVar13[1] = (long)puVar17;
          if (puVar17 != (undefined8 *)0x0) {
            *puVar17 = plVar13;
          }
        }
        plVar13 = plVar18;
      } while (plVar18 != param_1);
      iVar14 = (int)param_1[2];
      goto LAB_03441850;
    }
LAB_03441858:
    plVar13 = (long *)param_1[1];
    if (*plVar13 != 0) {
      *(long *)(*plVar13 + 8) = plVar13[1];
    }
    if ((long *)plVar13[1] != (long *)0x0) {
      *(long *)plVar13[1] = *plVar13;
    }
    *plVar13 = 0;
    plVar13[1] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  local_1e0 = local_1e0 & 0xffffffff00000000;
  lVar15 = 0;
  if (plVar13 != (long *)0x0) {
    lVar15 = (long)plVar13 - (long)*(int *)((long)param_1 + 0x14);
  }
  local_160[0]._0_4_ = 0x7fffffff;
  local_88[0] = 0x7fffffff;
  *(undefined8 *)(lVar15 + 100) = 0;
  if ((long *)param_1[1] == param_1) {
    return 0;
  }
  lVar30 = (long)*(int *)((long)param_1 + 0x14);
  uVar27 = 0;
  lVar12 = param_1[1] - lVar30;
  do {
    uVar8 = FUN_03453eb0(param_3,local_160,&local_1e0,local_88,lVar15,lVar12,param_2);
    uVar27 = uVar8 | uVar27;
    lVar12 = *(long *)(lVar12 + lVar30 + 8) - lVar30;
  } while (lVar12 != (long)param_1 - lVar30);
  if ((uVar27 & 1) == 0) {
    return 0;
  }
  FUN_03442940(local_160,lVar15);
  fVar33 = *(float *)(lVar15 + 100);
  fVar32 = *(float *)(lVar15 + 0x68);
  fVar35 = fVar32 + *(float *)(lVar15 + 0x9c);
  fVar38 = fVar32 + *(float *)(lVar15 + 0xa4);
  fVar34 = fVar33 + *(float *)(lVar15 + 0x98);
  fVar36 = fVar33 + *(float *)(lVar15 + 0xa0);
  *(float *)(lVar15 + 0x98) = fVar34;
  *(float *)(lVar15 + 0x9c) = fVar35;
  *(float *)(lVar15 + 0xa0) = fVar36;
  *(float *)(lVar15 + 0xa4) = fVar38;
  fVar37 = *(float *)(lVar15 + 0xac);
  fVar31 = fVar37;
  if (NAN(fVar37)) {
    fVar31 = 0.0;
  }
  fVar39 = *(float *)(lVar15 + 0xb0);
  if (NAN(fVar37)) {
    fVar39 = 0.0;
  }
  *(float *)(lVar15 + 0x5c) = fVar31 + (float)(int)((fVar34 + fVar36) * 0.5);
  *(float *)(lVar15 + 0x60) = fVar39 + (float)(int)((fVar35 + fVar38) * 0.5);
  if (0.0 <= fVar33) {
    if (0.0 < fVar33) {
      uVar27 = 0x10;
      goto LAB_034419a4;
    }
  }
  else {
    uVar27 = 0x20;
LAB_034419a4:
    *(uint *)(lVar15 + 0x30) = *(uint *)(lVar15 + 0x30) | uVar27;
  }
  if (0.0 <= fVar32) {
    if (0.0 < fVar32) {
      uVar27 = 4;
      goto LAB_034419c8;
    }
  }
  else {
    uVar27 = 8;
LAB_034419c8:
    *(uint *)(lVar15 + 0x30) = *(uint *)(lVar15 + 0x30) | uVar27;
  }
  *(int *)(lVar15 + 0x58) = *(int *)(lVar15 + 0x58) + 1;
  if (*(long *)(param_2 + 8) != param_2) {
    lVar30 = (long)*(int *)(param_2 + 0x14);
    lVar12 = *(long *)(param_2 + 8) - lVar30;
    do {
      *(undefined4 *)(lVar12 + 0x58) = 0;
      lVar12 = *(long *)(lVar12 + lVar30 + 8) - lVar30;
    } while (lVar12 != param_2 - *(int *)(param_2 + 0x14));
  }
  *(undefined8 *)(lVar15 + 0x48) = 0;
  *(undefined8 *)(lVar15 + 0x50) = 0;
  fVar31 = 0.0;
  if ((long *)param_1[1] == param_1) {
LAB_03441af8:
    fVar34 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
  }
  else {
    lVar30 = (long)*(int *)((long)param_1 + 0x14);
    lVar12 = param_1[1] - lVar30;
    do {
      *(undefined8 *)(lVar12 + 0x48) = 0;
      *(undefined8 *)(lVar12 + 0x50) = 0;
      lVar12 = *(long *)(lVar12 + lVar30 + 8) - lVar30;
    } while (lVar12 != (long)param_1 - lVar30);
    if ((long *)param_1[1] == param_1) goto LAB_03441af8;
    lVar30 = (long)*(int *)((long)param_1 + 0x14);
    lVar12 = param_1[1] - lVar30;
    do {
      FUN_03453d78(param_3,lVar12,lVar15);
      lVar26 = (long)*(int *)((long)param_1 + 0x14);
      plVar13 = *(long **)(lVar12 + lVar26 + 8);
      if (plVar13 != param_1) {
        lVar28 = (long)plVar13 - lVar26;
        do {
          FUN_03453d78(param_3,lVar12,lVar28);
          lVar28 = *(long *)(lVar28 + lVar26 + 8) - lVar26;
        } while (lVar28 != (long)param_1 - lVar26);
      }
      lVar12 = *(long *)(lVar12 + lVar30 + 8) - lVar30;
    } while ((long)param_1 - lVar30 != lVar12);
    fVar34 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
    if ((long *)param_1[1] != param_1) {
      lVar30 = (long)*(int *)((long)param_1 + 0x14);
      fVar31 = 0.0;
      lVar12 = param_1[1] - lVar30;
      fVar32 = 0.0;
      do {
        uVar9 = FUN_0345466c(param_3,&local_1e0,lVar12,local_160,param_2,1);
        if ((uVar9 & 1) == 0) {
          fVar35 = (float)local_1e0;
          if (fVar31 <= (float)local_1e0) {
            fVar35 = fVar31;
          }
          fVar31 = fVar35;
          fVar35 = local_1e0._4_4_;
          if (fVar34 <= local_1e0._4_4_) {
            fVar35 = fVar34;
          }
          fVar34 = fVar35;
          fVar35 = (float)local_1e0;
          if ((float)local_1e0 <= fVar32) {
            fVar35 = fVar32;
          }
          fVar32 = fVar35;
          if (fVar33 < local_1e0._4_4_) {
            fVar33 = local_1e0._4_4_;
          }
        }
        lVar12 = *(long *)(lVar12 + lVar30 + 8) - lVar30;
      } while ((long)param_1 - lVar30 != lVar12);
    }
  }
  if ((0.0 < fVar32 - fVar31) || (0.0 < fVar33 - fVar34)) {
    local_190[0] = 0;
    local_1a0[0] = local_190;
    local_1c8 = local_1c0;
    ppfVar29 = &local_180;
    if (ppfVar29 != (float **)0x0) {
      local_1c0[1] = 0.0;
      local_1c0[2] = fVar31 * fVar31 + 0.0;
      local_1d0 = &local_1b0;
      if (&local_1b0 != (undefined8 **)0x0) {
        local_1d0 = local_1a0;
      }
      ppuVar4 = local_1d0;
      local_1a8 = fVar32 * fVar32 + 0.0;
      local_1b0 = (undefined8 *)0x0;
      local_178 = &local_1b0;
      if (local_1d0 != (undefined8 **)0x0) {
        local_1d0 = (undefined8 **)*local_1d0;
      }
      ppuVar5 = local_1d0;
      local_180 = local_1c8;
      *(undefined4 *)ppuVar4 = 0;
      *(float *)((long)ppuVar4 + 4) = fVar34;
      *(float *)(ppuVar4 + 1) = fVar34 * fVar34;
      local_170 = ppuVar4;
      local_1e0._4_4_ = 5.60519e-45;
      if (local_1d0 != (undefined8 **)0x0) {
        local_1d0 = (undefined8 **)*local_1d0;
      }
      *(undefined4 *)ppuVar5 = 0;
      *(float *)((long)ppuVar5 + 4) = fVar33;
      *(float *)(ppuVar5 + 1) = fVar33 * fVar33;
      local_168 = ppuVar5;
      local_1e0._0_4_ = 5.60519e-45;
      uVar8 = 0;
      uVar27 = 3;
      do {
        if ((int)uVar27 <= (int)uVar8) break;
        pfVar19 = ppfVar29[uVar8];
        uVar9 = (ulong)uVar8;
        if ((uVar27 - uVar8 & 1) == 0) {
          pfVar23 = pfVar19;
          uVar20 = uVar9;
        }
        else {
          uVar20 = uVar9 + 1;
          pfVar23 = ppfVar29[uVar20];
          if (pfVar23[2] < pfVar19[2]) {
            ppfVar29[uVar20] = pfVar19;
            ppfVar29[uVar9] = pfVar23;
            pfVar23 = pfVar19;
          }
        }
        uVar22 = (ulong)uVar27;
        uVar27 = uVar8;
        if (~uVar9 + uVar22 != 0) {
          ppfVar25 = &local_180 + uVar20 + 1;
          do {
            pfVar19 = *ppfVar25;
            if (pfVar23[2] <= pfVar19[2]) {
              pfVar23 = pfVar19;
            }
            else {
              ppfVar25[-1] = pfVar19;
              *ppfVar25 = pfVar23;
              uVar27 = (uint)uVar20;
            }
            pfVar19 = ppfVar25[1];
            if (pfVar19[2] < pfVar23[2]) {
              uVar27 = (uint)uVar20 + 1;
              *ppfVar25 = pfVar19;
              ppfVar25[1] = pfVar23;
            }
            else {
              pfVar23 = pfVar19;
            }
            uVar20 = uVar20 + 2;
            ppfVar25 = ppfVar25 + 2;
          } while (uVar22 != uVar20);
        }
        if ((int)uVar27 <= (int)uVar8) break;
        pfVar19 = ppfVar29[uVar27];
        uVar20 = (ulong)uVar27;
        uVar8 = uVar27;
        do {
          pfVar23 = (&local_180)[uVar20 - 1];
          if (pfVar19[2] < pfVar23[2]) {
            uVar8 = (uint)uVar20;
            (&local_180)[uVar20 - 1] = pfVar19;
            ppfVar29[uVar20] = pfVar23;
          }
          else {
            pfVar19 = pfVar23;
          }
          uVar20 = uVar20 - 1;
        } while ((long)uVar9 < (long)uVar20);
      } while (uVar8 != uVar27);
      local_1d8 = ppfVar29;
      local_1c0[0] = fVar31;
      do {
        pfVar19 = *ppfVar29;
        if (0.0 < pfVar19[2]) {
          if ((*pfVar19 == 0.0) && (pfVar19[1] == 0.0)) {
LAB_03442394:
            if (*(long *)(param_2 + 8) == param_2) goto LAB_03441b1c;
            lVar30 = (long)*(int *)(param_2 + 0x14);
            lVar12 = *(long *)(param_2 + 8) - lVar30;
            goto LAB_034423c8;
          }
          fVar35 = *(float *)(lVar15 + 0x98);
          fVar36 = *(float *)(lVar15 + 0x9c);
          *(float *)(lVar15 + 0x78) = fVar36;
          fVar33 = *(float *)(lVar15 + 0xa0);
          fVar34 = *(float *)(lVar15 + 0xa4);
          *(float *)(lVar15 + 0x80) = fVar34;
          *(float *)(lVar15 + 0x74) = fVar35;
          *(float *)(lVar15 + 0x7c) = fVar33;
          fVar37 = fVar36 + pfVar19[1];
          fVar31 = fVar35 + *pfVar19;
          fVar32 = fVar33 + *pfVar19;
          fVar38 = fVar34 + pfVar19[1];
          *(float *)(lVar15 + 0x9c) = fVar37;
          *(float *)(lVar15 + 0x98) = fVar31;
          *(float *)(lVar15 + 0xa0) = fVar32;
          *(float *)(lVar15 + 0xa4) = fVar38;
          fVar39 = *param_3;
          if (fVar39 <= fVar31) {
            fVar39 = param_3[2];
            if (fVar32 <= fVar39) {
              bVar10 = 0;
            }
            else {
              *(float *)(lVar15 + 0xa0) = fVar39;
              bVar10 = 1;
              fVar31 = param_3[2] - (fVar32 - fVar31);
              *(float *)(lVar15 + 0x98) = fVar31;
              fVar32 = fVar39;
            }
          }
          else {
            fVar32 = (fVar32 - fVar31) + fVar39;
            *(float *)(lVar15 + 0x98) = fVar39;
            bVar10 = 1;
            *(float *)(lVar15 + 0xa0) = fVar32;
            fVar31 = fVar39;
          }
          if (param_3[1] <= fVar37) {
            bVar6 = false;
            if (fVar38 <= param_3[3]) {
              bVar6 = (bool)(bVar10 ^ 1);
            }
            if (bVar6) {
              fVar34 = *(float *)(lVar15 + 0xac);
              fVar33 = fVar34;
              if (NAN(fVar34)) {
                fVar33 = 0.0;
              }
              fVar35 = *(float *)(lVar15 + 0xb0);
              if (NAN(fVar34)) {
                fVar35 = 0.0;
              }
              *(float *)(lVar15 + 0x5c) = fVar33 + (float)(int)((fVar31 + fVar32) * 0.5);
              *(float *)(lVar15 + 0x60) = fVar35 + (float)(int)((fVar37 + fVar38) * 0.5);
              FUN_03442808(local_160,lVar15);
              if ((long *)param_1[1] != param_1) {
                lVar30 = (long)*(int *)((long)param_1 + 0x14);
                lVar12 = param_1[1] - lVar30;
                do {
                  *(float *)(lVar12 + 0x78) = *(float *)(lVar12 + 0x9c);
                  *(float *)(lVar12 + 0x80) = *(float *)(lVar12 + 0xa4);
                  *(float *)(lVar12 + 0x74) = *(float *)(lVar12 + 0x98);
                  *(float *)(lVar12 + 0x7c) = *(float *)(lVar12 + 0xa0);
                  fVar33 = *(float *)(lVar12 + 0x98) + *pfVar19;
                  fVar34 = *(float *)(lVar12 + 0x9c) + pfVar19[1];
                  fVar32 = *(float *)(lVar12 + 0xa0) + *pfVar19;
                  fVar31 = *(float *)(lVar12 + 0xa4) + pfVar19[1];
                  *(float *)(lVar12 + 0x98) = fVar33;
                  *(float *)(lVar12 + 0x9c) = fVar34;
                  *(float *)(lVar12 + 0xa0) = fVar32;
                  *(float *)(lVar12 + 0xa4) = fVar31;
                  fVar35 = *param_3;
                  if (fVar35 <= fVar33) {
                    fVar35 = param_3[2];
                    if (fVar35 < fVar32) {
                      *(float *)(lVar12 + 0xa0) = fVar35;
                      fVar33 = param_3[2] - (fVar32 - fVar33);
                      *(float *)(lVar12 + 0x98) = fVar33;
                      fVar32 = fVar35;
                    }
                  }
                  else {
                    fVar32 = (fVar32 - fVar33) + fVar35;
                    *(float *)(lVar12 + 0x98) = fVar35;
                    *(float *)(lVar12 + 0xa0) = fVar32;
                    fVar33 = fVar35;
                  }
                  fVar35 = param_3[1];
                  if (fVar34 < fVar35) {
                    fVar31 = (fVar31 - fVar34) + fVar35;
                    *(float *)(lVar12 + 0x9c) = fVar35;
                    *(float *)(lVar12 + 0xa4) = fVar31;
                  }
                  else {
                    fVar36 = param_3[3];
                    fVar35 = fVar34;
                    if (fVar36 < fVar31) {
                      fVar35 = fVar36 - (fVar31 - fVar34);
                      *(float *)(lVar12 + 0xa4) = fVar36;
                      *(float *)(lVar12 + 0x9c) = fVar35;
                      fVar31 = fVar36;
                    }
                  }
                  fVar37 = *(float *)(lVar12 + 0xac);
                  fVar36 = *(float *)(lVar12 + 0xb0);
                  fVar34 = fVar37;
                  if (NAN(fVar37)) {
                    fVar34 = 0.0;
                  }
                  *(float *)(lVar12 + 0x5c) = fVar34 + (float)(int)((fVar33 + fVar32) * 0.5);
                  if (NAN(fVar37)) {
                    fVar36 = 0.0;
                  }
                  *(float *)(lVar12 + 0x60) = fVar36 + (float)(int)((fVar35 + fVar31) * 0.5);
                  lVar12 = *(long *)(lVar12 + lVar30 + 8) - lVar30;
                } while (lVar12 != (long)param_1 - lVar30);
                if ((long *)param_1[1] != param_1) {
                  lVar30 = (long)*(int *)((long)param_1 + 0x14);
                  lVar12 = param_1[1] - lVar30;
                  while (uVar9 = FUN_0345466c(param_3,local_88,lVar12,local_160,param_2,0),
                        (uVar9 & 1) != 0) {
                    lVar12 = *(long *)(lVar12 + lVar30 + 8) - lVar30;
                    if ((long)param_1 - lVar30 == lVar12) goto LAB_03442394;
                  }
                  *(float *)(lVar15 + 0x98) = *(float *)(lVar15 + 0x74);
                  *(float *)(lVar15 + 0x9c) = *(float *)(lVar15 + 0x78);
                  *(float *)(lVar15 + 0xa0) = *(float *)(lVar15 + 0x7c);
                  *(float *)(lVar15 + 0xa4) = *(float *)(lVar15 + 0x80);
                  fVar32 = *(float *)(lVar15 + 0xac);
                  fVar31 = fVar32;
                  if (NAN(fVar32)) {
                    fVar31 = 0.0;
                  }
                  fVar33 = *(float *)(lVar15 + 0xb0);
                  if (NAN(fVar32)) {
                    fVar33 = 0.0;
                  }
                  *(float *)(lVar15 + 0x5c) =
                       fVar31 + (float)(int)((*(float *)(lVar15 + 0x74) + *(float *)(lVar15 + 0x7c))
                                            * 0.5);
                  *(float *)(lVar15 + 0x60) =
                       fVar33 + (float)(int)((*(float *)(lVar15 + 0x78) + *(float *)(lVar15 + 0x80))
                                            * 0.5);
                  FUN_03442808(local_160,lVar15);
                  if ((long *)param_1[1] != param_1) {
                    lVar30 = (long)*(int *)((long)param_1 + 0x14);
                    lVar12 = param_1[1] - lVar30;
                    do {
                      *(undefined8 *)(lVar12 + 100) = 0;
                      *(float *)(lVar12 + 0x9c) = *(float *)(lVar12 + 0x78);
                      *(float *)(lVar12 + 0xa4) = *(float *)(lVar12 + 0x80);
                      *(float *)(lVar12 + 0x98) = *(float *)(lVar12 + 0x74);
                      *(float *)(lVar12 + 0xa0) = *(float *)(lVar12 + 0x7c);
                      fVar33 = *(float *)(lVar12 + 0xac);
                      fVar32 = *(float *)(lVar12 + 0xb0);
                      fVar31 = fVar33;
                      if (NAN(fVar33)) {
                        fVar31 = 0.0;
                      }
                      *(float *)(lVar12 + 0x5c) =
                           fVar31 + (float)(int)((*(float *)(lVar12 + 0x74) +
                                                 *(float *)(lVar12 + 0x7c)) * 0.5);
                      if (NAN(fVar33)) {
                        fVar32 = 0.0;
                      }
                      *(float *)(lVar12 + 0x60) =
                           fVar32 + (float)(int)((*(float *)(lVar12 + 0x78) +
                                                 *(float *)(lVar12 + 0x80)) * 0.5);
                      lVar12 = *(long *)(lVar12 + lVar30 + 8) - lVar30;
                    } while (lVar12 != (long)param_1 - lVar30);
                  }
                  goto LAB_03441fc0;
                }
              }
              goto LAB_03442394;
            }
          }
          *(float *)(lVar15 + 0x98) = fVar35;
          *(float *)(lVar15 + 0x9c) = fVar36;
          *(float *)(lVar15 + 0xa0) = fVar33;
          *(float *)(lVar15 + 0xa4) = fVar34;
          fVar37 = *(float *)(lVar15 + 0xac);
          fVar32 = *(float *)(lVar15 + 0xb0);
          fVar31 = fVar37;
          if (NAN(fVar37)) {
            fVar31 = 0.0;
          }
          *(float *)(lVar15 + 0x5c) = fVar31 + (float)(int)((fVar35 + fVar33) * 0.5);
          if (NAN(fVar37)) {
            fVar32 = 0.0;
          }
          *(float *)(lVar15 + 0x60) = fVar32 + (float)(int)((fVar36 + fVar34) * 0.5);
        }
LAB_03441fc0:
        ppfVar29 = ppfVar29 + 1;
      } while (ppfVar29 != local_160);
    }
    return 0;
  }
LAB_03441b1c:
  if ((long *)param_1[1] != param_1) {
    lVar12 = (long)*(int *)((long)param_1 + 0x14);
    lVar15 = param_1[1] - lVar12;
    do {
      fVar33 = *(float *)(lVar15 + 100);
      fVar32 = *(float *)(lVar15 + 0x68);
      fVar35 = fVar32 + *(float *)(lVar15 + 0x9c);
      fVar38 = fVar32 + *(float *)(lVar15 + 0xa4);
      fVar34 = fVar33 + *(float *)(lVar15 + 0x98);
      fVar36 = fVar33 + *(float *)(lVar15 + 0xa0);
      *(float *)(lVar15 + 0x98) = fVar34;
      *(float *)(lVar15 + 0x9c) = fVar35;
      *(float *)(lVar15 + 0xa0) = fVar36;
      *(float *)(lVar15 + 0xa4) = fVar38;
      fVar37 = *(float *)(lVar15 + 0xac);
      fVar31 = fVar37;
      if (NAN(fVar37)) {
        fVar31 = 0.0;
      }
      fVar39 = *(float *)(lVar15 + 0xb0);
      if (NAN(fVar37)) {
        fVar39 = 0.0;
      }
      *(float *)(lVar15 + 0x5c) = fVar31 + (float)(int)((fVar34 + fVar36) * 0.5);
      *(float *)(lVar15 + 0x60) = fVar39 + (float)(int)((fVar35 + fVar38) * 0.5);
      if (0.0 <= fVar33) {
        if (0.0 < fVar33) {
          uVar27 = 0x10;
          goto LAB_03441be8;
        }
      }
      else {
        uVar27 = 0x20;
LAB_03441be8:
        *(uint *)(lVar15 + 0x30) = *(uint *)(lVar15 + 0x30) | uVar27;
      }
      if (fVar32 < 0.0) {
        uVar27 = 8;
LAB_03441b44:
        *(uint *)(lVar15 + 0x30) = *(uint *)(lVar15 + 0x30) | uVar27;
      }
      else if (0.0 < fVar32) {
        uVar27 = 4;
        goto LAB_03441b44;
      }
      *(int *)(lVar15 + 0x58) = *(int *)(lVar15 + 0x58) + 1;
      lVar15 = *(long *)(lVar15 + lVar12 + 8) - lVar12;
    } while (lVar15 != (long)param_1 - lVar12);
  }
  return 1;
LAB_034423c8:
  do {
    bVar6 = false;
    if ((*(float *)(lVar15 + 0x98) < *(float *)(lVar12 + 0xa0)) &&
       (bVar6 = false, !NAN(*(float *)(lVar12 + 0x98)) && !NAN(*(float *)(lVar15 + 0xa0)))) {
      bVar6 = *(float *)(lVar12 + 0x98) < *(float *)(lVar15 + 0xa0);
    }
    if (bVar6) {
      bVar6 = false;
      if ((*(float *)(lVar15 + 0x9c) < *(float *)(lVar12 + 0xa4)) &&
         (bVar6 = false, !NAN(*(float *)(lVar12 + 0x9c)) && !NAN(*(float *)(lVar15 + 0xa4)))) {
        bVar6 = *(float *)(lVar12 + 0x9c) < *(float *)(lVar15 + 0xa4);
      }
      if ((!bVar6) ||
         (uVar9 = FUN_0345466c(param_3,&local_1e0,lVar12,local_160,param_2,0), (uVar9 & 1) == 0))
      goto LAB_034423b4;
      plVar13 = (long *)(lVar12 + *(int *)(param_2 + 0x14));
      lVar26 = *(long *)(lVar12 + lVar30 + 8);
      if (*plVar13 != 0) {
        *(long *)(*plVar13 + 8) = plVar13[1];
      }
      if ((long *)plVar13[1] != (long *)0x0) {
        *(long *)plVar13[1] = *plVar13;
      }
      *plVar13 = 0;
      plVar13[1] = 0;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
      lVar28 = *param_1;
      plVar13 = (long *)(lVar12 + *(int *)((long)param_1 + 0x14));
      *param_1 = (long)plVar13;
      *plVar13 = lVar28;
      plVar13[1] = (long)param_1;
      if (lVar28 != 0) {
        *(long **)(lVar28 + 8) = plVar13;
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    }
    else {
LAB_034423b4:
      lVar26 = *(long *)(lVar12 + lVar30 + 8);
    }
    lVar12 = lVar26 - lVar30;
  } while (lVar12 != param_2 - lVar30);
  goto LAB_03441b1c;
}

