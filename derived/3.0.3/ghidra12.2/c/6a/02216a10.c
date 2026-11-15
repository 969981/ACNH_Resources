
uint FUN_02216a10(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined **local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  undefined2 local_68;
  undefined1 local_66;
  uint local_64;
  
  uVar6 = DAT_04cea100;
  local_b8 = param_1;
  puStack_b0 = param_2;
  plVar12 = (long *)(DAT_04da6480 + 0x4068);
  if (*(short *)(DAT_04da6480 + 0x4070) == 0) {
    if (*(short *)plVar12 == 0) {
      local_98 = *(undefined **)(DAT_04da6480 + 0x4060);
      if ((char)((ulong)local_98 >> 0x20) < '\x05') {
        lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
        local_88 = (undefined *)(lVar9 + -0x15180);
        local_98 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
      }
      uVar13 = (ulong)local_98 >> 0x30;
      local_98._0_6_ = CONCAT24(5,(undefined4)local_98);
      local_98 = (undefined *)(CONCAT26((short)uVar13,(undefined6)local_98) & 0xff00ffffffffffff);
      plVar12 = &local_98;
    }
    local_88 = (undefined *)*plVar12;
  }
  else {
    local_88 = *(undefined **)(DAT_04da6480 + 0x4070);
  }
  uVar7 = FUN_008839a4(uVar6,&local_88);
  if ((uVar7 & 1) != 0) {
    *(undefined4 *)(local_b8 + 0x11) = 0;
    local_b8[0xf] = 0;
    local_b8[0x10] = 0;
    local_b8[0xd] = 0;
    local_b8[0xe] = 0;
    *local_b8 = 0;
    local_b8[0xb] = 0;
    local_b8[0xc] = 0;
    local_b8[9] = 0;
    local_b8[10] = 0;
    local_b8[7] = 0;
    local_b8[8] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[3] = 0;
    local_b8[4] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    *(undefined4 *)(puStack_b0 + 0x11) = 0;
    puStack_b0[0xc] = 0;
    puStack_b0[0xf] = 0;
    puStack_b0[0x10] = 0;
    puStack_b0[0xd] = 0;
    puStack_b0[0xe] = 0;
    puVar1 = PTR_DAT_04bb3768 + 0x10;
    puStack_b0[10] = 0;
    puStack_b0[0xb] = 0;
    puStack_b0[8] = 0;
    puStack_b0[9] = 0;
    puStack_b0[6] = 0;
    puStack_b0[7] = 0;
    puStack_b0[4] = 0;
    puStack_b0[5] = 0;
    puVar2 = PTR_DAT_04bb7648 + 0x10;
    puStack_b0[2] = 0;
    puStack_b0[3] = 0;
    *puStack_b0 = 0;
    puStack_b0[1] = 0;
    uVar14 = 0;
    do {
      uVar13 = (ulong)uVar14;
      if (0x22 < uVar14) {
        uVar13 = 0;
      }
      uVar16 = *(uint *)(param_3 + uVar13 * 4);
      if ((uVar16 & 1) == 0) {
        if ((uVar16 >> 1 & 1) == 0) {
          if ((uVar16 >> 2 & 1) == 0) {
            if ((uVar16 >> 3 & 1) == 0) {
              if ((uVar16 >> 4 & 1) == 0) {
                uVar11 = 5;
                if ((uVar16 >> 5 & 1) == 0) {
                  if ((uVar16 >> 6 & 1) == 0) {
                    if ((uVar16 >> 7 & 1) == 0) {
                      if ((uVar16 >> 8 & 1) == 0) {
                        uVar11 = 9;
                        if ((((uVar16 >> 9 & 1) == 0) && (uVar11 = 10, (uVar16 >> 10 & 1) == 0)) &&
                           (uVar11 = 0xb, (uVar16 >> 0xb & 1) == 0)) {
                          if ((uVar16 >> 0xc & 1) == 0) {
                            uVar11 = 0xd;
                            if ((uVar16 >> 0xd & 1) == 0) {
                              if ((uVar16 >> 0xe & 1) == 0) {
                                if ((uVar16 >> 0xf & 1) == 0) {
                                  if ((uVar16 >> 0x10 & 1) == 0) {
                                    uVar11 = 0x11;
                                    if (((((uVar16 >> 0x11 & 1) == 0) &&
                                         (uVar11 = 0x12, (uVar16 >> 0x12 & 1) == 0)) &&
                                        ((uVar11 = 0x13, (uVar16 >> 0x13 & 1) == 0 &&
                                         ((uVar11 = 0x14, (uVar16 >> 0x14 & 1) == 0 &&
                                          (uVar11 = 0x15, (uVar16 >> 0x15 & 1) == 0)))))) &&
                                       ((uVar11 = 0x16, (uVar16 >> 0x16 & 1) == 0 &&
                                        (uVar11 = 0x17, (uVar16 >> 0x17 & 1) == 0)))) {
                                      if ((uVar16 >> 0x18 & 1) == 0) {
                                        uVar11 = 0x19;
                                        if ((((uVar16 >> 0x19 & 1) == 0) &&
                                            (uVar11 = 0x1a, (uVar16 >> 0x1a & 1) == 0)) &&
                                           (uVar11 = 0x1b, (uVar16 >> 0x1b & 1) == 0)) {
                                          if ((uVar16 >> 0x1c & 1) == 0) {
                                            uVar11 = 0x1d;
                                            if ((uVar16 >> 0x1d & 1) == 0) {
                                              if ((uVar16 >> 0x1e & 1) == 0) {
                                                if (-1 < (int)uVar16) goto LAB_02216c50;
                                                uVar11 = 0x1f;
                                              }
                                              else {
                                                uVar11 = 0x1e;
                                              }
                                            }
                                          }
                                          else {
                                            uVar11 = 0x1c;
                                          }
                                        }
                                      }
                                      else {
                                        uVar11 = 0x18;
                                      }
                                    }
                                  }
                                  else {
                                    uVar11 = 0x10;
                                  }
                                }
                                else {
                                  uVar11 = 0xf;
                                }
                              }
                              else {
                                uVar11 = 0xe;
                              }
                            }
                          }
                          else {
                            uVar11 = 0xc;
                          }
                        }
                      }
                      else {
                        uVar11 = 8;
                      }
                    }
                    else {
                      uVar11 = 7;
                    }
                  }
                  else {
                    uVar11 = 6;
                  }
                }
              }
              else {
                uVar11 = 4;
              }
            }
            else {
              uVar11 = 3;
            }
          }
          else {
            uVar11 = 2;
          }
        }
        else {
          uVar11 = 1;
        }
      }
      else {
LAB_02216c50:
        uVar11 = 0;
      }
      uVar10 = (ulong)uVar14;
      uVar3 = uVar10;
      if (0x22 < uVar14) {
        uVar3 = 0;
      }
      uVar16 = *(uint *)(param_3 + uVar3 * 4);
      local_64 = uVar14;
      if ((int)uVar16 < 0) {
        uVar15 = 0x20;
      }
      else if ((uVar16 >> 0x1e & 1) == 0) {
        if ((uVar16 >> 0x1d & 1) == 0) {
          uVar15 = 0x1d;
          if ((uVar16 >> 0x1c & 1) == 0) {
            if ((uVar16 >> 0x1b & 1) == 0) {
              uVar15 = 0x1b;
              if ((((uVar16 >> 0x1a & 1) == 0) && (uVar15 = 0x1a, (uVar16 >> 0x19 & 1) == 0)) &&
                 (uVar15 = 0x19, (uVar16 >> 0x18 & 1) == 0)) {
                if ((uVar16 >> 0x17 & 1) == 0) {
                  uVar15 = 0x17;
                  if ((((uVar16 >> 0x16 & 1) == 0) && (uVar15 = 0x16, (uVar16 >> 0x15 & 1) == 0)) &&
                     ((uVar15 = 0x15, (uVar16 >> 0x14 & 1) == 0 &&
                      ((((uVar15 = 0x14, (uVar16 >> 0x13 & 1) == 0 &&
                         (uVar15 = 0x13, (uVar16 >> 0x12 & 1) == 0)) &&
                        (uVar15 = 0x12, (uVar16 >> 0x11 & 1) == 0)) &&
                       (uVar15 = 0x11, (uVar16 >> 0x10 & 1) == 0)))))) {
                    if ((uVar16 >> 0xf & 1) == 0) {
                      if ((uVar16 >> 0xe & 1) == 0) {
                        if ((uVar16 >> 0xd & 1) == 0) {
                          uVar15 = 0xd;
                          if ((uVar16 >> 0xc & 1) == 0) {
                            if ((uVar16 >> 0xb & 1) == 0) {
                              uVar15 = 0xb;
                              if ((((uVar16 >> 10 & 1) == 0) &&
                                  (uVar15 = 10, (uVar16 >> 9 & 1) == 0)) &&
                                 (uVar15 = 9, (uVar16 >> 8 & 1) == 0)) {
                                if ((uVar16 >> 7 & 1) == 0) {
                                  if ((uVar16 >> 6 & 1) == 0) {
                                    if ((uVar16 >> 5 & 1) == 0) {
                                      uVar15 = 5;
                                      if ((uVar16 >> 4 & 1) == 0) {
                                        if ((uVar16 >> 3 & 1) == 0) {
                                          if ((uVar16 >> 2 & 1) == 0) {
                                            if ((uVar16 >> 1 & 1) == 0) {
                                              if ((uVar16 & 1) == 0) {
                                                uVar15 = 0;
                                              }
                                              else {
                                                uVar15 = 1;
                                              }
                                            }
                                            else {
                                              uVar15 = 2;
                                            }
                                          }
                                          else {
                                            uVar15 = 3;
                                          }
                                        }
                                        else {
                                          uVar15 = 4;
                                        }
                                      }
                                    }
                                    else {
                                      uVar15 = 6;
                                    }
                                  }
                                  else {
                                    uVar15 = 7;
                                  }
                                }
                                else {
                                  uVar15 = 8;
                                }
                              }
                            }
                            else {
                              uVar15 = 0xc;
                            }
                          }
                        }
                        else {
                          uVar15 = 0xe;
                        }
                      }
                      else {
                        uVar15 = 0xf;
                      }
                    }
                    else {
                      uVar15 = 0x10;
                    }
                  }
                }
                else {
                  uVar15 = 0x18;
                }
              }
            }
            else {
              uVar15 = 0x1c;
            }
          }
        }
        else {
          uVar15 = 0x1e;
        }
      }
      else {
        uVar15 = 0x1f;
      }
LAB_02216e40:
      if (uVar15 != uVar11) {
        local_68 = 0x23;
        local_66 = 8;
        FUN_020fd218(&local_68,uVar10,uVar11);
        local_78 = 8;
        local_6d = 0;
        local_74[0] = 0;
        local_88 = puVar1;
        puStack_80 = local_74;
        FUN_038d1270(&local_88,"-----");
        if ((ulong)(byte)local_68 < 0x23) {
          FUN_038d1270(&local_88,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)(byte)local_68 * 8 + 0xb0),
                       local_68._1_1_);
        }
        local_90 = FUN_0376baa0(&local_88);
        local_a8 = &PTR_LAB_048f9770;
        local_a0 = "IsJoinedTkkFes";
        local_98 = puVar2;
        iVar8 = FUN_0376c020(&local_98,&local_a8);
        uVar10 = (ulong)local_64;
        if (uVar11 < 0x20) {
          ppuVar5 = &puStack_b0;
          if (iVar8 != 0) {
            ppuVar5 = &local_b8;
          }
          puVar4 = (uint *)((long)*ppuVar5 + uVar10 * 4);
          if (0x22 < uVar10) {
            puVar4 = (uint *)*ppuVar5;
          }
          *puVar4 = *puVar4 | 1 << (ulong)(uVar11 & 0x1f);
        }
        uVar16 = *(uint *)(param_3 + uVar13 * 4);
        do {
          uVar11 = uVar11 + 1;
          if (0x1f < uVar11) {
            if ((int)uVar16 < 0) {
              uVar11 = 0x20;
            }
            else if ((uVar16 >> 0x1e & 1) == 0) {
              if ((uVar16 >> 0x1d & 1) == 0) {
                uVar11 = 0x1d;
                if ((uVar16 >> 0x1c & 1) == 0) {
                  if ((uVar16 >> 0x1b & 1) == 0) {
                    uVar11 = 0x1b;
                    if ((((uVar16 >> 0x1a & 1) == 0) && (uVar11 = 0x1a, (uVar16 >> 0x19 & 1) == 0))
                       && (uVar11 = 0x19, (uVar16 >> 0x18 & 1) == 0)) {
                      if ((uVar16 >> 0x17 & 1) == 0) {
                        uVar11 = 0x17;
                        if ((((((uVar16 >> 0x16 & 1) == 0) &&
                              (uVar11 = 0x16, (uVar16 >> 0x15 & 1) == 0)) &&
                             (uVar11 = 0x15, (uVar16 >> 0x14 & 1) == 0)) &&
                            ((uVar11 = 0x14, (uVar16 >> 0x13 & 1) == 0 &&
                             (uVar11 = 0x13, (uVar16 >> 0x12 & 1) == 0)))) &&
                           ((uVar11 = 0x12, (uVar16 >> 0x11 & 1) == 0 &&
                            (uVar11 = 0x11, (uVar16 >> 0x10 & 1) == 0)))) {
                          if ((uVar16 >> 0xf & 1) == 0) {
                            if ((uVar16 >> 0xe & 1) == 0) {
                              if ((uVar16 >> 0xd & 1) == 0) {
                                uVar11 = 0xd;
                                if ((uVar16 >> 0xc & 1) == 0) {
                                  if ((uVar16 >> 0xb & 1) == 0) {
                                    uVar11 = 0xb;
                                    if ((((uVar16 >> 10 & 1) == 0) &&
                                        (uVar11 = 10, (uVar16 >> 9 & 1) == 0)) &&
                                       (uVar11 = 9, (uVar16 >> 8 & 1) == 0)) {
                                      if ((uVar16 >> 7 & 1) == 0) {
                                        if ((uVar16 >> 6 & 1) == 0) {
                                          if ((uVar16 >> 5 & 1) == 0) {
                                            uVar11 = 5;
                                            if ((uVar16 >> 4 & 1) == 0) {
                                              if ((uVar16 >> 3 & 1) == 0) {
                                                if ((uVar16 >> 2 & 1) == 0) {
                                                  uVar11 = uVar16 & 1;
                                                  if ((uVar16 & 2) != 0) {
                                                    uVar11 = 2;
                                                  }
                                                }
                                                else {
                                                  uVar11 = 3;
                                                }
                                              }
                                              else {
                                                uVar11 = 4;
                                              }
                                            }
                                          }
                                          else {
                                            uVar11 = 6;
                                          }
                                        }
                                        else {
                                          uVar11 = 7;
                                        }
                                      }
                                      else {
                                        uVar11 = 8;
                                      }
                                    }
                                  }
                                  else {
                                    uVar11 = 0xc;
                                  }
                                }
                              }
                              else {
                                uVar11 = 0xe;
                              }
                            }
                            else {
                              uVar11 = 0xf;
                            }
                          }
                          else {
                            uVar11 = 0x10;
                          }
                        }
                      }
                      else {
                        uVar11 = 0x18;
                      }
                    }
                  }
                  else {
                    uVar11 = 0x1c;
                  }
                }
              }
              else {
                uVar11 = 0x1e;
              }
            }
            else {
              uVar11 = 0x1f;
            }
            break;
          }
        } while ((uVar16 >> (ulong)(uVar11 & 0x1f) & 1) == 0);
        goto LAB_02216e40;
      }
      uVar16 = 0x23;
      if ((int)uVar14 < 0x23) {
        uVar16 = uVar14 + 1;
      }
      uVar14 = uVar16;
    } while (uVar16 != 0x23);
  }
  return uVar7 & 1;
}

