
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004a9f60(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  char *pcVar15;
  long *plVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  char **ppcVar20;
  uint uVar21;
  code *pcVar22;
  undefined8 *puVar23;
  char *pcVar24;
  int *piVar25;
  uint uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  char *local_1b0;
  char *local_1a8;
  ulong local_1a0;
  undefined8 local_120;
  undefined8 uStack_118;
  ulong local_110;
  char *local_108;
  char *local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_68;
  
  auVar28 = FUN_0049dac0(param_2);
  uVar10 = FUN_0043a700(auVar28._0_8_,auVar28._8_8_ - auVar28._0_8_,"record");
  if ((uVar10 & 1) != 0) {
    local_1a8 = (char *)0x0;
    local_1a0 = 0;
    local_1b0 = (char *)0x0;
    if ((param_3[1] != 0) && (uVar10 = FUN_00428440(), (uVar10 & 0x1f) == 7)) {
      local_1b0 = (char *)*param_3;
      local_1a8 = (char *)param_3[1];
      if ((param_3[2] & 1U) != 0) {
        uVar10 = FUN_0043dd30(param_3[2] & 0xfffffffffffffffe);
      }
      local_1a0 = param_3[2];
      if (local_1b0 != (char *)0x0) {
        iVar6 = FUN_004a8280(uVar10,param_2,"record");
        if (iVar6 < 0) {
          uVar5 = false;
        }
        else {
          do {
            auVar28 = FUN_0049dac0(param_2);
            uVar10 = FUN_0043a700(auVar28._0_8_,auVar28._8_8_ - auVar28._0_8_,"field");
            if ((uVar10 & 1) == 0) goto LAB_004aa430;
            FUN_004225b0(&local_108);
            local_120 = 0.0;
            uStack_118 = 0;
            iVar6 = FUN_0049da40(param_2,&DAT_040d7f5b,&local_120);
            if ((iVar6 < 0) || (iVar6 = FUN_0049dd30(&local_120,&local_108), iVar6 < 0)) {
LAB_004aa724:
              FUN_00422550(&local_108);
              uVar5 = true;
              break;
            }
            uVar10 = FUN_00422c50(&local_108,&DAT_040c7c06);
            if ((uVar10 & 1) != 0) {
              FUN_004236e0(&local_108,1);
              FUN_00423740(&local_108,1);
            }
            uVar10 = FUN_00427d40(local_1a8,local_108,1);
            if (1 < uVar10) {
              uVar11 = FUN_0043f280(&local_120,&local_1b0,uVar10);
              iVar6 = FUN_004a8280(uVar11,param_2,"field");
              if ((iVar6 < 0) || (iVar6 = FUN_004a9f60(param_1,param_2,&local_120), -1 < iVar6)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if ((local_110 & 1) != 0) {
                FUN_0043dd50(local_110 & 0xfffffffffffffffe);
              }
              if (bVar4) goto LAB_004aa724;
            }
            uVar11 = FUN_00422550(&local_108);
            iVar6 = FUN_004a8280(uVar11,param_2,"record");
            uVar5 = false;
          } while (-1 < iVar6);
        }
        goto joined_r0x004aa734;
      }
    }
    if (DAT_04c71448 < 2) {
LAB_004aa430:
      uVar5 = true;
    }
    else {
      FUN_00444bc0(&local_108,&DAT_04c713f8,2);
      local_120 = (double)param_3[1];
      uVar7 = FUN_00428440();
      local_68 = (double)(CONCAT44(local_68._4_4_,uVar7) & 0xffffffff0000001f);
      lVar13 = FUN_004446b0(&local_108,"Type \'{}\' is not a record ({})",&DAT_04867a10,&local_120,
                            &local_68);
      *(char **)(lVar13 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Xml/hkXmlReadFormat.cpp"
      ;
      *(undefined8 *)(lVar13 + 0x30) = 0x24d;
      FUN_00444c00(&local_108);
      uVar5 = true;
    }
joined_r0x004aa734:
    if ((local_1a0 & 1) != 0) {
      FUN_0043dd50(local_1a0 & 0xfffffffffffffffe);
    }
    if ((bool)uVar5) {
      return 0x80040200;
    }
    return 0;
  }
  auVar28 = FUN_0049dac0(param_2);
  uVar10 = FUN_0043a700(auVar28._0_8_,auVar28._8_8_ - auVar28._0_8_,"integer");
  if ((uVar10 & 1) == 0) {
    auVar28 = FUN_0049dac0(param_2);
    uVar10 = FUN_0043a700(auVar28._0_8_,auVar28._8_8_ - auVar28._0_8_,&DAT_040854bd);
    if ((uVar10 & 1) == 0) {
      auVar28 = FUN_0049dac0(param_2);
      uVar10 = FUN_0043a700(auVar28._0_8_,auVar28._8_8_ - auVar28._0_8_,&DAT_0407a86f);
      if ((uVar10 & 1) != 0) {
        if (param_3[1] == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_00428440();
          if ((uVar10 & 0x1f) == 2) {
            lVar13 = *param_3;
            lVar19 = param_3[1];
            uVar10 = param_3[2];
            if ((uVar10 & 1) != 0) {
              FUN_0043dd30(uVar10 & 0xfffffffffffffffe);
              uVar10 = param_3[2];
            }
            if (lVar13 != 0) {
              FUN_004225b0(&local_108);
              local_1b0 = (char *)0x0;
              local_1a8 = (char *)0x0;
              iVar6 = FUN_0049da40(param_2,"value",&local_1b0);
              if ((iVar6 < 0) || (iVar6 = FUN_0049dd30(&local_1b0,&local_108), iVar6 < 0))
              goto LAB_004aa700;
              uVar12 = FUN_00422c50(&local_108,&DAT_040c7c06);
              if ((uVar12 & 1) != 0) {
                FUN_004236e0(&local_108,1);
                FUN_00423740(&local_108,1);
              }
              iVar6 = FUN_0043a240(local_108,&DAT_040a395f);
              plVar16 = (long *)(uVar10 & 0xfffffffffffffffe);
              pcVar22 = *(code **)(*plVar16 + 0x30);
              ppcVar20 = (char **)(ulong)(iVar6 == 0);
              goto LAB_004aaad8;
            }
          }
          else {
            uVar10 = 0;
          }
        }
        if (DAT_04c71448 < 2) goto LAB_004aa93c;
        local_120._4_4_ = (undefined4)((ulong)local_120 >> 0x20);
        FUN_00444bc0(&local_108,&DAT_04c713f8,2);
        local_1b0 = (char *)param_3[1];
        uVar7 = FUN_00428440();
        local_120 = (double)(CONCAT44(local_120._4_4_,uVar7) & 0xffffffff0000001f);
        lVar13 = FUN_004446b0(&local_108,"Type \'{}\' is not a bool ({})",&DAT_04867a10,&local_1b0,
                              &local_120);
        uVar11 = 0x2ca;
        goto LAB_004aa8f4;
      }
      auVar28 = FUN_0049dac0(param_2);
      uVar10 = FUN_0043a700(auVar28._0_8_,auVar28._8_8_ - auVar28._0_8_,"string");
      if ((uVar10 & 1) == 0) {
        auVar28 = FUN_0049dac0(param_2);
        uVar10 = FUN_0043a700(auVar28._0_8_,auVar28._8_8_ - auVar28._0_8_,"array");
        if ((uVar10 & 1) != 0) {
          local_108 = (char *)0x0;
          local_100 = (char *)0x0;
          iVar6 = FUN_0049da40(param_2,"elementtypeid",&local_108);
          if (iVar6 < 0) {
            return 0x80040200;
          }
          if ((local_108 != local_100) && (*local_108 == '\"')) {
            local_108 = local_108 + 1;
            local_100 = local_100 + -1;
          }
          uVar10 = FUN_0043a780(local_108,(long)local_100 - (long)local_108,&DAT_040dd778);
          if ((uVar10 & 1) == 0) {
            return 0x80040200;
          }
          iVar6 = FUN_0043a2d0(&DAT_040dd778);
          local_108 = local_108 + iVar6;
          iVar6 = FUN_0049db00(&local_108,&local_1b0);
          if (iVar6 < 0) {
            return 0x80040200;
          }
          uVar26 = (uint)local_1b0;
          uVar10 = (ulong)local_1b0 & 0xffffffff;
          iVar6 = FUN_0049dbd0(param_2,"count",&local_120);
          if (iVar6 < 0) {
            return 0x80040200;
          }
          if (param_3[1] == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = FUN_00428440();
            if ((uVar12 & 0x1f) == 8) {
              puVar2 = (undefined4 *)*param_3;
              lVar13 = param_3[1];
              uVar12 = param_3[2];
              if ((uVar12 & 1) != 0) {
                FUN_0043dd30(uVar12 & 0xfffffffffffffffe);
                uVar12 = param_3[2];
              }
              if (puVar2 != (undefined4 *)0x0) {
                puVar14 = (undefined8 *)FUN_00426e90(lVar13,1);
                if ((puVar14 == (undefined8 *)0x0) || ((int)((ulong)*puVar14 >> 8) == 0)) {
                  if ((int)local_120 == 0) {
                    uVar5 = false;
                    *puVar2 = 0;
                    goto joined_r0x004ab004;
                  }
                  pcVar24 = *(char **)(*(long *)(param_1 + 0x78) +
                                      (-(ulong)(uVar26 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3))
                  ;
                  *puVar2 = *(undefined4 *)(param_1 + 0x1a8);
                  iVar6 = FUN_00426fc0(pcVar24);
                  pcVar17 = (char *)(**(code **)(*(long *)(param_1 + 0x100) + 0x10))
                                              (param_1 + 0x100,(long)(int)local_120 * (long)iVar6,0)
                  ;
                  lVar13 = CONCAT44((int)local_120,uVar26);
                  uVar26 = *(uint *)(param_1 + 0x1a8);
                  pcVar15 = pcVar17;
                  iVar6 = (int)local_120;
                  if (uVar26 == (*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
                    pcVar15 = (char *)FUN_00426990(PTR_DAT_048607b8,param_1 + 0x1a0,0x10);
                    uVar26 = *(uint *)(param_1 + 0x1a8);
                    iVar6 = (int)local_120;
                  }
                  plVar16 = (long *)(*(long *)(param_1 + 0x1a0) + (long)(int)uVar26 * 0x10);
                  *plVar16 = (long)pcVar17;
                  plVar16[1] = lVar13;
                  *(uint *)(param_1 + 0x1a8) = uVar26 + 1;
                  if (pcVar24 == (char *)0x0) {
                    pcVar18 = (char *)0x0;
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = FUN_00426fc0(pcVar24);
                    pcVar18 = (char *)FUN_00428370(pcVar24);
                    pcVar15 = pcVar18;
                    if (((ulong)pcVar18 & 1) != 0) {
                      pcVar15 = (char *)FUN_0043dd30((ulong)pcVar18 & 0xfffffffffffffffe);
                    }
                  }
                }
                else {
                  local_f8 = (char *)0x0;
                  local_f0 = (char *)0x0;
                  local_108 = (char *)0x0;
                  local_100 = (char *)0x0;
                  pcVar15 = (char *)(**(code **)(*(long *)(uVar12 & 0xfffffffffffffffe) + 0x50))
                                              ((long *)(uVar12 & 0xfffffffffffffffe),puVar2,lVar13,
                                               &local_108);
                  pcVar24 = local_100;
                  pcVar17 = local_108;
                  pcVar18 = local_f0;
                  iVar8 = local_f8._4_4_;
                  iVar6 = (int)local_f8;
                }
                if (iVar6 == 0) {
joined_r0x004aa884:
                  uVar5 = false;
                }
                else {
                  if (((ulong)pcVar18 & 1) == 0) {
                    iVar6 = 0;
                    uVar5 = true;
                    do {
                      iVar9 = FUN_004a8280(pcVar15,param_2,"array");
                      if (iVar9 < 0) {
                        uVar5 = false;
                        break;
                      }
                      local_108 = pcVar17 + iVar6 * iVar8;
                      local_100 = pcVar24;
                      local_f8 = pcVar18;
                      pcVar15 = (char *)FUN_004a9f60(param_1,param_2,&local_108);
                      uVar26 = (uint)pcVar15;
                      iVar6 = iVar6 - ((int)~uVar26 >> 0x1f);
                      if (((ulong)local_f8 & 1) != 0) {
                        pcVar15 = (char *)FUN_0043dd50((ulong)local_f8 & 0xfffffffffffffffe);
                      }
                    } while (-1 < (int)uVar26);
                    goto joined_r0x004ab004;
                  }
                  iVar6 = 0;
                  do {
                    iVar9 = FUN_004a8280(pcVar15,param_2,"array");
                    if (iVar9 < 0) goto joined_r0x004aa884;
                    local_108 = pcVar17 + iVar6 * iVar8;
                    local_100 = pcVar24;
                    local_f8 = pcVar18;
                    FUN_0043dd30((ulong)pcVar18 & 0xfffffffffffffffe);
                    pcVar15 = (char *)FUN_004a9f60(param_1,param_2,&local_108);
                    uVar26 = (uint)pcVar15;
                    iVar6 = iVar6 - ((int)~uVar26 >> 0x1f);
                    if (((ulong)local_f8 & 1) != 0) {
                      pcVar15 = (char *)FUN_0043dd50((ulong)local_f8 & 0xfffffffffffffffe);
                    }
                  } while (-1 < (int)uVar26);
                  uVar5 = true;
                }
                if (((ulong)pcVar18 & 1) != 0) {
                  FUN_0043dd50((ulong)pcVar18 & 0xfffffffffffffffe);
                }
                goto joined_r0x004ab004;
              }
            }
            else {
              uVar12 = 0;
            }
          }
          if (DAT_04c71448 < 2) {
            uVar5 = true;
          }
          else {
            local_68._4_4_ = (undefined4)((ulong)local_68 >> 0x20);
            FUN_00444bc0(&local_108,&DAT_04c713f8,2);
            local_1b0 = (char *)param_3[1];
            uVar7 = FUN_00428440();
            local_68 = (double)(CONCAT44(local_68._4_4_,uVar7) & 0xffffffff0000001f);
            lVar13 = FUN_004446b0(&local_108,"Type \'{}\' is not an array ({})",&DAT_04867a10,
                                  &local_1b0,&local_68);
            *(char **)(lVar13 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Xml/hkXmlReadFormat.cpp"
            ;
            *(undefined8 *)(lVar13 + 0x30) = 0x300;
            FUN_00444c00(&local_108);
            uVar5 = true;
          }
joined_r0x004ab004:
          if ((uVar12 & 1) != 0) {
            FUN_0043dd50(uVar12 & 0xfffffffffffffffe);
          }
          if ((bool)uVar5) {
            return 0x80040200;
          }
          return 0;
        }
        auVar28 = FUN_0049dac0(param_2);
        uVar10 = FUN_0043a700(auVar28._0_8_,auVar28._8_8_ - auVar28._0_8_,"pointer");
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        if (param_3[1] == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_00428440();
          if ((uVar10 & 0x1f) == 6) {
            lVar13 = *param_3;
            uVar10 = param_3[2];
            if ((uVar10 & 1) != 0) {
              FUN_0043dd30(uVar10 & 0xfffffffffffffffe);
              uVar10 = param_3[2];
            }
            if (lVar13 != 0) {
              FUN_004225b0(&local_108);
              local_1b0 = (char *)0x0;
              local_1a8 = (char *)0x0;
              iVar6 = FUN_0049da40(param_2,&DAT_040ae7f4,&local_1b0);
              if ((-1 < iVar6) && (iVar6 = FUN_0049dd30(&local_1b0,&local_108), -1 < iVar6)) {
                uVar12 = FUN_00422c50(&local_108,&DAT_040c7c06);
                if ((uVar12 & 1) != 0) {
                  FUN_004236e0(&local_108,1);
                  FUN_00423740(&local_108,1);
                }
                iVar6 = 0x40ae8e7;
                uVar12 = FUN_00422c50(&local_108,"object");
                if ((uVar12 & 1) == 0) {
                  iVar6 = 0x408adeb;
                  uVar12 = FUN_00422c50(&local_108,&DAT_0408adeb);
                  if ((uVar12 & 1) == 0) goto LAB_004aad7c;
                  iVar8 = 0x408adef;
                }
                else {
                  iVar8 = 0x40ae8ed;
                }
                local_1b0 = local_108 + (iVar8 - iVar6);
                local_1a8 = local_108 + (long)(int)local_100 + -1;
                iVar6 = FUN_0049db00(&local_1b0,&local_120);
                if (-1 < iVar6) {
                  iVar6 = (int)local_120;
                  uVar21 = *(uint *)(param_1 + 0x90);
                  uVar26 = uVar21;
                  if ((int)uVar21 <= (int)local_120 + 1) {
                    uVar26 = (int)local_120 + 1;
                  }
                  if ((int)(*(uint *)(param_1 + 0x94) & 0x3fffffff) < (int)uVar26) {
                    uVar11 = FUN_00426720(PTR_DAT_048607b8,uVar26,0x18,
                                          *(undefined8 *)(param_1 + 0x88));
                    uVar21 = *(uint *)(param_1 + 0x90);
                    *(undefined8 *)(param_1 + 0x88) = uVar11;
                  }
                  if (uVar26 - uVar21 == 0 || (int)uVar26 < (int)uVar21) {
                    if ((int)uVar26 < (int)uVar21) {
                      *(uint *)(param_1 + 0x90) = uVar26;
                    }
                  }
                  else {
                    puVar14 = (undefined8 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar21 * 0x18);
                    uVar1 = uVar26 - uVar21 & 3;
                    *(uint *)(param_1 + 0x90) = uVar26;
                    if (2 < uVar26 + ~uVar21) {
                      iVar8 = (uVar21 + uVar1) - uVar26;
                      puVar23 = puVar14;
                      do {
                        puVar14 = puVar23 + 0xc;
                        *(undefined4 *)((long)puVar23 + 0x14) = 0;
                        *(undefined1 *)(puVar23 + 2) = 0;
                        *puVar23 = 0;
                        puVar23[1] = 0;
                        iVar8 = iVar8 + 4;
                        *(undefined4 *)((long)puVar23 + 0x2c) = 0;
                        *(undefined1 *)(puVar23 + 5) = 0;
                        *(undefined4 *)((long)puVar23 + 0x44) = 0;
                        *(undefined1 *)(puVar23 + 8) = 0;
                        *(undefined4 *)((long)puVar23 + 0x5c) = 0;
                        *(undefined1 *)(puVar23 + 0xb) = 0;
                        puVar23[3] = 0;
                        puVar23[4] = 0;
                        puVar23[6] = 0;
                        puVar23[7] = 0;
                        puVar23[9] = 0;
                        puVar23[10] = 0;
                        puVar23 = puVar14;
                      } while (iVar8 != 0);
                    }
                    if (uVar1 != 0) {
                      iVar8 = -uVar1;
                      do {
                        *(undefined4 *)((long)puVar14 + 0x14) = 0;
                        *(undefined1 *)(puVar14 + 2) = 0;
                        iVar8 = iVar8 + 1;
                        *puVar14 = 0;
                        puVar14[1] = 0;
                        puVar14 = puVar14 + 3;
                      } while (iVar8 != 0);
                    }
                  }
                  *(int *)*param_3 = iVar6;
                  FUN_00422550(&local_108);
                  goto joined_r0x004aab94;
                }
              }
LAB_004aad7c:
              uVar5 = true;
              FUN_00422550(&local_108);
              goto joined_r0x004aa920;
            }
          }
          else {
            uVar10 = 0;
          }
        }
        if (1 < DAT_04c71448) {
          local_120._4_4_ = (undefined4)((ulong)local_120 >> 0x20);
          FUN_00444bc0(&local_108,&DAT_04c713f8,2);
          local_1b0 = (char *)param_3[1];
          uVar7 = FUN_00428440();
          local_120 = (double)(CONCAT44(local_120._4_4_,uVar7) & 0xffffffff0000001f);
          lVar13 = FUN_004446b0(&local_108,"Type \'{}\' is not a pointer ({})",&DAT_04867a10,
                                &local_1b0,&local_120);
          uVar11 = 0x333;
LAB_004aab70:
          *(char **)(lVar13 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Xml/hkXmlReadFormat.cpp"
          ;
          *(undefined8 *)(lVar13 + 0x30) = uVar11;
          FUN_00444c00(&local_108);
        }
      }
      else {
        if (param_3[1] == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_00428440();
          if ((uVar10 & 0x1f) == 3) {
            piVar25 = (int *)*param_3;
            uVar10 = param_3[2];
            if ((uVar10 & 1) != 0) {
              FUN_0043dd30(uVar10 & 0xfffffffffffffffe);
              uVar10 = param_3[2];
            }
            if (piVar25 != (int *)0x0) {
              local_1b0 = (char *)0x0;
              local_1a8 = (char *)0x0;
              iVar6 = FUN_0049da40(param_2,"value",&local_1b0);
              if (-1 < iVar6) {
                FUN_00422780(&local_108,&local_1b0);
                FUN_0049dd30(&local_1b0,&local_108);
                uVar12 = FUN_00422c50(&local_108,&DAT_040c7c06);
                if ((uVar12 & 1) != 0) {
                  FUN_004236e0(&local_108,1);
                  FUN_00423740(&local_108,1);
                }
                iVar6 = FUN_004ab030(param_1,local_108);
                if (iVar6 < 0) {
                  FUN_00422550(&local_108);
                  uVar5 = true;
                }
                else {
                  *piVar25 = iVar6;
                  FUN_00422550(&local_108);
                  uVar5 = false;
                }
                goto joined_r0x004aa920;
              }
              *piVar25 = 0;
joined_r0x004aab94:
              uVar5 = false;
              goto joined_r0x004aa920;
            }
          }
          else {
            uVar10 = 0;
          }
        }
        if (1 < DAT_04c71448) {
          local_120._4_4_ = (undefined4)((ulong)local_120 >> 0x20);
          FUN_00444bc0(&local_108,&DAT_04c713f8,2);
          local_1b0 = (char *)param_3[1];
          uVar7 = FUN_00428440();
          local_120 = (double)(CONCAT44(local_120._4_4_,uVar7) & 0xffffffff0000001f);
          lVar13 = FUN_004446b0(&local_108,"Type \'{}\' is not a string ({})",&DAT_04867a10,
                                &local_1b0,&local_120);
          uVar11 = 0x2d9;
          goto LAB_004aab70;
        }
      }
      uVar5 = true;
      goto joined_r0x004aa920;
    }
    if (param_3[1] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_00428440();
      if ((uVar10 & 0x1f) == 5) {
        puVar2 = (undefined4 *)*param_3;
        lVar13 = param_3[1];
        uVar10 = param_3[2];
        if ((uVar10 & 1) != 0) {
          FUN_0043dd30(uVar10 & 0xfffffffffffffffe);
          uVar10 = param_3[2];
        }
        if (puVar2 != (undefined4 *)0x0) {
          FUN_004225b0(&local_108);
          FUN_004225b0(&local_1b0);
          local_120 = 0.0;
          uStack_118 = 0;
          iVar6 = FUN_0049da40(param_2,&DAT_040705ce,&local_120);
          if ((iVar6 < 0) || (iVar6 = FUN_0049dd30(&local_120,&local_1b0), iVar6 < 0)) {
LAB_004aa90c:
            uVar5 = true;
          }
          else {
            uVar12 = FUN_00422c50(&local_1b0,&DAT_040c7c06);
            if ((uVar12 & 1) != 0) {
              FUN_004236e0(&local_1b0,1);
              FUN_00423740(&local_1b0,1);
            }
            local_120 = 0.0;
            uStack_118 = 0;
            iVar6 = FUN_0049da40(param_2,&DAT_040cd8f9,&local_120);
            if ((iVar6 < 0) || (iVar6 = FUN_0049dd30(&local_120,&local_108), iVar6 < 0))
            goto LAB_004aa90c;
            uVar12 = FUN_00422c50(&local_108,&DAT_040c7c06);
            if ((uVar12 & 1) != 0) {
              FUN_004236e0(&local_108,1);
              FUN_00423740(&local_108,1);
            }
            if (*local_1b0 != '#') goto LAB_004aa90c;
            local_120 = 0.0;
            local_68 = 0.0;
            sscanf(local_108,"%lg",&local_120);
            sscanf(local_1b0 + 1,"%llx",&local_68);
            dVar27 = local_68;
            if (((~(ulong)local_68 & 0x7ff0000000000000) == 0) || (local_120 <= 0.0)) {
LAB_004aab9c:
              pcVar22 = *(code **)(*(long *)(uVar10 & 0xfffffffffffffffe) + 0x30);
LAB_004aabac:
              (*pcVar22)(dVar27,uVar10 & 0xfffffffffffffffe,puVar2,lVar13);
            }
            else {
              if (local_68 == local_120) {
                pcVar22 = *(code **)(*(long *)(uVar10 & 0xfffffffffffffffe) + 0x30);
                dVar27 = local_120;
                goto LAB_004aabac;
              }
              iVar6 = FUN_00428440(lVar13);
              if (iVar6 != 0x174605) goto LAB_004aab9c;
              uVar7 = FUN_004373c0(local_68);
              *puVar2 = uVar7;
            }
            uVar5 = false;
          }
          FUN_00422550(&local_1b0);
          FUN_00422550(&local_108);
          goto joined_r0x004aa920;
        }
      }
      else {
        uVar10 = 0;
      }
    }
    if (DAT_04c71448 < 2) goto LAB_004aa93c;
    local_120._4_4_ = (undefined4)((ulong)local_120 >> 0x20);
    FUN_00444bc0(&local_108,&DAT_04c713f8,2);
    local_1b0 = (char *)param_3[1];
    uVar7 = FUN_00428440();
    local_120 = (double)(CONCAT44(local_120._4_4_,uVar7) & 0xffffffff0000001f);
    lVar13 = FUN_004446b0(&local_108,"Type \'{}\' is not a real ({})",&DAT_04867a10,&local_1b0,
                          &local_120);
    uVar11 = 0x28b;
  }
  else {
    if (param_3[1] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_00428440();
      if ((uVar10 & 0x1f) == 4) {
        lVar13 = *param_3;
        lVar19 = param_3[1];
        uVar10 = param_3[2];
        if ((uVar10 & 1) != 0) {
          FUN_0043dd30(uVar10 & 0xfffffffffffffffe);
          uVar10 = param_3[2];
        }
        if (lVar13 != 0) {
          FUN_004225b0(&local_108);
          local_1b0 = (char *)0x0;
          local_1a8 = (char *)0x0;
          iVar6 = FUN_0049da40(param_2,"value",&local_1b0);
          if ((iVar6 < 0) || (iVar6 = FUN_0049dd30(&local_1b0,&local_108), iVar6 < 0)) {
LAB_004aa700:
            uVar5 = true;
            FUN_00422550(&local_108);
            goto joined_r0x004aa920;
          }
          uVar12 = FUN_00422c50(&local_108,&DAT_040c7c06);
          if ((uVar12 & 1) != 0) {
            FUN_004236e0(&local_108,1);
            FUN_00423740(&local_108,1);
          }
          cVar3 = *local_108;
          if (cVar3 != '-') {
            local_1b0 = (char *)FUN_0043a320(local_108,0);
          }
          else {
            local_1b0 = (char *)FUN_0043a320(local_108 + 1,0);
          }
          local_1a8 = (char *)(ulong)(cVar3 == '-');
          plVar16 = (long *)(uVar10 & 0xfffffffffffffffe);
          pcVar22 = *(code **)(*plVar16 + 0x30);
          ppcVar20 = &local_1b0;
LAB_004aaad8:
          (*pcVar22)(plVar16,lVar13,lVar19,ppcVar20);
          uVar5 = false;
          FUN_00422550(&local_108);
          goto joined_r0x004aa920;
        }
      }
      else {
        uVar10 = 0;
      }
    }
    if (DAT_04c71448 < 2) {
LAB_004aa93c:
      uVar5 = true;
      goto joined_r0x004aa920;
    }
    local_120._4_4_ = (undefined4)((ulong)local_120 >> 0x20);
    FUN_00444bc0(&local_108,&DAT_04c713f8,2);
    local_1b0 = (char *)param_3[1];
    uVar7 = FUN_00428440();
    local_120 = (double)(CONCAT44(local_120._4_4_,uVar7) & 0xffffffff0000001f);
    lVar13 = FUN_004446b0(&local_108,"Type \'{}\' is not an integer ({})",&DAT_04867a10,&local_1b0,
                          &local_120);
    uVar11 = 0x271;
  }
LAB_004aa8f4:
  *(char **)(lVar13 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Xml/hkXmlReadFormat.cpp"
  ;
  *(undefined8 *)(lVar13 + 0x30) = uVar11;
  FUN_00444c00(&local_108);
  uVar5 = true;
joined_r0x004aa920:
  if ((uVar10 & 1) != 0) {
    FUN_0043dd50(uVar10 & 0xfffffffffffffffe);
  }
  if ((bool)uVar5) {
    return 0x80040200;
  }
  return 0;
}

