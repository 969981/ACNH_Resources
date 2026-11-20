
void FUN_03f06650(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined1 auStack_88 [16];
  long local_78;
  long local_70;
  ulong local_68;
  
  FUN_004863c0(auStack_88);
  FUN_004863f0(&local_78,auStack_88,param_2,param_3,PTR_DAT_04bd7210);
  lVar27 = local_78;
  if (local_78 != 0) {
    if (local_70 == 0) {
      lVar27 = 0;
    }
    else {
      uVar7 = FUN_00427110(local_70,PTR_DAT_04bd7210);
      if ((uVar7 & 1) == 0) {
        lVar27 = 0;
      }
      else {
        uVar7 = FUN_004274f0(local_70);
        if ((uVar7 & 8) != 0) {
          lVar27 = 0;
        }
      }
    }
  }
  if ((local_68 & 1) != 0) {
    FUN_0043dd50(local_68 & 0xfffffffffffffffe);
  }
  FUN_004863d0(auStack_88);
  if (lVar27 == 0) {
    uVar17 = *(uint *)(param_1 + 0xd8) | 4;
    goto LAB_03f06e34;
  }
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
  *(undefined4 *)(param_1 + 0xf0) = param_3;
  lVar26 = *(long *)PTR_DAT_04bb2698;
  if (lVar26 == 0) {
    puVar10 = malloc(0x18);
  }
  else {
    plVar9 = param_4;
    if (param_4 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar9 = (long *)(lVar26 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        puVar10 = (uint *)0x0;
        goto LAB_03f06790;
      }
    }
    puVar10 = (uint *)(**(code **)(*plVar9 + 0x30))(plVar9,0x18,8);
  }
LAB_03f06790:
  *puVar10 = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *(long *)(puVar10 + 4) = lVar27;
  *(uint **)(param_1 + 0xd0) = puVar10;
  uVar30 = *(undefined8 *)(puVar10 + 4);
  uVar11 = FUN_00427270(PTR_DAT_04bdcac0);
  lVar26 = FUN_004d64e0(uVar30,uVar11,0);
  lVar27 = DAT_05ae7600;
  uVar17 = *(uint *)(lVar26 + 0x30);
  uVar7 = (ulong)uVar17;
  if ((int)uVar17 < 1) {
    uVar17 = 0x10;
  }
  else {
    uVar31 = uVar7 << 5 | 8;
    if (DAT_05ae7600 == 0) {
      puVar12 = malloc(uVar31);
joined_r0x03f06e10:
      if (puVar12 != (ulong *)0x0) {
        puVar18 = puVar12 + 1;
        *puVar12 = uVar7;
        puVar22 = puVar18;
        if ((uVar17 & 1) != 0) {
          puVar22 = puVar12 + 5;
          puVar12[1] = 0;
          *(undefined4 *)(puVar12 + 2) = 0;
          puVar12[3] = 0;
          *(undefined1 *)(puVar12 + 4) = 1;
        }
        if ((uVar7 - 1 & 0x7ffffffffffffff) != 0) {
          do {
            *puVar22 = 0;
            *(undefined4 *)(puVar22 + 1) = 0;
            puVar22[2] = 0;
            *(undefined1 *)(puVar22 + 3) = 1;
            puVar22[4] = 0;
            *(undefined4 *)(puVar22 + 5) = 0;
            puVar22[6] = 0;
            *(undefined1 *)(puVar22 + 7) = 1;
            puVar22 = puVar22 + 8;
          } while (puVar22 != puVar18 + uVar7 * 4);
        }
        uVar31 = 0;
        *puVar10 = uVar17;
        *(ulong **)(puVar10 + 2) = puVar18;
        do {
          plVar9 = (long *)(*(long *)(puVar10 + 2) + uVar31 * 0x20);
          if (*puVar10 <= uVar31) {
            plVar9 = (long *)0x0;
          }
          lVar27 = *(long *)(lVar26 + 0x28);
          if (*(long *)(lVar27 + uVar31 * 8) == 0) {
            lVar27 = 0;
          }
          else {
            FUN_004435a0();
            lVar27 = *(long *)(lVar27 + uVar31 * 8);
          }
          lVar8 = *plVar9;
          *plVar9 = lVar27;
          if (lVar8 != 0) {
            FUN_004435c0();
            lVar27 = *plVar9;
          }
          lVar8 = DAT_05ae7600;
          uVar17 = *(uint *)(lVar27 + 0x28);
          uVar28 = (ulong)uVar17;
          if ((int)uVar17 < 1) {
            uVar17 = 0x20;
            goto LAB_03f06e2c;
          }
          uVar32 = uVar28 << 5 | 8;
          if (DAT_05ae7600 == 0) {
            puVar12 = malloc(uVar32);
joined_r0x03f069a8:
            if (puVar12 != (ulong *)0x0) {
              uVar32 = uVar28 & 7;
              puVar18 = puVar12 + 1;
              *puVar12 = uVar28;
              puVar22 = puVar18;
              if ((uVar17 & 7) != 0) {
                do {
                  puVar22 = puVar12;
                  puVar22[4] = 0;
                  uVar32 = uVar32 - 1;
                  *(undefined4 *)(puVar22 + 3) = 0;
                  puVar22[1] = 0;
                  puVar22[2] = 0;
                  puVar12 = puVar22 + 4;
                } while (uVar32 != 0);
                puVar22 = puVar22 + 5;
              }
              if (6 < (uVar28 - 1 & 0x7ffffffffffffff)) {
                do {
                  *puVar22 = 0;
                  puVar22[1] = 0;
                  *(undefined4 *)(puVar22 + 2) = 0;
                  puVar22[5] = 0;
                  *(undefined4 *)(puVar22 + 6) = 0;
                  puVar22[9] = 0;
                  *(undefined4 *)(puVar22 + 10) = 0;
                  puVar22[0xd] = 0;
                  *(undefined4 *)(puVar22 + 0xe) = 0;
                  *(undefined4 *)(puVar22 + 0x12) = 0;
                  puVar22[0xf] = 0;
                  *(undefined4 *)(puVar22 + 0x16) = 0;
                  puVar22[0x13] = 0;
                  *(undefined4 *)(puVar22 + 0x1a) = 0;
                  puVar22[0x17] = 0;
                  puVar22[0x1f] = 0;
                  *(undefined4 *)(puVar22 + 0x1e) = 0;
                  puVar22[0x1b] = 0;
                  puVar22[3] = 0;
                  puVar22[4] = 0;
                  puVar22[7] = 0;
                  puVar22[8] = 0;
                  puVar22[0xb] = 0;
                  puVar22[0xc] = 0;
                  puVar22[0x10] = 0;
                  puVar22[0x11] = 0;
                  puVar22[0x14] = 0;
                  puVar22[0x15] = 0;
                  puVar22[0x18] = 0;
                  puVar22[0x19] = 0;
                  puVar22[0x1c] = 0;
                  puVar22[0x1d] = 0;
                  puVar22 = puVar22 + 0x20;
                } while (puVar22 != puVar18 + uVar28 * 4);
              }
              *(uint *)(plVar9 + 1) = uVar17;
              plVar9[2] = (long)puVar18;
            }
          }
          else {
            plVar13 = param_4;
            if (param_4 != (long *)0x0) {
LAB_03f0697c:
              puVar12 = (ulong *)(**(code **)(*plVar13 + 0x30))(plVar13,uVar32,8);
              goto joined_r0x03f069a8;
            }
            lVar27 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar13 = (long *)(lVar8 + 8);
            if (lVar27 != 0) {
              plVar13 = (long *)(lVar27 + 0xa8);
            }
            plVar13 = (long *)*plVar13;
            if (plVar13 != (long *)0x0) goto LAB_03f0697c;
          }
          uVar17 = *(uint *)(*plVar9 + 0x58);
          if (0 < (int)uVar17) {
            uVar28 = 0;
            uVar29 = 0;
            do {
              lVar27 = *(long *)(*(long *)(*plVar9 + 0x50) + uVar28 * 8);
              if (lVar27 != 0) {
                if (*(int *)(lVar27 + 0x24) - 0x10U < 2) {
                  *(undefined1 *)(plVar9 + 3) = 0;
                }
                else if (*(int *)(lVar27 + 0x24) == 1) {
                  uVar2 = uVar29;
                  if (*(uint *)(plVar9 + 1) <= uVar29) {
                    uVar2 = 0;
                  }
                  plVar13 = (long *)(plVar9[2] + (long)(int)uVar2 * 0x20);
                  *plVar13 = lVar27;
                  if (0 < *(int *)(lVar27 + 0x58)) {
                    uVar2 = *(uint *)(*(long *)(lVar27 + 0x50) + 0x10);
                    uVar32 = (ulong)uVar2;
                    if ((int)uVar2 < 1) {
                      iVar5 = *(int *)(*(long *)(*(long *)(*plVar9 + 0x20) + (long)(int)uVar29 * 8)
                                      + 0x90);
                      if (-1 < iVar5) {
                        uVar2 = iVar5 + 1;
                        uVar32 = (ulong)uVar2;
                        puVar1 = (uint *)(plVar13 + 2);
                        lVar27 = *(long *)PTR_DAT_04bb2698;
                        if (lVar27 == 0) {
                          puVar15 = malloc(uVar32 << 1);
joined_r0x03f06cf8:
                          if (puVar15 != (undefined8 *)0x0) {
                            uVar20 = uVar32 & 7;
                            puVar19 = puVar15;
                            if ((uVar2 & 7) != 0) {
                              puVar21 = puVar15;
                              do {
                                uVar20 = uVar20 - 1;
                                puVar19 = (undefined8 *)((long)puVar21 + 2);
                                *(undefined2 *)puVar21 = 0x1ff;
                                puVar21 = puVar19;
                              } while (uVar20 != 0);
                            }
                            if (6 < (uVar32 - 1 & 0x7fffffffffffffff)) {
                              do {
                                puVar21 = puVar19 + 2;
                                *puVar19 = 0x1ff01ff01ff01ff;
                                puVar19[1] = 0x1ff01ff01ff01ff;
                                puVar19 = puVar21;
                              } while (puVar21 != (undefined8 *)((long)puVar15 + uVar32 * 2));
                            }
                            *puVar1 = uVar2;
                            plVar13[3] = (long)puVar15;
                          }
                        }
                        else {
                          plVar14 = param_4;
                          if (param_4 != (long *)0x0) {
LAB_03f06bd0:
                            puVar15 = (undefined8 *)
                                      (**(code **)(*plVar14 + 0x30))(plVar14,uVar32 << 1,8);
                            goto joined_r0x03f06cf8;
                          }
                          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                          plVar14 = (long *)(lVar27 + 8);
                          if (lVar8 != 0) {
                            plVar14 = (long *)(lVar8 + 0xa8);
                          }
                          plVar14 = (long *)*plVar14;
                          if (plVar14 != (long *)0x0) goto LAB_03f06bd0;
                        }
                        plVar14 = plVar13 + 3;
                        lVar27 = *plVar14;
                        uVar23 = *puVar1;
                        uVar16 = 0;
                        do {
                          uVar3 = uVar16;
                          if (uVar23 <= uVar16) {
                            uVar3 = 0;
                          }
                          *(undefined1 *)(lVar27 + (ulong)uVar3 * 2 + 1) = 1;
                          uVar23 = uVar16;
                          if (iVar5 <= (int)uVar16) {
                            uVar23 = 0xffffffff;
                          }
                          uVar3 = uVar16;
                          if (*puVar1 <= uVar16) {
                            uVar3 = 0;
                          }
                          *(char *)(*plVar14 + (ulong)uVar3 * 2) = (char)uVar23;
                          uVar23 = *puVar1;
                          lVar27 = *plVar14;
                          uVar3 = uVar16;
                          if (uVar23 <= uVar16) {
                            uVar3 = 0;
                          }
                          bVar6 = *(byte *)(lVar27 + (ulong)uVar3 * 2);
                          if ((-1 < (char)bVar6) &&
                             (lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(*plVar9 + 0x20) +
                                                                   (long)(int)uVar29 * 8) + 0x88) +
                                               (ulong)bVar6 * 8), *(int *)(lVar8 + 0x24) == 6)) {
                            plVar13[1] = lVar8;
                          }
                          uVar16 = uVar16 + 1;
                        } while (uVar2 != uVar16);
                      }
                    }
                    else {
                      puVar1 = (uint *)(plVar13 + 2);
                      lVar27 = *(long *)PTR_DAT_04bb2698;
                      if (lVar27 == 0) {
                        puVar15 = malloc(uVar32 << 1);
joined_r0x03f06bf0:
                        if (puVar15 != (undefined8 *)0x0) {
                          uVar20 = uVar32 & 7;
                          puVar19 = puVar15;
                          if ((uVar2 & 7) != 0) {
                            puVar21 = puVar15;
                            do {
                              uVar20 = uVar20 - 1;
                              puVar19 = (undefined8 *)((long)puVar21 + 2);
                              *(undefined2 *)puVar21 = 0x1ff;
                              puVar21 = puVar19;
                            } while (uVar20 != 0);
                          }
                          if (6 < (uVar32 - 1 & 0x7fffffffffffffff)) {
                            do {
                              puVar21 = puVar19 + 2;
                              *puVar19 = 0x1ff01ff01ff01ff;
                              puVar19[1] = 0x1ff01ff01ff01ff;
                              puVar19 = puVar21;
                            } while (puVar21 != (undefined8 *)((long)puVar15 + uVar32 * 2));
                          }
                          *puVar1 = uVar2;
                          plVar13[3] = (long)puVar15;
                        }
                      }
                      else {
                        plVar14 = param_4;
                        if (param_4 != (long *)0x0) {
LAB_03f06b44:
                          puVar15 = (undefined8 *)
                                    (**(code **)(*plVar14 + 0x30))(plVar14,uVar32 << 1,8);
                          goto joined_r0x03f06bf0;
                        }
                        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                        plVar14 = (long *)(lVar27 + 8);
                        if (lVar8 != 0) {
                          plVar14 = (long *)(lVar8 + 0xa8);
                        }
                        plVar14 = (long *)*plVar14;
                        if (plVar14 != (long *)0x0) goto LAB_03f06b44;
                      }
                      uVar24 = (ulong)*puVar1;
                      uVar20 = 0;
                      plVar14 = plVar13 + 3;
                      lVar27 = *plVar14;
                      do {
                        uVar25 = uVar20 & 0xffffffff;
                        uVar4 = uVar25;
                        if (uVar24 <= uVar20) {
                          uVar4 = 0;
                        }
                        *(undefined1 *)(lVar27 + uVar4 * 2 + 1) = 1;
                        uVar24 = uVar25;
                        if (*puVar1 <= uVar20) {
                          uVar24 = 0;
                        }
                        *(char *)(*plVar14 + uVar24 * 2) =
                             (char)*(undefined4 *)
                                    (*(long *)(*(long *)(*plVar13 + 0x50) + 8) + uVar20 * 4);
                        uVar24 = (ulong)*puVar1;
                        lVar27 = *plVar14;
                        if (uVar24 <= uVar20) {
                          uVar25 = 0;
                        }
                        bVar6 = *(byte *)(lVar27 + uVar25 * 2);
                        if ((-1 < (char)bVar6) &&
                           (lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(*plVar9 + 0x20) +
                                                                 (long)(int)uVar29 * 8) + 0x88) +
                                             (ulong)bVar6 * 8), *(int *)(lVar8 + 0x24) == 6)) {
                          plVar13[1] = lVar8;
                        }
                        uVar20 = uVar20 + 1;
                      } while (uVar32 != uVar20);
                    }
                    uVar29 = uVar29 + 1;
                  }
                }
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 != uVar17);
          }
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar7);
        uVar17 = 1;
        goto LAB_03f06e2c;
      }
    }
    else {
      plVar9 = param_4;
      if (param_4 != (long *)0x0) {
LAB_03f06820:
        puVar12 = (ulong *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar31,8);
        goto joined_r0x03f06e10;
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar9 = (long *)(lVar27 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) goto LAB_03f06820;
    }
    uVar17 = 0x80;
  }
LAB_03f06e2c:
  uVar17 = *(uint *)(param_1 + 0xd8) | uVar17;
LAB_03f06e34:
  *(uint *)(param_1 + 0xd8) = uVar17;
  return;
}

