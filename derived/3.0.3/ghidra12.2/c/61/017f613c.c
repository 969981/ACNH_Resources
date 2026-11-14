
/* WARNING: Removing unreachable block (ram,0x017f6698) */

void FUN_017f613c(ulong param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ushort uVar20;
  undefined8 *puVar21;
  undefined **local_b8;
  char *local_b0;
  undefined1 local_a8;
  byte local_a7;
  int local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 local_54;
  
  iVar12 = (int)param_1;
  *param_2 = 1;
  *param_3 = 1;
  local_58 = iVar12;
  FUN_017f4c38(&local_60,param_1,3);
  FUN_017f4c38(&local_68,param_1 & 0xffffffff,1);
  puVar6 = PTR_DAT_04bb43c0;
  local_70 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_78 = local_60;
  uStack_74 = uStack_5c;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  local_80 = puVar1;
  uVar7 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar6 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar19 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_60);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if (uVar7 < *(uint *)(lVar19 + 0x1d8)) {
        lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8);
        if (lVar19 != 0) {
          local_70 = lVar19;
        }
      }
    }
  }
  uVar8 = FUN_01b01f10(&local_80);
  iVar9 = FUN_0277d6c4(&local_60);
  lVar19 = *(long *)puVar6;
  uVar7 = 0x13e;
  if (iVar9 != 0x2aa6) {
    uVar7 = uVar8;
  }
  local_88 = 0;
  local_90 = local_68;
  uStack_8c = uStack_64;
  local_98 = puVar1;
  uVar8 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar6 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar19 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(&local_68);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if (uVar8 < *(uint *)(lVar19 + 0x1d8)) {
        lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8);
        if (lVar19 != 0) {
          local_88 = lVar19;
        }
      }
    }
  }
  uVar10 = FUN_01b01f10(&local_98);
  iVar9 = FUN_0277d6c4(&local_68);
  uVar8 = 0x13e;
  if (iVar9 != 0x2aa6) {
    uVar8 = uVar10;
  }
  lVar19 = *(long *)PTR_DAT_04bb2720;
  if (lVar19 == 0) {
    puVar21 = &DAT_055c04a0;
  }
  else {
    puVar21 = &DAT_055c04a0;
    if (*(long *)(lVar19 + 0x330) != 0) {
      puVar21 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar19 + 0x338));
      iVar9 = FUN_006bd550(*puVar21,0);
      puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar21 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar21 + 7) == iVar12) {
    if (DAT_05292338 == 0) {
      bVar5 = true;
      goto LAB_017f65b4;
    }
    uVar20 = *(ushort *)(DAT_05292338 + 0xf6c);
  }
  else {
    if (0x427decd < iVar12) {
      if (iVar12 < 0x4d702d55) {
        if (iVar12 < 0x16f2dadc) {
          if (iVar12 != 0x427dece) {
            iVar9 = 0xe716ff8;
            goto LAB_017f6534;
          }
        }
        else if ((iVar12 != 0x16f2dadc) && (iVar12 != 0x1d096e7d)) {
          iVar9 = 0x28c45759;
          goto LAB_017f6534;
        }
      }
      else if (iVar12 < 0x72a13146) {
        if (iVar12 != 0x4d702d55) {
          iVar9 = 0x60c2c4f0;
          goto LAB_017f6534;
        }
      }
      else if ((iVar12 != 0x72a13146) && (iVar12 != 0x7c939885)) {
        iVar9 = 0x77870a84;
        goto LAB_017f6534;
      }
      goto LAB_017f653c;
    }
    if (iVar12 < -0x196792d8) {
      if (iVar12 < -0x66cc4d79) {
        if (iVar12 != -0x7b521843) {
          iVar9 = -0x74337aab;
          goto LAB_017f6534;
        }
      }
      else if ((iVar12 != -0x66cc4d79) && (iVar12 != -0x4772f804)) {
        iVar9 = -0x4701dc58;
        goto LAB_017f6534;
      }
LAB_017f653c:
      uVar11 = FUN_017e4f94(param_1 & 0xffffffff);
      local_b8 = (undefined **)CONCAT44(local_b8._4_4_,uVar11);
      if (DAT_05574040 != 0) {
        puVar21 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar19 = (**(code **)(*(long *)*puVar21 + 0x38))();
          if (lVar19 != 0) {
            lVar19 = lVar19 + 0x70;
            goto LAB_017f659c;
          }
        }
        else if (((puVar21 != (undefined8 *)0x0) && ((long *)puVar21[0x26] != (long *)0x0)) &&
                (lVar19 = (**(code **)(*(long *)puVar21[0x26] + 0x38))(), lVar19 != 0)) {
LAB_017f659c:
          if ((uint)local_b8 < 10) {
            lVar18 = lVar19 + 0x1962d8 + ((ulong)local_b8 & 0xffffffff) * 0x10d8;
            if (9 < (uint)local_b8) {
              lVar18 = lVar19 + 0x1962d8;
            }
            if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
               (puVar21 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar21 == (undefined8 *)0x0)) {
              uVar14 = 0;
            }
            else {
              uVar14 = (**(code **)*puVar21)();
              uVar14 = uVar14 & 0xffffffff;
            }
            cVar3 = *(char *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1c4);
            local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            local_b0 = "NpcInteriorCoordinate";
            local_9c = (int)cVar3;
            iVar12 = FUN_02743000(&local_b8);
            if (iVar12 == 0) {
              uVar15 = FUN_02663fa0(&local_9c);
              if ((uVar15 & 1) != 0) {
                local_54 = 0;
                uVar15 = FUN_02b67a30(&local_54,(int)cVar3);
                if ((uVar15 & 1) != 0) {
                  local_b8 = (undefined **)CONCAT44(local_b8._4_4_,local_54);
                  if (DAT_05574040 == 0) goto LAB_017f6b08;
                  puVar21 = *(undefined8 **)(DAT_05574040 + 0x10);
                  if ((*(byte *)(DAT_05574040 + 0x453) & 1) != 0) {
                    if (((puVar21 != (undefined8 *)0x0) && ((long *)puVar21[0x26] != (long *)0x0))
                       && (lVar19 = (**(code **)(*(long *)puVar21[0x26] + 0x38))(), lVar19 != 0))
                    goto LAB_017f6a10;
                    goto LAB_017f6b08;
                  }
                  lVar19 = (**(code **)(*(long *)*puVar21 + 0x38))();
                  if (lVar19 == 0) goto LAB_017f6b08;
                  lVar19 = lVar19 + 0x70;
LAB_017f6a10:
                  if (9 < (uint)local_b8) goto LAB_017f6b08;
                  lVar16 = lVar19 + 0x1962d8 + ((ulong)local_b8 & 0xffffffff) * 0x10d8;
                  if (9 < (uint)local_b8) {
                    lVar16 = lVar19 + 0x1962d8;
                  }
                  if ((*(long **)(lVar16 + 0xbc0) != (long *)0x0) &&
                     (puVar21 = (undefined8 *)**(long **)(lVar16 + 0xbc0),
                     puVar21 != (undefined8 *)0x0)) {
                    uVar15 = (**(code **)*puVar21)();
                    uVar20 = *(ushort *)(*(long *)(lVar16 + 0xba8) + *(long *)(lVar16 + 0xba0) + 4);
                    if ((uVar15 & 1) == 0) goto joined_r0x017f6c40;
                    lVar19 = *(long *)(lVar16 + 0xbc0);
                    goto joined_r0x017f6a6c;
                  }
                  lVar19 = *(long *)(lVar16 + 0xba0);
                  lVar16 = *(long *)(lVar16 + 0xba8);
LAB_017f6ba8:
                  uVar20 = *(ushort *)(lVar16 + lVar19 + 4);
                  goto joined_r0x017f6c40;
                }
              }
              goto LAB_017f6b08;
            }
            if (DAT_04c487d0 == -1) {
LAB_017f672c:
              uVar15 = FUN_02660600((int)cVar3);
              if ((uVar15 & 1) == 0) {
                uVar15 = FUN_02663fa0(&local_9c);
                if ((uVar15 & 1) != 0) {
                  local_54 = 0;
                  uVar15 = FUN_02b67a30(&local_54,(int)cVar3);
                  if ((uVar15 & 1) != 0) {
                    local_b8 = (undefined **)CONCAT44(local_b8._4_4_,local_54);
                    if (DAT_05574040 != 0) {
                      puVar21 = *(undefined8 **)(DAT_05574040 + 0x10);
                      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
                        lVar19 = (**(code **)(*(long *)*puVar21 + 0x38))();
                        if (lVar19 != 0) {
                          lVar19 = lVar19 + 0x70;
                          goto LAB_017f6afc;
                        }
                      }
                      else if (((puVar21 != (undefined8 *)0x0) &&
                               ((long *)puVar21[0x26] != (long *)0x0)) &&
                              (lVar19 = (**(code **)(*(long *)puVar21[0x26] + 0x38))(), lVar19 != 0)
                              ) {
LAB_017f6afc:
                        if ((uint)local_b8 < 10) {
                          lVar16 = lVar19 + 0x1962d8 + ((ulong)local_b8 & 0xffffffff) * 0x10d8;
                          if (9 < (uint)local_b8) {
                            lVar16 = lVar19 + 0x1962d8;
                          }
                          local_b0 = (char *)(lVar16 + 0xb98);
                          local_a8 = 1;
                          if (*(long **)(lVar16 + 0xbc0) == (long *)0x0) {
                            local_a7 = 0;
                          }
                          else {
                            puVar21 = (undefined8 *)**(long **)(lVar16 + 0xbc0);
                            local_a7 = 0;
                            if (puVar21 != (undefined8 *)0x0) {
                              local_a7 = (**(code **)*puVar21)();
                            }
                          }
                          local_a7 = local_a7 & 1;
                          local_b8 = &PTR_FUN_04992878;
                          uVar20 = *(ushort *)
                                    (*(long *)(lVar16 + 0xba8) + *(long *)(lVar16 + 0xba0) + 4);
                          FUN_02640184(&local_b8);
                          goto joined_r0x017f6c40;
                        }
                      }
                    }
                  }
                }
              }
              else if ((((uint)(int)cVar3 < 10) && (DAT_05574040 != 0)) &&
                      (lVar16 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38)
                                )(), lVar16 != 0)) {
                lVar16 = lVar16 + (ulong)(uint)(int)cVar3 * 0x888;
                if ((*(long **)(lVar16 + 0x27fc20) == (long *)0x0) ||
                   (puVar21 = (undefined8 *)**(long **)(lVar16 + 0x27fc20),
                   puVar21 == (undefined8 *)0x0)) {
                  lVar19 = *(long *)(lVar16 + 0x27fc00);
                  lVar16 = *(long *)(lVar16 + 0x27fc08);
                  goto LAB_017f6ba8;
                }
                uVar15 = (**(code **)*puVar21)();
                uVar20 = *(ushort *)
                          (*(long *)(lVar16 + 0x27fc08) + *(long *)(lVar16 + 0x27fc00) + 4);
                if ((uVar15 & 1) != 0) {
                  lVar19 = *(long *)(lVar16 + 0x27fc20);
joined_r0x017f6a6c:
                  if ((lVar19 != 0) && (*(undefined8 **)(lVar19 + 8) != (undefined8 *)0x0)) {
                    (**(code **)**(undefined8 **)(lVar19 + 8))();
                  }
                }
                goto joined_r0x017f6c40;
              }
LAB_017f6b08:
              uVar20 = 0;
            }
            else {
              local_b8 = (undefined **)CONCAT44(local_b8._4_4_,0x1d);
              puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d0 * 8);
              if (0xff < (uint)(int)DAT_04c487d0) {
                puVar2 = (uint *)PTR_DAT_04bc39f8;
              }
              if ((*puVar2 >> 0x1d & 1) == 0) goto LAB_017f672c;
              if (DAT_053d2ea8 == 0) goto LAB_017f6b08;
              uVar20 = *(ushort *)(DAT_053d2ea8 + 0x2644);
            }
joined_r0x017f6c40:
            if ((((uVar14 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
               (puVar21 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8),
               puVar21 != (undefined8 *)0x0)) {
              (**(code **)*puVar21)();
            }
            goto LAB_017f65b0;
          }
        }
      }
    }
    else {
      if (iVar12 < -0xbf1cc08) {
        if (iVar12 != -0x196792d8) {
          iVar9 = -0x11f68f68;
          goto LAB_017f6534;
        }
        goto LAB_017f653c;
      }
      if ((iVar12 == -0xbf1cc08) || (iVar12 == 0x5f6c88)) goto LAB_017f653c;
      iVar9 = 0x1ac1236;
LAB_017f6534:
      if (iVar12 == iVar9) goto LAB_017f653c;
      uVar14 = FUN_017f37d0(param_1 & 0xffffffff);
      if ((uVar14 & 1) == 0) {
        if (iVar12 < 0x6168e44d) {
          if ((iVar12 != -0x11ea17dc) && (iVar12 != -0x917edf9)) {
            iVar9 = -0x8fb780d;
            goto LAB_017f6930;
          }
        }
        else if ((iVar12 != 0x6168e44d) && (iVar12 != 0x6c9ebc71)) {
          iVar9 = 0x65b7732d;
LAB_017f6930:
          if (iVar12 != iVar9) {
            uVar14 = FUN_0180c6f0();
            if ((((uVar14 & 1) == 0) && (uVar14 = FUN_0180b3e0(), (uVar14 & 1) == 0)) &&
               (uVar14 = FUN_0180b340(), (uVar14 & 1) == 0)) {
              uVar14 = FUN_0180b660();
              if ((uVar14 & 1) == 0) {
                uVar14 = FUN_0180b700();
                if ((uVar14 & 1) != 0) {
                  uVar11 = FUN_017f4660(&local_58);
                  local_b8 = (undefined **)CONCAT44(local_b8._4_4_,uVar11);
                  lVar18 = FUN_02643020();
                  if (lVar18 != 0) {
                    lVar19 = lVar18 + 0xe0 + ((ulong)local_b8 & 0xffffffff) * 0x2488;
                    if (5 < (uint)local_b8) {
                      lVar19 = lVar18 + 0xe0;
                    }
                    plVar17 = *(long **)(lVar19 + 9000);
                    goto joined_r0x017f6858;
                  }
                }
                goto LAB_017f65a8;
              }
              lVar19 = FUN_016c7ab8();
            }
            else {
              lVar19 = FUN_03776f00();
            }
            if (lVar19 != 0) {
              local_b0 = (char *)(lVar19 + 0x460);
              local_a8 = 1;
              if (*(long **)(lVar19 + 0x488) == (long *)0x0) {
                local_a7 = 0;
              }
              else {
                puVar21 = (undefined8 *)**(long **)(lVar19 + 0x488);
                local_a7 = 0;
                if (puVar21 != (undefined8 *)0x0) {
                  local_a7 = (**(code **)*puVar21)();
                }
              }
              local_a7 = local_a7 & 1;
              lVar18 = *(long *)(lVar19 + 0x468);
              lVar19 = *(long *)(lVar19 + 0x470);
              goto LAB_017f6cb8;
            }
            goto LAB_017f65a8;
          }
        }
        uVar14 = FUN_01810f30();
        if (*(long *)PTR_DAT_04bb46b0 == 0) {
          lVar19 = 0;
        }
        else {
          lVar19 = FUN_026f480c();
        }
        if ((uVar14 & 1) == 0) {
          if (lVar19 != 0) {
            uVar14 = FUN_017f4660(&local_58);
            lVar19 = lVar19 + (uVar14 & 0xffffffff) * 0x2488;
            local_b0 = (char *)(lVar19 + 0x2418);
            local_a8 = 1;
            if (*(long **)(lVar19 + 0x2440) == (long *)0x0) {
              local_a7 = 0;
            }
            else {
              puVar21 = (undefined8 *)**(long **)(lVar19 + 0x2440);
              local_a7 = 0;
              if (puVar21 != (undefined8 *)0x0) {
                local_a7 = (**(code **)*puVar21)();
              }
            }
            local_a7 = local_a7 & 1;
            lVar18 = *(long *)(lVar19 + 0x2420);
            lVar19 = *(long *)(lVar19 + 0x2428);
            goto LAB_017f6cb8;
          }
        }
        else if (lVar19 != 0) {
          local_b0 = (char *)(lVar19 + 0xff48);
          local_a8 = 1;
          if (*(long **)(lVar19 + 0xff70) == (long *)0x0) {
            local_a7 = 0;
          }
          else {
            puVar21 = (undefined8 *)**(long **)(lVar19 + 0xff70);
            local_a7 = 0;
            if (puVar21 != (undefined8 *)0x0) {
              local_a7 = (**(code **)*puVar21)();
            }
          }
          local_a7 = local_a7 & 1;
          lVar18 = *(long *)(lVar19 + 0xff50);
          lVar19 = *(long *)(lVar19 + 0xff58);
LAB_017f6cb8:
          local_b8 = &PTR_FUN_049c4bc8;
          uVar20 = *(ushort *)(lVar19 + lVar18);
          FUN_02640184(&local_b8);
          goto LAB_017f65b0;
        }
      }
      else {
        uVar11 = FUN_017f6cc8(param_1 & 0xffffffff);
        uVar13 = FUN_017f4660(&local_58);
        lVar19 = FUN_0266c880(uVar11,uVar13);
        if (lVar19 != 0) {
          plVar17 = *(long **)(lVar19 + 9000);
joined_r0x017f6858:
          local_b0 = (char *)(lVar19 + 0x2300);
          if (plVar17 == (long *)0x0) {
            local_a8 = 1;
            local_a7 = 0;
          }
          else {
            local_a8 = 1;
            local_a7 = 0;
            if ((undefined8 *)*plVar17 != (undefined8 *)0x0) {
              local_a7 = (*(code *)**(undefined8 **)*plVar17)();
            }
          }
          local_a7 = local_a7 & 1;
          lVar18 = *(long *)(lVar19 + 0x2308);
          lVar19 = *(long *)(lVar19 + 0x2310);
          goto LAB_017f6cb8;
        }
      }
    }
LAB_017f65a8:
    uVar20 = 0;
  }
LAB_017f65b0:
  bVar5 = (uVar20 & 2) == 0;
LAB_017f65b4:
  puVar1 = PTR_DAT_04bb46d0;
  if (((uVar7 ^ 0xffffffff) & 0xffff) != 0) {
    iVar12 = FUN_017c1ba0(*(undefined8 *)PTR_DAT_04bb46d0,uVar7,1);
    bVar4 = false;
    if (iVar12 != 0) {
      bVar4 = bVar5;
    }
    if (!bVar4) {
      *param_2 = 0;
    }
  }
  if (((uVar8 ^ 0xffffffff) & 0xffff) != 0) {
    iVar12 = FUN_017c1ba0(*(undefined8 *)puVar1,uVar8,1);
    bVar4 = false;
    if (iVar12 != 0) {
      bVar4 = bVar5;
    }
    if (!bVar4) {
      *param_3 = 0;
    }
  }
  return;
}

