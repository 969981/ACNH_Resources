
undefined8 FUN_02372a04(long param_1)

{
  undefined2 *puVar1;
  byte *pbVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined **ppuVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  char *pcVar11;
  void *pvVar12;
  void *pvVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  undefined4 *puVar17;
  long lVar18;
  long *plVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined1 *puVar22;
  ulong uVar23;
  char *pcVar24;
  undefined *local_278;
  char *pcStack_270;
  undefined *local_268;
  char *pcStack_260;
  undefined *local_258;
  char *pcStack_250;
  undefined *local_248;
  char *pcStack_240;
  undefined *local_238;
  char *pcStack_230;
  undefined *local_228;
  char *pcStack_220;
  undefined *local_218;
  char *pcStack_210;
  undefined *local_208;
  char *pcStack_200;
  undefined *local_1f8;
  char *pcStack_1f0;
  undefined *local_1e8;
  char *pcStack_1e0;
  undefined *local_1d8;
  char *local_1d0;
  undefined *local_1c8;
  char *local_1c0;
  undefined1 auStack_1b8 [8];
  char *local_1b0;
  int local_1a8;
  char *local_158;
  int local_150;
  char *local_100;
  int local_f8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined2 local_a7;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_84;
  
  pbVar2 = (byte *)(param_1 + 0x1ee8);
  if (((((7 < *pbVar2) || (uVar5 = FUN_02582d8c(pbVar2,1), puVar9 = PTR_DAT_04bb4fb8, 7 < uVar5)) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0')) ||
      ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) == '\0' ||
       (uVar5 = FUN_02582d8c(pbVar2,1), puVar4 = PTR_DAT_04bb43c0, 7 < uVar5)))) ||
     (lVar21 = *(long *)puVar9, *(char *)(lVar21 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0')) {
    return 0;
  }
  uVar23 = (ulong)uVar5;
  pcVar24 = (char *)(lVar21 + uVar23 * 0x13f0 + 0x18);
  if (*pcVar24 != '\0') {
    FUN_0257a010(auStack_1b8);
    if (local_1b0 != "Player_GetDemo_MileExchange") {
      iVar15 = 0x1b;
      if (local_1a8 < 0x1c) {
        iVar15 = local_1a8 + -1;
      }
      memcpy(local_1b0,"Player_GetDemo_MileExchange",(long)iVar15);
      local_1b0[iVar15] = '\0';
    }
    if (local_158 != "Cmn_PlayerDemo") {
      iVar15 = 0xe;
      if (local_150 < 0xf) {
        iVar15 = local_150 + -1;
      }
      memcpy(local_158,"Cmn_PlayerDemo",(long)iVar15);
      local_158[iVar15] = '\0';
    }
    local_b0 = 0;
    local_8c = 1;
    local_a7 = 1;
    local_94 = *(undefined4 *)PTR_DAT_04bb7738;
    local_90 = *(undefined4 *)(PTR_DAT_04bb7738 + 4);
    if (local_100 != "PlayerShowAfterLearning") {
      iVar15 = 0x17;
      if (local_f8 < 0x18) {
        iVar15 = local_f8 + -1;
      }
      memcpy(local_100,"PlayerShowAfterLearning",(long)iVar15);
      local_100[iVar15] = '\0';
    }
    FUN_024780c0(param_1,0,0,auStack_1b8,0,0);
    *pcVar24 = '\0';
    puVar9 = PTR_DAT_04bb37e0;
    lVar18 = lVar21 + uVar23 * 0x13f0;
    *(undefined2 *)(lVar18 + 0x1c) = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)(lVar18 + 0x1e) = puVar9[2];
    *(undefined *)(lVar18 + 0x1f) = puVar9[3];
    plVar14 = (long *)(lVar18 + 0x28);
    *(undefined4 *)(lVar18 + 0x20) = *(undefined4 *)(puVar9 + 4);
    pvVar12 = *(void **)(param_1 + 0x2100);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pvVar13 = *(void **)(lVar18 + 0x30);
    if (pvVar12 != pvVar13) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
      lVar10 = *(long *)(lVar18 + 0x30);
      lVar18 = 0;
      do {
        if (*(char *)(lVar10 + lVar18) == '\0') goto LAB_02372e50;
        lVar8 = lVar10 + lVar18;
        if (*(char *)(lVar8 + 1) == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_02372e50;
        }
        if (*(char *)(lVar8 + 2) == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_02372e50;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_02372e50:
      iVar15 = (int)lVar18;
      if (*(int *)(param_1 + 0x2108) <= (int)lVar18) {
        iVar15 = *(int *)(param_1 + 0x2108) + -1;
      }
      memcpy(pvVar12,pvVar13,(long)iVar15);
      *(undefined1 *)((long)pvVar12 + (long)iVar15) = 0;
    }
    pvVar12 = *(void **)(param_1 + 0x2158);
    lVar21 = lVar21 + uVar23 * 0x13f0;
    plVar14 = (long *)(lVar21 + 0x80);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    plVar19 = (long *)(lVar21 + 0x88);
    pvVar13 = (void *)*plVar19;
    if (pvVar12 == pvVar13) {
      return 1;
    }
    (**(code **)(*plVar14 + 0x18))(plVar14);
    lVar18 = *plVar19;
    lVar21 = 0;
    do {
      if (*(char *)(lVar18 + lVar21) == '\0') goto LAB_02372ef8;
      lVar10 = lVar18 + lVar21;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar21 = lVar21 + 1;
        goto LAB_02372ef8;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar21 = lVar21 + 2;
        goto LAB_02372ef8;
      }
      lVar21 = lVar21 + 3;
    } while (lVar21 != 0x80001);
    lVar21 = 0;
LAB_02372ef8:
    iVar15 = (int)lVar21;
    if (*(int *)(param_1 + 0x2160) <= (int)lVar21) {
      iVar15 = *(int *)(param_1 + 0x2160) + -1;
    }
    memcpy(pvVar12,pvVar13,(long)iVar15);
    *(undefined1 *)((long)pvVar12 + (long)iVar15) = 0;
    return 1;
  }
  puVar1 = (undefined2 *)(lVar21 + uVar23 * 0x13f0 + 0x1c);
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(puVar1);
  if (*(long *)puVar4 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0257a010(auStack_1b8);
      lVar18 = lVar21 + uVar23 * 0x13f0;
      plVar19 = (long *)(lVar18 + 0x28);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      plVar14 = (long *)(lVar18 + 0x30);
      pcVar11 = (char *)*plVar14;
      if (local_1b0 != pcVar11) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
        lVar10 = *plVar14;
        lVar18 = 0;
        do {
          if (*(char *)(lVar10 + lVar18) == '\0') goto LAB_023734fc;
          lVar8 = lVar10 + lVar18;
          if (*(char *)(lVar8 + 1) == '\0') {
            lVar18 = lVar18 + 1;
            goto LAB_023734fc;
          }
          if (*(char *)(lVar8 + 2) == '\0') {
            lVar18 = lVar18 + 2;
            goto LAB_023734fc;
          }
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        lVar18 = 0;
LAB_023734fc:
        iVar15 = (int)lVar18;
        if (local_1a8 <= (int)lVar18) {
          iVar15 = local_1a8 + -1;
        }
        memcpy(local_1b0,pcVar11,(long)iVar15);
        local_1b0[iVar15] = '\0';
      }
      lVar18 = lVar21 + uVar23 * 0x13f0;
      plVar19 = (long *)(lVar18 + 0x80);
      (**(code **)(*plVar19 + 0x18))(plVar19);
      plVar14 = (long *)(lVar18 + 0x88);
      pcVar11 = (char *)*plVar14;
      if (local_158 != pcVar11) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
        lVar10 = *plVar14;
        lVar18 = 0;
        do {
          if (*(char *)(lVar10 + lVar18) == '\0') goto LAB_023735a8;
          lVar8 = lVar10 + lVar18;
          if (*(char *)(lVar8 + 1) == '\0') {
            lVar18 = lVar18 + 1;
            goto LAB_023735a8;
          }
          if (*(char *)(lVar8 + 2) == '\0') {
            lVar18 = lVar18 + 2;
            goto LAB_023735a8;
          }
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        lVar18 = 0;
LAB_023735a8:
        iVar15 = (int)lVar18;
        if (local_150 <= (int)lVar18) {
          iVar15 = local_150 + -1;
        }
        memcpy(local_158,pcVar11,(long)iVar15);
        local_158[iVar15] = '\0';
      }
      lVar21 = lVar21 + uVar23 * 0x13f0;
      puVar20 = (undefined1 *)(lVar21 + 0x1e);
      puVar22 = (undefined1 *)(lVar21 + 0x1f);
      local_94 = CONCAT13(*puVar22,CONCAT12(*puVar20,*puVar1));
      puVar17 = (undefined4 *)(lVar21 + 0x20);
      local_90 = *puVar17;
      local_a7 = 1;
      local_8c = 1;
      local_b0 = 0;
      *(undefined2 *)(param_1 + 0x2230) = *puVar1;
      *(undefined1 *)(param_1 + 0x2232) = *puVar20;
      *(undefined1 *)(param_1 + 0x2233) = *puVar22;
      *(undefined4 *)(param_1 + 0x2234) = *puVar17;
      if (local_100 != "PlayerShowAfterLearning") {
        iVar15 = 0x17;
        if (local_f8 < 0x18) {
          iVar15 = local_f8 + -1;
        }
        memcpy(local_100,"PlayerShowAfterLearning",(long)iVar15);
        local_100[iVar15] = '\0';
      }
      FUN_024780c0(param_1,0,0,auStack_1b8,0,0);
      *pcVar24 = '\0';
      puVar9 = PTR_DAT_04bb37e0;
      *puVar1 = *(undefined2 *)PTR_DAT_04bb37e0;
      *puVar20 = puVar9[2];
      *puVar22 = puVar9[3];
      *puVar17 = *(undefined4 *)(puVar9 + 4);
      **(undefined1 **)(param_1 + 0x2100) = 0;
      **(undefined1 **)(param_1 + 0x2158) = 0;
      return 1;
    }
  }
  lVar18 = lVar21 + uVar23 * 0x13f0;
  if (**(char **)(lVar18 + 0xe0) == '\0') {
    return 0;
  }
  lVar10 = lVar21 + uVar23 * 0x13f0;
  if (**(char **)(lVar10 + 0x138) == '\0') {
    return 0;
  }
  plVar14 = (long *)(lVar18 + 0xd8);
  FUN_0257a010(auStack_1b8);
  lVar18 = lVar21 + uVar23 * 0x13f0;
  plVar19 = (long *)(lVar18 + 0x188);
  (**(code **)(*(long *)(lVar18 + 0x188) + 0x18))(plVar19);
  pcVar24 = *(char **)(lVar18 + 400);
  if (local_100 != pcVar24) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(lVar18 + 400) + lVar8) == '\0') goto LAB_02372f30;
      lVar3 = *(long *)(lVar18 + 400) + lVar8;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_02372f30;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_02372f30;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_02372f30:
    iVar15 = (int)lVar8;
    if (local_f8 <= (int)lVar8) {
      iVar15 = local_f8 + -1;
    }
    memcpy(local_100,pcVar24,(long)iVar15);
    local_100[iVar15] = '\0';
  }
  plVar19 = (long *)(lVar10 + 0x138);
  (**(code **)(*plVar14 + 0x18))(plVar14);
  plVar16 = (long *)(lVar21 + uVar23 * 0x13f0 + 0xe0);
  pcVar24 = (char *)*plVar16;
  if (local_1b0 != pcVar24) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
    lVar10 = *plVar16;
    lVar18 = 0;
    do {
      if (*(char *)(lVar10 + lVar18) == '\0') goto LAB_02372fd8;
      lVar8 = lVar10 + lVar18;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_02372fd8;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_02372fd8;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_02372fd8:
    iVar15 = (int)lVar18;
    if (local_1a8 <= (int)lVar18) {
      iVar15 = local_1a8 + -1;
    }
    memcpy(local_1b0,pcVar24,(long)iVar15);
    local_1b0[iVar15] = '\0';
  }
  lVar18 = lVar21 + uVar23 * 0x13f0;
  plVar16 = (long *)(lVar18 + 0x130);
  (**(code **)(*(long *)(lVar18 + 0x130) + 0x18))(plVar16);
  pcVar24 = (char *)*plVar19;
  if (local_158 != pcVar24) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
    lVar18 = 0;
    do {
      if (*(char *)(*plVar19 + lVar18) == '\0') goto LAB_02373080;
      lVar10 = *plVar19 + lVar18;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_02373080;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_02373080;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_02373080:
    iVar15 = (int)lVar18;
    if (local_150 <= (int)lVar18) {
      iVar15 = local_150 + -1;
    }
    memcpy(local_158,pcVar24,(long)iVar15);
    local_158[iVar15] = '\0';
  }
  puVar9 = PTR_DAT_04bb2020;
  local_b0 = 1;
  lVar21 = lVar21 + uVar23 * 0x13f0;
  local_ac = *(undefined4 *)(lVar21 + 0x1e4);
  local_94 = *(undefined4 *)(lVar21 + 0x1fc);
  local_90 = *(undefined4 *)(lVar21 + 0x200);
  local_1c8 = PTR_DAT_04bb2020 + 0x10;
  local_1c0 = "GetRecipe_PitFallSeed";
  (**(code **)(*plVar16 + 0x18))(plVar16);
  lVar21 = 0;
  do {
    if (*(char *)(*plVar19 + lVar21) == '\0') goto LAB_0237314c;
    lVar18 = *plVar19 + lVar21;
    if (*(char *)(lVar18 + 1) == '\0') {
      lVar21 = lVar21 + 1;
      goto LAB_0237314c;
    }
    if (*(char *)(lVar18 + 2) == '\0') {
      lVar21 = lVar21 + 2;
      goto LAB_0237314c;
    }
    lVar21 = lVar21 + 3;
  } while (lVar21 != 0x80001);
  lVar21 = 0;
LAB_0237314c:
  (**(code **)(local_1c8 + 0x18))(&local_1c8);
  lVar18 = 0;
  do {
    iVar15 = (int)lVar21;
    if (local_1c0[lVar18] == '\0') {
LAB_023731a0:
      iVar7 = (int)lVar18;
      if (iVar15 < iVar7) goto LAB_02373244;
      if (iVar7 < 1) goto LAB_0237322c;
      uVar23 = 0;
      goto LAB_023731c0;
    }
    if (local_1c0[lVar18 + 1] == '\0') {
      lVar18 = lVar18 + 1;
      goto LAB_023731a0;
    }
    if (local_1c0[lVar18 + 2] == '\0') {
      lVar18 = lVar18 + 2;
      goto LAB_023731a0;
    }
    lVar18 = lVar18 + 3;
  } while (lVar18 != 0x80001);
  if (iVar15 < 0) goto LAB_02373244;
LAB_0237322c:
  ppuVar6 = &local_1c8;
  puVar9 = local_1c8;
  goto LAB_02373388;
  while( true ) {
    pcVar24 = local_1d0;
    lVar10 = lVar18;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (*(char *)(lVar21 + uVar23) != *pcVar24) break;
      if ((*(char *)(lVar21 + uVar23) == '\0') ||
         (lVar21 = lVar21 + 1, pcVar24 = pcVar24 + 1, lVar10 == 0)) goto LAB_02373394;
    }
    uVar23 = uVar23 + 1;
    if (uVar23 == (iVar15 - iVar7) + 1) break;
LAB_02373318:
    lVar21 = *plVar19;
    (**(code **)(local_1d8 + 0x18))(&local_1d8);
    if ((char *)(lVar21 + uVar23) == local_1d0) {
LAB_02373394:
      if ((int)uVar23 != -1) goto LAB_023734d0;
      break;
    }
  }
LAB_023733a0:
  pcStack_1e0 = "GetCookingRecipe_MultiDish";
  local_1e8 = puVar9 + 0x10;
  uVar23 = FUN_0144b250(plVar16,&local_1e8);
  if ((uVar23 & 1) == 0) {
    pcStack_1f0 = "GetCookingRecipe_Squid";
    local_1f8 = puVar9 + 0x10;
    uVar23 = FUN_0144b250(plVar16,&local_1f8);
    if ((uVar23 & 1) == 0) {
      pcStack_200 = "GetCookingRecipe_MultiSalmon";
      local_208 = puVar9 + 0x10;
      uVar23 = FUN_0144b250(plVar16,&local_208);
      if ((uVar23 & 1) == 0) {
        pcStack_210 = "GetDiyRecipe_Trash_Boot";
        local_218 = puVar9 + 0x10;
        uVar23 = FUN_0144b250(plVar16,&local_218);
        if ((uVar23 & 1) == 0) {
          pcStack_220 = "GetDiyRecipe_Trash_Tire1";
          local_228 = puVar9 + 0x10;
          uVar23 = FUN_0144b250(plVar16,&local_228);
          if ((uVar23 & 1) == 0) {
            pcStack_230 = "GetDiyRecipe_Trash_Tire2";
            local_238 = puVar9 + 0x10;
            uVar23 = FUN_0144b250(plVar16,&local_238);
            if ((uVar23 & 1) == 0) {
              pcStack_240 = "GetDiyRecipe_Trash_Can1";
              local_248 = puVar9 + 0x10;
              uVar23 = FUN_0144b250(plVar16,&local_248);
              if ((uVar23 & 1) == 0) {
                pcStack_250 = "GetDiyRecipe_Trash_Can2";
                local_258 = puVar9 + 0x10;
                uVar23 = FUN_0144b250(plVar16,&local_258);
                if ((uVar23 & 1) == 0) {
                  pcStack_260 = "GetDiyRecipe_TrashBag";
                  local_268 = puVar9 + 0x10;
                  uVar23 = FUN_0144b250(plVar16,&local_268);
                  if ((uVar23 & 1) == 0) {
                    pcStack_270 = "Demo_GetDiyRecipe_Fishfeed";
                    local_278 = puVar9 + 0x10;
                    uVar23 = FUN_0144b250(plVar16,&local_278);
                    if ((uVar23 & 1) == 0) goto LAB_023734d8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_023734d0;
  while( true ) {
    pcVar24 = local_1c0;
    lVar10 = lVar18;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (*(char *)(lVar21 + uVar23) != *pcVar24) break;
      if ((*(char *)(lVar21 + uVar23) == '\0') ||
         (lVar21 = lVar21 + 1, pcVar24 = pcVar24 + 1, lVar10 == 0)) goto LAB_02373238;
    }
    uVar23 = uVar23 + 1;
    if (uVar23 == (iVar15 - iVar7) + 1) break;
LAB_023731c0:
    lVar21 = *plVar19;
    (**(code **)(local_1c8 + 0x18))(&local_1c8);
    if ((char *)(lVar21 + uVar23) == local_1c0) {
LAB_02373238:
      if ((int)uVar23 != -1) goto LAB_023734d0;
      break;
    }
  }
LAB_02373244:
  local_1d8 = puVar9 + 0x10;
  local_1d0 = "GetCookingRecipe_Only1Dish";
  (**(code **)(*plVar16 + 0x18))(plVar16);
  lVar21 = 0;
  do {
    if (*(char *)(*plVar19 + lVar21) == '\0') goto LAB_023732a8;
    lVar18 = *plVar19 + lVar21;
    if (*(char *)(lVar18 + 1) == '\0') {
      lVar21 = lVar21 + 1;
      goto LAB_023732a8;
    }
    if (*(char *)(lVar18 + 2) == '\0') {
      lVar21 = lVar21 + 2;
      goto LAB_023732a8;
    }
    lVar21 = lVar21 + 3;
  } while (lVar21 != 0x80001);
  lVar21 = 0;
LAB_023732a8:
  (**(code **)(local_1d8 + 0x18))(&local_1d8);
  lVar18 = 0;
  do {
    iVar15 = (int)lVar21;
    if (local_1d0[lVar18] == '\0') {
LAB_023732fc:
      iVar7 = (int)lVar18;
      if (iVar15 < iVar7) goto LAB_023733a0;
      if (iVar7 < 1) goto LAB_02373380;
      uVar23 = 0;
      goto LAB_02373318;
    }
    if (local_1d0[lVar18 + 1] == '\0') {
      lVar18 = lVar18 + 1;
      goto LAB_023732fc;
    }
    if (local_1d0[lVar18 + 2] == '\0') {
      lVar18 = lVar18 + 2;
      goto LAB_023732fc;
    }
    lVar18 = lVar18 + 3;
  } while (lVar18 != 0x80001);
  if (iVar15 < 0) goto LAB_023733a0;
LAB_02373380:
  ppuVar6 = &local_1d8;
  puVar9 = local_1d8;
LAB_02373388:
  (**(code **)(puVar9 + 0x18))(ppuVar6);
LAB_023734d0:
  local_84 = 1;
LAB_023734d8:
  FUN_024480f0(param_1,auStack_1b8);
  FUN_0257a130(plVar14);
  return 1;
}

