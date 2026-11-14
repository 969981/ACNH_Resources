
/* WARNING: Removing unreachable block (ram,0x017effa8) */
/* WARNING: Removing unreachable block (ram,0x017f09bc) */
/* WARNING: Removing unreachable block (ram,0x017f0034) */

void FUN_017eff3c(long param_1,ulong param_2,ulong param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  ushort uVar10;
  undefined *puVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  long lVar24;
  byte bVar25;
  undefined4 uVar26;
  uint local_74;
  undefined *local_70;
  long local_68;
  undefined1 local_60;
  byte local_5f;
  undefined *local_58;
  char *local_50;
  ulong local_48;
  
  if (*(char *)(param_1 + 0x144) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    FUN_017fdbb0(param_1);
    puVar11 = PTR_DAT_04bb46b0;
    if ((param_2 & 1) == 0) {
      uVar10 = *(ushort *)PTR_DAT_04bb6298;
      uVar16 = (ulong)(short)uVar10;
      if (uVar16 == 0xffffffffffffffff) {
LAB_017f02b8:
        uVar16 = FUN_0180b3e0();
        if (((uVar16 & 1) == 0) && (uVar16 = FUN_0180b340(), (uVar16 & 1) == 0)) {
          uVar16 = FUN_0180b660();
          if ((uVar16 & 1) == 0) {
            uVar16 = FUN_0180b700();
            if ((uVar16 & 1) == 0) {
              return;
            }
            lVar20 = FUN_02643020();
            if (lVar20 == 0) {
              return;
            }
            uVar15 = FUN_0180da90();
            local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar15);
            lVar21 = lVar20 + 0xe0 + (ulong)uVar15 * 0x2488;
            if (5 < uVar15) {
              lVar21 = lVar20 + 0xe0;
            }
LAB_017f05b8:
            local_48 = local_48 & 0xffffffffffffff00;
            goto LAB_017f05bc;
          }
          lVar20 = FUN_016c7ab8();
        }
        else {
LAB_017f02c8:
          lVar20 = FUN_03776f00();
        }
        if (lVar20 == 0) {
          return;
        }
        local_50 = (char *)(lVar20 + 0x380);
        local_48 = local_48 & 0xffffffffffffff00;
        lVar20 = *(long *)(lVar20 + 0x3a8);
      }
      else {
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar10 * 8);
        if (0xff < (uint)(int)(short)uVar10) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 0x19 & 1) == 0) {
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar16 & 0xffffffff) * 8);
          if (0xff < uVar10) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 7 & 1) != 0) {
            local_58 = (undefined *)CONCAT44(local_58._4_4_,*(undefined4 *)(param_1 + 0x138));
            lVar20 = *(long *)PTR_DAT_04bb46b0;
            if (lVar20 == 0) {
              return;
            }
            puVar22 = *(undefined8 **)(lVar20 + 0x10);
            if ((*(byte *)(lVar20 + 0x453) & 1) == 0) {
              lVar20 = (**(code **)(*(long *)*puVar22 + 0x38))();
              if (lVar20 == 0) {
                return;
              }
              lVar20 = lVar20 + 0x70;
            }
            else {
              if (puVar22 == (undefined8 *)0x0) {
                return;
              }
              if ((long *)puVar22[0x26] == (long *)0x0) {
                return;
              }
              lVar20 = (**(code **)(*(long *)puVar22[0x26] + 0x38))();
              if (lVar20 == 0) {
                return;
              }
            }
            if (9 < (uint)local_58) {
              return;
            }
            local_60 = 0;
            lVar21 = lVar20 + 0x1962d8 + ((ulong)local_58 & 0xffffffff) * 0x10d8;
            if (9 < (uint)local_58) {
              lVar21 = lVar20 + 0x1962d8;
            }
            lVar20 = *(long *)(lVar21 + 0x28);
            local_68 = lVar21;
            if (lVar20 == 0) {
              local_5f = 0;
              local_70 = PTR_DAT_04bb6ba8 + 0x10;
              bVar25 = 0;
            }
            else {
              if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
                local_5f = 0;
                local_70 = PTR_DAT_04bb6ba8 + 0x10;
              }
              else {
                local_5f = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
                lVar20 = *(long *)(lVar21 + 0x28);
                local_5f = local_5f & 1;
                local_70 = PTR_DAT_04bb6ba8 + 0x10;
                bVar25 = local_5f;
                if (lVar20 == 0) goto LAB_017f09a0;
              }
              bVar25 = local_5f;
              plVar17 = *(long **)(lVar20 + 0x20);
              if (plVar17 != (long *)0x0) {
                local_58 = *(undefined **)(lVar21 + 8);
                local_50 = *(char **)(lVar21 + 0x10);
                local_48 = 0x12e8;
                (**(code **)(*plVar17 + 0x20))(plVar17,&local_58);
              }
            }
LAB_017f09a0:
            local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
            cVar9 = *(char *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8) + 0x1c4);
            local_74 = (int)cVar9;
            uVar16 = FUN_0290d828();
            if ((uVar16 & 1) == 0) {
              local_58 = PTR_DAT_04bb2020 + 0x10;
              local_50 = "NpcInteriorCoordinate";
              FUN_02743000(&local_58);
              if ((param_3 & 1) != 0) {
                if ((((uint)(int)cVar9 < 10) && (*(long *)puVar11 != 0)) &&
                   (lVar20 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar11 + 0x10) + 0x30
                                         ))(), lVar20 != 0)) {
                  lVar20 = lVar20 + (ulong)(uint)(int)cVar9 * 0x888;
                  local_50 = (char *)(lVar20 + 0x27fbf8);
                  lVar20 = *(long *)(lVar20 + 0x27fc20);
                }
                else {
                  uVar16 = FUN_02663fa0(&local_74);
                  if (((uVar16 & 1) == 0) || (lVar20 = FUN_02663e20(&local_74), lVar20 == 0))
                  goto LAB_017f0b24;
                  local_50 = (char *)(lVar20 + 0x348);
                  lVar20 = *(long *)(lVar20 + 0x370);
                }
                local_48 = local_48 & 0xffffffffffffff00;
                if (lVar20 == 0) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  if (*(undefined8 **)(lVar20 + 0x10) != (undefined8 *)0x0) {
                    uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
                  }
                }
                local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar12,(undefined1)local_48)) &
                           0xffffffffffff01ff;
                local_58 = PTR_DAT_04bbc500 + 0x10;
                uVar18 = FUN_017ebba0(&local_58);
                FUN_028f8f68(*(undefined4 *)(param_1 + 0x1d4),uVar18,
                             *(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x1c8),
                             *(undefined2 *)(param_1 + 0x1cc),*(undefined2 *)(param_1 + 0x1ce),
                             *(undefined1 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1f0),
                             *(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x1fc));
                FUN_02640184(&local_58);
              }
            }
            else {
              if (*(long *)PTR_DAT_04bb2800 == 0) {
                ppuVar19 = &local_70;
                goto LAB_017f0620;
              }
              FUN_028f8f68(*(undefined4 *)(param_1 + 0x1d4),*(long *)PTR_DAT_04bb2800 + 0x2640,
                           *(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x1c8),
                           *(undefined2 *)(param_1 + 0x1cc),*(undefined2 *)(param_1 + 0x1ce),
                           *(undefined1 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1f0),
                           *(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x1fc));
            }
LAB_017f0b24:
            if (bVar25 == 0) {
              return;
            }
            lVar20 = *(long *)(lVar21 + 0x28);
            goto joined_r0x017f0b2c;
          }
        }
        local_58._0_4_ = 6;
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar16 & 0xffffffff) * 8);
        if (0xff < uVar10) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 6 & 1) == 0) {
          local_58 = (undefined *)CONCAT44(local_58._4_4_,0x15);
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar16 & 0xffffffff) * 8);
          if (0xff < uVar10) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 0x15 & 1) == 0) {
            local_58 = (undefined *)CONCAT44(local_58._4_4_,0x19);
            puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar16 & 0xffffffff) * 8);
            if (0xff < uVar10) {
              puVar2 = (uint *)PTR_DAT_04bc39f8;
            }
            if (((*puVar2 >> 0x19 & 1) == 0) ||
               (local_58 = (undefined *)CONCAT44(local_58._4_4_,7), (*puVar2 >> 7 & 1) == 0))
            goto LAB_017f02b8;
            goto LAB_017f02c8;
          }
          uVar16 = FUN_01810f30();
          if (*(long *)PTR_DAT_04bb46b0 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = FUN_026f480c();
          }
          if ((uVar16 & 1) == 0) {
            uVar15 = FUN_0180d8d0();
            if (lVar20 == 0) {
              return;
            }
            if (4 < (int)uVar15) {
              uVar15 = 5;
            }
            lVar21 = lVar20 + 0x118 + (ulong)uVar15 * 0x2488;
            if (5 < uVar15) {
              lVar21 = lVar20 + 0x118;
            }
            goto LAB_017f05b8;
          }
          if (lVar20 == 0) {
            return;
          }
          local_48 = local_48 & 0xffffffffffffff00;
          lVar21 = lVar20 + 0xdc48;
        }
        else {
          local_74 = 0;
          lVar20 = *(long *)PTR_DAT_04bb2720;
          if (lVar20 == 0) {
            puVar22 = &DAT_055c04a0;
          }
          else {
            puVar22 = &DAT_055c04a0;
            if (*(long *)(lVar20 + 0x330) != 0) {
              puVar22 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
              iVar13 = FUN_006bd550(*puVar22,0);
              puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar13 != 0x758f7eaf) {
                puVar22 = &DAT_055c04a0;
              }
            }
          }
          uVar16 = FUN_02b5f400(&local_74,*(undefined4 *)(puVar22 + 7));
          uVar15 = local_74;
          if ((uVar16 & 1) == 0) {
            return;
          }
          uVar14 = FUN_0180da90();
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar14);
          local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar15);
          lVar20 = *(long *)PTR_DAT_04bb46b0;
          if (lVar20 == 0) {
            return;
          }
          puVar22 = *(undefined8 **)(lVar20 + 0x10);
          if ((*(byte *)(lVar20 + 0x453) & 1) == 0) {
            lVar20 = (**(code **)(*(long *)*puVar22 + 0x38))();
            if (lVar20 == 0) {
              return;
            }
            lVar20 = lVar20 + 0x70;
          }
          else {
            if (puVar22 == (undefined8 *)0x0) {
              return;
            }
            if ((long *)puVar22[0x26] == (long *)0x0) {
              return;
            }
            lVar20 = (**(code **)(*(long *)puVar22[0x26] + 0x38))();
            if (lVar20 == 0) {
              return;
            }
          }
          if (7 < (uint)local_58) {
            return;
          }
          lVar4 = lVar20 + 0x119228 + ((ulong)local_58 & 0xffffffff) * 0xfa08;
          if (7 < (uint)local_58) {
            lVar4 = lVar20 + 0x119228;
          }
          local_48 = local_48 & 0xffffffffffffff00;
          lVar21 = lVar4 + 0x1df8 + ((ulong)local_70 & 0xffffffff) * 0x2488;
          if (5 < (uint)local_70) {
            lVar21 = lVar4 + 0x1df8;
          }
        }
LAB_017f05bc:
        local_50 = (char *)(lVar21 + 0x2220);
        lVar20 = *(long *)(lVar21 + 0x2248);
      }
      if (lVar20 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        if (*(undefined8 **)(lVar20 + 0x10) != (undefined8 *)0x0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        }
      }
      local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar12,(undefined1)local_48)) & 0xffffffffffff01ff
      ;
      local_58 = PTR_DAT_04bbc500 + 0x10;
      uVar18 = FUN_017ebba0(&local_58);
      FUN_028f8f68(*(undefined4 *)(param_1 + 0x1d4),uVar18,*(undefined4 *)(param_1 + 0x1c4),
                   *(undefined4 *)(param_1 + 0x1c8),*(undefined2 *)(param_1 + 0x1cc),
                   *(undefined2 *)(param_1 + 0x1ce),*(undefined1 *)(param_1 + 0x1d0),
                   *(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 0x208),
                   *(undefined4 *)(param_1 + 0x1fc));
      ppuVar19 = &local_58;
LAB_017f0620:
      FUN_02640184(ppuVar19);
      return;
    }
    lVar20 = *(long *)PTR_DAT_04bb46b0;
    if (lVar20 == 0) {
      return;
    }
    local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
    if (((*(byte *)(lVar20 + 0x50d) ^ 0xff) & 6) != 0) {
      return;
    }
    lVar20 = (**(code **)(**(long **)(*(long *)(lVar20 + 0x10) + 0x188) + 0x30))();
    if (lVar20 == 0) {
      return;
    }
    lVar21 = *(long *)(lVar20 + 0x5d4288);
    if (lVar21 == 0) {
      uVar16 = 0;
    }
    else {
      if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
        uVar16 = 0;
      }
      else {
        uVar16 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
        lVar21 = *(long *)(lVar20 + 0x5d4288);
        uVar16 = uVar16 & 0xffffffff;
        if (lVar21 == 0) goto LAB_017f0444;
      }
      plVar17 = *(long **)(lVar21 + 0x20);
      if (plVar17 != (long *)0x0) {
        local_58 = *(undefined **)(lVar20 + 0x5d4268);
        local_50 = *(char **)(lVar20 + 0x5d4270);
        local_48 = 0x14;
        (**(code **)(*plVar17 + 0x20))(plVar17,&local_58);
      }
    }
LAB_017f0444:
    uVar14 = *(undefined4 *)(param_1 + 0x1c8);
    iVar5 = *(int *)(param_1 + 0x1f0);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,*(undefined4 *)(param_1 + 0x1c4));
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar14);
    uVar23 = *(undefined4 *)(param_1 + 0x1cc);
    puVar1 = (undefined1 *)(*(long *)(lVar20 + 0x5d4270) + *(long *)(lVar20 + 0x5d4268));
    uVar12 = *(undefined1 *)(param_1 + 0x1d0);
    uVar26 = *(undefined4 *)(param_1 + 0x1d4);
    iVar6 = *(int *)(param_1 + 0x208);
    iVar7 = *(int *)(param_1 + 0x1fc);
    *puVar1 = (char)*(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(puVar1 + 4) = uVar23;
    puVar1[2] = uVar12;
    *(undefined4 *)(puVar1 + 8) = uVar26;
    iVar13 = iVar5;
    if (0xfffd < iVar5) {
      iVar13 = 0xfffe;
    }
    sVar3 = 0;
    if (-2 < iVar5) {
      sVar3 = (short)iVar13 + 1;
    }
    iVar13 = iVar7;
    if (0xfffd < iVar7) {
      iVar13 = 0xfffe;
    }
    *(short *)(puVar1 + 0xc) = sVar3;
    puVar1[1] = (char)uVar14;
    sVar3 = 0;
    if (-2 < iVar7) {
      sVar3 = (short)iVar13 + 1;
    }
    iVar13 = iVar6;
    if (0xfffd < iVar6) {
      iVar13 = 0xfffe;
    }
    *(short *)(puVar1 + 0xe) = sVar3;
    sVar3 = 0;
    if (-2 < iVar6) {
      sVar3 = (short)iVar13 + 1;
    }
    *(short *)(puVar1 + 0x10) = sVar3;
    if ((uVar16 & 1) == 0) {
      return;
    }
    lVar20 = *(long *)(lVar20 + 0x5d4288);
    goto joined_r0x017f0b2c;
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  lVar20 = *(long *)PTR_DAT_04bb46b0;
  if (lVar20 == 0) {
    return;
  }
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  if (((*(byte *)(lVar20 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar20 = (**(code **)(**(long **)(*(long *)(lVar20 + 0x10) + 0x188) + 0x30))();
  if (lVar20 == 0) {
    return;
  }
  if ((*(long *)(lVar20 + 0x5d4288) == 0) ||
     (puVar22 = *(undefined8 **)(*(long *)(lVar20 + 0x5d4288) + 0x10), puVar22 == (undefined8 *)0x0)
     ) {
    uVar16 = 0;
  }
  else {
    uVar16 = (**(code **)*puVar22)();
    uVar16 = uVar16 & 0xffffffff;
  }
  uVar14 = 0xea;
  uVar18 = *(undefined8 *)PTR_DAT_04bb46d0;
  if ((*(short *)(param_1 + 0xbc) == *(short *)PTR_DAT_04bb3170) &&
     (*(int *)(param_1 + 0x208) == -1)) {
    ppuVar19 = (undefined **)(param_1 + 0xb4);
    if (*(short *)ppuVar19 == -2) {
      local_70 = (undefined *)0x139b;
      FUN_0277d4ac(&local_70);
      ppuVar19 = &local_70;
    }
    FUN_01ad5d04(&local_58,ppuVar19);
    uVar14 = FUN_01b020f0(&local_58);
  }
  iVar13 = FUN_017c0190(uVar18,uVar14);
  if ((*(long *)(lVar20 + 0x5d4288) != 0) &&
     (plVar17 = *(long **)(*(long *)(lVar20 + 0x5d4288) + 0x20), plVar17 != (long *)0x0)) {
    local_58 = *(undefined **)(lVar20 + 0x5d4268);
    local_50 = *(char **)(lVar20 + 0x5d4270);
    local_48 = 0x14;
    (**(code **)(*plVar17 + 0x20))(plVar17,&local_58);
  }
  lVar4 = *(long *)(lVar20 + 0x5d4268);
  lVar21 = *(long *)(lVar20 + 0x5d4270) + lVar4;
  lVar24 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar24 == 0) {
    uVar14 = 1;
    uVar23 = 1;
  }
  else {
    iVar5 = *(int *)(lVar24 + 0xe48);
    if (iVar5 == 0x14) {
      uVar14 = *(undefined4 *)(lVar24 + 0xf64);
    }
    else {
      if (iVar5 == 1) {
        uVar14 = 0;
        uVar23 = 0;
        goto LAB_017f0714;
      }
      if ((iVar5 < 2) || (5 < iVar5)) {
        if ((iVar5 < 6) || (0x10 < iVar5)) {
          if ((iVar5 < 0x11) || (0x12 < iVar5)) {
            uVar23 = 1;
            if (iVar5 != 0x14) {
              uVar23 = 2;
            }
            uVar14 = 3;
            if (iVar5 != 0x13) {
              uVar14 = uVar23;
            }
          }
          else {
            uVar14 = 3;
          }
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        uVar14 = 1;
      }
    }
    if (iVar5 == 0x14) {
      uVar23 = *(undefined4 *)(lVar24 + 0xf68);
    }
    else if (iVar5 == 1) {
      uVar23 = 0;
    }
    else if ((iVar5 < 2) || (5 < iVar5)) {
      if ((iVar5 < 6) || (0x10 < iVar5)) {
        if ((0x10 < iVar5) && (iVar5 < 0x13)) goto LAB_017f0904;
        uVar26 = 1;
        if (iVar5 != 0x14) {
          uVar26 = 2;
        }
        uVar23 = 3;
        if (iVar5 != 0x13) {
          uVar23 = uVar26;
        }
      }
      else {
        uVar23 = 2;
      }
    }
    else {
LAB_017f0904:
      uVar23 = 1;
    }
  }
LAB_017f0714:
  local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar14);
  iVar6 = *(int *)(param_1 + 0x1f0);
  iVar7 = *(int *)(param_1 + 0x208);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar23);
  iVar8 = *(int *)(param_1 + 0x1fc);
  *(char *)(lVar4 + *(long *)(lVar20 + 0x5d4270)) = (char)uVar14;
  iVar5 = 0;
  if (iVar13 != -1) {
    iVar5 = iVar13;
  }
  *(undefined2 *)(lVar21 + 4) = 1;
  *(short *)(lVar21 + 6) = (short)iVar5;
  *(undefined1 *)(lVar21 + 2) = 0;
  iVar13 = iVar6;
  if (0xfffd < iVar6) {
    iVar13 = 0xfffe;
  }
  *(undefined4 *)(lVar21 + 8) = 0x3f800000;
  sVar3 = 0;
  if (-2 < iVar6) {
    sVar3 = (short)iVar13 + 1;
  }
  iVar13 = iVar8;
  if (0xfffd < iVar8) {
    iVar13 = 0xfffe;
  }
  *(short *)(lVar21 + 0xc) = sVar3;
  sVar3 = 0;
  if (-2 < iVar8) {
    sVar3 = (short)iVar13 + 1;
  }
  *(char *)(lVar21 + 1) = (char)uVar23;
  *(short *)(lVar21 + 0xe) = sVar3;
  iVar13 = iVar7;
  if (0xfffd < iVar7) {
    iVar13 = 0xfffe;
  }
  sVar3 = 0;
  if (-2 < iVar7) {
    sVar3 = (short)iVar13 + 1;
  }
  *(short *)(lVar21 + 0x10) = sVar3;
  if ((uVar16 & 1) == 0) {
    return;
  }
  lVar20 = *(long *)(lVar20 + 0x5d4288);
joined_r0x017f0b2c:
  if ((lVar20 != 0) && (*(undefined8 **)(lVar20 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar20 + 0x18))();
  }
  return;
}

