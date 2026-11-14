
/* WARNING: Removing unreachable block (ram,0x017b6bb0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_017b6228(long param_1)

{
  int iVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  undefined8 local_38;
  int local_18;
  int iStack_14;
  
  puVar6 = PTR_DAT_04bb2720;
  uVar3 = *(ushort *)PTR_DAT_04bb6298;
  uVar13 = (ulong)(short)uVar3;
  if (uVar13 != 0xffffffffffffffff) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar3 * 8);
    if (0xff < (uint)(int)(short)uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 6 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0xe48);
      if (iVar11 == 1) {
        uVar10 = 0x23;
        uVar16 = 0x1c;
        uVar17 = 0x1c;
      }
      else if ((iVar11 < 2) || (5 < iVar11)) {
        if (((iVar11 < 2) || (5 < iVar11)) &&
           ((((iVar11 < 6 || (0x10 < iVar11)) && (0x10 < iVar11)) && (iVar11 < 0x13)))) {
LAB_017b68a8:
          uVar18 = 0x25;
          uVar10 = 0x29;
          uVar17 = 0x1a;
          uVar16 = 0x16;
          goto LAB_017b6c4c;
        }
        if ((1 < iVar11) && (iVar11 < 6)) goto LAB_017b6b48;
        if ((iVar11 < 6) || (0x10 < iVar11)) {
          if (iVar11 < 0x11) {
            if (0xfffffffd < iVar11 - 0x15U) goto LAB_017b6b48;
          }
          else if ((0xfffffffd < iVar11 - 0x15U) || (iVar11 < 0x13)) {
LAB_017b6b48:
            if (((iVar11 < 2) || (5 < iVar11)) &&
               (((iVar11 < 6 || (0x10 < iVar11)) && (iVar11 == 0x13)))) {
              uVar16 = 0x16;
              uVar10 = 0x29;
              uVar17 = 0x16;
              goto LAB_017b6c48;
            }
          }
        }
LAB_017b638c:
        uVar16 = 0x18;
        uVar10 = 0x27;
        uVar17 = 0x18;
      }
      else {
LAB_017b678c:
        uVar16 = 0x1a;
        uVar10 = 0x25;
        uVar17 = 0x1a;
      }
LAB_017b6c48:
      uVar18 = uVar10;
LAB_017b6c4c:
      *(undefined4 *)(param_1 + 0xd88) = uVar16;
      *(undefined4 *)(param_1 + 0xd8c) = uVar17;
      *(undefined4 *)(param_1 + 0xd98) = uVar10;
      *(undefined4 *)(param_1 + 0xd9c) = uVar18;
      return;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
    if (0xff < uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x19 & 1) == 0) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
      if (0xff < uVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 7 & 1) != 0) {
        if (*(int *)(param_1 + 0xe48) == 1) {
          uVar10 = 0x23;
          uVar16 = 0x1c;
        }
        else {
          uVar10 = 0x25;
          uVar16 = 0x1a;
        }
        *(undefined4 *)(param_1 + 0xd88) = uVar16;
        *(undefined4 *)(param_1 + 0xd8c) = uVar16;
        *(undefined4 *)(param_1 + 0xd98) = uVar10;
        *(undefined4 *)(param_1 + 0xd9c) = uVar10;
        return;
      }
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x15);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
    if (0xff < uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x15 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0xe48);
      if (iVar11 != 1) {
        if ((1 < iVar11) && (iVar11 < 6)) goto LAB_017b678c;
        if ((((iVar11 < 2) || (5 < iVar11)) && ((iVar11 < 6 || (0x10 < iVar11)))) &&
           ((0x10 < iVar11 && (iVar11 < 0x13)))) goto LAB_017b68a8;
      }
      goto LAB_017b638c;
    }
  }
  lVar14 = *(long *)PTR_DAT_04bb2720;
  iVar11 = 0;
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 0x330) == 0) {
      iVar11 = 0;
    }
    else {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar8 = FUN_006bd550(*puVar12,0);
      iVar11 = 0;
      if (iVar8 == 0x758f7eaf) {
        iVar11 = 0;
        if (*(long *)puVar6 != 0) {
          lVar14 = *(long *)(*(long *)puVar6 + 0x330);
          iVar11 = 0;
          if (lVar14 != 0) {
            iVar11 = *(int *)(lVar14 + 0x244);
          }
        }
      }
    }
  }
  puVar7 = PTR_DAT_04bbe4b0;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xc) == iVar11) {
    pcStack_48 = "IdrTourCounterDemo";
  }
  else {
    lVar14 = *(long *)puVar6;
    iVar11 = 0;
    if (lVar14 != 0) {
      if (*(long *)(lVar14 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar12 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar8 = FUN_006bd550(*puVar12,0);
        iVar11 = 0;
        if (iVar8 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar6 != 0) {
            lVar14 = *(long *)(*(long *)puVar6 + 0x330);
            iVar11 = 0;
            if (lVar14 != 0) {
              iVar11 = *(int *)(lVar14 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar7 + 0x10) != iVar11) {
      lVar14 = *(long *)puVar6;
      iVar11 = 0;
      if (lVar14 != 0) {
        if (*(long *)(lVar14 + 0x330) == 0) {
          iVar11 = 0;
        }
        else {
          puVar12 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
          iVar8 = FUN_006bd550(*puVar12,0);
          iVar11 = 0;
          if (iVar8 == 0x758f7eaf) {
            iVar11 = 0;
            if (*(long *)puVar6 != 0) {
              lVar14 = *(long *)(*(long *)puVar6 + 0x330);
              iVar11 = 0;
              if (lVar14 != 0) {
                iVar11 = *(int *)(lVar14 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar7 + 0x14) == iVar11) {
        local_68 = 0;
        local_78 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_70 = PTR_DAT_04bb2010 + 0x10;
        local_58 = 0;
        lVar14 = *(long *)PTR_DAT_04bb46b0;
        local_60 = puStack_70;
        if (lVar14 == 0) {
LAB_017b6a38:
          uVar19 = 1;
        }
        else {
          puVar12 = *(undefined8 **)(lVar14 + 0x10);
          if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
            lVar14 = (**(code **)(*(long *)*puVar12 + 0x38))();
            if (lVar14 == 0) goto LAB_017b6a38;
            lVar14 = lVar14 + 0x70;
          }
          else if (((puVar12 == (undefined8 *)0x0) || ((long *)puVar12[0x26] == (long *)0x0)) ||
                  (lVar14 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar14 == 0))
          goto LAB_017b6a38;
          if ((*(long **)(lVar14 + 0x1a0b70) == (long *)0x0) ||
             (puVar12 = (undefined8 *)**(long **)(lVar14 + 0x1a0b70), puVar12 == (undefined8 *)0x0))
          {
            uVar9 = 1;
          }
          else {
            uVar9 = (**(code **)*puVar12)();
            uVar9 = uVar9 ^ 1;
          }
          uVar19 = *(uint *)(*(long *)(lVar14 + 0x1a0b58) + *(long *)(lVar14 + 0x1a0b50));
          if (3 < uVar19) {
            uVar19 = 0;
          }
          if ((((uVar9 & 1) == 0) && (*(long *)(lVar14 + 0x1a0b70) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar14 + 0x1a0b70) + 8),
             puVar12 != (undefined8 *)0x0)) {
            (**(code **)*puVar12)();
          }
        }
        local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar19);
        uVar13 = FUN_017b3b54(&local_78,uVar19 - 1);
      }
      else {
        lVar14 = *(long *)puVar6;
        iVar11 = 0;
        if (lVar14 != 0) {
          if (*(long *)(lVar14 + 0x330) == 0) {
            iVar11 = 0;
          }
          else {
            puVar12 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
            iVar8 = FUN_006bd550(*puVar12,0);
            iVar11 = 0;
            if (iVar8 == 0x758f7eaf) {
              iVar11 = 0;
              if (*(long *)puVar6 != 0) {
                lVar14 = *(long *)(*(long *)puVar6 + 0x330);
                iVar11 = 0;
                if (lVar14 != 0) {
                  iVar11 = *(int *)(lVar14 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(puVar7 + 0x8c) == iVar11) {
          local_68 = 0;
          local_78 = PTR_DAT_04bbc1a0 + 0x10;
          puStack_70 = PTR_DAT_04bb2010 + 0x10;
          local_58 = 0;
          local_60 = puStack_70;
          uVar10 = FUN_02917204();
          uVar13 = FUN_017b3c70(&local_78,uVar10);
        }
        else {
          uVar13 = FUN_0180cab0(4);
          if ((uVar13 & 1) == 0) {
            uVar13 = FUN_0180cab0(5);
            if ((uVar13 & 1) == 0) {
              uVar13 = FUN_0180cab0(6);
              if ((uVar13 & 1) == 0) {
                uVar13 = FUN_0180cab0(7);
                if ((uVar13 & 1) == 0) {
                  uVar13 = FUN_0180cab0(0x2e);
                  if ((uVar13 & 1) == 0) {
                    uVar13 = FUN_0180cab0(8);
                    if ((uVar13 & 1) == 0) {
                      uVar13 = FUN_0180cab0(9);
                      if ((uVar13 & 1) == 0) {
                        uVar13 = FUN_0180cab0(10);
                        if ((uVar13 & 1) == 0) {
                          uVar13 = FUN_0180cab0(0x22);
                          if ((uVar13 & 1) == 0) {
                            uVar13 = FUN_0180cab0(0xb);
                            if ((uVar13 & 1) == 0) {
                              uVar13 = FUN_0180cab0(0x1f);
                              if (((uVar13 & 1) != 0) ||
                                 (uVar13 = FUN_0180cab0(0x2d), (uVar13 & 1) != 0)) {
                                *(undefined8 *)(param_1 + 0xd88) = 0x1c0000001c;
                                uVar15 = 0x2300000023;
LAB_017b6e80:
                                *(undefined8 *)(param_1 + 0xd98) = uVar15;
                                return;
                              }
                              uVar13 = FUN_0180cab0(0x1e);
                              if (((uVar13 & 1) != 0) ||
                                 (uVar13 = FUN_0180cab0(0x20), (uVar13 & 1) != 0)) {
                                *(undefined8 *)(param_1 + 0xd88) = 0x1a0000001a;
                                uVar15 = 0x2500000025;
                                goto LAB_017b6e80;
                              }
                              uVar13 = FUN_0180bf80();
                              if ((uVar13 & 1) == 0) {
                                uVar13 = FUN_0180c6f0();
                                if ((uVar13 & 1) == 0) {
                                  uVar13 = FUN_0180cab0(0x26);
                                  if ((uVar13 & 1) != 0) {
                                    local_68 = 0;
                                    local_78 = PTR_DAT_04bbc1a0 + 0x10;
                                    puStack_70 = PTR_DAT_04bb2010 + 0x10;
                                    local_58 = 0;
                                    local_60 = puStack_70;
                                    uVar10 = FUN_02917204();
                                    uVar13 = FUN_017b4854(&local_78,uVar10);
                                    goto joined_r0x017b6dd0;
                                  }
                                  uVar13 = FUN_0180b340();
                                  if (((uVar13 & 1) != 0) ||
                                     (uVar13 = FUN_0180b3e0(), (uVar13 & 1) != 0))
                                  goto LAB_017b6efc;
                                  uVar13 = FUN_0180c020();
                                  if ((uVar13 & 1) != 0) {
                                    local_68 = 0;
                                    local_78 = PTR_DAT_04bbc1a0 + 0x10;
                                    puStack_70 = PTR_DAT_04bb2010 + 0x10;
                                    local_58 = 0;
                                    local_60 = puStack_70;
                                    uVar13 = FUN_017b4aec(&local_78);
                                    goto joined_r0x017b6dd0;
                                  }
                                  uVar13 = FUN_0180b660();
                                  if ((uVar13 & 1) == 0) {
                                    uVar13 = FUN_0180b700();
                                    if ((uVar13 & 1) == 0) {
                                      uVar15 = 0x3f0000003f;
                                      *(undefined8 *)(param_1 + 0xd88) = 0;
                                      goto LAB_017b6e80;
                                    }
                                    lVar14 = param_1 + 0xda0;
                                    iVar11 = FUN_017f3710(lVar14);
                                    if (iVar11 == 2) goto LAB_017b7034;
                                    iVar11 = FUN_017f3710(lVar14);
                                    if (iVar11 == 4) {
                                      local_68._0_4_ = 0x16;
                                      local_68._4_4_ = 0x1a;
                                      local_58._0_4_ = 0x29;
                                      local_58._4_4_ = 0x25;
                                      goto LAB_017b7090;
                                    }
                                    FUN_017f3710(lVar14);
                                    goto LAB_017b7080;
                                  }
                                  local_58 = 0;
                                  local_78 = PTR_DAT_04bbc1a0 + 0x10;
                                  puStack_70 = PTR_DAT_04bb2010 + 0x10;
                                  local_68 = 0;
                                  local_60 = puStack_70;
                                  iVar11 = FUN_017f3710(param_1 + 0xda0);
                                  if (iVar11 != 6) {
LAB_017b7034:
                                    local_68._4_4_ = 0x1a;
                                    local_58._4_4_ = 0x25;
                                    local_58._0_4_ = 0x25;
                                    local_68._0_4_ = 0x1a;
                                    goto LAB_017b7090;
                                  }
                                }
                                else {
LAB_017b6efc:
                                  local_58 = 0;
                                  local_78 = PTR_DAT_04bbc1a0 + 0x10;
                                  puStack_70 = PTR_DAT_04bb2010 + 0x10;
                                  local_68 = 0;
                                  local_60 = puStack_70;
                                  iVar11 = FUN_017f3710(param_1 + 0xda0);
                                  if (iVar11 != 6) {
LAB_017b7080:
                                    local_58._4_4_ = 0x27;
                                    local_68._4_4_ = 0x18;
                                    local_68._0_4_ = 0x18;
                                    local_58._0_4_ = 0x27;
                                    goto LAB_017b7090;
                                  }
                                }
                                FUN_017f707c(&local_78);
LAB_017b7090:
                                *(undefined4 *)(param_1 + 0xd88) = (undefined4)local_68;
                                *(undefined4 *)(param_1 + 0xd8c) = local_68._4_4_;
                                *(undefined4 *)(param_1 + 0xd98) = (undefined4)local_58;
                                *(undefined4 *)(param_1 + 0xd9c) = local_58._4_4_;
                                return;
                              }
                              local_68 = 0;
                              local_78 = PTR_DAT_04bbc1a0 + 0x10;
                              puStack_70 = PTR_DAT_04bb2010 + 0x10;
                              local_58 = 0;
                              local_60 = puStack_70;
                              uVar13 = FUN_017b4954(&local_78);
                            }
                            else {
                              local_68 = 0;
                              local_78 = PTR_DAT_04bbc1a0 + 0x10;
                              puStack_70 = PTR_DAT_04bb2010 + 0x10;
                              local_58 = 0;
                              local_60 = puStack_70;
                              uVar13 = FUN_017b4768(&local_78);
                            }
                          }
                          else {
                            local_68 = 0;
                            local_78 = PTR_DAT_04bbc1a0 + 0x10;
                            puStack_70 = PTR_DAT_04bb2010 + 0x10;
                            local_58 = 0;
                            local_60 = puStack_70;
                            uVar13 = FUN_017b4690(&local_78);
                          }
                        }
                        else {
                          local_68 = 0;
                          local_78 = PTR_DAT_04bbc1a0 + 0x10;
                          puStack_70 = PTR_DAT_04bb2010 + 0x10;
                          local_58 = 0;
                          local_60 = puStack_70;
                          uVar13 = FUN_017b45a8(&local_78);
                        }
                      }
                      else {
                        local_68 = 0;
                        local_78 = PTR_DAT_04bbc1a0 + 0x10;
                        puStack_70 = PTR_DAT_04bb2010 + 0x10;
                        local_58 = 0;
                        local_40 = (undefined *)CONCAT44(local_40._4_4_,2);
                        local_60 = puStack_70;
                        uVar13 = FUN_017b44ac(&local_78,1);
                      }
                    }
                    else {
                      local_68 = 0;
                      local_78 = PTR_DAT_04bbc1a0 + 0x10;
                      puStack_70 = PTR_DAT_04bb2010 + 0x10;
                      local_58 = 0;
                      local_40 = (undefined *)CONCAT44(local_40._4_4_,2);
                      local_60 = puStack_70;
                      uVar13 = FUN_017b43b0(&local_78,1);
                    }
                  }
                  else {
                    local_68 = 0;
                    local_78 = PTR_DAT_04bbc1a0 + 0x10;
                    puStack_70 = PTR_DAT_04bb2010 + 0x10;
                    local_58 = 0;
                    local_60 = puStack_70;
                    uVar13 = FUN_017b42ec(&local_78);
                  }
                }
                else {
                  local_68 = 0;
                  local_78 = PTR_DAT_04bbc1a0 + 0x10;
                  puStack_70 = PTR_DAT_04bb2010 + 0x10;
                  local_58 = 0;
                  local_60 = puStack_70;
                  uVar10 = FUN_02917204();
                  uVar13 = FUN_017b4170(&local_78,uVar10);
                }
              }
              else {
                local_68 = 0;
                local_78 = PTR_DAT_04bbc1a0 + 0x10;
                puStack_70 = PTR_DAT_04bb2010 + 0x10;
                local_58 = 0;
                local_60 = puStack_70;
                uVar10 = FUN_02917204();
                uVar13 = FUN_017b3ff0(&local_78,uVar10);
              }
            }
            else {
              local_68 = 0;
              local_78 = PTR_DAT_04bbc1a0 + 0x10;
              puStack_70 = PTR_DAT_04bb2010 + 0x10;
              local_58 = 0;
              local_60 = puStack_70;
              uVar10 = FUN_02917204();
              uVar13 = FUN_017b3ee8(&local_78,uVar10);
            }
          }
          else {
            local_68 = 0;
            local_78 = PTR_DAT_04bbc1a0 + 0x10;
            puStack_70 = PTR_DAT_04bb2010 + 0x10;
            local_58 = 0;
            local_60 = puStack_70;
            iVar11 = FUN_017b7130();
            if (2 < iVar11) {
              iVar11 = 3;
            }
            uVar13 = FUN_017b3dec(&local_78,iVar11);
          }
        }
      }
joined_r0x017b6dd0:
      if ((uVar13 & 1) == 0) {
        return;
      }
      goto LAB_017b66ec;
    }
    pcStack_48 = "IdrAirPort00";
  }
  local_40 = PTR_DAT_04bb2010 + 0x10;
  local_78 = PTR_DAT_04bbc1a0 + 0x10;
  local_38 = 0;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  puStack_70 = local_40;
  local_60 = local_40;
  uVar13 = FUN_00979580(&local_50,&local_40,&iStack_14,&local_18);
  if ((uVar13 & 1) == 0) {
    return;
  }
  iVar11 = DAT_05292328 + (int)local_38;
  iVar8 = DAT_0529232c + local_38._4_4_;
  iVar4 = iVar11 + iStack_14 + -1;
  iVar5 = iVar8 + local_18 + -1;
  iVar1 = iVar11;
  if (iVar4 <= iVar11) {
    iVar1 = iVar4;
  }
  if (iVar11 <= iVar4) {
    iVar11 = iVar4;
  }
  iVar4 = iVar8;
  if (iVar5 <= iVar8) {
    iVar4 = iVar5;
  }
  if (iVar8 <= iVar5) {
    iVar8 = iVar5;
  }
  local_68 = CONCAT44(iVar4,iVar1);
  local_58 = CONCAT44(iVar8,iVar11);
  FUN_017b3420(&local_78);
LAB_017b66ec:
  *(undefined4 *)(param_1 + 0xd88) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0xd8c) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0xd98) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0xd9c) = local_58._4_4_;
  return;
}

