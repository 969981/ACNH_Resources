
void FUN_0122e1d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  uint *puVar24;
  undefined4 uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  undefined *local_c0;
  undefined8 local_b8;
  char *local_a4;
  uint local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  byte local_80;
  undefined *local_78;
  undefined8 local_70;
  uint *local_68;
  
  uVar16 = FUN_02640eb0();
  puVar13 = PTR_DAT_04bbbf90;
  puVar12 = PTR_DAT_04bb6268;
  if (((uVar16 & 1) != 0) &&
     (((lVar22 = *(long *)PTR_DAT_04bb27d0, lVar22 == 0 || (*(long *)(lVar22 + 0x28) == 0)) ||
      (*(int *)(lVar22 + 0x80) != 1)))) {
    sVar10 = *(short *)PTR_DAT_04bb6298;
    if (sVar10 != -1) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8;
      if (0xff < (uint)(int)sVar10) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        return;
      }
    }
    if ((DAT_0514f764 == '\x01') && ((DAT_0514f765 & 1) == 0)) {
      uVar16 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puVar2 = PTR_DAT_04bb6268 + 0x10;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      puVar4 = PTR_DAT_04bbfe68 + 0x10;
      puVar5 = PTR_DAT_04bc0510 + 0x10;
      do {
        iVar14 = *(int *)((long)&DAT_0514e4c0 + uVar16 * 4);
        uVar26 = (uint)uVar16;
        if (iVar14 == 7) {
          local_a4 = (char *)CONCAT44(local_a4._4_4_,uVar26);
          local_70 = "TodayFortune";
          local_78 = puVar1;
          iVar14 = FUN_0274ce10(&local_a4,&local_78);
          local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar14);
          if (iVar14 == 2) goto LAB_0122e334;
          uStack_84 = *(undefined4 *)(puVar13 + 0xc);
          local_88 = 1;
          local_80 = FUN_017baf44();
          iVar8 = *(int *)(&DAT_0514e448 + uVar16 * 2);
          iVar28 = *(int *)((long)&DAT_0514e448 + uVar16 * 0x10 + 4);
          local_80 = local_80 & 1;
          iVar14 = iVar28 + 2;
          iVar27 = iVar8;
          local_90 = puVar2;
          do {
            local_b8 = (char *)CONCAT44(iVar28,iVar27);
            local_c0 = puVar3;
            FUN_01a5033c(&local_98,&local_90,0,&local_c0,0);
            if ((short)local_98 != -2) {
              lVar22 = *(long *)PTR_DAT_04bb46b0;
              if (lVar22 == 0) {
                lVar22 = 0;
              }
              else {
                puVar23 = *(undefined8 **)(lVar22 + 0x10);
                if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
                  lVar17 = (**(code **)(*(long *)*puVar23 + 0x38))();
                  lVar22 = 0;
                  if (lVar17 != 0) {
                    lVar22 = lVar17 + 0x70;
                  }
                }
                else if (puVar23 == (undefined8 *)0x0) {
                  lVar22 = 0;
                }
                else {
                  lVar22 = 0;
                  if ((long *)puVar23[0x26] != (long *)0x0) {
                    lVar22 = (**(code **)(*(long *)puVar23[0x26] + 0x38))();
                  }
                }
              }
              plVar20 = (long *)(lVar22 + 0x1c24c8);
              lVar22 = *(long *)(lVar22 + 0x1c24e8);
              if (lVar22 == 0) goto LAB_0122ebd0;
              puVar23 = *(undefined8 **)(lVar22 + 0x10);
              goto joined_r0x0122eb98;
            }
            if (iVar27 < iVar8 + 1) {
              iVar27 = iVar27 + 1;
            }
            else {
              iVar28 = iVar28 + 1;
              iVar27 = iVar8;
            }
          } while ((iVar8 != iVar27) || (iVar14 != iVar28));
          lVar22 = (long)(uVar16 << 0x20) >> 0x1c;
          FUN_0122d200(uVar16 & 0xffffffff,(long)&DAT_0514e440 + lVar22);
          lVar17 = *(long *)PTR_DAT_04bb46b0;
          if (lVar17 == 0) {
            lVar17 = 0;
          }
          else {
            puVar23 = *(undefined8 **)(lVar17 + 0x10);
            if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
              lVar18 = (**(code **)(*(long *)*puVar23 + 0x38))();
              lVar17 = 0;
              if (lVar18 != 0) {
                lVar17 = lVar18 + 0x70;
              }
            }
            else if (puVar23 == (undefined8 *)0x0) {
              lVar17 = 0;
            }
            else {
              lVar17 = 0;
              if ((long *)puVar23[0x26] != (long *)0x0) {
                lVar17 = (**(code **)(*(long *)puVar23[0x26] + 0x38))();
              }
            }
          }
          lVar18 = *(long *)(lVar17 + 0x1c24e8);
          if (lVar18 == 0) {
            uVar19 = 0;
          }
          else {
            if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
              uVar19 = 0;
            }
            else {
              uVar19 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
              lVar18 = *(long *)(lVar17 + 0x1c24e8);
              uVar19 = uVar19 & 0xffffffff;
              if (lVar18 == 0) goto LAB_0122ec98;
            }
            plVar20 = *(long **)(lVar18 + 0x20);
            if (plVar20 != (long *)0x0) {
              local_78 = *(undefined **)(lVar17 + 0x1c24c8);
              local_70 = *(char **)(lVar17 + 0x1c24d0);
              local_68 = (uint *)0x928;
              (**(code **)(*plVar20 + 0x20))(plVar20,&local_78);
            }
          }
LAB_0122ec98:
          puVar24 = (uint *)(*(long *)(lVar17 + 0x1c24d0) + *(long *)(lVar17 + 0x1c24c8) + 0x904);
          puVar7 = puVar24 + uVar16;
          if (7 < uVar26) {
            puVar7 = puVar24;
          }
          *puVar7 = *(uint *)((long)&DAT_0514e448 + lVar22) & 0x3ff |
                    (*(uint *)((long)&DAT_0514e448 + lVar22 + 4) & 0x3ff) << 10 | 0x100000;
          if ((((uVar19 & 1) != 0) && (*(long *)(lVar17 + 0x1c24e8) != 0)) &&
             (puVar23 = *(undefined8 **)(*(long *)(lVar17 + 0x1c24e8) + 0x18),
             puVar23 != (undefined8 *)0x0)) {
            (**(code **)*puVar23)();
          }
          *(undefined4 *)((long)&DAT_0514e4c0 + (long)(int)uVar26 * 4) = 1;
        }
        else if (iVar14 == 2) {
          uVar19 = FUN_011de910(&DAT_0514e440 + uVar16 * 2);
          if ((uVar19 & 1) == 0) {
            uStack_84 = *(undefined4 *)(puVar13 + 0xc);
            local_88 = 1;
            local_80 = FUN_017baf44();
            local_80 = local_80 & 1;
            local_90 = puVar12 + 0x10;
            FUN_01a5033c(&local_c0,&local_90,0,&DAT_0514e440 + uVar16 * 2,0);
            iVar14 = FUN_0277d6c4(&local_c0);
            if (iVar14 != 0xea79) {
              lVar22 = *(long *)PTR_DAT_04bb46b0;
              if (lVar22 == 0) {
LAB_0122e8d8:
                lVar22 = 0;
              }
              else {
                puVar23 = *(undefined8 **)(lVar22 + 0x10);
                if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
                  lVar17 = (**(code **)(*(long *)*puVar23 + 0x38))();
                  lVar22 = 0;
                  if (lVar17 != 0) {
                    lVar22 = lVar17 + 0x70;
                  }
                }
                else {
                  if (puVar23 == (undefined8 *)0x0) goto LAB_0122e8d8;
                  lVar22 = 0;
                  if ((long *)puVar23[0x26] != (long *)0x0) {
                    lVar22 = (**(code **)(*(long *)puVar23[0x26] + 0x38))();
                  }
                }
              }
              lVar17 = *(long *)(lVar22 + 0x1c24e8);
              if (lVar17 == 0) {
                uVar19 = 0;
              }
              else {
                if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
                  lVar17 = *(long *)(lVar22 + 0x1c24e8);
                  uVar19 = uVar19 & 0xffffffff;
                  if (lVar17 == 0) goto LAB_0122e96c;
                }
                plVar20 = *(long **)(lVar17 + 0x20);
                if (plVar20 != (long *)0x0) {
                  local_78 = *(undefined **)(lVar22 + 0x1c24c8);
                  local_70 = *(char **)(lVar22 + 0x1c24d0);
                  local_68 = (uint *)0x928;
                  (**(code **)(*plVar20 + 0x20))(plVar20,&local_78);
                }
              }
LAB_0122e96c:
              puVar24 = (uint *)(*(long *)(lVar22 + 0x1c24d0) + *(long *)(lVar22 + 0x1c24c8) + 0x904
                                );
              puVar7 = puVar24 + uVar16;
              if ((uVar16 & 0xfffffff8) != 0) {
                puVar7 = puVar24;
              }
              *puVar7 = *puVar7 & 0xff8fffff | 0x300000;
              if ((((uVar19 & 1) != 0) && (*(long *)(lVar22 + 0x1c24e8) != 0)) &&
                 (puVar23 = *(undefined8 **)(*(long *)(lVar22 + 0x1c24e8) + 0x18),
                 puVar23 != (undefined8 *)0x0)) {
                (**(code **)*puVar23)();
              }
              *(undefined4 *)((long)&DAT_0514e4c0 + uVar16 * 4) = 3;
            }
          }
        }
        else if (iVar14 == 1) {
          uStack_84 = *(undefined4 *)(puVar13 + 0xc);
          local_88 = 1;
          local_90 = puVar4;
          local_80 = FUN_017baf44();
          local_80 = local_80 & 1;
          puVar23 = &DAT_0514e440 + uVar16 * 2;
          local_90 = puVar12 + 0x10;
          FUN_01a5033c(&local_98,&local_90,0,puVar23,0);
          local_9c = uVar26;
          iVar14 = FUN_0277d6c4(&local_98);
          puVar11 = PTR_DAT_04bb43c0;
          if (iVar14 == 0xea79) {
            lVar22 = *(long *)PTR_DAT_04bb46b0;
            if (lVar22 == 0) {
LAB_0122e6f4:
              lVar22 = 0;
            }
            else {
              puVar23 = *(undefined8 **)(lVar22 + 0x10);
              if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
                lVar17 = (**(code **)(*(long *)*puVar23 + 0x38))();
                lVar22 = 0;
                if (lVar17 != 0) {
                  lVar22 = lVar17 + 0x70;
                }
              }
              else {
                if (puVar23 == (undefined8 *)0x0) goto LAB_0122e6f4;
                lVar22 = 0;
                if ((long *)puVar23[0x26] != (long *)0x0) {
                  lVar22 = (**(code **)(*(long *)puVar23[0x26] + 0x38))();
                }
              }
            }
            lVar17 = *(long *)(lVar22 + 0x1c24e8);
            if (lVar17 == 0) {
              uVar19 = 0;
            }
            else {
              if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
                uVar19 = 0;
                plVar20 = *(long **)(lVar17 + 0x20);
              }
              else {
                uVar19 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
                uVar19 = uVar19 & 0xffffffff;
                if (*(long *)(lVar22 + 0x1c24e8) == 0) goto LAB_0122e770;
                plVar20 = *(long **)(*(long *)(lVar22 + 0x1c24e8) + 0x20);
              }
              if (plVar20 != (long *)0x0) {
                local_78 = *(undefined **)(lVar22 + 0x1c24c8);
                local_70 = *(char **)(lVar22 + 0x1c24d0);
                local_68 = (uint *)0x928;
                (**(code **)(*plVar20 + 0x20))(plVar20,&local_78);
              }
            }
LAB_0122e770:
            puVar24 = (uint *)(*(long *)(lVar22 + 0x1c24d0) + *(long *)(lVar22 + 0x1c24c8) + 0x904);
            puVar7 = puVar24 + uVar16;
            if (7 < uVar26) {
              puVar7 = puVar24;
            }
            *puVar7 = *puVar7 & 0xff8fffff | 0x200000;
            if ((((uVar19 & 1) != 0) && (*(long *)(lVar22 + 0x1c24e8) != 0)) &&
               (puVar23 = *(undefined8 **)(*(long *)(lVar22 + 0x1c24e8) + 0x18),
               puVar23 != (undefined8 *)0x0)) {
              (**(code **)*puVar23)();
            }
            uVar19 = -(uVar16 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar16 & 0xffffffff) << 2;
            uVar25 = 2;
          }
          else {
            lVar22 = *(long *)PTR_DAT_04bb43c0;
            uVar15 = FUN_0277d6c4(&local_98);
            lVar17 = *(long *)puVar11;
            if (lVar17 != 0) {
              lVar22 = *(long *)(lVar22 + 0x57e58);
              uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
              if ((uVar15 < *(uint *)(lVar22 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                local_68 = (uint *)0x0;
                local_70 = (char *)CONCAT44(uStack_94,local_98);
                local_78 = puVar5;
                uVar15 = FUN_0277d6c4(&local_70);
                if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_0122e7f8:
                  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x86);
                  if (local_68 != (uint *)0x0) goto LAB_0122e808;
                  uVar15 = 0xbc;
                }
                else {
                  lVar22 = *(long *)(lVar17 + 0x57e58);
                  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                  if ((*(uint *)(lVar22 + 0x1d8) <= uVar15) ||
                     (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar15 * 8) == 0))
                  goto LAB_0122e7f8;
                  lVar22 = *(long *)PTR_DAT_04bc0428;
                  uVar15 = FUN_0277d6c4(&local_98);
                  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                  if ((*(uint *)(lVar22 + 0x1d8) <= uVar15) ||
                     (puVar24 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar15 * 8),
                     puVar24 == (uint *)0x0)) goto LAB_0122e7f8;
                  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x86);
                  local_68 = puVar24;
LAB_0122e808:
                  uVar9 = *local_68;
                  uVar15 = 0;
                  if ((uVar9 != 0) && (local_68 != (uint *)(ulong)uVar9)) {
                    puVar24 = (uint *)((long)local_68 - (long)(ulong)uVar9);
                    uVar15 = 0;
                    if (*puVar24 != 0) {
                      uVar15 = puVar24[1];
                      if ((uVar15 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
                        lVar22 = 0xc;
                        if (*(char *)((long)puVar24 + 10) != '\0') {
                          lVar22 = 0x1c;
                        }
                        lVar22 = (long)puVar24 + lVar22 + (ulong)(ushort)puVar24[2] * 8;
                        if (lVar22 != 0) {
                          uVar9 = 0;
                          if ((ulong)uVar15 != 0) {
                            uVar9 = (uint)((ulong)((long)local_68 - lVar22) / (ulong)uVar15);
                          }
                          if (*puVar24 <= uVar9) {
                            uVar9 = 0xffffffff;
                          }
                          if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
                             (uVar15 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar9 * 2), uVar15 < 0xbd))
                          goto LAB_0122e9c4;
                        }
                      }
                      uVar15 = 0;
                    }
                  }
                }
LAB_0122e9c4:
                local_a4 = (char *)CONCAT44(local_a4._4_4_,uVar15);
                if (uVar15 == (uint)local_c0) {
                  uVar19 = FUN_01ae59b0(&local_78);
                  bVar6 = local_70._2_1_ >> 2 & 1;
                  if ((uVar19 & 1) == 0) {
                    bVar6 = local_70._2_1_ & 4;
                  }
                  if (bVar6 != 0) {
                    iVar14 = FUN_0277d6c4(&local_98);
                    if (iVar14 == 0x842) {
                      local_c0 = PTR_DAT_04bb2020 + 0x10;
                      local_b8 = "TodayFortune";
                      iVar14 = FUN_0274ce10(&local_9c,&local_c0);
                      if (iVar14 == 1) {
                        FUN_011f3520(&local_90,0,puVar23);
                        local_a4 = (char *)0x846;
                        FUN_0277d4ac(&local_a4);
                        FUN_01ad5d04(&local_c0,&local_a4);
                        FUN_01b152b8(&local_c0);
                        local_a4 = local_b8;
                        FUN_01a50ae4(&local_90,&local_a4,puVar23);
                      }
                    }
                    local_c0 = PTR_DAT_04bb2020 + 0x10;
                    local_b8 = "TodayFortune";
                    iVar14 = FUN_0274ce10(&local_9c,&local_c0);
                    if (iVar14 == 2) {
                      FUN_011f3520(&local_90,0,puVar23);
                      FUN_0122ca88(uVar16 & 0xffffffff);
                    }
                    goto LAB_0122e334;
                  }
                }
              }
            }
            lVar22 = *(long *)PTR_DAT_04bb46b0;
            if (lVar22 == 0) {
              lVar22 = 0;
            }
            else {
              puVar23 = *(undefined8 **)(lVar22 + 0x10);
              if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
                lVar17 = (**(code **)(*(long *)*puVar23 + 0x38))();
                lVar22 = 0;
                if (lVar17 != 0) {
                  lVar22 = lVar17 + 0x70;
                }
              }
              else if (puVar23 == (undefined8 *)0x0) {
                lVar22 = 0;
              }
              else {
                lVar22 = 0;
                if ((long *)puVar23[0x26] != (long *)0x0) {
                  lVar22 = (**(code **)(*(long *)puVar23[0x26] + 0x38))();
                }
              }
            }
            plVar20 = (long *)(lVar22 + 0x1c24c8);
            lVar22 = *(long *)(lVar22 + 0x1c24e8);
            if (lVar22 == 0) {
LAB_0122ebd0:
              uVar19 = 0;
            }
            else {
              puVar23 = *(undefined8 **)(lVar22 + 0x10);
joined_r0x0122eb98:
              if (puVar23 == (undefined8 *)0x0) {
                uVar19 = 0;
                plVar21 = *(long **)(lVar22 + 0x20);
              }
              else {
                uVar19 = (**(code **)*puVar23)();
                uVar19 = uVar19 & 0xffffffff;
                if (plVar20[4] == 0) goto LAB_0122ebd4;
                plVar21 = *(long **)(plVar20[4] + 0x20);
              }
              if (plVar21 != (long *)0x0) {
                local_78 = (undefined *)*plVar20;
                local_70 = (char *)plVar20[1];
                local_68 = (uint *)0x928;
                (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
              }
            }
LAB_0122ebd4:
            puVar24 = (uint *)(plVar20[1] + *plVar20 + 0x904);
            puVar7 = puVar24 + uVar16;
            if (7 < uVar26) {
              puVar7 = puVar24;
            }
            *puVar7 = *puVar7 & 0xff8fffff | 0x300000;
            if ((((uVar19 & 1) != 0) && (plVar20[4] != 0)) &&
               (puVar23 = *(undefined8 **)(plVar20[4] + 0x18), puVar23 != (undefined8 *)0x0)) {
              (**(code **)*puVar23)();
            }
            uVar19 = -(uVar16 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar16 & 0xffffffff) << 2;
            uVar25 = 3;
          }
          *(undefined4 *)((long)&DAT_0514e4c0 + uVar19) = uVar25;
        }
LAB_0122e334:
        uVar16 = uVar16 + 1;
      } while (uVar16 != 8);
    }
  }
  return;
}

