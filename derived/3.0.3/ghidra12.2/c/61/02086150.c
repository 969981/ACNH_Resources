
void FUN_02086150(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  long lVar16;
  uint uVar17;
  undefined1 uVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined1 uVar21;
  uint uVar22;
  undefined *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined *local_1d8;
  undefined1 *local_1d0;
  int local_1c8;
  undefined1 local_1c4 [63];
  undefined1 local_185;
  undefined *local_180;
  undefined1 *local_178;
  int local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined *local_128;
  undefined1 *local_120;
  int local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *local_c8;
  int local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  
  FUN_02086b40();
  puVar23 = PTR_DAT_04bb6928;
  puVar15 = PTR_DAT_04bb2f70;
  local_7d = 0;
  lVar2 = param_1 + 0x10 + (ulong)*(uint *)(param_1 + 0x294) * 0x80;
  if (4 < *(uint *)(param_1 + 0x294)) {
    lVar2 = param_1 + 0x10;
  }
  local_c0 = 0x40;
  local_d0 = PTR_DAT_04bb2f70 + 0x10;
  local_c8 = local_bc;
  (**(code **)(*(long *)PTR_DAT_04bb6928 + 0x18))(PTR_DAT_04bb6928);
  puVar19 = *(undefined1 **)(puVar23 + 8);
  if (local_bc != puVar19) {
    (**(code **)(*(long *)puVar23 + 0x18))(puVar23);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar23 + 8) + lVar10) == '\0') goto LAB_0208623c;
      lVar11 = *(long *)(puVar23 + 8) + lVar10;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0208623c;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0208623c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0208623c:
    iVar6 = (int)lVar10;
    if (local_c0 <= (int)lVar10) {
      iVar6 = local_c0 + -1;
    }
    memcpy(local_bc,puVar19,(long)iVar6);
    local_bc[iVar6] = 0;
  }
  puVar4 = PTR_DAT_04bb3968;
  puVar23 = PTR_DAT_04bb2bc0;
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1de8) + 0xf0))
                              (*(long *)PTR_DAT_04bb3968 + 0x1de8);
  if (*(int *)(param_1 + 0x560) == 0) {
    uVar22 = 0;
    fVar25 = 3.4028235e+38;
    uVar21 = 0;
LAB_0208646c:
    *(undefined4 *)(param_1 + 0x55c) = 0;
LAB_02086470:
    if (uVar22 != 0) goto joined_r0x02086484;
LAB_020864e0:
    uVar22 = *(uint *)(param_1 + 0x558);
    if (uVar22 == 0) goto joined_r0x02086484;
    uVar18 = 0;
    *local_c8 = 0;
    bVar3 = true;
    plVar20 = (long *)PTR_DAT_04bb27c0;
  }
  else {
    fVar24 = *pfVar7;
    lVar11 = (long)*(int *)(param_1 + 0x560) << 3;
    plVar12 = *(long **)(param_1 + 0x568);
    uVar22 = 0;
    uVar21 = 0;
    fVar25 = 3.4028235e+38;
    lVar10 = lVar11;
    plVar20 = plVar12;
    do {
      puVar13 = (uint *)*plVar20;
      if (((puVar13[5] & 1) != 0) && (0 < (int)puVar13[3])) {
        if ((float)puVar13[6] < fVar25) {
          uVar22 = *puVar13;
          uVar21 = 1;
          fVar25 = (float)puVar13[6];
        }
      }
      plVar20 = plVar20 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
    uVar17 = 0;
    lVar10 = lVar11;
    plVar20 = plVar12;
    do {
      puVar13 = (uint *)*plVar20;
      if (((puVar13[5] & 3) == 2) && (0 < (int)puVar13[4])) {
        if ((float)puVar13[6] < fVar24) {
          uVar17 = *puVar13;
          fVar24 = (float)puVar13[6];
        }
      }
      plVar20 = plVar20 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
    if (uVar17 == 0) {
      do {
        if (((*(byte *)(*plVar12 + 0x14) & 1) != 0) && (0 < *(int *)(*plVar12 + 0x10)))
        goto LAB_02086470;
        plVar12 = plVar12 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
      goto LAB_0208646c;
    }
    iVar6 = *(int *)(param_1 + 0x55c);
    piVar8 = (int *)(**(code **)(*(long *)(*(long *)puVar4 + 0x1e18) + 0xf0))
                              (*(long *)puVar4 + 0x1e18);
    puVar5 = PTR_DAT_04bb5b58;
    puVar4 = PTR_DAT_04bb5b50;
    if (*piVar8 <= iVar6) {
      bVar3 = false;
      uVar21 = 1;
      uVar18 = 1;
      puVar15 = PTR_DAT_04bb2f70;
      uVar22 = uVar17;
      plVar20 = (long *)PTR_DAT_04bb27c0;
      goto joined_r0x02086484;
    }
    lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x48);
    if (*(long *)(lVar10 + 0xb0) != lVar10 + 0xa8) {
      lVar11 = (long)*(int *)(lVar10 + 0xbc);
      plVar20 = (long *)(*(long *)(lVar10 + 0xb0) - lVar11);
      puVar1 = PTR_DAT_04bb5b60 + 0x10;
      do {
        if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
          *(undefined **)puVar4 = puVar1;
          __cxa_guard_release(puVar5);
        }
        if (plVar20 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar20 + 0x10))(plVar20,puVar4);
          puVar15 = PTR_DAT_04bb2f70;
          puVar23 = PTR_DAT_04bb2bc0;
          if ((uVar9 & 1) != 0) {
            if ((*(byte *)(plVar20[0x4f] + 0x6d) & 0x18) == 0) {
              iVar6 = 1;
            }
            else {
              piVar8 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1e48) + 0xf0))
                                        (*(long *)PTR_DAT_04bb3968 + 0x1e48);
              iVar6 = *piVar8;
            }
            goto LAB_020864cc;
          }
        }
        plVar20 = (long *)(*(long *)((long)plVar20 + lVar11 + 8) - lVar11);
      } while (plVar20 != (long *)((lVar10 + 0xa8) - lVar11));
      puVar23 = PTR_DAT_04bb2bc0;
    }
    iVar6 = 1;
    puVar15 = PTR_DAT_04bb2f70;
LAB_020864cc:
    *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + iVar6;
    if (uVar22 == 0) goto LAB_020864e0;
joined_r0x02086484:
    uVar18 = 0;
    bVar3 = false;
    plVar20 = (long *)PTR_DAT_04bb27c0;
  }
joined_r0x02086484:
  PTR_DAT_04bb27c0 = (undefined *)plVar20;
  if (((param_2 & 1) != 0) &&
     (((fVar24 = *(float *)(lVar2 + 0xc), fVar24 != 0.0 || (*(float *)(lVar2 + 0x10) != 0.0)) ||
      (*(float *)(lVar2 + 0x14) != 0.0)))) {
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x68);
    if (bVar3) {
      lVar11 = *plVar20;
      if (lVar11 != 0) {
        if (((uVar22 == 0) ||
            (lVar16 = *(long *)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                               (ulong)(uVar22 >> 0x14) * 8), lVar16 == 0)) ||
           (((*(uint *)(lVar16 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar16 + 0x230) != uVar22)))) {
          lVar16 = 0;
        }
        if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
          plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar11 = *plVar20;
          iVar6 = (**(code **)(*plVar12 + 0x60))();
          if (iVar6 < 0x11) {
            uVar17 = 1;
          }
          else {
            if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_020865e4;
            uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_020865e4:
          uVar17 = 0;
        }
        if (lVar16 != 0) {
          uVar17 = uVar17 ^ 1;
          if (*(int *)(lVar16 + 0x150) != 1) {
            uVar17 = 1;
          }
          if ((uVar17 == 0) && (lVar11 = *(long *)(lVar16 + 0x68), lVar11 != 0)) {
            fVar25 = *(float *)(lVar10 + 0x278) - *(float *)(lVar11 + 0x278);
            fVar24 = *(float *)(lVar10 + 0x280) - *(float *)(lVar11 + 0x280);
            fVar25 = SQRT(fVar24 * fVar24 + fVar25 * fVar25);
          }
        }
      }
      fVar24 = *(float *)(lVar2 + 0xc);
    }
    fVar24 = *(float *)(lVar10 + 0x278) - fVar24;
    fVar26 = *(float *)(lVar10 + 0x280) - *(float *)(lVar2 + 0x14);
    if (SQRT(fVar26 * fVar26 + fVar24 * fVar24) < fVar25) {
      uVar22 = *(uint *)PTR_DAT_04bb3238;
    }
  }
  if (uVar22 == 0) {
    iVar6 = *(int *)(lVar2 + 0x78) + -1;
    if ((0 < *(int *)(lVar2 + 0x78)) && (*(int *)(lVar2 + 0x78) = iVar6, iVar6 != 0)) {
      return;
    }
    *(undefined4 *)(lVar2 + 8) = 0;
    puVar4 = PTR_PTR_04bb2238;
    local_185 = 0;
    local_1c8 = 0x40;
    local_1d8 = puVar15 + 0x10;
    local_1d0 = local_1c4;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    puVar19 = *(undefined1 **)(puVar4 + 8);
    if (local_1c4 != puVar19) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
      lVar10 = 0;
      do {
        if (*(char *)(*(long *)(puVar4 + 8) + lVar10) == '\0') goto LAB_0208695c;
        lVar11 = *(long *)(puVar4 + 8) + lVar10;
        if (*(char *)(lVar11 + 1) == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_0208695c;
        }
        if (*(char *)(lVar11 + 2) == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_0208695c;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_0208695c:
      iVar6 = (int)lVar10;
      if (local_1c8 <= (int)lVar10) {
        iVar6 = local_1c8 + -1;
      }
      memcpy(local_1c4,puVar19,(long)iVar6);
      local_1c4[iVar6] = 0;
    }
    puVar19 = local_1d0;
    local_1d8 = puVar23 + 0x10;
    puVar14 = *(undefined1 **)(lVar2 + 0x20);
    local_1d0[(long)local_1c8 + -1] = 0;
    if (puVar14 == local_1d0) {
      return;
    }
    (**(code **)(puVar23 + 0x28))(&local_1d8);
    lVar10 = 0;
    do {
      if (local_1d0[lVar10] == '\0') goto LAB_02086a00;
      if (local_1d0[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_02086a00;
      }
      if (local_1d0[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_02086a00;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_02086a00:
    iVar6 = (int)lVar10;
    if (*(int *)(lVar2 + 0x28) <= (int)lVar10) {
      iVar6 = *(int *)(lVar2 + 0x28) + -1;
    }
    memcpy(puVar14,puVar19,(long)iVar6);
    puVar14[iVar6] = 0;
    return;
  }
  if ((*(uint *)(lVar2 + 8) == 0) || (*(uint *)(lVar2 + 8) == uVar22)) {
    *(uint *)(lVar2 + 8) = uVar22;
    *(undefined4 *)(lVar2 + 0x78) = 0x1e;
    local_d5 = 0;
    local_118 = 0x40;
    local_128 = puVar15 + 0x10;
    local_120 = local_114;
    (**(code **)(local_d0 + 0x18))(&local_d0);
    puVar19 = local_c8;
    if (local_114 != local_c8) {
      (**(code **)(local_d0 + 0x18))(&local_d0);
      lVar10 = 0;
      do {
        if (local_c8[lVar10] == '\0') goto LAB_020868bc;
        if (local_c8[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_020868bc;
        }
        if (local_c8[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_020868bc;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_020868bc:
      iVar6 = (int)lVar10;
      if (local_118 <= (int)lVar10) {
        iVar6 = local_118 + -1;
      }
      memcpy(local_114,puVar19,(long)iVar6);
      local_114[iVar6] = 0;
    }
    puVar19 = local_120;
    local_128 = puVar23 + 0x10;
    puVar14 = *(undefined1 **)(lVar2 + 0x20);
    local_120[(long)local_118 + -1] = 0;
    if (puVar14 == local_120) goto LAB_02086b04;
    (**(code **)(puVar23 + 0x28))(&local_128);
    lVar10 = 0;
    do {
      if (local_120[lVar10] == '\0') goto LAB_02086adc;
      if (local_120[lVar10 + 1] == '\0') goto LAB_02086ad0;
      if (local_120[lVar10 + 2] == '\0') goto LAB_02086ad8;
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
  }
  else {
    iVar6 = *(int *)(lVar2 + 0x78) + -1;
    if ((0 < *(int *)(lVar2 + 0x78)) && (*(int *)(lVar2 + 0x78) = iVar6, iVar6 != 0)) {
      return;
    }
    *(uint *)(lVar2 + 8) = uVar22;
    local_12d = 0;
    local_170 = 0x40;
    local_180 = puVar15 + 0x10;
    local_178 = local_16c;
    (**(code **)(local_d0 + 0x18))(&local_d0);
    puVar19 = local_c8;
    if (local_16c != local_c8) {
      (**(code **)(local_d0 + 0x18))(&local_d0);
      lVar10 = 0;
      do {
        if (local_c8[lVar10] == '\0') goto LAB_02086a38;
        if (local_c8[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_02086a38;
        }
        if (local_c8[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_02086a38;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_02086a38:
      iVar6 = (int)lVar10;
      if (local_170 <= (int)lVar10) {
        iVar6 = local_170 + -1;
      }
      memcpy(local_16c,puVar19,(long)iVar6);
      local_16c[iVar6] = 0;
    }
    puVar19 = local_178;
    local_180 = puVar23 + 0x10;
    puVar14 = *(undefined1 **)(lVar2 + 0x20);
    local_178[(long)local_170 + -1] = 0;
    if (puVar14 == local_178) goto LAB_02086b04;
    (**(code **)(puVar23 + 0x28))(&local_180);
    lVar10 = 0;
    do {
      if (local_178[lVar10] == '\0') goto LAB_02086adc;
      if (local_178[lVar10 + 1] == '\0') goto LAB_02086ad0;
      if (local_178[lVar10 + 2] == '\0') goto LAB_02086ad8;
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
  }
  lVar10 = 0;
LAB_02086adc:
  iVar6 = (int)lVar10;
  if (*(int *)(lVar2 + 0x28) <= (int)lVar10) {
    iVar6 = *(int *)(lVar2 + 0x28) + -1;
  }
  memcpy(puVar14,puVar19,(long)iVar6);
  puVar14[iVar6] = 0;
LAB_02086b04:
  *(undefined1 *)(lVar2 + 0x7d) = uVar18;
  *(undefined1 *)(lVar2 + 0x7c) = uVar21;
  return;
LAB_02086ad0:
  lVar10 = lVar10 + 1;
  goto LAB_02086adc;
LAB_02086ad8:
  lVar10 = lVar10 + 2;
  goto LAB_02086adc;
}

