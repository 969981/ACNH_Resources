
/* WARNING: Removing unreachable block (ram,0x01387200) */
/* WARNING: Removing unreachable block (ram,0x01387218) */
/* WARNING: Removing unreachable block (ram,0x01387210) */

bool FUN_013871c0(ushort *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  ushort uVar12;
  ushort uVar13;
  uint *puVar14;
  uint uVar15;
  
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) {
    bVar5 = false;
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb8);
    bVar5 = false;
    if (lVar9 != 0) {
      uVar10 = 0;
      puVar11 = (ushort *)(lVar9 + 0x78);
      bVar5 = true;
      do {
        lVar9 = *(long *)PTR_DAT_04bb27a8;
        uVar12 = *(ushort *)(lVar9 + 0xb90);
        uVar4 = *(uint *)(lVar9 + 0xb70);
        uVar15 = (uint)puVar11[-0x30] - (uint)uVar12;
        if (uVar15 < uVar4) {
          puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)uVar15 * 8);
          if (puVar14 != (uint *)0x0) {
            uVar15 = *puVar14;
            if (uVar15 == 0 || puVar14 == (uint *)(ulong)uVar15) {
LAB_01387330:
              uVar13 = 0;
            }
            else {
              puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
              if (((*puVar8 == 0) || (uVar15 = puVar8[1], uVar15 == 0)) ||
                 ((ulong)(ushort)puVar8[2] == 0)) goto LAB_01387330;
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 == 0) goto LAB_01387330;
              uVar2 = 0;
              if ((ulong)uVar15 != 0) {
                uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bbbd58 <= uVar2) ||
                 (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar2 * 2),
                 0x1f < uVar13)) goto LAB_01387330;
            }
            if (uVar13 != 0x1f) {
              uVar13 = puVar11[-0x30];
              uVar15 = (uint)uVar13 - (uint)uVar12;
              if (uVar15 < uVar4) {
                puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)uVar15 * 8);
                if (puVar14 == (uint *)0x0) goto LAB_01387414;
                uVar15 = *puVar14;
                if (uVar15 == 0 || puVar14 == (uint *)(ulong)uVar15) {
LAB_0138736c:
                  uVar7 = 0;
                }
                else {
                  puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
                  uVar7 = 0;
                  if (*puVar8 != 0) {
                    uVar15 = puVar8[1];
                    if ((uVar15 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar8 + 10) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                      if (lVar1 != 0) {
                        uVar2 = 0;
                        if ((ulong)uVar15 != 0) {
                          uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
                        }
                        if (*puVar8 <= uVar2) {
                          uVar2 = 0xffffffff;
                        }
                        if ((uVar2 < *(uint *)PTR_DAT_04bbbd58) &&
                           (uVar7 = *(ushort *)
                                     (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar2 * 2),
                           uVar7 < 0x20)) goto LAB_01387370;
                      }
                    }
                    goto LAB_0138736c;
                  }
                }
LAB_01387370:
                if (uVar7 != 0x15) {
                  if (puVar14 != (uint *)0x0) {
                    uVar15 = *puVar14;
                    if (uVar15 != 0 && puVar14 != (uint *)(ulong)uVar15) {
                      puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
                      if (((*puVar8 != 0) && (uVar15 = puVar8[1], uVar15 != 0)) &&
                         ((ulong)(ushort)puVar8[2] != 0)) {
                        lVar1 = 0xc;
                        if (*(char *)((long)puVar8 + 10) != '\0') {
                          lVar1 = 0x1c;
                        }
                        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                        if (lVar1 != 0) {
                          uVar2 = 0;
                          if ((ulong)uVar15 != 0) {
                            uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
                          }
                          if (*puVar8 <= uVar2) {
                            uVar2 = 0xffffffff;
                          }
                          if ((uVar2 < *(uint *)PTR_DAT_04bbbd58) &&
                             (uVar7 = *(ushort *)
                                       (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar2 * 2),
                             puVar14 = (uint *)(ulong)uVar7, uVar7 < 0x20)) goto LAB_01387414;
                        }
                      }
                    }
                    puVar14 = (uint *)0x0;
                  }
                  goto LAB_01387414;
                }
              }
              else {
                puVar14 = (uint *)0x0;
LAB_01387414:
                if ((int)puVar14 != 0x17) goto LAB_01387424;
              }
              uVar6 = 0;
              goto LAB_01388474;
            }
          }
        }
LAB_01387424:
        uVar15 = (uint)uVar12;
        if (puVar11[-0x24] - uVar15 < uVar4) {
          puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(puVar11[-0x24] - uVar15) * 8);
          if (puVar14 != (uint *)0x0) {
            uVar2 = *puVar14;
            if (uVar2 == 0 || puVar14 == (uint *)(ulong)uVar2) {
LAB_013874b4:
              uVar13 = 0;
            }
            else {
              puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
              if (((*puVar8 == 0) || (uVar2 = puVar8[1], uVar2 == 0)) ||
                 ((ulong)(ushort)puVar8[2] == 0)) goto LAB_013874b4;
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 == 0) goto LAB_013874b4;
              uVar3 = 0;
              if ((ulong)uVar2 != 0) {
                uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
              }
              if (*puVar8 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bbbd58 <= uVar3) ||
                 (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                 0x1f < uVar13)) goto LAB_013874b4;
            }
            if (uVar13 != 0x1f) {
              uVar13 = puVar11[-0x24];
              if ((uVar13 - uVar15 < uVar4) &&
                 (puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(uVar13 - uVar15) * 8),
                 puVar14 != (uint *)0x0)) {
                uVar2 = *puVar14;
                if (uVar2 == 0 || puVar14 == (uint *)(ulong)uVar2) {
LAB_013874f0:
                  uVar7 = 0;
                }
                else {
                  puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
                  uVar7 = 0;
                  if (*puVar8 != 0) {
                    uVar2 = puVar8[1];
                    if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar8 + 10) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                      if (lVar1 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar2 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
                        }
                        if (*puVar8 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)PTR_DAT_04bbbd58) &&
                           (uVar7 = *(ushort *)
                                     (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                           uVar7 < 0x20)) goto LAB_013874f4;
                      }
                    }
                    goto LAB_013874f0;
                  }
                }
LAB_013874f4:
                if (uVar7 != 0x15) {
                  uVar7 = 0;
                  if (((puVar14 != (uint *)0x0) && (uVar2 = *puVar14, uVar2 != 0)) &&
                     (puVar14 != (uint *)(ulong)uVar2)) {
                    puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
                    uVar7 = 0;
                    if (*puVar8 != 0) {
                      uVar2 = puVar8[1];
                      if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                        lVar1 = 0xc;
                        if (*(char *)((long)puVar8 + 10) != '\0') {
                          lVar1 = 0x1c;
                        }
                        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                        if (lVar1 != 0) {
                          uVar3 = 0;
                          if ((ulong)uVar2 != 0) {
                            uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
                          }
                          if (*puVar8 <= uVar3) {
                            uVar3 = 0xffffffff;
                          }
                          if ((uVar3 < *(uint *)PTR_DAT_04bbbd58) &&
                             (uVar7 = *(ushort *)
                                       (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                             uVar7 < 0x20)) goto LAB_0138759c;
                        }
                      }
                      uVar7 = 0;
                    }
                  }
                  goto LAB_0138759c;
                }
              }
              else {
                uVar7 = 0;
LAB_0138759c:
                if (uVar7 != 0x17) goto LAB_013875b0;
              }
              uVar6 = 1;
              goto LAB_01388474;
            }
          }
        }
LAB_013875b0:
        if (puVar11[-0x18] - uVar15 < uVar4) {
          puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(puVar11[-0x18] - uVar15) * 8);
          if (puVar14 != (uint *)0x0) {
            uVar2 = *puVar14;
            if (uVar2 == 0 || puVar14 == (uint *)(ulong)uVar2) {
LAB_01387640:
              uVar13 = 0;
            }
            else {
              puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
              if (((*puVar8 == 0) || (uVar2 = puVar8[1], uVar2 == 0)) ||
                 ((ulong)(ushort)puVar8[2] == 0)) goto LAB_01387640;
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 == 0) goto LAB_01387640;
              uVar3 = 0;
              if ((ulong)uVar2 != 0) {
                uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
              }
              if (*puVar8 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bbbd58 <= uVar3) ||
                 (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                 0x1f < uVar13)) goto LAB_01387640;
            }
            if (uVar13 != 0x1f) {
              uVar13 = puVar11[-0x18];
              if ((uVar13 - uVar15 < uVar4) &&
                 (puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(uVar13 - uVar15) * 8),
                 puVar14 != (uint *)0x0)) {
                uVar15 = *puVar14;
                if (uVar15 == 0 || puVar14 == (uint *)(ulong)uVar15) {
LAB_0138767c:
                  uVar7 = 0;
                }
                else {
                  puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
                  uVar7 = 0;
                  if (*puVar8 != 0) {
                    uVar15 = puVar8[1];
                    if ((uVar15 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar8 + 10) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                      if (lVar1 != 0) {
                        uVar2 = 0;
                        if ((ulong)uVar15 != 0) {
                          uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
                        }
                        if (*puVar8 <= uVar2) {
                          uVar2 = 0xffffffff;
                        }
                        if ((uVar2 < *(uint *)PTR_DAT_04bbbd58) &&
                           (uVar7 = *(ushort *)
                                     (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar2 * 2),
                           uVar7 < 0x20)) goto LAB_01387680;
                      }
                    }
                    goto LAB_0138767c;
                  }
                }
LAB_01387680:
                if (uVar7 != 0x15) {
                  uVar7 = 0;
                  if (((puVar14 != (uint *)0x0) && (uVar15 = *puVar14, uVar15 != 0)) &&
                     (puVar14 != (uint *)(ulong)uVar15)) {
                    puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
                    uVar7 = 0;
                    if (*puVar8 != 0) {
                      uVar15 = puVar8[1];
                      if ((uVar15 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                        lVar1 = 0xc;
                        if (*(char *)((long)puVar8 + 10) != '\0') {
                          lVar1 = 0x1c;
                        }
                        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                        if (lVar1 != 0) {
                          uVar2 = 0;
                          if ((ulong)uVar15 != 0) {
                            uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
                          }
                          if (*puVar8 <= uVar2) {
                            uVar2 = 0xffffffff;
                          }
                          if ((uVar2 < *(uint *)PTR_DAT_04bbbd58) &&
                             (uVar7 = *(ushort *)
                                       (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar2 * 2),
                             uVar7 < 0x20)) goto LAB_01387728;
                        }
                      }
                      uVar7 = 0;
                    }
                  }
                  goto LAB_01387728;
                }
              }
              else {
                uVar7 = 0;
LAB_01387728:
                if (uVar7 != 0x17) goto LAB_01387740;
              }
              uVar6 = 2;
              goto LAB_01388474;
            }
          }
        }
LAB_01387740:
        uVar15 = (uint)uVar12;
        if (puVar11[-0xc] - uVar15 < uVar4) {
          puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(puVar11[-0xc] - uVar15) * 8);
          if (puVar14 != (uint *)0x0) {
            uVar2 = *puVar14;
            if (uVar2 == 0 || puVar14 == (uint *)(ulong)uVar2) {
LAB_013877d0:
              uVar12 = 0;
            }
            else {
              puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
              if (((*puVar8 == 0) || (uVar2 = puVar8[1], uVar2 == 0)) ||
                 ((ulong)(ushort)puVar8[2] == 0)) goto LAB_013877d0;
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 == 0) goto LAB_013877d0;
              uVar3 = 0;
              if ((ulong)uVar2 != 0) {
                uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
              }
              if (*puVar8 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bbbd58 <= uVar3) ||
                 (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                 0x1f < uVar12)) goto LAB_013877d0;
            }
            if (uVar12 != 0x1f) {
              uVar13 = puVar11[-0xc];
              if ((uVar13 - uVar15 < uVar4) &&
                 (puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(uVar13 - uVar15) * 8),
                 puVar14 != (uint *)0x0)) {
                uVar2 = *puVar14;
                if (uVar2 == 0 || puVar14 == (uint *)(ulong)uVar2) {
LAB_0138780c:
                  uVar12 = 0;
                }
                else {
                  puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
                  uVar12 = 0;
                  if (*puVar8 != 0) {
                    uVar2 = puVar8[1];
                    if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar8 + 10) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                      if (lVar1 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar2 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
                        }
                        if (*puVar8 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)PTR_DAT_04bbbd58) &&
                           (uVar12 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                           uVar12 < 0x20)) goto LAB_01387810;
                      }
                    }
                    goto LAB_0138780c;
                  }
                }
LAB_01387810:
                if (uVar12 != 0x15) {
                  uVar12 = 0;
                  if (((puVar14 != (uint *)0x0) && (uVar2 = *puVar14, uVar2 != 0)) &&
                     (puVar14 != (uint *)(ulong)uVar2)) {
                    puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
                    uVar12 = 0;
                    if (*puVar8 != 0) {
                      uVar2 = puVar8[1];
                      if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                        lVar1 = 0xc;
                        if (*(char *)((long)puVar8 + 10) != '\0') {
                          lVar1 = 0x1c;
                        }
                        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                        if (lVar1 != 0) {
                          uVar3 = 0;
                          if ((ulong)uVar2 != 0) {
                            uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
                          }
                          if (*puVar8 <= uVar3) {
                            uVar3 = 0xffffffff;
                          }
                          if ((uVar3 < *(uint *)PTR_DAT_04bbbd58) &&
                             (uVar12 = *(ushort *)
                                        (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                             uVar12 < 0x20)) goto LAB_013878b8;
                        }
                      }
                      uVar12 = 0;
                    }
                  }
                  goto LAB_013878b8;
                }
              }
              else {
                uVar12 = 0;
LAB_013878b8:
                if (uVar12 != 0x17) goto LAB_013878d0;
              }
              uVar6 = 3;
              goto LAB_01388474;
            }
          }
        }
LAB_013878d0:
        if (*puVar11 - uVar15 < uVar4) {
          puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(*puVar11 - uVar15) * 8);
          if (puVar14 != (uint *)0x0) {
            uVar2 = *puVar14;
            if (uVar2 == 0 || puVar14 == (uint *)(ulong)uVar2) {
LAB_01387960:
              uVar12 = 0;
            }
            else {
              puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
              if (((*puVar8 == 0) || (uVar2 = puVar8[1], uVar2 == 0)) ||
                 ((ulong)(ushort)puVar8[2] == 0)) goto LAB_01387960;
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 == 0) goto LAB_01387960;
              uVar3 = 0;
              if ((ulong)uVar2 != 0) {
                uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
              }
              if (*puVar8 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bbbd58 <= uVar3) ||
                 (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                 0x1f < uVar12)) goto LAB_01387960;
            }
            if (uVar12 != 0x1f) {
              uVar13 = *puVar11;
              if ((uVar13 - uVar15 < uVar4) &&
                 (puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(uVar13 - uVar15) * 8),
                 puVar14 != (uint *)0x0)) {
                uVar2 = *puVar14;
                uVar12 = 0;
                if ((uVar2 != 0) && (puVar14 != (uint *)(ulong)uVar2)) {
                  puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
                  uVar12 = 0;
                  if (*puVar8 != 0) {
                    uVar2 = puVar8[1];
                    if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar8 + 10) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                      if (lVar1 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar2 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
                        }
                        if (*puVar8 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)PTR_DAT_04bbbd58) &&
                           (uVar12 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                           uVar12 < 0x20)) goto LAB_01387a08;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01387a08:
                if (uVar12 != 0x15) {
                  uVar12 = 0;
                  if (((puVar14 != (uint *)0x0) && (uVar2 = *puVar14, uVar2 != 0)) &&
                     (puVar14 != (uint *)(ulong)uVar2)) {
                    puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
                    uVar12 = 0;
                    if (*puVar8 != 0) {
                      uVar2 = puVar8[1];
                      if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                        lVar1 = 0xc;
                        if (*(char *)((long)puVar8 + 10) != '\0') {
                          lVar1 = 0x1c;
                        }
                        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                        if (lVar1 != 0) {
                          uVar3 = 0;
                          if ((ulong)uVar2 != 0) {
                            uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
                          }
                          if (*puVar8 <= uVar3) {
                            uVar3 = 0xffffffff;
                          }
                          if ((uVar3 < *(uint *)PTR_DAT_04bbbd58) &&
                             (uVar12 = *(ushort *)
                                        (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                             uVar12 < 0x20)) goto LAB_01387ab0;
                        }
                      }
                      uVar12 = 0;
                    }
                  }
                  goto LAB_01387ab0;
                }
              }
              else {
                uVar12 = 0;
LAB_01387ab0:
                if (uVar12 != 0x17) goto LAB_01387ac0;
              }
              uVar6 = 4;
              goto LAB_01388474;
            }
          }
        }
LAB_01387ac0:
        if (puVar11[0xc] - uVar15 < uVar4) {
          puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(puVar11[0xc] - uVar15) * 8);
          if (puVar14 != (uint *)0x0) {
            uVar2 = *puVar14;
            if (uVar2 == 0 || puVar14 == (uint *)(ulong)uVar2) {
LAB_01387b50:
              uVar12 = 0;
            }
            else {
              puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
              if (((*puVar8 == 0) || (uVar2 = puVar8[1], uVar2 == 0)) ||
                 ((ulong)(ushort)puVar8[2] == 0)) goto LAB_01387b50;
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 == 0) goto LAB_01387b50;
              uVar3 = 0;
              if ((ulong)uVar2 != 0) {
                uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
              }
              if (*puVar8 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bbbd58 <= uVar3) ||
                 (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                 0x1f < uVar12)) goto LAB_01387b50;
            }
            if (uVar12 != 0x1f) {
              uVar13 = puVar11[0xc];
              if ((uVar13 - uVar15 < uVar4) &&
                 (puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(uVar13 - uVar15) * 8),
                 puVar14 != (uint *)0x0)) {
                uVar2 = *puVar14;
                uVar12 = 0;
                if ((uVar2 != 0) && (puVar14 != (uint *)(ulong)uVar2)) {
                  puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
                  uVar12 = 0;
                  if (*puVar8 != 0) {
                    uVar2 = puVar8[1];
                    if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar8 + 10) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                      if (lVar1 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar2 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
                        }
                        if (*puVar8 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)PTR_DAT_04bbbd58) &&
                           (uVar12 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                           uVar12 < 0x20)) goto LAB_01387bf8;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01387bf8:
                if (uVar12 != 0x15) {
                  uVar12 = 0;
                  if (((puVar14 != (uint *)0x0) && (uVar2 = *puVar14, uVar2 != 0)) &&
                     (puVar14 != (uint *)(ulong)uVar2)) {
                    puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
                    uVar12 = 0;
                    if (*puVar8 != 0) {
                      uVar2 = puVar8[1];
                      if ((uVar2 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                        lVar1 = 0xc;
                        if (*(char *)((long)puVar8 + 10) != '\0') {
                          lVar1 = 0x1c;
                        }
                        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                        if (lVar1 != 0) {
                          uVar3 = 0;
                          if ((ulong)uVar2 != 0) {
                            uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
                          }
                          if (*puVar8 <= uVar3) {
                            uVar3 = 0xffffffff;
                          }
                          if ((uVar3 < *(uint *)PTR_DAT_04bbbd58) &&
                             (uVar12 = *(ushort *)
                                        (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar3 * 2),
                             uVar12 < 0x20)) goto LAB_01387ca0;
                        }
                      }
                      uVar12 = 0;
                    }
                  }
                  goto LAB_01387ca0;
                }
              }
              else {
                uVar12 = 0;
LAB_01387ca0:
                if (uVar12 != 0x17) goto LAB_01387cb0;
              }
              uVar6 = 5;
              goto LAB_01388474;
            }
          }
        }
LAB_01387cb0:
        if (puVar11[0x18] - uVar15 < uVar4) {
          puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)(puVar11[0x18] - uVar15) * 8);
          if (puVar14 != (uint *)0x0) {
            uVar4 = *puVar14;
            if (uVar4 == 0 || puVar14 == (uint *)(ulong)uVar4) {
LAB_01387d40:
              uVar12 = 0;
            }
            else {
              puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar4);
              if (((*puVar8 == 0) || (uVar4 = puVar8[1], uVar4 == 0)) ||
                 ((ulong)(ushort)puVar8[2] == 0)) goto LAB_01387d40;
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 == 0) goto LAB_01387d40;
              uVar15 = 0;
              if ((ulong)uVar4 != 0) {
                uVar15 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar15) {
                uVar15 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bbbd58 <= uVar15) ||
                 (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar15 * 2),
                 0x1f < uVar12)) goto LAB_01387d40;
            }
            if (uVar12 != 0x1f) {
              uVar13 = puVar11[0x18];
              uVar4 = (uint)uVar13 - (uint)*(ushort *)(lVar9 + 0xb90);
              if ((uVar4 < *(uint *)(lVar9 + 0xb70)) &&
                 (puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)uVar4 * 8),
                 puVar14 != (uint *)0x0)) {
                uVar4 = *puVar14;
                uVar12 = 0;
                if ((uVar4 != 0) && (puVar14 != (uint *)(ulong)uVar4)) {
                  puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar4);
                  uVar12 = 0;
                  if (*puVar8 != 0) {
                    uVar4 = puVar8[1];
                    if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar8 + 10) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                      if (lVar1 != 0) {
                        uVar15 = 0;
                        if ((ulong)uVar4 != 0) {
                          uVar15 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar4);
                        }
                        if (*puVar8 <= uVar15) {
                          uVar15 = 0xffffffff;
                        }
                        if ((uVar15 < *(uint *)PTR_DAT_04bbbd58) &&
                           (uVar12 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar15 * 2),
                           uVar12 < 0x20)) goto LAB_01387df0;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01387df0:
                if (uVar12 != 0x15) {
                  uVar12 = 0;
                  if (((puVar14 != (uint *)0x0) && (uVar4 = *puVar14, uVar4 != 0)) &&
                     (puVar14 != (uint *)(ulong)uVar4)) {
                    puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar4);
                    uVar12 = 0;
                    if (*puVar8 != 0) {
                      uVar4 = puVar8[1];
                      if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                        lVar1 = 0xc;
                        if (*(char *)((long)puVar8 + 10) != '\0') {
                          lVar1 = 0x1c;
                        }
                        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                        if (lVar1 != 0) {
                          uVar15 = 0;
                          if ((ulong)uVar4 != 0) {
                            uVar15 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar4);
                          }
                          if (*puVar8 <= uVar15) {
                            uVar15 = 0xffffffff;
                          }
                          if ((uVar15 < *(uint *)PTR_DAT_04bbbd58) &&
                             (uVar12 = *(ushort *)
                                        (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar15 * 2),
                             uVar12 < 0x20)) goto LAB_01387e98;
                        }
                      }
                      uVar12 = 0;
                    }
                  }
                  goto LAB_01387e98;
                }
              }
              else {
                uVar12 = 0;
LAB_01387e98:
                if (uVar12 != 0x17) goto LAB_01387eb0;
              }
              uVar6 = 6;
              goto LAB_01388474;
            }
          }
        }
LAB_01387eb0:
        uVar12 = *(ushort *)(lVar9 + 0xb90);
        uVar15 = (uint)puVar11[0x24] - (uint)uVar12;
        uVar4 = *(uint *)(lVar9 + 0xb70);
        if (uVar15 < uVar4) {
          puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)uVar15 * 8);
          if (puVar14 != (uint *)0x0) {
            uVar15 = *puVar14;
            if (uVar15 == 0 || puVar14 == (uint *)(ulong)uVar15) {
LAB_01387f50:
              uVar13 = 0;
            }
            else {
              puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
              if (((*puVar8 == 0) || (uVar15 = puVar8[1], uVar15 == 0)) ||
                 ((ulong)(ushort)puVar8[2] == 0)) goto LAB_01387f50;
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 == 0) goto LAB_01387f50;
              uVar2 = 0;
              if ((ulong)uVar15 != 0) {
                uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bbbd58 <= uVar2) ||
                 (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar2 * 2),
                 0x1f < uVar13)) goto LAB_01387f50;
            }
            if (uVar13 != 0x1f) {
              uVar13 = puVar11[0x24];
              uVar15 = (uint)uVar13 - (uint)uVar12;
              if ((uVar15 < uVar4) &&
                 (puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)uVar15 * 8),
                 puVar14 != (uint *)0x0)) {
                uVar15 = *puVar14;
                uVar7 = 0;
                if ((uVar15 != 0) && (puVar14 != (uint *)(ulong)uVar15)) {
                  puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
                  uVar7 = 0;
                  if (*puVar8 != 0) {
                    uVar15 = puVar8[1];
                    if ((uVar15 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar8 + 10) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                      if (lVar1 != 0) {
                        uVar2 = 0;
                        if ((ulong)uVar15 != 0) {
                          uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
                        }
                        if (*puVar8 <= uVar2) {
                          uVar2 = 0xffffffff;
                        }
                        if ((uVar2 < *(uint *)PTR_DAT_04bbbd58) &&
                           (uVar7 = *(ushort *)
                                     (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar2 * 2),
                           uVar7 < 0x20)) goto LAB_01387ff8;
                      }
                    }
                    uVar7 = 0;
                  }
                }
LAB_01387ff8:
                if (uVar7 != 0x15) {
                  uVar7 = 0;
                  if (((puVar14 != (uint *)0x0) && (uVar15 = *puVar14, uVar15 != 0)) &&
                     (puVar14 != (uint *)(ulong)uVar15)) {
                    puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
                    uVar7 = 0;
                    if (*puVar8 != 0) {
                      uVar15 = puVar8[1];
                      if ((uVar15 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                        lVar1 = 0xc;
                        if (*(char *)((long)puVar8 + 10) != '\0') {
                          lVar1 = 0x1c;
                        }
                        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                        if (lVar1 != 0) {
                          uVar2 = 0;
                          if ((ulong)uVar15 != 0) {
                            uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
                          }
                          if (*puVar8 <= uVar2) {
                            uVar2 = 0xffffffff;
                          }
                          if ((uVar2 < *(uint *)PTR_DAT_04bbbd58) &&
                             (uVar7 = *(ushort *)
                                       (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar2 * 2),
                             uVar7 < 0x20)) goto LAB_013880a0;
                        }
                      }
                      uVar7 = 0;
                    }
                  }
                  goto LAB_013880a0;
                }
              }
              else {
                uVar7 = 0;
LAB_013880a0:
                if (uVar7 != 0x17) goto LAB_013880b0;
              }
              uVar6 = 7;
              goto LAB_01388474;
            }
          }
        }
LAB_013880b0:
        if (((uint)puVar11[0x30] - (uint)uVar12 < uVar4) &&
           (puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) +
                                (long)(int)((uint)puVar11[0x30] - (uint)uVar12) * 8),
           puVar14 != (uint *)0x0)) {
          uVar4 = *puVar14;
          uVar12 = 0;
          if ((uVar4 != 0) && (puVar14 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar4);
            uVar12 = 0;
            if (*puVar8 != 0) {
              uVar4 = puVar8[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 != 0) {
                  uVar15 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar15 = (uint)((ulong)((long)puVar14 - lVar9) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar15) {
                    uVar15 = 0xffffffff;
                  }
                  if ((uVar15 < *(uint *)PTR_DAT_04bbbd58) &&
                     (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar15 * 2),
                     uVar12 < 0x20)) goto LAB_01388148;
                }
              }
              uVar12 = 0;
            }
          }
LAB_01388148:
          if (uVar12 != 0x1f) {
            lVar9 = *(long *)PTR_DAT_04bb27a8;
            uVar13 = puVar11[0x30];
            uVar4 = (uint)uVar13 - (uint)*(ushort *)(lVar9 + 0xb90);
            if ((uVar4 < *(uint *)(lVar9 + 0xb70)) &&
               (puVar14 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)uVar4 * 8),
               puVar14 != (uint *)0x0)) {
              uVar4 = *puVar14;
              uVar12 = 0;
              if ((uVar4 != 0) && (puVar14 != (uint *)(ulong)uVar4)) {
                puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar4);
                uVar12 = 0;
                if (*puVar8 != 0) {
                  uVar4 = puVar8[1];
                  if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                    lVar9 = 0xc;
                    if (*(char *)((long)puVar8 + 10) != '\0') {
                      lVar9 = 0x1c;
                    }
                    lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                    if (lVar9 != 0) {
                      uVar15 = 0;
                      if ((ulong)uVar4 != 0) {
                        uVar15 = (uint)((ulong)((long)puVar14 - lVar9) / (ulong)uVar4);
                      }
                      if (*puVar8 <= uVar15) {
                        uVar15 = 0xffffffff;
                      }
                      if ((uVar15 < *(uint *)PTR_DAT_04bbbd58) &&
                         (uVar12 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar15 * 2),
                         uVar12 < 0x20)) goto LAB_013881fc;
                    }
                  }
                  uVar12 = 0;
                }
              }
LAB_013881fc:
              if (uVar12 != 0x15) {
                uVar12 = 0;
                if (((puVar14 != (uint *)0x0) && (uVar4 = *puVar14, uVar4 != 0)) &&
                   (puVar14 != (uint *)(ulong)uVar4)) {
                  puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar4);
                  uVar12 = 0;
                  if (*puVar8 != 0) {
                    uVar4 = puVar8[1];
                    if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                      lVar9 = 0xc;
                      if (*(char *)((long)puVar8 + 10) != '\0') {
                        lVar9 = 0x1c;
                      }
                      lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                      if (lVar9 != 0) {
                        uVar15 = 0;
                        if ((ulong)uVar4 != 0) {
                          uVar15 = (uint)((ulong)((long)puVar14 - lVar9) / (ulong)uVar4);
                        }
                        if (*puVar8 <= uVar15) {
                          uVar15 = 0xffffffff;
                        }
                        if ((uVar15 < *(uint *)PTR_DAT_04bbbd58) &&
                           (uVar12 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar15 * 2),
                           uVar12 < 0x20)) goto LAB_01387264;
                      }
                    }
                    uVar12 = 0;
                  }
                }
                goto LAB_01387264;
              }
            }
            else {
              uVar12 = 0;
LAB_01387264:
              if (uVar12 != 0x17) goto LAB_01387274;
            }
            uVar6 = 8;
LAB_01388474:
            if (param_1 != (ushort *)0x0) {
              *param_1 = uVar13;
            }
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = uVar6;
            }
            if (param_3 == (undefined4 *)0x0) {
              return bVar5;
            }
            *param_3 = (int)uVar10;
            return bVar5;
          }
        }
LAB_01387274:
        bVar5 = uVar10 < 7;
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 0x6c;
      } while (uVar10 != 8);
    }
  }
  return bVar5;
}

