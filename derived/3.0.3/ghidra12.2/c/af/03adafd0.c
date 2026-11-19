
/* WARNING: Type propagation algorithm not settling */

void FUN_03adafd0(long *param_1,ulong param_2,long param_3,undefined4 param_4,long param_5,
                 long param_6,undefined4 param_7)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  byte *pbVar20;
  uint uVar21;
  ushort *puVar22;
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  long lVar26;
  ushort *puVar27;
  long lVar28;
  uint *puVar29;
  long *plVar30;
  long lVar31;
  ushort *puVar32;
  ulong uVar33;
  undefined8 *puVar34;
  int iVar35;
  float fVar36;
  undefined4 uVar37;
  bool local_6ac;
  char local_6ab;
  byte local_6aa;
  byte local_6a9;
  undefined4 local_6a8 [2];
  uint local_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  ulong local_690;
  undefined4 local_688;
  undefined1 local_670;
  undefined8 local_66c;
  undefined4 local_65c;
  undefined1 local_640;
  undefined8 local_63c;
  undefined4 local_62c;
  undefined1 local_610;
  undefined8 local_60c;
  undefined4 local_5fc;
  undefined1 local_5e0;
  undefined8 local_5dc;
  undefined4 local_5cc;
  undefined1 local_5b0;
  undefined8 local_5ac;
  undefined4 local_59c;
  undefined1 local_580;
  undefined8 local_57c;
  undefined4 local_56c;
  undefined1 local_550;
  undefined8 local_54c;
  undefined4 local_53c;
  undefined1 local_520;
  undefined8 local_51c;
  undefined4 local_50c;
  undefined1 local_4f0;
  undefined8 local_4ec;
  undefined4 local_4dc;
  undefined1 local_4c0;
  undefined8 local_4bc;
  undefined4 local_4ac;
  undefined1 local_490;
  undefined8 local_48c;
  undefined4 local_47c;
  undefined1 local_460;
  undefined8 local_45c;
  undefined4 local_44c;
  undefined1 local_430;
  undefined8 local_42c;
  undefined4 local_41c;
  undefined1 local_400;
  undefined8 local_3fc;
  undefined4 local_3ec;
  undefined1 local_3d0;
  undefined8 local_3cc;
  undefined4 local_3bc;
  undefined1 local_3a0;
  undefined8 local_39c;
  undefined4 local_38c;
  undefined1 local_370;
  undefined8 local_36c;
  undefined4 local_35c;
  undefined1 local_340;
  undefined8 local_33c;
  undefined4 local_32c;
  undefined1 local_310;
  undefined8 local_30c;
  undefined4 local_2fc;
  undefined1 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2cc;
  undefined1 local_2b0;
  undefined8 local_2ac;
  undefined4 local_29c;
  undefined1 local_280;
  undefined8 local_27c;
  undefined4 local_26c;
  undefined1 local_250;
  undefined8 local_24c;
  undefined4 local_23c;
  undefined1 local_220;
  undefined8 local_21c;
  undefined4 local_20c;
  undefined1 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1dc;
  undefined1 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1ac;
  undefined1 local_190;
  undefined8 local_18c;
  undefined4 local_17c;
  undefined1 local_160;
  undefined8 local_15c;
  undefined4 local_14c;
  undefined1 local_130;
  undefined8 local_12c;
  undefined4 local_11c;
  undefined1 local_100;
  undefined8 local_fc;
  undefined4 local_ec;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined4 local_bc;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_8c;
  
  if (*(int *)((long)param_1 + 0xa4) == 0) {
    return;
  }
  if ((*(byte *)((long)param_1 + 0xae) >> 2 & 1) != 0) {
    plVar30 = param_1 + 0x10;
    uVar18 = (**(code **)(*plVar30 + 0x10))(plVar30);
    if ((uVar18 & 1) != 0) {
      local_6a8[0] = 0;
      local_688 = 0xffffffff;
      local_6a0 = (uint)param_1;
      uStack_69c = (undefined4)((ulong)param_1 >> 0x20);
      uStack_698 = 0;
      uStack_694 = 0;
      local_690 = 0;
      (**(code **)param_1[0x10])(plVar30,local_6a8);
    }
  }
  uVar17 = *(uint *)((long)param_1 + 0xa4) & *(uint *)(param_5 + 0x55ac);
  uVar18 = (ulong)*(ushort *)((long)param_1 + 0xac) & param_2 & 0xffffffff;
  if (((param_6 != 0) && (0 < *(int *)(param_6 + 0x10))) && (*(long *)(param_6 + 8) != param_6)) {
    lVar28 = (long)*(int *)(param_6 + 0x14);
    uVar37 = *(undefined4 *)(param_5 + 0x5190);
    puVar34 = (undefined8 *)(*(long *)(param_6 + 8) - lVar28);
    do {
      (**(code **)*puVar34)(uVar37,puVar34,param_1,uVar17);
      puVar34 = (undefined8 *)(*(long *)((long)puVar34 + lVar28 + 8) - lVar28);
    } while (puVar34 != (undefined8 *)(param_6 - lVar28));
  }
  if ((*(byte *)((long)param_1 + 0xae) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    *(undefined1 *)((long)param_1 + 0xb2) = 0;
    uVar13 = (**(code **)(*param_1 + 0xb8))(param_1);
    if (0 < (int)uVar13) {
      lVar28 = param_1[10];
      uVar33 = 0;
      do {
        puVar27 = (ushort *)(lVar28 + uVar33 * 0xc + 6);
        iVar16 = (int)uVar33;
        if ((*puVar27 >> 1 & 1) != 0) {
          puVar29 = (uint *)(lVar28 + (long)iVar16 * 0xc);
          uVar23 = *puVar29;
          uVar21 = 0x30000000;
          if ((uVar23 & 8) != 0) {
            uVar21 = 0x10000000;
          }
          uVar1 = 0x20000000;
          if ((uVar23 & 0xc) != 0) {
            uVar1 = uVar21;
          }
          uVar3 = ((*(ushort *)((long)puVar29 + 6) & 0x1e0) >> 5) << 0x17;
          uVar24 = uVar1 | uVar3;
          uVar21 = *(byte *)((long)puVar29 + 10) & 7;
          if ((uVar23 >> 6 & 1) == 0) {
            if (uVar21 - 2 < 4) {
              if (uVar1 >> 0x1d != 0) {
                uVar4 = (uVar23 & 0x10000) << 4 | (uVar23 >> 4 & 1) << 0x1b;
                uVar24 = uVar4 | uVar24;
                if ((uVar23 >> 0x12 & 1) != 0) {
                  uVar24 = 0x1000;
                  if ((uVar23 & 0x80000) != 0) {
                    uVar24 = 0x800;
                  }
                  uVar24 = uVar4 | uVar1 & 0x1f900000 | uVar3 | uVar24;
                }
                uVar1 = uVar23 & 0xa0000;
                if (uVar21 == 4) {
                  bVar10 = true;
                  bVar12 = false;
                  if ((uVar1 == 0xa0000) || ((uVar23 >> 7 & 1) == 0)) {
                    bVar9 = false;
                    bVar11 = bVar9;
                    goto LAB_03adb1f0;
                  }
                  uVar24 = uVar24 & 0xdffffbff | 0x400;
                }
                else if (uVar21 == 3) {
                  if (uVar1 == 0xa0000) {
                    uVar24 = uVar24 & 0x1fffffff | 0x200;
                  }
                  else {
                    uVar24 = uVar24 & 0x1fffffff | 0x100;
                  }
                }
                else if (uVar1 == 0xa0000) {
                  uVar21 = 0x20;
                  if ((uVar23 & 0x100000) != 0) {
                    uVar21 = 0x60;
                  }
                  uVar24 = uVar21 | uVar23 >> 1 & 0x80 | uVar24;
                }
                else {
                  if ((uVar23 & 0x800000) != 0) {
                    uVar24 = uVar24 & 0x1fffffff | 0x2000;
                  }
                  if ((uVar23 & 0x100) != 0) {
                    uVar24 = uVar24 & 0xdffffffe | 1;
                  }
                  if ((uVar23 & 0x200) != 0) {
                    uVar24 = uVar24 & 0xdffffffd | 2;
                  }
                  if ((uVar23 & 0x400) != 0) {
                    uVar24 = uVar24 & 0xdffffffb | 4;
                  }
                  if ((uVar23 & 0x800) != 0) {
                    uVar24 = uVar24 & 0xdffffff7 | 8;
                  }
                  if ((uVar23 >> 0xc & 1) != 0) {
                    uVar24 = uVar24 & 0xdfffffef | 0x10;
                  }
                }
              }
              bVar9 = false;
              bVar10 = true;
              bVar12 = false;
              bVar11 = false;
            }
            else if (uVar21 < 2) {
              if (uVar1 >> 0x1d == 0) {
                bVar10 = false;
                bVar12 = false;
                bVar11 = false;
                bVar9 = true;
              }
              else {
                uVar21 = uVar23 >> 6 & 0x80 | uVar23 >> 8 & 0x40 | (uVar23 >> 0x10 & 1) << 0x14 |
                         (uVar23 >> 0xf & 1) << 0x16 | (uVar23 >> 4 & 1) << 0x1b;
                if ((uVar23 >> 7 & 1) == 0) {
                  if ((uVar23 >> 8 & 1) == 0) {
                    if ((uVar23 >> 5 & 1) == 0) {
                      bVar10 = false;
                      bVar12 = false;
                      bVar11 = false;
                      uVar24 = uVar21 | uVar24 | uVar23 >> 8 & 0x200;
                      bVar9 = true;
                    }
                    else {
                      bVar10 = false;
                      bVar12 = false;
                      bVar11 = false;
                      uVar24 = uVar21 | uVar24 | 2;
                      bVar9 = true;
                    }
                  }
                  else {
                    bVar10 = false;
                    bVar12 = false;
                    bVar11 = false;
                    uVar24 = uVar21 | uVar1 & 0xdffffff7 | uVar3 | 8;
                    bVar9 = true;
                  }
                }
                else {
                  bVar10 = false;
                  bVar12 = false;
                  bVar11 = false;
                  bVar9 = true;
                  uVar24 = uVar21 | uVar1 & 0xdffffeff | uVar3 | 0x100;
                }
              }
            }
            else {
              bVar9 = false;
              bVar10 = false;
              bVar12 = true;
              bVar11 = false;
            }
          }
          else {
            bVar11 = uVar21 < 2;
            bVar10 = false;
            bVar12 = false;
            bVar9 = false;
          }
LAB_03adb1f0:
          iVar14 = (**(code **)(*param_1 + 0x218))(param_1);
          if (0 < iVar14) {
            iVar35 = 0;
            do {
              lVar28 = param_1[8];
              iVar15 = (**(code **)(*param_1 + 0x218))(param_1);
              lVar31 = param_1[8];
              puVar2 = (ushort *)(lVar28 + (long)(iVar35 + iVar16 * iVar15) * 0xc + 2);
              iVar15 = (**(code **)(*param_1 + 0x218))(param_1);
              puVar32 = (ushort *)(lVar31 + (long)(iVar35 + iVar16 * iVar15) * 0xc);
              fVar36 = (float)(**(code **)(*param_1 + 400))(param_1,uVar33 & 0xffffffff,iVar35);
              uVar25 = 0;
              *puVar32 = 0;
              puVar19 = (uint *)(puVar32 + 4);
              *puVar19 = uVar24;
              puVar22 = puVar32 + 2;
              *(byte *)puVar22 = 0;
              uVar21 = uVar24;
              if (!bVar12) {
                if (bVar9 || bVar10) {
                  *puVar32 = 1;
                  if (fVar36 < 1.0) {
                    *puVar32 = 0;
                    uVar25 = 0;
                    if (((uint)(fVar36 <= 0.0) &
                        (*(ushort *)(param_1[10] + (long)iVar16 * 0xc + 6) & 8) >> 3) == 0) {
                      uVar25 = 4;
                    }
                    goto LAB_03adb324;
                  }
                  if (uVar24 >> 0x1d == 0) {
                    uVar25 = 1;
                    goto LAB_03adb32c;
                  }
                  if (!bVar9) {
                    if ((uVar24 >> 5 & 1) != 0) {
                      *puVar19 = uVar24 & 0xdfffffff;
                      uVar21 = uVar24 & 0xdfffffff;
                    }
                    if ((*puVar2 >> 4 & 1) == 0) {
                      uVar21 = uVar21 & 0xdfffffff;
                      uVar25 = 1;
                      *puVar19 = uVar21;
                    }
                    else {
                      uVar25 = 1;
                    }
                    goto LAB_03adb32c;
                  }
                  uVar21 = *puVar2 >> 1 & 4;
                  uVar23 = uVar24 & 0xfffffffb | uVar21;
                  *puVar19 = uVar23;
                  uVar25 = *puVar2;
                  if ((uVar25 >> 4 & 1) == 0) {
                    uVar21 = uVar24 & 0xdffffffb | uVar21;
LAB_03adb4b4:
                    *puVar19 = uVar21;
                  }
                  else {
                    if ((uVar24 & 0x108) == 0) {
                      uVar21 = 0x10;
                      if ((*puVar29 & 0x200000) != 0) {
                        uVar21 = 0x20;
                      }
                      uVar23 = uVar21 | uVar23;
                      *puVar19 = uVar23;
                      uVar25 = *puVar2;
                    }
                    uVar1 = (uVar25 & 4) >> 2;
                    uVar21 = uVar23 & 0xdfffffff;
                    if ((uVar23 & 0x203) == 0 && uVar1 == 0) {
                      uVar21 = uVar23;
                    }
                    uVar21 = uVar21 | uVar1;
                    if ((uVar25 & 4) != 0 || ((uVar23 & 0x203) != 0 || uVar1 != 0))
                    goto LAB_03adb4b4;
                  }
                  uVar25 = 1;
                }
                else {
                  uVar25 = 2;
LAB_03adb324:
                  *puVar32 = uVar25;
LAB_03adb32c:
                  if (!bVar9 && !bVar11) goto LAB_03adb33c;
                }
                uVar25 = uVar25 | 8;
                *puVar32 = uVar25;
              }
LAB_03adb33c:
              if (bVar9) {
                if ((*puVar29 & 3) != 0) {
                  *(byte *)puVar22 = 0x10;
                }
LAB_03adb370:
                if ((*puVar2 & 3) != 0) {
                  *(byte *)puVar22 = *(byte *)((long)param_1 + 0xb1) & 0xf | 0x20;
                }
              }
              else if ((bVar10) && ((*(byte *)((long)puVar29 + 1) >> 4 & 1) != 0))
              goto LAB_03adb370;
              if (((*puVar29 & 10) != 0) || (uVar6 = *puVar2, (uVar6 >> 1 & 1) != 0)) {
                *puVar32 = uVar25 & 0xaaaa;
                uVar6 = *puVar2;
              }
              if ((uVar6 >> 5 & 1) != 0) {
                uVar21 = uVar21 | 0x800000;
                *puVar19 = uVar21;
                uVar6 = *puVar2;
              }
              if ((uVar6 >> 6 & 1) != 0) {
                uVar21 = uVar21 | 0x1000000;
                *puVar19 = uVar21;
                uVar6 = *puVar2;
              }
              if ((uVar6 >> 7 & 1) != 0) {
                uVar21 = uVar21 | 0x2000000;
                *puVar19 = uVar21;
                uVar6 = *puVar2;
              }
              if ((uVar6 >> 8 & 1) != 0) {
                *puVar19 = uVar21 | 0x4000000;
              }
              iVar35 = iVar35 + 1;
            } while (iVar14 != iVar35);
          }
          *puVar27 = *puVar27 & 0xfffd;
          lVar28 = param_1[10];
        }
        puVar29 = (uint *)(lVar28 + uVar33 * 0xc);
        if (((byte)*puVar29 >> 6 & 1) == 0) {
          puVar27 = (ushort *)(lVar28 + uVar33 * 0xc + 6);
          uVar25 = *puVar27;
          if ((uVar25 & 1) != 0) {
            *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 4;
            uVar25 = *puVar27;
          }
          if ((uVar25 >> 4 & 1) != 0) {
            *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 8;
          }
          uVar21 = *puVar29;
          if ((uVar21 & 0xc) != 0) {
            *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 0x10;
            uVar21 = *puVar29;
          }
          if ((uVar21 >> 4 & 1) == 0) {
            uVar25 = *puVar27;
          }
          else {
            *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 1;
            uVar25 = *puVar27;
          }
          if ((uVar25 >> 5 & 1) != 0) {
            *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 0x20;
            uVar25 = *puVar27;
          }
          if ((uVar25 >> 6 & 1) != 0) {
            *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 0x40;
            uVar25 = *puVar27;
          }
          if ((uVar25 >> 7 & 1) != 0) {
            *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 0x80;
            uVar25 = *puVar27;
          }
          if ((uVar25 >> 8 & 1) != 0) {
            *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 0x100;
          }
        }
        iVar14 = (**(code **)(*param_1 + 0x218))(param_1);
        if (0 < iVar14) {
          iVar35 = 0;
          do {
            lVar28 = param_1[8];
            iVar15 = (**(code **)(*param_1 + 0x218))(param_1);
            pbVar20 = (byte *)(lVar28 + (long)(iVar35 + iVar16 * iVar15) * 0xc);
            *(byte *)((long)param_1 + 0xb2) = *(byte *)((long)param_1 + 0xb2) | pbVar20[4];
            if ((*pbVar20 >> 1 & 1) != 0) {
              *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 2;
            }
            iVar35 = iVar35 + 1;
          } while (iVar14 != iVar35);
        }
        lVar28 = param_1[10];
        puVar27 = (ushort *)(lVar28 + uVar33 * 0xc + 8);
        uVar25 = *puVar27;
        if ((uVar25 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 1;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 1 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 2;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 2 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 4;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 3 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 8;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 4 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x10;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 5 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x20;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 6 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x40;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 7 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x80;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 8 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x100;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 9 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x200;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 10 & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x400;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 0xb & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x800;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 0xc & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x1000;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 0xd & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x2000;
          uVar25 = *puVar27;
        }
        if ((uVar25 >> 0xe & 1) != 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x4000;
          uVar25 = *puVar27;
        }
        if ((short)uVar25 < 0) {
          *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) | 0x8000;
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 != uVar13);
    }
    *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) & 0xfe;
  }
  uVar13 = (uint)uVar18;
  (**(code **)(*param_1 + 0x290))(param_1,param_5,uVar18,uVar17,param_3,param_4);
  if (param_1[3] != 0) {
    *(undefined2 *)(param_1[3] + 10) = 0;
  }
  uVar21 = (uVar13 & 2) >> 1;
  local_6a0 = local_6a0 & 0xffffff00;
  uStack_69c = 0;
  uStack_698 = 0;
  local_57c = 0;
  local_690 = local_690 & 0xffffffff;
  local_54c = 0;
  local_670 = 0;
  local_51c = 0;
  local_66c = 0;
  local_4ec = 0;
  local_65c = 0;
  local_4bc = 0;
  local_640 = 0;
  local_48c = 0;
  local_63c = 0;
  local_45c = 0;
  local_62c = 0;
  local_42c = 0;
  local_610 = 0;
  local_3fc = 0;
  local_60c = 0;
  local_3cc = 0;
  local_5fc = 0;
  local_39c = 0;
  local_5e0 = 0;
  local_36c = 0;
  local_5dc = 0;
  local_33c = 0;
  local_5cc = 0;
  local_30c = 0;
  local_5b0 = 0;
  local_2dc = 0;
  local_5ac = 0;
  local_2ac = 0;
  local_59c = 0;
  local_27c = 0;
  local_580 = 0;
  local_24c = 0;
  local_56c = 0;
  local_21c = 0;
  local_550 = 0;
  local_1ec = 0;
  local_53c = 0;
  local_1bc = 0;
  local_520 = 0;
  local_18c = 0;
  local_50c = 0;
  local_15c = 0;
  local_4f0 = 0;
  local_12c = 0;
  local_4dc = 0;
  local_fc = 0;
  local_9c = 0;
  local_4c0 = 0;
  local_4ac = 0;
  local_490 = 0;
  local_47c = 0;
  local_460 = 0;
  local_44c = 0;
  local_430 = 0;
  local_41c = 0;
  local_400 = 0;
  local_3ec = 0;
  local_3d0 = 0;
  local_3bc = 0;
  local_3a0 = 0;
  local_38c = 0;
  local_370 = 0;
  local_35c = 0;
  local_340 = 0;
  local_32c = 0;
  local_310 = 0;
  local_2fc = 0;
  local_2e0 = 0;
  local_2cc = 0;
  local_2b0 = 0;
  local_29c = 0;
  local_280 = 0;
  local_26c = 0;
  local_250 = 0;
  local_23c = 0;
  local_220 = 0;
  local_20c = 0;
  local_1f0 = 0;
  local_1dc = 0;
  local_1c0 = 0;
  local_1ac = 0;
  local_190 = 0;
  local_17c = 0;
  local_160 = 0;
  local_14c = 0;
  local_130 = 0;
  local_11c = 0;
  local_100 = 0;
  local_ec = 0;
  local_d0 = 0;
  local_cc = 0;
  local_bc = 0;
  local_a0 = 0;
  local_8c = 0;
  local_6ab = (char)uVar21;
  if (((uVar13 ^ 0xffffffff) & 10) == 0) {
    local_6ac = param_1[2] == 0;
    local_6aa = *(byte *)(param_3 + 0x3d0);
    bVar12 = local_6aa != 0;
    if (param_1[2] == 0) {
      uVar33 = 8;
      goto LAB_03adbcc4;
    }
  }
  else {
    local_6ac = false;
    if ((uVar18 & 2) == 0) {
      bVar12 = false;
      local_6aa = 0;
    }
    else {
      local_6aa = *(byte *)(param_3 + 0x3d0);
      bVar12 = local_6aa != 0;
    }
  }
  uVar33 = 0;
LAB_03adbcc4:
  local_6a9 = (byte)uVar18 & 1;
  uVar5 = 2;
  if (!bVar12) {
    uVar5 = 0;
  }
  iVar16 = (*(code *)(&PTR_LAB_04b717b8)
                     [((ulong)(uVar13 & 1) | (ulong)uVar21 << 2 | uVar33 | uVar5) * 2])
                     (param_1,param_3,param_4,local_6a8,param_5,uVar17,uVar18,param_7,&local_6ac);
  if ((((*(ushort *)((long)param_1 + 0xba) >> 4 & 1) == 0) ||
      (*(long *)(&DAT_00004ac8 + param_5) == 0)) ||
     (*(char *)(*(long *)(param_5 + 0x46b8) + 0x530) == '\0')) {
    uVar17 = 0;
    sVar7 = (short)param_1[0x17];
  }
  else {
    uVar17 = FUN_03a8f3d0(*(long *)(&DAT_00004ac8 + param_5),param_1,(uVar18 & 2) != 0);
    sVar7 = (short)param_1[0x17];
  }
  if ((sVar7 != 0) && (puVar34 = (undefined8 *)param_1[0xf], puVar34 != (undefined8 *)0x0)) {
    uVar13 = (**(code **)*puVar34)(puVar34,param_1);
    uVar17 = uVar17 | uVar13;
  }
  *(int *)(param_1 + 0x15) = iVar16;
  if (iVar16 == 0) {
    if ((uVar17 & 1) == 0) {
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_5 + 0x5768);
    uVar18 = uVar18 >> 4 & 2;
    if (local_6ac != false && local_6ab != '\0') {
      uVar18 = (ulong)local_6aa | 2;
    }
    (*(code *)(&PTR_LAB_04b718b8)[uVar18 * 2])(param_1,local_6a8,param_5,param_7);
    lVar28 = param_1[3];
    if ((lVar28 != 0) && (*(short *)(lVar28 + 10) != 0)) {
      lVar31 = *(long *)(param_5 + 0x55c8);
      lVar26 = param_1[2];
      if (lVar26 == 0) {
        puVar29 = (uint *)(lVar31 + 8);
        do {
          uVar17 = *puVar29;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar29,0x10);
          if (bVar12) {
            *puVar29 = uVar17 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        *(long *)(*(long *)(lVar31 + 0x10) +
                 (-(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar17 << 3)) = lVar28;
      }
      else {
        uVar17 = *(uint *)(lVar26 + 0x1c);
        if (0 < (int)uVar17) {
          lVar28 = *(long *)(lVar26 + 0x10);
          uVar18 = 0;
          puVar29 = (uint *)(lVar31 + 8);
          do {
            lVar26 = *(long *)(lVar28 + uVar18 * 8);
            if (*(short *)(lVar26 + 0x2a) != 0) {
              do {
                uVar13 = *puVar29;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(puVar29,0x10);
                if (bVar12) {
                  *puVar29 = uVar13 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              *(long *)(*(long *)(lVar31 + 0x10) +
                       (-(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3)) =
                   lVar26 + 0x20;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar17);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x298))(param_1,param_5,param_3,param_4);
  return;
}

