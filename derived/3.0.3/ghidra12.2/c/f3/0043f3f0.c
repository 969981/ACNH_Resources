
/* WARNING: Type propagation algorithm not settling */

void FUN_0043f3f0(long *param_1,long *param_2,byte *param_3,byte *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  byte bVar23;
  undefined8 uVar24;
  char *pcVar26;
  char *pcVar25;
  long *plVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  byte *local_1b8;
  byte *local_1b0;
  byte *local_1a8;
  byte *local_1a0;
  byte *pbStack_198;
  undefined8 local_190;
  byte *local_188;
  undefined8 local_180;
  ulong local_178;
  long local_170;
  byte *local_110;
  byte *pbStack_108;
  byte *local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ushort local_6c [6];
  
  pbStack_108 = param_4;
  if ((param_3 == param_4) || (*param_3 != 0x21)) {
    local_110 = param_3;
    FUN_00427bc0(&local_100,param_1[1],PTR_DAT_04bd7430);
    pbVar2 = local_100;
    if ((local_f0 & 1) != 0) {
      FUN_0043dd50(local_f0 & 0xfffffffffffffffe);
    }
    if ((pbVar2 != (byte *)0x0) && (lVar13 = FUN_0044c850(pbVar2,param_1,param_2), lVar13 != 0)) {
      return;
    }
    uVar8 = FUN_004274f0(param_1[1]);
    if ((uVar8 >> 3 & 1) == 0) {
      FUN_00427bc0(&local_100,param_1[1],PTR_DAT_04bd7460);
      pbVar2 = local_100;
      if ((local_f0 & 1) != 0) {
        FUN_0043dd50(local_f0 & 0xfffffffffffffffe);
      }
      if (pbVar2 != (byte *)0x0) {
        (**(code **)pbVar2)(param_1,param_2,&local_110);
        return;
      }
    }
  }
  else {
    local_110 = param_3 + 1;
  }
  if (param_1[1] == 0) {
    uVar14 = 0;
    uVar12 = 0;
LAB_0043f774:
    uVar15 = 0;
    uVar28 = 0;
LAB_0043f778:
    uVar19 = 0;
    uVar18 = 0;
LAB_0043f77c:
    uVar20 = 0;
LAB_0043f780:
    if (param_1[1] != 0) {
      uVar16 = FUN_00428440();
      if ((uVar16 & 0x1f) == 0) {
        lVar13 = *param_1;
        uVar16 = param_1[2];
        if ((uVar16 & 1) != 0) {
          FUN_0043dd30(uVar16 & 0xfffffffffffffffe);
          uVar16 = param_1[2];
        }
        if (lVar13 == 0) {
          lVar13 = param_1[1];
          goto joined_r0x0043f91c;
        }
        FUN_004225f0(param_2,&DAT_040ed0d7,0xffffffff);
      }
      else {
        uVar16 = 0;
        lVar13 = param_1[1];
joined_r0x0043f91c:
        if ((lVar13 != 0) && (uVar17 = FUN_00428440(), (uVar17 & 0x1f) == 1)) {
          lVar13 = *param_1;
          uVar17 = param_1[2];
          if ((uVar17 & 1) != 0) {
            FUN_0043dd30(uVar17 & 0xfffffffffffffffe);
            uVar17 = param_1[2];
          }
          if (lVar13 != 0) {
            FUN_004225f0(param_2,"incomplete",0xffffffff);
          }
          if ((uVar17 & 1) != 0) {
            FUN_0043dd50(uVar17 & 0xfffffffffffffffe);
          }
        }
      }
      if ((uVar16 & 1) != 0) {
        FUN_0043dd50(uVar16 & 0xfffffffffffffffe);
      }
    }
joined_r0x0044038c:
    if ((uVar20 & 1) != 0) {
      FUN_0043dd50(uVar20 & 0xfffffffffffffffe);
    }
    if ((uVar19 & 1) != 0) {
      FUN_0043dd50(uVar19 & 0xfffffffffffffffe);
    }
joined_r0x0043f8cc:
    if ((uVar18 & 1) != 0) {
      FUN_0043dd50(uVar18 & 0xfffffffffffffffe);
    }
joined_r0x0043f88c:
    if ((uVar15 & 1) != 0) {
      FUN_0043dd50(uVar15 & 0xfffffffffffffffe);
    }
joined_r0x0043f890:
    if ((uVar28 & 1) != 0) {
      FUN_0043dd50(uVar28 & 0xfffffffffffffffe);
    }
  }
  else {
    uVar12 = FUN_00428440();
    if ((uVar12 & 0x1f) == 4) {
      lVar13 = *param_1;
      lVar3 = param_1[1];
      uVar12 = param_1[2];
      if ((uVar12 & 1) != 0) {
        FUN_0043dd30(uVar12 & 0xfffffffffffffffe);
        uVar12 = param_1[2];
      }
      if (lVar13 != 0) {
        local_100 = (byte *)0x0;
        local_f8 = local_f8 & 0xffffffffffffff00;
        (**(code **)(*(long *)(uVar12 & 0xfffffffffffffffe) + 0x38))
                  ((long *)(uVar12 & 0xfffffffffffffffe),lVar13,lVar3,&local_100);
        pbVar6 = local_100;
        cVar7 = (char)local_f8;
        FUN_004225b0(&local_1a0);
        pbVar2 = local_110;
        bVar23 = 100;
        if (cVar7 == '\0') {
          bVar23 = 0x75;
        }
        local_6c[0] = 0x3f;
        if (local_110 == pbStack_108) {
          local_6c[0] = (ushort)bVar23;
LAB_0043fde0:
          FUN_004225f0(&local_1a0,&DAT_0406ae6e,0xffffffff);
        }
        else {
          bVar4 = *local_110;
          uVar8 = bVar4 - 0x44;
          iVar9 = (int)local_110;
          iVar11 = (int)pbStack_108;
          if (uVar8 < 0x35) {
            if ((1L << ((ulong)uVar8 & 0x3f) & 0x2002100020021U) == 0) {
              if ((1L << ((ulong)uVar8 & 0x3f) & 0x10000000100000U) == 0) goto LAB_0043fd18;
              local_6c[0] = (ushort)bVar4;
              if (cVar7 == '\0') goto LAB_0043fd7c;
              if (DAT_04c6f208 != 0) {
                FUN_00444bc0(&local_100,&DAT_04c6f1b8,1);
                local_1b8 = (byte *)-(long)pbVar6;
                lVar13 = FUN_004446b0(&local_100,
                                      "Cannot format negative integer \'{}\' with hexadecimal specifier \'{}\'. Falling back to decimal \'D\'."
                                      ,&DAT_04860f78,&local_1b8,local_6c);
                uVar24 = 0x8c;
                goto LAB_0043fd6c;
              }
              goto LAB_0043fd78;
            }
            local_6c[0] = (ushort)bVar23;
            if ((bVar4 | 0x20) == 100) goto LAB_0043fd7c;
            local_1b8 = (byte *)CONCAT62(local_1b8._2_6_,0x20);
            local_1b8 = (byte *)CONCAT71(local_1b8._1_7_,bVar4);
            if (DAT_04c6f208 < 2) goto LAB_0043fd7c;
            FUN_00444bc0(&local_100,&DAT_04c6f1b8,2);
            lVar13 = FUN_004446b0(&local_100,
                                  "Deprecated integer extra format specififer \'{}\'; use \'D\' (decimal) instead."
                                  ,&DAT_04860f48,&local_1b8);
            *(char **)(lVar13 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
            ;
            *(undefined8 *)(lVar13 + 0x30) = 0x84;
            FUN_00444c00(&local_100);
            iVar11 = iVar11 - iVar9;
            iVar9 = iVar11 + -1;
            if (iVar9 == 0 || iVar11 < 1) goto LAB_0043fde0;
          }
          else {
LAB_0043fd18:
            local_1b8 = (byte *)CONCAT62(local_1b8._2_6_,0x20);
            local_1b8 = (byte *)CONCAT71(local_1b8._1_7_,bVar4);
            if (DAT_04c6f208 != 0) {
              FUN_00444bc0(&local_100,&DAT_04c6f1b8,1);
              lVar13 = FUN_004446b0(&local_100,
                                    "Invalid integer extra format specififer \'{}\'. Expected a character among [DdXx] or the deprecated [IiUu]."
                                    ,&DAT_04860f48,&local_1b8);
              uVar24 = 0x93;
LAB_0043fd6c:
              *(char **)(lVar13 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
              ;
              *(undefined8 *)(lVar13 + 0x30) = uVar24;
              FUN_00444c00(&local_100);
            }
LAB_0043fd78:
            local_6c[0] = CONCAT11(local_6c[0]._1_1_,bVar23);
LAB_0043fd7c:
            iVar11 = iVar11 - iVar9;
            iVar9 = iVar11 + -1;
            if (iVar9 == 0 || iVar11 < 1) goto LAB_0043fde0;
          }
          FUN_00422760(&local_100,pbVar2 + 1,iVar9);
          iVar11 = FUN_0043a2f0(local_100,10);
          FUN_00422550(&local_100);
          FUN_004225f0(&local_1a0,&DAT_0406ae6e,0xffffffff);
          if (0 < iVar11) {
            FUN_00423010(&local_1a0,&DAT_040ae943,iVar11);
          }
        }
        FUN_004231c0(&local_1a0,&DAT_04094e6d);
        FUN_004231c0(&local_1a0,local_6c);
        pbVar2 = (byte *)-(long)pbVar6;
        if (cVar7 == '\0') {
          pbVar2 = pbVar6;
        }
        FUN_00422d90(param_2,local_1a0,pbVar2);
        FUN_00422550(&local_1a0);
        goto joined_r0x0043f8fc;
      }
    }
    else {
      uVar12 = 0;
    }
    if (param_1[1] == 0) {
      uVar14 = 0;
      goto LAB_0043f774;
    }
    uVar14 = FUN_00428440();
    if ((uVar14 & 0x1f) != 3) {
      uVar14 = 0;
LAB_0043f6a0:
      if (param_1[1] == 0) goto LAB_0043f774;
      uVar15 = FUN_00428440();
      if ((uVar15 & 0x1f) != 5) {
        uVar28 = 0;
LAB_0043f928:
        if (param_1[1] == 0) {
          uVar15 = 0;
          goto LAB_0043f778;
        }
        uVar15 = FUN_00428440();
        if ((uVar15 & 0x1f) != 8) {
          uVar15 = 0;
LAB_0043faec:
          if (param_1[1] == 0) goto LAB_0043f778;
          uVar18 = FUN_00428440();
          if ((uVar18 & 0x1f) != 7) {
            uVar18 = 0;
LAB_0043fe4c:
            if (param_1[1] == 0) {
              uVar19 = 0;
              goto LAB_0043f77c;
            }
            uVar19 = FUN_00428440();
            if ((uVar19 & 0x1f) != 6) {
              uVar19 = 0;
LAB_0043ff84:
              if (param_1[1] == 0) goto LAB_0043f77c;
              auVar29 = FUN_00428440();
              if ((auVar29._0_8_ & 0x1f) != 2) goto LAB_0043f77c;
              lVar13 = *param_1;
              lVar3 = param_1[1];
              uVar20 = param_1[2];
              if ((uVar20 & 1) != 0) {
                FUN_0043dd30(uVar20 & 0xfffffffffffffffe,auVar29._8_8_,lVar3);
                uVar20 = param_1[2];
              }
              if (lVar13 != 0) {
                local_100 = (byte *)((ulong)local_100 & 0xffffffffffffff00);
                (**(code **)(*(long *)(uVar20 & 0xfffffffffffffffe) + 0x38))
                          ((long *)(uVar20 & 0xfffffffffffffffe),lVar13,lVar3,&local_100);
                pcVar22 = "false";
                if ((char)local_100 != '\0') {
                  pcVar22 = "true";
                }
                FUN_004225f0(param_2,pcVar22,0xffffffff);
                goto joined_r0x0044038c;
              }
              goto LAB_0043f780;
            }
            lVar13 = *param_1;
            lVar3 = param_1[1];
            uVar19 = param_1[2];
            if ((uVar19 & 1) != 0) {
              FUN_0043dd30(uVar19 & 0xfffffffffffffffe);
              uVar19 = param_1[2];
            }
            if (lVar13 == 0) goto LAB_0043ff84;
            local_f8 = 0;
            local_f0 = 0;
            local_100 = (byte *)0x0;
            (**(code **)(*(long *)(uVar19 & 0xfffffffffffffffe) + 0x50))
                      ((long *)(uVar19 & 0xfffffffffffffffe),lVar13,lVar3,&local_100);
            if ((((local_100 == (byte *)0x0) || (local_f8 == 0)) ||
                (uVar20 = FUN_0044f8a0(local_f8,&DAT_04c16210), (uVar20 & 1) == 0)) ||
               (local_100 == (byte *)0x0)) {
              if ((local_110 == pbStack_108) || (*local_110 != 0x2a)) {
                FUN_00422d90(param_2,&DAT_0407aa25,local_100);
                uVar20 = local_f0;
              }
              else {
                FUN_0043f3f0(&local_100,param_2,local_110 + 1);
                uVar20 = local_f0;
              }
            }
            else {
              FUN_00427570(local_100,param_2,0,0);
              uVar20 = local_f0;
            }
            goto joined_r0x0044038c;
          }
          lVar13 = *param_1;
          lVar3 = param_1[1];
          uVar18 = param_1[2];
          if ((uVar18 & 1) != 0) {
            FUN_0043dd30(uVar18 & 0xfffffffffffffffe);
            uVar18 = param_1[2];
          }
          if (lVar13 == 0) goto LAB_0043fe4c;
          uVar24 = FUN_00427270(lVar3);
          FUN_00423560(param_2,uVar24,&DAT_040c3382,0,0,0,0);
          (**(code **)(*(long *)(uVar18 & 0xfffffffffffffffe) + 0x38))
                    (&local_1a0,(long *)(uVar18 & 0xfffffffffffffffe),lVar13,lVar3);
          if (local_170 != -1) {
            FUN_00423880(param_2,&DAT_0407ebb1,0xffffffff);
            FUN_00429460(&local_100,local_180);
            local_1b8 = local_100;
            uVar24 = FUN_00427b40(&local_1b8);
            FUN_00423880(param_2,uVar24,0xffffffff);
            FUN_00423880(param_2,&DAT_040c2bc3,0xffffffff);
            FUN_004225b0(&local_100);
            FUN_0043f3f0(&local_188,&local_100,0,0);
            FUN_004231c0(param_2,local_100);
            FUN_00422550(&local_100);
            (**(code **)(*(long *)((ulong)local_190 & 0xfffffffffffffffe) + 0x40))
                      ((long *)((ulong)local_190 & 0xfffffffffffffffe),&local_1a0);
            while (local_170 != -1) {
              FUN_00423880(param_2,&DAT_0407494a,0xffffffff);
              FUN_00429460(&local_100,local_180);
              local_1b8 = local_100;
              uVar24 = FUN_00427b40(&local_1b8);
              FUN_00423880(param_2,uVar24,0xffffffff);
              FUN_00423880(param_2,&DAT_040c2bc3,0xffffffff);
              FUN_004225b0(&local_100);
              FUN_0043f3f0(&local_188,&local_100,0,0);
              FUN_004231c0(param_2,local_100);
              FUN_00422550(&local_100);
              (**(code **)(*(long *)((ulong)local_190 & 0xfffffffffffffffe) + 0x40))
                        ((long *)((ulong)local_190 & 0xfffffffffffffffe),&local_1a0);
            }
          }
          if ((local_178 & 1) != 0) {
            FUN_0043dd50(local_178 & 0xfffffffffffffffe);
          }
          if (((ulong)local_190 & 1) != 0) {
            FUN_0043dd50((ulong)local_190 & 0xfffffffffffffffe);
          }
          FUN_00423880(param_2,&DAT_040f2a3e,0xffffffff);
          goto joined_r0x0043f8cc;
        }
        lVar13 = *param_1;
        lVar3 = param_1[1];
        uVar15 = param_1[2];
        if ((uVar15 & 1) != 0) {
          FUN_0043dd30(uVar15 & 0xfffffffffffffffe);
          uVar15 = param_1[2];
        }
        if (lVar13 == 0) goto LAB_0043faec;
        FUN_004225f0(param_2,&DAT_0408ab13,0xffffffff);
        local_f0 = 0;
        local_e8 = 0;
        plVar27 = (long *)(uVar15 & 0xfffffffffffffffe);
        local_100 = (byte *)0x0;
        local_f8 = 0;
        (**(code **)(*plVar27 + 0x50))(plVar27,lVar13,lVar3,&local_100);
        iVar11 = (int)local_f0;
        if ((local_e8 & 1) != 0) {
          FUN_0043dd50(local_e8 & 0xfffffffffffffffe);
        }
        if (local_110 == pbStack_108) {
          iVar9 = 0;
          if (0 < iVar11) goto LAB_0043fef4;
        }
        else {
          pbStack_198 = (byte *)FUN_00429910(&local_110,0x2c,0);
          if (pbStack_198 == (byte *)0x0) {
            pbStack_198 = pbStack_108;
            local_190 = (byte *)0x0;
            local_188 = (byte *)0x0;
            if (local_110 != pbStack_108) goto LAB_0043f9ec;
LAB_0044018c:
            local_1a0 = local_110;
            iVar9 = 0;
            if (local_190 != local_188) {
LAB_0043fa28:
              FUN_00422780(&local_100,&local_190);
              iVar10 = FUN_0043a2f0(local_100,10);
              iVar5 = iVar11;
              if (iVar10 + iVar9 <= iVar11) {
                iVar5 = iVar10 + iVar9;
              }
              iVar11 = iVar9;
              if (-1 < iVar10) {
                iVar11 = iVar5;
              }
              FUN_00422550(&local_100);
            }
          }
          else {
            local_190 = pbStack_198 + 1;
            local_188 = pbStack_108;
            if (local_110 == pbStack_198) goto LAB_0044018c;
LAB_0043f9ec:
            local_1a0 = local_110;
            FUN_00422780(&local_100,&local_1a0);
            iVar10 = FUN_0043a2f0(local_100,10);
            iVar5 = iVar11;
            if (iVar10 <= iVar11) {
              iVar5 = iVar10;
            }
            iVar9 = 0;
            if (-1 < iVar10) {
              iVar9 = iVar5;
            }
            FUN_00422550(&local_100);
            if (local_190 != local_188) goto LAB_0043fa28;
          }
          if (iVar9 < iVar11) {
LAB_0043fef4:
            FUN_00423880(param_2,&DAT_0407ebb1,0xffffffff);
            FUN_004225b0(&local_100);
            local_190 = (byte *)0x0;
            local_188 = (byte *)0x0;
            local_1a0 = (byte *)0x0;
            pbStack_198 = (byte *)0x0;
            (**(code **)(*plVar27 + 0x50))(plVar27,lVar13,lVar3,&local_1a0);
            if ((iVar9 < 0) || ((int)local_190 <= iVar9)) {
              local_1b0 = (byte *)0x0;
              local_1a8 = (byte *)0x0;
              local_1b8 = (byte *)0x0;
            }
            else {
              local_1b8 = local_1a0 + (long)local_190._4_4_ * (long)iVar9;
              local_1b0 = pbStack_198;
              local_1a8 = local_188;
              if (((ulong)local_188 & 1) != 0) {
                FUN_0043dd30((ulong)local_188 & 0xfffffffffffffffe);
              }
            }
            if (((ulong)local_188 & 1) != 0) {
              FUN_0043dd50((ulong)local_188 & 0xfffffffffffffffe);
            }
            FUN_0043f3f0(&local_1b8,&local_100,0,0);
            if (((ulong)local_1a8 & 1) != 0) {
              FUN_0043dd50((ulong)local_1a8 & 0xfffffffffffffffe);
            }
            FUN_004231c0(param_2,local_100);
            FUN_00422550(&local_100);
            while (iVar9 = iVar9 + 1, iVar9 != iVar11) {
              FUN_00423880(param_2,&DAT_0407494a,0xffffffff);
              FUN_004225b0(&local_100);
              local_190 = (byte *)0x0;
              local_188 = (byte *)0x0;
              local_1a0 = (byte *)0x0;
              pbStack_198 = (byte *)0x0;
              (**(code **)(*plVar27 + 0x50))(plVar27,lVar13,lVar3,&local_1a0);
              if ((iVar9 < 0) || ((int)local_190 <= iVar9)) {
                local_1b0 = (byte *)0x0;
                local_1a8 = (byte *)0x0;
                local_1b8 = (byte *)0x0;
              }
              else {
                local_1b8 = local_1a0 + (long)local_190._4_4_ * (long)iVar9;
                local_1b0 = pbStack_198;
                local_1a8 = local_188;
                if (((ulong)local_188 & 1) != 0) {
                  FUN_0043dd30((ulong)local_188 & 0xfffffffffffffffe);
                }
              }
              if (((ulong)local_188 & 1) != 0) {
                FUN_0043dd50((ulong)local_188 & 0xfffffffffffffffe);
              }
              FUN_0043f3f0(&local_1b8,&local_100,0,0);
              if (((ulong)local_1a8 & 1) != 0) {
                FUN_0043dd50((ulong)local_1a8 & 0xfffffffffffffffe);
              }
              FUN_004231c0(param_2,local_100);
              FUN_00422550(&local_100);
            }
          }
        }
        FUN_00423880(param_2,&DAT_0406ae6b,0xffffffff);
        goto joined_r0x0043f88c;
      }
      lVar13 = *param_1;
      lVar3 = param_1[1];
      uVar28 = param_1[2];
      if ((uVar28 & 1) != 0) {
        FUN_0043dd30(uVar28 & 0xfffffffffffffffe);
        uVar28 = param_1[2];
      }
      if (lVar13 == 0) goto LAB_0043f928;
      FUN_004225b0(&local_1a0);
      if ((uVar28 & 1) != 0) {
        FUN_0043dd30(uVar28 & 0xfffffffffffffffe);
      }
      pbVar6 = pbStack_108;
      pbVar2 = local_110;
      iVar9 = FUN_00426fc0(lVar3);
      iVar11 = 9;
      if (iVar9 != 4) {
        iVar11 = 0x11;
      }
      local_1b8 = (byte *)CONCAT62(local_1b8._2_6_,0x3f);
      if (pbVar2 == pbVar6) {
        local_1b8 = (byte *)CONCAT71(local_1b8._1_7_,0x67);
LAB_00440250:
        FUN_004225f0(&local_1a0,&DAT_0406ae6e,0xffffffff);
LAB_00440264:
        FUN_00423010(&local_1a0,&DAT_040b3e71,iVar11);
      }
      else {
        bVar23 = *pbVar2;
        uVar8 = bVar23 - 0x45;
        iVar9 = (int)pbVar6;
        if (uVar8 < 0x23) {
          if ((1L << ((ulong)uVar8 & 0x3f) & 0x500000005U) != 0) goto LAB_00440200;
          if ((1L << ((ulong)uVar8 & 0x3f) & 0x200000002U) == 0) goto LAB_0044019c;
          local_1b8 = (byte *)CONCAT71(local_1b8._1_7_,0x66);
          iVar9 = iVar9 - (int)pbVar2;
          iVar5 = iVar9 + -1;
          if (iVar5 == 0 || iVar9 < 1) goto LAB_00440250;
        }
        else {
LAB_0044019c:
          local_6c[0] = (ushort)bVar23;
          if (DAT_04c6f208 != 0) {
            FUN_00444bc0(&local_100,&DAT_04c6f1b8,1);
            lVar21 = FUN_004446b0(&local_100,
                                  "Invalid floating-point extra format specififer \'{}\'. Expected a character among [EfFfGg]."
                                  ,&DAT_04860f48,local_6c);
            *(char **)(lVar21 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
            ;
            *(undefined8 *)(lVar21 + 0x30) = 0xdb;
            FUN_00444c00(&local_100);
          }
          bVar23 = 0x67;
LAB_00440200:
          local_1b8 = (byte *)CONCAT71(local_1b8._1_7_,bVar23);
          iVar9 = iVar9 - (int)pbVar2;
          iVar5 = iVar9 + -1;
          if (iVar5 == 0 || iVar9 < 1) goto LAB_00440250;
        }
        FUN_00422760(&local_100,pbVar2 + 1,iVar5);
        iVar11 = FUN_0043a2f0(local_100,10);
        FUN_00422550(&local_100);
        FUN_004225f0(&local_1a0,&DAT_0406ae6e,0xffffffff);
        if (-1 < iVar11) goto LAB_00440264;
      }
      FUN_004231c0(&local_1a0,&local_1b8);
      plVar27 = (long *)(uVar28 & 0xfffffffffffffffe);
      if ((uVar28 & 1) != 0) {
        FUN_0043dd50(plVar27);
      }
      pbVar2 = local_1a0;
      local_100 = (byte *)0x0;
      (**(code **)(*plVar27 + 0x38))(plVar27,lVar13,lVar3,&local_100);
      FUN_00422d90(local_100,param_2,pbVar2);
      iVar11 = FUN_00422a90(param_2,&DAT_0407aa22);
      if (-1 < iVar11) {
        iVar9 = (int)param_2[1];
        if (iVar11 + 2 < (int)((long)iVar9 + -2)) {
          pcVar22 = (char *)(*param_2 + (long)(iVar11 + 2));
          pcVar1 = (char *)(*param_2 + (long)iVar9 + -2);
          pcVar26 = pcVar22;
          do {
            if (*pcVar26 != '0') break;
            pcVar26 = pcVar26 + 1;
          } while (pcVar26 < pcVar1);
          uVar8 = (int)pcVar26 - (int)pcVar22;
          if (0 < (int)uVar8) {
            if (pcVar26 <= pcVar1) {
              do {
                pcVar25 = pcVar26 + 1;
                *pcVar22 = *pcVar26;
                pcVar22 = pcVar22 + 1;
                pcVar26 = pcVar25;
              } while (pcVar25 <= pcVar1);
              iVar9 = (int)param_2[1];
            }
            FUN_00422950(param_2,iVar9 + ~uVar8);
          }
        }
      }
      FUN_00422550(&local_1a0);
      goto joined_r0x0043f890;
    }
    lVar13 = *param_1;
    lVar3 = param_1[1];
    uVar14 = param_1[2];
    if ((uVar14 & 1) != 0) {
      FUN_0043dd30(uVar14 & 0xfffffffffffffffe);
      uVar14 = param_1[2];
    }
    if (lVar13 == 0) goto LAB_0043f6a0;
    local_100 = (byte *)0x0;
    (**(code **)(*(long *)(uVar14 & 0xfffffffffffffffe) + 0x38))
              ((long *)(uVar14 & 0xfffffffffffffffe),lVar13,lVar3,&local_100);
    FUN_004225f0(param_2,local_100,0xffffffff);
  }
  if ((uVar14 & 1) != 0) {
    FUN_0043dd50(uVar14 & 0xfffffffffffffffe);
  }
joined_r0x0043f8fc:
  if ((uVar12 & 1) != 0) {
    FUN_0043dd50(uVar12 & 0xfffffffffffffffe);
  }
  return;
}

