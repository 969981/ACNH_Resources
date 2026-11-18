
void FUN_03226040(long param_1,int param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  short sVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  long lVar17;
  short *psVar18;
  undefined8 *puVar19;
  uint *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  long lVar23;
  uint *puVar24;
  undefined *local_98;
  undefined8 local_90;
  uint *local_88;
  undefined *local_78;
  char *pcStack_70;
  uint local_64;
  
  plVar1 = (long *)(param_1 + 0x1c730);
  puVar2 = (undefined4 *)(param_1 + 0x1c1a8);
  piVar13 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (0 < *piVar13) {
    lVar17 = 0;
    puVar19 = *(undefined8 **)(piVar13 + 4);
    do {
      puVar21 = *(undefined8 **)(*(long *)(piVar13 + 2) + lVar17 * 8);
      lVar17 = lVar17 + 1;
      *puVar21 = puVar19;
      *(undefined8 **)(piVar13 + 4) = puVar21;
      puVar19 = puVar21;
    } while (lVar17 < *piVar13);
  }
  *piVar13 = 0;
  puVar10 = PTR_DAT_04bb43c0;
  switch(param_2) {
  case 0x60:
    uVar22 = 0;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    do {
      lVar23 = *(long *)puVar10;
      psVar18 = (short *)(param_1 + 0x1c330 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
      uVar11 = FUN_0277d6c4(psVar18);
      lVar17 = *(long *)puVar10;
      if (lVar17 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar23 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) && (*psVar18 != -2)
           ) {
          lVar23 = param_1 + 0x1c330 + (long)(int)uVar22 * 8;
          local_88 = (uint *)0x0;
          local_90._0_4_ = CONCAT22(*(undefined2 *)(lVar23 + 2),*psVar18);
          local_90 = (undefined *)CONCAT44(*(undefined4 *)(lVar23 + 4),(undefined4)local_90);
          local_98 = puVar3;
          uVar11 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar10 == 0) {
LAB_032264bc:
            local_64 = 0xbc;
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x7c);
LAB_03226528:
            if (local_64 != (uint)local_78) goto LAB_03226130;
          }
          else {
            lVar17 = *(long *)(lVar17 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
            goto LAB_032264bc;
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(psVar18);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
               (puVar24 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8),
               puVar24 == (uint *)0x0)) goto LAB_032264bc;
            local_64 = 0;
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x94);
            uVar11 = *puVar24;
            if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
              puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
              local_64 = 0;
              if (*puVar20 != 0) {
                uVar11 = puVar20[1];
                if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar20 + 10) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                  if (lVar17 != 0) {
                    uVar5 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar5 = (uint)((ulong)((long)puVar24 - lVar17) / (ulong)uVar11);
                    }
                    if (*puVar20 <= uVar5) {
                      uVar5 = 0xffffffff;
                    }
                    if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_64 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                       local_64 < 0xbd)) goto LAB_032262c0;
                  }
                }
                local_64 = 0;
              }
            }
LAB_032262c0:
            local_88 = puVar24;
            if (local_64 != 0x94) {
              local_64 = 0;
              local_78 = (undefined *)CONCAT44(local_78._4_4_,0x61);
              uVar11 = *puVar24;
              if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
                puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
                local_64 = 0;
                if (*puVar20 != 0) {
                  uVar11 = puVar20[1];
                  if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                    lVar17 = 0xc;
                    if (*(char *)((long)puVar20 + 10) != '\0') {
                      lVar17 = 0x1c;
                    }
                    lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                    if (lVar17 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar11 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar24 - lVar17) / (ulong)uVar11);
                      }
                      if (*puVar20 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_64 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2)
                         , local_64 < 0xbd)) goto LAB_03226368;
                    }
                  }
                  local_64 = 0;
                }
              }
LAB_03226368:
              if (local_64 == 0x61) goto LAB_0322653c;
              local_64 = 0;
              local_78 = (undefined *)CONCAT44(local_78._4_4_,0x7b);
              uVar11 = *puVar24;
              if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
                puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
                local_64 = 0;
                if (*puVar20 != 0) {
                  uVar11 = puVar20[1];
                  if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                    lVar17 = 0xc;
                    if (*(char *)((long)puVar20 + 10) != '\0') {
                      lVar17 = 0x1c;
                    }
                    lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                    if (lVar17 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar11 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar24 - lVar17) / (ulong)uVar11);
                      }
                      if (*puVar20 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_64 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2)
                         , local_64 < 0xbd)) goto LAB_03226410;
                    }
                  }
                  local_64 = 0;
                }
              }
LAB_03226410:
              if (local_64 == 0x7b) goto LAB_0322653c;
              local_64 = 0;
              local_78 = (undefined *)CONCAT44(local_78._4_4_,0x7c);
              uVar11 = *puVar24;
              if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
                puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
                local_64 = 0;
                if (*puVar20 != 0) {
                  uVar11 = puVar20[1];
                  if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                    lVar17 = 0xc;
                    if (*(char *)((long)puVar20 + 10) != '\0') {
                      lVar17 = 0x1c;
                    }
                    lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                    if (lVar17 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar11 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar24 - lVar17) / (ulong)uVar11);
                      }
                      if (*puVar20 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_64 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2)
                         , local_64 < 0xbd)) goto LAB_03226528;
                    }
                  }
                  local_64 = 0;
                }
              }
              goto LAB_03226528;
            }
          }
LAB_0322653c:
          uVar7 = *(undefined1 *)(lVar23 + 2);
          uVar8 = *(undefined1 *)(lVar23 + 3);
          sVar9 = *psVar18;
          uVar6 = *(undefined4 *)(lVar23 + 4);
          piVar13 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
          if (*piVar13 < piVar13[1]) {
            psVar18 = *(short **)(piVar13 + 4);
            if (psVar18 != (short *)0x0) {
              *(undefined8 *)(piVar13 + 4) = *(undefined8 *)psVar18;
            }
            *psVar18 = sVar9;
            *(undefined1 *)(psVar18 + 1) = uVar7;
            *(undefined1 *)((long)psVar18 + 3) = uVar8;
            *(undefined4 *)(psVar18 + 2) = uVar6;
            if (*piVar13 < piVar13[1]) {
              *(short **)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) = psVar18;
              *piVar13 = *piVar13 + 1;
            }
          }
        }
      }
LAB_03226130:
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x80);
    puVar15 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
    *puVar2 = *puVar15;
    local_90 = PTR_LAB_04bc8ad0;
    break;
  case 0x61:
    uVar22 = 0;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    do {
      lVar17 = *(long *)puVar10;
      psVar18 = (short *)(param_1 + 0x1c330 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
      uVar11 = FUN_0277d6c4(psVar18);
      lVar23 = *(long *)puVar10;
      if (lVar23 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) && (*psVar18 != -2)
           ) {
          lVar17 = param_1 + 0x1c330 + (long)(int)uVar22 * 8;
          local_88 = (uint *)0x0;
          local_90._0_4_ = CONCAT22(*(undefined2 *)(lVar17 + 2),*psVar18);
          local_90 = (undefined *)CONCAT44(*(undefined4 *)(lVar17 + 4),(undefined4)local_90);
          local_98 = puVar3;
          uVar11 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar10 == 0) {
LAB_03226b78:
            local_64 = 0xbc;
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0xb1);
LAB_03226bc4:
            if (local_64 != (uint)local_78) goto LAB_03226894;
          }
          else {
            lVar23 = *(long *)(lVar23 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((*(uint *)(lVar23 + 0x1d8) <= uVar11) ||
               (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
            goto LAB_03226b78;
            lVar23 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(psVar18);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((*(uint *)(lVar23 + 0x1d8) <= uVar11) ||
               (puVar24 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8),
               puVar24 == (uint *)0x0)) goto LAB_03226b78;
            local_64 = 0;
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x79);
            uVar11 = *puVar24;
            if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
              puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
              local_64 = 0;
              if (*puVar20 != 0) {
                uVar11 = puVar20[1];
                if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar20 + 10) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar20 + lVar23 + (ulong)(ushort)puVar20[2] * 8;
                  if (lVar23 != 0) {
                    uVar5 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar5 = (uint)((ulong)((long)puVar24 - lVar23) / (ulong)uVar11);
                    }
                    if (*puVar20 <= uVar5) {
                      uVar5 = 0xffffffff;
                    }
                    if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_64 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                       local_64 < 0xbd)) goto LAB_03226a24;
                  }
                }
                local_64 = 0;
              }
            }
LAB_03226a24:
            local_88 = puVar24;
            if (local_64 != 0x79) {
              local_64 = 0;
              local_78 = (undefined *)CONCAT44(local_78._4_4_,0x7a);
              uVar11 = *puVar24;
              if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
                puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
                local_64 = 0;
                if (*puVar20 != 0) {
                  uVar11 = puVar20[1];
                  if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                    lVar23 = 0xc;
                    if (*(char *)((long)puVar20 + 10) != '\0') {
                      lVar23 = 0x1c;
                    }
                    lVar23 = (long)puVar20 + lVar23 + (ulong)(ushort)puVar20[2] * 8;
                    if (lVar23 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar11 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar24 - lVar23) / (ulong)uVar11);
                      }
                      if (*puVar20 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_64 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2)
                         , local_64 < 0xbd)) goto LAB_03226acc;
                    }
                  }
                  local_64 = 0;
                }
              }
LAB_03226acc:
              if (local_64 == 0x7a) goto LAB_03226bd8;
              local_64 = 0;
              local_78 = (undefined *)CONCAT44(local_78._4_4_,0xb1);
              uVar11 = *puVar24;
              if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
                puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
                local_64 = 0;
                if (*puVar20 != 0) {
                  uVar11 = puVar20[1];
                  if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                    lVar23 = 0xc;
                    if (*(char *)((long)puVar20 + 10) != '\0') {
                      lVar23 = 0x1c;
                    }
                    lVar23 = (long)puVar20 + lVar23 + (ulong)(ushort)puVar20[2] * 8;
                    if (lVar23 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar11 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar24 - lVar23) / (ulong)uVar11);
                      }
                      if (*puVar20 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_64 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2)
                         , local_64 < 0xbd)) goto LAB_03226bc4;
                    }
                  }
                  local_64 = 0;
                }
              }
              goto LAB_03226bc4;
            }
          }
LAB_03226bd8:
          uVar7 = *(undefined1 *)(lVar17 + 2);
          uVar8 = *(undefined1 *)(lVar17 + 3);
          sVar9 = *psVar18;
          uVar6 = *(undefined4 *)(lVar17 + 4);
          piVar13 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
          if (*piVar13 < piVar13[1]) {
            psVar18 = *(short **)(piVar13 + 4);
            if (psVar18 != (short *)0x0) {
              *(undefined8 *)(piVar13 + 4) = *(undefined8 *)psVar18;
            }
            *psVar18 = sVar9;
            *(undefined1 *)(psVar18 + 1) = uVar7;
            *(undefined1 *)((long)psVar18 + 3) = uVar8;
            *(undefined4 *)(psVar18 + 2) = uVar6;
            if (*piVar13 < piVar13[1]) {
              *(short **)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) = psVar18;
              *piVar13 = *piVar13 + 1;
            }
          }
        }
      }
LAB_03226894:
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x80);
    puVar15 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
    *puVar2 = *puVar15;
    local_90 = PTR_LAB_04bc8ad8;
    break;
  case 0x62:
    uVar22 = 0;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    do {
      lVar17 = *(long *)puVar10;
      psVar18 = (short *)(param_1 + 0x1c330 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
      uVar11 = FUN_0277d6c4(psVar18);
      if (*(long *)puVar10 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
            (*psVar18 != -2)) && (iVar12 = FUN_0277d6c4(psVar18), iVar12 != 0x38f1)) {
          lVar17 = param_1 + 0x1c330 + (long)(int)uVar22 * 8;
          lVar23 = *(long *)puVar10;
          local_88 = (uint *)0x0;
          local_90 = (undefined *)
                     CONCAT44(*(undefined4 *)(lVar17 + 4),
                              CONCAT22(*(undefined2 *)(lVar17 + 2),*psVar18));
          local_98 = puVar3;
          uVar11 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar10 == 0) {
LAB_03226e34:
            local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
            local_64 = 0xbc;
          }
          else {
            lVar23 = *(long *)(lVar23 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((*(uint *)(lVar23 + 0x1d8) <= uVar11) ||
               (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
            goto LAB_03226e34;
            lVar23 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(psVar18);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((*(uint *)(lVar23 + 0x1d8) <= uVar11) ||
               (puVar24 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8),
               puVar24 == (uint *)0x0)) goto LAB_03226e34;
            local_64 = 0;
            local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
            uVar11 = *puVar24;
            local_88 = puVar24;
            if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
              puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
              local_64 = 0;
              if (*puVar20 != 0) {
                uVar11 = puVar20[1];
                if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar20 + 10) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar20 + lVar23 + (ulong)(ushort)puVar20[2] * 8;
                  if (lVar23 != 0) {
                    uVar5 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar5 = (uint)((ulong)((long)puVar24 - lVar23) / (ulong)uVar11);
                    }
                    if (*puVar20 <= uVar5) {
                      uVar5 = 0xffffffff;
                    }
                    if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_64 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                       local_64 < 0xbd)) goto LAB_03226e3c;
                  }
                }
                local_64 = 0;
              }
            }
          }
LAB_03226e3c:
          if (local_64 == 0) {
            sVar9 = *psVar18;
            uVar7 = *(undefined1 *)(lVar17 + 3);
            uVar8 = *(undefined1 *)(lVar17 + 2);
            uVar6 = *(undefined4 *)(lVar17 + 4);
            piVar13 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
            if (*piVar13 < piVar13[1]) {
              psVar18 = *(short **)(piVar13 + 4);
              if (psVar18 != (short *)0x0) {
                *(undefined8 *)(piVar13 + 4) = *(undefined8 *)psVar18;
              }
              *psVar18 = sVar9;
              *(undefined1 *)(psVar18 + 1) = uVar8;
              *(undefined1 *)((long)psVar18 + 3) = uVar7;
              *(undefined4 *)(psVar18 + 2) = uVar6;
              if (*piVar13 < piVar13[1]) {
                *(short **)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) = psVar18;
                *piVar13 = *piVar13 + 1;
              }
            }
          }
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x80);
    puVar15 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
    *puVar2 = *puVar15;
    local_90 = PTR_LAB_04bc8ae0;
    break;
  case 99:
    uVar22 = 0;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar23 = *(long *)puVar10;
      psVar18 = (short *)(param_1 + 0x1c330 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
      uVar11 = FUN_0277d6c4(psVar18);
      lVar17 = *(long *)puVar10;
      if (lVar17 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar23 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) && (*psVar18 != -2)
           ) {
          lVar23 = param_1 + 0x1c330 + (long)(int)uVar22 * 8;
          local_88 = (uint *)0x0;
          local_90._0_4_ = CONCAT22(*(undefined2 *)(lVar23 + 2),*psVar18);
          local_90 = (undefined *)CONCAT44(*(undefined4 *)(lVar23 + 4),(undefined4)local_90);
          local_98 = puVar3;
          uVar11 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar10 == 0) {
LAB_0322701c:
            puVar24 = (uint *)0x0;
          }
          else {
            lVar17 = *(long *)(lVar17 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
            goto LAB_0322701c;
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(psVar18);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if (*(uint *)(lVar17 + 0x1d8) <= uVar11) goto LAB_0322701c;
            puVar24 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8);
            if (puVar24 != (uint *)0x0) {
              local_88 = puVar24;
            }
          }
          uVar14 = FUN_01af55a0(&local_98);
          if ((uVar14 & 1) == 0) {
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x14);
            if (puVar24 == (uint *)0x0) {
              local_64 = 0xbc;
            }
            else {
              uVar11 = *puVar24;
              local_64 = 0;
              if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
                puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
                local_64 = 0;
                if (*puVar20 != 0) {
                  uVar11 = puVar20[1];
                  if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                    lVar17 = 0xc;
                    if (*(char *)((long)puVar20 + 10) != '\0') {
                      lVar17 = 0x1c;
                    }
                    lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                    if (lVar17 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar11 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar24 - lVar17) / (ulong)uVar11);
                      }
                      if (*puVar20 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_64 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2)
                         , local_64 < 0xbd)) goto LAB_032270c8;
                    }
                  }
                  local_64 = 0;
                }
              }
LAB_032270c8:
              if (local_64 == 0x14) goto LAB_032272e0;
              local_64 = 0;
              uVar11 = *puVar24;
              if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
                puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
                local_64 = 0;
                if (*puVar20 != 0) {
                  uVar11 = puVar20[1];
                  if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                    lVar17 = 0xc;
                    if (*(char *)((long)puVar20 + 10) != '\0') {
                      lVar17 = 0x1c;
                    }
                    lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                    if (lVar17 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar11 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar24 - lVar17) / (ulong)uVar11);
                      }
                      if (*puVar20 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_64 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2)
                         , local_64 < 0xbd)) goto LAB_03227198;
                    }
                  }
                  local_64 = 0;
                }
              }
            }
LAB_03227198:
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x2d);
            if ((((((local_64 != 0x2d) && (iVar12 = FUN_0277d6c4(psVar18), iVar12 != 0x38f1)) &&
                  (iVar12 = FUN_0277d6c4(psVar18), iVar12 != 0x1774)) &&
                 ((iVar12 = FUN_0277d6c4(psVar18), iVar12 != 0x1775 &&
                  (iVar12 = FUN_0277d6c4(psVar18), iVar12 != 0x1cc4)))) &&
                (iVar12 = FUN_0277d6c4(psVar18), iVar12 != 0x3025)) &&
               (iVar12 = FUN_0277d6c4(psVar18), iVar12 != 0x2fb6)) {
              local_78 = (undefined *)CONCAT44(local_78._4_4_,0x34);
              if (puVar24 == (uint *)0x0) {
                local_64 = 0xbc;
              }
              else {
                uVar11 = *puVar24;
                local_64 = 0;
                if ((uVar11 != 0) && (puVar24 != (uint *)(ulong)uVar11)) {
                  puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
                  local_64 = 0;
                  if (*puVar20 != 0) {
                    uVar11 = puVar20[1];
                    if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                      lVar17 = 0xc;
                      if (*(char *)((long)puVar20 + 10) != '\0') {
                        lVar17 = 0x1c;
                      }
                      lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                      if (lVar17 != 0) {
                        uVar5 = 0;
                        if ((ulong)uVar11 != 0) {
                          uVar5 = (uint)((ulong)((long)puVar24 - lVar17) / (ulong)uVar11);
                        }
                        if (*puVar20 <= uVar5) {
                          uVar5 = 0xffffffff;
                        }
                        if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                           (local_64 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar5 * 2), local_64 < 0xbd))
                        goto LAB_032272cc;
                      }
                    }
                    local_64 = 0;
                  }
                }
              }
LAB_032272cc:
              if (local_64 != 0x34) {
                pcStack_70 = "AOC_EventFlag_001";
                local_78 = puVar4;
                uVar14 = FUN_0273f0a0(&local_78);
                if ((uVar14 & 1) == 0) goto LAB_03226f20;
                local_78 = (undefined *)CONCAT44(local_78._4_4_,0x42);
                local_64 = 0;
                if (((puVar24 != (uint *)0x0) && (uVar11 = *puVar24, uVar11 != 0)) &&
                   (puVar24 != (uint *)(ulong)uVar11)) {
                  puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
                  local_64 = 0;
                  if (*puVar20 != 0) {
                    uVar11 = puVar20[1];
                    if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                      lVar17 = 0xc;
                      if (*(char *)((long)puVar20 + 10) != '\0') {
                        lVar17 = 0x1c;
                      }
                      lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                      if (lVar17 != 0) {
                        uVar5 = 0;
                        if ((ulong)uVar11 != 0) {
                          uVar5 = (uint)((ulong)((long)puVar24 - lVar17) / (ulong)uVar11);
                        }
                        if (*puVar20 <= uVar5) {
                          uVar5 = 0xffffffff;
                        }
                        if ((uVar5 < *(uint *)PTR_DAT_04bc0068) &&
                           (local_64 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc0068 + 8) +
                                              (long)(int)uVar5 * 2), local_64 < 0x13e))
                        goto LAB_0322740c;
                      }
                    }
                    local_64 = 0;
                  }
                }
LAB_0322740c:
                if (local_64 != 0x42) goto LAB_03226f20;
              }
            }
          }
LAB_032272e0:
          sVar9 = *psVar18;
          uVar7 = *(undefined1 *)(lVar23 + 2);
          uVar8 = *(undefined1 *)(lVar23 + 3);
          uVar6 = *(undefined4 *)(lVar23 + 4);
          piVar13 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
          if (*piVar13 < piVar13[1]) {
            psVar18 = *(short **)(piVar13 + 4);
            if (psVar18 != (short *)0x0) {
              *(undefined8 *)(piVar13 + 4) = *(undefined8 *)psVar18;
            }
            *psVar18 = sVar9;
            *(undefined1 *)(psVar18 + 1) = uVar7;
            *(undefined1 *)((long)psVar18 + 3) = uVar8;
            *(undefined4 *)(psVar18 + 2) = uVar6;
            if (*piVar13 < piVar13[1]) {
              *(short **)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) = psVar18;
              *piVar13 = *piVar13 + 1;
            }
          }
        }
      }
LAB_03226f20:
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x80);
    puVar15 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
    *puVar2 = *puVar15;
    local_90 = PTR_LAB_04bc8ae8;
    break;
  default:
    if (param_2 != 0) {
      return;
    }
    uVar22 = 0;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar17 = *(long *)puVar10;
      psVar18 = (short *)(param_1 + 0x1c330 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
      uVar11 = FUN_0277d6c4(psVar18);
      lVar23 = *(long *)puVar10;
      if (lVar23 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) && (*psVar18 != -2)
           ) {
          lVar17 = param_1 + 0x1c330 + (long)(int)uVar22 * 8;
          local_88 = (uint *)0x0;
          local_90._0_4_ = CONCAT22(*(undefined2 *)(lVar17 + 2),*psVar18);
          local_90 = (undefined *)CONCAT44(*(undefined4 *)(lVar17 + 4),(undefined4)local_90);
          local_98 = puVar3;
          uVar11 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar10 == 0) {
LAB_03226710:
            puVar24 = (uint *)0x0;
          }
          else {
            lVar23 = *(long *)(lVar23 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((*(uint *)(lVar23 + 0x1d8) <= uVar11) ||
               (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
            goto LAB_03226710;
            lVar23 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(psVar18);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if (*(uint *)(lVar23 + 0x1d8) <= uVar11) goto LAB_03226710;
            puVar24 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8);
            if (puVar24 != (uint *)0x0) {
              local_88 = puVar24;
            }
          }
          pcStack_70 = "AOC_EventFlag_001";
          local_78 = puVar4;
          uVar14 = FUN_0273f0a0(&local_78);
          if ((uVar14 & 1) == 0) {
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x42);
            local_64 = 0;
            if (((puVar24 != (uint *)0x0) && (uVar11 = *puVar24, uVar11 != 0)) &&
               (puVar24 != (uint *)(ulong)uVar11)) {
              puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar11);
              local_64 = 0;
              if (*puVar20 != 0) {
                uVar11 = puVar20[1];
                if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar20 + 10) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar20 + lVar23 + (ulong)(ushort)puVar20[2] * 8;
                  if (lVar23 != 0) {
                    uVar5 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar5 = (uint)((ulong)((long)puVar24 - lVar23) / (ulong)uVar11);
                    }
                    if (*puVar20 <= uVar5) {
                      uVar5 = 0xffffffff;
                    }
                    if ((uVar5 < *(uint *)PTR_DAT_04bc0068) &&
                       (local_64 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar5 * 2),
                       local_64 < 0x13e)) goto LAB_032267c8;
                  }
                }
                local_64 = 0;
              }
            }
LAB_032267c8:
            if (local_64 == 0x42) goto LAB_03226610;
          }
          sVar9 = *psVar18;
          uVar7 = *(undefined1 *)(lVar17 + 3);
          uVar8 = *(undefined1 *)(lVar17 + 2);
          uVar6 = *(undefined4 *)(lVar17 + 4);
          piVar13 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
          if (*piVar13 < piVar13[1]) {
            psVar18 = *(short **)(piVar13 + 4);
            if (psVar18 != (short *)0x0) {
              *(undefined8 *)(piVar13 + 4) = *(undefined8 *)psVar18;
            }
            *psVar18 = sVar9;
            *(undefined1 *)(psVar18 + 1) = uVar8;
            *(undefined1 *)((long)psVar18 + 3) = uVar7;
            *(undefined4 *)(psVar18 + 2) = uVar6;
            if (*piVar13 < piVar13[1]) {
              *(short **)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) = psVar18;
              *piVar13 = *piVar13 + 1;
            }
          }
        }
      }
LAB_03226610:
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x80);
    puVar15 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1);
    *puVar2 = *puVar15;
    local_90 = PTR_LAB_04bc8ac8;
  }
  local_98 = PTR_DAT_04bc5a40 + 0x10;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  uVar16 = (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_02c5ef70(uVar16,&local_98);
  return;
}

