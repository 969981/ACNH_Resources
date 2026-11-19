
undefined8 FUN_038f67d0(long *param_1,long *param_2,long *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  char *pcVar23;
  uint uVar24;
  uint uVar25;
  undefined **local_2f8;
  undefined **local_2f0;
  undefined **local_2b8;
  char *local_2b0;
  int local_2a8;
  long *local_2a0;
  uint local_298;
  undefined *local_290;
  undefined1 *local_288;
  undefined *local_280;
  char *local_278;
  uint local_270;
  char local_26c [259];
  undefined1 local_169;
  int local_168 [66];
  
  (**(code **)(*param_1 + 0x18))();
  iVar2 = (int)param_1[2];
  local_169 = 0;
  local_270 = 0x104;
  puVar17 = (undefined1 *)param_1[1];
  local_26c[0] = '\0';
  local_278 = local_26c;
  local_280 = PTR_DAT_04bbd6c8 + 0x10;
  *puVar17 = 0;
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar16 = 0;
  bVar7 = true;
  do {
    cVar3 = *(char *)(param_3[1] + uVar16);
    if (cVar3 == '\0') break;
    if (cVar3 == ':') {
      if (bVar7) goto LAB_038f69e0;
      break;
    }
    lVar12 = param_3[1] + uVar16;
    cVar3 = *(char *)(lVar12 + 1);
    if (cVar3 == '\0') break;
    if (cVar3 == ':') goto LAB_038f69e0;
    cVar3 = *(char *)(lVar12 + 2);
    if (cVar3 == '\0') break;
    if (cVar3 == ':') goto LAB_038f69e0;
    bVar7 = uVar16 < 0x7fffe;
    uVar16 = uVar16 + 3;
  } while (uVar16 != 0x80001);
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar16 = 0;
  bVar7 = true;
  do {
    bVar4 = *(byte *)(param_2[1] + uVar16);
    uVar24 = (uint)bVar4;
    uVar25 = uVar24;
    if (bVar4 == 0) goto LAB_038f69e8;
    if (bVar4 == 0x3a) {
      if (bVar7) {
LAB_038f693c:
        local_298 = 0;
        local_290 = PTR_DAT_04bb2020 + 0x10;
        local_288 = &DAT_040bd1e9;
        local_2a0 = param_2;
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar12 = 0;
        goto LAB_038f6980;
      }
      break;
    }
    lVar12 = param_2[1] + uVar16;
    bVar4 = *(byte *)(lVar12 + 1);
    uVar24 = (uint)bVar4;
    uVar25 = uVar24;
    if (bVar4 == 0) goto LAB_038f69e8;
    if (bVar4 == 0x3a) goto LAB_038f693c;
    bVar4 = *(byte *)(lVar12 + 2);
    uVar24 = (uint)bVar4;
    uVar25 = uVar24;
    if (bVar4 == 0) goto LAB_038f69e8;
    if (bVar4 == 0x3a) goto LAB_038f693c;
    bVar7 = uVar16 < 0x7fffe;
    uVar16 = uVar16 + 3;
  } while (uVar16 != 0x80001);
  goto LAB_038f69e0;
  while( true ) {
    pcVar14 = local_2b0;
    lVar12 = lVar13;
    while( true ) {
      lVar12 = lVar12 + -1;
      if (pcVar23[uVar16] != *pcVar14) break;
      if ((pcVar23[uVar16] == '\0') || (pcVar23 = pcVar23 + 1, pcVar14 = pcVar14 + 1, lVar12 == 0))
      goto LAB_038f7570;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == (iVar10 - iVar11) + 1) break;
LAB_038f74f4:
    pcVar23 = local_278;
    pcVar14 = local_278 + uVar16;
    (*(code *)local_2b8[3])(&local_2b8);
    if (pcVar14 == local_2b0) {
LAB_038f7570:
      if ((int)uVar16 != -1) goto LAB_038f77b0;
      break;
    }
  }
LAB_038f7578:
  local_2b0 = puVar17 + uVar24;
  local_2a8 = iVar2 - uVar24;
  local_2b8 = &PTR_LAB_048f96d0;
  if (local_2a8 < 1) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = 0;
    ppuVar15 = (undefined **)(PTR_DAT_04bb2030 + 0x10);
  }
  else {
    local_2b0[local_2a8 - 1] = 0;
    ppuVar15 = local_2f8;
  }
  pcVar23 = local_2b0;
  (*(code *)ppuVar15[3])(&local_2b8);
  lVar12 = 0;
  do {
    if (local_2b0[lVar12] == '\0') goto LAB_038f761c;
    if (local_2b0[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_038f761c;
    }
    if (local_2b0[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_038f761c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_038f761c:
  uVar5 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_280 + 0x18))(&local_280);
  lVar12 = 0;
  do {
    if (local_278[lVar12] == '\0') goto LAB_038f767c;
    if (local_278[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_038f767c;
    }
    if (local_278[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_038f767c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_038f767c:
  uVar20 = (uint)lVar12;
  if ((int)(local_2a8 - uVar5) <= (int)(uint)lVar12) {
    uVar20 = local_2a8 + ~uVar5;
  }
  if ((int)uVar20 < 1) {
    uVar20 = 0;
  }
  else {
    (**(code **)(local_280 + 0x18))(&local_280);
    memcpy(pcVar23 + uVar5,local_278,(ulong)uVar20);
    pcVar23[(int)(uVar20 + uVar5)] = 0;
  }
  uVar20 = uVar20 + uVar24;
  local_2b0 = puVar17 + uVar20;
  local_2a8 = iVar2 - uVar20;
  local_2b8 = &PTR_LAB_048f96d0;
  if (local_2a8 < 1) {
    local_2b0 = (char *)0x0;
    local_2a8 = 0;
  }
  else {
    local_2b0[local_2a8 - 1] = '\0';
  }
  (*(code *)PTR_FUN_048f96e8)(&local_2b8);
  lVar12 = 0;
  do {
    if (local_2b0[lVar12] == '\0') goto LAB_038f776c;
    if (local_2b0[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_038f776c;
    }
    if (local_2b0[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_038f776c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_038f776c:
  iVar10 = (int)lVar12;
  bVar7 = iVar10 < local_2a8 + -1;
  if (bVar7) {
    (local_2b0 + iVar10)[0] = '/';
    (local_2b0 + iVar10)[1] = '\0';
  }
  uVar16 = (ulong)uVar25;
  bVar8 = 0x3f < uVar25;
  uVar24 = bVar7 + uVar20;
  uVar25 = uVar25 + 1;
  if (bVar8) {
    uVar16 = 0;
  }
  local_168[uVar16] = iVar22 + 1;
LAB_038f77b0:
  if ((local_2a0 != param_2) || (local_298 != uVar9)) goto LAB_038f70c0;
  goto LAB_038f69e8;
  while( true ) {
    lVar13 = param_2[1] + lVar12;
    if (*(char *)(lVar13 + 1) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_038f69bc;
    }
    if (*(char *)(lVar13 + 2) == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_038f69bc;
    }
    lVar12 = lVar12 + 3;
    if (lVar12 == 0x80001) break;
LAB_038f6980:
    if (*(char *)(param_2[1] + lVar12) == '\0') {
LAB_038f69bc:
      uVar9 = (int)lVar12 + 1;
      goto LAB_038f69c0;
    }
  }
  uVar9 = 1;
LAB_038f69c0:
  if ((local_2a0 != param_2) || (local_298 != uVar9)) {
    uVar24 = 0;
    uVar25 = 0;
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_2f8 = &PTR_LAB_048f96d0;
LAB_038f70c0:
    uVar5 = local_298;
    plVar6 = local_2a0;
    (**(code **)(*local_2a0 + 0x18))(local_2a0);
    lVar12 = 0;
    do {
      if (*(char *)(plVar6[1] + lVar12) == '\0') {
LAB_038f7124:
        iVar10 = (int)lVar12;
        goto joined_r0x038f7128;
      }
      lVar13 = plVar6[1] + lVar12;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_038f7124;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        iVar10 = (int)lVar12 + 2;
        goto joined_r0x038f7128;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    iVar10 = 0;
joined_r0x038f7128:
    iVar22 = 0;
    if ((-1 < (int)uVar5) && (iVar22 = 0, (int)uVar5 <= iVar10)) {
      (**(code **)(local_280 + 0x18))(&local_280);
      pcVar23 = local_278;
      uVar16 = (ulong)local_270;
      if ((int)local_270 < 1) {
        iVar22 = 0;
      }
      else {
        uVar21 = 0;
        uVar19 = (ulong)uVar5;
        do {
          lVar12 = local_2a0[1];
          if (*(char *)(lVar12 + uVar19) == '\0') {
LAB_038f7210:
            local_298 = (int)uVar19 + 1;
            iVar22 = (int)uVar21;
            pcVar23[uVar21 & 0xffffffff] = '\0';
            break;
          }
          (**(code **)(local_290 + 0x18))(&local_290);
          uVar18 = 0;
          bVar7 = true;
          cVar3 = *(char *)(lVar12 + uVar19);
          do {
            if (local_288[uVar18] == '\0') break;
            if (local_288[uVar18] == cVar3) {
              if (bVar7) goto LAB_038f7210;
              break;
            }
            if (local_288[uVar18 + 1] == '\0') break;
            if (local_288[uVar18 + 1] == cVar3) goto LAB_038f7210;
            if (local_288[uVar18 + 2] == '\0') break;
            if (local_288[uVar18 + 2] == cVar3) goto LAB_038f7210;
            bVar7 = uVar18 < 0x7fffe;
            uVar18 = uVar18 + 3;
          } while (uVar18 != 0x80001);
          pcVar23[uVar21] = cVar3;
          uVar21 = uVar21 + 1;
          iVar22 = 0;
          uVar19 = uVar19 + 1;
        } while (uVar21 != uVar16);
      }
    }
    local_2b0 = ".";
    local_2b8 = ppuVar1;
    (**(code **)(local_280 + 0x18))(&local_280);
    (**(code **)(local_280 + 0x18))(&local_280);
    pcVar23 = local_278;
    (*(code *)local_2b8[3])(&local_2b8);
    if (pcVar23 != local_2b0) {
      if (*local_278 == *local_2b0) {
        if (*local_278 != '\0') {
          lVar12 = 0x7fffe;
          pcVar23 = local_2b0;
          pcVar14 = local_278;
          do {
            if (pcVar14[1] != pcVar23[1]) goto LAB_038f72e4;
            if (pcVar14[1] == '\0') break;
            if (pcVar14[2] != pcVar23[2]) goto LAB_038f72e4;
            if (pcVar14[2] == '\0') break;
            if ((lVar12 == 0) || (cVar3 = pcVar14[3], cVar3 != pcVar23[3])) goto LAB_038f72e4;
            lVar12 = lVar12 + -3;
            pcVar23 = pcVar23 + 3;
            pcVar14 = pcVar14 + 3;
          } while (cVar3 != '\0');
        }
        goto LAB_038f77b0;
      }
LAB_038f72e4:
      local_2b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_2b0 = "..";
      (**(code **)(local_280 + 0x18))(&local_280);
      (**(code **)(local_280 + 0x18))(&local_280);
      pcVar23 = local_278;
      (*(code *)local_2b8[3])(&local_2b8);
      if (pcVar23 == local_2b0) {
LAB_038f73b0:
        if (uVar25 == 0) {
          return 0;
        }
        uVar5 = uVar25 - 1;
        uVar16 = (ulong)uVar5;
        if (0x40 < uVar25) {
          uVar16 = 0;
        }
        uVar24 = uVar24 - local_168[uVar16];
        uVar25 = uVar5;
        if ((int)uVar24 < (int)param_1[2]) {
          *(undefined1 *)(param_1[1] + (ulong)(uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU))) = 0;
        }
        else {
          (**(code **)(*param_1 + 0x18))();
        }
        goto LAB_038f77b0;
      }
      if (*local_278 == *local_2b0) {
        if (*local_278 != '\0') {
          lVar12 = 0x7fffe;
          pcVar23 = local_2b0;
          pcVar14 = local_278;
          do {
            if (pcVar14[1] != pcVar23[1]) goto LAB_038f73f0;
            if (pcVar14[1] == '\0') break;
            if (pcVar14[2] != pcVar23[2]) goto LAB_038f73f0;
            if (pcVar14[2] == '\0') break;
            if ((lVar12 == 0) || (cVar3 = pcVar14[3], cVar3 != pcVar23[3])) goto LAB_038f73f0;
            lVar12 = lVar12 + -3;
            pcVar23 = pcVar23 + 3;
            pcVar14 = pcVar14 + 3;
          } while (cVar3 != '\0');
        }
        goto LAB_038f73b0;
      }
LAB_038f73f0:
      local_2b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_2b0 = ".";
      (**(code **)(local_280 + 0x18))(&local_280);
      lVar12 = 0;
      do {
        if (local_278[lVar12] == '\0') goto LAB_038f7470;
        if (local_278[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_038f7470;
        }
        if (local_278[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_038f7470;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_038f7470:
      (*(code *)local_2b8[3])(&local_2b8);
      lVar13 = 0;
      do {
        iVar10 = (int)lVar12;
        if (local_2b0[lVar13] == '\0') {
LAB_038f74c4:
          iVar11 = (int)lVar13;
          if (iVar10 < iVar11) goto LAB_038f7578;
LAB_038f74dc:
          if ((int)lVar13 < 1) goto LAB_038f755c;
          uVar16 = 0;
          goto LAB_038f74f4;
        }
        if (local_2b0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_038f74c4;
        }
        if (local_2b0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          iVar11 = (int)lVar13;
          if (iVar11 <= iVar10) goto LAB_038f74dc;
          goto LAB_038f7578;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      if (-1 < iVar10) {
LAB_038f755c:
        (*(code *)local_2b8[3])(&local_2b8);
        goto LAB_038f77b0;
      }
      goto LAB_038f7578;
    }
    goto LAB_038f77b0;
  }
LAB_038f69e0:
  uVar24 = 0;
  uVar25 = 0;
LAB_038f69e8:
  local_298 = 0;
  local_290 = PTR_DAT_04bb2020 + 0x10;
  local_288 = &DAT_040bd1e9;
  local_2a0 = param_3;
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar12 = 0;
  do {
    if (*(char *)(param_3[1] + lVar12) == '\0') {
LAB_038f6a6c:
      uVar9 = (int)lVar12 + 1;
      goto LAB_038f6a70;
    }
    lVar13 = param_3[1] + lVar12;
    if (*(char *)(lVar13 + 1) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_038f6a6c;
    }
    if (*(char *)(lVar13 + 2) == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_038f6a6c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  uVar9 = 1;
LAB_038f6a70:
  if ((local_2a0 != param_3) || (local_298 != uVar9)) {
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_2f0 = &PTR_LAB_048f96d0;
    do {
      uVar5 = local_298;
      plVar6 = local_2a0;
      (**(code **)(*local_2a0 + 0x18))(local_2a0);
      lVar12 = 0;
      do {
        if (*(char *)(plVar6[1] + lVar12) == '\0') {
LAB_038f6b14:
          iVar10 = (int)lVar12;
          goto joined_r0x038f6b18;
        }
        lVar13 = plVar6[1] + lVar12;
        if (*(char *)(lVar13 + 1) == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_038f6b14;
        }
        if (*(char *)(lVar13 + 2) == '\0') {
          iVar10 = (int)lVar12 + 2;
          goto joined_r0x038f6b18;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      iVar10 = 0;
joined_r0x038f6b18:
      iVar22 = 0;
      if ((-1 < (int)uVar5) && (iVar22 = 0, (int)uVar5 <= iVar10)) {
        (**(code **)(local_280 + 0x18))(&local_280);
        pcVar23 = local_278;
        uVar16 = (ulong)local_270;
        if ((int)local_270 < 1) {
          iVar22 = 0;
        }
        else {
          uVar21 = 0;
          uVar19 = (ulong)uVar5;
          do {
            lVar12 = local_2a0[1];
            if (*(char *)(lVar12 + uVar19) == '\0') {
LAB_038f6c00:
              local_298 = (int)uVar19 + 1;
              iVar22 = (int)uVar21;
              pcVar23[uVar21 & 0xffffffff] = '\0';
              break;
            }
            (**(code **)(local_290 + 0x18))(&local_290);
            uVar18 = 0;
            bVar7 = true;
            cVar3 = *(char *)(lVar12 + uVar19);
            do {
              if (local_288[uVar18] == '\0') break;
              if (local_288[uVar18] == cVar3) {
                if (bVar7) goto LAB_038f6c00;
                break;
              }
              if (local_288[uVar18 + 1] == '\0') break;
              if (local_288[uVar18 + 1] == cVar3) goto LAB_038f6c00;
              if (local_288[uVar18 + 2] == '\0') break;
              if (local_288[uVar18 + 2] == cVar3) goto LAB_038f6c00;
              bVar7 = uVar18 < 0x7fffe;
              uVar18 = uVar18 + 3;
            } while (uVar18 != 0x80001);
            pcVar23[uVar21] = cVar3;
            uVar21 = uVar21 + 1;
            iVar22 = 0;
            uVar19 = uVar19 + 1;
          } while (uVar21 != uVar16);
        }
      }
      local_2b0 = ".";
      local_2b8 = ppuVar1;
      (**(code **)(local_280 + 0x18))(&local_280);
      (**(code **)(local_280 + 0x18))(&local_280);
      pcVar23 = local_278;
      (*(code *)local_2b8[3])(&local_2b8);
      if (pcVar23 != local_2b0) {
        if (*local_278 == *local_2b0) {
          if (*local_278 != '\0') {
            lVar12 = 0x7fffe;
            pcVar23 = local_2b0;
            pcVar14 = local_278;
            do {
              if (pcVar14[1] != pcVar23[1]) goto LAB_038f6cd0;
              if (pcVar14[1] == '\0') break;
              if (pcVar14[2] != pcVar23[2]) goto LAB_038f6cd0;
              if (pcVar14[2] == '\0') break;
              if ((lVar12 == 0) || (cVar3 = pcVar14[3], cVar3 != pcVar23[3])) goto LAB_038f6cd0;
              lVar12 = lVar12 + -3;
              pcVar23 = pcVar23 + 3;
              pcVar14 = pcVar14 + 3;
            } while (cVar3 != '\0');
          }
        }
        else {
LAB_038f6cd0:
          local_2b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          local_2b0 = "..";
          (**(code **)(local_280 + 0x18))(&local_280);
          (**(code **)(local_280 + 0x18))(&local_280);
          pcVar23 = local_278;
          (*(code *)local_2b8[3])(&local_2b8);
          if (pcVar23 != local_2b0) {
            if (*local_278 != *local_2b0) {
LAB_038f6de0:
              local_2b0 = puVar17 + uVar24;
              local_2a8 = iVar2 - uVar24;
              local_2b8 = &PTR_LAB_048f96d0;
              if (local_2a8 < 1) {
                local_2b0 = (undefined1 *)0x0;
                local_2a8 = 0;
                ppuVar15 = (undefined **)(PTR_DAT_04bb2030 + 0x10);
              }
              else {
                local_2b0[local_2a8 - 1] = 0;
                ppuVar15 = local_2f0;
              }
              pcVar23 = local_2b0;
              (*(code *)ppuVar15[3])(&local_2b8);
              lVar12 = 0;
              do {
                if (local_2b0[lVar12] == '\0') goto LAB_038f6e90;
                if (local_2b0[lVar12 + 1] == '\0') {
                  lVar12 = lVar12 + 1;
                  goto LAB_038f6e90;
                }
                if (local_2b0[lVar12 + 2] == '\0') {
                  lVar12 = lVar12 + 2;
                  goto LAB_038f6e90;
                }
                lVar12 = lVar12 + 3;
              } while (lVar12 != 0x80001);
              lVar12 = 0;
LAB_038f6e90:
              uVar5 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
              (**(code **)(local_280 + 0x18))(&local_280);
              lVar12 = 0;
              do {
                if (local_278[lVar12] == '\0') goto LAB_038f6eec;
                if (local_278[lVar12 + 1] == '\0') {
                  lVar12 = lVar12 + 1;
                  goto LAB_038f6eec;
                }
                if (local_278[lVar12 + 2] == '\0') {
                  lVar12 = lVar12 + 2;
                  goto LAB_038f6eec;
                }
                lVar12 = lVar12 + 3;
              } while (lVar12 != 0x80001);
              lVar12 = 0;
LAB_038f6eec:
              uVar20 = (uint)lVar12;
              if ((int)(local_2a8 - uVar5) <= (int)(uint)lVar12) {
                uVar20 = local_2a8 + ~uVar5;
              }
              if ((int)uVar20 < 1) {
                uVar20 = 0;
              }
              else {
                (**(code **)(local_280 + 0x18))(&local_280);
                memcpy(pcVar23 + uVar5,local_278,(ulong)uVar20);
                pcVar23[(int)(uVar20 + uVar5)] = 0;
              }
              uVar20 = uVar20 + uVar24;
              local_2b0 = puVar17 + uVar20;
              local_2a8 = iVar2 - uVar20;
              local_2b8 = &PTR_LAB_048f96d0;
              if (local_2a8 < 1) {
                local_2b0 = (char *)0x0;
                local_2a8 = 0;
              }
              else {
                local_2b0[local_2a8 - 1] = '\0';
              }
              (*(code *)PTR_FUN_048f96e8)(&local_2b8);
              lVar12 = 0;
              do {
                if (local_2b0[lVar12] == '\0') goto LAB_038f6fdc;
                if (local_2b0[lVar12 + 1] == '\0') {
                  lVar12 = lVar12 + 1;
                  goto LAB_038f6fdc;
                }
                if (local_2b0[lVar12 + 2] == '\0') {
                  lVar12 = lVar12 + 2;
                  goto LAB_038f6fdc;
                }
                lVar12 = lVar12 + 3;
              } while (lVar12 != 0x80001);
              lVar12 = 0;
LAB_038f6fdc:
              iVar10 = (int)lVar12;
              bVar7 = iVar10 < local_2a8 + -1;
              if (bVar7) {
                (local_2b0 + iVar10)[0] = '/';
                (local_2b0 + iVar10)[1] = '\0';
              }
              uVar16 = (ulong)uVar25;
              bVar8 = 0x3f < uVar25;
              uVar24 = bVar7 + uVar20;
              uVar25 = uVar25 + 1;
              if (bVar8) {
                uVar16 = 0;
              }
              local_168[uVar16] = iVar22 + 1;
              goto LAB_038f7020;
            }
            if (*local_278 != '\0') {
              lVar12 = 0x7fffe;
              pcVar23 = local_2b0;
              pcVar14 = local_278;
              do {
                if (pcVar14[1] != pcVar23[1]) goto LAB_038f6de0;
                if (pcVar14[1] == '\0') break;
                if (pcVar14[2] != pcVar23[2]) goto LAB_038f6de0;
                if (pcVar14[2] == '\0') break;
                if ((lVar12 == 0) || (cVar3 = pcVar14[3], cVar3 != pcVar23[3])) goto LAB_038f6de0;
                lVar12 = lVar12 + -3;
                pcVar23 = pcVar23 + 3;
                pcVar14 = pcVar14 + 3;
              } while (cVar3 != '\0');
            }
          }
          if (uVar25 == 0) {
            return 0;
          }
          uVar5 = uVar25 - 1;
          uVar16 = (ulong)uVar5;
          if (0x40 < uVar25) {
            uVar16 = 0;
          }
          uVar24 = uVar24 - local_168[uVar16];
          uVar25 = uVar5;
          if ((int)uVar24 < (int)param_1[2]) {
            *(undefined1 *)(param_1[1] + (ulong)(uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU))) = 0;
          }
          else {
            (**(code **)(*param_1 + 0x18))();
          }
        }
      }
LAB_038f7020:
    } while ((local_2a0 != param_3) || (local_298 != uVar9));
  }
  uVar24 = uVar24 - 1;
  if ((int)uVar24 < (int)param_1[2]) {
    *(undefined1 *)(param_1[1] + (ulong)(uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU))) = 0;
  }
  else {
    (**(code **)(*param_1 + 0x18))();
  }
  return 1;
}

