
void FUN_01ea1c90(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  short sVar5;
  undefined **ppuVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  void *__dest;
  char *pcVar16;
  undefined8 *__s;
  ulong uVar17;
  void *__src;
  uint uVar18;
  ulong uVar19;
  uint local_15c;
  undefined *local_150;
  char *local_148;
  uint local_140;
  char local_13c [31];
  undefined1 local_11d;
  undefined **local_118;
  uint local_110;
  undefined *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  char *local_f0;
  int local_e8;
  char local_e4 [31];
  undefined1 local_c5;
  undefined *local_c0;
  char *local_b8;
  int local_b0;
  char local_ac [63];
  undefined1 local_6d;
  
  lVar11 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar11 != 0) && (*(long *)(lVar11 + 0x28) != 0)) && (*(int *)(lVar11 + 0x80) == 1)) {
    return;
  }
  if (((*PTR_DAT_04bb6860 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bb6858 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6860);
  }
  uVar9 = (**(code **)*param_1)(param_1,PTR_DAT_04bb6858);
  puVar13 = PTR_DAT_04bb2028;
  if ((uVar9 & 1) == 0) {
    return;
  }
  local_6d = 0;
  local_b0 = 0x40;
  local_b8 = local_ac;
  local_f0 = local_e4;
  local_ac[0] = '\0';
  local_c5 = 0;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_e8 = 0x20;
  local_e4[0] = '\0';
  local_f8 = PTR_DAT_04bb2028 + 0x10;
  if (((*(uint *)(param_1[1] + 0x508) < 10) &&
      (lVar11 = (ulong)*(uint *)(param_1[1] + 0x508) * 0xba0, puVar15 = &DAT_053fe348 + lVar11,
      (&DAT_053fee41)[lVar11] != '\0')) &&
     ((lVar11 = FUN_0219cfb0(puVar15), lVar11 != 0 && (lVar11 = FUN_0219d300(puVar15), lVar11 != 0))
     )) {
    pcVar10 = (char *)FUN_0219cfb0(puVar15);
    pcVar16 = local_b8;
    if (local_b8 != pcVar10) {
      lVar11 = 0;
      do {
        if (pcVar10[lVar11] == '\0') goto LAB_01ea1dfc;
        if (pcVar10[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01ea1dfc;
        }
        if (pcVar10[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01ea1dfc;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01ea1dfc:
      iVar8 = (int)lVar11;
      if (local_b0 <= (int)lVar11) {
        iVar8 = local_b0 + -1;
      }
      memcpy(local_b8,pcVar10,(long)iVar8);
      pcVar16[iVar8] = '\0';
    }
    pcVar10 = (char *)FUN_0219d300(puVar15);
    pcVar16 = local_f0;
    if (local_f0 != pcVar10) {
      lVar11 = 0;
      do {
        if (pcVar10[lVar11] == '\0') goto LAB_01ea1e7c;
        if (pcVar10[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01ea1e7c;
        }
        if (pcVar10[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01ea1e7c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01ea1e7c:
      iVar8 = (int)lVar11;
      if (local_e8 <= (int)lVar11) {
        iVar8 = local_e8 + -1;
      }
      memcpy(local_f0,pcVar10,(long)iVar8);
      pcVar16[iVar8] = '\0';
    }
  }
  pcVar16 = local_b8;
  puVar15 = PTR_DAT_04bb2020;
  if (*local_b8 == '\0') {
    (**(code **)(DAT_053939f8 + 0x18))(&DAT_053939f8);
    pcVar10 = DAT_05393a00;
    if (pcVar16 != DAT_05393a00) {
      (**(code **)(DAT_053939f8 + 0x18))(&DAT_053939f8);
      lVar11 = 0;
      do {
        if (DAT_05393a00[lVar11] == '\0') goto LAB_01ea20f4;
        if (DAT_05393a00[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01ea20f4;
        }
        if (DAT_05393a00[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01ea20f4;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01ea20f4:
      iVar8 = (int)lVar11;
      if (local_b0 <= (int)lVar11) {
        iVar8 = local_b0 + -1;
      }
      memcpy(pcVar16,pcVar10,(long)iVar8);
      pcVar16[iVar8] = '\0';
    }
    pcVar16 = local_b8;
    lVar12 = param_1[1];
    (**(code **)(local_c0 + 0x18))(&local_c0);
    lVar11 = 0;
    do {
      if (local_b8[lVar11] == '\0') goto LAB_01ea217c;
      if (local_b8[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01ea217c;
      }
      if (local_b8[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01ea217c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01ea217c:
    uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*(long *)(lVar12 + 0x418) + 0x18))(lVar12 + 0x418);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(lVar12 + 0x420) + lVar11) == '\0') goto LAB_01ea21dc;
      lVar1 = *(long *)(lVar12 + 0x420) + lVar11;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01ea21dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01ea21dc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01ea21dc:
    uVar18 = (uint)lVar11;
    if ((int)(local_b0 - uVar2) <= (int)(uint)lVar11) {
      uVar18 = local_b0 + ~uVar2;
    }
    if (0 < (int)uVar18) {
      (**(code **)(*(long *)(lVar12 + 0x418) + 0x18))(lVar12 + 0x418);
      memcpy(pcVar16 + uVar2,*(void **)(lVar12 + 0x420),(ulong)uVar18);
      pcVar16[(int)(uVar18 + uVar2)] = '\0';
    }
    goto LAB_01ea2a44;
  }
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
    local_15c = 0;
  }
  else {
    local_150 = (undefined *)CONCAT44(local_150._4_4_,3);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    local_15c = *puVar3 >> 3 & 1;
  }
  local_118 = &local_c0;
  local_110 = 0;
  local_108 = PTR_DAT_04bb2020 + 0x10;
  local_100 = &DAT_04079e84;
  (**(code **)(local_c0 + 0x18))(&local_c0);
  uVar2 = local_110;
  ppuVar6 = local_118;
  lVar11 = 0;
  do {
    if (local_b8[lVar11] == '\0') {
LAB_01ea1ffc:
      uVar18 = (int)lVar11 + 1;
      goto LAB_01ea2000;
    }
    if (local_b8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01ea1ffc;
    }
    if (local_b8[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01ea1ffc;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  uVar18 = 1;
LAB_01ea2000:
  uVar9 = (ulong)local_110;
  local_148 = local_13c;
  local_140 = 0x20;
  local_150 = puVar13 + 0x10;
  local_11d = 0;
  local_13c[0] = '\0';
  if ((local_118 != &local_c0) || (local_110 != uVar18)) {
    (**(code **)(*local_118 + 0x18))(local_118);
    puVar13 = ppuVar6[1];
    lVar11 = 0;
    do {
      if (puVar13[lVar11] == '\0') goto LAB_01ea20b0;
      if (puVar13[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01ea20b0;
      }
      if (puVar13[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01ea20b0;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01ea20b0:
    if ((-1 < (int)uVar2) && ((int)uVar2 <= (int)lVar11)) {
      (**(code **)(local_150 + 0x18))(&local_150);
      pcVar16 = local_148;
      uVar17 = (ulong)local_140;
      if (0 < (int)local_140) {
        uVar19 = 0;
        do {
          puVar13 = local_118[1];
          if (puVar13[uVar9] == '\0') {
LAB_01ea22c0:
            local_110 = (int)uVar9 + 1;
            pcVar16[uVar19 & 0xffffffff] = '\0';
            break;
          }
          (**(code **)(local_108 + 0x18))(&local_108);
          uVar14 = 0;
          bVar7 = true;
          cVar4 = puVar13[uVar9];
          do {
            if (local_100[uVar14] == '\0') break;
            if (local_100[uVar14] == cVar4) {
              if (bVar7) goto LAB_01ea22c0;
              break;
            }
            if (local_100[uVar14 + 1] == '\0') break;
            if (local_100[uVar14 + 1] == cVar4) goto LAB_01ea22c0;
            if (local_100[uVar14 + 2] == '\0') break;
            if (local_100[uVar14 + 2] == cVar4) goto LAB_01ea22c0;
            bVar7 = uVar14 < 0x7fffe;
            uVar14 = uVar14 + 3;
          } while (uVar14 != 0x80001);
          pcVar16[uVar19] = cVar4;
          uVar19 = uVar19 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar19 != uVar17);
      }
    }
    pcVar16 = local_b8;
    uVar2 = local_110;
    ppuVar6 = local_118;
    puVar13 = PTR_DAT_04bb2028;
    if (local_15c != 0) {
      (**(code **)(local_150 + 0x18))(&local_150);
      pcVar10 = local_148;
      puVar13 = PTR_DAT_04bb2028;
      if (pcVar16 != local_148) {
        (**(code **)(local_150 + 0x18))(&local_150);
        lVar11 = 0;
        do {
          if (local_148[lVar11] == '\0') goto LAB_01ea2578;
          if (local_148[lVar11 + 1] == '\0') goto LAB_01ea256c;
          if (local_148[lVar11 + 2] == '\0') goto LAB_01ea2574;
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
LAB_01ea2564:
        lVar11 = 0;
        goto LAB_01ea2578;
      }
      goto LAB_01ea25a4;
    }
    uVar9 = (ulong)local_110;
    if ((local_118 != &local_c0) || (local_110 != uVar18)) {
      (**(code **)(*local_118 + 0x18))(local_118);
      puVar13 = ppuVar6[1];
      lVar11 = 0;
      do {
        if (puVar13[lVar11] == '\0') goto LAB_01ea241c;
        if (puVar13[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01ea241c;
        }
        if (puVar13[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01ea241c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01ea241c:
      if ((-1 < (int)uVar2) && ((int)uVar2 <= (int)lVar11)) {
        (**(code **)(local_150 + 0x18))(&local_150);
        pcVar16 = local_148;
        uVar17 = (ulong)local_140;
        if (0 < (int)local_140) {
          uVar19 = 0;
          do {
            puVar13 = local_118[1];
            if (puVar13[uVar9] == '\0') {
LAB_01ea24e8:
              local_110 = (int)uVar9 + 1;
              pcVar16[uVar19 & 0xffffffff] = '\0';
              break;
            }
            (**(code **)(local_108 + 0x18))(&local_108);
            uVar14 = 0;
            bVar7 = true;
            cVar4 = puVar13[uVar9];
            do {
              if (local_100[uVar14] == '\0') break;
              if (local_100[uVar14] == cVar4) {
                if (bVar7) goto LAB_01ea24e8;
                break;
              }
              if (local_100[uVar14 + 1] == '\0') break;
              if (local_100[uVar14 + 1] == cVar4) goto LAB_01ea24e8;
              if (local_100[uVar14 + 2] == '\0') break;
              if (local_100[uVar14 + 2] == cVar4) goto LAB_01ea24e8;
              bVar7 = uVar14 < 0x7fffe;
              uVar14 = uVar14 + 3;
            } while (uVar14 != 0x80001);
            pcVar16[uVar19] = cVar4;
            uVar19 = uVar19 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar19 != uVar17);
        }
      }
      pcVar16 = local_b8;
      (**(code **)(local_150 + 0x18))(&local_150);
      pcVar10 = local_148;
      puVar13 = PTR_DAT_04bb2028;
      if (pcVar16 != local_148) {
        (**(code **)(local_150 + 0x18))(&local_150);
        lVar11 = 0;
        do {
          if (local_148[lVar11] == '\0') goto LAB_01ea2578;
          if (local_148[lVar11 + 1] == '\0') goto LAB_01ea256c;
          if (local_148[lVar11 + 2] == '\0') goto LAB_01ea2574;
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        goto LAB_01ea2564;
      }
      goto LAB_01ea25a4;
    }
    if (local_b8 == "") goto LAB_01ea25a4;
    iVar8 = 0;
    if (local_b0 < 1) {
      iVar8 = local_b0 + -1;
    }
    memset(local_b8,0,(long)iVar8);
    pcVar16 = pcVar16 + iVar8;
    goto LAB_01ea25a0;
  }
  goto LAB_01ea25a4;
LAB_01ea256c:
  lVar11 = lVar11 + 1;
  goto LAB_01ea2578;
LAB_01ea2574:
  lVar11 = lVar11 + 2;
LAB_01ea2578:
  iVar8 = (int)lVar11;
  if (local_b0 <= (int)lVar11) {
    iVar8 = local_b0 + -1;
  }
  memcpy(pcVar16,pcVar10,(long)iVar8);
  pcVar16 = pcVar16 + iVar8;
LAB_01ea25a0:
  *pcVar16 = '\0';
LAB_01ea25a4:
  local_118 = &local_f8;
  local_110 = 0;
  local_108 = puVar15 + 0x10;
  local_100 = &DAT_04079e84;
  (**(code **)(local_f8 + 0x18))(&local_f8);
  uVar2 = local_110;
  ppuVar6 = local_118;
  lVar11 = 0;
  do {
    if (local_f0[lVar11] == '\0') {
LAB_01ea261c:
      uVar18 = (int)lVar11 + 1;
      goto LAB_01ea2620;
    }
    if (local_f0[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01ea261c;
    }
    if (local_f0[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01ea261c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  uVar18 = 1;
LAB_01ea2620:
  uVar9 = (ulong)local_110;
  local_148 = local_13c;
  local_140 = 0x20;
  local_150 = puVar13 + 0x10;
  local_11d = 0;
  local_13c[0] = '\0';
  if ((local_118 == &local_f8) && (local_110 == uVar18)) goto LAB_01ea2a44;
  (**(code **)(*local_118 + 0x18))(local_118);
  puVar13 = ppuVar6[1];
  lVar11 = 0;
  do {
    if (puVar13[lVar11] == '\0') goto LAB_01ea26c4;
    if (puVar13[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01ea26c4;
    }
    if (puVar13[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01ea26c4;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01ea26c4:
  if ((-1 < (int)uVar2) && ((int)uVar2 <= (int)lVar11)) {
    (**(code **)(local_150 + 0x18))(&local_150);
    pcVar16 = local_148;
    uVar17 = (ulong)local_140;
    if (0 < (int)local_140) {
      uVar19 = 0;
      do {
        puVar13 = local_118[1];
        if (puVar13[uVar9] == '\0') {
LAB_01ea2790:
          local_110 = (int)uVar9 + 1;
          pcVar16[uVar19 & 0xffffffff] = '\0';
          break;
        }
        (**(code **)(local_108 + 0x18))(&local_108);
        uVar14 = 0;
        bVar7 = true;
        cVar4 = puVar13[uVar9];
        do {
          if (local_100[uVar14] == '\0') break;
          if (local_100[uVar14] == cVar4) {
            if (bVar7) goto LAB_01ea2790;
            break;
          }
          if (local_100[uVar14 + 1] == '\0') break;
          if (local_100[uVar14 + 1] == cVar4) goto LAB_01ea2790;
          if (local_100[uVar14 + 2] == '\0') break;
          if (local_100[uVar14 + 2] == cVar4) goto LAB_01ea2790;
          bVar7 = uVar14 < 0x7fffe;
          uVar14 = uVar14 + 3;
        } while (uVar14 != 0x80001);
        pcVar16[uVar19] = cVar4;
        uVar19 = uVar19 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar19 != uVar17);
    }
  }
  pcVar16 = local_f0;
  uVar2 = local_110;
  ppuVar6 = local_118;
  if (local_15c != 0) {
    (**(code **)(local_150 + 0x18))(&local_150);
    pcVar10 = local_148;
    if (pcVar16 == local_148) goto LAB_01ea2a44;
    (**(code **)(local_150 + 0x18))(&local_150);
    lVar11 = 0;
    do {
      if (local_148[lVar11] == '\0') goto LAB_01ea2a18;
      if (local_148[lVar11 + 1] == '\0') goto LAB_01ea2a0c;
      if (local_148[lVar11 + 2] == '\0') goto LAB_01ea2a14;
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
LAB_01ea2a04:
    lVar11 = 0;
    goto LAB_01ea2a18;
  }
  uVar9 = (ulong)local_110;
  if ((local_118 != &local_f8) || (local_110 != uVar18)) {
    (**(code **)(*local_118 + 0x18))(local_118);
    puVar13 = ppuVar6[1];
    lVar11 = 0;
    do {
      if (puVar13[lVar11] == '\0') goto LAB_01ea28cc;
      if (puVar13[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01ea28cc;
      }
      if (puVar13[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01ea28cc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01ea28cc:
    if ((-1 < (int)uVar2) && ((int)uVar2 <= (int)lVar11)) {
      (**(code **)(local_150 + 0x18))(&local_150);
      pcVar16 = local_148;
      uVar17 = (ulong)local_140;
      if (0 < (int)local_140) {
        uVar19 = 0;
        do {
          puVar13 = local_118[1];
          if (puVar13[uVar9] == '\0') {
LAB_01ea2998:
            local_110 = (int)uVar9 + 1;
            pcVar16[uVar19 & 0xffffffff] = '\0';
            break;
          }
          (**(code **)(local_108 + 0x18))(&local_108);
          uVar14 = 0;
          bVar7 = true;
          cVar4 = puVar13[uVar9];
          do {
            if (local_100[uVar14] == '\0') break;
            if (local_100[uVar14] == cVar4) {
              if (bVar7) goto LAB_01ea2998;
              break;
            }
            if (local_100[uVar14 + 1] == '\0') break;
            if (local_100[uVar14 + 1] == cVar4) goto LAB_01ea2998;
            if (local_100[uVar14 + 2] == '\0') break;
            if (local_100[uVar14 + 2] == cVar4) goto LAB_01ea2998;
            bVar7 = uVar14 < 0x7fffe;
            uVar14 = uVar14 + 3;
          } while (uVar14 != 0x80001);
          pcVar16[uVar19] = cVar4;
          uVar19 = uVar19 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar19 != uVar17);
      }
    }
    pcVar16 = local_f0;
    (**(code **)(local_150 + 0x18))(&local_150);
    pcVar10 = local_148;
    if (pcVar16 == local_148) goto LAB_01ea2a44;
    (**(code **)(local_150 + 0x18))(&local_150);
    lVar11 = 0;
    do {
      if (local_148[lVar11] == '\0') goto LAB_01ea2a18;
      if (local_148[lVar11 + 1] == '\0') goto LAB_01ea2a0c;
      if (local_148[lVar11 + 2] == '\0') goto LAB_01ea2a14;
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    goto LAB_01ea2a04;
  }
  if (local_f0 == "") goto LAB_01ea2a44;
  iVar8 = 0;
  if (local_e8 < 1) {
    iVar8 = local_e8 + -1;
  }
  memset(local_f0,0,(long)iVar8);
  pcVar16 = pcVar16 + iVar8;
  goto LAB_01ea2a40;
LAB_01ea2a0c:
  lVar11 = lVar11 + 1;
  goto LAB_01ea2a18;
LAB_01ea2a14:
  lVar11 = lVar11 + 2;
LAB_01ea2a18:
  iVar8 = (int)lVar11;
  if (local_e8 <= (int)lVar11) {
    iVar8 = local_e8 + -1;
  }
  memcpy(pcVar16,pcVar10,(long)iVar8);
  pcVar16 = pcVar16 + iVar8;
LAB_01ea2a40:
  *pcVar16 = '\0';
LAB_01ea2a44:
  lVar11 = param_1[1];
  __dest = (void *)param_1[0x1041];
  (**(code **)(*(long *)(lVar11 + 0x4a8) + 0x18))(lVar11 + 0x4a8);
  __src = *(void **)(lVar11 + 0x4b0);
  if (__dest != __src) {
    (**(code **)(*(long *)(lVar11 + 0x4a8) + 0x18))(lVar11 + 0x4a8);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(lVar11 + 0x4b0) + lVar12) == '\0') goto LAB_01ea2ac0;
      lVar1 = *(long *)(lVar11 + 0x4b0) + lVar12;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01ea2ac0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01ea2ac0;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_01ea2ac0:
    iVar8 = (int)lVar12;
    if (*(int *)(param_1 + 0x1042) <= (int)lVar12) {
      iVar8 = *(int *)(param_1 + 0x1042) + -1;
    }
    memcpy(__dest,__src,(long)iVar8);
    *(undefined1 *)((long)__dest + (long)iVar8) = 0;
  }
  pcVar16 = (char *)param_1[0x1041];
  if (*pcVar16 == '\0') {
    (**(code **)(DAT_053939d8 + 0x18))(&DAT_053939d8);
    pcVar10 = DAT_053939e0;
    if (pcVar16 != DAT_053939e0) {
      (**(code **)(DAT_053939d8 + 0x18))(&DAT_053939d8);
      lVar11 = 0;
      do {
        if (DAT_053939e0[lVar11] == '\0') goto LAB_01ea2b6c;
        if (DAT_053939e0[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01ea2b6c;
        }
        if (DAT_053939e0[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01ea2b6c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01ea2b6c:
      iVar8 = (int)lVar11;
      if (*(int *)(param_1 + 0x1042) <= (int)lVar11) {
        iVar8 = *(int *)(param_1 + 0x1042) + -1;
      }
      memcpy(pcVar16,pcVar10,(long)iVar8);
      pcVar16[iVar8] = '\0';
    }
  }
  __s = (undefined8 *)param_1[0x104c];
  if (__s != &DAT_0407ebb1) {
    iVar8 = 0;
    if (*(int *)(param_1 + 0x104d) < 1) {
      iVar8 = *(int *)(param_1 + 0x104d) + -1;
    }
    memset(__s,0,(long)iVar8);
    *(undefined1 *)((long)__s + (long)iVar8) = 0;
  }
  local_150 = puVar15 + 0x10;
  local_148 = "Root";
  uVar9 = FUN_01186738(&local_c0,&local_150);
  if ((uVar9 & 1) == 0) {
    *(byte *)(param_1 + 0xf25) = *(byte *)(param_1 + 0xf25) & 0xfe;
  }
  else {
    pcVar10 = (char *)param_1[0xf27];
    (**(code **)(local_c0 + 0x18))(&local_c0);
    pcVar16 = local_b8;
    if (pcVar10 != local_b8) {
      (**(code **)(local_c0 + 0x18))(&local_c0);
      lVar11 = 0;
      do {
        if (local_b8[lVar11] == '\0') goto LAB_01ea2c7c;
        if (local_b8[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01ea2c7c;
        }
        if (local_b8[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01ea2c7c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01ea2c7c:
      iVar8 = (int)lVar11;
      if (*(int *)(param_1 + 0xf28) <= (int)lVar11) {
        iVar8 = *(int *)(param_1 + 0xf28) + -1;
      }
      memcpy(pcVar10,pcVar16,(long)iVar8);
      pcVar10[iVar8] = '\0';
    }
    pcVar10 = (char *)param_1[0xf32];
    (**(code **)(local_f8 + 0x18))(&local_f8);
    pcVar16 = local_f0;
    if (pcVar10 != local_f0) {
      (**(code **)(local_f8 + 0x18))(&local_f8);
      lVar11 = 0;
      do {
        if (local_f0[lVar11] == '\0') goto LAB_01ea2d1c;
        if (local_f0[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01ea2d1c;
        }
        if (local_f0[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01ea2d1c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01ea2d1c:
      iVar8 = (int)lVar11;
      if (*(int *)(param_1 + 0xf33) <= (int)lVar11) {
        iVar8 = *(int *)(param_1 + 0xf33) + -1;
      }
      memcpy(pcVar10,pcVar16,(long)iVar8);
      pcVar10[iVar8] = '\0';
    }
  }
  return;
}

