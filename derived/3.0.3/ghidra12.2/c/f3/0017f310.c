
undefined8
FUN_0017f310(int param_1,long param_2,uint param_3,long *param_4,uint *param_5,undefined *param_6)

{
  undefined1 *puVar1;
  ushort *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined1 uVar8;
  short sVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined *puVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  ushort uVar34;
  undefined1 uVar35;
  uint uVar36;
  ushort auStack_a0 [5];
  short local_96;
  short local_94;
  short local_92;
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  if (param_3 == 0) {
    uVar24 = *param_5;
LAB_0017f3c8:
    if (local_68._4_2_ == 0) {
      if (local_68._2_2_ == 0) {
        if ((ushort)local_68 == 0) {
          if (local_70._6_2_ == 0) {
            if (local_70._4_2_ == 0) {
              if (local_70._2_2_ == 0) {
                if ((ushort)local_70 == 0) {
                  if (local_78._6_2_ == 0) {
                    if (local_78._4_2_ == 0) {
                      if (local_78._2_2_ == 0) {
                        if ((ushort)local_78 == 0) {
                          if (local_80._6_2_ == 0) {
                            if (local_80._4_2_ == 0) {
                              if (local_80._2_2_ == 0) {
                                puVar21 = (undefined4 *)*param_4;
                                *param_4 = (long)(puVar21 + 1);
                                *puVar21 = 0x140;
                                puVar21 = (undefined4 *)*param_4;
                                *param_4 = (long)(puVar21 + 1);
                                *puVar21 = 0x140;
                                uVar25 = 1;
LAB_0017f960:
                                *param_5 = uVar25;
                                return 0;
                              }
                              bVar6 = false;
                              uVar20 = 0;
                              uVar22 = 1;
                              uVar23 = 1;
                              uVar25 = (uint)(uVar24 != 0);
                              uVar12 = local_80;
                              uVar13 = local_78;
                              uVar14 = local_70;
                              uVar15 = local_68;
                              if ((uVar24 != 0) < 2) {
                                uVar25 = 1;
                              }
                              goto joined_r0x0017f528;
                            }
                            uVar20 = 0;
                            uVar22 = 2;
                          }
                          else {
                            uVar20 = 0;
                            uVar22 = 3;
                          }
                        }
                        else {
                          uVar20 = 0;
                          uVar22 = 4;
                        }
                      }
                      else {
                        uVar20 = 0;
                        uVar22 = 5;
                      }
                    }
                    else {
                      uVar20 = 0;
                      uVar22 = 6;
                    }
                  }
                  else {
                    uVar20 = 0;
                    uVar22 = 7;
                  }
                }
                else {
                  uVar20 = 0;
                  uVar22 = 8;
                }
              }
              else {
                uVar20 = 0;
                uVar22 = 9;
              }
            }
            else {
              uVar20 = 0;
              uVar22 = 10;
            }
          }
          else {
            uVar20 = 0;
            uVar22 = 0xb;
          }
        }
        else {
          uVar20 = 0;
          uVar22 = 0xc;
        }
      }
      else {
        uVar20 = 0;
        uVar22 = 0xd;
      }
    }
    else {
      uVar20 = 0;
      uVar22 = 0xe;
    }
  }
  else {
    if (param_3 == 1) {
      uVar23 = 0;
    }
    else {
      uVar23 = 0;
      do {
        puVar2 = (ushort *)(param_2 + uVar23 * 2);
        uVar23 = uVar23 + 2;
        uVar28 = (ulong)*puVar2;
        uVar27 = (ulong)puVar2[1];
        *(short *)((long)&local_80 + uVar28 * 2) = *(short *)((long)&local_80 + uVar28 * 2) + 1;
        *(short *)((long)&local_80 + uVar27 * 2) = *(short *)((long)&local_80 + uVar27 * 2) + 1;
      } while (((ulong)param_3 & 0xfffffffe) != uVar23);
    }
    if ((param_3 & 1) != 0) {
      uVar23 = (ulong)*(ushort *)(param_2 + uVar23 * 2);
      *(short *)((long)&local_80 + uVar23 * 2) = *(short *)((long)&local_80 + uVar23 * 2) + 1;
    }
    uVar20 = (uint)local_68._6_2_;
    uVar24 = *param_5;
    if (local_68._6_2_ == 0) goto LAB_0017f3c8;
    uVar22 = 0xf;
  }
  uVar23 = (ulong)uVar22;
  uVar27 = 1;
  if (uVar22 <= uVar24) {
    uVar24 = uVar22;
  }
  do {
    uVar25 = uVar24;
    uVar12 = local_80;
    uVar13 = local_78;
    uVar14 = local_70;
    uVar15 = local_68;
    if (*(short *)((long)&local_80 + uVar27 * 2) != 0) {
      bVar6 = true;
      uVar23 = uVar27 & 0xffffffff;
      if (uVar24 <= (uint)uVar27) {
        uVar25 = (uint)uVar27;
      }
      goto joined_r0x0017f528;
    }
    uVar27 = uVar27 + 1;
  } while (uVar23 != uVar27);
  bVar6 = true;
  if (uVar24 <= uVar22) {
    uVar25 = uVar22;
  }
joined_r0x0017f528:
  if (local_80._2_2_ < 3) {
    local_80._4_2_ = (ushort)((ulong)uVar12 >> 0x20);
    uVar24 = (uint)local_80._4_2_ + (uint)local_80._2_2_ * 2;
    if (uVar24 < 5) {
      local_80._6_2_ = (ushort)((ulong)uVar12 >> 0x30);
      uVar24 = (uint)local_80._6_2_ + uVar24 * 2;
      if (uVar24 < 9) {
        local_78._0_2_ = (ushort)uVar13;
        uVar24 = (uint)(ushort)local_78 + uVar24 * 2;
        if (uVar24 < 0x11) {
          local_78._2_2_ = (ushort)((ulong)uVar13 >> 0x10);
          uVar24 = (uint)local_78._2_2_ + uVar24 * 2;
          if (uVar24 < 0x21) {
            local_78._4_2_ = (ushort)((ulong)uVar13 >> 0x20);
            iVar31 = 0x40 - ((uint)local_78._4_2_ + uVar24 * 2);
            if (-1 < iVar31) {
              local_78._6_2_ = (ushort)((ulong)uVar13 >> 0x30);
              iVar31 = iVar31 * 2 - (uint)local_78._6_2_;
              if (-1 < iVar31) {
                local_70._0_2_ = (ushort)uVar14;
                iVar31 = iVar31 * 2 - (uint)(ushort)local_70;
                if (-1 < iVar31) {
                  local_70._2_2_ = (ushort)((ulong)uVar14 >> 0x10);
                  iVar31 = iVar31 * 2 - (uint)local_70._2_2_;
                  if (-1 < iVar31) {
                    local_70._4_2_ = (ushort)((ulong)uVar14 >> 0x20);
                    iVar31 = iVar31 * 2 - (uint)local_70._4_2_;
                    if (-1 < iVar31) {
                      local_70._6_2_ = (ushort)((ulong)uVar14 >> 0x30);
                      iVar31 = iVar31 * 2 - (uint)local_70._6_2_;
                      if (-1 < iVar31) {
                        local_68._0_2_ = (ushort)uVar15;
                        iVar31 = iVar31 * 2 - (uint)(ushort)local_68;
                        if (-1 < iVar31) {
                          local_68._2_2_ = (ushort)((ulong)uVar15 >> 0x10);
                          iVar31 = iVar31 * 2 - (uint)local_68._2_2_;
                          if (-1 < iVar31) {
                            local_68._4_2_ = (ushort)((ulong)uVar15 >> 0x20);
                            iVar31 = iVar31 * 2 - (uint)local_68._4_2_;
                            if ((-1 < iVar31) && (uVar24 = iVar31 * 2, uVar20 <= uVar24)) {
                              if (param_1 == 0) {
                                bVar6 = true;
                              }
                              if ((uVar24 != uVar20) && (bVar6)) {
                                return 0xffffffff;
                              }
                              auStack_a0[1] = 0;
                              auStack_a0[2] = local_80._2_2_;
                              auStack_a0[3] = local_80._4_2_ + local_80._2_2_;
                              auStack_a0[4] = local_80._6_2_ + local_80._4_2_ + local_80._2_2_;
                              local_96 = (ushort)local_78 + auStack_a0[4];
                              local_94 = local_78._2_2_ + local_96;
                              local_92 = local_78._4_2_ + local_94;
                              local_90 = local_78._6_2_ + local_92;
                              local_8e = (ushort)local_70 + local_90;
                              local_8c = local_70._2_2_ + local_8e;
                              local_8a = local_70._4_2_ + local_8c;
                              local_88 = local_70._6_2_ + local_8a;
                              local_86 = (ushort)local_68 + local_88;
                              local_84 = local_68._2_2_ + local_86;
                              local_82 = local_68._4_2_ + local_84;
                              if (param_3 != 0) {
                                uVar27 = 0;
                                do {
                                  uVar28 = (ulong)*(ushort *)(param_2 + uVar27 * 2);
                                  if (uVar28 != 0) {
                                    uVar34 = auStack_a0[uVar28];
                                    *(short *)(param_6 + (ulong)uVar34 * 2) = (short)uVar27;
                                    auStack_a0[uVar28] = uVar34 + 1;
                                  }
                                  uVar27 = uVar27 + 1;
                                } while (param_3 != uVar27);
                              }
                              if (param_1 == 0) {
                                bVar16 = false;
                                bVar6 = false;
                                uVar24 = 0x14;
                                puVar29 = param_6;
                                puVar30 = param_6;
                              }
                              else if (param_1 == 1) {
                                if (9 < uVar25) {
                                  return 1;
                                }
                                bVar16 = false;
                                uVar24 = 0x101;
                                bVar6 = true;
                                puVar29 = &DAT_04108246;
                                puVar30 = &DAT_04108208;
                              }
                              else {
                                bVar16 = param_1 == 2;
                                uVar24 = 0;
                                puVar29 = &UNK_041082c4;
                                puVar30 = &UNK_04108284;
                                if (bVar16) {
                                  bVar6 = false;
                                  if (9 < uVar25) {
                                    return 1;
                                  }
                                }
                                else {
                                  bVar6 = false;
                                }
                              }
                              lVar19 = *param_4;
                              uVar27 = 0;
                              uVar20 = 1 << (ulong)(uVar25 & 0x1f);
                              uVar18 = 0;
                              uVar10 = uVar20 - 1;
                              uVar33 = uVar25;
                              uVar32 = 0xffffffff;
                              uVar17 = 0;
                              do {
                                uVar7 = 1 << (ulong)(uVar33 & 0x1f);
                                do {
                                  do {
                                    uVar34 = *(ushort *)(param_6 + uVar27 * 2);
                                    if (uVar34 + 1 < uVar24) {
                                      uVar35 = 0;
                                    }
                                    else if (uVar34 < uVar24) {
                                      uVar34 = 0;
                                      uVar35 = 0x60;
                                    }
                                    else {
                                      lVar11 = (ulong)(uVar34 - uVar24) * 2;
                                      uVar34 = *(ushort *)(puVar30 + lVar11);
                                      uVar35 = puVar29[lVar11];
                                    }
                                    uVar26 = (uint)uVar23;
                                    iVar31 = -1 << (ulong)(uVar26 - uVar17 & 0x1f);
                                    uVar33 = uVar7;
                                    do {
                                      uVar36 = (uVar18 >> (ulong)(uVar17 & 0x1f)) + iVar31 + uVar33;
                                      uVar33 = uVar33 + iVar31;
                                      puVar1 = (undefined1 *)(lVar19 + (ulong)uVar36 * 4);
                                      *puVar1 = uVar35;
                                      uVar8 = (undefined1)(uVar26 - uVar17);
                                      puVar1[1] = uVar8;
                                      *(ushort *)(puVar1 + 2) = uVar34;
                                    } while (uVar33 != 0);
                                    uVar33 = 1 << (ulong)(uVar26 - 1 & 0x1f);
                                    do {
                                      uVar36 = uVar33;
                                      uVar33 = uVar36 >> 1;
                                    } while ((uVar36 & uVar18) != 0);
                                    uVar27 = (ulong)((int)uVar27 + 1);
                                    uVar33 = uVar36 - 1 & uVar18;
                                    uVar18 = 0;
                                    if (uVar36 != 0) {
                                      uVar18 = uVar33 + uVar36;
                                    }
                                    sVar9 = *(short *)((long)&local_80 + uVar23 * 2) + -1;
                                    *(short *)((long)&local_80 + uVar23 * 2) = sVar9;
                                    if (sVar9 == 0) {
                                      if (uVar26 == uVar22) {
                                        if (uVar18 != 0) {
                                          puVar1 = (undefined1 *)(lVar19 + (ulong)uVar18 * 4);
                                          *puVar1 = 0x40;
                                          puVar1[1] = uVar8;
                                          *(undefined2 *)(puVar1 + 2) = 0;
                                        }
                                        *param_4 = *param_4 + (ulong)uVar20 * 4;
                                        goto LAB_0017f960;
                                      }
                                      uVar23 = (ulong)*(ushort *)
                                                       (param_2 +
                                                       (ulong)*(ushort *)(param_6 + uVar27 * 2) * 2)
                                      ;
                                    }
                                    uVar26 = (uint)uVar23;
                                  } while (uVar26 <= uVar25);
                                  uVar36 = uVar18 & uVar10;
                                } while (uVar36 == uVar32);
                                uVar5 = uVar25;
                                if (uVar17 != 0) {
                                  uVar5 = uVar17;
                                }
                                uVar33 = uVar26 - uVar5;
                                iVar31 = 1 << (ulong)(uVar33 & 0x1f);
                                if (uVar26 < uVar22) {
                                  uVar33 = uVar22 - uVar5;
                                  uVar28 = uVar23;
                                  do {
                                    iVar31 = iVar31 - (uint)*(ushort *)
                                                             ((long)&local_80 + uVar28 * 2);
                                    if (iVar31 < 1) {
                                      uVar33 = (int)uVar28 - uVar5;
                                      break;
                                    }
                                    uVar32 = (int)uVar28 + 1;
                                    uVar28 = (ulong)uVar32;
                                    iVar31 = iVar31 * 2;
                                  } while (uVar32 < uVar22);
                                  iVar31 = 1 << (ulong)(uVar33 & 0x1f);
                                }
                                uVar20 = iVar31 + uVar20;
                                bVar3 = false;
                                if (0x354 < uVar20) {
                                  bVar3 = bVar6;
                                }
                                bVar4 = false;
                                if (0x250 < uVar20) {
                                  bVar4 = bVar16;
                                }
                                if (bVar3) {
                                  return 1;
                                }
                                if (bVar4) {
                                  return 1;
                                }
                                lVar11 = (ulong)uVar36 * 4;
                                lVar19 = lVar19 + (ulong)uVar7 * 4;
                                *(char *)(*param_4 + lVar11) = (char)uVar33;
                                *(char *)(*param_4 + lVar11 + 1) = (char)uVar25;
                                *(short *)(*param_4 + lVar11 + 2) =
                                     (short)((uint)((int)lVar19 - (int)*param_4) >> 2);
                                uVar32 = uVar36;
                                uVar17 = uVar5;
                              } while( true );
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
  return 0xffffffff;
}

