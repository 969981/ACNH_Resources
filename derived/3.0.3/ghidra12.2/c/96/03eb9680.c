
bool FUN_03eb9680(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined1 *puVar13;
  char *pcVar14;
  undefined **local_280;
  char *local_278;
  int local_270;
  char local_26c [255];
  undefined1 local_16d;
  undefined **local_168;
  undefined1 *local_160;
  int local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  local_158 = 0x100;
  local_55 = 0;
  local_168 = &PTR_LAB_04914140;
  local_160 = local_154;
  (**(code **)(*param_1 + 0x18))();
  puVar13 = (undefined1 *)param_1[1];
  if (local_154 != puVar13) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar7 = 0;
    do {
      if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_03eb973c;
      lVar10 = param_1[1] + lVar7;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03eb973c;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03eb973c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03eb973c:
    iVar5 = (int)lVar7;
    if (local_158 <= (int)lVar7) {
      iVar5 = local_158 + -1;
    }
    memcpy(local_154,puVar13,(long)iVar5);
    local_154[iVar5] = 0;
  }
  local_16d = 0;
  local_270 = 0x100;
  local_280 = &PTR_LAB_04914140;
  ppuVar1 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
  local_278 = local_26c;
  local_168 = ppuVar1;
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar14 = (char *)param_2[1];
  if (local_26c != pcVar14) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_03eb97fc;
      lVar10 = param_2[1] + lVar7;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03eb97fc;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03eb97fc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03eb97fc:
    iVar5 = (int)lVar7;
    if (local_270 <= (int)lVar7) {
      iVar5 = local_270 + -1;
    }
    memcpy(local_26c,pcVar14,(long)iVar5);
    local_26c[iVar5] = '\0';
  }
  local_280 = ppuVar1;
  (*(code *)local_168[3])(&local_168);
  puVar4 = PTR_DAT_04bb2120;
  uVar8 = 0;
  do {
    if (local_160[uVar8] == '\0') {
LAB_03eb9870:
      iVar5 = (int)uVar8;
joined_r0x03eb9874:
      if (0 < iVar5) {
        uVar12 = 0;
        do {
          (*(code *)local_168[3])(&local_168);
          uVar9 = 0;
          do {
            if (local_160[uVar9] == '\0') goto LAB_03eb9924;
            if (local_160[uVar9 + 1] == '\0') {
              uVar9 = uVar9 + 1;
              goto LAB_03eb9924;
            }
            if (local_160[uVar9 + 2] == '\0') {
              uVar9 = uVar9 + 2;
              goto LAB_03eb9924;
            }
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          uVar9 = 0;
LAB_03eb9924:
          pbVar3 = puVar4;
          if (uVar12 <= (uVar9 & 0xffffffff)) {
            pbVar3 = local_160 + uVar12;
          }
          iVar5 = tolower((uint)*pbVar3);
          (*(code *)local_168[3])(&local_168);
          uVar9 = 0;
          do {
            if (local_160[uVar9] == '\0') goto LAB_03eb98a4;
            if (local_160[uVar9 + 1] == '\0') {
              uVar9 = uVar9 + 1;
              goto LAB_03eb98a4;
            }
            if (local_160[uVar9 + 2] == '\0') {
              uVar9 = uVar9 + 2;
              goto LAB_03eb98a4;
            }
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          uVar9 = 0;
LAB_03eb98a4:
          uVar2 = uVar12 + 1;
          puVar13 = puVar4;
          if (uVar12 <= (uVar9 & 0xffffffff)) {
            puVar13 = local_160 + uVar12;
          }
          *puVar13 = (char)iVar5;
          uVar12 = uVar2;
        } while (uVar2 != (uVar8 & 0xffffffff));
      }
      break;
    }
    if (local_160[uVar8 + 1] == '\0') {
      uVar8 = uVar8 + 1;
      goto LAB_03eb9870;
    }
    if (local_160[uVar8 + 2] == '\0') {
      uVar8 = uVar8 + 2;
      iVar5 = (int)uVar8;
      goto joined_r0x03eb9874;
    }
    uVar8 = uVar8 + 3;
  } while (uVar8 != 0x80001);
  (*(code *)local_280[3])(&local_280);
  puVar4 = PTR_DAT_04bb2120;
  uVar8 = 0;
  do {
    if (local_278[uVar8] == '\0') {
LAB_03eb99d4:
      iVar5 = (int)uVar8;
joined_r0x03eb99d8:
      if (0 < iVar5) {
        uVar12 = 0;
        do {
          (*(code *)local_280[3])(&local_280);
          uVar9 = 0;
          do {
            if (local_278[uVar9] == '\0') goto LAB_03eb9a84;
            if (local_278[uVar9 + 1] == '\0') {
              uVar9 = uVar9 + 1;
              goto LAB_03eb9a84;
            }
            if (local_278[uVar9 + 2] == '\0') {
              uVar9 = uVar9 + 2;
              goto LAB_03eb9a84;
            }
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          uVar9 = 0;
LAB_03eb9a84:
          pbVar3 = puVar4;
          if (uVar12 <= (uVar9 & 0xffffffff)) {
            pbVar3 = (byte *)(local_278 + uVar12);
          }
          iVar5 = tolower((uint)*pbVar3);
          (*(code *)local_280[3])(&local_280);
          uVar9 = 0;
          do {
            if (local_278[uVar9] == '\0') goto LAB_03eb9a04;
            if (local_278[uVar9 + 1] == '\0') {
              uVar9 = uVar9 + 1;
              goto LAB_03eb9a04;
            }
            if (local_278[uVar9 + 2] == '\0') {
              uVar9 = uVar9 + 2;
              goto LAB_03eb9a04;
            }
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          uVar9 = 0;
LAB_03eb9a04:
          uVar2 = uVar12 + 1;
          pcVar14 = puVar4;
          if (uVar12 <= (uVar9 & 0xffffffff)) {
            pcVar14 = local_278 + uVar12;
          }
          *pcVar14 = (char)iVar5;
          uVar12 = uVar2;
        } while (uVar2 != (uVar8 & 0xffffffff));
      }
      break;
    }
    if (local_278[uVar8 + 1] == '\0') {
      uVar8 = uVar8 + 1;
      goto LAB_03eb99d4;
    }
    if (local_278[uVar8 + 2] == '\0') {
      uVar8 = uVar8 + 2;
      iVar5 = (int)uVar8;
      goto joined_r0x03eb99d8;
    }
    uVar8 = uVar8 + 3;
  } while (uVar8 != 0x80001);
  (*(code *)local_168[3])(&local_168);
  lVar7 = 0;
  do {
    if (local_160[lVar7] == '\0') goto LAB_03eb9b40;
    if (local_160[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03eb9b40;
    }
    if (local_160[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03eb9b40;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03eb9b40:
  (*(code *)local_280[3])(&local_280);
  lVar10 = 0;
  do {
    iVar5 = (int)lVar7;
    if (local_278[lVar10] == '\0') {
LAB_03eb9b94:
      iVar6 = (int)lVar10;
joined_r0x03eb9b98:
      if (iVar5 < iVar6) goto LAB_03eb9b9c;
      if ((int)lVar10 < 1) goto LAB_03eb9c30;
      uVar8 = 0;
      iVar11 = -1;
      goto LAB_03eb9bc8;
    }
    if (local_278[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_03eb9b94;
    }
    if (local_278[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      iVar6 = (int)lVar10;
      goto joined_r0x03eb9b98;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  if (iVar5 < 0) {
LAB_03eb9b9c:
    iVar11 = -1;
  }
  else {
LAB_03eb9c30:
    (*(code *)local_280[3])(&local_280);
    iVar11 = 0;
  }
  goto LAB_03eb9c4c;
  while( true ) {
    pcVar14 = local_278;
    lVar7 = lVar10;
    while( true ) {
      lVar7 = lVar7 + -1;
      if (puVar13[uVar8] != *pcVar14) break;
      if ((puVar13[uVar8] == '\0') || (puVar13 = puVar13 + 1, pcVar14 = pcVar14 + 1, lVar7 == 0))
      goto LAB_03eb9c48;
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == (iVar5 - iVar6) + 1) break;
LAB_03eb9bc8:
    puVar13 = local_160;
    pcVar14 = local_160 + uVar8;
    (*(code *)local_280[3])(&local_280);
    if (pcVar14 == local_278) {
LAB_03eb9c48:
      iVar11 = (int)uVar8;
      break;
    }
  }
LAB_03eb9c4c:
  return iVar11 != -1;
}

