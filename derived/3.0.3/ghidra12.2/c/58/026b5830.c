
void FUN_026b5830(long param_1,long *param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint local_9c;
  short local_88;
  undefined2 local_86;
  undefined4 local_84;
  uint *local_80;
  short local_74;
  undefined2 local_72;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  local_6c = 0;
  uVar6 = FUN_02b67a30(&local_6c,param_3);
  uVar5 = local_6c;
  if (((uVar6 & 1) != 0) && (lVar7 = *(long *)PTR_DAT_04bb46b0, lVar7 != 0)) {
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar7 == 0) goto LAB_026b5efc;
      lVar7 = lVar7 + 0x70;
    }
    else if (((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) ||
            (lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar7 == 0)) goto LAB_026b5efc;
    if (uVar5 < 10) {
      lVar3 = lVar7 + 0x1962d8 + (ulong)uVar5 * 0x10d8;
      if (9 < uVar5) {
        lVar3 = lVar7 + 0x1962d8;
      }
      if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar8 == (undefined8 *)0x0)) {
        local_9c = 0;
      }
      else {
        local_9c = (**(code **)*puVar8)();
      }
      puVar4 = PTR_DAT_04bb43c0;
      if (param_4 == 0) {
        iVar11 = 0;
        do {
          FUN_027cd4e8(&local_74,*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8),
                       param_1 + 0x10d6c + (long)iVar11 * 0x2c);
          if (local_74 != -2) {
            local_88 = local_74;
            local_80 = (uint *)0x0;
            local_86 = local_72;
            lVar7 = *(long *)puVar4;
            local_84 = local_70;
            uVar5 = FUN_0277d6c4(&local_88);
            if (*(long *)puVar4 == 0) {
LAB_026b5e50:
              local_68 = 0xbc;
            }
            else {
              lVar7 = *(long *)(lVar7 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
                 (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
              goto LAB_026b5e50;
              lVar7 = *(long *)PTR_DAT_04bc0428;
              uVar5 = FUN_0277d6c4(&local_74);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
                 (puVar9 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
                 puVar9 == (uint *)0x0)) goto LAB_026b5e50;
              local_68 = 0;
              local_64 = 0x74;
              uVar5 = *puVar9;
              if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
                puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
                local_68 = 0;
                if (*puVar10 != 0) {
                  uVar5 = puVar10[1];
                  if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                    lVar7 = 0xc;
                    if (*(char *)((long)puVar10 + 10) != '\0') {
                      lVar7 = 0x1c;
                    }
                    lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
                    if (lVar7 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar5 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar5);
                      }
                      if (*puVar10 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_68 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
                         , local_68 < 0xbd)) goto LAB_026b5d9c;
                    }
                  }
                  local_68 = 0;
                }
              }
LAB_026b5d9c:
              local_80 = puVar9;
              if (local_68 == 0x74) goto LAB_026b5c40;
              local_68 = 0;
              uVar5 = *puVar9;
              if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
                puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
                local_68 = 0;
                if (*puVar10 != 0) {
                  uVar5 = puVar10[1];
                  if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                    lVar7 = 0xc;
                    if (*(char *)((long)puVar10 + 10) != '\0') {
                      lVar7 = 0x1c;
                    }
                    lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
                    if (lVar7 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar5 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar5);
                      }
                      if (*puVar10 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_68 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
                         , local_68 < 0xbd)) goto LAB_026b5e78;
                    }
                  }
                  local_68 = 0;
                }
              }
            }
LAB_026b5e78:
            local_64 = 0x75;
            if (local_68 != 0x75) {
              lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
              uVar5 = FUN_0277d6c4(&local_74);
              if ((uVar5 >> 3 & 0x1fff) < 0x753) {
                lVar2 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
                *(uint *)(lVar7 + lVar2) =
                     *(uint *)(lVar7 + lVar2) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
              }
            }
          }
LAB_026b5c40:
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0x20);
      }
      else {
        iVar11 = 0;
        uVar6 = 0x18;
        do {
          FUN_027cd4e8(&local_74,*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8),
                       param_1 + 0x10d6c + (long)iVar11 * 0x2c);
          if (local_74 != -2) {
            local_88 = local_74;
            local_80 = (uint *)0x0;
            local_86 = local_72;
            lVar7 = *(long *)puVar4;
            local_84 = local_70;
            uVar5 = FUN_0277d6c4(&local_88);
            if (*(long *)puVar4 == 0) {
LAB_026b5b90:
              local_68 = 0xbc;
            }
            else {
              lVar7 = *(long *)(lVar7 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
                 (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
              goto LAB_026b5b90;
              lVar7 = *(long *)PTR_DAT_04bc0428;
              uVar5 = FUN_0277d6c4(&local_74);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
                 (puVar9 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
                 puVar9 == (uint *)0x0)) goto LAB_026b5b90;
              local_68 = 0;
              local_64 = 0x74;
              uVar5 = *puVar9;
              if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
                puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
                local_68 = 0;
                if (*puVar10 != 0) {
                  uVar5 = puVar10[1];
                  if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                    lVar7 = 0xc;
                    if (*(char *)((long)puVar10 + 10) != '\0') {
                      lVar7 = 0x1c;
                    }
                    lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
                    if (lVar7 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar5 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar5);
                      }
                      if (*puVar10 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_68 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
                         , local_68 < 0xbd)) goto LAB_026b5adc;
                    }
                  }
                  local_68 = 0;
                }
              }
LAB_026b5adc:
              local_80 = puVar9;
              if (local_68 == 0x74) goto LAB_026b5974;
              local_68 = 0;
              uVar5 = *puVar9;
              if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
                puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
                local_68 = 0;
                if (*puVar10 != 0) {
                  uVar5 = puVar10[1];
                  if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                    lVar7 = 0xc;
                    if (*(char *)((long)puVar10 + 10) != '\0') {
                      lVar7 = 0x1c;
                    }
                    lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
                    if (lVar7 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar5 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar5);
                      }
                      if (*puVar10 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_68 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
                         , local_68 < 0xbd)) goto LAB_026b5bb8;
                    }
                  }
                  local_68 = 0;
                }
              }
            }
LAB_026b5bb8:
            local_64 = 0x75;
            if (local_68 != 0x75) {
              lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
              uVar5 = FUN_0277d6c4(&local_74);
              if ((uVar5 >> 3 & 0x1fff) < 0x753) {
                lVar2 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
                *(uint *)(lVar7 + lVar2) =
                     *(uint *)(lVar7 + lVar2) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
              }
              lVar7 = (uVar6 >> 5) * 4;
              *(uint *)(param_4 + lVar7) =
                   *(uint *)(param_4 + lVar7) & (1 << (ulong)((uint)uVar6 & 0x1f) ^ 0xffffffffU);
            }
          }
LAB_026b5974:
          uVar5 = (uint)uVar6 + 1;
          uVar6 = (ulong)uVar5;
          iVar11 = iVar11 + 1;
        } while (uVar5 != 0x38);
      }
      if ((((local_9c & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
        (**(code **)*puVar8)();
      }
    }
  }
LAB_026b5efc:
  lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = FUN_0277d6c4(param_1 + 0x125ec);
  if ((uVar5 >> 3 & 0x1fff) < 0x753) {
    lVar3 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
    *(uint *)(lVar7 + lVar3) = *(uint *)(lVar7 + lVar3) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU)
    ;
  }
  lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = FUN_0277d6c4(param_1 + 0x12618);
  if ((uVar5 >> 3 & 0x1fff) < 0x753) {
    lVar3 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
    *(uint *)(lVar7 + lVar3) = *(uint *)(lVar7 + lVar3) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU)
    ;
  }
  lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = FUN_0277d6c4(param_1 + 0x12644);
  if ((uVar5 >> 3 & 0x1fff) < 0x753) {
    lVar3 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
    *(uint *)(lVar7 + lVar3) = *(uint *)(lVar7 + lVar3) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU)
    ;
  }
  return;
}

