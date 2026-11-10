
ulong FUN_001c70f0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  int iVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  long *plVar28;
  undefined2 *puVar29;
  undefined2 *puVar30;
  undefined8 *puVar31;
  ulong uVar32;
  undefined2 *puVar33;
  undefined1 auVar34 [16];
  long lStack_f8;
  undefined2 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined2 *puStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  uint local_a0;
  uint local_9c;
  ulong local_98;
  ulong uStack_90;
  undefined1 local_84 [4];
  undefined2 *local_80;
  undefined2 *local_78;
  undefined2 *local_70;
  ushort local_64 [2];
  
  if (*(char *)(param_1 + 0x1eb) != '\0') {
    uVar32 = 0;
    plVar25 = (long *)0x0;
    local_b8 = PTR_DAT_04bcc518 + 0x10;
    local_a8 = PTR_DAT_04bcbc48 + 0x10;
    local_9c = *(uint *)(*(long *)(param_1 + 8) + 8) & 0xfffffff7;
    local_a0 = 1;
    local_b0 = PTR_DAT_04bcc018 + 0x10;
LAB_001c7184:
    lVar17 = *(long *)(*(long *)(param_1 + 200) + uVar32 * 8);
    if (lVar17 != 0) {
      uVar22 = uVar32 >> 6;
      uVar24 = 1L << (uVar32 & 0x3f);
      if ((*(ulong *)(*(long *)(param_1 + 0x200) + uVar22 * 8) & uVar24) != 0) {
        plVar10 = (long *)(lVar17 + 0x10);
        uVar12 = *(ushort *)(lVar17 + 0x28) - 1;
        plVar28 = *(long **)(lVar17 + 8);
        local_64[0] = (ushort)uVar12;
        local_98 = uVar24;
        uStack_90 = uVar22;
        if (plVar28 == plVar10) {
LAB_001c71c8:
          puVar26 = (undefined2 *)0x0;
          local_70 = (undefined2 *)0x0;
          local_80 = (undefined2 *)0x0;
          local_78 = (undefined2 *)0x0;
          if (plVar28 != plVar10) {
            puVar33 = (undefined2 *)0x0;
            puVar29 = (undefined2 *)0x0;
LAB_001c71fc:
            uVar3 = (undefined2)plVar28[5];
            if (puVar29 < puVar33) {
              puVar30 = puVar29 + 1;
              *puVar29 = uVar3;
              plVar23 = (long *)plVar28[1];
              puVar27 = puVar26;
              local_78 = puVar30;
              if ((long *)plVar28[1] != (long *)0x0) goto LAB_001c72b0;
LAB_001c72c0:
              do {
                plVar13 = (long *)plVar28[2];
                bVar8 = (long *)*plVar13 != plVar28;
                plVar28 = plVar13;
              } while (bVar8);
            }
            else {
              if ((long)puVar29 - (long)puVar26 < -2) {
                auVar34 = FUN_01c6e558(&local_80);
                puVar7 = PTR_DAT_04bcb900;
                plVar13 = auVar34._8_8_;
                lVar17 = auVar34._0_8_;
                plVar23 = (long *)(PTR_DAT_04bcb900 + 0x28);
                puStack_f0 = puVar29;
                plStack_e8 = plVar28;
                plStack_e0 = plVar10;
                puStack_d8 = puVar26;
                plStack_d0 = plVar25;
                lStack_c8 = param_1;
                if (*PTR_DAT_04bcb908 != '\0') {
                  puVar11 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
                  uVar12 = *puVar11;
                  if (uVar12 != 0) {
                    lVar9 = **(long **)(puVar7 + 0xa0);
                    if ((ulong)((*(long **)(puVar7 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar12) {
                    /* WARNING: Subroutine does not return */
                      FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                                   ,0x47,0xe0000003,0);
                    }
                    plVar23 = (long *)(*(long *)(lVar9 + (ulong)uVar12 * 8) + 0x20);
                  }
                }
                if ((*plVar23 == 0) || (lVar9 = *(long *)(*plVar23 + 0x10), lVar9 == 0)) {
                  plVar25 = (long *)0x78;
                  (**(code **)(lRam0000000000000078 + 0x10))(0x78);
                  cVar5 = *(char *)(lVar17 + 0x38);
                }
                else {
                  plVar25 = (long *)(*(long *)(lVar9 + 0x10) + 0x78);
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                  cVar5 = *(char *)(lVar17 + 0x38);
                }
                if (((cVar5 != '\0') && ((*(ushort *)(plVar13 + 0xc) & 0xf) < 4)) &&
                   ((*(ushort *)(plVar13 + 0xc) & 0xf) != 2)) {
                  lVar9 = plVar13[0x3e];
                  *(undefined4 *)(lVar9 + 8) = 1;
                  *(undefined8 *)(lVar9 + 0x18) = 1;
                }
                lVar9 = plVar13[0x3e];
                if (*PTR_DAT_04bcbca8 == '\0') {
                  FUN_0018cb8c(&lStack_f8);
                }
                else {
                  FUN_0018c9b0(&lStack_f8,0);
                }
                plVar10 = plVar13 + 1;
                *(long *)PTR_DAT_04bcbcb0 = lStack_f8;
                uVar12 = *(uint *)(lVar9 + 8);
                uVar32 = (ulong)uVar12;
                if ((int)uVar12 < 0) {
                  uVar32 = -(ulong)-uVar12;
                }
                *(ulong *)(lVar9 + 0x10) = uVar32 + lStack_f8;
                iVar20 = (int)*plVar10;
                if (iVar20 != (int)*plVar10) {
                  ClearExclusiveLocal();
                  iVar16 = iVar20;
                  goto LAB_001c7870;
                }
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar8) {
                  *(int *)plVar10 = (int)*plVar10 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                while (iVar16 = iVar20, cVar5 != '\0') {
LAB_001c7870:
                  while (iVar20 = (int)*plVar10, iVar20 != iVar16) {
                    ClearExclusiveLocal();
                    iVar16 = iVar20;
                  }
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar8) {
                    *(int *)plVar10 = iVar16 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                }
                puVar31 = (undefined8 *)(lVar17 + 0x10);
                puVar18 = (undefined8 *)*puVar31;
                if (puVar18 != (undefined8 *)0x0) {
                  puVar15 = puVar31;
                  do {
                    puVar14 = puVar18;
                    if ((long *)puVar18[4] < plVar13) {
                      puVar14 = puVar15;
                      puVar18 = puVar18 + 1;
                    }
                    puVar18 = (undefined8 *)*puVar18;
                    puVar15 = puVar14;
                  } while (puVar18 != (undefined8 *)0x0);
                  if ((puVar14 != puVar31) && ((long *)puVar14[4] <= plVar13)) {
                    plVar28 = *(long **)(lVar17 + 0x20);
                    if (plVar28 != (long *)(lVar17 + 0x28)) {
                      plVar23 = plVar28;
                      do {
                        plVar21 = (long *)plVar23[1];
                        if ((long *)plVar23[5] == plVar13) {
                          if (plVar21 == (long *)0x0) {
                            plVar21 = plVar23;
                            do {
                              plVar19 = (long *)plVar21[2];
                              bVar8 = (long *)*plVar19 != plVar21;
                              plVar21 = plVar19;
                            } while (bVar8);
                          }
                          else {
                            do {
                              plVar19 = plVar21;
                              plVar21 = (long *)*plVar19;
                            } while ((long *)*plVar19 != (long *)0x0);
                          }
                          if (plVar28 == plVar23) {
                            *(long **)(lVar17 + 0x20) = plVar19;
                          }
                          *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + -1;
                          FUN_00192390(*(undefined8 *)(lVar17 + 0x28),plVar23);
                          FUN_00187e4c(plVar23);
                          puVar18 = *(undefined8 **)(lVar17 + 0x10);
                          if (puVar18 != (undefined8 *)0x0) {
                            puVar15 = puVar18;
                            puVar14 = puVar31;
                            do {
                              puVar2 = puVar15;
                              if ((long *)puVar15[4] < plVar13) {
                                puVar2 = puVar14;
                                puVar15 = puVar15 + 1;
                              }
                              puVar15 = (undefined8 *)*puVar15;
                              puVar14 = puVar2;
                            } while (puVar15 != (undefined8 *)0x0);
                            if ((puVar2 != puVar31) && ((long *)puVar2[4] <= plVar13)) {
                              puVar15 = (undefined8 *)puVar2[1];
                              if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
                                puVar15 = puVar2;
                                do {
                                  puVar14 = (undefined8 *)puVar15[2];
                                  bVar8 = (undefined8 *)*puVar14 != puVar15;
                                  puVar15 = puVar14;
                                } while (bVar8);
                              }
                              else {
                                do {
                                  puVar14 = puVar15;
                                  puVar15 = (undefined8 *)*puVar14;
                                } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
                              }
                              if (*(undefined8 **)(lVar17 + 8) == puVar2) {
                                *(undefined8 **)(lVar17 + 8) = puVar14;
                              }
                              *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
                              FUN_00192390(puVar18,puVar2);
                              FUN_00187e4c(puVar2);
                            }
                          }
                          iVar20 = (int)*plVar10 + -1;
                          lVar9 = *plVar10;
                          if ((int)lVar9 == (int)*plVar10) {
                            cVar5 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                            if (bVar8) {
                              *(int *)plVar10 = iVar20;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                            if (cVar5 != '\0') goto LAB_001c7a1c;
                            bVar8 = true;
                          }
                          else {
                            ClearExclusiveLocal();
LAB_001c7a1c:
                            bVar8 = false;
                          }
                          iVar16 = (int)lVar9;
                          if (!bVar8) {
                            do {
                              lVar9 = *plVar10;
                              iVar20 = iVar16 + -1;
                              if ((int)lVar9 == iVar16) {
                                cVar5 = '\x01';
                                bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                                if (bVar8) {
                                  *(int *)plVar10 = iVar20;
                                  cVar5 = ExclusiveMonitorsStatus();
                                }
                                if (cVar5 == '\0') break;
                              }
                              else {
                                ClearExclusiveLocal();
                              }
                              iVar16 = (int)lVar9;
                            } while( true );
                          }
                          if ((iVar20 == 0) && (*(char *)((long)plVar13 + 0xc) == '\0')) {
                            *(undefined1 *)((long)plVar13 + 0xc) = 1;
                            (**(code **)(*plVar13 + 8))(plVar13);
                          }
                          break;
                        }
                        plVar19 = plVar23;
                        if (plVar21 == (long *)0x0) {
                          do {
                            plVar23 = (long *)plVar19[2];
                            bVar8 = (long *)*plVar23 != plVar19;
                            plVar19 = plVar23;
                          } while (bVar8);
                        }
                        else {
                          do {
                            plVar23 = plVar21;
                            plVar21 = (long *)*plVar23;
                          } while ((long *)*plVar23 != (long *)0x0);
                        }
                      } while (plVar23 != (long *)(lVar17 + 0x28));
                    }
                  }
                  puVar15 = (undefined8 *)*puVar31;
                  do {
                    puVar18 = puVar31;
                    if (puVar15 == (undefined8 *)0x0) goto LAB_001c7a8c;
                    while( true ) {
                      puVar31 = puVar15;
                      if (plVar13 < (long *)puVar31[4]) break;
                      if (plVar13 <= (long *)puVar31[4]) goto LAB_001c7b10;
                      puVar15 = (undefined8 *)puVar31[1];
                      if ((undefined8 *)puVar31[1] == (undefined8 *)0x0) {
                        puVar18 = puVar31 + 1;
                        goto LAB_001c7a8c;
                      }
                    }
                    puVar15 = (undefined8 *)*puVar31;
                  } while( true );
                }
                puVar18 = puVar31;
LAB_001c7a8c:
                puVar15 = (undefined8 *)FUN_00187df4(0x28);
                puVar15[4] = plVar13;
                puVar15[2] = puVar31;
                *puVar15 = 0;
                puVar15[1] = 0;
                *puVar18 = puVar15;
                if (**(long **)(lVar17 + 8) != 0) {
                  *(long *)(lVar17 + 8) = **(long **)(lVar17 + 8);
                  puVar15 = (undefined8 *)*puVar18;
                }
                FUN_03876250(*(undefined8 *)(lVar17 + 0x10),puVar15);
                *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + 1;
LAB_001c7b10:
                uVar32 = *(ulong *)(plVar13[0x3e] + 0x10);
                puVar15 = (undefined8 *)FUN_00187df4(0x30);
                puVar15[4] = uVar32;
                puVar15[5] = plVar13;
                puVar18 = (undefined8 *)(lVar17 + 0x28);
                puVar31 = (undefined8 *)*puVar18;
                if ((undefined8 *)*puVar18 == (undefined8 *)0x0) {
                  *puVar15 = 0;
                  puVar15[1] = 0;
                  puVar15[2] = puVar18;
                  *puVar18 = puVar15;
                  lVar9 = **(long **)(lVar17 + 0x20);
                }
                else {
                  do {
                    while (puVar18 = puVar31, (ulong)puVar18[4] <= uVar32) {
                      puVar31 = (undefined8 *)puVar18[1];
                      if ((undefined8 *)puVar18[1] == (undefined8 *)0x0) {
                        *puVar15 = 0;
                        puVar15[1] = 0;
                        puVar15[2] = puVar18;
                        puVar18[1] = puVar15;
                        lVar9 = **(long **)(lVar17 + 0x20);
                        puVar18 = puVar18 + 1;
                        goto joined_r0x001c7be8;
                      }
                    }
                    puVar31 = (undefined8 *)*puVar18;
                  } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
                  *puVar15 = 0;
                  puVar15[1] = 0;
                  puVar15[2] = puVar18;
                  *puVar18 = puVar15;
                  lVar9 = **(long **)(lVar17 + 0x20);
                }
joined_r0x001c7be8:
                if (lVar9 != 0) {
                  *(long *)(lVar17 + 0x20) = lVar9;
                  puVar15 = (undefined8 *)*puVar18;
                }
                FUN_03876250(*(undefined8 *)(lVar17 + 0x28),puVar15);
                *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
                uVar32 = (**(code **)(*plVar25 + 0x20))(plVar25);
                return uVar32;
              }
              lVar17 = (long)puVar29 - (long)puVar26 >> 1;
              uVar24 = (long)puVar33 - (long)puVar26;
              uVar22 = uVar24;
              if (uVar24 <= lVar17 + 1U) {
                uVar22 = lVar17 + 1;
              }
              if (0x7ffffffffffffffd < uVar24) {
                uVar22 = 0x7fffffffffffffff;
              }
              if (uVar22 == 0) {
                lVar9 = 0;
                puVar27 = (undefined2 *)(lVar17 * 2);
                puVar30 = puVar27 + 1;
                *puVar27 = uVar3;
              }
              else {
                lVar9 = FUN_00187df4(uVar22 << 1);
                puVar27 = (undefined2 *)(lVar9 + lVar17 * 2);
                puVar30 = puVar27 + 1;
                *puVar27 = uVar3;
              }
              while (puVar29 != puVar26) {
                puVar29 = puVar29 + -1;
                puVar27 = puVar27 + -1;
                *puVar27 = *puVar29;
              }
              puVar33 = (undefined2 *)(lVar9 + uVar22 * 2);
              local_80 = puVar27;
              local_78 = puVar30;
              local_70 = puVar33;
              if (puVar26 != (undefined2 *)0x0) {
                FUN_00187e4c(puVar26);
              }
              plVar23 = (long *)plVar28[1];
              puVar26 = puVar27;
              if ((long *)plVar28[1] == (long *)0x0) goto LAB_001c72c0;
LAB_001c72b0:
              do {
                plVar13 = plVar23;
                plVar23 = (long *)*plVar13;
                puVar26 = puVar27;
              } while ((long *)*plVar13 != (long *)0x0);
            }
            plVar28 = plVar13;
            puVar29 = puVar30;
            if (plVar13 == plVar10) goto LAB_001c7358;
            goto LAB_001c71fc;
          }
          puVar30 = (undefined2 *)0x0;
          if (plVar25 != (long *)0x0) goto LAB_001c73b4;
joined_r0x001c740c:
          if (local_9c == 2) {
            plVar10 = (long *)FUN_00185a6c();
            if (plVar10 != (long *)0x0) {
              *plVar10 = (long)local_a8;
              *(undefined4 *)(plVar10 + 1) = 1;
              *(undefined1 *)((long)plVar10 + 0xc) = 0;
              *plVar10 = (long)local_b0;
              FUN_00196a24(plVar10,0x80,0);
            }
LAB_001c7470:
            plVar25 = (long *)FUN_00185a6c(0x20);
            if (plVar25 != (long *)0x0) {
              FUN_001972b0(plVar25,plVar10);
            }
            plVar28 = plVar10 + 1;
            iVar20 = (int)*plVar28;
            iVar16 = (int)*plVar28 + -1;
            if (iVar20 != (int)*plVar28) {
              ClearExclusiveLocal();
LAB_001c7510:
              do {
                lVar17 = *plVar28;
                iVar16 = iVar20 + -1;
                if ((int)lVar17 == iVar20) {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar8) {
                    *(int *)plVar28 = iVar16;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_001c74d8;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar20 = (int)lVar17;
              } while( true );
            }
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar8) {
              *(int *)plVar28 = iVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_001c7510;
LAB_001c74d8:
            if ((iVar16 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
              *(undefined1 *)((long)plVar10 + 0xc) = 1;
              (**(code **)(*plVar10 + 8))(plVar10);
            }
            goto LAB_001c753c;
          }
          plVar10 = (long *)FUN_0018ae24(0x38,0);
          if (plVar10 == (long *)0x0) {
            plVar25 = (long *)0x0;
            bVar8 = false;
            bVar6 = false;
          }
          else {
            *plVar10 = (long)(PTR_DAT_04bcbc48 + 0x10);
            *(undefined4 *)(plVar10 + 1) = 1;
            *(undefined1 *)((long)plVar10 + 0xc) = 0;
            *plVar10 = (long)(PTR_DAT_04bcc018 + 0x10);
            FUN_00196a24(plVar10,0x80,4);
            *plVar10 = (long)local_b8;
            if (plVar10[2] != 0) goto LAB_001c7470;
            FUN_00196ce0(plVar10);
            FUN_00185ac4(plVar10);
            plVar25 = (long *)0x0;
            bVar8 = false;
            bVar6 = false;
          }
        }
        else {
          do {
            uVar1 = uVar12 & 0xffff;
            uVar4 = *(ushort *)(plVar28 + 5);
            uVar12 = (uint)uVar4;
            if (uVar1 + 1 != uVar12) goto LAB_001c71c8;
            plVar23 = (long *)plVar28[1];
            plVar13 = plVar28;
            if ((long *)plVar28[1] == (long *)0x0) {
              do {
                plVar28 = (long *)plVar13[2];
                bVar8 = (long *)*plVar28 != plVar13;
                plVar13 = plVar28;
              } while (bVar8);
            }
            else {
              do {
                plVar28 = plVar23;
                plVar23 = (long *)*plVar28;
              } while ((long *)*plVar28 != (long *)0x0);
            }
            local_64[0] = uVar4;
          } while (plVar28 != plVar10);
          puVar26 = (undefined2 *)0x0;
          puVar30 = (undefined2 *)0x0;
          local_70 = (undefined2 *)0x0;
          local_80 = (undefined2 *)0x0;
          local_78 = (undefined2 *)0x0;
LAB_001c7358:
          if (plVar25 == (long *)0x0) goto joined_r0x001c740c;
LAB_001c73b4:
          lVar17 = (long)puVar30 + (4 - (long)puVar26);
          uVar22 = FUN_00196ea0(plVar25[2],lVar17);
          if ((uVar22 & 1) == 0) {
            local_a0 = 0;
            bVar8 = false;
            bVar6 = true;
            goto LAB_001c75cc;
          }
          if (999 < (ulong)(*(long *)(plVar25[2] + 0x18) + lVar17)) {
            FUN_001ca1f0(param_1,plVar25[2],0,1);
            (**(code **)(*plVar25 + 8))(plVar25);
            goto joined_r0x001c740c;
          }
LAB_001c753c:
          local_84[0] = (undefined1)uVar32;
          FUN_00197478(plVar25,local_84,1);
          puVar33 = local_78;
          puVar26 = local_80;
          local_84[0] = (undefined1)((uint)((int)local_78 - (int)local_80) >> 1);
          FUN_00197478(plVar25,local_84,1);
          FUN_00197478(plVar25,local_64,2);
          for (puVar30 = puVar26; puVar33 != puVar30; puVar30 = puVar30 + 1) {
            FUN_00197478(plVar25,puVar30,2);
          }
          bVar6 = false;
          bVar8 = true;
          *(ulong *)(*(long *)(param_1 + 0x200) + uStack_90 * 8) =
               *(ulong *)(*(long *)(param_1 + 0x200) + uStack_90 * 8) &
               (local_98 ^ 0xffffffffffffffff);
        }
LAB_001c75cc:
        if (puVar26 != (undefined2 *)0x0) {
          local_78 = puVar26;
          FUN_00187e4c(puVar26);
        }
        if (!bVar8) {
          if (!bVar6) {
            local_a0 = 0;
            goto LAB_001c764c;
          }
          goto LAB_001c7618;
        }
      }
    }
    bVar8 = *(ushort *)(param_1 + 0x180) <= uVar32;
    uVar32 = uVar32 + 1;
    if (bVar8) goto LAB_001c7618;
    goto LAB_001c7184;
  }
  local_a0 = 1;
LAB_001c764c:
  return (ulong)(local_a0 & 1);
LAB_001c7618:
  if ((plVar25 != (long *)0x0) && (*(long *)(plVar25[2] + 0x18) != 0)) {
    FUN_001ca1f0(param_1,plVar25[2],0,1);
    (**(code **)(*plVar25 + 8))(plVar25);
  }
  goto LAB_001c764c;
}

