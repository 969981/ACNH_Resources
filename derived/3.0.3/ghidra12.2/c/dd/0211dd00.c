
uint FUN_0211dd00(long param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  byte bVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  size_t __n;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 local_158;
  long lStack_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  long local_13c;
  undefined8 local_134;
  undefined *local_128;
  undefined1 *local_120;
  int local_118;
  undefined1 local_114 [127];
  undefined1 local_95;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  byte local_7c [4];
  undefined *local_78;
  char *local_70;
  
  local_95 = 0;
  local_114[0] = 0;
  local_120 = local_114;
  local_88 = 0;
  local_118 = 0x80;
  local_148 = (undefined4)param_2[7];
  local_128 = PTR_DAT_04bb2d88 + 0x10;
  local_90 = 7;
  local_8c = 0;
  lStack_150 = param_2[6];
  local_13c = 0;
  local_134 = 0;
  local_158 = 0xffffffff00000000;
  uStack_140 = *(undefined4 *)((long)param_2 + 0x3c);
  local_144 = 0x3f800000;
  uVar5 = FUN_006bd550(&DAT_040aacdf,0);
  puVar18 = local_120;
  iVar6 = 0;
  iVar11 = 0xeb;
  do {
    uVar16 = iVar6 + iVar11 >> 1;
    if (*(uint *)(PTR_DAT_04bb3858 +
                 (-(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3)) == uVar5) {
      uVar10 = *(undefined4 *)
                (PTR_DAT_04bb3858 + ((long)((ulong)(uint)(iVar6 + iVar11) << 0x20) >> 0x21) * 8 + 4)
      ;
      goto LAB_0211ddf8;
    }
    iVar3 = uVar16 - 1;
    if (*(uint *)(PTR_DAT_04bb3858 +
                 (-(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3)) < uVar5) {
      iVar6 = uVar16 + 1;
      iVar3 = iVar11;
    }
    iVar11 = iVar3;
  } while (iVar6 <= iVar3);
  uVar10 = 0xffffffff;
LAB_0211ddf8:
  local_158 = CONCAT44(uVar10,(undefined4)local_158);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar19 = (undefined1 *)param_2[1];
  if (puVar18 != puVar19) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar12 = 0;
    do {
      if (*(char *)(param_2[1] + lVar12) == '\0') goto LAB_0211de7c;
      lVar14 = param_2[1] + lVar12;
      if (*(char *)(lVar14 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_0211de7c;
      }
      if (*(char *)(lVar14 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_0211de7c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_0211de7c:
    iVar6 = (int)lVar12;
    if (local_118 <= (int)lVar12) {
      iVar6 = local_118 + -1;
    }
    memcpy(puVar18,puVar19,(long)iVar6);
    puVar18[iVar6] = 0;
  }
  if (*(int *)(param_1 + 0x1604) == 2) {
    lVar12 = *(long *)PTR_DAT_04bb39b0;
    pbVar13 = PTR_DAT_04bb32e0;
    if (lVar12 == 0) {
LAB_0211df04:
      if (*pbVar13 < 8) goto LAB_0211df7c;
LAB_0211df10:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0211df74:
        pbVar13 = PTR_DAT_04bb5038;
        goto LAB_0211df7c;
      }
      lVar12 = **(long **)PTR_DAT_04bb27d0;
      bVar9 = *(byte *)(lVar12 + 0x473);
      pbVar13 = PTR_DAT_04bb5038;
      if ((long)(char)bVar9 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar2 = (uint *)(lVar12 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar13 = (byte *)(lVar12 + 0x471);
        }
      }
      local_7c[0] = *pbVar13;
      if (7 < local_7c[0]) goto LAB_0211df74;
    }
    else {
      if (*(int *)(lVar12 + 0x15c) != 0) {
        pbVar13 = (byte *)(lVar12 + 0x158);
      }
      if (7 < *pbVar13) {
        if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0211df04;
        }
        goto LAB_0211df10;
      }
LAB_0211df7c:
      local_7c[0] = *pbVar13;
      if (7 < local_7c[0]) {
        local_7c[0] = 0xff;
      }
    }
    (**(code **)(DAT_053ed0b8 + 0x18))(&DAT_053ed0b8);
    puVar4 = PTR_DAT_04bb2020;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_70 = (char *)DAT_053ed0c0;
    local_78 = puVar1;
    iVar6 = FUN_02753180(local_7c,&local_78);
    if (iVar6 == 0) {
      (**(code **)(DAT_053ed0f0 + 0x18))(&DAT_053ed0f0);
      local_70 = (char *)DAT_053ed0f8;
      local_78 = puVar1;
      iVar6 = FUN_02743000(&local_78);
      local_78 = puVar4 + 0x10;
      if (iVar6 == 0) {
        local_70 = "alp";
        (**(code **)(local_128 + 0x18))(&local_128);
        lVar12 = 0;
        do {
          if (local_120[lVar12] == '\0') goto LAB_0211e514;
          if (local_120[lVar12 + 1] == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_0211e514;
          }
          if (local_120[lVar12 + 2] == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_0211e514;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_0211e514:
        (**(code **)(local_78 + 0x18))(&local_78);
        lVar14 = 0;
        do {
          iVar6 = (int)lVar12;
          if (local_70[lVar14] == '\0') {
LAB_0211e56c:
            iVar11 = (int)lVar14;
            if (iVar6 < iVar11) goto LAB_0211e728;
            if (iVar11 < 1) goto LAB_0211e604;
            uVar17 = 0;
            goto LAB_0211e58c;
          }
          if (local_70[lVar14 + 1] == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_0211e56c;
          }
          if (local_70[lVar14 + 2] == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_0211e56c;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        if (iVar6 < 0) goto LAB_0211e728;
LAB_0211e604:
        (**(code **)(local_78 + 0x18))(&local_78);
LAB_0211e780:
        puVar18 = local_120;
        (**(code **)(local_128 + 0x18))(&local_128);
        lVar12 = 0;
        do {
          if (local_120[lVar12] == '\0') goto LAB_0211ecd8;
          if (local_120[lVar12 + 1] == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_0211ecd8;
          }
          if (local_120[lVar12 + 2] == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_0211ecd8;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_0211ecd8:
        uVar5 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
        uVar16 = 0x24;
        if ((int)(local_118 - uVar5) < 0x25) {
          uVar16 = local_118 + ~uVar5;
        }
        __n = (size_t)uVar16;
        if (0 < (int)uVar16) {
          puVar19 = puVar18 + uVar5;
          pcVar8 = "/AIC:JuneBride/AIF:AI_NPC_Alp_Studio";
          goto LAB_0211eab0;
        }
      }
      else {
        local_70 = "alw";
        (**(code **)(local_128 + 0x18))(&local_128);
        lVar12 = 0;
        do {
          if (local_120[lVar12] == '\0') goto LAB_0211e348;
          if (local_120[lVar12 + 1] == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_0211e348;
          }
          if (local_120[lVar12 + 2] == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_0211e348;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_0211e348:
        (**(code **)(local_78 + 0x18))(&local_78);
        lVar14 = 0;
        do {
          iVar6 = (int)lVar12;
          if (local_70[lVar14] == '\0') {
LAB_0211e394:
            iVar11 = (int)lVar14;
            if (iVar6 < iVar11) goto LAB_0211e45c;
LAB_0211e3ac:
            if ((int)lVar14 < 1) goto LAB_0211e438;
            uVar17 = 0;
            goto LAB_0211e3c4;
          }
          if (local_70[lVar14 + 1] == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_0211e394;
          }
          if (local_70[lVar14 + 2] == '\0') {
            lVar14 = lVar14 + 2;
            iVar11 = (int)lVar14;
            if (iVar11 <= iVar6) goto LAB_0211e3ac;
            goto LAB_0211e45c;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        if (iVar6 < 0) goto LAB_0211e45c;
LAB_0211e438:
        (**(code **)(local_78 + 0x18))(&local_78);
LAB_0211e4b4:
        puVar18 = local_120;
        (**(code **)(local_128 + 0x18))(&local_128);
        lVar12 = 0;
        do {
          if (local_120[lVar12] == '\0') goto LAB_0211e88c;
          if (local_120[lVar12 + 1] == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_0211e88c;
          }
          if (local_120[lVar12 + 2] == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_0211e88c;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_0211e88c:
        uVar5 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
        uVar16 = 0x2e;
        if ((int)(local_118 - uVar5) < 0x2f) {
          uVar16 = local_118 + ~uVar5;
        }
        __n = (size_t)uVar16;
        if (0 < (int)uVar16) {
          puVar19 = puVar18 + uVar5;
          pcVar8 = "/AIC:JuneBrideAfterParty/AIF:AI_NPC_Alw_Studio";
          goto LAB_0211eab0;
        }
      }
    }
    else {
      local_70 = "alw";
      local_78 = puVar1;
      (**(code **)(local_128 + 0x18))(&local_128);
      lVar12 = 0;
      do {
        if (local_120[lVar12] == '\0') goto LAB_0211e0b0;
        if (local_120[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_0211e0b0;
        }
        if (local_120[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_0211e0b0;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_0211e0b0:
      (**(code **)(local_78 + 0x18))(&local_78);
      lVar14 = 0;
      do {
        iVar6 = (int)lVar12;
        if (local_70[lVar14] == '\0') {
LAB_0211e104:
          iVar11 = (int)lVar14;
          if (iVar6 < iVar11) goto LAB_0211e1c8;
LAB_0211e11c:
          if ((int)lVar14 < 1) goto LAB_0211e1ac;
          uVar17 = 0;
          goto LAB_0211e134;
        }
        if (local_70[lVar14 + 1] == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_0211e104;
        }
        if (local_70[lVar14 + 2] == '\0') {
          lVar14 = lVar14 + 2;
          iVar11 = (int)lVar14;
          if (iVar11 <= iVar6) goto LAB_0211e11c;
          goto LAB_0211e1c8;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      if (iVar6 < 0) goto LAB_0211e1c8;
LAB_0211e1ac:
      (**(code **)(local_78 + 0x18))(&local_78);
LAB_0211e210:
      puVar18 = local_120;
      (**(code **)(local_128 + 0x18))(&local_128);
      lVar12 = 0;
      do {
        if (local_120[lVar12] == '\0') goto LAB_0211e304;
        if (local_120[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_0211e304;
        }
        if (local_120[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_0211e304;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_0211e304:
      uVar5 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
      uVar16 = 0x2f;
      if ((int)(local_118 - uVar5) < 0x30) {
        uVar16 = local_118 + ~uVar5;
      }
      __n = (size_t)uVar16;
      if (0 < (int)uVar16) {
        puVar19 = puVar18 + uVar5;
        pcVar8 = "/AIC:DemoPhotoStudio/DMF:Demo_CelemonyJuneBride";
        goto LAB_0211eab0;
      }
    }
    goto LAB_0211eac0;
  }
  goto LAB_0211ea24;
  while( true ) {
    pcVar8 = local_70;
    lVar12 = lVar14;
    while( true ) {
      lVar12 = lVar12 + -1;
      if (puVar18[uVar17] != *pcVar8) break;
      if (puVar18[uVar17] == '\0') goto LAB_0211e718;
      puVar18 = puVar18 + 1;
      pcVar8 = pcVar8 + 1;
      if (lVar12 == 0) goto LAB_0211e718;
    }
    uVar17 = uVar17 + 1;
    if (uVar17 == (iVar6 - iVar11) + 1) break;
LAB_0211e58c:
    puVar18 = local_120;
    pcVar8 = local_120 + uVar17;
    (**(code **)(local_78 + 0x18))(&local_78);
    if (pcVar8 == local_70) {
LAB_0211e718:
      if ((int)uVar17 != -1) goto LAB_0211e780;
      break;
    }
  }
LAB_0211e728:
  local_78 = puVar4 + 0x10;
  local_70 = "alw";
  (**(code **)(local_128 + 0x18))(&local_128);
  lVar12 = 0;
  do {
    if (local_120[lVar12] == '\0') goto LAB_0211e8d8;
    if (local_120[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_0211e8d8;
    }
    if (local_120[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_0211e8d8;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_0211e8d8:
  (**(code **)(local_78 + 0x18))(&local_78);
  lVar14 = 0;
  do {
    iVar6 = (int)lVar12;
    if (local_70[lVar14] == '\0') {
LAB_0211e92c:
      iVar11 = (int)lVar14;
      if (iVar6 < iVar11) goto LAB_0211ea24;
      if (iVar11 < 1) goto LAB_0211e9c4;
      uVar17 = 0;
      goto LAB_0211e94c;
    }
    if (local_70[lVar14 + 1] == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_0211e92c;
    }
    if (local_70[lVar14 + 2] == '\0') {
      lVar14 = lVar14 + 2;
      goto LAB_0211e92c;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  if (-1 < iVar6) {
LAB_0211e9c4:
    (**(code **)(local_78 + 0x18))(&local_78);
LAB_0211ec7c:
    puVar18 = local_120;
    (**(code **)(local_128 + 0x18))(&local_128);
    lVar12 = 0;
    do {
      if (local_120[lVar12] == '\0') goto LAB_0211ed58;
      if (local_120[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_0211ed58;
      }
      if (local_120[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_0211ed58;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_0211ed58:
    uVar5 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
    uVar16 = 0x24;
    if ((int)(local_118 - uVar5) < 0x25) {
      uVar16 = local_118 + ~uVar5;
    }
    __n = (size_t)uVar16;
    if ((int)uVar16 < 1) goto LAB_0211eac0;
    puVar19 = puVar18 + uVar5;
    pcVar8 = "/AIC:JuneBride/AIF:AI_NPC_Alw_Studio";
    goto LAB_0211eab0;
  }
  goto LAB_0211ea24;
  while( true ) {
    pcVar8 = local_70;
    lVar12 = lVar14;
    while( true ) {
      lVar12 = lVar12 + -1;
      if (puVar18[uVar17] != *pcVar8) break;
      if (puVar18[uVar17] == '\0') goto LAB_0211e44c;
      puVar18 = puVar18 + 1;
      pcVar8 = pcVar8 + 1;
      if (lVar12 == 0) goto LAB_0211e44c;
    }
    uVar17 = uVar17 + 1;
    if (uVar17 == (iVar6 - iVar11) + 1) break;
LAB_0211e3c4:
    puVar18 = local_120;
    pcVar8 = local_120 + uVar17;
    (**(code **)(local_78 + 0x18))(&local_78);
    if (pcVar8 == local_70) {
LAB_0211e44c:
      if ((int)uVar17 != -1) goto LAB_0211e4b4;
      break;
    }
  }
LAB_0211e45c:
  local_78 = puVar4 + 0x10;
  local_70 = "alp";
  (**(code **)(local_128 + 0x18))(&local_128);
  lVar12 = 0;
  do {
    if (local_120[lVar12] == '\0') goto LAB_0211e61c;
    if (local_120[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_0211e61c;
    }
    if (local_120[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_0211e61c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_0211e61c:
  (**(code **)(local_78 + 0x18))(&local_78);
  lVar14 = 0;
  do {
    iVar6 = (int)lVar12;
    if (local_70[lVar14] == '\0') {
LAB_0211e670:
      iVar11 = (int)lVar14;
      if (iVar6 < iVar11) goto LAB_0211e7e0;
      if (iVar11 < 1) goto LAB_0211e704;
      uVar17 = 0;
      goto LAB_0211e690;
    }
    if (local_70[lVar14 + 1] == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_0211e670;
    }
    if (local_70[lVar14 + 2] == '\0') {
      lVar14 = lVar14 + 2;
      goto LAB_0211e670;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  if (-1 < iVar6) {
LAB_0211e704:
    (**(code **)(local_78 + 0x18))(&local_78);
LAB_0211e830:
    puVar18 = local_120;
    (**(code **)(local_128 + 0x18))(&local_128);
    lVar12 = 0;
    do {
      if (local_120[lVar12] == '\0') goto LAB_0211ed14;
      if (local_120[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_0211ed14;
      }
      if (local_120[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_0211ed14;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_0211ed14:
    uVar5 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
    uVar16 = 0x2e;
    if ((int)(local_118 - uVar5) < 0x2f) {
      uVar16 = local_118 + ~uVar5;
    }
    __n = (size_t)uVar16;
    if ((int)uVar16 < 1) goto LAB_0211eac0;
    puVar19 = puVar18 + uVar5;
    pcVar8 = "/AIC:JuneBrideAfterParty/AIF:AI_NPC_Alp_Studio";
    goto LAB_0211eab0;
  }
  goto LAB_0211e7e0;
  while( true ) {
    pcVar8 = local_70;
    lVar12 = lVar14;
    while( true ) {
      lVar12 = lVar12 + -1;
      if (puVar18[uVar17] != *pcVar8) break;
      if (puVar18[uVar17] == '\0') goto LAB_0211e7d0;
      puVar18 = puVar18 + 1;
      pcVar8 = pcVar8 + 1;
      if (lVar12 == 0) goto LAB_0211e7d0;
    }
    uVar17 = uVar17 + 1;
    if (uVar17 == (iVar6 - iVar11) + 1) break;
LAB_0211e690:
    puVar18 = local_120;
    pcVar8 = local_120 + uVar17;
    (**(code **)(local_78 + 0x18))(&local_78);
    if (pcVar8 == local_70) {
LAB_0211e7d0:
      if ((int)uVar17 != -1) goto LAB_0211e830;
      break;
    }
  }
LAB_0211e7e0:
  puVar18 = local_120;
  (**(code **)(local_128 + 0x18))(&local_128);
  lVar12 = 0;
  do {
    if (local_120[lVar12] == '\0') goto LAB_0211e9dc;
    if (local_120[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_0211e9dc;
    }
    if (local_120[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_0211e9dc;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_0211e9dc:
  uVar5 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
  uVar16 = 0x37;
  if ((int)(local_118 - uVar5) < 0x38) {
    uVar16 = local_118 + ~uVar5;
  }
  __n = (size_t)uVar16;
  if (0 < (int)uVar16) {
    puVar19 = puVar18 + uVar5;
    pcVar8 = "/AIC:JuneBrideAfterParty/AIF:AI_NPC_JuneBrideAfterParty";
    goto LAB_0211eab0;
  }
  goto LAB_0211eac0;
  while( true ) {
    pcVar8 = local_70;
    lVar12 = lVar14;
    while( true ) {
      lVar12 = lVar12 + -1;
      if (puVar18[uVar17] != *pcVar8) break;
      if (puVar18[uVar17] == '\0') goto LAB_0211e1c0;
      puVar18 = puVar18 + 1;
      pcVar8 = pcVar8 + 1;
      if (lVar12 == 0) goto LAB_0211e1c0;
    }
    uVar17 = uVar17 + 1;
    if (uVar17 == (iVar6 - iVar11) + 1) break;
LAB_0211e134:
    puVar18 = local_120;
    pcVar8 = local_120 + uVar17;
    (**(code **)(local_78 + 0x18))(&local_78);
    if (pcVar8 == local_70) {
LAB_0211e1c0:
      if ((int)uVar17 != -1) goto LAB_0211e210;
      break;
    }
  }
LAB_0211e1c8:
  puVar18 = local_120;
  (**(code **)(local_128 + 0x18))(&local_128);
  lVar12 = 0;
  do {
    if (local_120[lVar12] == '\0') goto LAB_0211e2c0;
    if (local_120[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_0211e2c0;
    }
    if (local_120[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_0211e2c0;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_0211e2c0:
  uVar5 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
  uVar16 = 0x14;
  if ((int)(local_118 - uVar5) < 0x15) {
    uVar16 = local_118 + ~uVar5;
  }
  __n = (size_t)uVar16;
  if (0 < (int)uVar16) {
    puVar19 = puVar18 + uVar5;
    pcVar8 = "/AIC:DemoPhotoStudio";
    goto LAB_0211eab0;
  }
  goto LAB_0211eac0;
  while( true ) {
    pcVar8 = local_70;
    lVar12 = lVar14;
    while( true ) {
      lVar12 = lVar12 + -1;
      if (puVar18[uVar17] != *pcVar8) break;
      if (puVar18[uVar17] == '\0') goto LAB_0211ea14;
      puVar18 = puVar18 + 1;
      pcVar8 = pcVar8 + 1;
      if (lVar12 == 0) goto LAB_0211ea14;
    }
    uVar17 = uVar17 + 1;
    if (uVar17 == (iVar6 - iVar11) + 1) break;
LAB_0211e94c:
    puVar18 = local_120;
    pcVar8 = local_120 + uVar17;
    (**(code **)(local_78 + 0x18))(&local_78);
    if (pcVar8 == local_70) {
LAB_0211ea14:
      if ((int)uVar17 != -1) goto LAB_0211ec7c;
      break;
    }
  }
LAB_0211ea24:
  puVar18 = local_120;
  (**(code **)(local_128 + 0x18))(&local_128);
  lVar12 = 0;
  do {
    if (local_120[lVar12] == '\0') goto LAB_0211ea7c;
    if (local_120[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_0211ea7c;
    }
    if (local_120[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_0211ea7c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_0211ea7c:
  uVar5 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
  uVar16 = 0x10;
  if ((int)(local_118 - uVar5) < 0x11) {
    uVar16 = local_118 + ~uVar5;
  }
  __n = (size_t)uVar16;
  if (0 < (int)uVar16) {
    puVar19 = puVar18 + uVar5;
    pcVar8 = "/AIC:PhotoStudio";
LAB_0211eab0:
    memcpy(puVar19,pcVar8,__n);
    puVar18[(int)__n + uVar5] = 0;
  }
LAB_0211eac0:
  puVar1 = PTR_DAT_04bb27c0;
  if (*(int *)((long)param_2 + 0x2c) == 2) {
    local_13c = (ulong)*(uint *)(param_2 + 5) << 0x20;
  }
  else if (*(int *)((long)param_2 + 0x2c) == 1) {
    local_13c = CONCAT44(local_13c._4_4_,0xffffffff);
  }
  else {
    local_13c = CONCAT44(local_13c._4_4_,(int)param_2[5]);
  }
  local_134 = CONCAT44(1,(undefined4)local_134);
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return *(uint *)PTR_DAT_04bb3238;
  }
  *(undefined4 *)(param_1 + 0x1600) = param_3;
  *(ushort *)(param_1 + 0x1528) = *(ushort *)(param_1 + 0x1528) | 0x20;
  uVar5 = FUN_007402e0(lVar12,&local_158,local_158 & 0xffffffff,0);
  *(ushort *)(param_1 + 0x1528) = *(ushort *)(param_1 + 0x1528) & 0xffdf;
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    uVar17 = 0;
    bVar9 = 0;
    goto LAB_0211ec40;
  }
  if ((((uVar5 == 0) ||
       (plVar15 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + (ulong)(uVar5 >> 0x14) * 8),
       plVar15 == (long *)0x0)) || ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar15 + 0x46) != uVar5)) {
    plVar15 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar1;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar17 = 1;
      uVar16 = 1;
    }
    else {
      uVar16 = *(uint *)(lVar12 + 0x5e8);
      if (4 < uVar16) goto LAB_0211ebf0;
      uVar17 = 0x101000100 >> (((ulong)uVar16 & 7) << 3);
      uVar16 = (uint)uVar17;
    }
  }
  else {
LAB_0211ebf0:
    uVar17 = 0;
    uVar16 = 0;
  }
  if (plVar15 == (long *)0x0) {
    bVar9 = 0;
  }
  else {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar17 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0);
    bVar9 = 1;
    if ((uVar17 & 1) == 0) {
      uVar16 = 0;
    }
    uVar17 = (ulong)uVar16;
  }
LAB_0211ec40:
  if (!(bool)(bVar9 & (uVar17 & 0xff) != 0)) {
    uVar5 = *(uint *)PTR_DAT_04bb3238;
  }
  return uVar5;
}

