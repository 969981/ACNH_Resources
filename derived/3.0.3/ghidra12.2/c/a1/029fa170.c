
/* WARNING: Removing unreachable block (ram,0x029fb254) */
/* WARNING: Removing unreachable block (ram,0x029fb374) */
/* WARNING: Removing unreachable block (ram,0x029fa9d8) */
/* WARNING: Removing unreachable block (ram,0x029fb1d0) */
/* WARNING: Removing unreachable block (ram,0x029fafa4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_029fa170(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  char cVar12;
  char cVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  char cVar24;
  undefined2 uVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  long *plVar32;
  byte *pbVar33;
  uint uVar34;
  void *pvVar35;
  void *pvVar36;
  long lVar37;
  undefined1 *__src;
  undefined8 local_1420;
  undefined8 local_1418;
  undefined8 local_1410;
  undefined8 local_1408 [3];
  uint local_13f0;
  undefined1 local_13ec;
  undefined4 local_13e8;
  undefined1 local_13e4;
  undefined4 local_13e0;
  undefined2 local_13dc;
  int local_13d8;
  undefined8 local_13d4;
  undefined8 local_13cc;
  undefined4 local_13c4;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  int local_f0;
  undefined1 auStack_ec [31];
  undefined1 local_cd;
  int local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined *local_98;
  int local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined8 *local_78;
  
  bVar5 = *(byte *)(param_2 + 8);
  bVar8 = bVar5 & *(byte *)(param_2 + 9);
  bVar6 = *(byte *)(param_2 + 10);
  bVar7 = *(byte *)(param_2 + 0xb);
  local_108 = (long)(*(long *)PTR_DAT_04bb29d0 *
                     (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                     (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000;
  lVar27 = *(long *)PTR_DAT_04bb26a8;
  nn::os::LockMutex((MutexType *)(lVar27 + 0x896c8));
  local_120 = *(undefined8 *)(lVar27 + 0x89690);
  uStack_118 = *(undefined8 *)(lVar27 + 0x89698);
  local_110 = *(undefined8 *)(lVar27 + 0x896a0);
  nn::os::UnlockMutex((MutexType *)(lVar27 + 0x896c8));
  cVar16 = *(char *)(param_1 + 0x11);
  if ((cVar16 != '\0') && ((bVar6 & 1) != 0)) {
    cVar16 = '\0';
    *(undefined2 *)(param_1 + 0x11) = 0;
  }
  bVar6 = bVar8 & 1;
  if ((cVar16 == '\0') && ((bVar7 & 1) != 0)) {
    cVar24 = '\x01';
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else {
    cVar24 = *(char *)(param_1 + 0x12);
  }
  cVar12 = local_120._2_1_;
  cVar13 = local_120._3_1_;
  if ((cVar24 == '\x01') && ((bVar8 & 1) != 0)) {
    FUN_029f9380(param_1);
    *(undefined2 *)(param_1 + 0x11) = 0x201;
  }
  else if (cVar16 == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    lVar27 = *(long *)PTR_DAT_04bb2720;
    if (lVar27 == 0) {
      puVar20 = &DAT_055c04a0;
    }
    else {
      puVar20 = &DAT_055c04a0;
      if (*(long *)(lVar27 + 0x330) != 0) {
        puVar20 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
        iVar18 = FUN_006bd550(*puVar20,0);
        puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar18 != 0x758f7eaf) {
          puVar20 = &DAT_055c04a0;
        }
      }
    }
    if (((*(int *)(puVar20 + 7) == 0x1ca0c3e6) || (*(int *)(puVar20 + 7) == -0x78a1579c)) &&
       ((bVar5 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x58) = 0x3e;
      return;
    }
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    return;
  }
  cVar16 = *(char *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar8 & 1;
  bVar7 = 0;
  if (cVar16 == '\0') {
    bVar7 = bVar8 & 1;
  }
  if (bVar7 == 1) {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    lVar27 = *(long *)PTR_DAT_04bb2720;
    if (lVar27 == 0) {
      plVar32 = &DAT_055c04a0;
    }
    else {
      plVar32 = &DAT_055c04a0;
      if (*(long *)(lVar27 + 0x330) != 0) {
        puVar20 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
        iVar18 = FUN_006bd550(*puVar20,0);
        plVar32 = (long *)PTR_DAT_04bc3a80;
        if (iVar18 != 0x758f7eaf) {
          plVar32 = &DAT_055c04a0;
        }
      }
    }
    pvVar35 = *(void **)(param_1 + 0x20);
    (**(code **)(*plVar32 + 0x18))(plVar32);
    pvVar36 = (void *)plVar32[1];
    if (pvVar35 != pvVar36) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
      lVar27 = 0;
      do {
        if (*(char *)(plVar32[1] + lVar27) == '\0') goto LAB_029fa474;
        lVar28 = plVar32[1] + lVar27;
        if (*(char *)(lVar28 + 1) == '\0') {
          lVar27 = lVar27 + 1;
          goto LAB_029fa474;
        }
        if (*(char *)(lVar28 + 2) == '\0') {
          lVar27 = lVar27 + 2;
          goto LAB_029fa474;
        }
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      lVar27 = 0;
LAB_029fa474:
      iVar18 = (int)lVar27;
      if (*(int *)(param_1 + 0x28) <= (int)lVar27) {
        iVar18 = *(int *)(param_1 + 0x28) + -1;
      }
      memcpy(pvVar35,pvVar36,(long)iVar18);
      *(undefined1 *)((long)pvVar35 + (long)iVar18) = 0;
    }
    iVar18 = (int)plVar32[7];
    *(int *)(param_1 + 0x50) = iVar18;
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x11) == '\0')) {
      *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
      bVar6 = *(byte *)(param_1 + 0x10);
    }
    else {
      sVar17 = *(short *)PTR_DAT_04bb6298;
      if (sVar17 != -1) {
        local_1420 = (undefined *)CONCAT44(local_1420._4_4_,3);
        puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar17 * 8);
        if (0xff < (uint)(int)sVar17) {
          puVar4 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar4 >> 3 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x58) = 0;
          bVar6 = *(byte *)(param_1 + 0x10);
          goto joined_r0x029fa32c;
        }
      }
      if (iVar18 == -0x17df00c3) {
        iVar18 = 0x69;
      }
      else {
        if (iVar18 == -0x7975b8e8) {
          iVar18 = 0;
        }
        else {
          if (iVar18 != -0x3e092032) {
            if (DAT_05ac0a90 == iVar18) {
              lVar27 = 0;
              local_1420 = (undefined *)CONCAT44(local_1420._4_4_,DAT_05ac0a94);
            }
            else if (DAT_05ac0aa0 == iVar18) {
              local_1420 = (undefined *)CONCAT44(local_1420._4_4_,DAT_05ac0aa4);
              lVar27 = 1;
            }
            else if (DAT_05ac0ab0 == iVar18) {
              local_1420 = (undefined *)CONCAT44(local_1420._4_4_,DAT_05ac0ab4);
              lVar27 = 2;
            }
            else if (DAT_05ac0ac0 == iVar18) {
              local_1420 = (undefined *)CONCAT44(local_1420._4_4_,DAT_05ac0ac4);
              lVar27 = 3;
            }
            else {
              if (DAT_05ac0ad0 != iVar18) {
                if (DAT_05ac0ae0 == iVar18) {
                  lVar27 = 5;
                  goto LAB_029fa6a0;
                }
                if (DAT_05ac0af0 == iVar18) {
                  lVar27 = 6;
                  goto LAB_029fa6a0;
                }
                if (DAT_05ac0b00 == iVar18) {
                  lVar27 = 7;
                  goto LAB_029fa6a0;
                }
                if (DAT_05ac0b10 == iVar18) {
                  lVar27 = 8;
                  goto LAB_029fa6a0;
                }
                if (DAT_05ac0b20 == iVar18) {
                  lVar27 = 9;
                  goto LAB_029fa6a0;
                }
LAB_029fb6d8:
                uVar31 = (uint)sVar17;
                uVar34 = (uint)sVar17;
                if (uVar31 == 0xffffffff) {
LAB_029fb844:
                  local_1420 = (undefined *)CONCAT44(local_1420._4_4_,3);
                  uVar30 = FUN_02b66300(&local_1420,iVar18);
                  if ((uVar30 & 1) != 0) {
                    if ((int)local_1420 == 0xf) {
                      if (iVar18 == 0x3ee08254) goto LAB_029fb968;
                      local_c0 = (undefined *)((ulong)local_c0 & 0xffffffffffffff00);
                      local_100 = (undefined *)((ulong)local_100 & 0xffffffff00000000);
                      uVar30 = FUN_016cfb3c(iVar18,&local_c0,&local_100);
                      if ((uVar30 & 1) == 0) goto LAB_029fb9c4;
                      iVar18 = (int)local_100;
                      if (local_c0._0_1_ != (CalendarTime)0x0) {
                        iVar18 = (int)local_100 + 8;
                      }
                      iVar18 = iVar18 + 0x81;
                    }
                    else if ((int)local_1420 == 7) {
                      iVar18 = FUN_0180d8d0();
                      iVar18 = iVar18 + 0x59;
                    }
                    else {
                      if ((int)local_1420 != 2) goto LAB_029fb968;
                      if (iVar18 == -0x5f95286e) {
                        iVar18 = 0x7f;
                      }
                      else if (iVar18 == 0x11889761) {
                        iVar18 = 0x7e;
                      }
                      else {
                        iVar18 = FUN_01c28850(*(undefined8 *)PTR_DAT_04bb4828);
                        local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar18);
                        iVar18 = iVar18 + 0x4b;
                      }
                    }
                    goto LAB_029fbb7c;
                  }
                  if ((iVar18 == 0x1ca0c3e6) || (iVar18 == -0x78a1579c)) {
                    local_1420 = (undefined *)CONCAT44(local_1420._4_4_,3);
LAB_029fb968:
                    iVar18 = (int)local_1420 + 0x3b;
                    goto LAB_029fbb7c;
                  }
LAB_029fb9c4:
                  if (-0x280cede2 < iVar18) {
                    if (iVar18 < 0x526b4f86) {
                      if ((iVar18 != -0x280cede1) && (iVar18 != -0x10e0fba8)) goto LAB_029fbd80;
                      iVar18 = 0x5f;
                    }
                    else if (iVar18 == 0x526b4f86) {
                      iVar18 = 0x65;
                    }
                    else if (iVar18 == 0x565b4aba) {
                      iVar18 = 0x60;
                    }
                    else {
                      if (iVar18 != 0x756a8ab7) goto LAB_029fbd80;
                      iVar18 = 0x62;
                    }
                    goto LAB_029fbb7c;
                  }
                  if (-0x6d41fcf4 < iVar18) {
                    if (iVar18 == -0x6d41fcf3) {
                      iVar18 = 100;
                    }
                    else {
                      if (iVar18 != -0x34cc18dd) goto LAB_029fbd80;
                      iVar18 = 0x61;
                    }
                    goto LAB_029fbb7c;
                  }
                  if (iVar18 == -0x7a8de531) {
                    iVar18 = 99;
                    goto LAB_029fbb7c;
                  }
                  if (iVar18 == -0x7a57de51) {
                    iVar18 = 0x66;
                    goto LAB_029fbb7c;
                  }
LAB_029fbd80:
                  local_1420 = (undefined *)CONCAT44(local_1420._4_4_,0x19);
                  uVar30 = FUN_02911fc0(uVar34,&local_1420);
                  if ((uVar30 & 1) != 0) {
                    local_1420 = (undefined *)CONCAT44(local_1420._4_4_,0x1b);
                    uVar30 = FUN_02911fc0(uVar31,&local_1420);
                    if ((uVar30 & 1) == 0) {
                      iVar18 = 0x67;
                    }
                    else {
                      iVar18 = 0x68;
                    }
                    goto LAB_029fbb7c;
                  }
                  if (((iVar18 == -0x143208e5) || (iVar18 == 0x617f19ef)) || (iVar18 == -0xbb9f562))
                  {
                    iVar18 = 0x80;
                    goto LAB_029fbb7c;
                  }
                  uVar30 = FUN_035a3310();
                  if ((uVar30 & 1) != 0) {
                    if (iVar18 < 0x1490248c) {
                      if (iVar18 != -0x24a26848) {
                        if (iVar18 != 0x80e20d8) {
                          iVar19 = 0xb6a5301;
                          goto LAB_029fbf94;
                        }
                        goto LAB_029fbf9c;
                      }
                      iVar18 = 0x91;
                    }
                    else {
                      if (iVar18 < 0x51b9e069) {
                        if (iVar18 != 0x1490248c) {
                          iVar19 = 0x2922957e;
                          goto LAB_029fbf94;
                        }
                      }
                      else if (iVar18 != 0x51b9e069) {
                        iVar19 = 0x7a616e2f;
LAB_029fbf94:
                        if (iVar18 != iVar19) goto LAB_029fbfb0;
                      }
LAB_029fbf9c:
                      iVar18 = FUN_0180da90();
                      local_1420 = (undefined *)CONCAT44(local_1420._4_4_,iVar18);
                      iVar18 = iVar18 + 0x92;
                    }
                    goto LAB_029fbb7c;
                  }
LAB_029fbfb0:
                  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
                }
                else {
                  puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar34 * 8);
                  if (0xff < uVar31) {
                    puVar4 = (uint *)PTR_DAT_04bc39f8;
                  }
                  if ((*puVar4 >> 6 & 1) == 0) {
                    local_1420 = (undefined *)CONCAT44(local_1420._4_4_,7);
                    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar34 * 8);
                    if (0xff < uVar34) {
                      puVar4 = (uint *)PTR_DAT_04bc39f8;
                    }
                    if (((*puVar4 >> 7 & 1) == 0) || (*(long *)PTR_DAT_04bb5ce0 == 0))
                    goto LAB_029fb844;
                    iVar18 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xed8) + 0x31;
                  }
                  else {
                    local_100 = (undefined *)((ulong)local_100._4_4_ << 0x20);
                    pvVar35 = (void *)((long)&local_1410 + 4);
                    local_1410 = CONCAT44(local_1410._4_4_,0x20);
                    local_13f0 = local_13f0 & 0xffffff;
                    local_1420 = PTR_DAT_04bb2a08 + 0x10;
                    local_1418 = pvVar35;
                    (**(code **)(*(long *)(param_1 + 0x18) + 0x18))(param_1 + 0x18);
                    pvVar36 = *(void **)(param_1 + 0x20);
                    if (pvVar35 != pvVar36) {
                      (**(code **)(*(long *)(param_1 + 0x18) + 0x18))(param_1 + 0x18);
                      lVar27 = 0;
                      do {
                        if (*(char *)(*(long *)(param_1 + 0x20) + lVar27) == '\0')
                        goto LAB_029fbb0c;
                        lVar28 = *(long *)(param_1 + 0x20) + lVar27;
                        if (*(char *)(lVar28 + 1) == '\0') {
                          lVar27 = lVar27 + 1;
                          goto LAB_029fbb0c;
                        }
                        if (*(char *)(lVar28 + 2) == '\0') {
                          lVar27 = lVar27 + 2;
                          goto LAB_029fbb0c;
                        }
                        lVar27 = lVar27 + 3;
                      } while (lVar27 != 0x80001);
                      lVar27 = 0;
LAB_029fbb0c:
                      iVar18 = (int)lVar27;
                      if ((int)local_1410 <= (int)lVar27) {
                        iVar18 = (int)local_1410 + -1;
                      }
                      memcpy(pvVar35,pvVar36,(long)iVar18);
                      *(undefined1 *)((long)pvVar35 + (long)iVar18) = 0;
                    }
                    local_13e8 = *(undefined4 *)(param_1 + 0x50);
                    local_1420 = PTR_DAT_04bb2028 + 0x10;
                    uVar30 = FUN_02b5f400(&local_100);
                    if ((uVar30 & 1) == 0) {
                      iVar18 = -1;
                    }
                    else {
                      iVar18 = FUN_0180da90();
                      local_1420 = (undefined *)CONCAT44(local_1420._4_4_,iVar18);
                      iVar18 = iVar18 + (int)local_100 * 6 + 1;
                    }
                  }
LAB_029fbb7c:
                  *(int *)(param_1 + 0x58) = iVar18;
                }
                bVar6 = *(byte *)(param_1 + 0x10);
                goto joined_r0x029fa32c;
              }
              lVar27 = 4;
LAB_029fa6a0:
              local_1420 = (undefined *)CONCAT44(local_1420._4_4_,(&DAT_05ac0a94)[lVar27 * 4]);
              if (DAT_05ac0ad0 == iVar18) {
                lVar27 = 4;
              }
              else if (DAT_05ac0ae0 == iVar18) {
                lVar27 = 5;
              }
              else if (DAT_05ac0af0 == iVar18) {
                lVar27 = 6;
              }
              else if (DAT_05ac0b00 == iVar18) {
                lVar27 = 7;
              }
              else if (DAT_05ac0b10 == iVar18) {
                lVar27 = 8;
              }
              else {
                if (DAT_05ac0b20 != iVar18) goto LAB_029fb6d8;
                lVar27 = 9;
              }
            }
            local_100 = (undefined *)CONCAT44(local_100._4_4_,(&DAT_05ac0a98)[lVar27 * 4]);
            iVar18 = (int)local_1420 * 3 + (&DAT_05ac0a98)[lVar27 * 4] + 0x6c;
            goto LAB_029fa76c;
          }
          iVar18 = 1;
        }
        local_1420 = (undefined *)CONCAT44(local_1420._4_4_,iVar18);
        iVar18 = iVar18 + 0x6a;
      }
LAB_029fa76c:
      *(int *)(param_1 + 0x58) = iVar18;
      bVar6 = *(byte *)(param_1 + 0x10);
    }
  }
joined_r0x029fa32c:
  if (bVar6 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  }
  if ((bVar5 & 1) != 0) {
    lVar27 = *(long *)PTR_DAT_04bb2720;
    if (lVar27 == 0) {
      puVar20 = &DAT_055c04a0;
    }
    else {
      puVar20 = &DAT_055c04a0;
      if (*(long *)(lVar27 + 0x330) != 0) {
        puVar20 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
        iVar18 = FUN_006bd550(*puVar20,0);
        puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar18 != 0x758f7eaf) {
          puVar20 = &DAT_055c04a0;
        }
      }
    }
    if ((*(int *)(puVar20 + 7) == 0x526b4f86) || (*(int *)(puVar20 + 7) == 0x41c7d05)) {
      *(undefined4 *)(param_1 + 0x58) = 0x65;
    }
  }
  sVar17 = *(short *)PTR_DAT_04bc39f0;
  if ((sVar17 == -1) || (*(int *)(param_1 + 0x5c) == (int)sVar17)) goto LAB_029fac40;
  lVar27 = *(long *)PTR_DAT_04bb2720;
  if (lVar27 == 0) {
    plVar32 = &DAT_055c04a0;
  }
  else {
    plVar32 = &DAT_055c04a0;
    if (*(long *)(lVar27 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
      iVar18 = FUN_006bd550(*puVar20,0);
      plVar32 = (long *)PTR_DAT_04bc3a88;
      if (iVar18 != 0x758f7eaf) {
        plVar32 = &DAT_055c04a0;
      }
    }
  }
  local_f0 = 0x20;
  local_cd = 0;
  uVar31 = (uint)sVar17;
  local_100 = PTR_DAT_04bb2a08 + 0x10;
  local_f8 = auStack_ec;
  (**(code **)(*plVar32 + 0x18))(plVar32);
  __src = (undefined1 *)plVar32[1];
  if (auStack_ec != __src) {
    (**(code **)(*plVar32 + 0x18))(plVar32);
    lVar27 = 0;
    do {
      if (*(char *)(plVar32[1] + lVar27) == '\0') goto LAB_029fa950;
      lVar28 = plVar32[1] + lVar27;
      if (*(char *)(lVar28 + 1) == '\0') {
        lVar27 = lVar27 + 1;
        goto LAB_029fa950;
      }
      if (*(char *)(lVar28 + 2) == '\0') {
        lVar27 = lVar27 + 2;
        goto LAB_029fa950;
      }
      lVar27 = lVar27 + 3;
    } while (lVar27 != 0x80001);
    lVar27 = 0;
LAB_029fa950:
    iVar18 = (int)lVar27;
    if (local_f0 <= (int)lVar27) {
      iVar18 = local_f0 + -1;
    }
    memcpy(auStack_ec,__src,(long)iVar18);
    auStack_ec[iVar18] = 0;
  }
  iVar18 = (int)plVar32[7];
  local_100 = PTR_DAT_04bb2028 + 0x10;
  local_1420 = (undefined *)CONCAT44(local_1420._4_4_,3);
  puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar31 * 8);
  if (0xff < uVar31) {
    puVar4 = (uint *)PTR_DAT_04bc39f8;
  }
  local_c8 = iVar18;
  if ((*puVar4 >> 3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    goto LAB_029fac40;
  }
  if (iVar18 == -0x17df00c3) {
    iVar18 = 0x69;
  }
  else {
    if (iVar18 == -0x7975b8e8) {
      iVar18 = 0;
    }
    else {
      if (iVar18 != -0x3e092032) {
        if (DAT_05ac0a90 == iVar18) {
          lVar27 = 0;
          local_1420 = (undefined *)CONCAT44(local_1420._4_4_,DAT_05ac0a94);
        }
        else if (DAT_05ac0aa0 == iVar18) {
          local_1420 = (undefined *)CONCAT44(local_1420._4_4_,DAT_05ac0aa4);
          lVar27 = 1;
        }
        else {
          if (DAT_05ac0ab0 != iVar18) {
            if (DAT_05ac0ac0 == iVar18) {
              lVar27 = 3;
              goto LAB_029fab4c;
            }
            if (DAT_05ac0ad0 == iVar18) {
              lVar27 = 4;
              goto LAB_029fab4c;
            }
            if (DAT_05ac0ae0 == iVar18) {
              lVar27 = 5;
              goto LAB_029fab4c;
            }
            if (DAT_05ac0af0 == iVar18) {
              lVar27 = 6;
              goto LAB_029fab4c;
            }
            if (DAT_05ac0b00 == iVar18) {
              lVar27 = 7;
              goto LAB_029fab4c;
            }
            if (DAT_05ac0b10 == iVar18) {
              lVar27 = 8;
              goto LAB_029fab4c;
            }
            if (DAT_05ac0b20 == iVar18) {
              lVar27 = 9;
              goto LAB_029fab4c;
            }
LAB_029fb66c:
            puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar31 * 8);
            if (0xff < uVar31) {
              puVar4 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar4 >> 6 & 1) == 0) {
              local_1420 = (undefined *)CONCAT44(local_1420._4_4_,7);
              uVar30 = FUN_02911fc0(uVar31,&local_1420);
              if (((uVar30 & 1) == 0) || (*(long *)PTR_DAT_04bb5ce0 == 0)) {
                local_13f0 = 0xffffffff;
                local_c0._0_4_ = 3;
                local_13ec = 0;
                local_13e8 = 0xffffffff;
                local_13e4 = 0;
                local_13e0 = 0xffffffff;
                local_13dc = 0;
                local_13d8 = 3;
                local_13d4 = 0xffffffffffffffff;
                local_13cc = 0xffffffffffffffff;
                local_13c4 = 0xffffffff;
                local_1408[1] = 0xffffffffffffffff;
                local_1408[2] = 0xffffffffffffffff;
                local_1410 = 0xffffffffffffffff;
                local_1408[0] = 0xffffffffffffffff;
                local_1420 = (undefined *)0xffffffffffffffff;
                local_1418 = (void *)0xffffffffffffffff;
                FUN_02a22734(&local_1420);
                local_c0 = (undefined *)CONCAT44(local_c0._4_4_,local_13d8);
                if (local_13dc._1_1_ == '\0') {
LAB_029fbbc8:
                  if (iVar18 < -0x280cede1) {
                    if (iVar18 < -0x6d41fcf3) {
                      if (iVar18 == -0x7a8de531) {
                        iVar18 = 99;
                      }
                      else {
                        if (iVar18 != -0x7a57de51) goto LAB_029fbd24;
                        iVar18 = 0x66;
                      }
                    }
                    else if (iVar18 == -0x6d41fcf3) {
                      iVar18 = 100;
                    }
                    else if (iVar18 == -0x34cc18dd) {
                      iVar18 = 0x61;
                    }
                    else {
LAB_029fbd24:
                      local_1420 = (undefined *)CONCAT44(local_1420._4_4_,0x19);
                      uVar30 = FUN_02911fc0(uVar31,&local_1420);
                      if ((uVar30 & 1) == 0) {
                        if (((iVar18 == -0x143208e5) || (iVar18 == 0x617f19ef)) ||
                           (iVar18 == -0xbb9f562)) {
                          iVar18 = 0x80;
                        }
                        else {
                          uVar30 = FUN_035a3310();
                          if ((uVar30 & 1) == 0) {
LAB_029fbf74:
                            *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
                            goto LAB_029fac40;
                          }
                          if (iVar18 < 0x1490248c) {
                            if (iVar18 != -0x24a26848) {
                              if (iVar18 != 0x80e20d8) {
                                iVar19 = 0xb6a5301;
                                goto LAB_029fbf54;
                              }
                              goto LAB_029fbf60;
                            }
                            iVar18 = 0x91;
                          }
                          else {
                            if (iVar18 < 0x51b9e069) {
                              if (iVar18 != 0x1490248c) {
                                iVar19 = 0x2922957e;
                                goto LAB_029fbf54;
                              }
                            }
                            else if (iVar18 != 0x51b9e069) {
                              iVar19 = 0x7a616e2f;
LAB_029fbf54:
                              if (iVar18 != iVar19) goto LAB_029fbf74;
                            }
LAB_029fbf60:
                            iVar18 = FUN_0180da90();
                            local_1420 = (undefined *)CONCAT44(local_1420._4_4_,iVar18);
                            iVar18 = iVar18 + 0x92;
                          }
                        }
                      }
                      else {
                        local_1420 = (undefined *)CONCAT44(local_1420._4_4_,0x1b);
                        uVar30 = FUN_02911fc0(uVar31,&local_1420);
                        iVar18 = 0x67;
                        if ((uVar30 & 1) != 0) {
                          iVar18 = 0x68;
                        }
                      }
                    }
                  }
                  else if (iVar18 < 0x526b4f86) {
                    if ((iVar18 != -0x280cede1) && (iVar18 != -0x10e0fba8)) goto LAB_029fbd24;
                    iVar18 = 0x5f;
                  }
                  else if (iVar18 == 0x526b4f86) {
                    iVar18 = 0x65;
                  }
                  else if (iVar18 == 0x565b4aba) {
                    iVar18 = 0x60;
                  }
                  else {
                    if (iVar18 != 0x756a8ab7) goto LAB_029fbd24;
                    iVar18 = 0x62;
                  }
                }
                else if (local_13d8 == 0xf) {
                  if (iVar18 == 0x3ee08254) {
LAB_029fba74:
                    iVar18 = local_13d8 + 0x3b;
                  }
                  else {
                    local_88 = (undefined **)((ulong)local_88 & 0xffffffffffffff00);
                    local_1420 = (undefined *)((ulong)local_1420 & 0xffffffff00000000);
                    uVar30 = FUN_016cfb3c(iVar18,&local_88,&local_1420);
                    if ((uVar30 & 1) == 0) goto LAB_029fbbc8;
                    iVar18 = (int)local_1420;
                    if ((char)local_88 != '\0') {
                      iVar18 = (int)local_1420 + 8;
                    }
                    iVar18 = iVar18 + 0x81;
                  }
                }
                else if (local_13d8 == 7) {
                  iVar18 = 0x59;
                }
                else {
                  if (local_13d8 != 2) goto LAB_029fba74;
                  if (iVar18 == -0x5f95286e) {
                    iVar18 = 0x7f;
                  }
                  else if (iVar18 == 0x11889761) {
                    iVar18 = 0x7e;
                  }
                  else {
                    iVar18 = FUN_01c28a28(*(undefined8 *)PTR_DAT_04bb4828,iVar18);
                    local_1420 = (undefined *)CONCAT44(local_1420._4_4_,iVar18);
                    iVar18 = iVar18 + 0x4b;
                  }
                }
              }
              else {
                iVar18 = FUN_017e4f94(iVar18);
                iVar18 = iVar18 + 0x31;
              }
            }
            else {
              local_1420 = (undefined *)((ulong)local_1420._4_4_ << 0x20);
              uVar30 = FUN_02b5f400(&local_1420,iVar18);
              if ((uVar30 & 1) == 0) {
                iVar18 = -1;
              }
              else {
                local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
                iVar18 = (int)local_1420 * 6 + 1;
              }
            }
            *(int *)(param_1 + 0x5c) = iVar18;
            goto LAB_029fac40;
          }
          lVar27 = 2;
LAB_029fab4c:
          local_1420 = (undefined *)CONCAT44(local_1420._4_4_,(&DAT_05ac0a94)[lVar27 * 4]);
          if (DAT_05ac0ab0 == iVar18) {
            lVar27 = 2;
          }
          else if (DAT_05ac0ac0 == iVar18) {
            lVar27 = 3;
          }
          else if (DAT_05ac0ad0 == iVar18) {
            lVar27 = 4;
          }
          else if (DAT_05ac0ae0 == iVar18) {
            lVar27 = 5;
          }
          else if (DAT_05ac0af0 == iVar18) {
            lVar27 = 6;
          }
          else if (DAT_05ac0b00 == iVar18) {
            lVar27 = 7;
          }
          else if (DAT_05ac0b10 == iVar18) {
            lVar27 = 8;
          }
          else {
            if (DAT_05ac0b20 != iVar18) goto LAB_029fb66c;
            lVar27 = 9;
          }
        }
        local_c0 = (undefined *)CONCAT44(local_c0._4_4_,(&DAT_05ac0a98)[lVar27 * 4]);
        iVar18 = (int)local_1420 * 3 + (&DAT_05ac0a98)[lVar27 * 4] + 0x6c;
        goto LAB_029fac3c;
      }
      iVar18 = 1;
    }
    local_1420 = (undefined *)CONCAT44(local_1420._4_4_,iVar18);
    iVar18 = iVar18 + 0x6a;
  }
LAB_029fac3c:
  *(int *)(param_1 + 0x5c) = iVar18;
LAB_029fac40:
  lVar27 = -0x1300;
  do {
    lVar28 = lVar27 + 0x20;
    *(undefined **)(auStack_ec + lVar27 + -0x34) = PTR_DAT_04bc41d8 + 0x10;
    *(undefined8 *)(auStack_ec + lVar27 + -0x2c) = 0xffffffff00000000;
    *(undefined4 *)(auStack_ec + lVar27 + -0x24) = 0;
    *(undefined8 *)(auStack_ec + lVar27 + -0x1c) = 0xffffffffffffffff;
    lVar27 = lVar28;
  } while (lVar28 != 0);
  nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  iVar18 = *(int *)(param_1 + 0x80);
  if (iVar18 != 0) {
    lVar27 = *(long *)(param_1 + 0x88);
    uVar30 = 0;
    uVar29 = 0;
    do {
      bVar14 = 0x97 < (uint)uVar30;
      lVar28 = lVar27 + ((long)(uVar29 << 0x20) >> 0x19);
      puVar20 = local_1408 + uVar29 * 4 + -2;
      if (bVar14) {
        puVar20 = &local_1418;
      }
      *(undefined4 *)puVar20 = *(undefined4 *)(lVar28 + 0x68);
      puVar20 = local_1408 + uVar29 * 4 + -1;
      puVar9 = (undefined4 *)((long)local_1408 + uVar29 * 0x20 + -0xc);
      if (bVar14) {
        puVar20 = &local_1410;
        puVar9 = (undefined4 *)((long)&local_1418 + 4);
      }
      *puVar9 = *(undefined4 *)(lVar28 + 0x6c);
      *puVar20 = *(undefined8 *)(lVar28 + 0x70);
      puVar20[1] = *(undefined8 *)(lVar28 + 0x78);
      uVar30 = uVar29 + 1;
      *(undefined8 *)(lVar28 + 0x6c) = 0xffffffff;
      *(undefined8 *)(lVar28 + 0x78) = 0xffffffffffffffff;
      *(undefined2 *)(lVar28 + 0x68) = 0;
      *(undefined1 *)(lVar28 + 0x6a) = 0;
      uVar29 = uVar30 & 0xffffffff;
    } while (iVar18 != (int)uVar30);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  puVar11 = PTR_DAT_04bc4608;
  puVar10 = PTR_DAT_04bb2010;
  if ((((bVar8 & 1) == 0) || (lVar27 = *(long *)PTR_DAT_04bb27d0, lVar27 == 0)) ||
     (*(long *)(lVar27 + 0x28) == 0)) {
    bVar14 = false;
    iVar18 = *(int *)(param_1 + 0x80);
  }
  else {
    bVar14 = *(int *)(lVar27 + 0x80) == 1;
    iVar18 = *(int *)(param_1 + 0x80);
  }
  if (iVar18 != 0) {
    uVar30 = 0;
    uVar29 = 0;
    puVar1 = PTR_DAT_04bc43f8 + 0x10;
    lVar27 = *(long *)(param_1 + 0x88);
    puVar2 = PTR_DAT_04bc05e8 + 0x10;
    do {
      lVar28 = lVar27 + ((long)(uVar29 << 0x20) >> 0x19);
      piVar3 = (int *)(lVar28 + 8);
      uVar31 = (uint)uVar30;
      if (bVar7 != 0) {
        if (((uVar31 - 0x5f < 0x33) &&
            ((1L << ((ulong)(uVar31 - 0x5f) & 0x3f) & 0x4000200000503U) != 0)) || (uVar31 == 0)) {
          lVar37 = *(long *)PTR_DAT_04bb30a0;
          if (lVar37 == 0) {
            iVar19 = 1;
            iVar26 = 0x31;
          }
          else {
            local_c0 = (undefined *)FUN_00a8c31c(lVar37);
            if ((char)((ulong)local_c0 >> 0x20) < '\x05') {
              lVar21 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
              local_100 = (undefined *)(lVar21 + -0x15180);
              local_c0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_100);
            }
            uVar22 = (ulong)local_c0;
            uVar23 = (ulong)local_c0 >> 0x10;
            local_c0._7_1_ = SUB81(uVar22,7);
            local_c0._0_7_ = (uint7)CONCAT24(5,(undefined4)local_c0);
            cVar16 = FUN_00a8ae20(lVar37,uVar23,uVar22 >> 0x18,4);
            iVar19 = 1;
            if (cVar16 == '\x02') {
              iVar19 = 2;
            }
            iVar26 = 0x31;
            if (cVar16 == '\x02') {
              iVar26 = 0x32;
            }
          }
          *piVar3 = iVar19;
          bVar15 = bVar14;
          if (uVar31 == 0x91) {
            bVar15 = true;
          }
          iVar19 = 0x26;
          if (!bVar14) {
            iVar19 = iVar26;
          }
          if (bVar15) goto LAB_029faee0;
        }
        else {
          uVar34 = uVar31 - 1;
          if (uVar34 < 0x30) {
            local_100 = (undefined *)((ulong)local_100._4_4_ << 0x20);
            local_98 = puVar1;
            uVar22 = FUN_02b674f0(&local_100,(uVar34 & 0xff) / 6);
            local_90 = (int)local_100;
            if ((uVar22 & 1) == 0) {
              local_90 = 0;
            }
            if (local_90 != 0) {
              local_100 = (undefined *)CONCAT44(local_100._4_4_,1);
              lVar37 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
              if (lVar37 == 0) {
                local_b8 = PTR_DAT_04bbc570[8];
                local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
                local_b4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
                uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
                local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
                local_c0 = puVar11;
                local_b0 = puVar10;
LAB_029fb2ec:
                local_b0 = local_b0 + 0x10;
                local_c0 = local_c0 + 0x10;
              }
              else {
                if (*(long *)(lVar37 + 0x150) == 0) {
                  local_b8 = PTR_DAT_04bbc570[8];
                  local_b4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
                  uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
                  local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
                  local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
                  local_c0 = PTR_DAT_04bc4608;
                  local_b0 = PTR_DAT_04bb2010;
                  goto LAB_029fb2ec;
                }
                local_c0 = PTR_DAT_04bc4608 + 0x10;
                local_b8 = PTR_DAT_04bbc570[8];
                local_b4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
                uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
                local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
                local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
                local_b0 = PTR_DAT_04bb2010 + 0x10;
                if (local_90 != 0) {
                  ppuStack_80 = &local_98;
                  local_88 = &PTR_FUN_04a9b150;
                  local_78 = &local_c0;
                  plVar32 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar37 + 0x150) + 0x10))()
                  ;
                  iVar19 = (**(code **)(*plVar32 + 0x18))();
                  if (0 < iVar19) {
                    iVar26 = 0;
                    do {
                      FUN_01360490(&local_100,*(undefined8 *)(lVar37 + 0x150),iVar26);
                      uVar22 = (*(code *)*local_88)(&local_88,&local_100);
                      if ((uVar22 & 1) != 0) break;
                      bVar15 = iVar19 + -1 != iVar26;
                      iVar26 = iVar26 + 1;
                    } while (bVar15);
                  }
                }
              }
              local_88 = (undefined **)((ulong)local_88 & 0xffffffffffff0000);
              uVar22 = FUN_02b649b0(&local_88,&local_c0);
              if ((uVar22 & 1) != 0) {
                if ((uint)(ushort)local_88 - (uint)DAT_05334f38 < DAT_05334f18) {
                  local_f8 = *(undefined1 **)
                              (DAT_05334f20 +
                              (long)(int)((uint)(ushort)local_88 - (uint)DAT_05334f38) * 8);
                }
                else {
                  local_f8 = (undefined1 *)0x0;
                }
                local_100 = puVar2;
                sVar17 = FUN_01b4c300(&local_100);
                if (sVar17 == 0x2f) goto LAB_029fb528;
              }
            }
            if (uVar34 != 5) goto LAB_029fb530;
LAB_029fb36c:
            iVar19 = 7;
          }
          else {
            uVar34 = uVar31 - 0x31;
            if (uVar34 < 10) {
              local_100 = (undefined *)CONCAT44(local_100._4_4_,uVar34);
              local_98 = PTR_DAT_04bc43f8 + 0x10;
              if (9 < uVar34) {
                uVar34 = 0;
              }
              local_90 = (&DAT_05636e30)[(int)uVar34];
              if (local_90 != 0) {
                local_100 = (undefined *)CONCAT44(local_100._4_4_,1);
                lVar37 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
                if ((lVar37 == 0) || (*(long *)(lVar37 + 0x150) == 0)) {
                  local_c0 = PTR_DAT_04bc4608 + 0x10;
                  local_b8 = PTR_DAT_04bbc570[8];
                  local_b4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
                  uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
                  local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
                  local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
                  local_b0 = PTR_DAT_04bb2010 + 0x10;
                }
                else {
                  local_c0 = PTR_DAT_04bc4608 + 0x10;
                  local_b8 = PTR_DAT_04bbc570[8];
                  local_b4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
                  uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
                  local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
                  local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
                  local_b0 = PTR_DAT_04bb2010 + 0x10;
                  if (local_90 != 0) {
                    ppuStack_80 = &local_98;
                    local_88 = &PTR_FUN_04a9b150;
                    local_78 = &local_c0;
                    plVar32 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar37 + 0x150) + 0x10))
                                                ();
                    iVar19 = (**(code **)(*plVar32 + 0x18))();
                    if (0 < iVar19) {
                      iVar26 = 0;
                      do {
                        FUN_01360490(&local_100,*(undefined8 *)(lVar37 + 0x150),iVar26);
                        uVar22 = (*(code *)*local_88)(&local_88,&local_100);
                        if ((uVar22 & 1) != 0) break;
                        bVar15 = iVar19 + -1 != iVar26;
                        iVar26 = iVar26 + 1;
                      } while (bVar15);
                    }
                  }
                }
                local_88 = (undefined **)((ulong)local_88 & 0xffffffffffff0000);
                uVar22 = FUN_02b649b0(&local_88,&local_c0);
                if ((uVar22 & 1) != 0) {
                  local_100 = PTR_DAT_04bc05e8 + 0x10;
                  if ((uint)(ushort)local_88 - (uint)DAT_05334f38 < DAT_05334f18) {
                    local_f8 = *(undefined1 **)
                                (DAT_05334f20 +
                                (long)(int)((uint)(ushort)local_88 - (uint)DAT_05334f38) * 8);
                  }
                  else {
                    local_f8 = (undefined1 *)0x0;
                  }
                  sVar17 = FUN_01b4c300(&local_100);
                  if (sVar17 != 0x2f) goto LAB_029fb530;
LAB_029fb528:
                  iVar19 = 4;
                  goto LAB_029faee0;
                }
              }
LAB_029fb530:
              if (*(uint *)(param_1 + 0x58) != uVar31) goto LAB_029faee4;
              lVar37 = *(long *)PTR_DAT_04bb5ce0;
              if (lVar37 == 0) {
                iVar19 = 0;
                iVar26 = 0;
              }
              else {
                iVar19 = *(int *)(lVar37 + 0xed0);
                iVar26 = *(int *)(lVar37 + 0xecc);
                if ((*(ushort *)(lVar37 + 0xf6c) & 2) != 0) {
                  iVar19 = 0;
                  iVar26 = 0;
                }
              }
              local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar19);
              local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar26);
              if (iVar19 == 0) {
                iVar19 = 5;
                if (iVar26 == 0) {
                  iVar19 = 6;
                }
              }
              else {
                iVar19 = 5;
              }
            }
            else {
              if (0xf < uVar31 - 0x3b) {
                if ((uVar31 & 0xfffffffe) == 0x6a) goto LAB_029fb530;
                if (uVar31 - 0x81 < 0x10) {
                  if (*(uint *)(param_1 + 0x58) == uVar31) {
                    iVar19 = 0x30;
                    goto LAB_029faee0;
                  }
                  goto LAB_029faee4;
                }
                if (5 < uVar31 - 0x92) goto LAB_029faee4;
                if (uVar31 != 0x97) {
                  iVar19 = 5;
                  if (*(uint *)(param_1 + 0x58) == uVar31) goto LAB_029faee0;
                  goto LAB_029faee4;
                }
                goto LAB_029fb36c;
              }
              if (uVar31 == 0x4a) {
                iVar19 = 0x2f;
              }
              else {
                if (uVar31 != 0x3b) goto LAB_029faee4;
                if (*(int *)(param_1 + 0x50) == -0x41c3528e) {
                  iVar19 = 0xb;
                }
                else {
                  if (*(int *)(param_1 + 0x50) != -0x75e80b7c) goto LAB_029faee4;
                  iVar19 = 0xc;
                }
              }
            }
          }
LAB_029faee0:
          *piVar3 = iVar19;
        }
      }
LAB_029faee4:
      if ((*(uint *)(param_1 + 0x58) == uVar31) && (*piVar3 - 5U < 2)) {
        lVar37 = *(long *)PTR_DAT_04bb5ce0;
        if (lVar37 == 0) {
          iVar19 = 0;
          iVar26 = 0;
        }
        else {
          iVar19 = *(int *)(lVar37 + 0xed0);
          iVar26 = *(int *)(lVar37 + 0xecc);
          if ((*(ushort *)(lVar37 + 0xf6c) & 2) != 0) {
            iVar19 = 0;
            iVar26 = 0;
          }
        }
        local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar19);
        local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar26);
        if (iVar19 == 0) {
          iVar19 = 5;
          if (iVar26 == 0) {
            iVar19 = 6;
          }
        }
        else {
          iVar19 = 5;
        }
        *piVar3 = iVar19;
      }
      FUN_029fbfd0(param_1,piVar3,lVar28 + 0x40,uVar30 & 0xffffffff,0,&local_108,&local_120);
      puVar20 = &local_1420 + uVar29 * 4;
      if (0x97 < uVar31) {
        puVar20 = &local_1420;
      }
      if ((*(uint *)(param_1 + 0x58) == uVar31) && (*piVar3 - 5U < 2)) {
        lVar28 = *(long *)PTR_DAT_04bb5ce0;
        if (lVar28 == 0) {
          iVar19 = 0;
          iVar26 = 0;
        }
        else {
          iVar19 = *(int *)(lVar28 + 0xed0);
          iVar26 = *(int *)(lVar28 + 0xecc);
          if ((*(ushort *)(lVar28 + 0xf6c) & 2) != 0) {
            iVar19 = 0;
            iVar26 = 0;
          }
        }
        local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar19);
        local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar26);
        if (iVar19 == 0) {
          iVar19 = 5;
          if (iVar26 == 0) {
            iVar19 = 6;
          }
        }
        else {
          iVar19 = 5;
        }
        *piVar3 = iVar19;
      }
      FUN_029fbfd0(param_1,piVar3,puVar20,uVar30 & 0xffffffff,1,&local_108,&local_120);
      uVar30 = uVar29 + 1;
      uVar29 = uVar30 & 0xffffffff;
    } while (iVar18 != (int)uVar30);
  }
  pbVar33 = (byte *)(param_1 + 0xd0);
  if (*pbVar33 != 0) {
    if (cVar12 == '\0') {
      if (cVar13 == '\0') {
        return;
      }
      uVar25 = 0xff01;
    }
    else {
      uVar25 = 0xff00;
    }
    local_100 = (undefined *)
                ((ulong)(CONCAT22((short)((ulong)local_100 >> 0x30),uVar25) & 0xff00ffff) << 0x20);
    if (-1 < *(int *)(param_1 + 0x1370)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 0x1370),&local_100,pbVar33
                   ,(uint)*pbVar33 * 0x18 + 8,0);
    }
    *pbVar33 = 0;
  }
  return;
}

