
void FUN_026b6cf0(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (param_2 != (long *)0x0) {
    if (param_3 == 0) {
      iVar9 = 0;
      iVar10 = 0x18;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      do {
        puVar12 = (undefined4 *)(param_1 + 0x1094c + (long)iVar9 * 0x2c);
        lVar11 = *(long *)puVar3;
        uVar4 = FUN_0277d6c4(puVar12);
        lVar8 = *(long *)puVar3;
        if (lVar8 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            local_70 = *puVar12;
            uStack_6c = puVar12[1];
            local_68 = 0;
            local_78 = puVar1;
            uVar4 = FUN_0277d6c4(&local_70);
            if (*(long *)puVar3 != 0) {
              lVar8 = *(long *)(lVar8 + 0x57e58);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                lVar8 = *(long *)PTR_DAT_04bc0428;
                uVar4 = FUN_0277d6c4(puVar12);
                uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
                if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
                   (((puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
                     puVar6 != (uint *)0x0 && (uVar4 = *puVar6, uVar4 != 0)) &&
                    (puVar6 != (uint *)(ulong)uVar4)))) {
                  puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
                  if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) &&
                     ((ulong)(ushort)puVar7[2] != 0)) {
                    lVar8 = 0xc;
                    if (*(char *)((long)puVar7 + 10) != '\0') {
                      lVar8 = 0x1c;
                    }
                    lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
                    if (lVar8 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar4 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar4);
                      }
                      if (*puVar7 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2) == 0x14
                         )) {
                        lVar8 = (**(code **)(*param_2 + 0x18))();
                        uVar4 = FUN_0277d6c4(puVar12);
                        if ((uVar4 >> 3 & 0x1fff) < 0x753) {
                          lVar11 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
                          *(uint *)(lVar8 + lVar11) =
                               *(uint *)(lVar8 + lVar11) &
                               (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      do {
        puVar12 = (undefined4 *)(param_1 + 0x1094c + (long)iVar9 * 0x2c);
        lVar11 = *(long *)puVar3;
        uVar4 = FUN_0277d6c4(puVar12);
        lVar8 = *(long *)puVar3;
        if (lVar8 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            local_70 = *puVar12;
            uStack_6c = puVar12[1];
            local_68 = 0;
            local_78 = puVar1;
            uVar4 = FUN_0277d6c4(&local_70);
            if (*(long *)puVar3 != 0) {
              lVar8 = *(long *)(lVar8 + 0x57e58);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                lVar8 = *(long *)PTR_DAT_04bc0428;
                uVar4 = FUN_0277d6c4(puVar12);
                uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
                if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
                   (((puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
                     puVar6 != (uint *)0x0 && (uVar4 = *puVar6, uVar4 != 0)) &&
                    (puVar6 != (uint *)(ulong)uVar4)))) {
                  puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
                  if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) &&
                     ((ulong)(ushort)puVar7[2] != 0)) {
                    lVar8 = 0xc;
                    if (*(char *)((long)puVar7 + 10) != '\0') {
                      lVar8 = 0x1c;
                    }
                    lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
                    if (lVar8 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar4 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar4);
                      }
                      if (*puVar7 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2) == 0x14
                         )) {
                        lVar8 = (**(code **)(*param_2 + 0x18))();
                        uVar4 = FUN_0277d6c4(puVar12);
                        if ((uVar4 >> 3 & 0x1fff) < 0x753) {
                          lVar11 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
                          *(uint *)(lVar8 + lVar11) =
                               *(uint *)(lVar8 + lVar11) &
                               (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
                        }
                        lVar8 = (uVar13 >> 5) * 4;
                        *(uint *)(param_3 + lVar8) =
                             *(uint *)(param_3 + lVar8) &
                             (1 << (ulong)((uint)uVar13 & 0x1f) ^ 0xffffffffU);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar4 = (uint)uVar13 + 1;
        uVar13 = (ulong)uVar4;
        iVar9 = iVar9 + 1;
      } while (uVar4 != 0x18);
    }
    if (param_3 == 0) {
      iVar9 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      do {
        puVar12 = (undefined4 *)(param_1 + 0x112ec + (long)iVar9 * 0x4c);
        lVar11 = *(long *)puVar3;
        uVar4 = FUN_0277d6c4(puVar12);
        lVar8 = *(long *)puVar3;
        if (lVar8 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            local_70 = *puVar12;
            uStack_6c = puVar12[1];
            local_68 = 0;
            local_78 = puVar1;
            uVar4 = FUN_0277d6c4(&local_70);
            if (*(long *)puVar3 != 0) {
              lVar8 = *(long *)(lVar8 + 0x57e58);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                lVar8 = *(long *)PTR_DAT_04bc0428;
                uVar4 = FUN_0277d6c4(puVar12);
                uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
                if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
                   (((puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
                     puVar6 != (uint *)0x0 && (uVar4 = *puVar6, uVar4 != 0)) &&
                    (puVar6 != (uint *)(ulong)uVar4)))) {
                  puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
                  if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) &&
                     ((ulong)(ushort)puVar7[2] != 0)) {
                    lVar8 = 0xc;
                    if (*(char *)((long)puVar7 + 10) != '\0') {
                      lVar8 = 0x1c;
                    }
                    lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
                    if (lVar8 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar4 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar4);
                      }
                      if (*puVar7 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2) == 0x14
                         )) {
                        lVar8 = (**(code **)(*param_2 + 0x18))();
                        uVar4 = FUN_0277d6c4(puVar12);
                        if ((uVar4 >> 3 & 0x1fff) < 0x753) {
                          lVar11 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
                          *(uint *)(lVar8 + lVar11) =
                               *(uint *)(lVar8 + lVar11) &
                               (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0x40);
    }
    else {
      iVar9 = 0;
      uVar4 = 0x18;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      do {
        puVar12 = (undefined4 *)(param_1 + 0x112ec + (long)iVar9 * 0x4c);
        lVar11 = *(long *)puVar3;
        uVar5 = FUN_0277d6c4(puVar12);
        lVar8 = *(long *)puVar3;
        if (lVar8 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            local_70 = *puVar12;
            uStack_6c = puVar12[1];
            local_68 = 0;
            local_78 = puVar1;
            uVar5 = FUN_0277d6c4(&local_70);
            if (*(long *)puVar3 != 0) {
              lVar8 = *(long *)(lVar8 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                lVar8 = *(long *)PTR_DAT_04bc0428;
                uVar5 = FUN_0277d6c4(puVar12);
                uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
                if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
                   (((puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8),
                     puVar6 != (uint *)0x0 && (uVar5 = *puVar6, uVar5 != 0)) &&
                    (puVar6 != (uint *)(ulong)uVar5)))) {
                  puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
                  if (((*puVar7 != 0) && (uVar5 = puVar7[1], uVar5 != 0)) &&
                     ((ulong)(ushort)puVar7[2] != 0)) {
                    lVar8 = 0xc;
                    if (*(char *)((long)puVar7 + 10) != '\0') {
                      lVar8 = 0x1c;
                    }
                    lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
                    if (lVar8 != 0) {
                      uVar2 = 0;
                      if ((ulong)uVar5 != 0) {
                        uVar2 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar5);
                      }
                      if (*puVar7 <= uVar2) {
                        uVar2 = 0xffffffff;
                      }
                      if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0x14
                         )) {
                        lVar8 = (**(code **)(*param_2 + 0x18))();
                        uVar5 = FUN_0277d6c4(puVar12);
                        if ((uVar5 >> 3 & 0x1fff) < 0x753) {
                          lVar11 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
                          *(uint *)(lVar8 + lVar11) =
                               *(uint *)(lVar8 + lVar11) &
                               (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
                        }
                        if (uVar4 < 0x38) {
                          lVar8 = (ulong)(uVar4 >> 5) * 4;
                          *(uint *)(param_3 + lVar8) =
                               *(uint *)(param_3 + lVar8) &
                               (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar4 = uVar4 + 1;
        iVar9 = iVar9 + 1;
      } while (uVar4 != 0x58);
    }
    FUN_026b1730(&local_78,param_1);
    lVar8 = (**(code **)(*param_2 + 0x18))();
    uVar4 = FUN_0277d6c4(&local_78);
    if ((uVar4 >> 3 & 0x1fff) < 0x753) {
      lVar11 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
      *(uint *)(lVar8 + lVar11) =
           *(uint *)(lVar8 + lVar11) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
    }
  }
  return;
}

