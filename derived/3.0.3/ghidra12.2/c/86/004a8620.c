
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004a8620(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 auVar6 [8];
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined4 local_490 [2];
  undefined2 local_488 [2];
  undefined1 auStack_484 [4];
  undefined1 local_480 [8];
  char *pcStack_478;
  char *local_470;
  char *local_468;
  undefined8 local_3e0;
  undefined1 *local_3d8;
  undefined8 local_3d0;
  undefined1 auStack_3c8 [128];
  undefined1 *local_348;
  undefined8 local_340;
  undefined1 auStack_338 [128];
  undefined1 *local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  undefined1 auStack_2a8 [8];
  char *local_2a0;
  char *local_298;
  ulong local_230;
  long local_228;
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 local_210;
  long local_208;
  undefined8 local_1b0;
  long local_190;
  ulong local_188;
  long local_180;
  undefined8 local_170;
  uint local_6c [3];
  
  local_6c[0] = 0;
  local_298 = (char *)0x0;
  local_2a0 = (char *)0x0;
  iVar7 = FUN_0049da40(param_2,&DAT_040ae7f4,&local_2a0);
  if (-1 < iVar7) {
    if ((local_2a0 != local_298) && (*local_2a0 == '\"')) {
      local_2a0 = local_2a0 + 1;
      local_298 = local_298 + -1;
    }
    uVar9 = FUN_0043a780(local_2a0,(long)local_298 - (long)local_2a0,&DAT_040dd778);
    if ((uVar9 & 1) != 0) {
      iVar7 = FUN_0043a2d0(&DAT_040dd778);
      local_2a0 = local_2a0 + iVar7;
      iVar7 = FUN_0049db00(&local_2a0,&local_3e0);
      uVar9 = local_3e0;
      if (-1 < iVar7) {
        FUN_00451ea0(&local_2a0);
        uVar10 = FUN_00452230(&local_2a0,param_1);
        local_3d8 = auStack_3c8;
        local_348 = auStack_338;
        local_340._0_4_ = 0;
        local_340._4_4_ = 0x80000020;
        local_3d0 = -0x7fffffe000000000;
        local_2b8 = auStack_2a8;
        local_2b0 = 0;
        local_2ac = 0x80000002;
        local_3e0 = 0;
        iVar7 = FUN_004a8280(uVar10,param_2,&DAT_040dd778);
        puVar4 = PTR_DAT_048607b8;
        iVar16 = (int)uVar9;
        if (iVar7 < 0) {
LAB_004a916c:
          iVar7 = FUN_004535f0(&local_2a0,param_1 + 0x18,local_480);
          auVar6 = local_480;
          if (iVar7 < 0) {
            uVar10 = 0x80040200;
            if (DAT_04c71448 != 0) {
              FUN_00444bc0(&local_470,&DAT_04c713f8,1);
              lVar13 = FUN_004446b0(&local_470,"Failed to allocate type from builder",&DAT_0413df78)
              ;
              *(char **)(lVar13 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Xml/hkXmlReadFormat.cpp"
              ;
              *(undefined8 *)(lVar13 + 0x30) = 0x21e;
              FUN_00444c00(&local_470);
            }
          }
          else {
            uVar8 = *(uint *)(param_1 + 0x80);
            uVar3 = uVar8;
            if ((int)uVar8 <= iVar16 + 1) {
              uVar3 = iVar16 + 1;
            }
            if ((int)(*(uint *)(param_1 + 0x84) & 0x3fffffff) < (int)uVar3) {
              uVar10 = FUN_00426720(PTR_DAT_048607b8,uVar3,8,*(undefined8 *)(param_1 + 0x78));
              uVar8 = *(uint *)(param_1 + 0x80);
              *(undefined8 *)(param_1 + 0x78) = uVar10;
            }
            if ((int)uVar8 < (int)uVar3) {
              *(uint *)(param_1 + 0x80) = uVar3;
              memset((void *)(*(long *)(param_1 + 0x78) + (long)(int)uVar8 * 8),0,
                     (ulong)(uVar3 + ~uVar8) * 8 + 8);
            }
            else if ((int)uVar3 < (int)uVar8) {
              *(uint *)(param_1 + 0x80) = uVar3;
            }
            *(undefined1 (*) [8])
             (*(long *)(param_1 + 0x78) +
             (-(uVar9 >> 0x1f & 1) & 0xfffffff800000000 | (uVar9 & 0xffffffff) << 3)) = auVar6;
            FUN_004acdb0(param_1 + 0xe0,uVar9 & 0xffffffff,auVar6);
            FUN_004acf00(param_1 + 0xe0,auVar6,&local_3e0,*(long *)(param_1 + 0x78),
                         *(long *)(param_1 + 0x78) + (long)*(int *)(param_1 + 0x80) * 8);
            uVar10 = 0;
          }
          puVar4 = PTR_DAT_048607b8;
joined_r0x004a9418:
          local_2b0 = 0;
          if ((-1 < (int)local_2ac) && (local_2b0 = 0, local_2b8 != (undefined1 *)0x0)) {
            FUN_00421f90(puVar4,local_2b8,4,local_2ac & 0x3fffffff);
          }
          uVar3 = local_340._4_4_;
          local_2b8 = (undefined1 *)0x0;
          local_2ac = 0x80000000;
          local_340 = (ulong)local_340._4_4_ << 0x20;
          if ((-1 < (int)uVar3) && (local_348 != (undefined1 *)0x0)) {
            FUN_00421f90(puVar4,local_348,4,uVar3 & 0x3fffffff);
          }
          lVar13 = local_3d0;
          uVar3 = local_3d0._4_4_;
          local_348 = (undefined1 *)0x0;
          local_340 = CONCAT44(0x80000000,(uint)local_340);
          local_3d0 = (ulong)local_3d0._4_4_ << 0x20;
          if ((-1 < lVar13) && (local_3d8 != (undefined1 *)0x0)) {
            FUN_00421f90(puVar4,local_3d8,4,uVar3 & 0x3fffffff);
          }
          FUN_00451fa0(&local_2a0);
          return uVar10;
        }
        plVar1 = (long *)(param_1 + 0x158);
        uVar3 = (iVar16 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar16 * -0x61c8864f & 0xff00ffU) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
        lVar13 = param_1 + 8;
LAB_004a87b0:
        auVar17 = FUN_0049dac0(param_2);
        uVar11 = FUN_0043a700(auVar17._0_8_,auVar17._8_8_ - auVar17._0_8_,"parent");
        if ((uVar11 & 1) != 0) {
          local_470 = (char *)0x0;
          local_468 = (char *)0x0;
          iVar7 = FUN_0049da40(param_2,&DAT_040ae7f4,&local_470);
          if (-1 < iVar7) {
            if ((local_470 != local_468) && (*local_470 == '\"')) {
              local_470 = local_470 + 1;
              local_468 = local_468 + -1;
            }
            uVar11 = FUN_0043a780(local_470,(long)local_468 - (long)local_470,&DAT_040dd778);
            if ((uVar11 & 1) != 0) {
              iVar7 = FUN_0043a2d0(&DAT_040dd778);
              local_470 = local_470 + iVar7;
              uVar10 = FUN_0049db00(&local_470,local_480);
              if (-1 < (int)uVar10) {
                local_3e0 = CONCAT44(local_3e0._4_4_,local_480._0_4_);
                iVar7 = FUN_004a8280(uVar10,param_2,&DAT_040dd778);
                goto joined_r0x004a8ee8;
              }
            }
          }
LAB_004a9310:
          uVar10 = 0x80040200;
          goto joined_r0x004a9418;
        }
        auVar17 = FUN_0049dac0(param_2);
        uVar11 = FUN_0043a700(auVar17._0_8_,auVar17._8_8_ - auVar17._0_8_,"format");
        if ((uVar11 & 1) == 0) {
          auVar17 = FUN_0049dac0(param_2);
          uVar11 = FUN_0043a700(auVar17._0_8_,auVar17._8_8_ - auVar17._0_8_,&DAT_040d7f5b);
          if ((uVar11 & 1) == 0) {
            auVar17 = FUN_0049dac0(param_2);
            uVar11 = FUN_0043a700(auVar17._0_8_,auVar17._8_8_ - auVar17._0_8_,"flags");
            if ((uVar11 & 1) == 0) {
              auVar17 = FUN_0049dac0(param_2);
              uVar11 = FUN_0043a700(auVar17._0_8_,auVar17._8_8_ - auVar17._0_8_,"subtype");
              if ((uVar11 & 1) == 0) {
                auVar17 = FUN_0049dac0(param_2);
                uVar11 = FUN_0043a700(auVar17._0_8_,auVar17._8_8_ - auVar17._0_8_,"fields");
                if ((uVar11 & 1) == 0) {
                  auVar17 = FUN_0049dac0(param_2);
                  uVar11 = FUN_0043a700(auVar17._0_8_,auVar17._8_8_ - auVar17._0_8_,"version");
                  if ((uVar11 & 1) == 0) {
                    auVar17 = FUN_0049dac0(param_2);
                    uVar11 = FUN_0043a700(auVar17._0_8_,auVar17._8_8_ - auVar17._0_8_,"parameters");
                    if ((uVar11 & 1) != 0) {
                      uVar10 = FUN_0049dbd0(param_2,"count",local_490);
                      if (-1 < (int)uVar10) {
                        local_230 = local_230 | 0x8000;
                        local_1b0 = 0;
                        while (uVar10 = FUN_004a8280(uVar10,param_2,"parameters"), -1 < (int)uVar10)
                        {
                          auVar17 = FUN_0049dac0(param_2);
                          uVar11 = FUN_0043a700(auVar17._0_8_,auVar17._8_8_ - auVar17._0_8_,
                                                "typeparam");
                          if ((uVar11 & 1) == 0) {
                            auVar17 = FUN_0049dac0(param_2);
                            uVar11 = FUN_0043a700(auVar17._0_8_,auVar17._8_8_ - auVar17._0_8_,
                                                  "valueparam");
                            if (((uVar11 & 1) == 0) ||
                               (iVar7 = FUN_0049dbd0(param_2,"value",&local_470), iVar7 < 0))
                            goto LAB_004a9310;
                            uVar10 = FUN_00452650(&local_2a0,(long)(int)local_470,&DAT_040e7ed4);
                          }
                          else {
                            local_470 = (char *)0x0;
                            local_468 = (char *)0x0;
                            iVar7 = FUN_0049da40(param_2,&DAT_040ae7f4,&local_470);
                            if (iVar7 < 0) goto LAB_004a9310;
                            if ((local_470 != local_468) && (*local_470 == '\"')) {
                              local_470 = local_470 + 1;
                              local_468 = local_468 + -1;
                            }
                            uVar11 = FUN_0043a780(local_470,(long)local_468 - (long)local_470,
                                                  &DAT_040dd778);
                            if ((uVar11 & 1) == 0) goto LAB_004a9310;
                            iVar7 = FUN_0043a2d0(&DAT_040dd778);
                            local_470 = local_470 + iVar7;
                            iVar7 = FUN_0049db00(&local_470,local_480);
                            if (iVar7 < 0) goto LAB_004a9310;
                            uVar5 = local_480._0_4_;
                            uVar10 = FUN_004524d0(&local_2a0,0,&DAT_0406073b);
                            if ((uint)local_340 == (local_340._4_4_ & 0x3fffffff)) {
                              uVar10 = FUN_00426990(puVar4,&local_348,4);
                            }
                            *(undefined4 *)(local_348 + (long)(int)(uint)local_340 * 4) = uVar5;
                            local_340._0_4_ = (uint)local_340 + 1;
                          }
                        }
                        goto LAB_004a90c0;
                      }
                      goto LAB_004a9310;
                    }
                    uVar10 = 0x80040200;
                    if (1 < DAT_04c71448) {
                      FUN_00444bc0(&local_470,&DAT_04c713f8,2);
                      _local_480 = FUN_0049dac0(param_2);
                      lVar13 = FUN_004446b0(&local_470,"Unknown element {}",&DAT_04861730,local_480)
                      ;
                      *(char **)(lVar13 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Xml/hkXmlReadFormat.cpp"
                      ;
                      *(undefined8 *)(lVar13 + 0x30) = 0x216;
                      FUN_00444c00(&local_470);
                      goto joined_r0x004a9418;
                    }
                  }
                  else {
                    uVar10 = FUN_0049dbd0(param_2,"value",&local_470);
                    if (-1 < (int)uVar10) {
                      local_208 = (long)(int)local_470;
                      local_230 = local_230 | 0x10;
                      iVar7 = FUN_004a8280(uVar10,param_2,&DAT_040dd778);
                      goto joined_r0x004a8ee8;
                    }
                  }
                }
                else {
                  uVar10 = FUN_0049dbd0(param_2,"count",auStack_484);
                  if (-1 < (int)uVar10) {
                    while (uVar10 = FUN_004a8280(uVar10,param_2,"fields"), -1 < (int)uVar10) {
                      FUN_004225b0(&local_470);
                      local_480 = (undefined1  [8])0x0;
                      pcStack_478 = (char *)0x0;
                      iVar7 = FUN_0049da40(param_2,&DAT_040d7f5b,local_480);
                      if ((iVar7 < 0) || (iVar7 = FUN_0049dd30(local_480,&local_470), iVar7 < 0)) {
LAB_004a9300:
                        FUN_00422550(&local_470);
                        goto LAB_004a9310;
                      }
                      uVar11 = FUN_00422c50(&local_470,&DAT_040c7c06);
                      if ((uVar11 & 1) != 0) {
                        FUN_004236e0(&local_470,1);
                        FUN_00423740(&local_470,1);
                      }
                      local_480 = (undefined1  [8])0x0;
                      pcStack_478 = (char *)0x0;
                      iVar7 = FUN_0049da40(param_2,"typeid",local_480);
                      if (iVar7 < 0) goto LAB_004a9300;
                      if ((local_480 != (undefined1  [8])pcStack_478) &&
                         (*(char *)local_480 == '\"')) {
                        local_480 = (undefined1  [8])((long)local_480 + 1);
                        pcStack_478 = pcStack_478 + -1;
                      }
                      uVar11 = FUN_0043a780(local_480,(long)pcStack_478 - (long)local_480,
                                            &DAT_040dd778);
                      if ((uVar11 & 1) == 0) goto LAB_004a9300;
                      iVar7 = FUN_0043a2d0(&DAT_040dd778);
                      local_480 = (undefined1  [8])((long)local_480 + (long)iVar7);
                      iVar7 = FUN_0049db00(local_480,local_490);
                      uVar5 = local_490[0];
                      if ((iVar7 < 0) ||
                         (iVar7 = FUN_0049dbd0(param_2,"flags",local_488), iVar7 < 0))
                      goto LAB_004a9300;
                      uVar10 = FUN_004adce0(local_470,(int)local_468 + -1);
                      FUN_00453ba0(&local_2a0,uVar10,0,local_488[0],0);
                      if ((uint)local_3d0 == (local_3d0._4_4_ & 0x3fffffff)) {
                        FUN_00426990(puVar4,&local_3d8,4);
                      }
                      *(undefined4 *)(local_3d8 + (long)(int)(uint)local_3d0 * 4) = uVar5;
                      local_3d0 = CONCAT44(local_3d0._4_4_,(uint)local_3d0 + 1);
                      uVar10 = FUN_00422550(&local_470);
                    }
LAB_004a90c0:
                    iVar7 = FUN_004a8280(uVar10,param_2,&DAT_040dd778);
                    goto joined_r0x004a8ee8;
                  }
                }
              }
              else {
                local_470 = (char *)0x0;
                local_468 = (char *)0x0;
                iVar7 = FUN_0049da40(param_2,&DAT_040ae7f4,&local_470);
                if (-1 < iVar7) {
                  if ((local_470 != local_468) && (*local_470 == '\"')) {
                    local_470 = local_470 + 1;
                    local_468 = local_468 + -1;
                  }
                  uVar11 = FUN_0043a780(local_470,(long)local_468 - (long)local_470,&DAT_040dd778);
                  if ((uVar11 & 1) != 0) {
                    iVar7 = FUN_0043a2d0(&DAT_040dd778);
                    local_470 = local_470 + iVar7;
                    uVar10 = FUN_0049db00(&local_470,local_480);
                    if (-1 < (int)uVar10) {
                      local_230 = local_230 | 2;
                      uVar5 = local_480._0_4_;
                      local_220 = 0;
                      if (((local_6c[0] & 0xf) == 8) || ((local_6c[0] & 0xf) == 6)) {
                        local_3e0 = CONCAT44(local_480._0_4_,(undefined4)local_3e0);
                        iVar7 = *(int *)(param_1 + 0x160);
                        if (iVar7 <= *(int *)(param_1 + 0x168) * 2) {
                          uVar10 = FUN_0047d170(plVar1,iVar7 << 1);
                          iVar7 = *(int *)(param_1 + 0x160);
                        }
                        uVar8 = (uVar5 * -0x61c8864f & 0xff00ff00U) >> 8 |
                                (uVar5 * -0x61c8864f & 0xff00ffU) << 8;
                        uVar8 = iVar7 - 1U & (uVar8 >> 0x10 | uVar8 << 0x10);
                        lVar14 = *plVar1;
                        piVar15 = (int *)(lVar14 + (long)(int)uVar8 * 4);
                        if (*piVar15 == -1) {
                          iVar7 = 1;
                        }
                        else if (*piVar15 == uVar5) {
                          iVar7 = 0;
                        }
                        else {
                          do {
                            uVar8 = uVar8 + 1 & iVar7 - 1U;
                            iVar2 = *(int *)(lVar14 + (long)(int)uVar8 * 4);
                            if (iVar2 == -1) {
                              iVar7 = 1;
                              goto LAB_004a90a8;
                            }
                          } while (iVar2 != uVar5);
                          iVar7 = 0;
LAB_004a90a8:
                          piVar15 = (int *)(lVar14 + (long)(int)uVar8 * 4);
                        }
                        *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + iVar7;
                        *piVar15 = uVar5;
                        goto LAB_004a90c0;
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar10 = FUN_0049dbd0(param_2,"value",&local_470);
              if (-1 < (int)uVar10) {
                local_180 = (long)(int)local_470;
                local_230 = local_230 | 0x200000;
                iVar7 = FUN_004a8280(uVar10,param_2,&DAT_040dd778);
                goto joined_r0x004a8ee8;
              }
            }
            goto LAB_004a9310;
          }
          FUN_004225b0(&local_470);
          local_480 = (undefined1  [8])0x0;
          pcStack_478 = (char *)0x0;
          iVar7 = FUN_0049da40(param_2,"value",local_480);
          if ((iVar7 < 0) || (iVar7 = FUN_0049dd30(local_480,&local_470), iVar7 < 0)) {
            uVar10 = 0x80040200;
            FUN_00422550(&local_470);
            goto joined_r0x004a9418;
          }
          uVar11 = FUN_00422c50(&local_470,&DAT_040c7c06);
          if ((uVar11 & 1) != 0) {
            FUN_004236e0(&local_470,1);
            FUN_00423740(&local_470,1);
          }
          local_210 = FUN_004adce0(local_470,(int)local_468 + -1);
          local_230 = local_230 | 8;
          uVar10 = FUN_00422550(&local_470);
          iVar7 = FUN_004a8280(uVar10,param_2,&DAT_040dd778);
        }
        else {
          iVar7 = FUN_0049dbd0(param_2,"value",local_6c);
          if (iVar7 < 0) goto LAB_004a9310;
          local_188 = 0;
          local_228 = (long)(int)local_6c[0];
          uVar11 = local_230 | 0x180001;
          local_190 = lVar13;
          switch(local_6c[0] & 0xf) {
          case 0:
            uVar10 = 0;
            uVar8 = 0;
            local_218 = &DAT_04c713d8;
            local_230 = uVar11;
            break;
          case 1:
            uVar10 = 0;
            uVar8 = 0;
            local_218 = &DAT_04c713e8;
            local_230 = uVar11;
            break;
          case 2:
            local_218 = &DAT_04c6fbb8;
            uVar10 = 1;
            uVar8 = 1;
            local_230 = uVar11;
            break;
          case 3:
            uVar10 = 4;
            uVar8 = 4;
            local_218 = (undefined8 *)(param_1 + 0x188);
            local_230 = uVar11;
            break;
          case 4:
          case 5:
            local_230 = uVar11;
            uVar10 = (**(code **)(*DAT_04c6f6e0 + 0x60))();
            puVar12 = (undefined8 *)FUN_00428370();
            uVar8 = FUN_00426fc0(uVar10);
            uVar10 = FUN_00427030(uVar10);
            local_218 = puVar12;
            break;
          case 6:
            uVar10 = 4;
            uVar8 = 4;
            local_218 = (undefined8 *)(param_1 + 0xb0);
            local_230 = uVar11;
            break;
          case 7:
            local_230 = local_230 | 0x980001;
            local_170 = 0;
            iVar7 = *(int *)(param_1 + 0x160);
            if (iVar7 <= *(int *)(param_1 + 0x168) * 2) {
              FUN_0047d170(plVar1,iVar7 << 1);
              iVar7 = *(int *)(param_1 + 0x160);
            }
            uVar8 = iVar7 - 1U & uVar3;
            lVar14 = *plVar1;
            piVar15 = (int *)(lVar14 + (long)(int)uVar8 * 4);
            if (*piVar15 == -1) {
              iVar7 = 1;
            }
            else if (*piVar15 == iVar16) {
              iVar7 = 0;
            }
            else {
              do {
                uVar8 = uVar8 + 1 & iVar7 - 1U;
                iVar2 = *(int *)(lVar14 + (long)(int)uVar8 * 4);
                if (iVar2 == -1) {
                  iVar7 = 1;
                  goto LAB_004a90d8;
                }
              } while (iVar2 != iVar16);
              iVar7 = 0;
LAB_004a90d8:
              piVar15 = (int *)(lVar14 + (long)(int)uVar8 * 4);
            }
            *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + iVar7;
            *piVar15 = iVar16;
            local_218 = &DAT_04c70240;
LAB_004a9120:
            uVar10 = 0;
            uVar8 = 0;
            break;
          case 8:
            if (0xff < (int)local_6c[0]) {
              iVar7 = *(int *)(param_1 + 0x160);
              local_230 = uVar11;
              if (iVar7 <= *(int *)(param_1 + 0x168) * 2) {
                FUN_0047d170(plVar1,iVar7 << 1);
                iVar7 = *(int *)(param_1 + 0x160);
              }
              uVar8 = iVar7 - 1U & uVar3;
              lVar14 = *plVar1;
              piVar15 = (int *)(lVar14 + (long)(int)uVar8 * 4);
              if (*piVar15 == -1) {
                iVar7 = 1;
              }
              else if (*piVar15 == iVar16) {
                iVar7 = 0;
              }
              else {
                do {
                  uVar8 = uVar8 + 1 & iVar7 - 1U;
                  iVar2 = *(int *)(lVar14 + (long)(int)uVar8 * 4);
                  if (iVar2 == -1) {
                    iVar7 = 1;
                    goto LAB_004a9100;
                  }
                } while (iVar2 != iVar16);
                iVar7 = 0;
LAB_004a9100:
                piVar15 = (int *)(lVar14 + (long)(int)uVar8 * 4);
              }
              *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + iVar7;
              *piVar15 = iVar16;
              local_218 = &DAT_04c6fb68;
              goto LAB_004a9120;
            }
            uVar10 = 4;
            uVar8 = 4;
            local_218 = (undefined8 *)(param_1 + 0x170);
            local_230 = uVar11;
            break;
          default:
            uVar10 = 0;
            uVar8 = 0;
            local_218 = (undefined8 *)0x0;
            local_230 = uVar11;
          }
          local_188 = (ulong)(uVar8 & 0xffff | ((uint)uVar10 & 0xfff) << 0x10);
          local_230 = local_230 | 0x100004;
          iVar7 = FUN_004a8280(uVar10,param_2,&DAT_040dd778);
        }
joined_r0x004a8ee8:
        if (iVar7 < 0) goto LAB_004a916c;
        goto LAB_004a87b0;
      }
    }
  }
  return 0x80040200;
}

