
/* WARNING: Type propagation algorithm not settling */

void FUN_03860f20(undefined *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  char *pcVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_12c;
  undefined *local_128;
  char *local_120;
  undefined *local_118;
  char *local_110;
  undefined *local_108;
  char *local_100;
  undefined *local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 local_a5;
  long local_a0 [2];
  
  puVar23 = PTR_DAT_04bb2020;
  local_f8 = PTR_DAT_04bb2020 + 0x10;
  local_f0 = "*SlideArea";
  uVar7 = FUN_03c688b0(param_2,&local_f8);
  *(undefined8 *)(param_1 + 0x270) = uVar7;
  plVar8 = *(long **)(param_1 + 0x58);
  local_a0[0] = 0;
  if (((plVar8 == (long *)0x0) || ((**(code **)(*plVar8 + 0x28))(plVar8,local_a0), local_a0[0] == 0)
      ) || (plVar8 = (long *)(local_a0[0] + 0xb8), *plVar8 == 0)) {
    pcVar9 = (char *)0x0;
    plVar8 = (long *)0x0;
    bVar6 = true;
    local_e8 = (char *)CONCAT44(local_e8._4_4_,0x40);
LAB_03861030:
    local_f8 = PTR_DAT_04bb2030 + 0x10;
    local_a5 = 0;
    local_f0 = (char *)((long)&local_e8 + 4);
    lVar14 = 0;
    do {
      if (pcVar9[lVar14] == '\0') {
LAB_03861068:
        iVar13 = (int)lVar14;
joined_r0x0386106c:
        if (0x3f < iVar13) {
          iVar13 = 0x3f;
        }
        goto LAB_03861074;
      }
      if (pcVar9[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_03861068;
      }
      if (pcVar9[lVar14 + 2] == '\0') {
        iVar13 = (int)lVar14 + 2;
        goto joined_r0x0386106c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    iVar13 = 0;
LAB_03861074:
    memcpy(local_f0,pcVar9,(long)iVar13);
    *(undefined1 *)((long)local_a0 + ((long)iVar13 - 0x44U)) = 0;
    pcVar9 = local_f0;
  }
  else {
    pcVar9 = (char *)FUN_00364d70(plVar8,"ListStartBtn");
    local_f0 = (char *)((long)&local_e8 + 4);
    local_a5 = 0;
    bVar6 = false;
    local_e8 = (char *)CONCAT44(local_e8._4_4_,0x40);
    if (local_f0 != pcVar9) goto LAB_03861030;
  }
  local_f8 = PTR_DAT_04bb2bc0 + 0x10;
  if (*pcVar9 != '\0') {
    local_108 = puVar23 + 0x10;
    uVar19 = 0;
    local_100 = "_";
    pcVar9[(long)(int)local_e8 + -1] = '\0';
    do {
      if (local_f0[uVar19] == '\0') goto LAB_0386111c;
      if (local_f0[uVar19 + 1] == '\0') {
        uVar19 = uVar19 + 1;
        goto LAB_0386111c;
      }
      if (local_f0[uVar19 + 2] == '\0') {
        uVar19 = uVar19 + 2;
        goto LAB_0386111c;
      }
      uVar19 = uVar19 + 3;
    } while (uVar19 != 0x80001);
    uVar19 = 0;
LAB_0386111c:
    (**(code **)(puVar23 + 0x28))(&local_108);
    lVar14 = 0;
    do {
      iVar13 = (int)uVar19;
      if (local_100[lVar14] == '\0') {
LAB_03861168:
        uVar18 = iVar13 - (int)lVar14;
        if ((int)uVar18 < 0) goto LAB_038612dc;
LAB_03861180:
        uVar19 = (ulong)uVar18;
        if (0 < (int)lVar14) goto LAB_0386118c;
        goto LAB_03861204;
      }
      if (local_100[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_03861168;
      }
      if (local_100[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        uVar18 = iVar13 - (int)lVar14;
        if (-1 < (int)uVar18) goto LAB_03861180;
        goto LAB_038612dc;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    if (-1 < iVar13) {
LAB_03861204:
      (**(code **)(local_108 + 0x18))(&local_108);
      iVar13 = (int)uVar19;
joined_r0x038611fc:
      if (0 < iVar13) {
        (**(code **)(local_f8 + 0x18))(&local_f8);
        lVar14 = 0;
        do {
          if (local_f0[lVar14] == '\0') goto LAB_03861270;
          if (local_f0[lVar14 + 1] == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_03861270;
          }
          if (local_f0[lVar14 + 2] == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_03861270;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_03861270:
        iVar13 = (int)lVar14 - (int)uVar19;
        (**(code **)(local_f8 + 0x18))(&local_f8);
        lVar14 = 0;
        do {
          if (local_f0[lVar14] == '\0') {
LAB_038612c8:
            iVar16 = (int)lVar14;
            goto joined_r0x038626d0;
          }
          if (local_f0[lVar14 + 1] == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_038612c8;
          }
          if (local_f0[lVar14 + 2] == '\0') {
            iVar16 = (int)lVar14 + 2;
            goto joined_r0x038626d0;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        iVar16 = 0;
joined_r0x038626d0:
        if (-1 < iVar13) {
          iVar15 = iVar16;
          if (iVar13 <= iVar16) {
            iVar15 = iVar13;
          }
          local_f0[iVar16 - iVar15] = '\0';
        }
      }
    }
    goto LAB_038612dc;
  }
  goto LAB_03861380;
  while( true ) {
    pcVar21 = local_120;
    lVar10 = lVar14;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (pcVar9[uVar19] != *pcVar21) break;
      if (pcVar9[uVar19] == '\0') goto LAB_03861708;
      pcVar9 = pcVar9 + 1;
      pcVar21 = pcVar21 + 1;
      if (lVar10 == 0) goto LAB_03861708;
    }
    uVar19 = uVar19 - 1;
    if ((int)uVar20 < 1) break;
LAB_03861690:
    pcVar9 = local_110;
    pcVar21 = local_110 + uVar19;
    (**(code **)(local_128 + 0x18))(&local_128);
    uVar20 = (uint)uVar19;
    puVar23 = PTR_DAT_04bb2020;
    if (pcVar21 == local_120) {
LAB_03861708:
      uVar18 = uVar20;
      break;
    }
  }
  goto LAB_03861740;
  while( true ) {
    pcVar21 = local_100;
    lVar10 = lVar14;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (pcVar9[uVar19] != *pcVar21) break;
      if (pcVar9[uVar19] == '\0') goto joined_r0x038611fc;
      pcVar9 = pcVar9 + 1;
      pcVar21 = pcVar21 + 1;
      if (lVar10 == 0) goto joined_r0x038611fc;
    }
    uVar19 = uVar19 - 1;
    if (iVar13 < 1) break;
LAB_0386118c:
    pcVar9 = local_f0;
    pcVar21 = local_f0 + uVar19;
    (**(code **)(local_108 + 0x18))(&local_108);
    iVar13 = (int)uVar19;
    puVar23 = PTR_DAT_04bb2020;
    if (pcVar21 == local_100) goto joined_r0x038611fc;
  }
LAB_038612dc:
  pcVar21 = *(char **)(param_1 + 0x220);
  (**(code **)(local_f8 + 0x18))(&local_f8);
  pcVar9 = local_f0;
  if (pcVar21 != local_f0) {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar14 = 0;
    do {
      if (local_f0[lVar14] == '\0') goto LAB_03861350;
      if (local_f0[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_03861350;
      }
      if (local_f0[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_03861350;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_03861350:
    iVar13 = (int)lVar14;
    if (*(int *)(param_1 + 0x228) <= (int)lVar14) {
      iVar13 = *(int *)(param_1 + 0x228) + -1;
    }
    memcpy(pcVar21,pcVar9,(long)iVar13);
    pcVar21[iVar13] = '\0';
    puVar23 = PTR_DAT_04bb2020;
  }
LAB_03861380:
  if (bVar6) {
    local_f8 = puVar23 + 0x10;
    local_f0 = (char *)0x0;
    if (local_a0[0] == 0) {
      fVar26 = 0.0;
      fVar25 = 0.0;
    }
    else {
LAB_038613d0:
      local_f8 = puVar23 + 0x10;
      uVar19 = 0;
      bVar5 = true;
      do {
        if (local_f0[uVar19] != "RootPane"[uVar19]) break;
        if (local_f0[uVar19] == '\0') {
          if (bVar5) goto LAB_0386142c;
          break;
        }
        bVar5 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80001);
      lVar14 = FUN_03c9c9b0(local_a0[0],&local_f8,*(undefined8 *)(local_a0[0] + 0x18));
      if (lVar14 != 0) goto LAB_03861488;
LAB_03861434:
      fVar26 = 0.0;
      fVar25 = 0.0;
      if (!bVar6) goto LAB_03861440;
LAB_03861490:
      local_100 = (char *)0x0;
      if (local_a0[0] != 0) goto LAB_038614a4;
    }
    local_100 = (char *)0x0;
    local_108 = puVar23 + 0x10;
    local_110 = (char *)0x0;
    fVar27 = 0.0;
    fVar28 = 0.0;
  }
  else {
    local_f0 = (char *)FUN_00364d70(plVar8,"SlideArea");
    local_f8 = puVar23 + 0x10;
    if (local_a0[0] == 0) {
      fVar25 = 0.0;
      fVar26 = 0.0;
    }
    else {
      if (local_f0 != "RootPane") goto LAB_038613d0;
LAB_0386142c:
      local_f8 = puVar23 + 0x10;
      lVar14 = *(long *)(local_a0[0] + 0x18);
      if (lVar14 == 0) goto LAB_03861434;
LAB_03861488:
      fVar25 = *(float *)(lVar14 + 0x50);
      fVar26 = *(float *)(lVar14 + 0x54);
      if (bVar6) goto LAB_03861490;
    }
LAB_03861440:
    local_100 = (char *)FUN_00364d70(plVar8,"ListStartBtn");
    local_108 = puVar23 + 0x10;
    if (local_a0[0] == 0) {
      fVar27 = 0.0;
      fVar28 = 0.0;
LAB_03861514:
      local_110 = (char *)FUN_00364d70(plVar8,"ListNextLineBtn");
    }
    else {
      if (local_100 == "RootPane") {
LAB_03861500:
        local_108 = puVar23 + 0x10;
        lVar14 = *(long *)(local_a0[0] + 0x18);
        if (lVar14 != 0) goto LAB_03861538;
LAB_03861508:
        fVar28 = 0.0;
        fVar27 = 0.0;
        if (!bVar6) goto LAB_03861514;
      }
      else {
LAB_038614a4:
        local_108 = puVar23 + 0x10;
        uVar19 = 0;
        bVar5 = true;
        do {
          if (local_100[uVar19] != "RootPane"[uVar19]) break;
          if (local_100[uVar19] == '\0') {
            if (bVar5) goto LAB_03861500;
            break;
          }
          bVar5 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
        lVar14 = FUN_03c9c9b0(local_a0[0],&local_108,*(undefined8 *)(local_a0[0] + 0x18));
        if (lVar14 == 0) goto LAB_03861508;
LAB_03861538:
        fVar27 = *(float *)(lVar14 + 0x30);
        fVar28 = *(float *)(lVar14 + 0x34);
        if (!bVar6) goto LAB_03861514;
      }
      local_110 = (char *)0x0;
    }
  }
  fVar29 = 0.0;
  puVar1 = puVar23 + 0x10;
  local_118 = puVar1;
  if (local_a0[0] == 0) {
    fVar30 = 0.0;
  }
  else {
    if (local_110 == "RootPane") {
LAB_038615a8:
      lVar14 = *(long *)(local_a0[0] + 0x18);
    }
    else {
      uVar19 = 0;
      bVar5 = true;
      do {
        if (local_110[uVar19] != "RootPane"[uVar19]) break;
        if (local_110[uVar19] == '\0') {
          if (bVar5) goto LAB_038615a8;
          break;
        }
        bVar5 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80001);
      lVar14 = FUN_03c9c9b0(local_a0[0],&local_118,*(undefined8 *)(local_a0[0] + 0x18));
    }
    fVar30 = 0.0;
    if (lVar14 != 0) {
      fVar30 = *(float *)(lVar14 + 0x30);
      fVar29 = *(float *)(lVar14 + 0x34);
    }
  }
  local_120 = "_";
  local_128 = puVar1;
  (**(code **)(local_118 + 0x18))(&local_118);
  lVar14 = 0;
  do {
    if (local_110[lVar14] == '\0') goto LAB_0386162c;
    if (local_110[lVar14 + 1] == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_0386162c;
    }
    if (local_110[lVar14 + 2] == '\0') {
      lVar14 = lVar14 + 2;
      goto LAB_0386162c;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  lVar14 = 0;
LAB_0386162c:
  uVar18 = (uint)lVar14;
  (**(code **)(local_128 + 0x18))(&local_128);
  lVar14 = 0;
  do {
    if (local_120[lVar14] == '\0') {
LAB_03861678:
      uVar18 = uVar18 - (int)lVar14;
      if ((int)uVar18 < 0) goto LAB_03861724;
LAB_03861680:
      uVar19 = (ulong)uVar18;
      if ((int)lVar14 < 1) goto LAB_03861730;
      uVar18 = 0xffffffff;
      goto LAB_03861690;
    }
    if (local_120[lVar14 + 1] == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_03861678;
    }
    if (local_120[lVar14 + 2] == '\0') {
      lVar14 = lVar14 + 2;
      uVar18 = uVar18 - (int)lVar14;
      if (-1 < (int)uVar18) goto LAB_03861680;
      goto LAB_03861724;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  if ((int)uVar18 < 0) {
LAB_03861724:
    uVar18 = 0xffffffff;
  }
  else {
LAB_03861730:
    (**(code **)(local_128 + 0x18))(&local_128);
  }
LAB_03861740:
  (**(code **)(local_118 + 0x18))(&local_118);
  lVar14 = 0;
  do {
    if (local_110[lVar14] == '\0') goto LAB_0386179c;
    if (local_110[lVar14 + 1] == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_0386179c;
    }
    if (local_110[lVar14 + 2] == '\0') {
      lVar14 = lVar14 + 2;
      goto LAB_0386179c;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  lVar14 = 0;
LAB_0386179c:
  local_12c = 0;
  local_120 = *(char **)(PTR_PTR_04bb2238 + 8);
  if ((int)uVar18 < (int)lVar14 && -2 < (int)uVar18) {
    local_120 = local_110 + (uVar18 + 1);
  }
  local_128 = puVar23 + 0x10;
  uVar19 = FUN_038d2c30(&local_12c,&local_128,10);
  fVar27 = fVar27 - fVar30;
  iVar13 = local_12c;
  if ((uVar19 & 1) == 0) {
    iVar13 = 1;
  }
  *(int *)(param_1 + 0x2e8) = iVar13;
  fVar26 = fVar26 / (fVar28 - fVar29);
  if (0.0001 < fVar27 || fVar27 < -0.0001) {
    fVar26 = fVar25 / fVar27;
  }
  iVar15 = (int)fVar26;
  iVar16 = -iVar15;
  if (-1 < iVar15) {
    iVar16 = iVar15;
  }
  uVar18 = iVar16 * iVar13;
  *(int *)(param_1 + 0x2ec) = iVar16;
  if (uVar18 < 2) {
    uVar18 = 1;
  }
  *(uint *)(param_1 + 0x2f4) = uVar18;
  *(uint *)(param_1 + 0x2f0) = uVar18;
  if (bVar6) {
LAB_038618cc:
    iVar13 = 4;
  }
  else {
    pcVar9 = (char *)FUN_00364d70(plVar8,"DisplayArea");
    if (pcVar9 == (char *)0x0) goto LAB_038618cc;
    local_f8 = puVar23 + 0x10;
    local_f0 = pcVar9;
    if (*pcVar9 == '\0') goto LAB_038618cc;
    fVar25 = 0.0;
    if (local_a0[0] == 0) {
      fVar26 = 0.0;
    }
    else {
      if (pcVar9 == "RootPane") {
LAB_038626dc:
        lVar14 = *(long *)(local_a0[0] + 0x18);
      }
      else {
        uVar19 = 0;
        bVar6 = true;
        do {
          if (pcVar9[uVar19] != "RootPane"[uVar19]) break;
          if (pcVar9[uVar19] == '\0') {
            if (bVar6) goto LAB_038626dc;
            break;
          }
          bVar6 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
        lVar14 = FUN_03c9c9b0(local_a0[0],&local_f8,*(undefined8 *)(local_a0[0] + 0x18));
      }
      fVar26 = 0.0;
      if (lVar14 != 0) {
        fVar26 = *(float *)(lVar14 + 0x50);
        fVar25 = *(float *)(lVar14 + 0x54);
      }
    }
    if (0.0001 < fVar27 || fVar27 < -0.0001) {
      fVar25 = fVar26 / fVar27;
    }
    else {
      fVar25 = fVar25 / (fVar28 - fVar29);
    }
    iVar13 = (int)fVar25;
    iVar16 = -iVar13;
    if (-1 < iVar13) {
      iVar16 = iVar13;
    }
    iVar13 = (iVar16 - *(int *)(param_1 + 0x2ec)) + (iVar16 - *(int *)(param_1 + 0x2ec) & 1U) + 4;
    uVar18 = *(int *)(param_1 + 0x2e8) * iVar16;
    if (uVar18 < 2) {
      uVar18 = 1;
    }
    *(uint *)(param_1 + 0x2f0) = uVar18;
  }
  puVar23 = param_1 + 0x4e0;
  *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f4) + *(int *)(param_1 + 0x2e8) * iVar13;
  puVar4 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    puVar11 = malloc(200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    puVar11 = (undefined8 *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,200,8);
  }
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x14] = 0;
  puVar11[0x15] = 0;
  puVar11[0x16] = 0;
  puVar24 = PTR_DAT_04bc77b8;
  puVar2 = PTR_DAT_04bc77b8 + 0x10;
  puVar11[0xb] = puVar2;
  puVar11[0xf] = puVar2;
  puVar11[0x13] = puVar2;
  *(undefined1 *)((long)puVar11 + 0xbe) = 0;
  puVar11[0x18] = 0;
  puVar11[2] = 0xffffffff00000000;
  puVar11[3] = puVar2;
  *(undefined4 *)(puVar11 + 0x17) = 0xfffffffe;
  *(undefined2 *)((long)puVar11 + 0xbc) = 0x101;
  puVar11[7] = puVar2;
  puVar11[8] = 0;
  local_f8 = &LAB_03862978;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,3,&local_108,&local_f8);
  local_f8 = &LAB_03862a98;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,1,&local_108,&local_f8);
  *(undefined8 **)(param_1 + 0x480) = puVar11;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    plVar8 = malloc(0x30);
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
LAB_03861a98:
    plVar12 = malloc(8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x30,8);
    }
    lVar14 = *(long *)puVar1;
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
    if (lVar14 == 0) goto LAB_03861a98;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,8,8);
  }
  *plVar12 = (long)(PTR_DAT_04bcb4d8 + 0x10);
  plVar8[2] = (long)plVar12;
  plVar8[3] = (long)plVar12;
  puVar2 = PTR_DAT_04bcb4e8;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *plVar8 = (long)(puVar2 + 0x10);
  *plVar17 = *(long *)(param_1 + 0x480);
  FUN_03858e90(plVar8);
  lVar14 = *(long *)puVar1;
  plVar8[3] = (long)puVar23;
  *(long **)(param_1 + 0x488) = plVar8;
  if (lVar14 == 0) {
    puVar11 = malloc(200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    puVar11 = (undefined8 *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,200,8);
  }
  puVar3 = puVar24 + 0x10;
  *(undefined1 *)((long)puVar11 + 0xbe) = 0;
  puVar11[2] = 0xffffffff00000000;
  puVar11[3] = puVar3;
  *(undefined4 *)(puVar11 + 0x17) = 0xfffffffe;
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined2 *)((long)puVar11 + 0xbc) = 0x101;
  puVar11[0x18] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xb] = puVar3;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0xf] = puVar3;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x14] = 0;
  puVar11[0x13] = puVar3;
  puVar11[0x15] = 0;
  puVar11[0x16] = 0;
  puVar11[7] = puVar3;
  puVar11[8] = 0;
  local_f8 = &LAB_03862978;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,3,&local_108,&local_f8);
  local_f8 = &LAB_03862a98;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,1,&local_108,&local_f8);
  *(undefined8 **)(param_1 + 0x490) = puVar11;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    plVar8 = malloc(0x30);
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
LAB_03861c7c:
    plVar12 = malloc(8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x30,8);
    }
    lVar14 = *(long *)puVar1;
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
    if (lVar14 == 0) {
      puVar24 = PTR_DAT_04bc77b8;
      goto LAB_03861c7c;
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,8,8);
    puVar24 = PTR_DAT_04bc77b8;
  }
  *plVar12 = (long)(PTR_DAT_04bcb4d8 + 0x10);
  *plVar8 = (long)(puVar2 + 0x10);
  plVar8[2] = (long)plVar12;
  plVar8[3] = (long)plVar12;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *plVar17 = *(long *)(param_1 + 0x490);
  FUN_03858e90(plVar8);
  lVar14 = *(long *)puVar1;
  plVar8[3] = (long)puVar23;
  *(long **)(param_1 + 0x498) = plVar8;
  if (lVar14 == 0) {
    puVar11 = malloc(200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    puVar11 = (undefined8 *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,200,8);
  }
  puVar3 = puVar24 + 0x10;
  *(undefined1 *)((long)puVar11 + 0xbe) = 0;
  puVar11[2] = 0xffffffff00000000;
  puVar11[3] = puVar3;
  *(undefined4 *)(puVar11 + 0x17) = 0xfffffffe;
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined2 *)((long)puVar11 + 0xbc) = 0x101;
  puVar11[0x18] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xb] = puVar3;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0xf] = puVar3;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x14] = 0;
  puVar11[0x13] = puVar3;
  puVar11[0x15] = 0;
  puVar11[0x16] = 0;
  puVar11[7] = puVar3;
  puVar11[8] = 0;
  local_f8 = &LAB_03862978;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,3,&local_108,&local_f8);
  local_f8 = &LAB_03862a98;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,1,&local_108,&local_f8);
  *(undefined8 **)(param_1 + 0x4a0) = puVar11;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    plVar8 = malloc(0x30);
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
LAB_03861e58:
    plVar12 = malloc(8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x30,8);
    }
    lVar14 = *(long *)puVar1;
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
    if (lVar14 == 0) {
      puVar24 = PTR_DAT_04bc77b8;
      goto LAB_03861e58;
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,8,8);
    puVar24 = PTR_DAT_04bc77b8;
  }
  *plVar12 = (long)(PTR_DAT_04bcb4d8 + 0x10);
  *plVar8 = (long)(puVar2 + 0x10);
  plVar8[2] = (long)plVar12;
  plVar8[3] = (long)plVar12;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *plVar17 = *(long *)(param_1 + 0x4a0);
  FUN_03858e90(plVar8);
  lVar14 = *(long *)puVar1;
  plVar8[3] = (long)puVar23;
  *(long **)(param_1 + 0x4a8) = plVar8;
  if (lVar14 == 0) {
    puVar11 = malloc(200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    puVar11 = (undefined8 *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,200,8);
  }
  puVar3 = puVar24 + 0x10;
  *(undefined1 *)((long)puVar11 + 0xbe) = 0;
  puVar11[2] = 0xffffffff00000000;
  puVar11[3] = puVar3;
  *(undefined4 *)(puVar11 + 0x17) = 0xfffffffe;
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined2 *)((long)puVar11 + 0xbc) = 0x101;
  puVar11[0x18] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xb] = puVar3;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0xf] = puVar3;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x14] = 0;
  puVar11[0x13] = puVar3;
  puVar11[0x15] = 0;
  puVar11[0x16] = 0;
  puVar11[7] = puVar3;
  puVar11[8] = 0;
  local_f8 = &LAB_03862978;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,3,&local_108,&local_f8);
  local_f8 = &LAB_03862a98;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,1,&local_108,&local_f8);
  lVar14 = *(long *)puVar1;
  *(undefined8 **)(param_1 + 0x4b0) = puVar11;
  if (lVar14 == 0) {
    plVar8 = malloc(0x30);
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
LAB_03862024:
    plVar12 = malloc(8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x30,8);
    }
    lVar14 = *(long *)puVar1;
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
    if (lVar14 == 0) goto LAB_03862024;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,8,8);
  }
  *plVar12 = (long)(PTR_DAT_04bcb4d8 + 0x10);
  *plVar8 = (long)(puVar2 + 0x10);
  plVar8[2] = (long)plVar12;
  plVar8[3] = (long)plVar12;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *plVar17 = *(long *)(param_1 + 0x4b0);
  FUN_03858e90(plVar8);
  lVar14 = *(long *)puVar1;
  plVar8[3] = (long)puVar23;
  *(long **)(param_1 + 0x4b8) = plVar8;
  if (lVar14 == 0) {
    puVar11 = malloc(200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    puVar11 = (undefined8 *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,200,8);
  }
  puVar23 = puVar24 + 0x10;
  *(undefined1 *)((long)puVar11 + 0xbe) = 0;
  puVar11[2] = 0xffffffff00000000;
  puVar11[3] = puVar23;
  *(undefined4 *)(puVar11 + 0x17) = 0xfffffffe;
  *(undefined2 *)((long)puVar11 + 0xbc) = 0x101;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[0x18] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xb] = puVar23;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0xf] = puVar23;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x14] = 0;
  puVar11[0x13] = puVar23;
  puVar11[0x15] = 0;
  puVar11[0x16] = 0;
  puVar11[7] = puVar23;
  puVar11[8] = 0;
  local_f8 = &LAB_03862ab4;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,4,&local_108,&local_f8);
  local_f8 = &LAB_03862bb4;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,1,&local_108,&local_f8);
  *(undefined8 **)(param_1 + 0x4c0) = puVar11;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    plVar8 = malloc(0x30);
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
LAB_03862214:
    plVar12 = malloc(8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x30,8);
    }
    lVar14 = *(long *)puVar1;
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
    if (lVar14 == 0) {
      puVar24 = PTR_DAT_04bc77b8;
      goto LAB_03862214;
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,8,8);
    puVar24 = PTR_DAT_04bc77b8;
  }
  *plVar12 = (long)(PTR_DAT_04bcb4d8 + 0x10);
  *plVar8 = (long)(puVar2 + 0x10);
  plVar8[2] = (long)plVar12;
  plVar8[3] = (long)plVar12;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *plVar17 = *(long *)(param_1 + 0x4c0);
  FUN_03858e90(plVar8);
  lVar14 = *(long *)puVar1;
  plVar8[3] = (long)(param_1 + 0x4e8);
  *(long **)(param_1 + 0x4c8) = plVar8;
  if (lVar14 == 0) {
    puVar11 = malloc(200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar11 = (undefined8 *)(lVar14 + 8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xa8);
    }
    puVar11 = (undefined8 *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,200,8);
  }
  puVar24 = puVar24 + 0x10;
  *(undefined1 *)((long)puVar11 + 0xbe) = 0;
  puVar11[2] = 0xffffffff00000000;
  puVar11[3] = puVar24;
  *(undefined4 *)(puVar11 + 0x17) = 0xfffffffe;
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined2 *)((long)puVar11 + 0xbc) = 0x101;
  puVar11[0x18] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xb] = puVar24;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0xf] = puVar24;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x14] = 0;
  puVar11[0x13] = puVar24;
  puVar11[0x15] = 0;
  puVar11[0x16] = 0;
  puVar11[7] = puVar24;
  puVar11[8] = 0;
  local_f8 = &LAB_03862ab4;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,4,&local_108,&local_f8);
  local_f8 = &LAB_03862bb4;
  local_f0 = (char *)0x0;
  local_108 = param_1;
  FUN_03862764(puVar11,1,&local_108,&local_f8);
  lVar14 = *(long *)puVar1;
  *(undefined8 **)(param_1 + 0x4d0) = puVar11;
  if (lVar14 == 0) {
    plVar8 = malloc(0x30);
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x30,8);
    }
    lVar14 = *(long *)puVar1;
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
    if (lVar14 != 0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      puVar11 = (undefined8 *)(lVar14 + 8);
      if (lVar10 != 0) {
        puVar11 = (undefined8 *)(lVar10 + 0xa8);
      }
      plVar12 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,8,8);
      goto LAB_038623f0;
    }
  }
  plVar12 = malloc(8);
LAB_038623f0:
  *plVar12 = (long)(PTR_DAT_04bcb4d8 + 0x10);
  *plVar8 = (long)(puVar2 + 0x10);
  plVar8[2] = (long)plVar12;
  plVar8[3] = (long)plVar12;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *plVar17 = *(long *)(param_1 + 0x4d0);
  FUN_03858e90(plVar8);
  plVar8[3] = (long)(param_1 + 0x4e8);
  lVar14 = *(long *)puVar1;
  *(long **)(param_1 + 0x4d8) = plVar8;
  if (lVar14 == 0) {
    puVar11 = malloc(0xa8);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0xa8,8);
    }
  }
  FUN_03c5ba20(puVar11,2);
  *puVar11 = &PTR_FUN_04b5f7b0;
  puVar11[0x11] = &PTR_LAB_04b5f858;
  local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
  *(undefined2 *)(puVar11 + 4) = 1;
  *(undefined4 *)((long)puVar11 + 0x2c) = 0x80000000;
  *(undefined4 *)(puVar11 + 8) = 0;
  *(undefined4 *)((long)puVar11 + 0x24) = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  FUN_03c5bcd4(puVar11);
  if ((undefined8 *)puVar11[10] != puVar11 + 9) {
    lVar14 = (long)*(int *)((long)puVar11 + 0x5c);
    puVar22 = (undefined8 *)((long)puVar11[10] - lVar14);
    do {
      (**(code **)*puVar22)(puVar22,*(undefined4 *)((long)puVar11 + 0x24));
      puVar22 = (undefined8 *)(*(long *)((long)puVar22 + lVar14 + 8) - lVar14);
    } while (puVar22 != (undefined8 *)((long)(puVar11 + 9) - lVar14));
  }
  lVar14 = *(long *)(param_2 + 0x18);
  plVar17 = (long *)(lVar14 + 0x60);
  lVar10 = *plVar17;
  plVar8 = (long *)((long)*(int *)(lVar14 + 0x74) + (long)puVar11);
  *plVar17 = (long)plVar8;
  *plVar8 = lVar10;
  plVar8[1] = (long)plVar17;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar8;
  }
  lVar10 = *(long *)puVar1;
  *(int *)(lVar14 + 0x70) = *(int *)(lVar14 + 0x70) + 1;
  if (lVar10 == 0) {
    plVar8 = malloc(0x10);
  }
  else {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar14 != 0) {
      plVar8 = (long *)(lVar14 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x10,0xfffffffc);
    }
  }
  *plVar8 = param_2;
  puVar23 = PTR_DAT_04bb2020;
  puVar11[3] = *(undefined8 *)(param_2 + 0x18);
  plVar8[1] = (long)puVar11;
  puVar4 = PTR_PTR_04bb2238;
  puVar23 = puVar23 + 0x10;
  *(long **)(param_2 + 0x20) = plVar8;
  local_f8 = (undefined *)0x0;
  local_e8 = "*Select;<*Unselect";
  local_d8 = *(undefined8 *)(puVar4 + 8);
  local_d0 = 0;
  local_ce = 1;
  local_cc = 0x3f800000;
  local_c8 = 0;
  local_f0 = puVar23;
  puStack_e0 = puVar23;
  FUN_03c5cb04(plVar8,1,0,&local_f8);
  local_d8 = *(undefined8 *)(puVar4 + 8);
  local_d0 = 0;
  local_ce = 1;
  local_f8 = (undefined *)0x0;
  local_cc = 0x3f800000;
  local_c8 = 0;
  local_e8 = "*Unselect;<*Select";
  local_f0 = puVar23;
  puStack_e0 = puVar23;
  FUN_03c5cb04(plVar8,0,1,&local_f8);
  lVar14 = plVar8[1];
  if (*(long *)puVar1 == 0) {
    free(plVar8);
  }
  else {
    plVar17 = (long *)FUN_038cb610(*(long *)puVar1,plVar8);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x38))(plVar17,plVar8);
    }
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(long *)(param_1 + 0x288) = lVar14;
  FUN_03d6627c(param_1,param_2,param_3);
  return;
}

