
void FUN_03699270(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  byte *pbVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e0;
  long *local_d8;
  undefined8 ***local_d0;
  undefined8 ***local_c8;
  undefined8 **local_c0 [2];
  undefined8 *local_b0 [2];
  undefined8 local_a0 [2];
  long local_90 [4];
  
  local_a0[0] = 0;
  local_d0 = local_c0;
  local_c0[0] = local_b0;
  local_b0[0] = local_a0;
  local_e0 = 0;
  local_d8 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    local_e0 = 0x300000000;
    local_d8 = local_90;
  }
  lVar12 = *(long *)PTR_DAT_04bb3968;
  iVar8 = 0;
  local_c8 = local_d0;
  if (lVar12 != 0) {
    local_100 = &PTR_FUN_04b43698;
    local_f0 = &local_e0;
    if (*(int *)(lVar12 + 0xb88) == 0) {
      iVar8 = 0;
      local_f8 = param_1;
    }
    else {
      lVar19 = (long)*(int *)(lVar12 + 0xb88) << 3;
      puVar20 = *(undefined8 **)(lVar12 + 0xb90);
      local_f8 = param_1;
      do {
        (*(code *)*local_100)(&local_100,*puVar20);
        lVar19 = lVar19 + -8;
        puVar20 = puVar20 + 1;
      } while (lVar19 != 0);
      iVar8 = (int)local_e0;
    }
  }
  puVar3 = PTR_DAT_04bb27c0;
  local_100._0_4_ = (float)*param_2;
  local_110._0_4_ = (float)*param_2;
  fVar25 = *(float *)(param_2 + 1) + 10.0;
  local_100 = (undefined **)CONCAT44((int)((ulong)*param_2 >> 0x20),(float)local_100 + -5.0);
  fVar26 = (float)local_110 + 5.0;
  local_f8 = CONCAT44(local_f8._4_4_,fVar25);
  local_108 = *(float *)(param_2 + 1) + 10.0;
  local_110 = CONCAT44((int)((ulong)*param_2 >> 0x20),fVar26);
  if (iVar8 == 1) {
    lVar12 = *(long *)PTR_DAT_04bb27c0;
    if (lVar12 == 0) {
      return;
    }
    uVar17 = *(uint *)*local_d8;
    if ((((uVar17 == 0) ||
         (plVar15 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                              ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
        ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar17)) {
      plVar15 = (long *)0x0;
    }
    if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar3;
      iVar8 = (**(code **)(*plVar9 + 0x60))();
      if (iVar8 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_0369958c;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0369958c:
      uVar17 = 0;
    }
    if (plVar15 == (long *)0x0) {
      return;
    }
    lVar12 = plVar15[0x2a];
    uVar14 = *(uint *)(plVar15 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0);
    if ((int)lVar12 != 1) {
      return;
    }
    if ((uVar7 & uVar17) == 0) {
      return;
    }
    if ((uVar14 >> 4 & 1) == 0) {
      return;
    }
    puVar20 = (undefined8 *)plVar15[0x77];
    if (((*PTR_DAT_04bb6710 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6710);
    }
    if (puVar20 == (undefined8 *)0x0) {
      return;
    }
    uVar13 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bb6708);
    if ((uVar13 & 1) == 0) {
      return;
    }
    puVar16 = &local_120;
    local_120 = *param_2;
    local_118 = *(float *)(param_2 + 1) + 10.0;
    goto LAB_03699870;
  }
  if (iVar8 == 2) {
    fVar25 = *(float *)(*local_d8 + 4);
    fVar26 = *(float *)(local_d8[1] + 4);
    lVar12 = *(long *)PTR_DAT_04bb27c0;
    if (lVar12 == 0) {
      uVar17 = 0;
      bVar4 = false;
      plVar15 = (long *)0x0;
      uVar13 = 0;
      lVar12 = *(long *)PTR_DAT_04bb27c0;
joined_r0x03699570:
      if (lVar12 == 0) goto LAB_03699574;
LAB_036995ec:
      uVar14 = *(uint *)local_d8[fVar25 < fVar26];
      if ((((uVar14 == 0) ||
           (plVar9 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                               ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
          ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar14)) {
        plVar9 = (long *)0x0;
      }
      if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
        plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar12 = *(long *)puVar3;
        iVar8 = (**(code **)(*plVar10 + 0x60))();
        if (iVar8 < 0x11) {
          uVar23 = 1;
          uVar14 = 1;
          goto joined_r0x036997b8;
        }
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_0369969c;
        uVar23 = 0x101000100 >> (((ulong)*(uint *)(lVar12 + 0x5e8) & 7) << 3);
        uVar14 = (uint)uVar23;
        if (plVar9 != (long *)0x0) goto LAB_036996a4;
        goto joined_r0x036997c4;
      }
LAB_0369969c:
      uVar23 = 0;
      uVar14 = 0;
joined_r0x036997b8:
      if (plVar9 == (long *)0x0) goto joined_r0x036997c4;
LAB_036996a4:
      bVar5 = (int)plVar9[0x2a] == 1;
      uVar7 = *(uint *)(plVar9 + 0x49) >> 4 & 1;
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar23 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
      if ((uVar23 & 1) == 0) {
        uVar14 = 0;
      }
      uVar23 = (ulong)uVar14;
      pbVar2 = PTR_DAT_04bb6710;
    }
    else {
      uVar17 = *(uint *)local_d8[fVar26 <= fVar25];
      if ((((uVar17 == 0) ||
           (plVar15 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
          ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar17)) {
        plVar15 = (long *)0x0;
      }
      if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar12 = *(long *)puVar3;
        iVar8 = (**(code **)(*plVar9 + 0x60))();
        if (iVar8 < 0x11) {
          uVar13 = 1;
          uVar14 = 1;
        }
        else {
          if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_03699598;
          uVar13 = 0x101000100 >> (((ulong)*(uint *)(lVar12 + 0x5e8) & 7) << 3);
          uVar14 = (uint)uVar13;
        }
      }
      else {
LAB_03699598:
        uVar13 = 0;
        uVar14 = 0;
      }
      if (plVar15 != (long *)0x0) {
        bVar4 = (int)plVar15[0x2a] == 1;
        uVar17 = *(uint *)(plVar15 + 0x49) >> 4 & 1;
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar13 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0);
        if ((uVar13 & 1) == 0) {
          uVar14 = 0;
        }
        uVar13 = (ulong)uVar14;
        lVar12 = *(long *)puVar3;
        goto joined_r0x03699570;
      }
      uVar17 = 0;
      bVar4 = false;
      lVar12 = *(long *)puVar3;
      if (lVar12 != 0) goto LAB_036995ec;
LAB_03699574:
      plVar9 = (long *)0x0;
      uVar23 = 0;
joined_r0x036997c4:
      bVar5 = false;
      uVar7 = 0;
      pbVar2 = PTR_DAT_04bb6710;
    }
    if (plVar15 == (long *)0x0) {
      PTR_DAT_04bb6710 = pbVar2;
      return;
    }
    if (!bVar4) {
      PTR_DAT_04bb6710 = pbVar2;
      return;
    }
    if ((uVar13 & 0xff) == 0) {
      PTR_DAT_04bb6710 = pbVar2;
      return;
    }
    if (uVar17 == 0) {
      PTR_DAT_04bb6710 = pbVar2;
      return;
    }
    if (plVar9 == (long *)0x0) {
      PTR_DAT_04bb6710 = pbVar2;
      return;
    }
    if (!bVar5) {
      PTR_DAT_04bb6710 = pbVar2;
      return;
    }
    if ((uVar23 & 0xff) == 0) {
      PTR_DAT_04bb6710 = pbVar2;
      return;
    }
    if (uVar7 == 0) {
      PTR_DAT_04bb6710 = pbVar2;
      return;
    }
    puVar16 = (undefined8 *)plVar15[0x77];
    PTR_DAT_04bb6710 = pbVar2;
    if (((*pbVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar2), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6710);
    }
    if ((puVar16 != (undefined8 *)0x0) &&
       (uVar13 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bb6708), (uVar13 & 1) == 0)) {
      puVar16 = (undefined8 *)0x0;
    }
    puVar20 = (undefined8 *)plVar9[0x77];
    if (((*pbVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6710);
    }
    if (puVar20 == (undefined8 *)0x0) {
      return;
    }
    uVar13 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bb6708);
    if ((uVar13 & 1) == 0) {
      puVar20 = (undefined8 *)0x0;
    }
    if (puVar16 == (undefined8 *)0x0) {
      return;
    }
    if (puVar20 == (undefined8 *)0x0) {
      return;
    }
    FUN_01fa7a0c(puVar16,&local_100);
    puVar16 = &local_110;
    goto LAB_03699870;
  }
  if (iVar8 != 3) {
    return;
  }
  cVar1 = *(char *)(local_d8[1] + 8);
  if (*(char *)(*local_d8 + 8) == '\0') {
    if (cVar1 == '\0') {
      lVar12 = 0xffffffff;
      fVar25 = *(float *)(*local_d8 + 4);
      bVar4 = true;
      bVar5 = fVar25 < *(float *)(local_d8[1] + 4);
      uVar13 = (ulong)!bVar5;
      uVar17 = (uint)bVar5;
    }
    else {
      uVar13 = 0;
      bVar4 = false;
      lVar12 = 1;
      uVar17 = 0xffffffff;
    }
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    lVar12 = 0;
    uVar17 = 0xffffffff;
    uVar13 = 1;
    bVar4 = false;
  }
  if (*(char *)(local_d8[2] + 8) == '\0') {
    fVar25 = *(float *)(local_d8[2] + 4);
    uVar14 = (uint)uVar13;
    uVar17 = 2;
    if (fVar25 <= *(float *)(local_d8[uVar13] + 4)) {
      uVar14 = 2;
      uVar17 = (uint)uVar13;
    }
    uVar13 = (ulong)uVar14;
  }
  else {
    if (!bVar4) {
      return;
    }
    lVar12 = 2;
  }
  lVar19 = *(long *)PTR_DAT_04bb27c0;
  if (lVar19 == 0) {
    plVar15 = (long *)0x0;
    bVar4 = false;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    uVar14 = *(uint *)local_d8[uVar13];
    if ((((uVar14 == 0) ||
         (plVar15 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                              ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
        ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar14)) {
      plVar15 = (long *)0x0;
    }
    if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar19 = *(long *)puVar3;
      iVar8 = (**(code **)(*plVar9 + 0x60))();
      if (iVar8 < 0x11) {
        uVar13 = 1;
        goto joined_r0x036999e8;
      }
      if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_03699994;
      uVar13 = 0x101000100 >> (((ulong)*(uint *)(lVar19 + 0x5e8) & 7) << 3);
      uVar7 = (uint)uVar13;
    }
    else {
LAB_03699994:
      uVar13 = 0;
joined_r0x036999e8:
      uVar7 = (uint)uVar13;
    }
    if (plVar15 == (long *)0x0) {
      bVar4 = false;
      uVar14 = 0;
    }
    else {
      bVar4 = (int)plVar15[0x2a] == 1;
      uVar14 = *(uint *)(plVar15 + 0x49) >> 4 & 1;
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar13 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0);
      if ((uVar13 & 1) == 0) {
        uVar7 = 0;
      }
      uVar13 = (ulong)uVar7;
    }
  }
  lVar19 = *(long *)puVar3;
  if (lVar19 == 0) {
    plVar9 = (long *)0x0;
    bVar5 = false;
    uVar17 = 0;
    uVar23 = 0;
    lVar19 = *(long *)puVar3;
joined_r0x03699ac0:
    if (lVar19 == 0) goto LAB_03699ac4;
LAB_03699b2c:
    uVar7 = *(uint *)local_d8[lVar12];
    if ((((uVar7 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                              ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar7)) {
      plVar10 = (long *)0x0;
    }
    if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar3;
      iVar8 = (**(code **)(*plVar11 + 0x60))();
      if (iVar8 < 0x11) {
        uVar22 = 1;
        uVar7 = 1;
        goto joined_r0x03699c44;
      }
      if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_03699bd4;
      uVar22 = 0x101000100 >> (((ulong)*(uint *)(lVar12 + 0x5e8) & 7) << 3);
      uVar7 = (uint)uVar22;
      if (plVar10 == (long *)0x0) goto LAB_03699c48;
LAB_03699bdc:
      bVar6 = (int)plVar10[0x2a] == 1;
      uVar21 = *(uint *)(plVar10 + 0x49) >> 4 & 1;
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar22 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
      if ((uVar22 & 1) == 0) {
        uVar7 = 0;
      }
      uVar22 = (ulong)uVar7;
    }
    else {
LAB_03699bd4:
      uVar22 = 0;
      uVar7 = 0;
joined_r0x03699c44:
      if (plVar10 != (long *)0x0) goto LAB_03699bdc;
LAB_03699c48:
      bVar6 = false;
      uVar21 = 0;
    }
  }
  else {
    uVar17 = *(uint *)local_d8[uVar17];
    if ((((uVar17 == 0) ||
         (plVar9 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                             ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
        ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar17)) {
      plVar9 = (long *)0x0;
    }
    if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar19 = *(long *)puVar3;
      iVar8 = (**(code **)(*plVar10 + 0x60))();
      if (iVar8 < 0x11) {
        uVar23 = 1;
        uVar7 = 1;
      }
      else {
        if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_03699ad8;
        uVar23 = 0x101000100 >> (((ulong)*(uint *)(lVar19 + 0x5e8) & 7) << 3);
        uVar7 = (uint)uVar23;
      }
    }
    else {
LAB_03699ad8:
      uVar23 = 0;
      uVar7 = 0;
    }
    if (plVar9 != (long *)0x0) {
      bVar5 = (int)plVar9[0x2a] == 1;
      uVar17 = *(uint *)(plVar9 + 0x49) >> 4 & 1;
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar23 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
      if ((uVar23 & 1) == 0) {
        uVar7 = 0;
      }
      uVar23 = (ulong)uVar7;
      lVar19 = *(long *)puVar3;
      goto joined_r0x03699ac0;
    }
    bVar5 = false;
    uVar17 = 0;
    lVar19 = *(long *)puVar3;
    if (lVar19 != 0) goto LAB_03699b2c;
LAB_03699ac4:
    plVar10 = (long *)0x0;
    bVar6 = false;
    uVar21 = 0;
    uVar22 = 0;
  }
  puVar3 = PTR_DAT_04bb6710;
  if (plVar15 == (long *)0x0) {
    return;
  }
  if (!bVar4) {
    return;
  }
  if ((uVar13 & 0xff) == 0) {
    return;
  }
  if (uVar14 == 0) {
    return;
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
  if (!bVar5) {
    return;
  }
  if ((uVar23 & 0xff) == 0) {
    return;
  }
  if (uVar17 == 0) {
    return;
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  if (!bVar6) {
    return;
  }
  if ((uVar22 & 0xff) == 0) {
    return;
  }
  if (uVar21 == 0) {
    return;
  }
  puVar16 = (undefined8 *)plVar15[0x77];
  if (((*PTR_DAT_04bb6710 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if ((puVar16 != (undefined8 *)0x0) &&
     (uVar13 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bb6708), (uVar13 & 1) == 0)) {
    puVar16 = (undefined8 *)0x0;
  }
  puVar18 = (undefined8 *)plVar9[0x77];
  if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar8 != 0)) {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if ((puVar18 != (undefined8 *)0x0) &&
     (uVar13 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bb6708), (uVar13 & 1) == 0)) {
    puVar18 = (undefined8 *)0x0;
  }
  puVar20 = (undefined8 *)plVar10[0x77];
  if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar8 != 0)) {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if (puVar20 == (undefined8 *)0x0) {
    return;
  }
  uVar13 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bb6708);
  if ((uVar13 & 1) == 0) {
    puVar20 = (undefined8 *)0x0;
  }
  if (puVar16 == (undefined8 *)0x0) {
    return;
  }
  if (puVar18 == (undefined8 *)0x0) {
    return;
  }
  if (puVar20 == (undefined8 *)0x0) {
    return;
  }
  FUN_01fa7a0c(puVar16,&local_100);
  FUN_01fa7a0c(puVar18,&local_110);
  uVar24 = FUN_037715a0();
  puVar16 = &local_120;
  local_120 = CONCAT44(fVar25,uVar24);
  local_118 = fVar26;
LAB_03699870:
  FUN_01fa7a0c(puVar20,puVar16);
  return;
}

