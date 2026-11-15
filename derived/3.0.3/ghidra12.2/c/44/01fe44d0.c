
undefined8
FUN_01fe44d0(undefined8 *param_1,undefined4 *param_2,short *param_3,long param_4,undefined4 *param_5
            ,long param_6,uint param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  ulong uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  char cVar16;
  long lVar17;
  uint *puVar18;
  int *piVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  uint local_110 [2];
  undefined8 *local_108 [4];
  undefined *local_e8;
  short local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  uint *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  int local_b0;
  int local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  uint local_6c;
  
  puVar8 = PTR_DAT_04bb43c0;
  local_78 = 0;
  local_c0 = param_6 + 0x18;
  local_b8 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0;
  local_98 = 0;
  lVar22 = param_1[1];
  local_a8 = PTR_DAT_04bbc1a0 + 0x10;
  lVar17 = *(long *)PTR_DAT_04bb4970;
  local_c8 = param_6 + 8;
  iVar5 = *(int *)(param_6 + 0x10);
  local_ac = *(int *)(param_6 + 0x14);
  iVar1 = *(int *)(param_6 + 0x24) + 1;
  if (iVar1 != local_ac) {
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    puVar3 = (undefined8 *)(PTR_DAT_04bbbce0 + 0x10);
    local_b0 = iVar5;
    puStack_a0 = local_b8;
    puStack_90 = local_b8;
    puStack_80 = local_b8;
    do {
      local_d0 = 0;
      uStack_cc = 1;
      psVar12 = (short *)FUN_01a5190c(*param_1,1,&local_b8,&puStack_80);
      uVar13 = FUN_01fb15a0(lVar22,psVar12);
      if (((uVar13 & 1) == 0) && (uVar13 = FUN_0277e294(psVar12), (uVar13 & 1) != 0)) {
        lVar20 = *(long *)puVar8;
        local_e8 = PTR_DAT_04bc0510 + 0x10;
        local_e0 = *psVar12;
        local_de = (undefined1)psVar12[1];
        local_dd = *(undefined1 *)((long)psVar12 + 3);
        local_dc = *(undefined4 *)(psVar12 + 2);
        local_d8 = (uint *)0x0;
        uVar10 = FUN_0277d6c4(&local_e0);
        if (*(long *)puVar8 != 0) {
          lVar20 = *(long *)(lVar20 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar20 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(psVar12);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
               (puVar14 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8),
               puVar14 != (uint *)0x0)) {
              local_d8 = puVar14;
            }
          }
        }
        FUN_01afb480(&local_e8,&local_a8);
        local_98 = CONCAT44(local_98._4_4_ + local_78._4_4_,(int)local_98 + (int)local_78);
        local_88 = CONCAT44(local_88._4_4_ + local_78._4_4_,(int)local_88 + (int)local_78);
        if (local_d8 == (uint *)0x0) {
LAB_01fe4778:
          local_110[0] = 0;
        }
        else {
          uVar10 = *local_d8;
          local_110[0] = 0;
          if ((uVar10 != 0) && (local_d8 != (uint *)(ulong)uVar10)) {
            puVar14 = (uint *)((long)local_d8 - (long)(ulong)uVar10);
            local_110[0] = 0;
            if (*puVar14 != 0) {
              uVar10 = puVar14[1];
              if ((uVar10 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                lVar20 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar20 = 0x1c;
                }
                lVar20 = (long)puVar14 + lVar20 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar20 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar4 = (uint)((ulong)((long)local_d8 - lVar20) / (ulong)uVar10);
                  }
                  if (*puVar14 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < *(uint *)PTR_DAT_04bc0110) &&
                     (local_110[0] = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar4 * 2)
                     , local_110[0] < 9)) goto LAB_01fe477c;
                }
              }
              goto LAB_01fe4778;
            }
          }
        }
LAB_01fe477c:
        uVar13 = FUN_01fb0064(lVar22,*(long *)(*(long *)(lVar22 + 8) + 0x68) + 0x278,psVar12,
                              &local_a8,local_110);
        if (((uVar13 & 1) != 0) &&
           (((param_7 & 1) != 0 || (iVar11 = FUN_01b10e00(&local_e8), iVar11 != 6)))) {
          pcVar21 = (char *)param_1[2];
          local_110[0] = local_110[0] & 0xffffff00;
          local_108[0] = (undefined8 *)(PTR_DAT_04bbbce0 + 0x10);
          if (*pcVar21 == '\0') {
LAB_01fe49b0:
            iVar11 = *(int *)(lVar22 + 0x123bc);
            if (iVar11 == 0x10) {
LAB_01fe49d0:
              uVar13 = FUN_01fd595c(&local_a8,psVar12);
joined_r0x01fe49ec:
              if ((uVar13 & 1) == 0) goto LAB_01fe49f0;
            }
            else {
              if (iVar11 == 0x2b) {
                uVar13 = FUN_01fd6240(psVar12);
                goto joined_r0x01fe49ec;
              }
              if (iVar11 == 0x16) goto LAB_01fe49d0;
            }
            puVar15 = &uStack_cc;
            goto LAB_01fe4e98;
          }
          if (((*(long *)(lVar17 + 0xb0) != 0) && (*(long *)(*(long *)(lVar17 + 0xb0) + 8) != 0)) &&
             (*psVar12 != -2)) {
            uVar10 = FUN_0277d6c4(psVar12);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if (((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
                (puVar14 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
                puVar14 != (uint *)0x0)) && (local_6c = *(uint *)(pcVar21 + 4), *puVar14 != 0)) {
              cVar16 = *PTR_DAT_04bb7e98;
              do {
                if (cVar16 == '\0') {
                  cVar16 = '\x01';
                  *PTR_DAT_04bb7e98 = 1;
                  puVar9 = PTR_DAT_04bb7ea0;
                  *(undefined8 *)PTR_DAT_04bb7ea0 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0xa0) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0xa8) = 0xffffffffffffffff;
                  uVar10 = *puVar14;
                }
                else {
                  uVar10 = *(uint *)(PTR_DAT_04bb7ea0 + 0xa8);
                  if (-1 < (int)uVar10) {
                    if ((ulong)uVar10 + (long)puVar14 != 0) {
                      uVar4 = local_6c + 7;
                      if (-1 < (int)local_6c) {
                        uVar4 = local_6c;
                      }
                      if (((*(byte *)((ulong)uVar10 + (long)puVar14 + (ulong)(uint)((int)uVar4 >> 3)
                                     ) >> (ulong)(local_6c & 7) & 1) != 0) &&
                         ((((char)local_110[0] == '\0' ||
                           (uVar13 = (*(code *)local_108[0][1])(local_108), (uVar13 & 1) == 0)) ||
                          (uVar13 = (*(code *)*local_108[0])(local_108,psVar12), (uVar13 & 1) != 0))
                         )) goto LAB_01fe49b0;
                    }
                    break;
                  }
                  if (uVar10 != 0xffffffff) break;
                  uVar10 = *puVar14;
                }
                if ((uVar10 == 0) || (puVar18 = (uint *)(ulong)uVar10, puVar14 == puVar18)) break;
                lVar20 = 0xc;
                if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
                  lVar20 = 0x1c;
                }
                lVar20 = (long)puVar14 + (lVar20 - (long)puVar18);
                if (lVar20 == 0) break;
                uVar13 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
                *(undefined4 *)(PTR_DAT_04bb7ea0 + 0xa8) = 0xfffffffe;
                if (uVar13 == 0) break;
                piVar19 = (int *)(lVar20 + 4);
                while (piVar19[-1] != 0x3b8583f3) {
                  piVar19 = piVar19 + 2;
                  uVar13 = uVar13 - 1;
                  if (uVar13 == 0) goto LAB_01fe49f0;
                }
                iVar11 = 0;
                if (*piVar19 != -1) {
                  iVar11 = *piVar19;
                }
                *(int *)(PTR_DAT_04bb7ea0 + 0xa8) = iVar11;
                if (*puVar14 == 0) break;
              } while( true );
            }
          }
        }
      }
LAB_01fe49f0:
      psVar12 = (short *)FUN_01a5190c(*param_1,0,&local_b8,&puStack_80);
      uVar13 = FUN_01fb15a0(lVar22,psVar12);
      if (((uVar13 & 1) == 0) && (uVar13 = FUN_0277e294(psVar12), (uVar13 & 1) != 0)) {
        lVar20 = *(long *)puVar8;
        local_e0 = *psVar12;
        local_de = (undefined1)psVar12[1];
        local_dd = *(undefined1 *)((long)psVar12 + 3);
        local_dc = *(undefined4 *)(psVar12 + 2);
        local_d8 = (uint *)0x0;
        local_e8 = puVar2;
        uVar10 = FUN_0277d6c4(&local_e0);
        if (*(long *)puVar8 != 0) {
          lVar20 = *(long *)(lVar20 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar20 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(psVar12);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
               (puVar14 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8),
               puVar14 != (uint *)0x0)) {
              local_d8 = puVar14;
            }
          }
        }
        FUN_01afb480(&local_e8,&local_a8);
        local_98 = CONCAT44(local_98._4_4_ + local_78._4_4_,(int)local_98 + (int)local_78);
        local_88 = CONCAT44(local_88._4_4_ + local_78._4_4_,(int)local_88 + (int)local_78);
        uVar13 = FUN_01fab6d0(lVar22,psVar12,&local_a8);
        if ((uVar13 & 1) == 0) {
          if (local_d8 == (uint *)0x0) {
LAB_01fe4ba4:
            local_110[0] = 0;
          }
          else {
            uVar10 = *local_d8;
            local_110[0] = 0;
            if ((uVar10 != 0) && (local_d8 != (uint *)(ulong)uVar10)) {
              puVar14 = (uint *)((long)local_d8 - (long)(ulong)uVar10);
              local_110[0] = 0;
              if (*puVar14 != 0) {
                uVar10 = puVar14[1];
                if ((uVar10 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                  lVar20 = 0xc;
                  if (*(char *)((long)puVar14 + 10) != '\0') {
                    lVar20 = 0x1c;
                  }
                  lVar20 = (long)puVar14 + lVar20 + (ulong)(ushort)puVar14[2] * 8;
                  if (lVar20 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar10 != 0) {
                      uVar4 = (uint)((ulong)((long)local_d8 - lVar20) / (ulong)uVar10);
                    }
                    if (*puVar14 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < *(uint *)PTR_DAT_04bc0110) &&
                       (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar4 * 2),
                       local_110[0] = (uint)uVar7, uVar7 < 9)) goto LAB_01fe4ba8;
                  }
                }
                goto LAB_01fe4ba4;
              }
            }
          }
LAB_01fe4ba8:
          uVar13 = FUN_01fb0064(lVar22,*(long *)(*(long *)(lVar22 + 8) + 0x68) + 0x278,psVar12,
                                &local_a8,local_110);
          if (((uVar13 & 1) != 0) &&
             (((param_7 & 1) != 0 || (iVar11 = FUN_01b10e00(&local_e8), iVar11 != 6)))) {
            local_110[0] = local_110[0] & 0xffffff00;
            pcVar21 = (char *)param_1[2];
            local_108[0] = puVar3;
            if (*pcVar21 == '\0') {
LAB_01fe4ddc:
              iVar11 = *(int *)(lVar22 + 0x123bc);
              if ((iVar11 == 0x10) || (iVar11 == 0x16)) {
                uVar13 = FUN_01fd595c(&local_a8,psVar12);
joined_r0x01fe4e18:
                if ((uVar13 & 1) == 0) goto LAB_01fe4e20;
              }
              else if (iVar11 == 0x2b) {
                uVar13 = FUN_01fd6240(psVar12);
                goto joined_r0x01fe4e18;
              }
              puVar15 = &local_d0;
LAB_01fe4e98:
              *param_2 = 1;
              uVar6 = *puVar15;
              *param_3 = *psVar12;
              *(char *)(param_3 + 1) = (char)psVar12[1];
              *(undefined1 *)((long)param_3 + 3) = *(undefined1 *)((long)psVar12 + 3);
              *(undefined4 *)(param_3 + 2) = *(undefined4 *)(psVar12 + 2);
              *(int *)(param_4 + 0x20) = (int)local_88;
              *(int *)(param_4 + 0x24) = local_88._4_4_;
              *(int *)(param_4 + 0x10) = (int)local_98;
              *(int *)(param_4 + 0x14) = local_98._4_4_;
              *param_5 = uVar6;
              return 1;
            }
            if (((*(long *)(lVar17 + 0xb0) != 0) && (*(long *)(*(long *)(lVar17 + 0xb0) + 8) != 0))
               && (*psVar12 != -2)) {
              uVar10 = FUN_0277d6c4(psVar12);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if (((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
                  (puVar14 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
                  puVar14 != (uint *)0x0)) && (local_6c = *(uint *)(pcVar21 + 4), *puVar14 != 0)) {
                cVar16 = *PTR_DAT_04bb7e98;
                do {
                  if (cVar16 == '\0') {
                    cVar16 = '\x01';
                    *PTR_DAT_04bb7e98 = 1;
                    puVar9 = PTR_DAT_04bb7ea0;
                    *(undefined8 *)PTR_DAT_04bb7ea0 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0xa0) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0xa8) = 0xffffffffffffffff;
                  }
                  else {
                    uVar10 = *(uint *)(PTR_DAT_04bb7ea0 + 0xa8);
                    if (-1 < (int)uVar10) {
                      if ((ulong)uVar10 + (long)puVar14 != 0) {
                        uVar4 = local_6c + 7;
                        if (-1 < (int)local_6c) {
                          uVar4 = local_6c;
                        }
                        if (((*(byte *)((ulong)uVar10 + (long)puVar14 +
                                       (ulong)(uint)((int)uVar4 >> 3)) >> (ulong)(local_6c & 7) & 1)
                             != 0) &&
                           ((((char)local_110[0] == '\0' ||
                             (uVar13 = (*(code *)local_108[0][1])(local_108), (uVar13 & 1) == 0)) ||
                            (uVar13 = (*(code *)*local_108[0])(local_108,psVar12), (uVar13 & 1) != 0
                            )))) goto LAB_01fe4ddc;
                      }
                      break;
                    }
                    if (uVar10 != 0xffffffff) break;
                  }
                  puVar18 = (uint *)(ulong)*puVar14;
                  if ((*puVar14 == 0) || (puVar14 == puVar18)) break;
                  lVar20 = 0xc;
                  if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
                    lVar20 = 0x1c;
                  }
                  lVar20 = (long)puVar14 + (lVar20 - (long)puVar18);
                  if (lVar20 == 0) break;
                  uVar13 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
                  *(undefined4 *)(PTR_DAT_04bb7ea0 + 0xa8) = 0xfffffffe;
                  if (uVar13 == 0) break;
                  piVar19 = (int *)(lVar20 + 4);
                  while (piVar19[-1] != 0x3b8583f3) {
                    piVar19 = piVar19 + 2;
                    uVar13 = uVar13 - 1;
                    if (uVar13 == 0) goto LAB_01fe4e20;
                  }
                  iVar11 = 0;
                  if (*piVar19 != -1) {
                    iVar11 = *piVar19;
                  }
                  *(int *)(PTR_DAT_04bb7ea0 + 0xa8) = iVar11;
                  if (*puVar14 == 0) break;
                } while( true );
              }
            }
          }
        }
      }
LAB_01fe4e20:
      if (local_b0 < *(int *)(local_c0 + 8)) {
        local_b0 = local_b0 + 1;
      }
      else {
        local_ac = local_ac + 1;
        local_b0 = *(int *)(local_c8 + 8);
      }
    } while ((iVar5 != local_b0) || (iVar1 != local_ac));
  }
  return 0;
}

