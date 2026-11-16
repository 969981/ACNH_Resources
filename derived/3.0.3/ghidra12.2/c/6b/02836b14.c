
/* WARNING: Removing unreachable block (ram,0x02836f60) */
/* WARNING: Removing unreachable block (ram,0x02837518) */
/* WARNING: Type propagation algorithm not settling */

byte FUN_02836b14(undefined8 param_1,undefined4 *param_2,int param_3,uint param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  byte bVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long local_a80;
  long local_a78;
  undefined **local_a30 [4];
  undefined **local_a10;
  long lStack_a08;
  undefined **local_a00;
  long lStack_9f8;
  undefined *local_9f0;
  long lStack_9e8;
  long local_9e0;
  undefined4 local_9d8;
  undefined *local_9d0;
  undefined1 *puStack_9c8;
  undefined *local_9c0;
  undefined1 *puStack_9b8;
  undefined *local_9b0;
  undefined *puStack_9a8;
  undefined1 *local_9a0;
  undefined *local_998;
  undefined *puStack_990;
  undefined1 *local_988;
  undefined *local_980;
  undefined1 *local_978;
  undefined4 local_970;
  undefined1 local_96c [127];
  undefined1 local_8ed;
  undefined8 local_8e8;
  undefined1 *local_8e0;
  undefined4 local_8d8;
  undefined1 local_8d4 [127];
  undefined1 local_855;
  undefined4 local_84c;
  undefined1 local_848 [4];
  undefined1 local_844 [4];
  undefined **local_840 [4];
  undefined **local_820;
  long local_818;
  undefined **local_810;
  long local_808;
  undefined *local_800;
  long local_7f8;
  long local_7f0;
  undefined4 local_7e8;
  undefined *local_7e0;
  undefined1 *local_7d8;
  undefined *local_7d0;
  undefined1 *local_7c8;
  undefined *local_7c0;
  undefined *local_7b8;
  undefined1 *local_7b0;
  undefined *local_7a8;
  undefined *local_7a0;
  undefined1 *local_798;
  undefined4 local_78c;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  undefined **local_780;
  undefined1 *local_778;
  undefined4 local_770;
  undefined1 local_76c [127];
  undefined1 local_6ed;
  undefined **local_6e8;
  undefined1 *local_6e0;
  undefined4 local_6d8;
  undefined1 local_6d4 [127];
  undefined1 local_655;
  undefined **local_650 [4];
  undefined **local_630;
  long local_628;
  undefined **local_620;
  long local_618;
  undefined *local_610;
  long local_608;
  long local_600;
  undefined4 local_5f8;
  undefined *local_5f0;
  undefined1 *local_5e8;
  undefined *local_5e0;
  undefined1 *local_5d8;
  undefined *local_5d0;
  undefined *local_5c8;
  undefined1 *local_5c0;
  undefined *local_5b8;
  undefined *local_5b0;
  undefined1 *local_5a8;
  undefined4 local_59c;
  undefined1 local_598 [4];
  undefined1 local_594 [4];
  undefined **local_590;
  undefined1 *local_588;
  undefined4 local_580;
  undefined1 local_57c [127];
  undefined1 local_4fd;
  undefined **local_4f8;
  undefined1 *local_4f0;
  undefined4 local_4e8;
  undefined1 local_4e4 [127];
  undefined1 local_465;
  undefined **local_460;
  undefined8 local_458;
  undefined **local_440;
  long local_438;
  undefined **local_430;
  long local_428;
  undefined *local_420;
  long local_418;
  long local_410;
  undefined4 local_408;
  undefined *local_400;
  undefined1 *local_3f8;
  undefined *local_3f0;
  undefined1 *local_3e8;
  undefined *local_3e0;
  undefined *local_3d8;
  undefined1 *local_3d0;
  undefined *local_3c8;
  undefined *local_3c0;
  undefined1 *local_3b8;
  undefined4 local_3ac;
  undefined1 local_3a8 [4];
  undefined1 local_3a4 [4];
  undefined **local_3a0;
  undefined1 *local_398;
  undefined4 local_390;
  undefined1 local_38c [127];
  undefined1 local_30d;
  undefined **local_308;
  undefined1 *local_300;
  undefined4 local_2f8;
  undefined1 local_2f4 [127];
  undefined1 local_275;
  undefined **local_270;
  undefined8 local_268;
  undefined **local_250;
  long local_248;
  undefined **local_240;
  long local_238;
  undefined *local_230;
  long local_228;
  long local_220;
  undefined4 local_218;
  undefined *local_210;
  long local_208;
  undefined *local_200;
  undefined1 *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined1 *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  long local_1c8;
  undefined4 local_1bc;
  undefined1 local_1b8 [4];
  undefined1 local_1b4 [4];
  undefined8 local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [127];
  undefined1 local_11d;
  undefined **local_118;
  long local_110;
  undefined8 local_108;
  undefined1 local_85;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  
  if (param_2 == (undefined4 *)0x0) {
    if (*(long *)PTR_DAT_04bb46a8 == 0) {
      return 0;
    }
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    if (lVar25 == 0) {
      return 0;
    }
    if ((param_3 == 1) && (7 < param_4)) {
      return 0;
    }
LAB_02836bb8:
    if (param_3 != 1) {
      if (((((((*(int *)(lVar25 + 0x94) != 2 && *(int *)(lVar25 + 0x9c) != 2) &&
              *(int *)(lVar25 + 0xa4) != 2) && *(int *)(lVar25 + 0xac) != 2) &&
            *(int *)(lVar25 + 0xb4) != 2) && *(int *)(lVar25 + 0xbc) != 2) &&
           *(int *)(lVar25 + 0xc4) != 2) && (*(int *)(lVar25 + 0xcc) != 2)) {
        if (*(int *)(lVar25 + 0x94) == 0) {
          lVar12 = 0;
        }
        else if (*(int *)(lVar25 + 0x9c) == 0) {
          lVar12 = 1;
        }
        else if (*(int *)(lVar25 + 0xa4) == 0) {
          lVar12 = 2;
        }
        else if (*(int *)(lVar25 + 0xac) == 0) {
          lVar12 = 3;
        }
        else if (*(int *)(lVar25 + 0xb4) == 0) {
          lVar12 = 4;
        }
        else if (*(int *)(lVar25 + 0xbc) == 0) {
          lVar12 = 5;
        }
        else if (*(int *)(lVar25 + 0xc4) == 0) {
          lVar12 = 6;
        }
        else {
          if (*(int *)(lVar25 + 0xcc) != 0) goto LAB_02836d54;
          lVar12 = 7;
        }
        *(undefined4 *)(lVar25 + lVar12 * 8 + 0x94) = 2;
      }
    }
    else if ((((((*(int *)(lVar25 + 0x94) != 1 || *(uint *)(lVar25 + 0x90) != param_4) &&
                ((*(int *)(lVar25 + 0x9c) != 1 || (*(uint *)(lVar25 + 0x98) != param_4)))) &&
               ((*(int *)(lVar25 + 0xa4) != 1 || (*(uint *)(lVar25 + 0xa0) != param_4)))) &&
              ((((*(int *)(lVar25 + 0xac) != 1 || (*(uint *)(lVar25 + 0xa8) != param_4)) &&
                ((*(int *)(lVar25 + 0xb4) != 1 || (*(uint *)(lVar25 + 0xb0) != param_4)))) &&
               ((*(int *)(lVar25 + 0xbc) != 1 || (*(uint *)(lVar25 + 0xb8) != param_4)))))) &&
             ((*(int *)(lVar25 + 0xc4) != 1 || (*(uint *)(lVar25 + 0xc0) != param_4)))) &&
            ((*(int *)(lVar25 + 0xcc) != 1 || (*(uint *)(lVar25 + 200) != param_4)))) {
      FUN_026f0014(lVar25,param_4);
    }
LAB_02836d54:
    puVar2 = PTR_DAT_04bb46b0;
    if (*(long *)PTR_DAT_04bb46b0 != 0) {
      if (param_3 == 2) {
        FUN_026f0ec8();
        lVar12 = *(long *)puVar2;
      }
      else {
        if (param_3 != 1) goto LAB_02836fb0;
        FUN_026f2b8c(*(long *)PTR_DAT_04bb46b0,param_4,1);
        lVar12 = *(long *)puVar2;
      }
      if (lVar12 != 0) {
        if (param_3 == 2) {
          FUN_026f0fc0();
        }
        else {
          if (param_3 != 1) goto LAB_02836fb0;
          FUN_026f3ad0(lVar12,param_4,1);
        }
        if (*(long *)puVar2 != 0) {
          if (param_3 == 2) {
            FUN_026f1190();
          }
          else {
            if (param_3 != 1) goto LAB_02836fb0;
            FUN_026f3de0(*(long *)puVar2,param_4,1);
          }
          local_118 = &PTR_FUN_04a919a0;
          local_108 = &local_1b0;
          local_1b0 = (undefined **)CONCAT44(param_4,param_3);
          local_110 = param_1;
          uVar13 = FUN_0283f2cc(&local_118);
          if ((uVar13 & 1) == 0) {
            if (param_2 == (undefined4 *)0x0) {
              return 0;
            }
            *param_2 = 7;
            return 0;
          }
          if (param_3 != 1) {
            lVar12 = FUN_026efca4(lVar25);
            if (((lVar12 != 0) && (*(long *)puVar2 != 0)) &&
               ((lVar14 = FUN_026efd64(), lVar14 != 0 &&
                ((lVar15 = FUN_0283bf14(), lVar15 != 0 && (*(long *)puVar2 != 0)))))) {
              lVar16 = FUN_026efe34();
joined_r0x02836e70:
              if ((((lVar16 != 0) && (*(long *)puVar2 != 0)) &&
                  (lVar18 = *(long *)(*(long *)puVar2 + 0x10), lVar18 != 0)) &&
                 (((plVar19 = *(long **)(lVar18 + 0xe0), plVar19 != (long *)0x0 &&
                   (lVar18 = (**(code **)(*plVar19 + 0x10))(plVar19), lVar18 != 0)) &&
                  ((((lVar20 = *(long *)puVar2, lVar20 != 0 &&
                     ((lVar23 = *(long *)(lVar20 + 0x78), lVar23 != 0 &&
                      (*(long *)(lVar20 + 0x10) != 0)))) &&
                    (plVar19 = *(long **)(*(long *)(lVar20 + 0x10) + 0xe8), plVar19 != (long *)0x0))
                   && (((lVar20 = (**(code **)(*plVar19 + 0x10))(), lVar20 != 0 &&
                        (lVar21 = *(long *)puVar2, lVar21 != 0)) &&
                       (lVar24 = *(long *)(lVar21 + 0x80), lVar24 != 0)))))))) {
                local_118 = (undefined **)CONCAT44(local_118._4_4_,1);
                if (((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) != 0) {
                  local_a80 = 0;
                  local_a78 = 0;
LAB_02836ff0:
                  local_78 = 0;
                  local_70 = 0;
                  local_110 = (long)&local_108 + 4;
                  local_7c = 0;
                  local_85 = 0;
                  local_108 = (undefined8 *)CONCAT35(local_108._5_3_,0x80);
                  ppuVar1 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
                  local_1a0 = 0x80;
                  local_11d = 0;
                  local_19c[0] = 0;
                  local_1a8 = local_19c;
                  local_1b0 = ppuVar1;
                  local_118 = ppuVar1;
                  FUN_027019b0(&local_118,param_3,1,param_4);
                  FUN_02701a90(&local_1b0,param_3,1,param_4);
                  local_1b4[0] = 0;
                  local_1b8[0] = 0;
                  local_1bc = 0;
                  puVar2 = PTR_DAT_04bc37c0 + 0x10;
                  puVar3 = PTR_DAT_04bb2020 + 0x10;
                  local_1c8 = local_110;
                  local_208 = local_110;
                  local_240 = &PTR_LAB_04a919c8;
                  local_250 = &PTR_LAB_04a91940;
                  puVar4 = PTR_DAT_04bc37b8 + 0x10;
                  local_1e0 = local_1a8;
                  local_1f8 = local_1a8;
                  local_270 = &PTR_LAB_04a919f0;
                  local_218 = 0x74a40;
                  local_268 = CONCAT44(param_4,param_3);
                  local_248 = lVar14;
                  local_238 = lVar12;
                  local_230 = puVar4;
                  local_228 = lVar12;
                  local_220 = lVar14;
                  local_210 = puVar3;
                  local_200 = puVar3;
                  local_1f0 = puVar2;
                  local_1e8 = puVar3;
                  local_1d8 = puVar2;
                  local_1d0 = puVar3;
                  FUN_0283bde0((long)&local_70 + 4,local_1b4,local_1b8,&local_1bc,&local_1d8,
                               &local_1f0,&local_230,&local_240,&local_250,&local_270,0x74a40);
                  iVar10 = local_70._4_4_;
                  local_2f8 = 0x80;
                  local_275 = 0;
                  local_2f4[0] = 0;
                  local_390 = 0x80;
                  local_30d = 0;
                  local_300 = local_2f4;
                  local_38c[0] = 0;
                  local_398 = local_38c;
                  local_3a0 = ppuVar1;
                  local_308 = ppuVar1;
                  FUN_027019b0(&local_308,param_3,2,param_4);
                  FUN_02701a90(&local_3a0,param_3,2,param_4);
                  local_3a4[0] = 0;
                  local_3b8 = local_300;
                  local_3f8 = local_300;
                  local_430 = &PTR_LAB_04a91a18;
                  local_460 = &PTR_LAB_04a91a40;
                  local_3d0 = local_398;
                  local_3e8 = local_398;
                  local_440 = &PTR_LAB_04a91940;
                  local_3a8[0] = 0;
                  local_3ac = 0;
                  local_408 = 0x47430;
                  local_458 = CONCAT44(param_4,param_3);
                  local_438 = lVar16;
                  local_428 = lVar15;
                  local_420 = puVar4;
                  local_418 = lVar15;
                  local_410 = lVar16;
                  local_400 = puVar3;
                  local_3f0 = puVar3;
                  local_3e0 = puVar2;
                  local_3d8 = puVar3;
                  local_3c8 = puVar2;
                  local_3c0 = puVar3;
                  FUN_0283bde0(&local_70,local_3a4,local_3a8,&local_3ac,&local_3c8,&local_3e0,
                               &local_420,&local_430,&local_440,&local_460,0x47430);
                  iVar9 = (int)local_70;
                  local_4e8 = 0x80;
                  local_465 = 0;
                  local_4e4[0] = 0;
                  local_580 = 0x80;
                  local_4fd = 0;
                  local_4f0 = local_4e4;
                  local_57c[0] = 0;
                  local_588 = local_57c;
                  local_590 = ppuVar1;
                  local_4f8 = ppuVar1;
                  FUN_027019b0(&local_4f8,param_3,3,param_4);
                  FUN_02701a90(&local_590,param_3,3,param_4);
                  local_5a8 = local_4f0;
                  local_5e8 = local_4f0;
                  local_620 = &PTR_LAB_04a91a68;
                  local_630 = &PTR_LAB_04a91940;
                  local_5c0 = local_588;
                  local_5d8 = local_588;
                  local_650[0] = &PTR_LAB_04a91a90;
                  local_594[0] = 0;
                  local_598[0] = 0;
                  local_59c = 0;
                  local_5f8 = 0x2f650;
                  local_628 = lVar23;
                  local_618 = lVar18;
                  local_610 = puVar4;
                  local_608 = lVar18;
                  local_600 = lVar23;
                  local_5f0 = puVar3;
                  local_5e0 = puVar3;
                  local_5d0 = puVar2;
                  local_5c8 = puVar3;
                  local_5b8 = puVar2;
                  local_5b0 = puVar3;
                  FUN_0283bde0((long)&local_78 + 4,local_594,local_598,&local_59c,&local_5b8,
                               &local_5d0,&local_610,&local_620,&local_630,local_650,0x2f650);
                  iVar8 = local_78._4_4_;
                  local_6d8 = 0x80;
                  local_655 = 0;
                  local_6d4[0] = 0;
                  local_770 = 0x80;
                  local_6ed = 0;
                  local_6e0 = local_6d4;
                  local_76c[0] = 0;
                  local_778 = local_76c;
                  local_780 = ppuVar1;
                  local_6e8 = ppuVar1;
                  FUN_027019b0(&local_6e8,param_3,4,param_4);
                  FUN_02701a90(&local_780,param_3,4,param_4);
                  local_798 = local_6e0;
                  local_7d8 = local_6e0;
                  local_810 = &PTR_LAB_04a91ab8;
                  local_820 = &PTR_LAB_04a91940;
                  local_7b0 = local_778;
                  local_7c8 = local_778;
                  local_840[0] = &PTR_LAB_04a91ae0;
                  local_784[0] = 0;
                  local_788[0] = 0;
                  local_78c = 0;
                  local_7e8 = 0x69560;
                  local_818 = lVar24;
                  local_808 = lVar20;
                  local_800 = puVar4;
                  local_7f8 = lVar20;
                  local_7f0 = lVar24;
                  local_7e0 = puVar3;
                  local_7d0 = puVar3;
                  local_7c0 = puVar2;
                  local_7b8 = puVar3;
                  local_7a8 = puVar2;
                  local_7a0 = puVar3;
                  FUN_0283bde0(&local_78,local_784,local_788,&local_78c,&local_7a8,&local_7c0,
                               &local_800,&local_810,&local_820,local_840,0x69560);
                  bVar22 = 0;
                  if (local_70._4_4_ == 1) {
                    bVar22 = *(byte *)(lVar12 + 0x70464) & 1;
                  }
                  iVar7 = (int)local_78;
                  bVar11 = false;
                  local_8e8 = (undefined *)CONCAT44(local_8e8._4_4_,1);
                  local_844[0] = 0;
                  local_848[0] = 0;
                  local_84c = 0;
                  bVar5 = 0;
                  if (((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) == 0) {
                    bVar5 = bVar22;
                  }
                  if (bVar5 == 1) {
                    local_855 = 0;
                    local_8d8 = 0x80;
                    local_8e0 = local_8d4;
                    local_8d4[0] = 0;
                    local_970 = 0x80;
                    local_8ed = 0;
                    local_96c[0] = 0;
                    local_980 = PTR_DAT_04bb2d88 + 0x10;
                    local_978 = local_96c;
                    local_8e8 = local_980;
                    FUN_027019b0(&local_8e8,param_3,6,param_4);
                    FUN_02701a90(&local_980,param_3,6,param_4);
                    local_988 = local_8e0;
                    local_9b0 = PTR_DAT_04bc37c0 + 0x10;
                    local_9d0 = PTR_DAT_04bb2020 + 0x10;
                    local_9a0 = local_978;
                    puStack_9c8 = local_8e0;
                    puStack_9b8 = local_978;
                    local_a00 = &PTR_LAB_04a91b08;
                    lStack_9f8 = local_a78;
                    local_9f0 = PTR_DAT_04bc37b8 + 0x10;
                    local_a10 = &PTR_LAB_04a91940;
                    lStack_a08 = local_a80;
                    lStack_9e8 = local_a78;
                    local_a30[0] = &PTR_LAB_04a91b30;
                    local_9e0 = local_a80;
                    local_9d8 = 0xb8a4e0;
                    local_9c0 = local_9d0;
                    puStack_9a8 = local_9d0;
                    local_998 = local_9b0;
                    puStack_990 = local_9d0;
                    FUN_0283bde0(&local_7c,local_844,local_848,&local_84c,&local_998,&local_9b0,
                                 &local_9f0,&local_a00,&local_a10,local_a30,0xb8a4e0);
                    bVar11 = local_7c == 1;
                  }
                  bVar22 = 0;
                  if (((iVar10 == 1 && iVar9 == 1) && iVar8 == 1) && iVar7 == 1) {
                    bVar22 = bVar5 ^ 1 | bVar11;
                  }
                  if (bVar22 == 1) {
                    FUN_02812e10(lVar12 + 0x37be0);
                    FUN_027ecc08(lVar18 + 0x110);
                    return 1;
                  }
                  if (((iVar10 == 1 || iVar9 == 1) || iVar8 == 1) || iVar7 == 1) {
                    bVar11 = true;
                  }
                  if (bVar11 == false) {
                    if ((((local_70._4_4_ != 6) && ((int)local_70 != 6)) && (local_78._4_4_ != 6))
                       && ((int)local_78 != 6)) {
                      bVar6 = 0;
                      if (local_7c == 6) {
                        bVar6 = bVar5;
                      }
                      if (bVar6 != 1) {
                        bVar6 = 0;
                        if (local_7c != 4) {
                          bVar6 = bVar5;
                        }
                        if (((local_70._4_4_ == 4) && ((int)local_70 == 4)) &&
                           ((local_78._4_4_ == 4 && (((int)local_78 == 4 && (bVar6 == 0)))))) {
                          if (param_2 == (undefined4 *)0x0) {
                            return bVar22;
                          }
                          uVar17 = 4;
                          goto LAB_02836fbc;
                        }
                        bVar6 = 0;
                        if (local_7c == 4) {
                          bVar6 = bVar5;
                        }
                        if ((((local_70._4_4_ != 4) && ((int)local_70 != 4)) &&
                            (local_78._4_4_ != 4)) && (((int)local_78 != 4 && (bVar6 == 0))))
                        goto LAB_028377f4;
                      }
                    }
                  }
                  else if ((((local_70._4_4_ == 1) || (local_70._4_4_ == 7)) &&
                           ((((int)local_70 == 7 || ((int)local_70 == 1)) &&
                            ((local_78._4_4_ == 7 || (local_78._4_4_ == 1)))))) &&
                          ((((int)local_78 == 7 || ((int)local_78 == 1)) &&
                           ((bVar5 == 0 || ((local_7c == 7 || (local_7c == 1)))))))) {
LAB_028377f4:
                    if (param_2 == (undefined4 *)0x0) {
                      return bVar22;
                    }
                    uVar17 = 7;
                    goto LAB_02836fbc;
                  }
                  if (param_2 == (undefined4 *)0x0) {
                    return bVar22;
                  }
                  uVar17 = 6;
                  goto LAB_02836fbc;
                }
                if ((*(long *)(lVar21 + 0x10) != 0) &&
                   (plVar19 = *(long **)(*(long *)(lVar21 + 0x10) + 0x188), plVar19 != (long *)0x0))
                {
                  local_a78 = (**(code **)(*plVar19 + 0x10))();
                  if ((*(long *)puVar2 != 0) &&
                     ((local_a78 != 0 &&
                      (local_a80 = *(long *)(*(long *)puVar2 + 0x88), local_a80 != 0))))
                  goto LAB_02836ff0;
                }
              }
            }
          }
          else {
            lVar12 = FUN_026f9208(lVar25,param_4);
            if (((((lVar12 != 0) && (*(long *)puVar2 != 0)) &&
                 (lVar14 = FUN_026f9328(*(long *)puVar2,param_4), lVar14 != 0)) &&
                ((param_4 < 8 && (*(long *)puVar2 != 0)))) &&
               ((lVar15 = FUN_026f34d0(*(long *)puVar2,param_4), lVar15 != 0 &&
                (*(long *)puVar2 != 0)))) {
              lVar16 = FUN_026f3708(*(long *)puVar2,param_4);
              goto joined_r0x02836e70;
            }
          }
        }
      }
    }
LAB_02836fb0:
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  else {
    *param_2 = 0;
    if (((*(long *)PTR_DAT_04bb46a8 != 0) && (lVar25 = *(long *)PTR_DAT_04bb46b0, lVar25 != 0)) &&
       ((param_3 != 1 || (param_4 < 8)))) goto LAB_02836bb8;
  }
  uVar17 = 7;
  bVar22 = 0;
LAB_02836fbc:
  *param_2 = uVar17;
  return bVar22;
}

