
void FUN_0277c210(int param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  byte local_6d;
  undefined4 local_6c;
  uint *local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (param_1 != 0) {
    iVar10 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar6 = (undefined4 *)(**(code **)*param_2)(param_2,iVar10);
      lVar12 = *(long *)puVar3;
      uVar4 = FUN_0277d6c4();
      lVar11 = *(long *)puVar3;
      if (lVar11 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_70 = *(undefined2 *)puVar6;
          local_6e = *(undefined1 *)((long)puVar6 + 2);
          local_6d = *(byte *)((long)puVar6 + 3);
          local_6c = puVar6[1];
          local_68 = (uint *)0x0;
          local_78 = puVar1;
          uVar4 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar3 != 0) {
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar11 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(puVar6);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
                 (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
                 puVar9 != (uint *)0x0)) {
                local_68 = puVar9;
              }
            }
          }
          uVar7 = FUN_01b04f00(&local_78);
          puVar2 = PTR_DAT_04bb37e0;
          if ((uVar7 & 1) == 0) {
            *(undefined2 *)puVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
            *(undefined *)((long)puVar6 + 2) = puVar2[2];
            *(undefined *)((long)puVar6 + 3) = puVar2[3];
            uVar5 = *(undefined4 *)(puVar2 + 4);
LAB_0277c298:
            puVar6[1] = uVar5;
          }
          else {
            local_90 = (undefined *)CONCAT44(local_90._4_4_,0x8f);
            if (local_68 == (uint *)0x0) {
              local_98 = CONCAT44(local_98._4_4_,0xbc);
            }
            else {
              uVar4 = *local_68;
              uVar8 = 0;
              if ((uVar4 != 0) && (local_68 != (uint *)(ulong)uVar4)) {
                puVar9 = (uint *)((long)local_68 - (long)(ulong)uVar4);
                uVar8 = 0;
                if (*puVar9 != 0) {
                  uVar4 = puVar9[1];
                  if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                    lVar11 = 0xc;
                    if (*(char *)((long)puVar9 + 10) != '\0') {
                      lVar11 = 0x1c;
                    }
                    lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                    if (lVar11 != 0) {
                      uVar8 = 0;
                      if ((ulong)uVar4 != 0) {
                        uVar8 = (uint)((ulong)((long)local_68 - lVar11) / (ulong)uVar4);
                      }
                      if (*puVar9 <= uVar8) {
                        uVar8 = 0xffffffff;
                      }
                      if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar8 = (uint)*(ushort *)
                                         (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2),
                         uVar8 < 0xbd)) goto LAB_0277c440;
                    }
                  }
                  uVar8 = 0;
                }
              }
LAB_0277c440:
              local_98 = CONCAT44(local_98._4_4_,uVar8);
              if (uVar8 == 0x8f) {
                FUN_01b06140(&local_90,puVar6);
LAB_0277c514:
                *(undefined2 *)puVar6 = (undefined2)local_90;
                *(undefined1 *)((long)puVar6 + 2) = local_90._2_1_;
                *(undefined1 *)((long)puVar6 + 3) = local_90._3_1_;
                uVar5 = local_90._4_4_;
                goto LAB_0277c298;
              }
              uVar4 = *local_68;
              if ((uVar4 != 0) && (local_68 != (uint *)(ulong)uVar4)) {
                puVar9 = (uint *)((long)local_68 - (long)(ulong)uVar4);
                if (*puVar9 != 0) {
                  uVar4 = puVar9[1];
                  if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                    lVar11 = 0xc;
                    if (*(char *)((long)puVar9 + 10) != '\0') {
                      lVar11 = 0x1c;
                    }
                    lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                    if (lVar11 != 0) {
                      uVar8 = 0;
                      if ((ulong)uVar4 != 0) {
                        uVar8 = (uint)((ulong)((long)local_68 - lVar11) / (ulong)uVar4);
                      }
                      if (*puVar9 <= uVar8) {
                        uVar8 = 0xffffffff;
                      }
                      if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2) == 0x92
                         )) {
                        local_90 = (undefined *)0x9f2;
                        FUN_0277d4ac(&local_90);
                        goto LAB_0277c514;
                      }
                    }
                  }
                  if (*puVar9 != 0) {
                    uVar4 = puVar9[1];
                    if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                      lVar11 = 0xc;
                      if (*(char *)((long)puVar9 + 10) != '\0') {
                        lVar11 = 0x1c;
                      }
                      lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                      if (lVar11 != 0) {
                        uVar8 = 0;
                        if ((ulong)uVar4 != 0) {
                          uVar8 = (uint)((ulong)((long)local_68 - lVar11) / (ulong)uVar4);
                        }
                        if (*puVar9 <= uVar8) {
                          uVar8 = 0xffffffff;
                        }
                        if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2) ==
                            0x8d)) {
                          local_90 = (undefined *)CONCAT44(local_90._4_4_,0x8d);
                          uVar8 = 0;
                          uVar4 = *local_68;
                          if ((uVar4 != 0) && (local_68 != (uint *)(ulong)uVar4)) {
                            puVar9 = (uint *)((long)local_68 - (long)(ulong)uVar4);
                            uVar8 = 0;
                            if (*puVar9 != 0) {
                              uVar4 = puVar9[1];
                              if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                                lVar11 = 0xc;
                                if (*(char *)((long)puVar9 + 10) != '\0') {
                                  lVar11 = 0x1c;
                                }
                                lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                                if (lVar11 != 0) {
                                  uVar8 = 0;
                                  if ((ulong)uVar4 != 0) {
                                    uVar8 = (uint)((ulong)((long)local_68 - lVar11) / (ulong)uVar4);
                                  }
                                  if (*puVar9 <= uVar8) {
                                    uVar8 = 0xffffffff;
                                  }
                                  if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                                     (uVar8 = (uint)*(ushort *)
                                                     (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                     (long)(int)uVar8 * 2), uVar8 < 0xbd))
                                  goto LAB_0277c628;
                                }
                              }
                              uVar8 = 0;
                            }
                          }
LAB_0277c628:
                          local_98 = CONCAT44(local_98._4_4_,uVar8);
                          if (uVar8 == 0x8d) {
                            local_6d = local_6d | 4;
                          }
                          *(byte *)((long)puVar6 + 3) = local_6d;
                          *(undefined2 *)puVar6 = local_70;
                          *(undefined1 *)((long)puVar6 + 2) = local_6e;
                          puVar6[1] = local_6c;
                          goto LAB_0277c2a0;
                        }
                      }
                    }
                    if (*puVar9 != 0) {
                      uVar4 = puVar9[1];
                      if ((uVar4 == 0) || ((ulong)(ushort)puVar9[2] == 0)) {
LAB_0277c798:
                        if ((*puVar9 != 0) &&
                           ((uVar4 = puVar9[1], uVar4 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
                          lVar11 = 0xc;
                          if (*(char *)((long)puVar9 + 10) != '\0') {
                            lVar11 = 0x1c;
                          }
                          lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                          if (lVar11 != 0) {
                            uVar8 = 0;
                            if ((ulong)uVar4 != 0) {
                              uVar8 = (uint)((ulong)((long)local_68 - lVar11) / (ulong)uVar4);
                            }
                            if (*puVar9 <= uVar8) {
                              uVar8 = 0xffffffff;
                            }
                            if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                               (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2)
                                == 0x8c)) {
                              local_98 = 0x955;
                              FUN_0277d4ac(&local_98);
                              local_80 = 0;
                              local_88 = (undefined4)local_98;
                              uStack_84 = local_98._4_4_;
                              lVar11 = *(long *)puVar3;
                              local_90 = PTR_DAT_04bc0510 + 0x10;
                              uVar4 = FUN_0277d6c4(&local_88);
                              if (*(long *)puVar3 != 0) {
                                lVar11 = *(long *)(lVar11 + 0x57e58);
                                uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                                if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
                                   (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0
                                   )) {
                                  lVar11 = *(long *)PTR_DAT_04bc0428;
                                  uVar4 = FUN_0277d6c4(&local_98);
                                  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                                  if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
                                     (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) +
                                                        (long)(int)uVar4 * 8), lVar11 != 0)) {
                                    local_80 = lVar11;
                                  }
                                }
                              }
                              uVar5 = 5;
                              goto LAB_0277c8b8;
                            }
                          }
                        }
                      }
                      else {
                        lVar11 = 0xc;
                        if (*(char *)((long)puVar9 + 10) != '\0') {
                          lVar11 = 0x1c;
                        }
                        lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                        if (lVar11 == 0) goto LAB_0277c798;
                        uVar8 = 0;
                        if ((ulong)uVar4 != 0) {
                          uVar8 = (uint)((ulong)((long)local_68 - lVar11) / (ulong)uVar4);
                        }
                        if (*puVar9 <= uVar8) {
                          uVar8 = 0xffffffff;
                        }
                        if ((*(uint *)PTR_DAT_04bc00c8 <= uVar8) ||
                           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2) !=
                            0x8a)) goto LAB_0277c798;
                        uVar5 = FUN_01af02d0(&local_78);
                        local_98 = 0x955;
                        FUN_0277d4ac(&local_98);
                        local_80 = 0;
                        local_88 = (undefined4)local_98;
                        uStack_84 = local_98._4_4_;
                        lVar11 = *(long *)puVar3;
                        local_90 = PTR_DAT_04bc0510 + 0x10;
                        uVar4 = FUN_0277d6c4(&local_88);
                        if (*(long *)puVar3 != 0) {
                          lVar11 = *(long *)(lVar11 + 0x57e58);
                          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                          if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
                             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                            lVar11 = *(long *)PTR_DAT_04bc0428;
                            uVar4 = FUN_0277d6c4(&local_98);
                            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                            if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
                               (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8)
                               , lVar11 != 0)) {
                              local_80 = lVar11;
                            }
                          }
                        }
LAB_0277c8b8:
                        FUN_01af2bc0(&local_90,uVar5);
                        *puVar6 = local_88;
                        puVar6[1] = uStack_84;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0277c2a0:
      iVar10 = iVar10 + 1;
    } while (param_1 != iVar10);
  }
  return;
}

