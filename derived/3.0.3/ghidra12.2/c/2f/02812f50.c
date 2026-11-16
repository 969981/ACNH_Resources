
void FUN_02812f50(long param_1,long param_2,undefined8 param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  uint local_98;
  undefined4 uStack_94;
  uint *local_90;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined *local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_04bb43c0;
  puVar7 = PTR_DAT_04bb37e0;
  if ((param_2 != 0) && (uVar6 = *(uint *)(param_2 + 0x78), uVar6 != 0)) {
    puVar1 = (ushort *)(param_1 + 0x3016c);
    puVar2 = (ushort *)(param_1 + 0x2ffc0);
    puVar3 = (ushort *)(param_1 + 0x30096);
    uVar18 = 0;
    do {
      if (((int)uVar18 < 0) || (*(int *)(param_2 + 0x78) <= (int)uVar18)) {
        local_84 = *(uint *)puVar7;
        local_80 = *(undefined4 *)(puVar7 + 4);
      }
      else {
        if (uVar18 < *(uint *)(param_2 + 0x58)) {
          lVar11 = *(long *)(*(long *)(param_2 + 0x60) + uVar18 * 8);
        }
        else {
          lVar11 = 0;
        }
        puVar12 = (ushort *)(**(code **)(*(long *)(lVar11 + 0x30) + 0xf0))();
        local_80 = 0;
        local_84 = (uint)*puVar12;
        FUN_0277d4ac(&local_84);
      }
      uVar13 = FUN_0264a1e0(param_3,&local_84);
      if ((uVar13 & 1) != 0) {
        lVar19 = *(long *)puVar8;
        uVar10 = FUN_0277d6c4(&local_84);
        lVar11 = *(long *)puVar8;
        if (lVar11 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            local_90 = (uint *)0x0;
            local_98 = local_84;
            uStack_94 = local_80;
            uVar10 = FUN_0277d6c4(&local_98);
            if (*(long *)puVar8 == 0) {
LAB_028131d8:
              uVar9 = 0xbc;
            }
            else {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((*(uint *)(lVar11 + 0x1d8) <= uVar10) ||
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
              goto LAB_028131d8;
              lVar11 = *(long *)PTR_DAT_04bc0428;
              uVar10 = FUN_0277d6c4(&local_84);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((*(uint *)(lVar11 + 0x1d8) <= uVar10) ||
                 (puVar16 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8),
                 puVar16 == (uint *)0x0)) goto LAB_028131d8;
              uVar10 = *puVar16;
              uVar9 = 0;
              local_90 = puVar16;
              if ((uVar10 != 0) && (puVar16 != (uint *)(ulong)uVar10)) {
                puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar10);
                uVar9 = 0;
                if (*puVar17 != 0) {
                  uVar10 = puVar17[1];
                  if ((uVar10 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                    lVar11 = 0xc;
                    if (*(char *)((long)puVar17 + 10) != '\0') {
                      lVar11 = 0x1c;
                    }
                    lVar11 = (long)puVar17 + lVar11 + (ulong)(ushort)puVar17[2] * 8;
                    if (lVar11 != 0) {
                      uVar5 = 0;
                      if ((ulong)uVar10 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar16 - lVar11) / (ulong)uVar10);
                      }
                      if (*puVar17 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar9 = *(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                         uVar9 < 0xbd)) goto LAB_028131dc;
                    }
                  }
                  uVar9 = 0;
                }
              }
            }
LAB_028131dc:
            if (uVar9 == 0x6b) {
              if (*(char *)(param_1 + 0x301ec) != '\0') {
                uVar13 = 0;
                puVar12 = puVar1;
                do {
                  puVar4 = puVar12;
                  if (0x3b < uVar13) {
                    puVar4 = puVar1;
                  }
                  local_78 = (undefined *)(ulong)*puVar4;
                  FUN_0277d4ac(&local_78);
                  uVar14 = FUN_0277d7b4(&local_84,&local_78);
                  if ((uVar14 & 1) != 0) goto LAB_02813000;
                  uVar13 = uVar13 + 1;
                  puVar12 = puVar12 + 1;
                } while (uVar13 < *(byte *)(param_1 + 0x301ec));
              }
            }
            else if (uVar9 == 0x6a) {
              if (*(char *)(param_1 + 0x30095) != '\0') {
                uVar13 = 0;
                puVar12 = puVar2;
                do {
                  puVar4 = puVar12;
                  if (99 < uVar13) {
                    puVar4 = puVar2;
                  }
                  local_78 = (undefined *)(ulong)*puVar4;
                  FUN_0277d4ac(&local_78);
                  uVar14 = FUN_0277d7b4(&local_84,&local_78);
                  if ((uVar14 & 1) != 0) goto LAB_02813000;
                  uVar13 = uVar13 + 1;
                  puVar12 = puVar12 + 1;
                } while (uVar13 < *(byte *)(param_1 + 0x30095));
              }
            }
            else if ((uVar9 == 0x69) && (*(char *)(param_1 + 0x3016b) != '\0')) {
              uVar13 = 0;
              puVar12 = puVar3;
              do {
                puVar4 = puVar12;
                if (99 < uVar13) {
                  puVar4 = puVar3;
                }
                local_78 = (undefined *)(ulong)*puVar4;
                FUN_0277d4ac(&local_78);
                uVar14 = FUN_0277d7b4(&local_84,&local_78);
                if ((uVar14 & 1) != 0) goto LAB_02813000;
                uVar13 = uVar13 + 1;
                puVar12 = puVar12 + 1;
              } while (uVar13 < *(byte *)(param_1 + 0x3016b));
            }
            lVar19 = *(long *)puVar8;
            uVar10 = FUN_0277d6c4(&local_84);
            lVar11 = *(long *)puVar8;
            if (lVar11 != 0) {
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                local_68 = 0;
                local_78 = PTR_DAT_04bc0510 + 0x10;
                local_70 = local_84;
                uStack_6c = local_80;
                uVar10 = FUN_0277d6c4(&local_70);
                if (*(long *)puVar8 == 0) {
LAB_0281347c:
                  local_7c = 0xbc;
                }
                else {
                  lVar11 = *(long *)(lVar11 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                  if ((*(uint *)(lVar11 + 0x1d8) <= uVar10) ||
                     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                  goto LAB_0281347c;
                  lVar11 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(&local_84);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                  if ((*(uint *)(lVar11 + 0x1d8) <= uVar10) ||
                     (puVar16 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8),
                     puVar16 == (uint *)0x0)) goto LAB_0281347c;
                  uVar10 = *puVar16;
                  local_7c = 0;
                  if ((uVar10 != 0) && (puVar16 != (uint *)(ulong)uVar10)) {
                    puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar10);
                    local_7c = 0;
                    if (*puVar17 != 0) {
                      uVar10 = puVar17[1];
                      if ((uVar10 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                        lVar11 = 0xc;
                        if (*(char *)((long)puVar17 + 10) != '\0') {
                          lVar11 = 0x1c;
                        }
                        lVar11 = (long)puVar17 + lVar11 + (ulong)(ushort)puVar17[2] * 8;
                        if (lVar11 != 0) {
                          uVar5 = 0;
                          if ((ulong)uVar10 != 0) {
                            uVar5 = (uint)((ulong)((long)puVar16 - lVar11) / (ulong)uVar10);
                          }
                          if (*puVar17 <= uVar5) {
                            uVar5 = 0xffffffff;
                          }
                          if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_7c = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar5 * 2), local_7c < 0xbd))
                          goto LAB_02813480;
                        }
                      }
                      local_7c = 0;
                    }
                  }
                }
LAB_02813480:
                if (local_7c == 0x69) {
                  bVar15 = *(byte *)(param_1 + 0x3016b);
                  if ((ulong)bVar15 < 100) {
                    uVar9 = FUN_0277d6c4(&local_84);
                    puVar3[bVar15] = uVar9;
                    bVar15 = *(byte *)(param_1 + 0x3016b);
                    if ((ulong)bVar15 < 100) {
                      *(byte *)(param_1 + 0x3015e + (ulong)(bVar15 >> 3)) =
                           *(byte *)(param_1 + 0x3015e + (ulong)(bVar15 >> 3)) |
                           (byte)(1 << ((ulong)bVar15 & 7));
                      bVar15 = *(byte *)(param_1 + 0x3016b);
                    }
                    *(byte *)(param_1 + 0x3016b) = bVar15 + 1;
                  }
                }
                else if (local_7c == 0x6b) {
                  bVar15 = *(byte *)(param_1 + 0x301ec);
                  if ((ulong)bVar15 < 0x3c) {
                    uVar9 = FUN_0277d6c4(&local_84);
                    puVar1[bVar15] = uVar9;
                    bVar15 = *(byte *)(param_1 + 0x301ec);
                    if ((ulong)bVar15 < 0x3c) {
                      *(byte *)(param_1 + 0x301e4 + (ulong)(bVar15 >> 3)) =
                           *(byte *)(param_1 + 0x301e4 + (ulong)(bVar15 >> 3)) |
                           (byte)(1 << ((ulong)bVar15 & 7));
                      bVar15 = *(byte *)(param_1 + 0x301ec);
                    }
                    *(byte *)(param_1 + 0x301ec) = bVar15 + 1;
                  }
                }
                else if ((local_7c == 0x6a) &&
                        (bVar15 = *(byte *)(param_1 + 0x30095), (ulong)bVar15 < 100)) {
                  uVar9 = FUN_0277d6c4(&local_84);
                  puVar2[bVar15] = uVar9;
                  bVar15 = *(byte *)(param_1 + 0x30095);
                  if ((ulong)bVar15 < 100) {
                    *(byte *)(param_1 + 0x30088 + (ulong)(bVar15 >> 3)) =
                         *(byte *)(param_1 + 0x30088 + (ulong)(bVar15 >> 3)) |
                         (byte)(1 << ((ulong)bVar15 & 7));
                    bVar15 = *(byte *)(param_1 + 0x30095);
                  }
                  *(byte *)(param_1 + 0x30095) = bVar15 + 1;
                }
              }
            }
          }
        }
      }
LAB_02813000:
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar6);
  }
  return;
}

