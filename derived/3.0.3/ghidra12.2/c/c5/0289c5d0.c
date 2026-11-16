
void FUN_0289c5d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  ushort uVar9;
  undefined *puVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  undefined2 *puVar25;
  uint uVar26;
  int iVar27;
  undefined *local_6e8;
  int local_6e0;
  int iStack_6dc;
  undefined *local_6d8;
  uint local_6d0;
  uint local_6cc;
  uint *local_6c8;
  uint local_6c0;
  uint uStack_6bc;
  float local_6b8 [384];
  undefined *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  uint local_94;
  ulong local_90;
  ushort local_78;
  undefined1 auStack_76 [2];
  uint local_74;
  
  local_74 = 0;
  uVar17 = FUN_0291e130(local_6b8,&local_74,0);
  uVar26 = local_74;
  puVar10 = PTR_DAT_04bb43c0;
  if (((uVar17 & 1) != 0) && (local_74 != 0)) {
    iVar27 = 0;
    uVar15 = 0;
    param_1 = param_1 + 4;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bbfe68 + 0x10;
    puVar19 = (uint *)PTR_DAT_04bc00c8;
    do {
      uVar14 = 0;
      do {
        lVar23 = *(long *)puVar10;
        puVar6 = (undefined2 *)(param_1 + ((long)((ulong)uVar14 << 0x20) >> 0x1d));
        uVar12 = FUN_0277d6c4(puVar6);
        lVar24 = *(long *)puVar10;
        if (lVar24 != 0) {
          lVar23 = *(long *)(lVar23 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            uVar12 = FUN_0277d6c4(puVar6);
            lVar23 = *(long *)puVar10;
            if (lVar23 != 0) {
              lVar24 = *(long *)(lVar24 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
              if ((uVar12 < *(uint *)(lVar24 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                lVar24 = param_1 + (long)(int)uVar14 * 8;
                local_90 = 0;
                puVar25 = (undefined2 *)(lVar24 + 2);
                local_98 = CONCAT22(*puVar25,*puVar6);
                puVar21 = (uint *)(lVar24 + 4);
                local_94 = *puVar21;
                local_a0 = puVar1;
                uVar12 = FUN_0277d6c4(&local_98);
                if (*(long *)puVar10 == 0) {
LAB_0289c854:
                  uVar12 = 0xbc;
                }
                else {
                  lVar23 = *(long *)(lVar23 + 0x57e58);
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                  if ((*(uint *)(lVar23 + 0x1d8) <= uVar12) ||
                     (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) == 0))
                  goto LAB_0289c854;
                  lVar23 = *(long *)PTR_DAT_04bc0428;
                  uVar12 = FUN_0277d6c4(puVar6);
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                  if ((*(uint *)(lVar23 + 0x1d8) <= uVar12) ||
                     (puVar20 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8),
                     puVar20 == (uint *)0x0)) goto LAB_0289c854;
                  uVar13 = *puVar20;
                  uVar12 = 0;
                  if ((uVar13 != 0) && (puVar20 != (uint *)(ulong)uVar13)) {
                    puVar22 = (uint *)((long)puVar20 - (long)(ulong)uVar13);
                    uVar12 = 0;
                    if (*puVar22 != 0) {
                      uVar12 = puVar22[1];
                      if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                        lVar23 = 0xc;
                        if (*(char *)((long)puVar22 + 10) != '\0') {
                          lVar23 = 0x1c;
                        }
                        lVar23 = (long)puVar22 + lVar23 + (ulong)(ushort)puVar22[2] * 8;
                        if (lVar23 != 0) {
                          uVar13 = 0;
                          if ((ulong)uVar12 != 0) {
                            uVar13 = (uint)((ulong)((long)puVar20 - lVar23) / (ulong)uVar12);
                          }
                          if (*puVar22 <= uVar13) {
                            uVar13 = 0xffffffff;
                          }
                          if ((uVar13 < *puVar19) &&
                             (uVar12 = (uint)*(ushort *)
                                              (*(long *)(puVar19 + 2) + (long)(int)uVar13 * 2),
                             uVar12 < 0xbd)) goto LAB_0289c858;
                        }
                      }
                      uVar12 = 0;
                    }
                  }
                }
LAB_0289c858:
                local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,uVar12);
                switch(uVar12) {
                case 9:
                  if (uVar15 == 0) {
LAB_0289c8cc:
                    uVar12 = 0;
                    lVar23 = *(long *)puVar10;
                    do {
                      puVar7 = (undefined2 *)(param_1 + ((long)((ulong)uVar12 << 0x20) >> 0x1d));
                      uVar13 = FUN_0277d6c4(puVar7);
                      lVar24 = *(long *)puVar10;
                      if (lVar24 == 0) {
                        lVar24 = 0;
                      }
                      else {
                        lVar23 = *(long *)(lVar23 + 0x57e58);
                        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                        if ((uVar13 < *(uint *)(lVar23 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
                          lVar23 = param_1 + (long)(int)uVar12 * 8;
                          local_a8 = 0;
                          local_b8 = PTR_DAT_04bc0510 + 0x10;
                          local_ac = *(uint *)(lVar23 + 4);
                          local_b0 = CONCAT22(*(undefined2 *)(lVar23 + 2),*puVar7);
                          uVar13 = FUN_0277d6c4(&local_b0);
                          lVar23 = *(long *)puVar10;
                          if (lVar23 == 0) {
LAB_0289ca7c:
                            local_6c0 = 0xbc;
                          }
                          else {
                            lVar24 = *(long *)(lVar24 + 0x57e58);
                            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                            if ((*(uint *)(lVar24 + 0x1d8) <= uVar13) ||
                               (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8) == 0))
                            goto LAB_0289ca7c;
                            lVar24 = *(long *)PTR_DAT_04bc0428;
                            uVar13 = FUN_0277d6c4(puVar7);
                            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                            lVar23 = *(long *)puVar10;
                            if ((*(uint *)(lVar24 + 0x1d8) <= uVar13) ||
                               (puVar19 = *(uint **)(*(long *)(lVar24 + 0x1e0) +
                                                    (long)(int)uVar13 * 8), puVar19 == (uint *)0x0))
                            goto LAB_0289ca7c;
                            uVar13 = *puVar19;
                            local_6c0 = 0;
                            if ((uVar13 != 0) && (puVar19 != (uint *)(ulong)uVar13)) {
                              puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar13);
                              local_6c0 = 0;
                              if (*puVar20 != 0) {
                                uVar13 = puVar20[1];
                                if ((uVar13 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                                  lVar24 = 0xc;
                                  if (*(char *)((long)puVar20 + 10) != '\0') {
                                    lVar24 = 0x1c;
                                  }
                                  lVar24 = (long)puVar20 + lVar24 + (ulong)(ushort)puVar20[2] * 8;
                                  if (lVar24 != 0) {
                                    uVar8 = 0;
                                    if ((ulong)uVar13 != 0) {
                                      uVar8 = (uint)((ulong)((long)puVar19 - lVar24) / (ulong)uVar13
                                                    );
                                    }
                                    if (*puVar20 <= uVar8) {
                                      uVar8 = 0xffffffff;
                                    }
                                    if (uVar8 < *(uint *)PTR_DAT_04bc00c8) {
                                      uVar9 = *(ushort *)
                                               (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                               (long)(int)uVar8 * 2);
                                      if (uVar9 < 0xbd) {
                                        local_6c0 = 0x10;
                                        if (uVar9 != 0x11) {
                                          local_6c0 = (uint)uVar9;
                                        }
                                        goto LAB_0289ca80;
                                      }
                                    }
                                  }
                                }
                                local_6c0 = 0;
                              }
                            }
                          }
LAB_0289ca80:
                          lVar24 = lVar23;
                          if ((uint)local_6d8 == local_6c0) {
                            uVar17 = FUN_0277d7b4(puVar7,puVar6);
                            puVar19 = (uint *)PTR_DAT_04bc00c8;
                            if ((uVar17 & 1) == 0) goto switchD_0289c880_caseD_b;
                            local_98 = 0;
                            local_6cc = (int)((local_6b8[(long)iVar27 * 3 + 2] + 2.5) / 5.0) - 1;
                            local_6d0 = (int)((local_6b8[(long)iVar27 * 3] + 2.5) / 5.0) - 1;
                            lVar23 = *(long *)PTR_DAT_04bb2720;
                            local_6d8 = puVar2;
                            local_a0 = puVar3;
                            if ((lVar23 == 0) || (*(long *)(lVar23 + 0x330) == 0)) {
                              puVar18 = &DAT_055c04a0;
                            }
                            else {
                              puVar18 = (undefined8 *)
                                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                                  (*(long **)PTR_DAT_04bb2640,
                                                   *(undefined4 *)(lVar23 + 0x338));
                              iVar16 = FUN_006bd550(*puVar18,0);
                              puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
                              if (iVar16 != 0x758f7eaf) {
                                puVar18 = &DAT_055c04a0;
                              }
                            }
                            local_94 = *(uint *)(puVar18 + 7);
                            uVar11 = FUN_017baf44();
                            local_a8 = 0;
                            local_b8 = PTR_DAT_04bc0510 + 0x10;
                            lVar23 = *(long *)puVar10;
                            local_90 = CONCAT71(local_90._1_7_,uVar11) & 0xffffffffffffff01;
                            local_b0 = CONCAT22(*puVar25,*puVar6);
                            local_ac = *puVar21;
                            uVar14 = FUN_0277d6c4(&local_b0);
                            if (*(long *)puVar10 != 0) {
                              lVar23 = *(long *)(lVar23 + 0x57e58);
                              uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                              if ((uVar14 < *(uint *)(lVar23 + 0x1d8)) &&
                                 (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8) != 0)
                                 ) {
                                FUN_0277d6c4(puVar6);
                              }
                            }
                            FUN_01a50970(&local_a0,0,puVar6,&local_6d8);
                            iVar27 = iVar27 + 1;
                            goto LAB_0289cc34;
                          }
                        }
                      }
                      uVar12 = uVar12 + 1;
                      lVar23 = lVar24;
                    } while (uVar12 != 0x80);
                    puVar19 = (uint *)PTR_DAT_04bc00c8;
                  }
                  break;
                case 10:
                  if (uVar15 == 2) goto LAB_0289c8cc;
                  break;
                case 0xd:
                  if (uVar15 == 1) goto LAB_0289c8cc;
                  break;
                case 0xf:
                  if (uVar15 == 5) goto LAB_0289c8cc;
                  break;
                case 0x10:
                case 0x11:
                  if (uVar15 == 3) {
                    local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,0x10);
                    goto LAB_0289c8cc;
                  }
                  break;
                case 0x12:
                  if (uVar15 == 4) goto LAB_0289c8cc;
                }
              }
            }
          }
        }
switchD_0289c880_caseD_b:
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80);
LAB_0289cc34:
      uVar15 = uVar15 + 1;
    } while ((uVar15 < uVar26) && (iVar27 != 0x80));
  }
  local_74 = 0;
  uVar17 = FUN_0291e130(local_6b8,&local_74,1);
  puVar2 = PTR_DAT_04bb3128;
  puVar1 = PTR_DAT_04bb3120;
  if (((uVar17 & 1) != 0) && (local_74 != 0)) {
    uVar26 = 0;
    iVar27 = 0;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    puVar4 = PTR_DAT_04bb2010 + 0x10;
    puVar5 = PTR_DAT_04bbfe68 + 0x10;
    do {
      if (((*puVar2 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar2), iVar16 != 0)) {
        FUN_00706e58(puVar1);
        __cxa_guard_release(puVar2);
      }
      if (0 < (int)*(uint *)puVar1) {
        uVar17 = 0;
        do {
          if (*(int *)(*(long *)(puVar1 + 8) + uVar17 * 4) == 3) goto LAB_0289ccfc;
          uVar17 = uVar17 + 1;
        } while (*(uint *)puVar1 != uVar17);
      }
      uVar17 = 0;
LAB_0289ccfc:
      local_78 = 0;
      if (((*puVar2 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar2), iVar16 != 0)) {
        FUN_00706e58(puVar1);
        __cxa_guard_release(puVar2);
      }
      uVar15 = (uint)uVar17;
      if (*(uint *)puVar1 <= uVar15) {
        uVar15 = 0;
      }
      local_78 = (ushort)(uVar26 & 0x7f) |
                 (ushort)(*(int *)(*(long *)(puVar1 + 8) + (long)(int)uVar15 * 4) << 0xb);
      FUN_007ef010(auStack_76,&local_78);
      FUN_00805ba8(&local_6c0,auStack_76);
      local_6c8 = (uint *)0x0;
      local_6d0 = local_6c0;
      local_6cc = uStack_6bc;
      lVar23 = *(long *)puVar10;
      local_6d8 = puVar3;
      uVar15 = FUN_0277d6c4(&local_6d0);
      if (*(long *)puVar10 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          lVar23 = *(long *)PTR_DAT_04bc0428;
          uVar15 = FUN_0277d6c4(&local_6c0);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if (uVar15 < *(uint *)(lVar23 + 0x1d8)) {
            puVar19 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar15 * 8);
            if (puVar19 != (uint *)0x0) {
              local_6c8 = puVar19;
            }
          }
        }
      }
      FUN_01afca60(&local_6d8,1);
      if (((*puVar2 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar2), iVar16 != 0)) {
        FUN_00706e58(puVar1);
        __cxa_guard_release(puVar2);
      }
      if (0 < (int)*(uint *)puVar1) {
        uVar17 = 0;
        do {
          if (*(int *)(*(long *)(puVar1 + 8) + uVar17 * 4) == 3) goto LAB_0289ce1c;
          uVar17 = uVar17 + 1;
        } while (*(uint *)puVar1 != uVar17);
      }
      uVar17 = 0;
LAB_0289ce1c:
      if (((*puVar2 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar2), iVar16 != 0)) {
        FUN_00706e58(puVar1);
        __cxa_guard_release(puVar2);
      }
      uVar15 = (uint)uVar17;
      if (*(uint *)puVar1 <= uVar15) {
        uVar15 = 0;
      }
      if (local_6c8 == (uint *)0x0) {
        uVar14 = 0xbc;
      }
      else {
        uVar12 = *local_6c8;
        uVar14 = 0;
        if ((uVar12 != 0) && (local_6c8 != (uint *)(ulong)uVar12)) {
          puVar19 = (uint *)((long)local_6c8 - (long)(ulong)uVar12);
          uVar14 = 0;
          if (*puVar19 != 0) {
            uVar14 = puVar19[1];
            if ((uVar14 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
              lVar23 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar23 = 0x1c;
              }
              lVar23 = (long)puVar19 + lVar23 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar23 != 0) {
                uVar12 = 0;
                if ((ulong)uVar14 != 0) {
                  uVar12 = (uint)((ulong)((long)local_6c8 - lVar23) / (ulong)uVar14);
                }
                if (*puVar19 <= uVar12) {
                  uVar12 = 0xffffffff;
                }
                if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar14 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2),
                   uVar14 < 0xbd)) goto LAB_0289cee4;
              }
            }
            uVar14 = 0;
          }
        }
      }
LAB_0289cee4:
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar14);
      if (uVar14 == 0xac) {
        local_6cc = (*(uint *)(*(long *)(puVar1 + 8) + (long)(int)uVar15 * 4) & 0x1f) << 0xb |
                    local_6cc & 0xffff0000 | uVar26 & 0x7f;
      }
      local_a0 = puVar5;
      local_98 = 0;
      local_6c0 = local_6d0;
      local_6e0 = (int)((local_6b8[(long)iVar27 * 3] + 2.5) / 5.0) + -1;
      iStack_6dc = (int)(((30.0 - local_6b8[(long)iVar27 * 3 + 1]) + 2.5) / 5.0) + 1;
      lVar23 = *(long *)PTR_DAT_04bb2720;
      local_6e8 = puVar4;
      uStack_6bc = local_6cc;
      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x330) == 0)) {
        puVar18 = &DAT_055c04a0;
      }
      else {
        puVar18 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
        iVar16 = FUN_006bd550(*puVar18,0);
        puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar16 != 0x758f7eaf) {
          puVar18 = &DAT_055c04a0;
        }
      }
      local_94 = *(uint *)(puVar18 + 7);
      uVar11 = FUN_017baf44();
      local_90 = CONCAT71(local_90._1_7_,uVar11) & 0xffffffffffffff01;
      local_a8 = 0;
      lVar23 = *(long *)puVar10;
      local_b8 = PTR_DAT_04bc0510 + 0x10;
      local_b0 = local_6c0;
      local_ac = uStack_6bc;
      uVar15 = FUN_0277d6c4(&local_b0);
      if (*(long *)puVar10 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          FUN_0277d6c4(&local_6c0);
        }
      }
      FUN_01a50970(&local_a0,2,&local_6c0,&local_6e8);
      iVar27 = iVar27 + 1;
    } while ((iVar27 != 0x80) && (uVar26 = uVar26 + 1, uVar26 < local_74));
  }
  return;
}

