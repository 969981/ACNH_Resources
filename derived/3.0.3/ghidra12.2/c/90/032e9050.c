
/* WARNING: Type propagation algorithm not settling */

void FUN_032e9050(int *param_1,ushort *param_2)

{
  bool bVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  short sVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined ***pppuVar22;
  ulong uVar23;
  undefined2 uVar24;
  short *psVar25;
  long lVar26;
  ushort uVar27;
  long lVar28;
  void *__dest;
  void *__src;
  int iVar29;
  undefined **local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ushort *local_148;
  undefined4 local_140;
  ushort local_13c [96];
  undefined2 local_7c;
  ulong local_78;
  undefined2 local_70;
  
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  puVar8 = PTR_DAT_04bc1118;
  if (*param_2 == 0) {
    return;
  }
  lVar17 = *(long *)PTR_DAT_04bc1118;
  if (param_1[10] == 0) {
    puVar18 = *(undefined8 **)(param_1 + 8);
  }
  else {
    puVar18 = *(undefined8 **)(param_1 + 8);
    if (param_1[10] <= (param_1[0x183] - param_1[0x184]) + *(int *)((long)puVar18 + 0xc)) {
      if (*(long **)(param_1 + 4) == (long *)0x0) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 4) + 0x18))();
      if ((5 < *(int *)(lVar17 + 0x3c) - 0x16U) && (1 < *(int *)(lVar17 + 0x3c) - 0x2bU)) {
        return;
      }
      lVar28 = *(long *)PTR_DAT_04bb4fb0;
      uVar12 = FUN_03368ef0(DAT_05734ea0,0);
      lVar17 = *(long *)(lVar28 + 8);
      if (lVar17 == 0) {
        return;
      }
      lVar26 = 0;
      if (*(char *)(lVar17 + 0x38) != '\0') {
        lVar26 = lVar17 + 8;
      }
      FUN_03366350(lVar28,lVar26,s_Decide_TooMuch_04b209b1,1,uVar12,0);
      return;
    }
  }
  iVar9 = *param_1;
  iVar29 = param_1[2];
  if (iVar9 <= param_1[2]) {
    iVar29 = iVar9;
  }
  if (iVar29 != -1) {
    iVar9 = iVar29;
  }
  param_1[3] = iVar9;
  FUN_03363ed0(param_1 + 0x114,*puVar18);
  param_1[2] = -1;
  iVar29 = *(int *)(param_2 + 2);
  local_78 = CONCAT44(local_78._4_4_,iVar29);
  if (param_1[6] != iVar29) {
    if (((iVar29 != 1) && (param_1[6] - 1U < 2)) && (iVar29 != 2)) {
      uVar10 = param_1[0x192];
      if (param_1[0x191] < (int)uVar10) {
        local_148 = (ushort *)((ulong)local_148 & 0xffffffffffff0000);
        local_150 = (undefined *)0x0;
        param_1[0x191] = uVar10;
        if (0 < (int)uVar10) {
          lVar28 = (ulong)uVar10 - 1;
          puVar18 = &local_150;
          if ((int)uVar10 < 1) goto LAB_032e9310;
          do {
            uVar11 = param_1[0x192];
            param_1[0x191] = uVar10 - 1;
            uVar10 = uVar11 - 1;
            uVar19 = (ulong)uVar10;
            uVar24 = (undefined2)param_1[0x18e];
            param_1[0x192] = uVar10;
            if (1 < (int)uVar11) {
              uVar5 = *(undefined2 *)((long)param_1 + 0x63a);
              *(undefined2 *)(param_1 + 0x18e) = uVar5;
              if (uVar11 != 2) {
                *(short *)((long)param_1 + 0x63a) = (short)param_1[399];
                if (((3 < uVar11) &&
                    (*(undefined2 *)(param_1 + 399) = *(undefined2 *)((long)param_1 + 0x63e),
                    uVar11 != 4)) &&
                   (*(short *)((long)param_1 + 0x63e) = (short)param_1[400], 5 < uVar11)) {
                  *(undefined2 *)(param_1 + 400) = uVar5;
                }
              }
            }
            if (4 < uVar10) {
              uVar19 = 0;
            }
            *(undefined2 *)((long)param_1 + uVar19 * 2 + 0x638) = 0;
            while( true ) {
              *(undefined2 *)puVar18 = uVar24;
              if (lVar28 == 0) goto LAB_032e9334;
              uVar10 = param_1[0x191];
              lVar28 = lVar28 + -1;
              puVar18 = (undefined8 *)((long)puVar18 + 2);
              if (0 < (int)uVar10) break;
LAB_032e9310:
              uVar24 = 0;
            }
          } while( true );
        }
LAB_032e9334:
        plVar14 = (long *)(param_1 + 0x11a);
        FUN_033638b0(plVar14,&local_150);
        if (param_1[6] == 4) {
          FUN_032ecf40(param_1);
        }
        else {
          iVar29 = param_1[0x11d];
          uVar10 = iVar29 - 1;
          uVar19 = (ulong)uVar10;
          if ((0 < iVar29) && (psVar25 = *(short **)(param_1 + 0x18a), psVar25 != (short *)0x0)) {
            iVar29 = -iVar29;
            uVar21 = uVar19;
            do {
              iVar29 = iVar29 + 1;
              if ((psVar25 != (short *)0x0) && (uVar11 = param_1[0x18c], 0 < (int)uVar11)) {
                lVar28 = *plVar14;
                sVar6 = *(short *)(lVar28 + uVar19 * 2);
                if (*psVar25 != sVar6) {
                  uVar23 = 0;
                  do {
                    if ((ulong)uVar11 - 1 == uVar23) goto LAB_032e9664;
                    lVar26 = uVar23 + 1;
                    uVar23 = uVar23 + 1;
                  } while (psVar25[lVar26] != sVar6);
                  if (uVar11 <= uVar23) goto LAB_032e9664;
                }
                iVar9 = param_1[0x11d];
                if (iVar9 != 0) {
                  iVar15 = (int)uVar19;
                  uVar11 = iVar9 - iVar15;
                  if (uVar11 != 0 && iVar15 <= iVar9) {
                    uVar11 = 1;
                  }
                  uVar4 = (iVar9 - iVar15) - uVar11;
                  if (0 < (int)uVar4) {
                    if (uVar4 < 4) {
                      uVar21 = 0;
                    }
                    else {
                      uVar23 = -(uVar21 >> 0x1f) & 0xfffffffe00000000 | uVar21 << 1;
                      lVar28 = uVar23 + (long)(int)uVar11 * 2;
                      uVar21 = 0;
                      do {
                        lVar13 = uVar21 * 2;
                        uVar21 = uVar21 + 4;
                        *(undefined2 *)(*plVar14 + uVar23 + lVar13) =
                             *(undefined2 *)(*plVar14 + lVar28 + lVar13);
                        lVar26 = lVar28 + lVar13;
                        lVar13 = uVar23 + lVar13;
                        *(undefined2 *)(*plVar14 + lVar13 + 2) =
                             *(undefined2 *)(*plVar14 + lVar26 + 2);
                        *(undefined2 *)(*plVar14 + lVar13 + 4) =
                             *(undefined2 *)(*plVar14 + lVar26 + 4);
                        *(undefined2 *)(*plVar14 + lVar13 + 6) =
                             *(undefined2 *)(*plVar14 + lVar26 + 6);
                      } while (((ulong)((iVar9 + iVar29) - uVar11) & 0xfffffffc) != uVar21);
                    }
                    if ((uVar4 & 3) != 0) {
                      lVar28 = uVar21 + (long)(int)uVar10;
                      uVar21 = (ulong)((iVar29 + iVar9) - uVar11) & 3;
                      do {
                        uVar21 = uVar21 - 1;
                        puVar3 = (undefined2 *)(*plVar14 + lVar28 * 2);
                        lVar28 = lVar28 + 1;
                        *puVar3 = *(undefined2 *)
                                   ((long)puVar3 +
                                   (-(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 |
                                   (ulong)uVar11 << 1));
                      } while (uVar21 != 0);
                    }
                    iVar9 = param_1[0x11d];
                    lVar28 = *(long *)(param_1 + 0x11a);
                  }
                  param_1[0x11d] = iVar9 - uVar11;
                  *(undefined2 *)(lVar28 + (long)(int)(iVar9 - uVar11) * 2) = 0;
                }
              }
LAB_032e9664:
              if ((long)uVar19 < 1) break;
              psVar25 = *(short **)(param_1 + 0x18a);
              uVar19 = uVar19 - 1;
              uVar10 = uVar10 - 1;
              uVar21 = (ulong)uVar10;
            } while( true );
          }
        }
      }
    }
    iVar29 = (int)local_78;
    if ((int)local_78 != 3) {
      iVar9 = nn::kpr::KeyCodeComposer::GetCompositionCount();
      if (0 < iVar9) {
        local_160 = (undefined **)((ulong)local_160 & 0xffff000000000000);
        nn::kpr::KeyCodeComposer::Flush();
        uVar10 = nn::kpr::KeyCodeComposer::Dequeue((ushort *)(param_1 + 0x19c),(int)&local_150);
        if ((int)uVar10 < 1) {
          uVar19 = (ulong)(uint)param_1[0x198];
        }
        else {
          uVar19 = (ulong)(uint)param_1[0x198];
          uVar21 = (ulong)uVar10;
          puVar18 = &local_150;
          do {
            if (2 < (uint)uVar19) {
              uVar19 = 0;
            }
            uVar21 = uVar21 - 1;
            *(undefined2 *)((long)param_1 + uVar19 * 2 + 0x658) = *(undefined2 *)puVar18;
            uVar19 = (ulong)(param_1[0x198] + 1U);
            param_1[0x198] = param_1[0x198] + 1U;
            puVar18 = (undefined8 *)((long)puVar18 + 2);
          } while (uVar21 != 0);
        }
        iVar9 = (int)uVar19;
        param_1[0x199] = iVar9;
        if (0 < iVar9) {
          lVar28 = *(long *)puVar8;
          lVar26 = *(long *)(lVar28 + 0x20);
          if (*(uint *)(lVar26 + 0x1050) < 10 &&
              (1 << (ulong)(*(uint *)(lVar26 + 0x1050) & 0x1f) & 0x319U) != 0) {
            iVar16 = 0;
            iVar15 = 0;
            do {
              if (param_1[0x198] < 1) {
                uVar27 = 0;
              }
              else {
                uVar10 = param_1[0x199];
                param_1[0x198] = param_1[0x198] + -1;
                uVar11 = uVar10 - 1;
                uVar19 = (ulong)uVar11;
                uVar27 = *(ushort *)(param_1 + 0x196);
                param_1[0x199] = uVar11;
                if (1 < (int)uVar10) {
                  uVar24 = *(undefined2 *)((long)param_1 + 0x65a);
                  *(undefined2 *)(param_1 + 0x196) = uVar24;
                  if ((uVar10 != 2) &&
                     (*(short *)((long)param_1 + 0x65a) = (short)param_1[0x197], 3 < uVar10)) {
                    *(undefined2 *)(param_1 + 0x197) = uVar24;
                  }
                }
                if (2 < uVar11) {
                  uVar19 = 0;
                }
                *(undefined2 *)((long)param_1 + uVar19 * 2 + 0x658) = 0;
                lVar26 = *(long *)(lVar28 + 0x20);
              }
              if ((*(int *)(lVar26 + 0x1050) == 1) ||
                 ((*(char *)(lVar26 + 0x106a) == '\0' &&
                  ((*(char *)(lVar26 + 0x16408) == '\0' || (*(int *)(lVar26 + 0x1568) != 0)))))) {
                lVar13 = 0;
                bVar1 = false;
                do {
                  if (*(ushort *)((long)&DAT_0418e098 + lVar13) <= uVar27) {
                    bVar1 = (bool)(uVar27 <= *(ushort *)((long)&DAT_0418e09a + lVar13) | bVar1);
                  }
                  if (*(ushort *)((long)&DAT_0418e09c + lVar13) <= uVar27) {
                    bVar1 = (bool)(uVar27 <= *(ushort *)((long)&DAT_0418e09e + lVar13) | bVar1);
                  }
                  if (*(ushort *)((long)&DAT_0418e0a0 + lVar13) <= uVar27) {
                    bVar1 = (bool)(uVar27 <= *(ushort *)((long)&DAT_0418e0a2 + lVar13) | bVar1);
                  }
                  lVar13 = lVar13 + 0xc;
                } while (lVar13 != 0x15c);
                if (bVar1) goto LAB_032e93cc;
              }
              else {
LAB_032e93cc:
                local_13c[(long)iVar15 + -0x12] = uVar27;
                iVar15 = iVar15 + 1;
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 != iVar9);
          }
          else {
            pppuVar22 = &local_160;
            do {
              if (param_1[0x198] < 1) {
                uVar24 = 0;
              }
              else {
                uVar10 = param_1[0x199];
                param_1[0x198] = param_1[0x198] + -1;
                uVar11 = uVar10 - 1;
                uVar21 = (ulong)uVar11;
                uVar24 = (undefined2)param_1[0x196];
                param_1[0x199] = uVar11;
                if (1 < (int)uVar10) {
                  uVar5 = *(undefined2 *)((long)param_1 + 0x65a);
                  *(undefined2 *)(param_1 + 0x196) = uVar5;
                  if ((uVar10 != 2) &&
                     (*(short *)((long)param_1 + 0x65a) = (short)param_1[0x197], 3 < uVar10)) {
                    *(undefined2 *)(param_1 + 0x197) = uVar5;
                  }
                }
                if (2 < uVar11) {
                  uVar21 = 0;
                }
                *(undefined2 *)((long)param_1 + uVar21 * 2 + 0x658) = 0;
              }
              uVar19 = uVar19 - 1;
              *(undefined2 *)pppuVar22 = uVar24;
              pppuVar22 = (undefined ***)((long)pppuVar22 + 2);
            } while (uVar19 != 0);
          }
        }
        plVar14 = (long *)(param_1 + 0x11a);
        FUN_033638b0(plVar14,&local_160);
        if (param_1[6] == 4) {
          FUN_032ecf40(param_1);
        }
        else {
          iVar9 = param_1[0x11d];
          uVar10 = iVar9 - 1;
          uVar19 = (ulong)uVar10;
          if ((0 < iVar9) && (psVar25 = *(short **)(param_1 + 0x18a), psVar25 != (short *)0x0)) {
            iVar9 = -iVar9;
            uVar21 = uVar19;
            do {
              iVar9 = iVar9 + 1;
              if ((psVar25 != (short *)0x0) && (uVar11 = param_1[0x18c], 0 < (int)uVar11)) {
                lVar28 = *plVar14;
                sVar6 = *(short *)(lVar28 + uVar19 * 2);
                if (*psVar25 != sVar6) {
                  uVar23 = 0;
                  do {
                    if ((ulong)uVar11 - 1 == uVar23) goto LAB_032e98a4;
                    lVar26 = uVar23 + 1;
                    uVar23 = uVar23 + 1;
                  } while (psVar25[lVar26] != sVar6);
                  if (uVar11 <= uVar23) goto LAB_032e98a4;
                }
                iVar15 = param_1[0x11d];
                if (iVar15 != 0) {
                  iVar16 = (int)uVar19;
                  uVar11 = iVar15 - iVar16;
                  if (uVar11 != 0 && iVar16 <= iVar15) {
                    uVar11 = 1;
                  }
                  uVar4 = (iVar15 - iVar16) - uVar11;
                  if (0 < (int)uVar4) {
                    if (uVar4 < 4) {
                      uVar21 = 0;
                    }
                    else {
                      uVar23 = -(uVar21 >> 0x1f) & 0xfffffffe00000000 | uVar21 << 1;
                      lVar28 = uVar23 + (long)(int)uVar11 * 2;
                      uVar21 = 0;
                      do {
                        lVar13 = uVar21 * 2;
                        uVar21 = uVar21 + 4;
                        *(undefined2 *)(*plVar14 + uVar23 + lVar13) =
                             *(undefined2 *)(*plVar14 + lVar28 + lVar13);
                        lVar26 = lVar28 + lVar13;
                        lVar13 = uVar23 + lVar13;
                        *(undefined2 *)(*plVar14 + lVar13 + 2) =
                             *(undefined2 *)(*plVar14 + lVar26 + 2);
                        *(undefined2 *)(*plVar14 + lVar13 + 4) =
                             *(undefined2 *)(*plVar14 + lVar26 + 4);
                        *(undefined2 *)(*plVar14 + lVar13 + 6) =
                             *(undefined2 *)(*plVar14 + lVar26 + 6);
                      } while (((ulong)((iVar15 + iVar9) - uVar11) & 0xfffffffc) != uVar21);
                    }
                    if ((uVar4 & 3) != 0) {
                      lVar28 = uVar21 + (long)(int)uVar10;
                      uVar21 = (ulong)((iVar9 + iVar15) - uVar11) & 3;
                      do {
                        uVar21 = uVar21 - 1;
                        puVar3 = (undefined2 *)(*plVar14 + lVar28 * 2);
                        lVar28 = lVar28 + 1;
                        *puVar3 = *(undefined2 *)
                                   ((long)puVar3 +
                                   (-(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 |
                                   (ulong)uVar11 << 1));
                      } while (uVar21 != 0);
                    }
                    iVar15 = param_1[0x11d];
                    lVar28 = *(long *)(param_1 + 0x11a);
                  }
                  param_1[0x11d] = iVar15 - uVar11;
                  *(undefined2 *)(lVar28 + (long)(int)(iVar15 - uVar11) * 2) = 0;
                }
              }
LAB_032e98a4:
              if ((long)uVar19 < 1) break;
              psVar25 = *(short **)(param_1 + 0x18a);
              uVar19 = uVar19 - 1;
              uVar10 = uVar10 - 1;
              uVar21 = (ulong)uVar10;
            } while( true );
          }
        }
      }
    }
    param_1[6] = iVar29;
  }
  local_70 = 0;
  local_78 = 0;
  iVar29 = param_1[6];
  if (iVar29 - 1U < 2) {
    uVar27 = *param_2;
    lVar28 = 0;
    do {
      puVar2 = (ushort *)((long)&DAT_0418dc1c + lVar28);
      if (*puVar2 == uVar27) {
        uVar27 = *(ushort *)(&UNK_0418dc8e + lVar28);
        break;
      }
      lVar28 = lVar28 + 2;
    } while (*puVar2 != 0);
    *param_2 = uVar27;
    if (param_1[6] == 1) {
      iVar29 = 0;
LAB_032e9b98:
      param_1[0x195] = iVar29;
      uVar27 = *param_2;
    }
    else if (param_1[6] == 2) {
      iVar29 = 1;
      goto LAB_032e9b98;
    }
    iVar29 = param_1[0x192];
    iVar9 = param_1[0x191];
    uVar10 = FUN_032f9c40(param_1 + 0x18e,uVar27);
    if (0 < (int)uVar10) {
      if (iVar29 - iVar9 <= param_1[3]) {
        param_1[3] = param_1[3] - (iVar29 - iVar9);
      }
      uVar19 = (ulong)uVar10;
      puVar20 = &local_78;
      do {
        if (param_1[0x191] < 1) {
          uVar24 = 0;
        }
        else {
          uVar10 = param_1[0x192];
          param_1[0x191] = param_1[0x191] + -1;
          uVar11 = uVar10 - 1;
          uVar21 = (ulong)uVar11;
          uVar24 = (undefined2)param_1[0x18e];
          param_1[0x192] = uVar11;
          if (1 < (int)uVar10) {
            uVar5 = *(undefined2 *)((long)param_1 + 0x63a);
            *(undefined2 *)(param_1 + 0x18e) = uVar5;
            if (uVar10 != 2) {
              *(short *)((long)param_1 + 0x63a) = (short)param_1[399];
              if (((3 < uVar10) &&
                  (*(undefined2 *)(param_1 + 399) = *(undefined2 *)((long)param_1 + 0x63e),
                  uVar10 != 4)) &&
                 (*(short *)((long)param_1 + 0x63e) = (short)param_1[400], 5 < uVar10)) {
                *(undefined2 *)(param_1 + 400) = uVar5;
              }
            }
          }
          if (4 < uVar11) {
            uVar21 = 0;
          }
          *(undefined2 *)((long)(param_1 + 0x18e) + uVar21 * 2) = 0;
        }
        uVar19 = uVar19 - 1;
        *(undefined2 *)puVar20 = uVar24;
        puVar20 = (ulong *)((long)puVar20 + 2);
      } while (uVar19 != 0);
    }
  }
  else if (iVar29 == 0) {
    local_78 = (ulong)*param_2;
  }
  else if (iVar29 == 3) {
    uVar27 = *param_2;
    *(ushort *)(param_1 + 0x19a) = uVar27;
    local_160 = (undefined **)CONCAT62(local_160._2_6_,uVar27);
    nn::kpr::KeyCodeComposer::Enqueue((ushort *)(param_1 + 0x19c),(int)&local_160);
    uVar10 = nn::kpr::KeyCodeComposer::Dequeue((ushort *)(param_1 + 0x19c),(int)&local_150);
    if (0 < (int)uVar10) {
      uVar11 = param_1[0x198];
      uVar19 = (ulong)uVar10;
      puVar18 = &local_150;
      do {
        uVar21 = (ulong)uVar11;
        if (2 < uVar11) {
          uVar21 = 0;
        }
        uVar19 = uVar19 - 1;
        *(undefined2 *)((long)param_1 + uVar21 * 2 + 0x658) = *(undefined2 *)puVar18;
        uVar11 = param_1[0x198] + 1;
        param_1[0x198] = uVar11;
        puVar18 = (undefined8 *)((long)puVar18 + 2);
      } while (uVar19 != 0);
    }
    uVar11 = nn::kpr::KeyCodeComposer::GetCompositionCount();
    uVar10 = param_1[0x198];
    uVar19 = (ulong)uVar10;
    param_1[0x199] = uVar10 + (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU));
    if (0 < (int)uVar10) {
      uVar11 = *(uint *)(*(long *)(lVar17 + 0x20) + 0x1050);
      if ((uVar11 < 10) && ((1 << (ulong)(uVar11 & 0x1f) & 0x319U) != 0)) {
        uVar11 = 0;
        iVar29 = 0;
        do {
          if (param_1[0x198] < 1) {
            uVar27 = 0;
          }
          else {
            uVar4 = param_1[0x199];
            param_1[0x198] = param_1[0x198] + -1;
            uVar7 = uVar4 - 1;
            uVar19 = (ulong)uVar7;
            uVar27 = *(ushort *)(param_1 + 0x196);
            param_1[0x199] = uVar7;
            if (1 < (int)uVar4) {
              uVar24 = *(undefined2 *)((long)param_1 + 0x65a);
              *(undefined2 *)(param_1 + 0x196) = uVar24;
              if ((uVar4 != 2) &&
                 (*(short *)((long)param_1 + 0x65a) = (short)param_1[0x197], 3 < uVar4)) {
                *(undefined2 *)(param_1 + 0x197) = uVar24;
              }
            }
            if (2 < uVar7) {
              uVar19 = 0;
            }
            *(undefined2 *)((long)param_1 + uVar19 * 2 + 0x658) = 0;
          }
          lVar28 = *(long *)(lVar17 + 0x20);
          if (((*(int *)(lVar28 + 0x1050) == 1) ||
              ((*(char *)(lVar28 + 0x106a) == '\0' &&
               ((*(char *)(lVar28 + 0x16408) == '\0' || (*(int *)(lVar28 + 0x1568) != 0)))))) &&
             (iVar9 = nn::kpr::KeyCodeComposer::GetCompositionCount(), iVar9 < 1)) {
            lVar28 = 0;
            bVar1 = false;
            do {
              if (*(ushort *)((long)&DAT_0418e098 + lVar28) <= uVar27) {
                bVar1 = (bool)(uVar27 <= *(ushort *)((long)&DAT_0418e09a + lVar28) | bVar1);
              }
              if (*(ushort *)((long)&DAT_0418e09c + lVar28) <= uVar27) {
                bVar1 = (bool)(uVar27 <= *(ushort *)((long)&DAT_0418e09e + lVar28) | bVar1);
              }
              if (*(ushort *)((long)&DAT_0418e0a0 + lVar28) <= uVar27) {
                bVar1 = (bool)(uVar27 <= *(ushort *)((long)&DAT_0418e0a2 + lVar28) | bVar1);
              }
              lVar28 = lVar28 + 0xc;
            } while (lVar28 != 0x15c);
            if (bVar1) goto LAB_032e99e0;
          }
          else {
LAB_032e99e0:
            local_13c[(long)iVar29 + 0x62] = uVar27;
            iVar29 = iVar29 + 1;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar10);
      }
      else {
        puVar20 = &local_78;
        do {
          if (param_1[0x198] < 1) {
            uVar24 = 0;
          }
          else {
            uVar10 = param_1[0x199];
            param_1[0x198] = param_1[0x198] + -1;
            uVar11 = uVar10 - 1;
            uVar21 = (ulong)uVar11;
            uVar24 = (undefined2)param_1[0x196];
            param_1[0x199] = uVar11;
            if (1 < (int)uVar10) {
              uVar5 = *(undefined2 *)((long)param_1 + 0x65a);
              *(undefined2 *)(param_1 + 0x196) = uVar5;
              if ((uVar10 != 2) &&
                 (*(short *)((long)param_1 + 0x65a) = (short)param_1[0x197], 3 < uVar10)) {
                *(undefined2 *)(param_1 + 0x197) = uVar5;
              }
            }
            if (2 < uVar11) {
              uVar21 = 0;
            }
            *(undefined2 *)((long)param_1 + uVar21 * 2 + 0x658) = 0;
          }
          uVar19 = uVar19 - 1;
          *(undefined2 *)puVar20 = uVar24;
          puVar20 = (ulong *)((long)puVar20 + 2);
        } while (uVar19 != 0);
      }
    }
  }
  if ((((*(int *)(*(long *)(lVar17 + 0x20) + 0x1050) - 7U < 3) &&
       (lVar28 = *(long *)(*(long *)(lVar17 + 0x20) + 0x6e0), lVar28 != 0)) &&
      (plVar14 = *(long **)(lVar28 + 8), plVar14 != (long *)0x0)) &&
     (uVar19 = (**(code **)(*plVar14 + 0xe8))(), (uVar19 & 1) != 0)) {
    uVar27 = *param_2;
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar26 = *(long *)(param_1 + 0x1a8);
    lVar28 = 0;
    do {
      if (*(short *)(lVar26 + lVar28 * 2) == 0) goto LAB_032ea088;
      lVar13 = lVar26 + lVar28 * 2;
      if (*(short *)(lVar13 + 2) == 0) {
        lVar28 = lVar28 + 1;
        goto LAB_032ea088;
      }
      if (*(short *)(lVar13 + 4) == 0) {
        lVar28 = lVar28 + 2;
        goto LAB_032ea088;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_032ea088:
    if ((int)lVar28 < param_1[0x1aa] + -1) {
      puVar2 = (ushort *)(lVar26 + (long)(int)lVar28 * 2);
      *puVar2 = uVar27;
      puVar2[1] = 0;
    }
    local_7c = 0;
    local_140 = 0x61;
    local_148 = local_13c;
    local_13c[0] = 0;
    local_150 = PTR_DAT_04bc9690 + 0x10;
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    uStack_158 = *(undefined8 *)(param_1 + 0x1a8);
    local_160 = &PTR_LAB_04952fa8;
    lVar17 = *(long *)(lVar17 + 0x20);
    if (*(long *)(lVar17 + 0x1ae0) != 0) {
      FUN_032e28a0(*(long *)(lVar17 + 0x1ae0),lVar17 + 0x1a70);
    }
    *(undefined1 *)(lVar17 + 0x1aa8) = 1;
    if (*(int *)(lVar17 + 0x1aa4) - 1U < 2) {
      lVar28 = *(long *)PTR_DAT_04bb29d0;
      do {
        nn::os::ConvertToTimeSpan(lVar28 / 1000);
        nn::os::SleepThread();
      } while (*(int *)(lVar17 + 0x1aa4) - 1U < 2);
    }
    FUN_032ee0b0(lVar17 + 0x1800,&local_160,&local_150);
    (**(code **)(local_150 + 0x18))(&local_150);
    FUN_03363ed0(param_1 + 0x11a,local_148);
  }
  else {
    FUN_033638b0(param_1 + 0x11a,&local_78);
  }
  FUN_032ea1b0(param_1,*(undefined4 *)(param_2 + 4));
  uVar19 = FUN_032e84e0(param_1);
  if ((uVar19 & 1) == 0) {
    return;
  }
  FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
  __dest = *(void **)(param_1 + 0x1de);
  (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
  __src = *(void **)(param_1 + 0x1a8);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar17 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar17 * 2) == 0) goto LAB_032e9e2c;
      lVar28 = *(long *)(param_1 + 0x1a8) + lVar17 * 2;
      if (*(short *)(lVar28 + 2) == 0) {
        lVar17 = lVar17 + 1;
        goto LAB_032e9e2c;
      }
      if (*(short *)(lVar28 + 4) == 0) {
        lVar17 = lVar17 + 2;
        goto LAB_032e9e2c;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_032e9e2c:
    uVar10 = (uint)lVar17;
    if (param_1[0x1e0] <= (int)(uint)lVar17) {
      uVar10 = param_1[0x1e0] - 1;
    }
    uVar19 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar10 << 1;
    memcpy(__dest,__src,uVar19);
    *(undefined2 *)((long)__dest + uVar19) = 0;
  }
  param_1[1] = *param_1;
  FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
  param_1[0x185] = param_1[0x183];
  local_150._0_4_ = param_1[3];
  local_150._4_4_ = *param_1;
  puVar18 = *(undefined8 **)(param_1 + 4);
  param_1[0x186] = param_1[0x184];
  if (puVar18 != (undefined8 *)0x0) {
    (**(code **)*puVar18)(puVar18,&local_150);
  }
  lVar17 = DAT_05355a60;
  puVar8 = PTR_DAT_04bb2da0;
  if (((DAT_05355a60 != 0) && (*(char *)(DAT_05355a60 + 0xf80) != '\0')) &&
     (local_150._0_4_ = *(int *)(DAT_05355a60 + 0x3c), (int)local_150 != 0x1b)) {
    if (0 < (int)*(uint *)(DAT_05355a60 + 0x474)) {
      iVar9 = 0;
      iVar29 = 1;
      uVar19 = (ulong)*(uint *)(DAT_05355a60 + 0x474);
LAB_032e9f14:
      uVar21 = 0;
      do {
        (**(code **)(DAT_05735eb8 + 0x18))(&DAT_05735eb8);
        uVar23 = 0;
        while (*(short *)(DAT_05735ec0 + uVar23 * 2) != 0) {
          lVar28 = DAT_05735ec0 + uVar23 * 2;
          if (*(short *)(lVar28 + 2) == 0) {
            uVar23 = uVar23 + 1;
            break;
          }
          if (*(short *)(lVar28 + 4) == 0) {
            uVar23 = uVar23 + 2;
            break;
          }
          uVar23 = uVar23 + 3;
          if (uVar23 == 0x80001) goto LAB_032e9f04;
        }
        if ((uVar23 & 0xffffffff) <= uVar21) goto LAB_032e9f04;
        psVar25 = (short *)(DAT_05735ec0 + uVar21 * 2);
        if ((long)DAT_05735ec8 <= (long)uVar21) {
          psVar25 = (short *)puVar8;
        }
        if (*(short *)(*(long *)(lVar17 + 0x468) + (uVar19 - 1) * 2) == *psVar25) goto LAB_032e9f00;
        uVar21 = uVar21 + 1;
      } while( true );
    }
    iVar9 = 0;
LAB_032e9fd4:
    if ((*(int *)(lVar17 + 0xf7c) < iVar9) && (*(char *)(lVar17 + 0xf81) == '\0')) {
      lVar17 = 0x24;
      goto LAB_032ea000;
    }
  }
  FUN_03366840(*(undefined8 *)PTR_DAT_04bb4fb0,&local_78);
  lVar17 = 0xe;
LAB_032ea000:
  lVar26 = *(long *)PTR_DAT_04bb4fb0;
  uVar12 = FUN_03368ef0(DAT_05734ea0,0);
  lVar28 = *(long *)(lVar26 + 8);
  if (lVar28 != 0) {
    lVar13 = 0;
    if (*(char *)(lVar28 + 0x38) != '\0') {
      lVar13 = lVar28 + 8;
    }
    FUN_03366350(lVar26,lVar13,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar17 * 8 + 0x3f0),1,
                 uVar12,0);
  }
  return;
LAB_032e9f00:
  iVar9 = iVar9 + iVar29 * (int)uVar21;
LAB_032e9f04:
  iVar29 = iVar29 * 10;
  bVar1 = (long)uVar19 < 2;
  uVar19 = uVar19 - 1;
  if (bVar1) goto LAB_032e9fd4;
  goto LAB_032e9f14;
}

