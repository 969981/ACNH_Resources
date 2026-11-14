
/* WARNING: Removing unreachable block (ram,0x01701250) */
/* WARNING: Removing unreachable block (ram,0x017011c8) */
/* WARNING: Removing unreachable block (ram,0x01701138) */
/* WARNING: Removing unreachable block (ram,0x017010a8) */
/* WARNING: Removing unreachable block (ram,0x01701018) */
/* WARNING: Removing unreachable block (ram,0x01700f88) */
/* WARNING: Removing unreachable block (ram,0x01700ef8) */
/* WARNING: Removing unreachable block (ram,0x01700de8) */
/* WARNING: Removing unreachable block (ram,0x01700c48) */
/* WARNING: Removing unreachable block (ram,0x01700ea0) */
/* WARNING: Removing unreachable block (ram,0x01700f40) */
/* WARNING: Removing unreachable block (ram,0x01700fd0) */
/* WARNING: Removing unreachable block (ram,0x01701060) */
/* WARNING: Removing unreachable block (ram,0x017010f0) */
/* WARNING: Removing unreachable block (ram,0x01701180) */
/* WARNING: Removing unreachable block (ram,0x01701208) */
/* WARNING: Removing unreachable block (ram,0x0170127c) */

byte FUN_01700b60(long *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  char *__dest;
  long *plVar14;
  undefined *puVar15;
  long lVar16;
  undefined *local_3c8;
  undefined4 local_3c0;
  undefined *local_3b8;
  undefined *puStack_3b0;
  undefined4 local_3a8;
  undefined1 local_3a4;
  undefined4 local_3a3;
  undefined8 local_39c;
  undefined8 local_394;
  undefined8 local_38c;
  undefined4 local_384;
  undefined4 uStack_380;
  undefined4 local_37c;
  undefined4 uStack_378;
  undefined8 local_374;
  undefined8 local_36c;
  undefined4 local_364;
  undefined *local_360;
  undefined *puStack_358;
  uint local_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined *local_2b8;
  undefined1 *local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4 [31];
  undefined1 local_285;
  undefined8 local_280;
  char *pcStack_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 local_25c;
  undefined *local_250;
  undefined1 *puStack_248;
  undefined4 local_240;
  undefined1 local_23c [127];
  undefined1 local_1bd;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined8 local_1b0;
  
  iVar10 = (**(code **)(*param_1 + 0x550))();
  uVar7 = local_280._4_4_;
  local_280 = (undefined1 *)((ulong)local_280._4_4_ << 0x20);
  bVar8 = iVar10 == 0;
  puVar3 = (uint *)((long)param_1 + 0x15f4);
  if ((*puVar3 & 1) == 0) {
    *puVar3 = *puVar3 | 1;
    local_350 = 2;
    local_3c8 = (undefined *)CONCAT71((int7)((ulong)local_3c8 >> 8),3);
    local_280._0_4_ = 2;
    local_280._4_4_ = uVar7;
    (**(code **)(*param_1 + 0x570))(param_1,&local_3c8);
    *(byte *)((long)param_1 + 0x5f07) = (byte)local_3c8;
    if (((ulong)local_3c8 & 1) != 0) {
      pcStack_278 = *(char **)PTR_PTR_04bbe060;
      local_350 = 0;
      local_280 = PTR_DAT_04bb2020 + 0x10;
      (**(code **)(param_1[0x62] + 0x10))(param_1 + 0x62,&local_280);
      puVar4 = (undefined4 *)((long)param_1 + 0x10dc) + local_350;
      if (0x11 < local_350) {
        puVar4 = (undefined4 *)((long)param_1 + 0x10dc);
      }
      *puVar4 = 1;
    }
    local_350 = 1;
    if ((((byte)local_3c8 >> 1 & 1) != 0) && (param_1[0x293] != 0)) {
      puVar15 = PTR_DAT_04bb2020 + 0x10;
      pcStack_278 = "CharactorAnimation10100";
      local_350 = 4;
      local_280 = puVar15;
      (**(code **)(param_1[0xae] + 0x10))(param_1 + 0xae,&local_280);
      puVar4 = (undefined4 *)((long)param_1 + 0x10dc);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation10200";
      local_350 = 5;
      local_280 = puVar15;
      (**(code **)(param_1[0xc1] + 0x10))(param_1 + 0xc1,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation10300";
      local_350 = 6;
      local_280 = puVar15;
      (**(code **)(param_1[0xd4] + 0x10))(param_1 + 0xd4,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation10400";
      local_350 = 7;
      local_280 = puVar15;
      (**(code **)(param_1[0xe7] + 0x10))(param_1 + 0xe7,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation10500";
      local_350 = 8;
      local_280 = puVar15;
      (**(code **)(param_1[0xfa] + 0x10))(param_1 + 0xfa,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation10600";
      local_350 = 9;
      local_280 = puVar15;
      (**(code **)(param_1[0x10d] + 0x10))(param_1 + 0x10d,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation10700";
      local_350 = 10;
      local_280 = puVar15;
      (**(code **)(param_1[0x120] + 0x10))(param_1 + 0x120,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation10800";
      local_350 = 0xb;
      local_280 = puVar15;
      (**(code **)(param_1[0x133] + 0x10))(param_1 + 0x133,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation10900";
      local_350 = 0xc;
      local_280 = puVar15;
      (**(code **)(param_1[0x146] + 0x10))(param_1 + 0x146,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation11000";
      local_350 = 0xd;
      local_280 = puVar15;
      (**(code **)(param_1[0x159] + 0x10))(param_1 + 0x159,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation11100";
      local_350 = 0xe;
      local_280 = puVar15;
      (**(code **)(param_1[0x16c] + 0x10))(param_1 + 0x16c,&local_280);
      pcStack_278 = "CharactorAnimation20000";
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      local_350 = 0xf;
      local_280 = puVar15;
      (**(code **)(param_1[0x17f] + 0x10))(param_1 + 0x17f,&local_280);
      pcStack_278 = "CharactorAnimation20000";
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      local_350 = 0x10;
      local_280 = puVar15;
      (**(code **)(param_1[0x192] + 0x10))(param_1 + 0x192,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
      pcStack_278 = "CharactorAnimation30000";
      local_350 = 0x11;
      local_280 = puVar15;
      (**(code **)(param_1[0x1a5] + 0x10))(param_1 + 0x1a5,&local_280);
      puVar5 = puVar4 + local_350;
      if (0x11 < local_350) {
        puVar5 = puVar4;
      }
      *puVar5 = 1;
    }
    puVar15 = PTR_DAT_04bb2020;
    __dest = (char *)param_1[0x205];
    pcStack_278 = *(char **)PTR_PTR_04bbe068;
    local_280 = PTR_DAT_04bb2020 + 0x10;
    if (__dest != pcStack_278) {
      lVar13 = 0;
      do {
        if (pcStack_278[lVar13] == '\0') goto LAB_017012fc;
        if (pcStack_278[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_017012fc;
        }
        if (pcStack_278[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_017012fc;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_017012fc:
      iVar11 = (int)lVar13;
      if ((int)param_1[0x206] <= (int)lVar13) {
        iVar11 = (int)param_1[0x206] + -1;
      }
      memcpy(__dest,pcStack_278,(long)iVar11);
      __dest[iVar11] = '\0';
    }
    if ((int)param_1[0x217] != 0) {
      (**(code **)(*(long *)param_1[0x218] + 0x10))((long *)param_1[0x218],&local_280);
    }
    if (param_1[0x293] != 0) {
      puVar1 = puVar15 + 0x10;
      pcStack_278 = "CharaCommon10100";
      local_280 = puVar1;
      if (1 < *(uint *)(param_1 + 0x217)) {
        (**(code **)(*(long *)(param_1[0x218] + 0x98) + 0x10))
                  ((long *)(param_1[0x218] + 0x98),&local_280);
        pcStack_278 = "CharaCommon10200";
        local_280 = puVar1;
        if (2 < *(uint *)(param_1 + 0x217)) {
          (**(code **)(*(long *)(param_1[0x218] + 0x130) + 0x10))(param_1[0x218] + 0x130,&local_280)
          ;
          puVar1 = puVar15 + 0x10;
          pcStack_278 = "CharaCommon10300";
          local_280 = puVar1;
          if (3 < *(uint *)(param_1 + 0x217)) {
            (**(code **)(*(long *)(param_1[0x218] + 0x1c8) + 0x10))
                      (param_1[0x218] + 0x1c8,&local_280);
            pcStack_278 = "CharaCommon10400";
            local_280 = puVar1;
            if (4 < *(uint *)(param_1 + 0x217)) {
              (**(code **)(*(long *)(param_1[0x218] + 0x260) + 0x10))
                        (param_1[0x218] + 0x260,&local_280);
              puVar1 = puVar15 + 0x10;
              pcStack_278 = "CharaCommon10500";
              local_280 = puVar1;
              if (5 < *(uint *)(param_1 + 0x217)) {
                (**(code **)(*(long *)(param_1[0x218] + 0x2f8) + 0x10))
                          (param_1[0x218] + 0x2f8,&local_280);
                pcStack_278 = "CharaCommon10600";
                local_280 = puVar1;
                if (6 < *(uint *)(param_1 + 0x217)) {
                  (**(code **)(*(long *)(param_1[0x218] + 0x390) + 0x10))
                            (param_1[0x218] + 0x390,&local_280);
                  puVar1 = puVar15 + 0x10;
                  pcStack_278 = "CharaCommon10700";
                  local_280 = puVar1;
                  if (7 < *(uint *)(param_1 + 0x217)) {
                    (**(code **)(*(long *)(param_1[0x218] + 0x428) + 0x10))
                              (param_1[0x218] + 0x428,&local_280);
                    pcStack_278 = "CharaCommon10800";
                    local_280 = puVar1;
                    if (8 < *(uint *)(param_1 + 0x217)) {
                      (**(code **)(*(long *)(param_1[0x218] + 0x4c0) + 0x10))
                                (param_1[0x218] + 0x4c0,&local_280);
                      puVar1 = puVar15 + 0x10;
                      pcStack_278 = "CharaCommon10900";
                      local_280 = puVar1;
                      if (9 < *(uint *)(param_1 + 0x217)) {
                        (**(code **)(*(long *)(param_1[0x218] + 0x558) + 0x10))
                                  (param_1[0x218] + 0x558,&local_280);
                        pcStack_278 = "CharaCommon11000";
                        local_280 = puVar1;
                        if (10 < *(uint *)(param_1 + 0x217)) {
                          (**(code **)(*(long *)(param_1[0x218] + 0x5f0) + 0x10))
                                    (param_1[0x218] + 0x5f0,&local_280);
                          puVar1 = puVar15 + 0x10;
                          pcStack_278 = "CharaCommon11100";
                          local_280 = puVar1;
                          if (0xb < *(uint *)(param_1 + 0x217)) {
                            (**(code **)(*(long *)(param_1[0x218] + 0x688) + 0x10))
                                      (param_1[0x218] + 0x688,&local_280);
                            pcStack_278 = "CharaCommon20000";
                            local_280 = puVar1;
                            if (0xc < *(uint *)(param_1 + 0x217)) {
                              (**(code **)(*(long *)(param_1[0x218] + 0x720) + 0x10))
                                        (param_1[0x218] + 0x720,&local_280);
                              puVar1 = puVar15 + 0x10;
                              pcStack_278 = "CharaCommon20100";
                              local_280 = puVar1;
                              if (0xd < *(uint *)(param_1 + 0x217)) {
                                (**(code **)(*(long *)(param_1[0x218] + 0x7b8) + 0x10))
                                          (param_1[0x218] + 0x7b8,&local_280);
                                pcStack_278 = "CharaCommon30000";
                                local_280 = puVar1;
                                if (0xe < *(uint *)(param_1 + 0x217)) {
                                  (**(code **)(*(long *)(param_1[0x218] + 0x850) + 0x10))
                                            (param_1[0x218] + 0x850,&local_280);
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
          }
        }
      }
    }
    lVar13 = param_1[9];
    if (*(long *)(lVar13 + 0x78) != 0) {
      local_280 = puVar15 + 0x10;
      pcStack_278 = "PlayerBody";
      FUN_0074ed40(*(long *)(lVar13 + 0x78),&local_280,0);
      lVar13 = param_1[9];
    }
    puVar6 = PTR_DAT_04bb34e8;
    puVar15 = PTR_DAT_04bb34e0;
    if (*(long *)(lVar13 + 0xb0) == lVar13 + 0xa8) {
      plVar14 = (long *)0x0;
      lVar16 = lVar13;
    }
    else {
      lVar16 = (long)*(int *)(lVar13 + 0xbc);
      plVar14 = (long *)(*(long *)(lVar13 + 0xb0) - lVar16);
      puVar2 = PTR_DAT_04bb2e38 + 0x10;
      do {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          *(undefined **)puVar15 = puVar2;
          __cxa_guard_release(puVar6);
        }
        if ((plVar14 != (long *)0x0) &&
           (uVar12 = (**(code **)(*plVar14 + 0x10))(plVar14,puVar15), (uVar12 & 1) != 0))
        goto LAB_017016d0;
        plVar14 = (long *)(*(long *)((long)plVar14 + lVar16 + 8) - lVar16);
      } while (plVar14 != (long *)((lVar13 + 0xa8) - lVar16));
      plVar14 = (long *)0x0;
LAB_017016d0:
      lVar16 = param_1[9];
    }
    param_1[600] = (long)plVar14;
    param_1[0x259] = *(long *)(lVar13 + 0x60);
    FUN_0172e110(param_1 + 0x286,lVar16);
    param_1[0x289] = (long)param_1;
  }
  uVar12 = (**(code **)(*param_1 + 0x578))(param_1);
  if ((uVar12 & 1) != 0) {
    if ((char)param_1[0xb8e] == '\0') {
      local_285 = 0;
      *(undefined1 *)(param_1 + 0xb8e) = 1;
      local_2b0 = local_2a4;
      local_2a8 = 0x20;
      local_2a4[0] = 0;
      local_2b8 = PTR_DAT_04bb2028 + 0x10;
      (**(code **)(*param_1 + 0x580))(param_1,&local_2b8);
      (**(code **)(local_2b8 + 0x18))(&local_2b8);
      FUN_0074fda4(&local_350,"AnimationInfo/%s.byml",local_2b0);
      local_3c0 = 1;
      local_3a8 = 0x1010100;
      local_3a3 = 0x1010101;
      local_3a4 = 0;
      local_384 = 0;
      local_3b8 = PTR_DAT_04bb2020 + 0x10;
      uStack_378 = 0;
      local_3c8 = PTR_DAT_04bdf0b0 + 0x10;
      local_39c = 0;
      puStack_3b0 = PTR_DAT_04bb2120;
      local_394 = 0;
      local_38c = 0;
      local_374 = 0;
      local_36c = 0;
      local_364 = 0;
      puStack_358 = PTR_DAT_04bb2120;
      bVar9 = *(byte *)(param_1 + 0xb88);
      uStack_380 = (undefined4)*(undefined8 *)PTR_DAT_04bb4708;
      local_37c = (undefined4)((ulong)*(undefined8 *)PTR_DAT_04bb4708 >> 0x20);
      local_360 = local_3b8;
      if ((bVar9 >> 1 & 1) == 0) {
        *(undefined4 *)((long)param_1 + 0x5c44) = 0;
        *(byte *)(param_1 + 0xb88) = bVar9 & 0xf0 | 2;
        FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,param_1 + 0xb87,&local_350,&local_3c8);
      }
      else {
        lVar13 = param_1[0xb89];
        if (lVar13 == 0) {
          puVar15 = &DAT_0406a300;
        }
        else {
          (**(code **)(*(long *)(lVar13 + 0x360) + 0x18))(lVar13 + 0x360);
          puVar15 = *(undefined **)(lVar13 + 0x368);
        }
        (**(code **)(CONCAT44(uStack_34c,local_350) + 0x18))(&local_350);
        FUN_0156b428(&local_280,&DAT_0406f6e3,puVar15,local_348);
        *(undefined4 *)((long)param_1 + 0x5c44) = 8;
      }
    }
    FUN_03f2dedc(param_1 + 0xb87,0);
    bVar9 = FUN_03f2e940(param_1 + 0xb87);
    bVar8 = (bool)(iVar10 == 0 & bVar9);
  }
  puVar15 = PTR_DAT_04bb2d88;
  if (param_1[0x290] != 0) {
    local_270 = 0;
    local_280 = &DAT_ffffffff00000000;
    pcStack_278 = (char *)0x0;
    local_26c = 0x3f800000;
    puStack_248 = local_23c;
    local_240 = 0x80;
    local_250 = PTR_DAT_04bb2d88 + 0x10;
    local_1bd = 0;
    local_23c[0] = 0;
    local_1b0 = 0;
    local_1b4 = 0;
    local_264 = 0;
    local_25c = 0;
    local_1b8 = 7;
    bVar9 = FUN_017320dc(param_1[0x290],&local_280);
    bVar8 = (bool)(bVar8 & bVar9);
  }
  if (param_1[0x291] != 0) {
    local_270 = 0;
    local_280 = &DAT_ffffffff00000000;
    pcStack_278 = (char *)0x0;
    local_26c = 0x3f800000;
    puStack_248 = local_23c;
    local_240 = 0x80;
    local_250 = puVar15 + 0x10;
    local_1bd = 0;
    local_23c[0] = 0;
    local_1b0 = 0;
    local_1b4 = 0;
    local_264 = 0;
    local_25c = 0;
    local_1b8 = 7;
    bVar9 = FUN_017320dc(param_1[0x291],&local_280);
    bVar8 = (bool)(bVar8 & bVar9);
  }
  if (param_1[0x292] != 0) {
    local_250 = puVar15 + 0x10;
    local_270 = 0;
    local_280 = &DAT_ffffffff00000000;
    pcStack_278 = (char *)0x0;
    local_26c = 0x3f800000;
    local_240 = 0x80;
    puStack_248 = local_23c;
    local_1bd = 0;
    local_23c[0] = 0;
    local_1b0 = 0;
    local_1b4 = 0;
    local_264 = 0;
    local_25c = 0;
    local_1b8 = 7;
    bVar9 = FUN_017320dc(param_1[0x292],&local_280);
    bVar8 = (bool)(bVar8 & bVar9);
  }
  iVar10 = FUN_0073a69c(param_1);
  bVar9 = bVar8 ^ 1;
  if (iVar10 != 0) {
    bVar9 = 1;
  }
  return bVar9;
}

