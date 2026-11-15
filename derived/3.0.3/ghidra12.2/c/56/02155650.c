
void FUN_02155650(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  short sVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte extraout_var;
  ulong uVar16;
  int iVar17;
  long lVar18;
  char *pcVar19;
  byte *pbVar20;
  uint *puVar21;
  byte *pbVar22;
  char cVar23;
  ulong uVar24;
  undefined8 *puVar25;
  short *psVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  ushort *puVar34;
  long lVar35;
  long *plVar36;
  long *plVar37;
  undefined *local_108;
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined8 local_b0;
  byte local_a4 [4];
  undefined8 local_a0;
  char *local_98;
  undefined4 local_90;
  char local_8c [5];
  char acStack_87 [3];
  char acStack_84 [5];
  undefined1 local_7f;
  undefined1 local_7d;
  undefined8 local_78;
  char *pcStack_70;
  
  lVar35 = *(long *)(param_1 + 8);
  local_f8 = 0x40;
  local_b5 = 0;
  local_108 = PTR_DAT_04bb2f70 + 0x10;
  local_100 = local_f4;
  (**(code **)(*(long *)(lVar35 + 0x3e0) + 0x18))(lVar35 + 0x3e0);
  puVar33 = *(undefined1 **)(lVar35 + 1000);
  if (local_f4 != puVar33) {
    (**(code **)(*(long *)(lVar35 + 0x3e0) + 0x18))(lVar35 + 0x3e0);
    lVar18 = 0;
    do {
      if (*(char *)(*(long *)(lVar35 + 1000) + lVar18) == '\0') goto LAB_0215571c;
      lVar30 = *(long *)(lVar35 + 1000) + lVar18;
      if (*(char *)(lVar30 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0215571c;
      }
      if (*(char *)(lVar30 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0215571c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0215571c:
    iVar11 = (int)lVar18;
    if (local_f8 <= (int)lVar18) {
      iVar11 = local_f8 + -1;
    }
    memcpy(local_f4,puVar33,(long)iVar11);
    local_f4[iVar11] = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  puVar7 = PTR_DAT_04bb2020;
  local_108 = PTR_DAT_04bb2bc0 + 0x10;
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_98 = "otgB";
  local_100[(long)local_f8 + -1] = 0;
  (**(code **)(puVar1 + 0x28))(&local_108);
  puVar33 = local_100;
  (**(code **)(local_a0 + 0x18))(&local_a0);
  puVar32 = local_100;
  if (puVar33 == local_98) {
LAB_021557f8:
    if (local_100 != &DAT_040a033e) {
      iVar11 = 3;
      if (local_f8 < 4) {
        iVar11 = local_f8 + -1;
      }
      memcpy(local_100,&DAT_040a033e,(long)iVar11);
      puVar32[iVar11] = 0;
    }
  }
  else {
    uVar24 = 0;
    bVar8 = true;
    do {
      if (local_100[uVar24] != local_98[uVar24]) break;
      if (local_100[uVar24] == '\0') {
        if (bVar8) goto LAB_021557f8;
        break;
      }
      bVar8 = uVar24 < 0x80000;
      uVar24 = uVar24 + 1;
    } while (uVar24 != 0x80001);
  }
  uVar24 = FUN_0180bc80();
  plVar37 = (long *)PTR_DAT_04bb2720;
  if ((uVar24 & 1) == 0) {
    lVar35 = *(long *)PTR_DAT_04bb2720;
    iVar11 = 0;
    if (lVar35 != 0) {
      if (*(long *)(lVar35 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
        iVar10 = FUN_006bd550(*puVar14,0);
        iVar11 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar11 = 0;
          if (*plVar37 != 0) {
            lVar35 = *(long *)(*plVar37 + 0x330);
            iVar11 = 0;
            if (lVar35 != 0) {
              iVar11 = *(int *)(lVar35 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(PTR_DAT_04bbe4b0 + 0xa0) == iVar11) goto LAB_021558c4;
  }
  else {
LAB_021558c4:
    puVar33 = local_100;
    (**(code **)(local_108 + 0x18))(&local_108);
    lVar35 = 0;
    do {
      if (local_100[lVar35] == '\0') goto LAB_0215591c;
      if (local_100[lVar35 + 1] == '\0') {
        lVar35 = lVar35 + 1;
        goto LAB_0215591c;
      }
      if (local_100[lVar35 + 2] == '\0') {
        lVar35 = lVar35 + 2;
        goto LAB_0215591c;
      }
      lVar35 = lVar35 + 3;
    } while (lVar35 != 0x80001);
    lVar35 = 0;
LAB_0215591c:
    uVar12 = (uint)lVar35 & ((int)(uint)lVar35 >> 0x1f ^ 0xffffffffU);
    uVar13 = 6;
    if ((int)(local_f8 - uVar12) < 7) {
      uVar13 = local_f8 + ~uVar12;
    }
    if (0 < (int)uVar13) {
      memcpy(puVar33 + uVar12,"Office",(ulong)uVar13);
      puVar33[(ulong)uVar13 + (ulong)uVar12] = 0;
    }
  }
  puVar32 = *(undefined1 **)(param_1 + 0x740);
  (**(code **)(local_108 + 0x18))(&local_108);
  puVar33 = local_100;
  if (puVar32 != local_100) {
    (**(code **)(local_108 + 0x18))(&local_108);
    lVar35 = 0;
    do {
      if (local_100[lVar35] == '\0') goto LAB_021559dc;
      if (local_100[lVar35 + 1] == '\0') {
        lVar35 = lVar35 + 1;
        goto LAB_021559dc;
      }
      if (local_100[lVar35 + 2] == '\0') {
        lVar35 = lVar35 + 2;
        goto LAB_021559dc;
      }
      lVar35 = lVar35 + 3;
    } while (lVar35 != 0x80001);
    lVar35 = 0;
LAB_021559dc:
    iVar11 = (int)lVar35;
    if (*(int *)(param_1 + 0x748) <= (int)lVar35) {
      iVar11 = *(int *)(param_1 + 0x748) + -1;
    }
    memcpy(puVar32,puVar33,(long)iVar11);
    puVar32[iVar11] = 0;
  }
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x15);
    puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar21 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar21 >> 0x15 & 1) != 0) {
      return;
    }
  }
  lVar35 = *plVar37;
  if (lVar35 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar35 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
      iVar11 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar12 = 0;
    puVar25 = DAT_055c1b60;
    do {
      if (*(int *)(puVar25 + -1) == *(int *)(puVar14 + 7)) {
        if (((uVar12 ^ 0xffffffff) & 0xffff) != 0) goto LAB_02155b14;
        break;
      }
      puVar25 = (undefined8 *)puVar25[1];
      uVar12 = uVar12 + 1;
    } while (puVar25 != &DAT_055c1b58);
  }
  uVar12 = 0;
LAB_02155b14:
  uVar24 = FUN_016e6c20(uVar12);
  if ((uVar24 & 1) != 0) {
    return;
  }
  local_a0 = puVar7 + 0x10;
  local_98 = "CompleteCommuneExpandEvent";
  uVar24 = FUN_0273f0a0(&local_a0);
  pcVar19 = *(char **)(param_1 + 0x740);
  if ((uVar24 & 1) != 0) {
    cVar23 = *pcVar19;
    if (cVar23 != 'p') {
      if (cVar23 != 's') goto LAB_02155f24;
      if (pcVar19[1] == 'p') {
        if (pcVar19[2] == 'n') goto LAB_02155b84;
        goto LAB_02155f54;
      }
      goto switchD_02155f7c_caseD_73;
    }
    if (pcVar19[1] == 'o') {
      if (pcVar19[2] != 'o') goto LAB_02155f54;
LAB_02155b84:
      lVar35 = *(long *)PTR_DAT_04bb39b0;
      pbVar20 = PTR_DAT_04bb32e0;
      if (lVar35 == 0) {
        if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02155c14;
LAB_02155c80:
        local_a4[0] = *pbVar20;
        if (7 < local_a4[0]) {
          local_a4[0] = 0xff;
        }
      }
      else {
        if (*(int *)(lVar35 + 0x15c) != 0) {
          pbVar20 = (byte *)(lVar35 + 0x158);
        }
        if ((*pbVar20 < 8) ||
           (((*(int *)(lVar35 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar20 < 8))))
        goto LAB_02155c80;
LAB_02155c14:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02155c78:
          pbVar20 = PTR_DAT_04bb5038;
          goto LAB_02155c80;
        }
        lVar35 = **(long **)PTR_DAT_04bb27d0;
        bVar9 = *(byte *)(lVar35 + 0x473);
        pbVar20 = PTR_DAT_04bb5038;
        if ((long)(char)bVar9 != 0xffffffffffffffff) {
          puVar21 = (uint *)(lVar35 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
          if (7 < bVar9) {
            puVar21 = (uint *)(lVar35 + 0x48);
          }
          if ((*puVar21 & 8) != 0) {
            pbVar20 = (byte *)(lVar35 + 0x471);
          }
        }
        local_a4[0] = *pbVar20;
        if (7 < local_a4[0]) goto LAB_02155c78;
      }
      psVar26 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*psVar26 == 0) {
        local_78 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)((ulong)local_78 >> 0x20) < '\x05') {
          lVar35 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
          local_a0 = (undefined *)(lVar35 + -0x15180);
          local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
        }
        psVar26 = (short *)&local_78;
        uVar24 = (ulong)local_78 >> 0x30;
        local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
        local_78 = (undefined *)(CONCAT26((short)uVar24,(undefined6)local_78) & 0xff00ffffffffffff);
      }
      local_b0 = *(undefined8 *)psVar26;
      puVar1 = puVar7 + 0x10;
      local_98 = "SpnJuneBrideTalkEventFrag";
      local_a0 = puVar1;
      iVar11 = FUN_0274bce0(local_a4,&local_a0);
      if (iVar11 == 0) {
        pcStack_70 = "JuneBride";
        local_78 = puVar1;
        uVar12 = FUN_0087c200(*(undefined8 *)PTR_DAT_04bb32f0,&local_78,&local_b0,1);
        uVar12 = uVar12 ^ 1;
      }
      else {
        uVar12 = 1;
      }
      local_98 = "JuneBrideCeremonyDemoAfterNow";
      local_a0 = puVar1;
      iVar11 = FUN_02743000(&local_a0);
      if (((uVar12 & 1) == 0) || (iVar11 != 0)) {
        *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) & 0xfffffffd;
        pcVar19 = *(char **)(param_1 + 0x740);
        goto LAB_02155f54;
      }
      lVar35 = *(long *)PTR_DAT_04bb39b0;
      pbVar20 = PTR_DAT_04bb32e0;
      if (lVar35 == 0) {
        if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02155dfc;
LAB_02155e68:
        bVar9 = *pbVar20;
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar9);
      }
      else {
        if (*(int *)(lVar35 + 0x15c) != 0) {
          pbVar20 = (byte *)(lVar35 + 0x158);
        }
        if ((*pbVar20 < 8) ||
           (((*(int *)(lVar35 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar20 < 8))))
        goto LAB_02155e68;
LAB_02155dfc:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02155e60:
          pbVar20 = PTR_DAT_04bb5038;
          goto LAB_02155e68;
        }
        lVar35 = **(long **)PTR_DAT_04bb27d0;
        bVar9 = *(byte *)(lVar35 + 0x473);
        pbVar20 = PTR_DAT_04bb5038;
        if ((long)(char)bVar9 != 0xffffffffffffffff) {
          puVar21 = (uint *)(lVar35 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
          if (7 < bVar9) {
            puVar21 = (uint *)(lVar35 + 0x48);
          }
          if ((*puVar21 & 8) != 0) {
            pbVar20 = (byte *)(lVar35 + 0x471);
          }
        }
        bVar9 = *pbVar20;
        bVar8 = 7 < bVar9;
        if (bVar8) {
          bVar9 = 0xff;
        }
        local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar9);
        if (bVar8) goto LAB_02155e60;
      }
      local_98 = "SpnCheckPlace";
      local_a0 = puVar7 + 0x10;
      iVar11 = FUN_02753180(&local_78,&local_a0);
      local_98 = "PooCheckPlace";
      local_a0 = puVar7 + 0x10;
      iVar10 = FUN_02753180(&local_78,&local_a0);
      if (iVar10 == 0 && iVar11 == 0) {
        uVar12 = *(uint *)(param_1 + 0x7f0);
        *(uint *)(param_1 + 0x7f0) = uVar12 | 2;
        pcVar19 = *(char **)(param_1 + 0x740);
        if (((*pcVar19 == 'p') && (pcVar19[1] == 'o')) && (pcVar19[2] == 'o')) {
          uVar12 = uVar12 | 0x2002;
          goto LAB_02155ed4;
        }
      }
      else if ((iVar11 == 2) && (iVar10 == 2)) {
        uVar12 = *(uint *)(param_1 + 0x7f0) | 2;
LAB_02155ed4:
        *(uint *)(param_1 + 0x7f0) = uVar12;
      }
      pcVar19 = *(char **)(param_1 + 0x740);
      cVar23 = *pcVar19;
LAB_02155f24:
      if (((cVar23 == 'a') && (pcVar19[1] == 'l')) && (pcVar19[2] == 'w')) {
        *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x2002;
      }
      goto LAB_02155f54;
    }
    cVar23 = 'p';
    goto switchD_02155f7c_caseD_62;
  }
LAB_02155f54:
  cVar23 = *pcVar19;
  switch(cVar23) {
  case 'a':
    if ((pcVar19[1] == 'l') && ((pcVar19[2] == 'p' || (pcVar19[2] == 'w')))) goto LAB_02156454;
    cVar23 = 'a';
    break;
  case 'b':
  case 'c':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'n':
  case 'p':
  case 'q':
    break;
  case 'd':
    if (pcVar19[1] == 'o') {
      if (pcVar19[2] == 'c') {
        uVar24 = FUN_0180b7a0();
        if ((uVar24 & 1) != 0) goto switchD_0215633c_caseD_64;
        lVar35 = *plVar37;
        iVar11 = 0;
        if (lVar35 != 0) {
          if (*(long *)(lVar35 + 0x330) == 0) {
            iVar11 = 0;
          }
          else {
            puVar14 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
            iVar10 = FUN_006bd550(*puVar14,0);
            iVar11 = 0;
            if (iVar10 == 0x758f7eaf) {
              iVar11 = 0;
              if (*plVar37 != 0) {
                lVar35 = *(long *)(*plVar37 + 0x330);
                iVar11 = 0;
                if (lVar35 != 0) {
                  iVar11 = *(int *)(lVar35 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(PTR_DAT_04bbe4b0 + 0x84) == iVar11) goto switchD_0215633c_caseD_64;
        uVar24 = FUN_016e606c();
        if ((uVar24 & 1) != 0) goto LAB_02156648;
LAB_021561a4:
        uVar24 = FUN_016e60dc();
joined_r0x021561c0:
        if ((uVar24 & 1) == 0) goto switchD_0215633c_caseD_64;
        goto LAB_02156648;
      }
      if (pcVar19[2] == 'd') {
        lVar35 = *plVar37;
        iVar11 = 0;
        if (lVar35 != 0) {
          if (*(long *)(lVar35 + 0x330) == 0) {
            iVar11 = 0;
          }
          else {
            puVar14 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
            iVar10 = FUN_006bd550(*puVar14,0);
            iVar11 = 0;
            if (iVar10 == 0x758f7eaf) {
              iVar11 = 0;
              if (*plVar37 != 0) {
                lVar35 = *(long *)(*plVar37 + 0x330);
                iVar11 = 0;
                if (lVar35 != 0) {
                  iVar11 = *(int *)(lVar35 + 0x244);
                }
              }
            }
          }
        }
        iVar10 = *(int *)(PTR_DAT_04bbe4b0 + 0x10);
        goto LAB_02156640;
      }
    }
    cVar23 = 'd';
    break;
  case 'm':
    if (pcVar19[1] == 'a') {
      if (pcVar19[2] == 'n') goto LAB_021561dc;
    }
    else if ((pcVar19[1] == 'n') && (pcVar19[2] == 'c')) {
LAB_021561dc:
      if (pcVar19 != "mnc") {
        lVar35 = 0;
        do {
          if ((lVar35 == 0x80000) ||
             (lVar18 = lVar35 + 1, pcVar19[lVar18] != (&DAT_0409b648)[lVar35])) goto LAB_021562a4;
          lVar35 = lVar35 + 1;
        } while (pcVar19[lVar18] != '\0');
      }
LAB_02156238:
      sVar6 = *(short *)PTR_DAT_04bb6298;
      if (sVar6 != -1) {
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x19);
        puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
        if (0xff < (uint)(int)sVar6) {
          puVar21 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar21 >> 0x19 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b))
        goto LAB_02156648;
      }
      goto LAB_021562a4;
    }
    cVar23 = 'm';
    break;
  case 'o':
    if (pcVar19[1] == 't') {
      if (pcVar19[2] != 'g') goto LAB_02156308;
      if (pcVar19 == "mnc") goto LAB_02156238;
LAB_021562a4:
      lVar35 = *plVar37;
      iVar11 = 0;
      if (lVar35 != 0) {
        if (*(long *)(lVar35 + 0x330) == 0) {
          iVar11 = 0;
        }
        else {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
          iVar10 = FUN_006bd550(*puVar14,0);
          iVar11 = 0;
          if (iVar10 == 0x758f7eaf) {
            iVar11 = 0;
            if (*plVar37 != 0) {
              lVar35 = *(long *)(*plVar37 + 0x330);
              iVar11 = 0;
              if (lVar35 != 0) {
                iVar11 = *(int *)(lVar35 + 0x244);
              }
            }
          }
        }
      }
      iVar10 = *(int *)(PTR_DAT_04bbe4b0 + 0xa0);
      goto LAB_02156640;
    }
    if ((pcVar19[1] != 'w') || (pcVar19[2] != 'l')) {
LAB_02156308:
      cVar23 = 'o';
      break;
    }
    lVar35 = *plVar37;
    iVar11 = 0;
    if (lVar35 != 0) {
      if (*(long *)(lVar35 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
        iVar10 = FUN_006bd550(*puVar14,0);
        iVar11 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar11 = 0;
          if (*plVar37 != 0) {
            lVar35 = *(long *)(*plVar37 + 0x330);
            iVar11 = 0;
            if (lVar35 != 0) {
              iVar11 = *(int *)(lVar35 + 0x244);
            }
          }
        }
      }
    }
    if ((*(int *)(PTR_DAT_04bbe4b0 + 0xc0) == iVar11) ||
       (uVar24 = (ulong)*(short *)PTR_DAT_04bb6298, uVar24 == 0xffffffffffffffff))
    goto switchD_0215633c_caseD_64;
    uVar12 = 0x13;
    goto LAB_021564f0;
  case 'r':
    if (pcVar19[1] != 'c') {
LAB_02156174:
      cVar23 = 'r';
      break;
    }
    if (pcVar19[2] == 't') {
      lVar35 = *plVar37;
      iVar11 = 0;
      if (lVar35 != 0) {
        if (*(long *)(lVar35 + 0x330) == 0) {
LAB_02156164:
          iVar11 = 0;
        }
        else {
LAB_021565a8:
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
          iVar10 = FUN_006bd550(*puVar14,0);
          iVar11 = 0;
          if (iVar10 == 0x758f7eaf) {
            iVar11 = 0;
            if (*plVar37 != 0) {
              lVar35 = *(long *)(*plVar37 + 0x330);
              iVar11 = 0;
              if (lVar35 != 0) {
                iVar11 = *(int *)(lVar35 + 0x244);
              }
            }
          }
        }
      }
LAB_021565f8:
      iVar10 = *(int *)(PTR_DAT_04bbe4b0 + 0x30);
      goto LAB_02156640;
    }
    if (pcVar19[2] != 'o') goto LAB_02156174;
    uVar24 = FUN_0180bc80();
    if ((uVar24 & 1) == 0) {
      lVar35 = *plVar37;
      iVar11 = 0;
      if (lVar35 != 0) {
        if (*(long *)(lVar35 + 0x330) != 0) goto LAB_021565a8;
        goto LAB_02156164;
      }
      goto LAB_021565f8;
    }
    goto LAB_02156648;
  case 's':
switchD_02155f7c_caseD_73:
    cVar23 = 's';
    switch(pcVar19[1]) {
    case 'k':
      if ((pcVar19 != "ttlA") && (pcVar19[2] != 'k')) goto switchD_0215633c_caseD_64;
      goto LAB_02156454;
    case 'l':
      if (pcVar19 == "ttlA") goto LAB_02156454;
      goto LAB_02156418;
    default:
      goto switchD_02155f7c_caseD_62;
    case 'p':
      if (pcVar19[2] == 'n') {
        uVar24 = FUN_0180c0c0();
        if ((uVar24 & 1) != 0) goto switchD_0215633c_caseD_64;
        goto LAB_021561a4;
      }
      break;
    case 'z':
      if (pcVar19[2] == 'a') {
        uVar24 = FUN_0180bc80();
        goto joined_r0x021561c0;
      }
    }
    cVar23 = 's';
    break;
  default:
    if (cVar23 == '\0') goto switchD_0215633c_caseD_64;
  }
switchD_02155f7c_caseD_62:
  if (pcVar19 == "ttlA") goto LAB_02156454;
  switch(cVar23) {
  case 'b':
    if ((pcVar19[1] != 'p') || (pcVar19[2] != 't')) goto switchD_0215633c_caseD_64;
    break;
  case 'c':
    if ((pcVar19[1] != 'm') || (pcVar19[2] != 'l')) goto switchD_0215633c_caseD_64;
    break;
  default:
    goto switchD_0215633c_caseD_64;
  case 'k':
    if (((pcVar19[1] != 'p') || (0xc < (byte)pcVar19[2] - 0x67)) ||
       ((1 << (ulong)((byte)pcVar19[2] - 0x67 & 0x1f) & 0x1041U) == 0))
    goto switchD_0215633c_caseD_64;
    lVar35 = *plVar37;
    iVar11 = 0;
    if (lVar35 != 0) {
      if (*(long *)(lVar35 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
        iVar10 = FUN_006bd550(*puVar14,0);
        iVar11 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar11 = 0;
          if (*plVar37 != 0) {
            lVar35 = *(long *)(*plVar37 + 0x330);
            iVar11 = 0;
            if (lVar35 != 0) {
              iVar11 = *(int *)(lVar35 + 0x244);
            }
          }
        }
      }
    }
    iVar10 = *(int *)(PTR_DAT_04bbe4b0 + 200);
LAB_02156640:
    if (iVar10 != iVar11) goto switchD_0215633c_caseD_64;
    goto LAB_02156648;
  case 'p':
    if (pcVar19[1] != 'o') goto switchD_0215633c_caseD_64;
LAB_02156418:
    if (pcVar19[2] != 'o') goto switchD_0215633c_caseD_64;
    break;
  case 't':
    lVar35 = 0;
    do {
      if ((lVar35 == 0x80000) || (lVar18 = lVar35 + 1, pcVar19[lVar18] != (&DAT_040b5370)[lVar35]))
      goto switchD_0215633c_caseD_64;
      lVar35 = lVar35 + 1;
    } while (pcVar19[lVar18] != '\0');
  }
LAB_02156454:
  uVar24 = FUN_0180b7a0();
  if ((uVar24 & 1) == 0) {
    lVar35 = *plVar37;
    iVar11 = 0;
    if (lVar35 != 0) {
      if (*(long *)(lVar35 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
        iVar10 = FUN_006bd550(*puVar14,0);
        iVar11 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar11 = 0;
          if (*plVar37 != 0) {
            lVar35 = *(long *)(*plVar37 + 0x330);
            iVar11 = 0;
            if (lVar35 != 0) {
              iVar11 = *(int *)(lVar35 + 0x244);
            }
          }
        }
      }
    }
    if ((*(int *)(PTR_DAT_04bbe4b0 + 0x84) != iVar11) &&
       (uVar24 = (ulong)*(short *)PTR_DAT_04bb6298, uVar24 != 0xffffffffffffffff)) {
      uVar12 = 0x17;
LAB_021564f0:
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar12);
      if (uVar12 < 0x23) {
        puVar21 = (uint *)(PTR_DAT_04bc39f8 + (uVar24 & 0xffffffff) * 8);
        if (0xff < (uint)uVar24) {
          puVar21 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar21 >> (ulong)uVar12 & 1) != 0) {
LAB_02156648:
          pcVar19 = *(char **)(param_1 + 0x740);
          if (((*pcVar19 == 'o') && (pcVar19[1] == 't')) && (pcVar19[2] == 'g')) {
            local_90 = 0x10;
            local_7f = 0;
            local_7d = 0;
            local_8c[0] = s_FixWorkMotion_040ac0e0[0];
            local_8c[1] = s_FixWorkMotion_040ac0e0[1];
            local_8c[2] = s_FixWorkMotion_040ac0e0[2];
            local_8c[3] = s_FixWorkMotion_040ac0e0[3];
            local_8c[4] = s_FixWorkMotion_040ac0e0[4];
            acStack_87[0] = s_FixWorkMotion_040ac0e0[5];
            acStack_87[1] = s_FixWorkMotion_040ac0e0[6];
            acStack_87[2] = s_FixWorkMotion_040ac0e0[7];
            acStack_84[0] = s_FixWorkMotion_040ac0e0[8];
            acStack_84[1] = s_FixWorkMotion_040ac0e0[9];
            acStack_84[2] = s_FixWorkMotion_040ac0e0[10];
            acStack_84[3] = s_FixWorkMotion_040ac0e0[0xb];
            acStack_84[4] = s_FixWorkMotion_040ac0e0[0xc];
            local_a0 = PTR_DAT_04bb2ab0 + 0x10;
            local_98 = local_8c;
            lVar35 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
            uVar12 = FUN_006bd550(local_98,0);
            iVar11 = *(int *)(lVar35 + 0x20);
            if (iVar11 != 0) {
              if (iVar11 < 2) {
                iVar10 = 0;
              }
              else {
                iVar10 = 0;
                iVar11 = iVar11 + -1;
                do {
                  uVar13 = iVar11 + iVar10;
                  if ((int)uVar13 < 0 != SCARRY4(iVar11,iVar10)) {
                    uVar13 = uVar13 + 1;
                  }
                  iVar17 = (int)uVar13 >> 1;
                  uVar13 = *(uint *)(*(long *)(lVar35 + 0x28) +
                                     ((long)((ulong)uVar13 << 0x20) >> 0x21) * 0x20 + 0x18);
                  if (uVar13 == uVar12) goto LAB_0215676c;
                  if (uVar13 < uVar12) {
                    iVar10 = iVar17 + 1;
                  }
                  else {
                    iVar11 = iVar17 + -1;
                  }
                } while (iVar10 < iVar11);
              }
              iVar17 = iVar10;
              if (*(uint *)(*(long *)(lVar35 + 0x28) + (long)iVar10 * 0x20 + 0x18) == uVar12) {
LAB_0215676c:
                if (-1 < iVar17) {
                  (**(code **)(local_a0 + 0x18))(&local_a0);
                  uVar13 = FUN_006bd550(local_98,0);
                  uVar12 = *(uint *)(lVar35 + 0x20);
                  if (uVar12 != 0) {
                    lVar18 = *(long *)(lVar35 + 0x28);
                    if ((int)uVar12 < 2) {
                      uVar27 = 0;
                    }
                    else {
                      uVar27 = 0;
                      iVar11 = uVar12 - 1;
                      do {
                        uVar3 = iVar11 + uVar27;
                        if ((int)uVar3 < 0 != SCARRY4(iVar11,uVar27)) {
                          uVar3 = uVar3 + 1;
                        }
                        uVar28 = (int)uVar3 >> 1;
                        uVar3 = *(uint *)(lVar18 + ((long)((ulong)uVar3 << 0x20) >> 0x21) * 0x20 +
                                         0x18);
                        if (uVar3 == uVar13) {
                          uVar27 = uVar28;
                          goto LAB_02156828;
                        }
                        if (uVar3 < uVar13) {
                          uVar27 = uVar28 + 1;
                        }
                        else {
                          iVar11 = uVar28 - 1;
                        }
                      } while ((int)uVar27 < iVar11);
                    }
                    if (*(uint *)(lVar18 + (long)(int)uVar27 * 0x20 + 0x18) == uVar13) {
LAB_02156828:
                      if (-1 < (int)uVar27) {
                        if (uVar12 <= uVar27) {
                          uVar27 = 0;
                        }
                        if (0 < *(int *)(lVar18 + (ulong)uVar27 * 0x20)) {
                          (**(code **)(local_a0 + 0x18))(&local_a0);
                          uVar13 = FUN_006bd550(local_98,0);
                          uVar12 = *(uint *)(lVar35 + 0x20);
                          if (uVar12 != 0) {
                            lVar35 = *(long *)(lVar35 + 0x28);
                            if ((int)uVar12 < 2) {
                              uVar27 = 0;
                            }
                            else {
                              uVar27 = 0;
                              iVar11 = uVar12 - 1;
                              do {
                                uVar3 = iVar11 + uVar27;
                                if ((int)uVar3 < 0 != SCARRY4(iVar11,uVar27)) {
                                  uVar3 = uVar3 + 1;
                                }
                                uVar28 = (int)uVar3 >> 1;
                                uVar3 = *(uint *)(lVar35 + ((long)((ulong)uVar3 << 0x20) >> 0x21) *
                                                           0x20 + 0x18);
                                if (uVar3 == uVar13) goto LAB_0215745c;
                                if (uVar3 < uVar13) {
                                  uVar27 = uVar28 + 1;
                                }
                                else {
                                  iVar11 = uVar28 - 1;
                                }
                              } while ((int)uVar27 < iVar11);
                            }
                            uVar28 = uVar27;
                            if (*(uint *)(lVar35 + (long)(int)uVar27 * 0x20 + 0x18) == uVar13) {
LAB_0215745c:
                              if (-1 < (int)uVar28) {
                                if (uVar12 <= uVar28) {
                                  uVar28 = 0;
                                }
                                *(undefined4 *)(lVar35 + (ulong)uVar28 * 0x20) = 0;
                              }
                            }
                          }
                          pcVar19 = *(char **)(param_1 + 0x6e8);
                          *(undefined4 *)(param_1 + 0x7ec) = 1;
                          *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x202;
                          if (pcVar19 != "NpcSpTypingExist") {
                            iVar11 = 0x10;
                            if (*(int *)(param_1 + 0x6f0) < 0x11) {
                              iVar11 = *(int *)(param_1 + 0x6f0) + -1;
                            }
                            memcpy(pcVar19,"NpcSpTypingExist",(long)iVar11);
                            pcVar19[iVar11] = '\0';
                          }
                          puVar14 = *(undefined8 **)(param_1 + 0x798);
                          if (puVar14 != &DAT_0407ebb1) {
                            iVar11 = 0;
                            if (*(int *)(param_1 + 0x7a0) < 1) {
                              iVar11 = *(int *)(param_1 + 0x7a0) + -1;
                            }
                            memset(puVar14,0,(long)iVar11);
                            *(undefined1 *)((long)puVar14 + (long)iVar11) = 0;
                          }
                          FUN_0218bba0(*(undefined8 *)PTR_DAT_04bb46e8,param_1 + 0x738,
                                       param_1 + 0x6e0,param_1 + 0x790);
                          goto switchD_0215633c_caseD_64;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ((*(byte *)(param_1 + 0x7f0) >> 1 & 1) != 0) {
            lVar35 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
            if (lVar35 == 0) {
              if (1 < *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80)) goto switchD_0215633c_caseD_64;
            }
            else if (((*(int *)(lVar35 + 0x77b0) - 3U < 5) || (*(int *)(lVar35 + 0x77b0) == 0x1b))
                    || ((1 < *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) ||
                        (*(short *)(lVar35 + 0xae84) != -2)))) goto switchD_0215633c_caseD_64;
            FUN_02157540(param_1);
          }
        }
      }
    }
  }
switchD_0215633c_caseD_64:
  lVar35 = *(long *)PTR_DAT_04bb4898;
  if (lVar35 != 0) {
    uVar24 = 0;
    puVar33 = (undefined1 *)(param_1 + 0x4ac);
    puVar34 = (ushort *)(param_1 + 0x4a);
    do {
      uVar15 = FUN_0217d4d0(lVar35,puVar34 + -0x1d,*(long *)(param_1 + 8) + 0x3e0,
                            uVar24 & 0xffffffff);
      if ((uVar15 & 1) == 0) break;
      uVar5 = *puVar34;
      *puVar33 = 0;
      *(undefined8 *)(puVar33 + -0xc) = 0;
      uVar24 = uVar24 + 1;
      *(uint *)(puVar33 + -4) = (uint)uVar5 * 0x1e;
      puVar33 = puVar33 + 0x20;
      *(char *)(param_1 + 0x490) = *(char *)(param_1 + 0x490) + '\x01';
      puVar34 = puVar34 + 0x24;
    } while (uVar24 != 0x10);
  }
  puVar1 = PTR_DAT_04bbe4b0;
  uVar24 = 0;
  lVar35 = param_1 + 0x6d0;
  do {
    switch(uVar24 & 0xff) {
    case 0:
switchD_02156a10_caseD_0:
      bVar8 = true;
      break;
    case 1:
      lVar18 = *(long *)PTR_DAT_04bb46b0;
      if (lVar18 != 0) {
        puVar14 = *(undefined8 **)(lVar18 + 0x10);
        if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
          lVar18 = (**(code **)(*(long *)*puVar14 + 0x38))();
          if (lVar18 != 0) {
            lVar18 = lVar18 + 0x70;
            goto LAB_02156e70;
          }
        }
        else if (((puVar14 != (undefined8 *)0x0) && ((long *)puVar14[0x26] != (long *)0x0)) &&
                (lVar18 = (**(code **)(*(long *)puVar14[0x26] + 0x38))(), lVar18 != 0)) {
LAB_02156e70:
          plVar36 = (long *)(lVar18 + 0x1bf240);
          if ((*(long **)(lVar18 + 0x1bf260) == (long *)0x0) ||
             (puVar14 = (undefined8 *)**(long **)(lVar18 + 0x1bf260), puVar14 == (undefined8 *)0x0))
          {
            uVar15 = 0;
          }
          else {
            uVar15 = (**(code **)*puVar14)();
            uVar15 = uVar15 & 0xffffffff;
          }
          pcVar19 = *(char **)(*(long *)(param_1 + 8) + 1000);
          if (((*pcVar19 == 'm') && (pcVar19[1] == 'o')) && (pcVar19[2] == 'l')) {
            local_98 = "IsVisitNpcTidyToday";
            local_a0 = puVar7 + 0x10;
            iVar11 = FUN_0273ea30(&local_a0);
            if (iVar11 != 1) {
              local_a0 = PTR_DAT_04bb2020 + 0x10;
              local_98 = "IsCallNpcTidy";
              iVar11 = FUN_0273ea30(&local_a0);
              if (iVar11 != 1) goto LAB_02156ff8;
            }
LAB_02156fa8:
            sVar6 = *(short *)PTR_DAT_04bb6298;
            if (sVar6 != -1) {
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,1);
              puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
              if (0xff < (uint)(int)sVar6) {
                puVar21 = (uint *)PTR_DAT_04bc39f8;
              }
              bVar9 = (byte)(*puVar21 >> 1);
              goto LAB_0215707c;
            }
          }
          else {
            uVar16 = FUN_028d4d70(*(long *)(lVar18 + 0x1bf248) + *plVar36,
                                  *(long *)(param_1 + 8) + 0x3e0);
            if ((uVar16 & 1) != 0) goto LAB_02156fa8;
          }
LAB_02156ff8:
          *(undefined1 *)(lVar35 + uVar24) = 0;
joined_r0x02157084:
          if ((uVar15 & 1) != 0) {
            if (plVar36[4] != 0) {
              puVar14 = *(undefined8 **)(plVar36[4] + 8);
              if (puVar14 != (undefined8 *)0x0) {
                (**(code **)*puVar14)();
              }
            }
          }
        }
      }
      goto switchD_02156a10_default;
    case 2:
      bVar8 = *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x66eec322;
      break;
    case 3:
      lVar18 = *plVar37;
      iVar11 = 0;
      if (lVar18 != 0) {
        if (*(long *)(lVar18 + 0x330) == 0) {
          iVar11 = 0;
        }
        else {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
          iVar10 = FUN_006bd550(*puVar14,0);
          iVar11 = 0;
          if (iVar10 == 0x758f7eaf) {
            iVar11 = 0;
            if (*plVar37 != 0) {
              lVar18 = *(long *)(*plVar37 + 0x330);
              iVar11 = 0;
              if (lVar18 != 0) {
                iVar11 = *(int *)(lVar18 + 0x244);
              }
            }
          }
        }
      }
      iVar10 = *(int *)(puVar1 + 0x34);
      goto LAB_02156ef4;
    case 4:
      lVar18 = *plVar37;
      iVar11 = 0;
      if (lVar18 != 0) {
        if (*(long *)(lVar18 + 0x330) == 0) {
          iVar10 = *(int *)(puVar1 + 0x10);
          iVar11 = 0;
          goto LAB_02156ef4;
        }
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar10 = FUN_006bd550(*puVar14,0);
        iVar11 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar11 = 0;
          if (*plVar37 != 0) {
            lVar18 = *(long *)(*plVar37 + 0x330);
            iVar11 = 0;
            if (lVar18 != 0) {
              iVar11 = *(int *)(lVar18 + 0x244);
            }
          }
        }
      }
      iVar10 = *(int *)(puVar1 + 0x10);
      goto LAB_02156ef4;
    case 5:
      uVar15 = FUN_0180b7a0();
      if ((uVar15 & 1) == 0) {
        lVar18 = *plVar37;
        iVar11 = 0;
        if (lVar18 != 0) {
          if (*(long *)(lVar18 + 0x330) == 0) {
            iVar11 = 0;
          }
          else {
            puVar14 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
            iVar10 = FUN_006bd550(*puVar14,0);
            iVar11 = 0;
            if (iVar10 == 0x758f7eaf) {
              iVar11 = 0;
              if (*plVar37 != 0) {
                lVar18 = *(long *)(*plVar37 + 0x330);
                iVar11 = 0;
                if (lVar18 != 0) {
                  iVar11 = *(int *)(lVar18 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(puVar1 + 0x84) != iVar11) {
          sVar6 = *(short *)PTR_DAT_04bb6298;
          uVar15 = (ulong)sVar6;
          if (uVar15 != 0xffffffffffffffff) {
            local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x11);
            puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
            if (0xff < (uint)(int)sVar6) {
              puVar21 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar21 >> 0x11 & 1) == 0) goto LAB_0215713c;
            goto switchD_02156a10_caseD_0;
          }
        }
      }
      goto LAB_021569e0;
    case 6:
      lVar18 = *(long *)PTR_DAT_04bb39b0;
      pbVar20 = PTR_DAT_04bb32e0;
      if (lVar18 == 0) {
        if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02156e04;
LAB_0215719c:
        bVar9 = *pbVar20;
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        local_b0 = CONCAT71(local_b0._1_7_,bVar9);
      }
      else {
        if (*(int *)(lVar18 + 0x15c) != 0) {
          pbVar20 = (byte *)(lVar18 + 0x158);
        }
        if ((*pbVar20 < 8) ||
           (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar20 < 8))))
        goto LAB_0215719c;
LAB_02156e04:
        pbVar20 = PTR_DAT_04bb5038;
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_0215719c;
        lVar18 = **(long **)PTR_DAT_04bb27d0;
        bVar9 = *(byte *)(lVar18 + 0x473);
        pbVar22 = PTR_DAT_04bb5038;
        if ((long)(char)bVar9 != 0xffffffffffffffff) {
          puVar21 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
          if (7 < bVar9) {
            puVar21 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar21 & 8) != 0) {
            pbVar22 = (byte *)(lVar18 + 0x471);
          }
        }
        bVar9 = *pbVar22;
        bVar8 = 7 < bVar9;
        if (bVar8) {
          bVar9 = 0xff;
        }
        local_b0 = CONCAT71(local_b0._1_7_,bVar9);
        if (bVar8) goto LAB_0215719c;
      }
      lVar18 = *(long *)(param_1 + 8);
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_98 = "hgh";
      local_a0 = puVar2;
      (**(code **)(*(long *)(lVar18 + 0x3e0) + 0x18))(lVar18 + 0x3e0);
      (**(code **)(*(long *)(lVar18 + 0x3e0) + 0x18))(lVar18 + 0x3e0);
      pcVar19 = *(char **)(lVar18 + 1000);
      (**(code **)(local_a0 + 0x18))(&local_a0);
      if (pcVar19 == local_98) {
LAB_02157284:
        pcStack_70 = "KinuyoTalkBoforeFlag";
        local_78 = puVar2;
        iVar11 = FUN_0274bce0(&local_b0,&local_78);
        plVar37 = (long *)PTR_DAT_04bb2720;
        if (iVar11 == 0) {
          lVar18 = *(long *)PTR_DAT_04bb2720;
          iVar11 = 0;
          if (lVar18 != 0) {
            if (*(long *)(lVar18 + 0x330) == 0) {
              iVar11 = 0;
            }
            else {
              puVar14 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
              iVar10 = FUN_006bd550(*puVar14,0);
              iVar11 = 0;
              if (iVar10 == 0x758f7eaf) {
                iVar11 = 0;
                if (*plVar37 != 0) {
                  lVar18 = *(long *)(*plVar37 + 0x330);
                  iVar11 = 0;
                  if (lVar18 != 0) {
                    iVar11 = *(int *)(lVar18 + 0x244);
                  }
                }
              }
            }
          }
          bVar8 = *(int *)(puVar1 + 0x34) != iVar11;
        }
        else {
          bVar8 = false;
        }
        break;
      }
      uVar15 = 0;
      bVar8 = true;
      lVar18 = *(long *)(lVar18 + 1000) + 1;
      do {
        lVar30 = lVar18 + uVar15;
        cVar23 = *(char *)(lVar30 + -1);
        if (cVar23 != local_98[uVar15]) break;
        if (cVar23 == '\0') {
          if (bVar8) goto LAB_02157284;
          break;
        }
        cVar23 = *(char *)(lVar18 + uVar15);
        if (cVar23 != local_98[uVar15 + 1]) break;
        if (cVar23 == '\0') goto LAB_02157284;
        cVar23 = *(char *)(lVar30 + 1);
        if (cVar23 != local_98[uVar15 + 2]) break;
        if (cVar23 == '\0') goto LAB_02157284;
        bVar8 = uVar15 < 0x7fffe;
        uVar15 = uVar15 + 3;
      } while (uVar15 != 0x80001);
      *(undefined1 *)(lVar35 + uVar24) = 0;
      plVar37 = (long *)PTR_DAT_04bb2720;
      goto switchD_02156a10_default;
    case 7:
      lVar18 = *(long *)PTR_DAT_04bb46b0;
      if (lVar18 != 0) {
        puVar14 = *(undefined8 **)(lVar18 + 0x10);
        if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
          lVar18 = (**(code **)(*(long *)*puVar14 + 0x38))();
          if (lVar18 != 0) {
            lVar18 = lVar18 + 0x70;
LAB_02156ebc:
            plVar36 = (long *)(lVar18 + 0x1bf240);
            if ((*(long **)(lVar18 + 0x1bf260) == (long *)0x0) ||
               (puVar14 = (undefined8 *)**(long **)(lVar18 + 0x1bf260), puVar14 == (undefined8 *)0x0
               )) {
              uVar15 = 0;
            }
            else {
              uVar15 = (**(code **)*puVar14)();
              uVar15 = uVar15 & 0xffffffff;
            }
            sVar6 = *(short *)PTR_DAT_04bb6298;
            if (sVar6 == -1) {
LAB_02157078:
              bVar9 = 0;
            }
            else {
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,1);
              puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
              if (0xff < (uint)(int)sVar6) {
                puVar21 = (uint *)PTR_DAT_04bc39f8;
              }
              if ((*puVar21 >> 1 & 1) == 0) goto LAB_02157078;
              bVar9 = FUN_028d4d70(*(long *)(lVar18 + 0x1bf248) + *plVar36,
                                   *(long *)(param_1 + 8) + 0x3e0);
              bVar9 = bVar9 ^ 1;
            }
LAB_0215707c:
            *(byte *)(lVar35 + uVar24) = bVar9 & 1;
            goto joined_r0x02157084;
          }
        }
        else if (puVar14 != (undefined8 *)0x0) {
          if ((long *)puVar14[0x26] != (long *)0x0) {
            lVar18 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
            if (lVar18 != 0) goto LAB_02156ebc;
          }
        }
      }
      goto switchD_02156a10_default;
    case 8:
      sVar6 = *(short *)PTR_DAT_04bb6298;
      if (sVar6 == -1) goto LAB_021569e0;
      local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
      puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar21 = (uint *)PTR_DAT_04bc39f8;
      }
LAB_02157164:
      bVar8 = (bool)((byte)(*puVar21 >> ((ulong)local_a0 & 0xffffffff)) & 1);
      break;
    case 9:
      bVar8 = false;
      if (*(char *)(param_1 + 0x6d7) != '\0') {
        FUN_00883634(*(undefined8 *)PTR_DAT_04bb32f0);
        bVar8 = (bool)((byte)~extraout_var >> 7);
      }
      break;
    case 10:
      lVar18 = *plVar37;
      iVar11 = 0;
      if (lVar18 != 0) {
        if (*(long *)(lVar18 + 0x330) == 0) {
          iVar10 = *(int *)(puVar1 + 0xa0);
          iVar11 = 0;
          goto LAB_02156ef4;
        }
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar10 = FUN_006bd550(*puVar14,0);
        iVar11 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar11 = 0;
          if (*plVar37 != 0) {
            lVar18 = *(long *)(*plVar37 + 0x330);
            iVar11 = 0;
            if (lVar18 != 0) {
              iVar11 = *(int *)(lVar18 + 0x244);
            }
          }
        }
      }
      iVar10 = *(int *)(puVar1 + 0xa0);
LAB_02156ef4:
      bVar8 = iVar10 == iVar11;
      break;
    case 0xb:
      sVar6 = *(short *)PTR_DAT_04bb6298;
      if (sVar6 != -1) {
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x19);
        puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
        if (0xff < (uint)(int)sVar6) {
          puVar21 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar21 >> 0x19 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b))
        goto switchD_02156a10_caseD_0;
      }
      goto LAB_021569e0;
    case 0xc:
      uVar15 = FUN_0180b7a0();
      if ((uVar15 & 1) == 0) {
        lVar18 = *plVar37;
        iVar11 = 0;
        if (lVar18 != 0) {
          if (*(long *)(lVar18 + 0x330) == 0) {
            iVar11 = 0;
          }
          else {
            puVar14 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
            iVar10 = FUN_006bd550(*puVar14,0);
            iVar11 = 0;
            if (iVar10 == 0x758f7eaf) {
              iVar11 = 0;
              if (*plVar37 != 0) {
                lVar18 = *(long *)(*plVar37 + 0x330);
                iVar11 = 0;
                if (lVar18 != 0) {
                  iVar11 = *(int *)(lVar18 + 0x244);
                }
              }
            }
          }
        }
        if ((*(int *)(puVar1 + 0x84) != iVar11) &&
           (uVar15 = (ulong)*(short *)PTR_DAT_04bb6298, uVar15 != 0xffffffffffffffff)) {
LAB_0215713c:
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x17);
          puVar21 = (uint *)(PTR_DAT_04bc39f8 + (uVar15 & 0xffffffff) * 8);
          if (0xff < (uint)uVar15) {
            puVar21 = (uint *)PTR_DAT_04bc39f8;
          }
          goto LAB_02157164;
        }
      }
LAB_021569e0:
      bVar8 = false;
      break;
    default:
      goto switchD_02156a10_default;
    }
    *(bool *)(lVar35 + uVar24) = bVar8;
switchD_02156a10_default:
    uVar24 = uVar24 + 1;
  } while (uVar24 != 0xd);
  if (*(char *)(param_1 + 0x490) != '\0') {
    lVar18 = param_1 + 0x498;
    uVar24 = 0;
    lVar29 = param_1 + 0x10;
    lVar30 = lVar18;
    do {
      lVar4 = lVar29;
      if (0xf < uVar24) {
        lVar4 = param_1 + 0x10;
      }
      lVar31 = lVar30;
      if ((**(char **)(lVar4 + 8) == '\0') || (*(char *)(lVar4 + 0x3c) == '\0')) {
        if (0xf < uVar24) {
          lVar31 = lVar18;
        }
LAB_0215736c:
        *(undefined1 *)(lVar31 + 0x18) = 0;
      }
      else {
        uVar15 = (ulong)*(uint *)(lVar4 + 0x40);
        if (0xc < *(uint *)(lVar4 + 0x40)) {
          uVar15 = 0;
        }
        if (0xf < uVar24) {
          lVar31 = lVar18;
        }
        if (*(char *)(lVar35 + uVar15) == '\0') goto LAB_0215736c;
        *(undefined1 *)(lVar31 + 0x18) = 1;
      }
      uVar24 = uVar24 + 1;
      lVar30 = lVar30 + 0x20;
      lVar29 = lVar29 + 0x48;
    } while (uVar24 < *(byte *)(param_1 + 0x490));
  }
  FUN_02158bf0(param_1);
  bVar9 = *(byte *)(param_1 + 0x698);
  if (-1 < (char)bVar9) {
    lVar35 = param_1 + 0x498 + (ulong)bVar9 * 0x20;
    if (0xf < bVar9) {
      lVar35 = param_1 + 0x498;
    }
    *(undefined4 *)(lVar35 + 8) = *(undefined4 *)(lVar35 + 0xc);
  }
  *(undefined1 *)(param_1 + 0x6b4) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined4 *)(param_1 + 0x6b0) = 300;
  *(undefined1 *)(param_1 + 0x6cc) = 0;
  *(undefined4 *)(param_1 + 0x6c8) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x7f4) = 0;
  *(undefined8 *)(param_1 + 0x6c0) = 0x8000000000000000;
  return;
}

