
/* WARNING: Removing unreachable block (ram,0x02b1a7a4) */
/* WARNING: Removing unreachable block (ram,0x02b1a650) */
/* WARNING: Removing unreachable block (ram,0x02b1a648) */
/* WARNING: Removing unreachable block (ram,0x02b1a618) */
/* WARNING: Removing unreachable block (ram,0x02b1a794) */
/* WARNING: Removing unreachable block (ram,0x02b1b2f0) */

uint FUN_02b1a5c0(long param_1,byte param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ushort *puVar21;
  int iVar22;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined2 local_b8;
  byte local_b2;
  undefined ***local_b0;
  undefined *local_a8;
  undefined1 local_a0;
  int local_9c;
  undefined *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined *local_80;
  int local_78;
  undefined **local_70;
  undefined **ppuStack_68;
  undefined **local_60;
  
  local_80 = PTR_DAT_04bc43f8;
  *(undefined4 *)(param_1 + 0xc) = 8;
  puVar9 = PTR_DAT_04bb27a8;
  local_80 = local_80 + 0x10;
  local_78 = DAT_05636e78;
  local_d8 = 1;
  local_a8 = PTR_DAT_04bc4608 + 0x10;
  local_a0 = PTR_DAT_04bbc570[8];
  local_9c = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uStack_90 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_98 = PTR_DAT_04bb2010 + 0x10;
  local_88 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_84 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (DAT_05636e78 != 0) {
    ppuStack_68 = &local_80;
    local_70 = &PTR_FUN_04a9b150;
    local_60 = &local_a8;
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      plVar13 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar11 = (**(code **)(*plVar13 + 0x18))();
      if (0 < iVar11) {
        iVar22 = 0;
        do {
          FUN_01360490(&local_d8,puVar1[1],iVar22);
          uVar14 = (*(code *)*local_70)(&local_70,&local_d8);
          if ((uVar14 & 1) != 0) break;
          bVar10 = iVar11 + -1 != iVar22;
          iVar22 = iVar22 + 1;
        } while (bVar10);
      }
    }
  }
  if (local_9c == 0) {
    lVar18 = *(long *)puVar9;
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,1);
    if ((*(long *)(lVar18 + 0x38) != 0) &&
       (lVar19 = *(long *)(*(long *)(lVar18 + 0x38) + 0xb8), lVar19 != 0)) {
      iVar11 = 0;
      uVar7 = *(ushort *)(lVar18 + 0xb90);
      uVar14 = 0;
      uVar12 = *(uint *)(lVar18 + 0xb70);
      puVar21 = (ushort *)(lVar19 + 0x78);
      bVar10 = true;
      uVar5 = *(uint *)PTR_DAT_04bbbd58;
      lVar19 = *(long *)(PTR_DAT_04bbbd58 + 8);
      iVar22 = 0x50;
      do {
        uVar20 = (uint)puVar21[-0x30] - (uint)uVar7;
        if (uVar20 < uVar12) {
          puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)uVar20 * 8);
          if (puVar15 == (uint *)0x0) goto LAB_02b1a934;
          uVar20 = *puVar15;
          if (uVar20 == 0 || puVar15 == (uint *)(ulong)uVar20) {
LAB_02b1a8a0:
            local_d8 = 0;
          }
          else {
            puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar20);
            if (((*puVar17 == 0) || (uVar20 = puVar17[1], uVar20 == 0)) ||
               ((ulong)(ushort)puVar17[2] == 0)) goto LAB_02b1a8a0;
            lVar2 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar2 == 0) goto LAB_02b1a8a0;
            uVar3 = 0;
            if ((ulong)uVar20 != 0) {
              uVar3 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar20);
            }
            if (*puVar17 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar5 <= uVar3) ||
               (uVar8 = *(ushort *)(lVar19 + (long)(int)uVar3 * 2), local_d8 = (uint)uVar8,
               0x1f < uVar8)) goto LAB_02b1a8a0;
          }
          if (((local_d8 == 0x1f) || (uVar20 = (uint)puVar21[-0x30] - (uint)uVar7, uVar12 <= uVar20)
              ) || ((puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)uVar20 * 8),
                    puVar15 == (uint *)0x0 ||
                    ((uVar20 = *puVar15, uVar20 == 0 || (puVar15 == (uint *)(ulong)uVar20))))))
          goto LAB_02b1a934;
          puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar20);
          if ((*puVar17 == 0) ||
             ((uVar20 = puVar17[1], uVar20 == 0 || ((ulong)(ushort)puVar17[2] == 0))))
          goto LAB_02b1a934;
          lVar2 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar2 == 0) goto LAB_02b1a934;
          uVar3 = 0;
          if ((ulong)uVar20 != 0) {
            uVar3 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar20);
          }
          if (*puVar17 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar5 <= uVar3) || (*(short *)(lVar19 + (long)(int)uVar3 * 2) != 1))
          goto LAB_02b1a934;
          iVar22 = 0;
LAB_02b1b270:
          if (bVar10) {
            lVar18 = *(long *)PTR_DAT_04bb5008;
            plVar13 = (long *)(lVar18 + 0x26630);
            piVar16 = (int *)(**(code **)(*plVar13 + 0xf0))(plVar13);
            iVar6 = *piVar16;
            plVar13 = (long *)(lVar18 + 0x26660);
            piVar16 = (int *)(**(code **)(*plVar13 + 0xf0))(plVar13);
            local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
            local_d0 = 0;
            local_b8 = 0;
            iStack_bc = *piVar16 - iVar11;
            local_c8 = PTR_DAT_04bb2018 + 0x10;
            iStack_d4 = DAT_05636e78;
            local_b0 = &local_70;
            local_d8 = 1;
            local_a8 = PTR_DAT_04bc45d0 + 0x10;
            local_c0 = iVar6 + iVar22;
            local_b2 = param_2 & 1;
            uVar12 = FUN_02a81334(&local_a8,&local_d8);
            if ((uVar12 & 1) != 0) {
              *(undefined4 *)(param_1 + 8) = local_70._0_4_;
            }
            goto LAB_02b1a744;
          }
          break;
        }
LAB_02b1a934:
        uVar20 = (uint)uVar7;
        if (puVar21[-0x24] - uVar20 < uVar12) {
          puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)(puVar21[-0x24] - uVar20) * 8)
          ;
          if (puVar15 != (uint *)0x0) {
            uVar3 = *puVar15;
            if (uVar3 == 0 || puVar15 == (uint *)(ulong)uVar3) {
LAB_02b1a9c0:
              local_d8 = 0;
            }
            else {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              if (((*puVar17 == 0) || (uVar3 = puVar17[1], uVar3 == 0)) ||
                 ((ulong)(ushort)puVar17[2] == 0)) goto LAB_02b1a9c0;
              lVar2 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar2 == 0) goto LAB_02b1a9c0;
              uVar4 = 0;
              if ((ulong)uVar3 != 0) {
                uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
              }
              if (*puVar17 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar5 <= uVar4) ||
                 (uVar8 = *(ushort *)(lVar19 + (long)(int)uVar4 * 2), local_d8 = (uint)uVar8,
                 0x1f < uVar8)) goto LAB_02b1a9c0;
            }
            if (((local_d8 != 0x1f) && (puVar21[-0x24] - uVar20 < uVar12)) &&
               ((puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) +
                                     (long)(int)(puVar21[-0x24] - uVar20) * 8),
                puVar15 != (uint *)0x0 &&
                ((uVar3 = *puVar15, uVar3 != 0 && (puVar15 != (uint *)(ulong)uVar3)))))) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              if ((*puVar17 != 0) &&
                 ((uVar3 = puVar17[1], uVar3 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar2 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                  }
                  if (*puVar17 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < uVar5) && (*(short *)(lVar19 + (long)(int)uVar4 * 2) == 1)) {
                    iVar22 = 0x10;
                    goto LAB_02b1b270;
                  }
                }
              }
            }
          }
        }
        if (puVar21[-0x18] - uVar20 < uVar12) {
          puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)(puVar21[-0x18] - uVar20) * 8)
          ;
          if (puVar15 != (uint *)0x0) {
            uVar3 = *puVar15;
            if (uVar3 == 0 || puVar15 == (uint *)(ulong)uVar3) {
LAB_02b1aae0:
              local_d8 = 0;
            }
            else {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              if (((*puVar17 == 0) || (uVar3 = puVar17[1], uVar3 == 0)) ||
                 ((ulong)(ushort)puVar17[2] == 0)) goto LAB_02b1aae0;
              lVar2 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar2 == 0) goto LAB_02b1aae0;
              uVar4 = 0;
              if ((ulong)uVar3 != 0) {
                uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
              }
              if (*puVar17 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar5 <= uVar4) ||
                 (uVar8 = *(ushort *)(lVar19 + (long)(int)uVar4 * 2), local_d8 = (uint)uVar8,
                 0x1f < uVar8)) goto LAB_02b1aae0;
            }
            if (((local_d8 != 0x1f) && (puVar21[-0x18] - uVar20 < uVar12)) &&
               ((puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) +
                                     (long)(int)(puVar21[-0x18] - uVar20) * 8),
                puVar15 != (uint *)0x0 &&
                ((uVar20 = *puVar15, uVar20 != 0 && (puVar15 != (uint *)(ulong)uVar20)))))) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar20);
              if ((*puVar17 != 0) &&
                 ((uVar20 = puVar17[1], uVar20 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar2 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar20 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar20);
                  }
                  if (*puVar17 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < uVar5) && (*(short *)(lVar19 + (long)(int)uVar3 * 2) == 1)) {
                    iVar22 = 0x20;
                    goto LAB_02b1b270;
                  }
                }
              }
            }
          }
        }
        uVar20 = (uint)uVar7;
        if (puVar21[-0xc] - uVar20 < uVar12) {
          puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)(puVar21[-0xc] - uVar20) * 8);
          if (puVar15 != (uint *)0x0) {
            uVar3 = *puVar15;
            local_d8 = 0;
            if ((uVar3 != 0) && (puVar15 != (uint *)(ulong)uVar3)) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              local_d8 = 0;
              if (*puVar17 != 0) {
                uVar3 = puVar17[1];
                if ((uVar3 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                  lVar2 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar2 = 0x1c;
                  }
                  lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar2 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                    }
                    if (*puVar17 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < uVar5) &&
                       (local_d8 = (uint)*(ushort *)(lVar19 + (long)(int)uVar4 * 2), local_d8 < 0x20
                       )) goto LAB_02b1ac04;
                  }
                }
                local_d8 = 0;
              }
            }
LAB_02b1ac04:
            if ((((local_d8 != 0x1f) && (puVar21[-0xc] - uVar20 < uVar12)) &&
                (puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) +
                                     (long)(int)(puVar21[-0xc] - uVar20) * 8),
                puVar15 != (uint *)0x0)) &&
               ((uVar3 = *puVar15, uVar3 != 0 && (puVar15 != (uint *)(ulong)uVar3)))) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              if ((*puVar17 != 0) &&
                 ((uVar3 = puVar17[1], uVar3 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar2 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                  }
                  if (*puVar17 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < uVar5) && (*(short *)(lVar19 + (long)(int)uVar4 * 2) == 1)) {
                    iVar22 = 0x30;
                    goto LAB_02b1b270;
                  }
                }
              }
            }
          }
        }
        if (*puVar21 - uVar20 < uVar12) {
          puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)(*puVar21 - uVar20) * 8);
          if (puVar15 != (uint *)0x0) {
            uVar3 = *puVar15;
            local_d8 = 0;
            if ((uVar3 != 0) && (puVar15 != (uint *)(ulong)uVar3)) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              local_d8 = 0;
              if (*puVar17 != 0) {
                uVar3 = puVar17[1];
                if ((uVar3 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                  lVar2 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar2 = 0x1c;
                  }
                  lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar2 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                    }
                    if (*puVar17 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < uVar5) &&
                       (local_d8 = (uint)*(ushort *)(lVar19 + (long)(int)uVar4 * 2), local_d8 < 0x20
                       )) goto LAB_02b1ad24;
                  }
                }
                local_d8 = 0;
              }
            }
LAB_02b1ad24:
            if ((((local_d8 != 0x1f) && (*puVar21 - uVar20 < uVar12)) &&
                (puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)(*puVar21 - uVar20) * 8
                                     ), puVar15 != (uint *)0x0)) &&
               ((uVar3 = *puVar15, uVar3 != 0 && (puVar15 != (uint *)(ulong)uVar3)))) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              if ((*puVar17 != 0) &&
                 ((uVar3 = puVar17[1], uVar3 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar2 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                  }
                  if (*puVar17 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < uVar5) && (*(short *)(lVar19 + (long)(int)uVar4 * 2) == 1)) {
                    iVar22 = 0x40;
                    goto LAB_02b1b270;
                  }
                }
              }
            }
          }
        }
        if (puVar21[0xc] - uVar20 < uVar12) {
          puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)(puVar21[0xc] - uVar20) * 8);
          if (puVar15 != (uint *)0x0) {
            uVar3 = *puVar15;
            local_d8 = 0;
            if ((uVar3 != 0) && (puVar15 != (uint *)(ulong)uVar3)) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              local_d8 = 0;
              if (*puVar17 != 0) {
                uVar3 = puVar17[1];
                if ((uVar3 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                  lVar2 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar2 = 0x1c;
                  }
                  lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar2 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                    }
                    if (*puVar17 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < uVar5) &&
                       (local_d8 = (uint)*(ushort *)(lVar19 + (long)(int)uVar4 * 2), local_d8 < 0x20
                       )) goto LAB_02b1ae44;
                  }
                }
                local_d8 = 0;
              }
            }
LAB_02b1ae44:
            if ((((local_d8 != 0x1f) && (puVar21[0xc] - uVar20 < uVar12)) &&
                (puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) +
                                     (long)(int)(puVar21[0xc] - uVar20) * 8), puVar15 != (uint *)0x0
                )) && ((uVar3 = *puVar15, uVar3 != 0 && (puVar15 != (uint *)(ulong)uVar3)))) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              if ((*puVar17 != 0) &&
                 ((uVar3 = puVar17[1], uVar3 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar2 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                  }
                  if (*puVar17 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < uVar5) && (*(short *)(lVar19 + (long)(int)uVar4 * 2) == 1))
                  goto LAB_02b1b270;
                }
              }
            }
          }
        }
        if (puVar21[0x18] - uVar20 < uVar12) {
          puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)(puVar21[0x18] - uVar20) * 8);
          if (puVar15 != (uint *)0x0) {
            uVar3 = *puVar15;
            local_d8 = 0;
            if ((uVar3 != 0) && (puVar15 != (uint *)(ulong)uVar3)) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              local_d8 = 0;
              if (*puVar17 != 0) {
                uVar3 = puVar17[1];
                if ((uVar3 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                  lVar2 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar2 = 0x1c;
                  }
                  lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar2 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                    }
                    if (*puVar17 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < uVar5) &&
                       (local_d8 = (uint)*(ushort *)(lVar19 + (long)(int)uVar4 * 2), local_d8 < 0x20
                       )) goto LAB_02b1af64;
                  }
                }
                local_d8 = 0;
              }
            }
LAB_02b1af64:
            if ((((local_d8 != 0x1f) && (puVar21[0x18] - uVar20 < uVar12)) &&
                (puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) +
                                     (long)(int)(puVar21[0x18] - uVar20) * 8),
                puVar15 != (uint *)0x0)) &&
               ((uVar20 = *puVar15, uVar20 != 0 && (puVar15 != (uint *)(ulong)uVar20)))) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar20);
              if ((*puVar17 != 0) &&
                 ((uVar20 = puVar17[1], uVar20 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar2 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar20 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar20);
                  }
                  if (*puVar17 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < uVar5) && (*(short *)(lVar19 + (long)(int)uVar3 * 2) == 1)) {
                    iVar22 = 0x60;
                    goto LAB_02b1b270;
                  }
                }
              }
            }
          }
        }
        uVar20 = (uint)uVar7;
        if (puVar21[0x24] - uVar20 < uVar12) {
          puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)(puVar21[0x24] - uVar20) * 8);
          if (puVar15 != (uint *)0x0) {
            uVar3 = *puVar15;
            local_d8 = 0;
            if ((uVar3 != 0) && (puVar15 != (uint *)(ulong)uVar3)) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              local_d8 = 0;
              if (*puVar17 != 0) {
                uVar3 = puVar17[1];
                if ((uVar3 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                  lVar2 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar2 = 0x1c;
                  }
                  lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar2 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                    }
                    if (*puVar17 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < uVar5) &&
                       (local_d8 = (uint)*(ushort *)(lVar19 + (long)(int)uVar4 * 2), local_d8 < 0x20
                       )) goto LAB_02b1b084;
                  }
                }
                local_d8 = 0;
              }
            }
LAB_02b1b084:
            if ((((local_d8 != 0x1f) && (puVar21[0x24] - uVar20 < uVar12)) &&
                (puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) +
                                     (long)(int)(puVar21[0x24] - uVar20) * 8),
                puVar15 != (uint *)0x0)) &&
               ((uVar3 = *puVar15, uVar3 != 0 && (puVar15 != (uint *)(ulong)uVar3)))) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              if ((*puVar17 != 0) &&
                 ((uVar3 = puVar17[1], uVar3 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar2 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                  }
                  if (*puVar17 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < uVar5) && (*(short *)(lVar19 + (long)(int)uVar4 * 2) == 1)) {
                    iVar22 = 0x70;
                    goto LAB_02b1b270;
                  }
                }
              }
            }
          }
        }
        if (puVar21[0x30] - uVar20 < uVar12) {
          puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) + (long)(int)(puVar21[0x30] - uVar20) * 8);
          if (puVar15 != (uint *)0x0) {
            uVar3 = *puVar15;
            local_d8 = 0;
            if ((uVar3 != 0) && (puVar15 != (uint *)(ulong)uVar3)) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar3);
              local_d8 = 0;
              if (*puVar17 != 0) {
                uVar3 = puVar17[1];
                if ((uVar3 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                  lVar2 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar2 = 0x1c;
                  }
                  lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar2 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar3);
                    }
                    if (*puVar17 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < uVar5) &&
                       (local_d8 = (uint)*(ushort *)(lVar19 + (long)(int)uVar4 * 2), local_d8 < 0x20
                       )) goto LAB_02b1b1a4;
                  }
                }
                local_d8 = 0;
              }
            }
LAB_02b1b1a4:
            if ((((local_d8 != 0x1f) && (puVar21[0x30] - uVar20 < uVar12)) &&
                (puVar15 = *(uint **)(*(long *)(lVar18 + 0xb78) +
                                     (long)(int)(puVar21[0x30] - uVar20) * 8),
                puVar15 != (uint *)0x0)) &&
               ((uVar20 = *puVar15, uVar20 != 0 && (puVar15 != (uint *)(ulong)uVar20)))) {
              puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar20);
              if ((*puVar17 != 0) &&
                 ((uVar20 = puVar17[1], uVar20 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar17 + lVar2 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar2 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar20 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar20);
                  }
                  if (*puVar17 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < uVar5) && (*(short *)(lVar19 + (long)(int)uVar3 * 2) == 1)) {
                    iVar22 = 0x80;
                    goto LAB_02b1b270;
                  }
                }
              }
            }
          }
        }
        bVar10 = uVar14 < 7;
        uVar14 = uVar14 + 1;
        iVar11 = iVar11 + -0x10;
        puVar21 = puVar21 + 0x6c;
      } while (uVar14 != 8);
    }
  }
  uVar12 = 0;
LAB_02b1a744:
  return uVar12 & 1;
}

