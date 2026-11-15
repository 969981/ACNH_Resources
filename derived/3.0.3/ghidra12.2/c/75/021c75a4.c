
void FUN_021c75a4(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  char *pcVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  long lVar24;
  uint uVar25;
  undefined4 *puVar26;
  uint uVar27;
  undefined8 uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  undefined4 *puVar32;
  uint local_e0;
  undefined *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  char *pcStack_a0;
  uint local_94;
  undefined8 local_90;
  char *local_88;
  undefined1 local_80;
  byte local_7f;
  undefined2 local_78;
  undefined2 local_74;
  uint local_70;
  undefined1 uStack_69;
  undefined8 local_68;
  
  if (*(long *)PTR_DAT_04bb32f0 == 0) {
    return;
  }
  lVar21 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar21 == 0) || (*(long *)(lVar21 + 0x28) == 0)) || (*(int *)(lVar21 + 0x80) != 1)) {
    sVar11 = *(short *)PTR_DAT_04bb6298;
    if (sVar11 != -1) {
      local_90 = (undefined *)CONCAT44(local_90._4_4_,0x20);
      puVar5 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8;
      if (0xff < (uint)(int)sVar11) {
        puVar5 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar5 + 4) & 1) != 0) goto LAB_021c7678;
    }
    local_90 = PTR_DAT_04bb2020 + 0x10;
    local_88 = "TodayGlobalEventId";
    iVar13 = FUN_0273ea30(&local_90);
    if (iVar13 != 0xffff) {
      return;
    }
  }
LAB_021c7678:
  FUN_0252d11c(&local_a8);
  puVar5 = PTR_DAT_04bb2020;
  if (7 < (byte)local_a8) {
    return;
  }
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_88 = "PastDaysFromLastPlay";
  iVar13 = FUN_0274bce0(&local_a8,&local_90);
  if (6 < iVar13) {
    return;
  }
  lVar21 = *(long *)PTR_DAT_04bb46b0;
  if (lVar21 == 0) {
    return;
  }
  puVar22 = *(undefined8 **)(lVar21 + 0x10);
  if ((*(byte *)(lVar21 + 0x453) & 1) == 0) {
    lVar21 = (**(code **)(*(long *)*puVar22 + 0x38))();
    if (lVar21 == 0) {
      return;
    }
    lVar21 = lVar21 + 0x70;
  }
  else {
    if (puVar22 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar22[0x26] == (long *)0x0) {
      return;
    }
    lVar21 = (**(code **)(*(long *)puVar22[0x26] + 0x38))();
    if (lVar21 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar21 + 0xd0) == (long *)0x0) ||
     (puVar22 = (undefined8 *)**(long **)(lVar21 + 0xd0), puVar22 == (undefined8 *)0x0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = (**(code **)*puVar22)();
    uVar17 = uVar17 & 0xffffffff;
  }
  lVar4 = *(long *)(lVar21 + 0xb8) + *(long *)(lVar21 + 0xb0);
  cVar10 = *(char *)(lVar4 + 0x1e335d);
  cVar8 = *(char *)(lVar4 + 0x1e3362);
  cVar9 = *(char *)(lVar4 + 0x1e3360);
  uVar28 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_68 = uVar28;
  uVar18 = FUN_00a8117c(&local_68);
  if ((uVar18 & 1) == 0) {
    uVar30 = (uint)((ulong)uVar28 >> 0x20);
    cVar7 = (char)((ulong)uVar28 >> 0x20);
    iVar13 = cVar7 + 0x18;
    if ('\x04' < cVar7) {
      iVar13 = (int)cVar7;
    }
    uVar31 = iVar13 * 100 + (int)(char)((ulong)uVar28 >> 0x28);
    if (0x211 < uVar31) {
      if (uVar31 < 700) {
        uVar31 = 0;
      }
      else {
        if (uVar31 < 0x2da) goto LAB_021c7e18;
        if (uVar31 < 900) {
          uVar31 = 1;
        }
        else {
          if (uVar31 < 0x3a2) goto LAB_021c7e18;
          if (uVar31 < 0x44c) {
            uVar31 = 2;
          }
          else {
            if (uVar31 < 0x46a) goto LAB_021c7e18;
            if (uVar31 < 0x514) {
              uVar31 = 3;
            }
            else {
              if (uVar31 < 0x532) goto LAB_021c7e18;
              if (uVar31 < 0x5dc) {
                uVar31 = 4;
              }
              else {
                if (uVar31 < 0x5fa) goto LAB_021c7e18;
                if (uVar31 < 0x6a4) {
                  uVar31 = 5;
                }
                else {
                  if (uVar31 < 0x6c2) goto LAB_021c7e18;
                  if (uVar31 < 0x76c) {
                    uVar31 = 6;
                  }
                  else {
                    if (uVar31 < 0x78a) goto LAB_021c7e18;
                    if (uVar31 < 0x834) {
                      uVar31 = 7;
                    }
                    else {
                      if (uVar31 < 0x852) goto LAB_021c7e18;
                      if (uVar31 < 0x8fc) {
                        uVar31 = 8;
                      }
                      else {
                        if (uVar31 < 0x91a) goto LAB_021c7e18;
                        if (uVar31 < 0x9c4) {
                          uVar31 = 9;
                        }
                        else {
                          if (uVar31 < 0x9e2) goto LAB_021c7e18;
                          if (uVar31 < 0xa8c) {
                            uVar31 = 10;
                          }
                          else {
                            if (0xa9 < uVar31 - 0xaaa) goto LAB_021c7e18;
                            uVar31 = 0xb;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_88 = "MuseumCafeCheckedTimeZone";
      local_90 = puVar5 + 0x10;
      uVar14 = FUN_0273ea30(&local_90);
      if ((uVar14 & 1 << uVar31) == 0) {
        local_88 = "MuseumCafeCheckedTimeZone";
        local_90 = puVar5 + 0x10;
        FUN_0273f3c4(&local_90,uVar14 & 0xffff | 1 << uVar31);
        puVar32 = (undefined4 *)PTR_DAT_04bb39d8;
        puVar19 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar14 = *puVar19 ^ *puVar19 << 0xb;
        uVar27 = puVar19[3];
        *puVar19 = puVar19[1];
        puVar19[1] = puVar19[2];
        uVar14 = uVar14 >> 8 ^ uVar27 >> 0x13 ^ uVar14 ^ uVar27;
        puVar19[2] = uVar27;
        puVar19[3] = uVar14;
        if ((uint)((ulong)uVar14 * 100 >> 0x20) < 0x14) {
          FUN_025196e4(&uStack_69);
          local_e0 = 0;
          uVar14 = uVar30 + 0x18;
          if ('\x04' < cVar7) {
            uVar14 = uVar30;
          }
          local_70 = 0;
          uVar18 = 0;
          puVar3 = PTR_DAT_04bb6ba0 + 0x10;
          do {
            if (*(char *)(param_1 + uVar18 * 0xba0 + 0xaf9) != '\0') {
              uVar27 = (uint)uVar18;
              if (((uVar27 < 10) && ((&DAT_053fee41)[uVar18 * 0xba0] != '\0')) &&
                 (puVar23 = (undefined *)(&DAT_053fec00)[uVar18 * 0x174],
                 puVar23 != &DAT_053febf8 + uVar18 * 0xba0)) {
                puVar26 = (undefined4 *)(puVar23 + -0x10);
                uVar1 = (uint)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x20);
                uVar25 = uVar1 >> 8 & 0xff;
                uVar16 = uVar1 + 0x18;
                if ('\x04' < (char)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >>
                                   0x20)) {
                  uVar16 = uVar1;
                }
                do {
                  if ((((uint)(byte)puVar23[-0x10] <= (uVar16 & 0xff)) &&
                      (((uint)(byte)puVar23[-0x10] != (uVar16 & 0xff) ||
                       (*(byte *)((long)puVar26 + 1) <= uVar25)))) &&
                     (((uVar16 & 0xff) < (uint)*(byte *)((long)puVar26 + 2) ||
                      (((uint)*(byte *)((long)puVar26 + 2) == (uVar16 & 0xff) &&
                       (uVar25 < *(byte *)((long)puVar26 + 3))))))) goto LAB_021c79d0;
                  puVar23 = *(undefined **)(puVar23 + 8);
                  puVar26 = (undefined4 *)(puVar23 + -0x10);
                } while (puVar26 != &DAT_053febe8 + uVar18 * 0x2e8);
              }
              local_74 = 0;
              local_78 = 0;
              lVar4 = *(long *)(lVar21 + 0xb8) + *(long *)(lVar21 + 0xb0);
              lVar6 = lVar4 + uVar18 * 0x13230;
              if (9 < uVar27) {
                lVar6 = lVar4;
              }
              uVar15 = FUN_020fd7d8(lVar6);
              local_90 = (undefined *)(CONCAT44(local_90._4_4_,uVar15) & 0xffffffff000000ff);
              FUN_0214c868(&local_74,&local_78,&local_90,1,1);
              bVar2 = (char)local_74 + 1;
              local_74 = CONCAT11(local_74._1_1_,bVar2);
              uVar16 = (byte)local_78 - 2;
              local_78 = CONCAT11(local_78._1_1_,(char)uVar16);
              if (((uint)bVar2 <= (uVar14 & 0xff)) &&
                 (((uVar14 & 0xff) != (uint)bVar2 || ((uint)local_74._1_1_ <= (uVar30 >> 8 & 0xff)))
                 )) {
                uVar25 = uVar14 & 0xff;
                bVar12 = uVar25 != (uVar16 & 0xff);
                uVar1 = uVar30 >> 8 & 0xff;
                if ((uVar25 <= (uVar16 & 0xff)) &&
                   (((local_78._1_1_ != uVar1 || bVar12 && (uVar1 <= local_78._1_1_ || bVar12)) &&
                    (uVar16 = FUN_02694234(lVar6,&uStack_69), -1 < (int)uVar16)))) {
                  lVar4 = lVar6 + 4 + (ulong)uVar16 * 0x5f0;
                  if (7 < uVar16) {
                    lVar4 = lVar6 + 4;
                  }
                  lVar4 = lVar4 + 0x38;
                  local_88 = "HasAcquaintanceship";
                  local_90 = puVar5 + 0x10;
                  iVar13 = FUN_02746e10(lVar4,&local_90);
                  if ((iVar13 != 0) &&
                     (lVar24 = *(long *)(param_1 + uVar18 * 0xba0 + 0xaa0), lVar24 != 0)) {
                    iVar13 = FUN_0265b400(uVar18 & 0xffffffff,0);
                    if ((iVar13 != 7) &&
                       (pcVar20 = (char *)FUN_0265b6b0(iVar13), pcVar20 != (char *)0x0)) {
                      local_80 = 1;
                      local_88 = pcVar20;
                      if (*(long **)(pcVar20 + 0x28) == (long *)0x0) {
                        local_7f = 0;
                      }
                      else {
                        puVar22 = (undefined8 *)**(long **)(pcVar20 + 0x28);
                        if (puVar22 == (undefined8 *)0x0) {
                          local_7f = 0;
                        }
                        else {
                          local_7f = (**(code **)*puVar22)();
                        }
                      }
                      local_7f = local_7f & 1;
                      cVar7 = *(char *)(*(long *)(pcVar20 + 0x10) + *(long *)(pcVar20 + 8) + 0x2f);
                      local_90 = puVar3;
                      FUN_02640184(&local_90);
                      puVar32 = (undefined4 *)PTR_DAT_04bb39d8;
                      if (cVar7 == '\x02') goto LAB_021c79d0;
                    }
                    local_94 = *(uint *)(lVar24 + 4);
                    if ((0x1b < local_94) || ((1 << (ulong)(local_94 & 0x1f) & 0xedcc0f0U) == 0)) {
                      local_88 = "AbandonedHouse";
                      local_90 = puVar5 + 0x10;
                      iVar13 = FUN_02749340(lVar6 + 0x1267c,&local_90);
                      if (iVar13 == 0) {
                        local_88 = "MuseumCafeExitTime";
                        local_90 = puVar5 + 0x10;
                        iVar13 = FUN_02749340(lVar6 + 0x1267c,&local_90);
                        if (iVar13 == 0) {
                          if (uVar27 == (int)cVar10) {
                            if (cVar8 == cVar10) {
                              local_88 = "MoveCancelTalk";
                              local_90 = puVar5 + 0x10;
                              iVar13 = FUN_02746e10(lVar4,&local_90);
                              if (iVar13 == 0) {
                                pcStack_a0 = "NextMoveOutTalk";
                                local_a8 = puVar5 + 0x10;
                                iVar13 = FUN_02746e10(lVar4,&local_a8);
                                if (iVar13 != 0) {
                                  local_b8 = puVar5 + 0x10;
                                  pcStack_b0 = "ChokeOffMoveOut";
                                  iVar13 = FUN_02746e10(lVar4,&local_b8);
                                  if (iVar13 == 0) goto LAB_021c79d0;
                                }
                              }
                            }
                            else if (cVar9 == '\0') goto LAB_021c79d0;
                          }
                          local_e0 = 1 << (ulong)(uVar27 & 0x1f) | local_e0;
                          local_70 = local_e0;
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_021c79d0:
            uVar18 = uVar18 + 1;
          } while (uVar18 != 10);
          local_e0 = local_e0 - (local_e0 >> 1 & 0x55555555);
          uVar30 = (local_e0 >> 2 & 0x33333333) + (local_e0 & 0x33333333);
          uVar30 = uVar30 + (uVar30 >> 4) & 0xf0f0f0f;
          uVar30 = uVar30 + (uVar30 >> 8);
          uVar30 = uVar30 + (uVar30 >> 0x10);
          if ((uVar30 & 0x3f) != 0) {
            puVar19 = (uint *)nn::os::GetTlsValue(*puVar32);
            uVar14 = *puVar19 ^ *puVar19 << 0xb;
            uVar27 = puVar19[3];
            *puVar19 = puVar19[1];
            puVar19[1] = puVar19[2];
            uVar14 = uVar14 >> 8 ^ uVar27 >> 0x13 ^ uVar14 ^ uVar27;
            puVar19[2] = uVar27;
            puVar19[3] = uVar14;
            uVar18 = FUN_021a1140(&local_70,
                                  (int)((ulong)uVar14 * (ulong)(uVar30 & 0x3f) >> 0x20) + 1);
            if ((uint)uVar18 < 10) {
              local_90 = puVar5 + 0x10;
              local_88 = "MuseumCafeExitTime";
              uVar29 = uVar18 & 0xffffffff;
              FUN_027494ac(uVar18,&local_90,*(undefined2 *)(&DAT_04179b36 + (ulong)uVar31 * 4));
              FUN_0214f66c(param_1 + uVar29 * 0xba0 + 0x8b0,uVar29);
              FUN_0219d7e0(param_1,uVar29,0,0);
              FUN_021b18c0(param_1,0x11889761);
            }
          }
        }
      }
    }
  }
LAB_021c7e18:
  if ((((uVar17 & 1) != 0) && (*(long *)(lVar21 + 0xd0) != 0)) &&
     (puVar22 = *(undefined8 **)(*(long *)(lVar21 + 0xd0) + 8), puVar22 != (undefined8 *)0x0)) {
    (**(code **)*puVar22)();
  }
  return;
}

