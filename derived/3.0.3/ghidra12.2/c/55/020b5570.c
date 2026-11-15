
void FUN_020b5570(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  short sVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  char *pcVar14;
  short *psVar15;
  byte *pbVar16;
  byte bVar17;
  long lVar18;
  char *pcVar19;
  byte bVar20;
  uint uVar21;
  long lVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined *puVar26;
  long *plVar27;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  byte local_74 [4];
  undefined *local_70;
  char *local_68;
  
  puVar26 = PTR_DAT_04bc3a80;
  puVar2 = PTR_DAT_04bb2020;
  piVar5 = (int *)(param_1 + 0x4e60);
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 != -1) {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
    puVar7 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar7 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar7 >> 1 & 1) == 0) goto LAB_020b57e4;
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    pbVar16 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_020b5648:
      if (*pbVar16 < 8) goto LAB_020b56c0;
LAB_020b5654:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020b56b8:
        pbVar16 = PTR_DAT_04bb5038;
        goto LAB_020b56c0;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar17 = *(byte *)(lVar18 + 0x473);
      pbVar16 = PTR_DAT_04bb5038;
      if ((long)(char)bVar17 != 0xffffffffffffffff) {
        puVar7 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
        if (7 < bVar17) {
          puVar7 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar7 & 8) != 0) {
          pbVar16 = (byte *)(lVar18 + 0x471);
        }
      }
      local_74[0] = *pbVar16;
      if (7 < local_74[0]) goto LAB_020b56b8;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar16 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar16) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_020b5648;
        }
        goto LAB_020b5654;
      }
LAB_020b56c0:
      local_74[0] = *pbVar16;
      if (7 < local_74[0]) {
        local_74[0] = 0xff;
      }
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "PrologueStartedCampfire";
    local_70 = puVar1;
    iVar10 = FUN_0274bce0(local_74,&local_70);
    local_68 = "PrologueFinishTkkDream";
    local_70 = puVar1;
    iVar11 = FUN_0274bce0(local_74,&local_70);
    if ((iVar10 == 0) || (iVar11 != 0)) {
      if (**(int **)PTR_DAT_04bb59b8 != 0) {
        if (*piVar5 < *(int *)(param_1 + 0x4e64)) {
          plVar27 = *(long **)(param_1 + 0x4e70);
          if (plVar27 != (long *)0x0) {
            *(long *)(param_1 + 0x4e70) = *plVar27;
          }
          local_70 = puVar2 + 0x10;
          local_68 = "Ceremony";
          *(undefined4 *)(plVar27 + 2) = 0x20;
          puVar1 = PTR_DAT_04bb2a08;
          pcVar14 = (char *)((long)plVar27 + 0x14);
          *(undefined1 *)((long)plVar27 + 0x33) = 0;
          *plVar27 = (long)(puVar1 + 0x10);
          plVar27[1] = (long)pcVar14;
          (**(code **)(puVar2 + 0x28))(&local_70);
          pcVar19 = local_68;
          if (pcVar14 != local_68) {
            (**(code **)(local_70 + 0x18))(&local_70);
            lVar18 = 0;
            do {
              if (local_68[lVar18] == '\0') goto LAB_020b630c;
              if (local_68[lVar18 + 1] == '\0') goto LAB_020b6300;
              if (local_68[lVar18 + 2] == '\0') goto LAB_020b6308;
              lVar18 = lVar18 + 3;
            } while (lVar18 != 0x80001);
            goto LAB_020b62f8;
          }
          goto LAB_020b6334;
        }
        goto LAB_020b6368;
      }
      if (*(int *)(puVar26 + 0x38) != -0x10e0fba8) goto LAB_020b6368;
      psVar15 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*psVar15 == 0) {
        local_90 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)((ulong)local_90 >> 0x20) < '\x05') {
          lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
          local_70 = (undefined *)(lVar18 + -0x15180);
          local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
        }
        uVar13 = (ulong)local_90 >> 0x30;
        local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
        local_90 = (undefined *)(CONCAT26((short)uVar13,(undefined6)local_90) & 0xff00ffffffffffff);
        psVar15 = (short *)&local_90;
      }
      local_80 = *(undefined8 *)psVar15;
      puVar1 = puVar2 + 0x10;
      local_68 = "SpnJuneBrideTalkEventFrag";
      local_70 = puVar1;
      iVar10 = FUN_0274bce0(local_74,&local_70);
      if (iVar10 != 0) {
        local_68 = "JuneBrideCeremonyDemoAfterNow";
        local_70 = puVar1;
        iVar10 = FUN_02743000(&local_70);
LAB_020b6244:
        if ((iVar10 != 0) && (*piVar5 < *(int *)(param_1 + 0x4e64))) {
          plVar27 = *(long **)(param_1 + 0x4e70);
          if (plVar27 != (long *)0x0) {
            *(long *)(param_1 + 0x4e70) = *plVar27;
          }
          local_70 = puVar2 + 0x10;
          local_68 = "AfterJuneBrideCeremonyDemo";
          *(undefined4 *)(plVar27 + 2) = 0x20;
          puVar1 = PTR_DAT_04bb2a08;
          pcVar14 = (char *)((long)plVar27 + 0x14);
          *(undefined1 *)((long)plVar27 + 0x33) = 0;
          *plVar27 = (long)(puVar1 + 0x10);
          plVar27[1] = (long)pcVar14;
          (**(code **)(puVar2 + 0x28))(&local_70);
          pcVar19 = local_68;
          if (pcVar14 != local_68) {
            (**(code **)(local_70 + 0x18))(&local_70);
            lVar18 = 0;
            do {
              if (local_68[lVar18] == '\0') goto LAB_020b630c;
              if (local_68[lVar18 + 1] == '\0') goto LAB_020b6300;
              if (local_68[lVar18 + 2] == '\0') goto LAB_020b6308;
              lVar18 = lVar18 + 3;
            } while (lVar18 != 0x80001);
            goto LAB_020b62f8;
          }
          goto LAB_020b6334;
        }
        goto LAB_020b6368;
      }
      pcStack_88 = "JuneBride";
      local_90 = puVar1;
      uVar13 = FUN_0087c200(*(undefined8 *)PTR_DAT_04bb32f0,&local_90,&local_80,1);
      local_68 = "JuneBrideCeremonyDemoAfterNow";
      local_70 = puVar1;
      iVar10 = FUN_02743000(&local_70);
      if ((uVar13 & 1) == 0) goto LAB_020b6244;
      pcVar14 = "FirstJuneBride";
LAB_020b5e00:
      FUN_020b6910(param_1 + 0x4e60,pcVar14);
      goto LAB_020b6368;
    }
    local_70 = puVar2 + 0x10;
    local_68 = "PrologueStartedCampfire";
    iVar10 = FUN_02743000(&local_70);
    if (iVar10 == 0) {
      if (*(int *)(param_1 + 0x4e64) <= *piVar5) goto LAB_020b6368;
      plVar27 = *(long **)(param_1 + 0x4e70);
      if (plVar27 != (long *)0x0) {
        *(long *)(param_1 + 0x4e70) = *plVar27;
      }
      local_70 = puVar2 + 0x10;
      local_68 = "Prologue1stDayCampFire";
      *(undefined4 *)(plVar27 + 2) = 0x20;
      puVar1 = PTR_DAT_04bb2a08;
      pcVar14 = (char *)((long)plVar27 + 0x14);
      *(undefined1 *)((long)plVar27 + 0x33) = 0;
      *plVar27 = (long)(puVar1 + 0x10);
      plVar27[1] = (long)pcVar14;
      (**(code **)(puVar2 + 0x28))(&local_70);
      pcVar19 = local_68;
      if (pcVar14 == local_68) goto LAB_020b6334;
      (**(code **)(local_70 + 0x18))(&local_70);
      lVar18 = 0;
      do {
        if (local_68[lVar18] == '\0') goto LAB_020b630c;
        if (local_68[lVar18 + 1] == '\0') goto LAB_020b6300;
        if (local_68[lVar18 + 2] == '\0') goto LAB_020b6308;
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      goto LAB_020b62f8;
    }
    if (*(int *)(param_1 + 0x4e64) <= *piVar5) goto LAB_020b6368;
    plVar27 = *(long **)(param_1 + 0x4e70);
    if (plVar27 != (long *)0x0) {
      *(long *)(param_1 + 0x4e70) = *plVar27;
    }
    local_70 = puVar2 + 0x10;
    local_68 = "Prologue1stDayEnd";
    *(undefined4 *)(plVar27 + 2) = 0x20;
    puVar1 = PTR_DAT_04bb2a08;
    pcVar14 = (char *)((long)plVar27 + 0x14);
    *(undefined1 *)((long)plVar27 + 0x33) = 0;
    *plVar27 = (long)(puVar1 + 0x10);
    plVar27[1] = (long)pcVar14;
    (**(code **)(puVar2 + 0x28))(&local_70);
    pcVar19 = local_68;
    if (pcVar14 != local_68) {
      (**(code **)(local_70 + 0x18))(&local_70);
      lVar18 = 0;
      do {
        if (local_68[lVar18] == '\0') goto LAB_020b630c;
        if (local_68[lVar18 + 1] == '\0') goto LAB_020b6300;
        if (local_68[lVar18 + 2] == '\0') goto LAB_020b6308;
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      goto LAB_020b62f8;
    }
    goto LAB_020b6334;
  }
LAB_020b57e4:
  iVar10 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar10 == -0x8fb780d) {
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    pbVar16 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_020b5c4c:
      if (*pbVar16 < 8) goto LAB_020b5cc4;
LAB_020b5c58:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020b5cbc:
        pbVar16 = PTR_DAT_04bb5038;
        goto LAB_020b5cc4;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar17 = *(byte *)(lVar18 + 0x473);
      pbVar16 = PTR_DAT_04bb5038;
      if ((long)(char)bVar17 != 0xffffffffffffffff) {
        puVar7 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
        if (7 < bVar17) {
          puVar7 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar7 & 8) != 0) {
          pbVar16 = (byte *)(lVar18 + 0x471);
        }
      }
      local_74[0] = *pbVar16;
      if (7 < local_74[0]) goto LAB_020b5cbc;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar16 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar16) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_020b5c4c;
        }
        goto LAB_020b5c58;
      }
LAB_020b5cc4:
      local_74[0] = *pbVar16;
      if (7 < local_74[0]) {
        local_74[0] = 0xff;
      }
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "SpnPhotoStudioGuideDone";
    local_70 = puVar1;
    iVar10 = FUN_0274bce0(local_74,&local_70);
    psVar15 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*psVar15 == 0) {
      local_90 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)((ulong)local_90 >> 0x20) < '\x05') {
        lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
        local_70 = (undefined *)(lVar18 + -0x15180);
        local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
      }
      uVar13 = (ulong)local_90 >> 0x30;
      local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
      local_90 = (undefined *)(CONCAT26((short)uVar13,(undefined6)local_90) & 0xff00ffffffffffff);
      psVar15 = (short *)&local_90;
    }
    local_80 = *(undefined8 *)psVar15;
    local_68 = "SpnJuneBrideTalkEventFrag";
    local_70 = puVar1;
    iVar11 = FUN_0274bce0(local_74,&local_70);
    if (iVar11 == 0) {
      local_90 = puVar2 + 0x10;
      pcStack_88 = "JuneBride";
      uVar13 = FUN_0087c200(*(undefined8 *)PTR_DAT_04bb32f0,&local_90,&local_80,1);
    }
    else {
      uVar13 = 0;
    }
    if (((iVar10 == 0) || ((uVar13 & 1) != 0)) && (*piVar5 < *(int *)(param_1 + 0x4e64))) {
      plVar27 = *(long **)(param_1 + 0x4e70);
      if (plVar27 != (long *)0x0) {
        *(long *)(param_1 + 0x4e70) = *plVar27;
      }
      local_70 = puVar2 + 0x10;
      local_68 = "PhotoStudio";
      *(undefined4 *)(plVar27 + 2) = 0x20;
      puVar1 = PTR_DAT_04bb2a08;
      pcVar14 = (char *)((long)plVar27 + 0x14);
      *(undefined1 *)((long)plVar27 + 0x33) = 0;
      *plVar27 = (long)(puVar1 + 0x10);
      plVar27[1] = (long)pcVar14;
      (**(code **)(puVar2 + 0x28))(&local_70);
      pcVar19 = local_68;
      if (pcVar14 != local_68) {
        (**(code **)(local_70 + 0x18))(&local_70);
        lVar18 = 0;
        do {
          if (local_68[lVar18] == '\0') goto LAB_020b630c;
          if (local_68[lVar18 + 1] == '\0') goto LAB_020b6300;
          if (local_68[lVar18 + 2] == '\0') goto LAB_020b6308;
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
LAB_020b62f8:
        lVar18 = 0;
        goto LAB_020b630c;
      }
      goto LAB_020b6334;
    }
  }
  else if (iVar10 == -0x68a9a319) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "IsParty";
    iVar10 = FUN_02758850(&local_70);
    if (iVar10 == 0) {
      iVar10 = *(int *)(puVar26 + 0x38);
      goto LAB_020b5d94;
    }
    if (*piVar5 < *(int *)(param_1 + 0x4e64)) {
      plVar27 = *(long **)(param_1 + 0x4e70);
      if (plVar27 != (long *)0x0) {
        *(long *)(param_1 + 0x4e70) = *plVar27;
      }
      local_70 = puVar2 + 0x10;
      local_68 = "WherearenPartyInOffice";
      *(undefined4 *)(plVar27 + 2) = 0x20;
      puVar1 = PTR_DAT_04bb2a08;
      pcVar14 = (char *)((long)plVar27 + 0x14);
      *(undefined1 *)((long)plVar27 + 0x33) = 0;
      *plVar27 = (long)(puVar1 + 0x10);
      plVar27[1] = (long)pcVar14;
      (**(code **)(puVar2 + 0x28))(&local_70);
      pcVar19 = local_68;
      if (pcVar14 != local_68) {
        (**(code **)(local_70 + 0x18))(&local_70);
        lVar18 = 0;
        do {
          if (local_68[lVar18] == '\0') goto LAB_020b630c;
          if (local_68[lVar18 + 1] == '\0') goto LAB_020b6300;
          if (local_68[lVar18 + 2] == '\0') goto LAB_020b6308;
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        goto LAB_020b62f8;
      }
      goto LAB_020b6334;
    }
  }
  else if (iVar10 == -0x6d41fcf3) {
    iVar10 = 0;
    if (*piVar5 != 0) {
      uVar24 = 0;
      puVar25 = *(undefined8 **)(param_1 + 0x4e68);
      puVar23 = puVar25 + *piVar5;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        plVar27 = (long *)*puVar25;
        local_68 = "AmiiboPhone";
        local_70 = puVar2;
        (**(code **)(*plVar27 + 0x18))(plVar27);
        (**(code **)(*plVar27 + 0x18))(plVar27);
        pcVar14 = (char *)plVar27[1];
        (**(code **)(local_70 + 0x18))(&local_70);
        if (pcVar14 == local_68) {
LAB_020b5850:
          uVar12 = 1;
        }
        else {
          pcVar14 = (char *)plVar27[1];
          if (*pcVar14 == *local_68) {
            if (*pcVar14 == '\0') goto LAB_020b5850;
            uVar13 = 0;
            pcVar19 = local_68 + 1;
            do {
              if (pcVar14[uVar13 + 1] != pcVar19[uVar13]) {
                pcVar19 = (char *)0x0;
                goto LAB_020b5970;
              }
              if (pcVar14[uVar13 + 1] == '\0') {
                pcVar19 = (char *)0x1;
                goto LAB_020b5970;
              }
              if (pcVar14[uVar13 + 2] != pcVar19[uVar13 + 1]) {
                pcVar19 = (char *)0x0;
                uVar13 = uVar13 + 1;
                goto LAB_020b5970;
              }
              if (pcVar14[uVar13 + 2] == '\0') {
                uVar13 = uVar13 + 1;
                pcVar19 = (char *)0x1;
                goto LAB_020b5970;
              }
              if (uVar13 == 0x7fffe) {
                uVar13 = 0x80000;
                goto LAB_020b5970;
              }
              lVar18 = uVar13 + 3;
              uVar3 = uVar13 + 2;
              if (pcVar14[lVar18] != pcVar19[uVar13 + 2]) {
                pcVar19 = (char *)0x0;
                goto LAB_020b596c;
              }
              uVar13 = uVar13 + 3;
            } while (pcVar14[lVar18] != '\0');
            pcVar19 = (char *)0x1;
LAB_020b596c:
            uVar13 = uVar3;
LAB_020b5970:
            uVar12 = (uint)(uVar13 < 0x80000) & (uint)pcVar19;
          }
          else {
            uVar12 = 0;
          }
        }
        puVar25 = puVar25 + 1;
        uVar24 = uVar12 | uVar24;
      } while (puVar25 != puVar23);
      puVar26 = PTR_DAT_04bc3a80;
      if (uVar24 != 0) goto LAB_020b6368;
      iVar10 = *piVar5;
    }
    puVar26 = PTR_DAT_04bc3a80;
    if (iVar10 < *(int *)(param_1 + 0x4e64)) {
      plVar27 = *(long **)(param_1 + 0x4e70);
      if (plVar27 != (long *)0x0) {
        *(long *)(param_1 + 0x4e70) = *plVar27;
      }
      puVar2 = PTR_DAT_04bb2020;
      pcVar14 = (char *)((long)plVar27 + 0x14);
      local_70 = PTR_DAT_04bb2020 + 0x10;
      local_68 = "AmiiboPhone";
      *(undefined4 *)(plVar27 + 2) = 0x20;
      puVar1 = PTR_DAT_04bb2a08;
      *(undefined1 *)((long)plVar27 + 0x33) = 0;
      *plVar27 = (long)(puVar1 + 0x10);
      plVar27[1] = (long)pcVar14;
      (**(code **)(puVar2 + 0x28))(&local_70);
      pcVar19 = local_68;
      if (pcVar14 != local_68) {
        (**(code **)(local_70 + 0x18))(&local_70);
        lVar18 = 0;
        do {
          if (local_68[lVar18] == '\0') goto LAB_020b630c;
          if (local_68[lVar18 + 1] == '\0') goto LAB_020b6300;
          if (local_68[lVar18 + 2] == '\0') goto LAB_020b6308;
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        goto LAB_020b62f8;
      }
      goto LAB_020b6334;
    }
  }
  else {
LAB_020b5d94:
    if ((iVar10 == 0x7fff3f46) || (iVar10 == 0xc672fa7)) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      local_68 = "IsParty";
      iVar10 = FUN_02758850(&local_70);
      if ((iVar10 != 0) && (*(int *)(PTR_DAT_04bc3a78 + 0x38) == -0x21ba1d3a)) {
        pcVar14 = "WherearenParty";
        goto LAB_020b5e00;
      }
      iVar10 = *(int *)(puVar26 + 0x38);
    }
    puVar2 = PTR_DAT_04bb2020;
    if (iVar10 == 0x3411ee5c) {
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar17 = *(byte *)(lVar18 + 0x476);
      lVar22 = *(long *)PTR_DAT_04bb39b0;
      if (lVar22 == 0) {
        bVar20 = *PTR_DAT_04bb32e0;
LAB_020b5f88:
        if (bVar20 < 8) goto LAB_020b614c;
LAB_020b5f90:
        bVar20 = *(byte *)(lVar18 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar20 != 0xffffffffffffffff) {
          puVar7 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
          if (7 < bVar20) {
            puVar7 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar7 & 8) != 0) {
            pbVar16 = (byte *)(lVar18 + 0x471);
          }
        }
        bVar20 = *pbVar16;
        bVar9 = 7 < bVar20;
        if (bVar9) {
          bVar20 = 0xff;
        }
        local_80 = CONCAT71(local_80._1_7_,bVar20);
        if (bVar9) {
          bVar20 = *PTR_DAT_04bb5038;
          goto LAB_020b614c;
        }
      }
      else {
        pbVar16 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar22 + 0x15c) != 0) {
          pbVar16 = (byte *)(lVar22 + 0x158);
        }
        bVar20 = *pbVar16;
        if (7 < bVar20) {
          if ((*(int *)(lVar22 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            bVar20 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_020b5f88;
          }
          goto LAB_020b5f90;
        }
LAB_020b614c:
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        local_80 = CONCAT71(local_80._1_7_,bVar20);
      }
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_68 = "PhoneCallByRcoWherearen";
      local_70 = puVar1;
      iVar10 = FUN_0274bce0(&local_80,&local_70);
      if (iVar10 != 0) {
        pcStack_88 = "RcoTalkWithOtg";
        local_90 = puVar1;
        iVar10 = FUN_0274bce0(&local_80,&local_90);
        if ((bVar17 < 2) && (iVar10 == 0)) {
          FUN_020b6a70(param_1 + 0x4e60,"OtgIndoorOffice");
          goto LAB_020b6368;
        }
      }
      local_70 = puVar2 + 0x10;
      local_68 = "WHEREAREN_ChocolateDemoReserve";
      iVar10 = FUN_02753180(&local_80,&local_70);
      if (iVar10 != 0) {
        FUN_020b6bd0(param_1 + 0x4e60);
      }
    }
  }
  goto LAB_020b6368;
LAB_020b6300:
  lVar18 = lVar18 + 1;
  goto LAB_020b630c;
LAB_020b6308:
  lVar18 = lVar18 + 2;
LAB_020b630c:
  iVar10 = (int)lVar18;
  if ((int)plVar27[2] <= (int)lVar18) {
    iVar10 = (int)plVar27[2] + -1;
  }
  memcpy(pcVar14,pcVar19,(long)iVar10);
  pcVar14[iVar10] = '\0';
LAB_020b6334:
  *plVar27 = (long)(PTR_DAT_04bb2028 + 0x10);
  if (*piVar5 < *(int *)(param_1 + 0x4e64)) {
    *(long **)(*(long *)(param_1 + 0x4e68) + (long)*piVar5 * 8) = plVar27;
    *piVar5 = *piVar5 + 1;
  }
LAB_020b6368:
  if (*(int *)(puVar26 + 0x38) != 0x3ee08254) goto LAB_020b6674;
  uVar13 = FUN_016cf390();
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar13 & 1) == 0) {
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    pbVar16 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_020b64a0:
      if (*pbVar16 < 8) goto LAB_020b6518;
LAB_020b64ac:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020b6510:
        pbVar16 = PTR_DAT_04bb5038;
        goto LAB_020b6518;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar17 = *(byte *)(lVar18 + 0x473);
      pbVar16 = PTR_DAT_04bb5038;
      if ((long)(char)bVar17 != 0xffffffffffffffff) {
        puVar7 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
        if (7 < bVar17) {
          puVar7 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar7 & 8) != 0) {
          pbVar16 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar17 = *pbVar16;
      bVar9 = 7 < bVar17;
      if (bVar9) {
        bVar17 = 0xff;
      }
      local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar17);
      if (bVar9) goto LAB_020b6510;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar16 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar16) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_020b64a0;
        }
        goto LAB_020b64ac;
      }
LAB_020b6518:
      bVar17 = *pbVar16;
      if (7 < bVar17) {
        bVar17 = 0xff;
      }
      local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar17);
    }
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "HotelReserveInviteDemo";
    iVar10 = FUN_02753180(&local_90,&local_70);
    if ((iVar10 == 0) || (*(int *)(param_1 + 0x4e64) <= *piVar5)) goto LAB_020b6674;
    plVar27 = *(long **)(param_1 + 0x4e70);
    if (plVar27 != (long *)0x0) {
      *(long *)(param_1 + 0x4e70) = *plVar27;
    }
    local_70 = puVar2 + 0x10;
    local_68 = "HotelInviteDemo";
    *(undefined4 *)(plVar27 + 2) = 0x20;
    puVar26 = PTR_DAT_04bb2a08;
    pcVar14 = (char *)((long)plVar27 + 0x14);
    *(undefined1 *)((long)plVar27 + 0x33) = 0;
    *plVar27 = (long)(puVar26 + 0x10);
    plVar27[1] = (long)pcVar14;
    (**(code **)(puVar2 + 0x28))(&local_70);
    pcVar19 = local_68;
    if (pcVar14 != local_68) {
      (**(code **)(local_70 + 0x18))(&local_70);
      lVar18 = 0;
      do {
        if (local_68[lVar18] == '\0') goto LAB_020b661c;
        if (local_68[lVar18 + 1] == '\0') goto LAB_020b6610;
        if (local_68[lVar18 + 2] == '\0') goto LAB_020b6618;
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      goto LAB_020b6608;
    }
  }
  else {
    if (*(int *)(param_1 + 0x4e64) <= *piVar5) goto LAB_020b6674;
    plVar27 = *(long **)(param_1 + 0x4e70);
    if (plVar27 != (long *)0x0) {
      *(long *)(param_1 + 0x4e70) = *plVar27;
    }
    puVar2 = PTR_DAT_04bb2020;
    pcVar14 = (char *)((long)plVar27 + 0x14);
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "HotelTutorial";
    *(undefined4 *)(plVar27 + 2) = 0x20;
    puVar26 = PTR_DAT_04bb2a08;
    *(undefined1 *)((long)plVar27 + 0x33) = 0;
    *plVar27 = (long)(puVar26 + 0x10);
    plVar27[1] = (long)pcVar14;
    (**(code **)(puVar2 + 0x28))(&local_70);
    pcVar19 = local_68;
    if (pcVar14 != local_68) {
      (**(code **)(local_70 + 0x18))(&local_70);
      lVar18 = 0;
      do {
        if (local_68[lVar18] == '\0') goto LAB_020b661c;
        if (local_68[lVar18 + 1] == '\0') goto LAB_020b6610;
        if (local_68[lVar18 + 2] == '\0') goto LAB_020b6618;
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
LAB_020b6608:
      lVar18 = 0;
      goto LAB_020b661c;
    }
  }
  goto LAB_020b6644;
LAB_020b6610:
  lVar18 = lVar18 + 1;
  goto LAB_020b661c;
LAB_020b6618:
  lVar18 = lVar18 + 2;
LAB_020b661c:
  iVar10 = (int)lVar18;
  if ((int)plVar27[2] <= (int)lVar18) {
    iVar10 = (int)plVar27[2] + -1;
  }
  memcpy(pcVar14,pcVar19,(long)iVar10);
  pcVar14[iVar10] = '\0';
LAB_020b6644:
  *plVar27 = (long)(PTR_DAT_04bb2028 + 0x10);
  if (*piVar5 < *(int *)(param_1 + 0x4e64)) {
    *(long **)(*(long *)(param_1 + 0x4e68) + (long)*piVar5 * 8) = plVar27;
    *piVar5 = *piVar5 + 1;
  }
LAB_020b6674:
  uVar13 = FUN_016cf630();
  if (((uVar13 & 1) != 0) && (*piVar5 < *(int *)(param_1 + 0x4e64))) {
    plVar27 = *(long **)(param_1 + 0x4e70);
    if (plVar27 != (long *)0x0) {
      *(long *)(param_1 + 0x4e70) = *plVar27;
    }
    puVar2 = PTR_DAT_04bb2020;
    pcVar14 = (char *)((long)plVar27 + 0x14);
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "HotelDIYTradeTutorial";
    *(undefined4 *)(plVar27 + 2) = 0x20;
    puVar26 = PTR_DAT_04bb2a08;
    *(undefined1 *)((long)plVar27 + 0x33) = 0;
    *plVar27 = (long)(puVar26 + 0x10);
    plVar27[1] = (long)pcVar14;
    (**(code **)(puVar2 + 0x28))(&local_70);
    pcVar19 = local_68;
    if (pcVar14 != local_68) {
      (**(code **)(local_70 + 0x18))(&local_70);
      lVar18 = 0;
      do {
        if (local_68[lVar18] == '\0') goto LAB_020b674c;
        if (local_68[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_020b674c;
        }
        if (local_68[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_020b674c;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_020b674c:
      iVar10 = (int)lVar18;
      if ((int)plVar27[2] <= (int)lVar18) {
        iVar10 = (int)plVar27[2] + -1;
      }
      memcpy(pcVar14,pcVar19,(long)iVar10);
      pcVar14[iVar10] = '\0';
    }
    *plVar27 = (long)(PTR_DAT_04bb2028 + 0x10);
    if (*piVar5 < *(int *)(param_1 + 0x4e64)) {
      *(long **)(*(long *)(param_1 + 0x4e68) + (long)*piVar5 * 8) = plVar27;
      *piVar5 = *piVar5 + 1;
    }
  }
  if (0 < *(int *)(param_1 + 0x3cc0)) {
    lVar18 = 0;
    puVar25 = *(undefined8 **)(param_1 + 0x3cd0);
    do {
      puVar23 = *(undefined8 **)(*(long *)(param_1 + 0x3cc8) + lVar18 * 8);
      lVar18 = lVar18 + 1;
      *puVar23 = puVar25;
      *(undefined8 **)(param_1 + 0x3cd0) = puVar23;
      puVar25 = puVar23;
    } while (lVar18 < *(int *)(param_1 + 0x3cc0));
  }
  *(undefined4 *)(param_1 + 0x3cc0) = 0;
  puVar2 = PTR_DAT_04bb4738;
  if (*piVar5 != 0) {
    puVar25 = *(undefined8 **)(param_1 + 0x4e68);
    puVar23 = puVar25 + *piVar5;
    do {
      plVar27 = (long *)*puVar25;
      lVar18 = *(long *)puVar2;
      (**(code **)(*plVar27 + 0x18))(plVar27);
      uVar12 = FUN_006bd550(plVar27[1],0);
      uVar24 = *(uint *)(lVar18 + 8);
      if (uVar24 != 0) {
        lVar18 = *(long *)(lVar18 + 0x10);
        if ((int)uVar24 < 2) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0;
          iVar10 = uVar24 - 1;
          do {
            uVar4 = iVar10 + uVar21;
            if ((int)uVar4 < 0 != SCARRY4(iVar10,uVar21)) {
              uVar4 = uVar4 + 1;
            }
            uVar6 = (int)uVar4 >> 1;
            uVar4 = *(uint *)(lVar18 + ((long)((ulong)uVar4 << 0x20) >> 0x21) * 0x20 + 0x18);
            if (uVar4 == uVar12) goto joined_r0x020b68c4;
            if (uVar4 < uVar12) {
              uVar21 = uVar6 + 1;
            }
            else {
              iVar10 = uVar6 - 1;
            }
          } while ((int)uVar21 < iVar10);
        }
        uVar6 = uVar21;
        if (*(uint *)(lVar18 + (long)(int)uVar21 * 0x20 + 0x18) == uVar12) {
joined_r0x020b68c4:
          if (-1 < (int)uVar6) {
            if (uVar24 <= uVar6) {
              uVar6 = 0;
            }
            (**(code **)(lVar18 + (ulong)uVar6 * 0x20))(param_1 + 0x3cc0);
          }
        }
      }
      puVar25 = puVar25 + 1;
    } while (puVar25 != puVar23);
  }
  return;
}

