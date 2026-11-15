
void FUN_02157540(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  void *__src;
  int iVar5;
  uint uVar6;
  short sVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  byte *pbVar19;
  long *plVar20;
  byte *pbVar21;
  uint *puVar22;
  long lVar23;
  char *pcVar24;
  long lVar25;
  char cVar26;
  ulong uVar27;
  byte bVar28;
  long lVar29;
  int *piVar30;
  ulong uVar31;
  char *pcVar32;
  void *__dest;
  uint uVar33;
  undefined *local_d0;
  char *local_c8;
  int local_c0;
  char local_bc [63];
  undefined1 local_7d;
  undefined1 uStack_75;
  byte local_74 [4];
  undefined *local_70;
  char *local_68;
  
  lVar1 = param_1 + 0x738;
  (**(code **)(*(long *)(param_1 + 0x738) + 0x18))(lVar1);
  (**(code **)(*(long *)(param_1 + 0x738) + 0x18))(lVar1);
  puVar9 = PTR_DAT_04bb2020;
  pcVar32 = *(char **)(param_1 + 0x740);
  if (pcVar32 == "manOffice") {
LAB_021575e0:
    *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x800;
    local_d0 = puVar9 + 0x10;
    local_c8 = "SetManOfficeChair";
    iVar14 = FUN_02758850(&local_d0);
    pcVar32 = *(char **)(param_1 + 0x740);
    if (iVar14 != 0) {
      if (pcVar32 == "manChairOffice") {
        pcVar32 = "manChairOffice";
      }
      else {
        iVar14 = 0xe;
        if (*(int *)(param_1 + 0x748) < 0xf) {
          iVar14 = *(int *)(param_1 + 0x748) + -1;
        }
        memcpy(pcVar32,"manChairOffice",(long)iVar14);
        pcVar32[iVar14] = '\0';
        pcVar32 = *(char **)(param_1 + 0x740);
      }
    }
  }
  else {
    uVar27 = 0;
    bVar11 = true;
    do {
      if (pcVar32[uVar27] != "manOffice"[uVar27]) break;
      if (pcVar32[uVar27] == '\0') {
        if (bVar11) goto LAB_021575e0;
        break;
      }
      bVar11 = uVar27 < 0x80000;
      uVar27 = uVar27 + 1;
    } while (uVar27 != 0x80001);
  }
  if (((*pcVar32 == 'k') && (pcVar32[1] == 'p')) && ((pcVar32[2] == 's' || (pcVar32[2] == 'g')))) {
    *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x800;
  }
  uVar27 = FUN_0180b7a0();
  puVar10 = PTR_DAT_04bbe4b0;
  puVar9 = PTR_DAT_04bb2720;
  if ((uVar27 & 1) == 0) {
    lVar18 = *(long *)PTR_DAT_04bb2720;
    iVar14 = 0;
    if (lVar18 != 0) {
      if (*(long *)(lVar18 + 0x330) == 0) {
        iVar14 = 0;
      }
      else {
        puVar16 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar13 = FUN_006bd550(*puVar16,0);
        iVar14 = 0;
        if (iVar13 == 0x758f7eaf) {
          iVar14 = 0;
          if (*(long *)puVar9 != 0) {
            lVar18 = *(long *)(*(long *)puVar9 + 0x330);
            iVar14 = 0;
            if (lVar18 != 0) {
              iVar14 = *(int *)(lVar18 + 0x244);
            }
          }
        }
      }
    }
    if ((*(int *)(puVar10 + 0x84) != iVar14) && (sVar7 = *(short *)PTR_DAT_04bb6298, sVar7 != -1)) {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x17);
      puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar22 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar22 >> 0x17 & 1) != 0) {
        pcVar32 = *(char **)(param_1 + 0x740);
        switch(*pcVar32) {
        case 'a':
          if (((pcVar32[1] == 'l') && (pcVar32 != "alpWorkbench")) && (pcVar32[2] == 'p')) {
            iVar5 = *(int *)(param_1 + 0x748);
            pcVar24 = "alpWorkbench";
            bVar12 = SBORROW4(iVar5,0xc);
            iVar14 = iVar5 + -0xc;
            bVar11 = iVar5 == 0xc;
            iVar13 = 0xc;
LAB_0215793c:
            if (bVar11 || iVar14 < 0 != bVar12) {
              iVar13 = iVar5 + -1;
            }
            memcpy(pcVar32,pcVar24,(long)iVar13);
            pcVar32[iVar13] = '\0';
          }
          break;
        case 'c':
          if ((pcVar32[1] == 'm') && (pcVar32[2] == 'l')) {
            local_c8 = "cml";
LAB_0215780c:
            local_d0 = PTR_DAT_04bb2020 + 0x10;
            FUN_008aa0a0(lVar1,&local_d0,0xffffffff);
          }
          break;
        case 'p':
          if ((pcVar32[1] == 'o') && (pcVar32[2] == 'o')) {
            uVar15 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,lVar1,PTR_DAT_04bb3238,1);
            puVar2 = PTR_DAT_04bb27c0;
            lVar18 = *(long *)PTR_DAT_04bb27c0;
            if (lVar18 != 0) {
              if (((uVar15 == 0) ||
                  (plVar20 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                                       (ulong)(uVar15 >> 0x14) * 8), plVar20 == (long *)0x0)) ||
                 (((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0 ||
                  (*(uint *)(plVar20 + 0x46) != uVar15)))) {
                plVar20 = (long *)0x0;
              }
              if ((*(int *)(lVar18 + 0x288) == 1) || (*(int *)(lVar18 + 0x288) == -1)) {
                plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar18 = *(long *)puVar2;
                iVar14 = (**(code **)(*plVar17 + 0x60))();
                if (iVar14 < 0x11) {
                  uVar15 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_021587e4;
                  uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar18 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_021587e4:
                uVar15 = 0;
              }
              if (plVar20 != (long *)0x0) {
                lVar18 = plVar20[0x2a];
                if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar14 != 0)) {
                  *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bb37d8);
                }
                uVar27 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb37d0);
                uVar33 = 0;
                if ((int)lVar18 == 1) {
                  uVar33 = uVar15;
                }
                if (((uVar27 & 1) != 0) && (uVar33 != 0)) {
                  if ((int)plVar20[0xea] == 1) {
                    local_c8 = "pooChair";
                  }
                  else {
                    local_c8 = "poo";
                  }
                  goto LAB_0215780c;
                }
              }
            }
          }
          break;
        case 't':
          if (((pcVar32[1] == 't') && (pcVar32 != "ttl")) && (pcVar32[2] == 'l')) {
            iVar5 = *(int *)(param_1 + 0x748);
            pcVar24 = "ttl";
            bVar12 = SBORROW4(iVar5,3);
            iVar14 = iVar5 + -3;
            bVar11 = iVar5 == 3;
            iVar13 = 3;
            goto LAB_0215793c;
          }
        }
      }
    }
  }
  lVar18 = *(long *)puVar9;
  iVar14 = 0;
  if (lVar18 != 0) {
    if (*(long *)(lVar18 + 0x330) == 0) {
      iVar14 = 0;
    }
    else {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar13 = FUN_006bd550(*puVar16,0);
      iVar14 = 0;
      if (iVar13 == 0x758f7eaf) {
        iVar14 = 0;
        if (*(long *)puVar9 != 0) {
          lVar18 = *(long *)(*(long *)puVar9 + 0x330);
          iVar14 = 0;
          if (lVar18 != 0) {
            iVar14 = *(int *)(lVar18 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(puVar10 + 0xa0) == iVar14) {
    pcVar32 = *(char **)(param_1 + 0x740);
    if (((*pcVar32 == 'o') && (pcVar32[1] == 't')) && (pcVar32[2] == 'g')) {
      local_d0 = PTR_DAT_04bb2020 + 0x10;
      local_c8 = "SeqDIYCatalogOngoing";
      iVar14 = FUN_02758850(&local_d0);
      if (iVar14 != 0) {
        pcVar32 = *(char **)(param_1 + 0x6e8);
        if (pcVar32 != "NpcSpTypingExist") {
          iVar14 = 0x10;
          if (*(int *)(param_1 + 0x6f0) < 0x11) {
            iVar14 = *(int *)(param_1 + 0x6f0) + -1;
          }
          memcpy(pcVar32,"NpcSpTypingExist",(long)iVar14);
          pcVar32[iVar14] = '\0';
        }
        puVar16 = *(undefined8 **)(param_1 + 0x798);
        if (puVar16 != &DAT_0407ebb1) {
          iVar14 = 0;
          if (*(int *)(param_1 + 0x7a0) < 1) {
            iVar14 = *(int *)(param_1 + 0x7a0) + -1;
          }
          memset(puVar16,0,(long)iVar14);
          *(undefined1 *)((long)puVar16 + (long)iVar14) = 0;
        }
        goto LAB_02157bd8;
      }
    }
    goto LAB_02157bb0;
  }
  sVar7 = *(short *)PTR_DAT_04bb6298;
  if (sVar7 != -1) {
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0x17);
    puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
    if (0xff < (uint)(int)sVar7) {
      puVar22 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar22 >> 0x17 & 1) != 0) && (uVar27 = FUN_0180b7a0(), (uVar27 & 1) == 0)) {
      lVar18 = *(long *)puVar9;
      iVar14 = 0;
      if (lVar18 != 0) {
        if (*(long *)(lVar18 + 0x330) == 0) {
          iVar14 = 0;
        }
        else {
          puVar16 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
          iVar13 = FUN_006bd550(*puVar16,0);
          iVar14 = 0;
          if (iVar13 == 0x758f7eaf) {
            iVar14 = 0;
            if (*(long *)puVar9 != 0) {
              lVar18 = *(long *)(*(long *)puVar9 + 0x330);
              iVar14 = 0;
              if (lVar18 != 0) {
                iVar14 = *(int *)(lVar18 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar10 + 0x84) != iVar14) {
        pcVar32 = *(char **)(param_1 + 0x740);
        if (*pcVar32 == 'p') {
          if ((pcVar32[1] == 'o') && (pcVar32[2] == 'o')) goto LAB_02157bb0;
        }
        else if ((*pcVar32 == 's') && ((pcVar32[1] == 'p' && (pcVar32[2] == 'n')))) {
LAB_02157bb0:
          uVar27 = FUN_0290d828();
          if (((uVar27 & 1) != 0) &&
             (uVar27 = FUN_0218be40(*(undefined8 *)PTR_DAT_04bb46e8,lVar1,param_1 + 0x6e0,
                                    param_1 + 0x790), (uVar27 & 1) != 0)) {
LAB_02157bd8:
            uVar15 = *(uint *)(param_1 + 0x7f0);
            *(uint *)(param_1 + 0x7f0) = uVar15 | 0x200;
            *(undefined4 *)(param_1 + 0x7ec) = 1;
            pcVar32 = *(char **)(param_1 + 0x6e8);
            if (*pcVar32 != 'N') {
              if (*pcVar32 != 'M') {
                return;
              }
              if (pcVar32[1] != 'a') {
                return;
              }
              if (pcVar32[2] != 'R') {
                return;
              }
              if (pcVar32[3] != 'e') {
                return;
              }
              if (pcVar32[4] != 'S') {
                return;
              }
              if (pcVar32[5] != 'l') {
                return;
              }
              if (pcVar32[6] != 'e') {
                return;
              }
              if (pcVar32[7] != 'e') {
                return;
              }
              if (pcVar32[8] == 'p') {
                *(uint *)(param_1 + 0x7f0) = uVar15 | 0x300;
                return;
              }
              return;
            }
            if (pcVar32[1] != 'p') {
              return;
            }
            if (pcVar32[2] != 'c') {
              return;
            }
            if (pcVar32[3] == 'M') {
              if (pcVar32[4] != 'c') {
                return;
              }
              if (pcVar32[5] != 'a') {
                return;
              }
              if (pcVar32[6] != 's') {
                return;
              }
              if (pcVar32[7] != 'S') {
                return;
              }
              if (pcVar32[8] != 'o') {
                return;
              }
              if (pcVar32[9] != 'u') {
                return;
              }
              if (pcVar32[10] != 'n') {
                return;
              }
              cVar26 = pcVar32[0xb];
            }
            else {
              if (pcVar32[3] != 'S') {
                return;
              }
              if (pcVar32[4] != 'p') {
                return;
              }
              if (pcVar32[5] != 'T') {
                return;
              }
              if (pcVar32[6] != 'a') {
                return;
              }
              if (pcVar32[7] != 'm') {
                return;
              }
              if (pcVar32[8] != 'b') {
                return;
              }
              if (pcVar32[9] != 'o') {
                return;
              }
              if (pcVar32[10] != 'u') {
                return;
              }
              if (pcVar32[0xb] != 'r') {
                return;
              }
              if (pcVar32[0xc] != 'i') {
                return;
              }
              if (pcVar32[0xd] != 'n') {
                return;
              }
              if (pcVar32[0xe] != 'e') {
                return;
              }
              if (pcVar32[0xf] != 'S') {
                return;
              }
              if (pcVar32[0x10] != 'o') {
                return;
              }
              if (pcVar32[0x11] != 'u') {
                return;
              }
              if (pcVar32[0x12] != 'n') {
                return;
              }
              cVar26 = pcVar32[0x13];
            }
            if (cVar26 == 'd') {
              *(uint *)(param_1 + 0x7f0) = uVar15 | 0x280;
              return;
            }
            return;
          }
        }
      }
    }
  }
  puVar2 = PTR_DAT_04bb39b0;
  pbVar21 = PTR_DAT_04bb32e0;
  puVar10 = PTR_DAT_04bb27d0;
  puVar9 = PTR_DAT_04bb2020;
  pcVar32 = *(char **)(param_1 + 0x740);
  if ((((*pcVar32 == 'k') && (pcVar32[1] == 'p')) && (pcVar32[2] == 's')) &&
     (*(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10) < 2)) {
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    if (lVar18 == 0) {
      bVar28 = *PTR_DAT_04bb32e0;
LAB_02157df4:
      if (bVar28 < 8) goto LAB_02157e5c;
LAB_02157dfc:
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar28 = *(byte *)(lVar18 + 0x473);
      pbVar19 = PTR_DAT_04bb5038;
      if ((long)(char)bVar28 != 0xffffffffffffffff) {
        puVar22 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
        if (7 < bVar28) {
          puVar22 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar22 & 8) != 0) {
          pbVar19 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar28 = *pbVar19;
      bVar11 = 7 < bVar28;
      if (bVar11) {
        bVar28 = 0xff;
      }
      local_70 = (undefined *)CONCAT71(local_70._1_7_,bVar28);
      if (bVar11) {
        bVar28 = *PTR_DAT_04bb5038;
        goto LAB_02157e5c;
      }
    }
    else {
      pbVar19 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar19 = (byte *)(lVar18 + 0x158);
      }
      bVar28 = *pbVar19;
      if (7 < bVar28) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          bVar28 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02157df4;
        }
        goto LAB_02157dfc;
      }
LAB_02157e5c:
      if (7 < bVar28) {
        bVar28 = 0xff;
      }
      local_70 = (undefined *)CONCAT71(local_70._1_7_,bVar28);
    }
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    local_c8 = "HotelReserveInviteDemo";
    iVar14 = FUN_02753180(&local_70,&local_d0);
    lVar18 = *(long *)puVar2;
    pbVar19 = pbVar21;
    if (lVar18 == 0) {
      if (7 < *pbVar21) goto LAB_02157ef8;
LAB_02157f5c:
      local_74[0] = *pbVar19;
      if (7 < local_74[0]) {
        local_74[0] = 0xff;
      }
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar19 = (byte *)(lVar18 + 0x158);
      }
      if ((*pbVar19 < 8) ||
         (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar19 < 8))))
      goto LAB_02157f5c;
LAB_02157ef8:
      plVar20 = *(long **)puVar10;
      if (plVar20 == (long *)0x0) {
LAB_02157f54:
        pbVar19 = PTR_DAT_04bb5038;
        goto LAB_02157f5c;
      }
      lVar18 = *plVar20;
      bVar28 = *(byte *)(lVar18 + 0x473);
      pbVar19 = PTR_DAT_04bb5038;
      if ((long)(char)bVar28 != 0xffffffffffffffff) {
        puVar22 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
        if (7 < bVar28) {
          puVar22 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar22 & 8) != 0) {
          pbVar19 = (byte *)(lVar18 + 0x471);
        }
      }
      local_74[0] = *pbVar19;
      if (7 < local_74[0]) goto LAB_02157f54;
    }
    local_c8 = "HotelReserveKpmDoneSpeak";
    local_d0 = puVar9 + 0x10;
    iVar13 = FUN_02753180(local_74,&local_d0);
    if (iVar13 == 0) {
      uVar15 = 0;
    }
    else {
      local_68 = "HotelIsCompletedEditTutorialAnyone";
      local_70 = puVar9 + 0x10;
      uVar15 = FUN_0273f0a0(&local_70);
      uVar15 = uVar15 ^ 1;
    }
    if (iVar14 != 0) {
      return;
    }
    if ((uVar15 & 1) != 0) {
      return;
    }
    uVar27 = FUN_016cf390();
    if ((uVar27 & 1) != 0) {
      return;
    }
    lVar18 = *(long *)puVar2;
    if (lVar18 == 0) {
LAB_0215800c:
      if (*pbVar21 < 8) goto LAB_0215807c;
LAB_02158018:
      plVar20 = *(long **)puVar10;
      if (plVar20 == (long *)0x0) {
LAB_02158074:
        pbVar21 = PTR_DAT_04bb5038;
        goto LAB_0215807c;
      }
      lVar18 = *plVar20;
      bVar28 = *(byte *)(lVar18 + 0x473);
      pbVar21 = PTR_DAT_04bb5038;
      if ((long)(char)bVar28 != 0xffffffffffffffff) {
        puVar22 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
        if (7 < bVar28) {
          puVar22 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar22 & 8) != 0) {
          pbVar21 = (byte *)(lVar18 + 0x471);
        }
      }
      local_74[0] = *pbVar21;
      if (7 < local_74[0]) goto LAB_02158074;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar21 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar21) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0215800c;
        }
        goto LAB_02158018;
      }
LAB_0215807c:
      local_74[0] = *pbVar21;
      if (7 < local_74[0]) {
        local_74[0] = 0xff;
      }
    }
    local_d0 = puVar9 + 0x10;
    local_c8 = "HotelReserveKpmDoneSpeak";
    iVar14 = FUN_02753180(local_74,&local_d0);
    if ((iVar14 != 0) && (*(char *)(*(long *)PTR_DAT_04bb4938 + 8) != '\0')) {
      FUN_025196e4(&uStack_75);
      local_70 = puVar9 + 0x10;
      local_68 = "HotelVipRoomIntroductionDone";
      iVar14 = FUN_0274bce0(&uStack_75,&local_70);
      if (iVar14 == 0) {
        return;
      }
    }
  }
  lVar18 = *(long *)PTR_DAT_04bb4898;
  if (lVar18 == 0) {
    return;
  }
  plVar20 = (long *)(param_1 + 0x6e0);
  uVar27 = FUN_0217fca0(lVar18,*(long *)(param_1 + 8) + 0x3e0,plVar20,param_1 + 0x790);
  puVar10 = PTR_DAT_04bc2ac0;
  puVar9 = PTR_DAT_04bb2bc0;
  if ((uVar27 & 1) == 0) {
    uVar15 = *(uint *)(lVar18 + 0x1c0);
    if ((int)uVar15 < 1) {
      if (*(long *)(lVar18 + 0xb0) == 0) {
        return;
      }
      puVar22 = *(uint **)(*(long *)(lVar18 + 0xb0) + 8);
      if (puVar22 == (uint *)0x0) {
        return;
      }
      uVar15 = *puVar22;
      if (uVar15 == 0) {
        return;
      }
    }
    uVar33 = 0;
    puVar2 = PTR_DAT_04bb2f70 + 0x10;
    puVar3 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      if ((int)*(uint *)(lVar18 + 0x1c0) < 1) {
        if ((((*(long *)(lVar18 + 0xb0) != 0) &&
             (puVar22 = *(uint **)(*(long *)(lVar18 + 0xb0) + 8), puVar22 != (uint *)0x0)) &&
            ((*(uint *)(lVar18 + 200) <= uVar33 ||
             (*(char *)(*(long *)(lVar18 + 0xd0) + (long)(int)uVar33) != '\0')))) &&
           (((uVar33 < *puVar22 && (puVar22[1] != 0)) && ((ushort)puVar22[2] != 0)))) {
          iVar14 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            iVar14 = 0x1c;
          }
          puVar22 = (uint *)((ulong)(puVar22[1] * uVar33 + (uint)(ushort)puVar22[2] * 8 + iVar14) +
                            (long)puVar22);
          goto joined_r0x02158418;
        }
      }
      else if (uVar33 < *(uint *)(lVar18 + 0x1c0)) {
        uVar4 = uVar33;
        if (*(uint *)(lVar18 + 0x1b0) <= uVar33) {
          uVar4 = 0;
        }
        puVar22 = *(uint **)(*(long *)(lVar18 + 0x1b8) + (ulong)uVar4 * 8);
joined_r0x02158418:
        if (puVar22 != (uint *)0x0) {
          uVar4 = *puVar22;
          if (uVar4 != 0) {
            cVar26 = *PTR_DAT_04bc2ab8;
            do {
              if (cVar26 == '\0') {
                *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                cVar26 = '\x01';
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
                uVar4 = *puVar22;
                *PTR_DAT_04bc2ab8 = 1;
              }
              else {
                uVar6 = *(uint *)(puVar10 + 0x24);
                if (-1 < (int)uVar6) {
                  pcVar32 = (char *)((ulong)uVar6 + (long)puVar22);
                  goto LAB_02158348;
                }
                if (uVar6 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)uVar4;
              pcVar32 = (char *)0x0;
              if ((puVar8 == (uint *)0x0) || (pcVar32 = (char *)0x0, puVar22 == puVar8))
              goto LAB_02158348;
              lVar23 = 0xc;
              if (*(char *)((long)puVar22 + (10 - (long)puVar8)) != '\0') {
                lVar23 = 0x1c;
              }
              lVar23 = (long)puVar22 + (lVar23 - (long)puVar8);
              pcVar32 = (char *)0x0;
              if (lVar23 == 0) goto LAB_02158348;
              uVar27 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar8));
              *(undefined4 *)(puVar10 + 0x24) = 0xfffffffe;
              if (uVar27 == 0) break;
              piVar30 = (int *)(lVar23 + 4);
              while (piVar30[-1] != -0x7840ff18) {
                piVar30 = piVar30 + 2;
                uVar27 = uVar27 - 1;
                if (uVar27 == 0) goto LAB_02158344;
              }
              iVar14 = 0;
              if (*piVar30 != -1) {
                iVar14 = *piVar30;
              }
              *(int *)(puVar10 + 0x24) = iVar14;
              uVar4 = *puVar22;
              if (uVar4 == 0) break;
            } while( true );
          }
LAB_02158344:
          pcVar32 = (char *)0x0;
LAB_02158348:
          local_7d = 0;
          local_c0 = 0x40;
          pcVar24 = *(char **)PTR_PTR_04bc2ab0;
          if (pcVar32 != (char *)0x0) {
            pcVar24 = pcVar32;
          }
          local_c8 = local_bc;
          if (local_bc != pcVar24) {
            lVar23 = 0;
            do {
              if (pcVar24[lVar23] == '\0') {
LAB_02158430:
                iVar14 = (int)lVar23;
                if (0x3f < iVar14) {
LAB_0215844c:
                  iVar14 = 0x3f;
                }
                goto LAB_02158454;
              }
              if (pcVar24[lVar23 + 1] == '\0') {
                lVar23 = lVar23 + 1;
                goto LAB_02158430;
              }
              if (pcVar24[lVar23 + 2] == '\0') {
                iVar14 = (int)lVar23 + 2;
                if (0x3f < iVar14) goto LAB_0215844c;
                goto LAB_02158454;
              }
              lVar23 = lVar23 + 3;
            } while (lVar23 != 0x80001);
            iVar14 = 0;
LAB_02158454:
            local_d0 = puVar2;
            memcpy(local_bc,pcVar24,(long)iVar14);
            local_bc[iVar14] = '\0';
          }
          local_c8[(long)local_c0 + -1] = '\0';
          local_d0 = puVar3;
          (**(code **)(puVar9 + 0x28))(&local_d0);
          pcVar32 = local_c8;
          (**(code **)(*(long *)(param_1 + 0x738) + 0x18))(lVar1);
          pcVar24 = *(char **)(param_1 + 0x740);
          if (pcVar32 == pcVar24) {
LAB_02158528:
            FUN_0217c150(lVar18,plVar20,uVar33);
            puVar9 = PTR_DAT_04bb2020;
            local_70 = PTR_DAT_04bb2020 + 0x10;
            local_68 = "@";
            (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(plVar20);
            uVar27 = 0;
            goto LAB_02158570;
          }
          uVar27 = 0;
          bVar11 = true;
          do {
            if (local_c8[uVar27] != pcVar24[uVar27]) break;
            if (local_c8[uVar27] == '\0') {
              if (bVar11) goto LAB_02158528;
              break;
            }
            if (local_c8[uVar27 + 1] != pcVar24[uVar27 + 1]) break;
            if (local_c8[uVar27 + 1] == '\0') goto LAB_02158528;
            if (local_c8[uVar27 + 2] != pcVar24[uVar27 + 2]) break;
            if (local_c8[uVar27 + 2] == '\0') goto LAB_02158528;
            bVar11 = uVar27 < 0x7fffe;
            uVar27 = uVar27 + 3;
          } while (uVar27 != 0x80001);
        }
      }
      uVar33 = uVar33 + 1;
      if (uVar33 == uVar15) {
        return;
      }
    } while( true );
  }
  uVar15 = *(uint *)(param_1 + 0x7f0);
  *(uint *)(param_1 + 0x7f0) = uVar15 | 0x200;
  *(undefined4 *)(param_1 + 0x7ec) = 1;
  pcVar32 = *(char **)(param_1 + 0x6e8);
  if (((*pcVar32 == 'M') && (pcVar32[1] == 'a')) &&
     ((pcVar32[2] == 'R' &&
      (((((pcVar32[3] == 'e' && (pcVar32[4] == 'S')) && (pcVar32[5] == 'l')) &&
        ((pcVar32[6] == 'e' && (pcVar32[7] == 'e')))) && (pcVar32[8] == 'p')))))) {
    *(uint *)(param_1 + 0x7f0) = uVar15 | 0x300;
  }
  goto LAB_02158b80;
  while( true ) {
    lVar18 = *(long *)(param_1 + 0x6e8) + uVar27;
    if (*(char *)(lVar18 + 1) == '\0') {
      uVar27 = uVar27 + 1;
      goto LAB_021585a8;
    }
    if (*(char *)(lVar18 + 2) == '\0') {
      uVar27 = uVar27 + 2;
      goto LAB_021585a8;
    }
    uVar27 = uVar27 + 3;
    if (uVar27 == 0x80001) break;
LAB_02158570:
    if (*(char *)(*(long *)(param_1 + 0x6e8) + uVar27) == '\0') {
LAB_021585a8:
      if (0 < (int)uVar27) {
        uVar31 = (ulong)((int)uVar27 - 1);
        lVar18 = -uVar27;
        goto LAB_021585c0;
      }
      break;
    }
  }
  goto LAB_02158ad4;
  while( true ) {
    uVar31 = uVar31 - 1;
    lVar18 = lVar18 + 1;
    iVar14 = (int)uVar27;
    uVar15 = iVar14 - 1;
    uVar27 = (ulong)uVar15;
    if (uVar15 == 0 || iVar14 < 1) break;
LAB_021585c0:
    pcVar32 = (char *)(*(long *)(param_1 + 0x6e8) + uVar31);
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((pcVar32 == local_68) || (*pcVar32 == *local_68)) {
      if (-1 < (int)uVar31) {
        local_70 = puVar9 + 0x10;
        local_68 = "@";
        (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(plVar20);
        lVar23 = 0;
        goto LAB_02158630;
      }
      break;
    }
  }
  goto LAB_02158ad4;
  while( true ) {
    lVar25 = *(long *)(param_1 + 0x6e8) + lVar23;
    if (*(char *)(lVar25 + 1) == '\0') {
      lVar23 = lVar23 + 1;
      goto LAB_0215866c;
    }
    if (*(char *)(lVar25 + 2) == '\0') {
      lVar23 = lVar23 + 2;
      goto LAB_0215866c;
    }
    lVar23 = lVar23 + 3;
    if (lVar23 == 0x80001) break;
LAB_02158630:
    if (*(char *)(*(long *)(param_1 + 0x6e8) + lVar23) == '\0') goto LAB_0215866c;
  }
  lVar23 = 0;
LAB_0215866c:
  (**(code **)(local_70 + 0x18))(&local_70);
  lVar25 = 0;
  do {
    iVar14 = (int)lVar23;
    if (local_68[lVar25] == '\0') {
LAB_021586c0:
      iVar13 = (int)lVar25;
      if (iVar14 < iVar13) goto LAB_021586c8;
      if (iVar13 < 1) goto LAB_0215875c;
      uVar27 = 0;
      uVar15 = 0xffffffff;
      goto LAB_021586ec;
    }
    if (local_68[lVar25 + 1] == '\0') {
      lVar25 = lVar25 + 1;
      goto LAB_021586c0;
    }
    if (local_68[lVar25 + 2] == '\0') {
      lVar25 = lVar25 + 2;
      goto LAB_021586c0;
    }
    lVar25 = lVar25 + 3;
  } while (lVar25 != 0x80001);
  if (iVar14 < 0) {
LAB_021586c8:
    uVar15 = 0xffffffff;
  }
  else {
LAB_0215875c:
    (**(code **)(local_70 + 0x18))(&local_70);
    uVar15 = 0;
  }
  goto LAB_02158860;
  while( true ) {
    pcVar32 = local_68;
    lVar29 = lVar25;
    while( true ) {
      lVar29 = lVar29 + -1;
      if (*(char *)(lVar23 + uVar27) != *pcVar32) break;
      if (*(char *)(lVar23 + uVar27) == '\0') goto LAB_02158858;
      lVar23 = lVar23 + 1;
      pcVar32 = pcVar32 + 1;
      if (lVar29 == 0) goto LAB_02158858;
    }
    uVar27 = uVar27 + 1;
    if (uVar27 == (iVar14 - iVar13) + 1) break;
LAB_021586ec:
    lVar23 = *(long *)(param_1 + 0x6e8);
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((char *)(lVar23 + uVar27) == local_68) {
LAB_02158858:
      uVar15 = (uint)uVar27;
      break;
    }
  }
LAB_02158860:
  (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(plVar20);
  lVar25 = *(long *)(param_1 + 0x6e8);
  lVar23 = 0;
  do {
    if (*(char *)(lVar25 + lVar23) == '\0') goto LAB_021588bc;
    if (*(char *)(lVar25 + lVar23 + 1) == '\0') {
      lVar23 = lVar23 + 1;
      goto LAB_021588bc;
    }
    if (*(char *)(lVar25 + lVar23 + 2) == '\0') {
      lVar23 = lVar23 + 2;
      goto LAB_021588bc;
    }
    lVar23 = lVar23 + 3;
  } while (lVar23 != 0x80001);
  lVar23 = 0;
LAB_021588bc:
  __dest = *(void **)(param_1 + 0x798);
  __src = (void *)(lVar25 - lVar18);
  if ((int)lVar23 <= (int)uVar31) {
    __src = *(void **)(PTR_PTR_04bb2238 + 8);
  }
  if (__dest != __src) {
    lVar18 = 0;
    do {
      if (*(char *)((long)__src + lVar18) == '\0') goto LAB_02158920;
      if (*(char *)((long)__src + lVar18 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_02158920;
      }
      if (*(char *)((long)__src + lVar18 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_02158920;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_02158920:
    iVar14 = (int)lVar18;
    if (*(int *)(param_1 + 0x7a0) <= (int)lVar18) {
      iVar14 = *(int *)(param_1 + 0x7a0) + -1;
    }
    memcpy(__dest,__src,(long)iVar14);
    *(undefined1 *)((long)__dest + (long)iVar14) = 0;
  }
  if ((int)uVar15 < *(int *)(param_1 + 0x6f0)) {
    *(undefined1 *)
     (*(long *)(param_1 + 0x6e8) + (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU))) = 0;
  }
  else {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  pcVar32 = *(char **)(param_1 + 0x6e8);
  if (((*pcVar32 == 'N') && (pcVar32[1] == 'p')) && (pcVar32[2] == 'c')) {
    if (pcVar32[3] == 'M') {
      if ((((pcVar32[4] == 'c') && (pcVar32[5] == 'a')) &&
          ((pcVar32[6] == 's' && ((pcVar32[7] == 'S' && (pcVar32[8] == 'o')))))) &&
         ((pcVar32[9] == 'u' && (pcVar32[10] == 'n')))) {
        cVar26 = pcVar32[0xb];
        goto LAB_02158ac0;
      }
    }
    else if ((((((pcVar32[3] == 'S') && (pcVar32[4] == 'p')) && (pcVar32[5] == 'T')) &&
              ((pcVar32[6] == 'a' && (pcVar32[7] == 'm')))) &&
             (((pcVar32[8] == 'b' && ((pcVar32[9] == 'o' && (pcVar32[10] == 'u')))) &&
              (pcVar32[0xb] == 'r')))) &&
            (((((pcVar32[0xc] == 'i' && (pcVar32[0xd] == 'n')) && (pcVar32[0xe] == 'e')) &&
              ((pcVar32[0xf] == 'S' && (pcVar32[0x10] == 'o')))) &&
             ((pcVar32[0x11] == 'u' && (pcVar32[0x12] == 'n')))))) {
      cVar26 = pcVar32[0x13];
LAB_02158ac0:
      if (cVar26 == 'd') {
        *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x80;
      }
    }
  }
LAB_02158ad4:
  pcVar32 = *(char **)(param_1 + 0x6e8);
  cVar26 = *pcVar32;
  if (cVar26 == 'M') {
    if ((((pcVar32[1] == 'a') && (pcVar32[2] == 'R')) &&
        ((pcVar32[3] == 'e' && (((pcVar32[4] == 'S' && (pcVar32[5] == 'l')) && (pcVar32[6] == 'e')))
         ))) && ((pcVar32[7] == 'e' && (pcVar32[8] == 'p')))) {
      *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x100;
      cVar26 = *pcVar32;
      goto LAB_02158b58;
    }
  }
  else {
LAB_02158b58:
    if (cVar26 == '\0') goto LAB_02158b80;
  }
  *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x200;
  *(undefined4 *)(param_1 + 0x7ec) = 1;
LAB_02158b80:
  FUN_0218bba0(*(undefined8 *)PTR_DAT_04bb46e8,lVar1,plVar20,param_1 + 0x790);
  return;
}

