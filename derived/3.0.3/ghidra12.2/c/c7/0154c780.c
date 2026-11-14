
/* WARNING: Removing unreachable block (ram,0x0154ce48) */
/* WARNING: Removing unreachable block (ram,0x0154d26c) */

void FUN_0154c780(uint param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  short sVar10;
  bool bVar11;
  undefined *puVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined2 *puVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  int *piVar25;
  long lVar26;
  uint *puVar27;
  long lVar28;
  undefined1 auStack_17a2 [2];
  uint local_17a0 [1449];
  undefined2 local_fc [2];
  undefined *local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  uint *local_e8;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined **local_d8;
  undefined **local_d0;
  undefined *local_c8;
  int local_c0;
  int local_bc;
  undefined *local_b8;
  undefined *puStack_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  undefined4 local_98;
  int iStack_94;
  undefined *local_90;
  uint local_88;
  undefined4 uStack_84;
  byte local_80;
  uint local_74;
  uint local_70;
  uint local_6c;
  
  puVar12 = PTR_DAT_04bbbf90;
  puVar3 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)param_1 * 4);
  if (0x38 < param_1) {
    puVar3 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
  }
  uStack_84 = *puVar3;
  local_88 = param_1;
  local_74 = param_1;
  local_80 = FUN_017baf44();
  local_80 = local_80 & 1;
  local_90 = PTR_DAT_04bb5438 + 0x10;
  if (local_74 == 0) {
    lVar18 = *(long *)PTR_DAT_04bb2720;
    if (lVar18 == 0) {
      puVar24 = &DAT_055c04a0;
    }
    else {
      puVar24 = &DAT_055c04a0;
      if (*(long *)(lVar18 + 0x330) != 0) {
        puVar24 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar14 = FUN_006bd550(*puVar24,0);
        puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar14 != 0x758f7eaf) {
          puVar24 = &DAT_055c04a0;
        }
      }
    }
    uVar19 = 0;
    piVar25 = (int *)(puVar12 + 8);
    do {
      uVar15 = (uint)uVar19;
      piVar4 = piVar25 + uVar19;
      if (0x38 < uVar15) {
        piVar4 = piVar25;
      }
      if (*piVar4 == *(int *)(puVar24 + 7)) goto LAB_0154c95c;
      uVar22 = 0x39;
      if ((int)uVar15 < 0x39) {
        uVar22 = uVar15 + 1;
      }
      uVar19 = (ulong)uVar22;
    } while (uVar22 != 0x39);
    uVar15 = 0;
LAB_0154c95c:
    bVar13 = uVar15 == 1;
  }
  else {
    lVar18 = *(long *)PTR_DAT_04bb2720;
    if (lVar18 == 0) {
      puVar24 = &DAT_055c04a0;
    }
    else {
      puVar24 = &DAT_055c04a0;
      if (*(long *)(lVar18 + 0x330) != 0) {
        puVar24 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar14 = FUN_006bd550(*puVar24,0);
        puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar14 != 0x758f7eaf) {
          puVar24 = &DAT_055c04a0;
        }
      }
    }
    uVar19 = 0;
    piVar25 = (int *)(puVar12 + 8);
    do {
      local_17a0[0] = (uint)uVar19;
      piVar4 = piVar25 + uVar19;
      if (0x38 < local_17a0[0]) {
        piVar4 = piVar25;
      }
      if (*piVar4 == *(int *)(puVar24 + 7)) goto LAB_0154c8fc;
      uVar15 = 0x39;
      if ((int)local_17a0[0] < 0x39) {
        uVar15 = local_17a0[0] + 1;
      }
      uVar19 = (ulong)uVar15;
    } while (uVar15 != 0x39);
    local_17a0[0] = 0;
LAB_0154c8fc:
    bVar13 = local_74 == 1;
    if (local_17a0[0] != local_74) goto LAB_0154c9b4;
  }
  sVar10 = *(short *)PTR_DAT_04bb6298;
  if (sVar10 != -1) {
    local_17a0[0] = 4;
    puVar27 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
    if (0xff < (uint)(int)sVar10) {
      puVar27 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar27 >> 4 & 1) != 0) {
      return;
    }
  }
LAB_0154c9b4:
  lVar18 = FUN_01a4fa00(&local_90);
  puVar12 = PTR_DAT_04bb43c0;
  iVar5 = *(int *)(lVar18 + 0x10);
  local_bc = *(int *)(lVar18 + 0x14);
  local_b8 = PTR_DAT_04bbc1a0 + 0x10;
  local_98 = *(undefined4 *)(lVar18 + 0x20);
  iStack_94 = *(int *)(lVar18 + 0x24);
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  local_d8 = &puStack_b0;
  local_d0 = &local_a0;
  iVar14 = iStack_94 + 1;
  if (iVar14 != local_bc) {
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    local_c0 = iVar5;
    puStack_b0 = local_c8;
    local_a8 = iVar5;
    iStack_a4 = local_bc;
    local_a0 = local_c8;
    do {
      puVar17 = (undefined2 *)FUN_01a5190c(&local_90,0,&local_c8,0);
      uVar9 = *puVar17;
      uVar7 = *(undefined1 *)(puVar17 + 1);
      uVar8 = *(undefined1 *)((long)puVar17 + 3);
      uVar6 = *(undefined4 *)(puVar17 + 2);
      lVar28 = *(long *)puVar12;
      local_e0 = uVar9;
      local_de = uVar7;
      local_dd = uVar8;
      local_dc = uVar6;
      uVar15 = FUN_0277d6c4(&local_e0);
      lVar18 = *(long *)puVar12;
      if (lVar18 != 0) {
        lVar28 = *(long *)(lVar28 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar28 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          local_f8 = PTR_DAT_04bc0510 + 0x10;
          local_e8 = (uint *)0x0;
          local_f0 = uVar9;
          local_ee = uVar7;
          local_ed = uVar8;
          local_ec = uVar6;
          uVar15 = FUN_0277d6c4(&local_f0);
          if (*(long *)puVar12 == 0) {
LAB_0154cb6c:
            puVar27 = (uint *)0x0;
          }
          else {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((*(uint *)(lVar18 + 0x1d8) <= uVar15) ||
               (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar15 * 8) == 0))
            goto LAB_0154cb6c;
            lVar18 = *(long *)PTR_DAT_04bc0428;
            uVar15 = FUN_0277d6c4(&local_e0);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (uVar15 < *(uint *)(lVar18 + 0x1d8)) {
              puVar27 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar15 * 8);
              if (puVar27 != (uint *)0x0) {
                local_e8 = puVar27;
              }
            }
            else {
              puVar27 = (uint *)0x0;
            }
          }
          uVar19 = FUN_01ae89e0(&local_f8);
          if ((uVar19 & 1) == 0) {
            local_17a0[0] = 0xac;
            if (puVar27 == (uint *)0x0) {
              local_6c = 0xbc;
            }
            else {
              uVar15 = *puVar27;
              local_6c = 0;
              if ((uVar15 != 0) && (puVar27 != (uint *)(ulong)uVar15)) {
                puVar21 = (uint *)((long)puVar27 - (long)(ulong)uVar15);
                local_6c = 0;
                if (*puVar21 != 0) {
                  uVar15 = puVar21[1];
                  if ((uVar15 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                    lVar18 = 0xc;
                    if (*(char *)((long)puVar21 + 10) != '\0') {
                      lVar18 = 0x1c;
                    }
                    lVar18 = (long)puVar21 + lVar18 + (ulong)(ushort)puVar21[2] * 8;
                    if (lVar18 != 0) {
                      uVar22 = 0;
                      if ((ulong)uVar15 != 0) {
                        uVar22 = (uint)((ulong)((long)puVar27 - lVar18) / (ulong)uVar15);
                      }
                      if (*puVar21 <= uVar22) {
                        uVar22 = 0xffffffff;
                      }
                      if ((uVar22 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_6c = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar22 * 2
                                            ), local_6c < 0xbd)) goto LAB_0154cc2c;
                    }
                  }
                  local_6c = 0;
                }
              }
            }
LAB_0154cc2c:
            if (local_6c != 0xac) goto LAB_0154ce60;
          }
          local_fc[0] = *(undefined2 *)PTR_DAT_04bb3170;
          uVar19 = FUN_01ae89e0(&local_f8);
          if ((uVar19 & 1) != 0) {
            FUN_01b08c14(local_17a0,&local_f8);
            local_fc[0] = (undefined2)local_17a0[0];
          }
          local_17a0[0] = 0xac;
          if (puVar27 == (uint *)0x0) {
            local_6c = 0xbc;
          }
          else {
            uVar15 = *puVar27;
            local_6c = 0;
            if ((uVar15 != 0) && (puVar27 != (uint *)(ulong)uVar15)) {
              puVar21 = (uint *)((long)puVar27 - (long)(ulong)uVar15);
              local_6c = 0;
              if (*puVar21 != 0) {
                uVar15 = puVar21[1];
                if ((uVar15 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar21 + lVar18 + (ulong)(ushort)puVar21[2] * 8;
                  if (lVar18 != 0) {
                    uVar22 = 0;
                    if ((ulong)uVar15 != 0) {
                      uVar22 = (uint)((ulong)((long)puVar27 - lVar18) / (ulong)uVar15);
                    }
                    if (*puVar21 <= uVar22) {
                      uVar22 = 0xffffffff;
                    }
                    if ((uVar22 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_6c = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar22 * 2),
                       local_6c < 0xbd)) goto LAB_0154cd10;
                  }
                }
                local_6c = 0;
              }
            }
          }
LAB_0154cd10:
          if (local_6c == 0xac) {
            FUN_01b086f4(local_17a0,&local_f8);
            local_fc[0] = (undefined2)local_17a0[0];
          }
          uVar19 = FUN_007ef180(local_fc);
          if ((uVar19 & 1) != 0) {
            FUN_007ef010(auStack_17a2,local_fc);
            FUN_007e4920(local_17a0,auStack_17a2);
            iVar23 = 0;
            do {
              piVar25 = (int *)((long)&DAT_053275f0 + (long)iVar23 * 0x138 + 4);
              if ((*piVar25 != 0xfffe) && (iVar16 = FUN_0277d6c4(&local_e0), iVar16 == *piVar25)) {
                local_6c = FUN_007e68d0(local_17a0);
                if ((local_6c != *(uint *)(&DAT_053275f0 + (long)iVar23 * 0x27)) &&
                   (uVar19 = FUN_01a4f798(&local_90,0,&local_c8), (uVar19 & 1) != 0)) {
                  if (param_1 == 0) {
LAB_0154ce24:
                    plVar20 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_0154ce28:
                    lVar18 = *plVar20;
                  }
                  else {
                    if (param_1 != 0) {
                      local_70 = param_1;
                      if (param_1 == 0) goto LAB_0154ce24;
                      plVar2 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
                      plVar20 = plVar2 + param_1;
                      if (0x38 < param_1) {
                        plVar20 = plVar2;
                      }
                      goto LAB_0154ce28;
                    }
                    lVar18 = 0;
                    local_70 = param_1;
                  }
                  local_6c = 0;
                  if (*(long *)(lVar18 + 0xd0) != 0) {
                    FUN_012e5af4(*(long *)(lVar18 + 0xd0),&local_c8);
                  }
                }
                break;
              }
              iVar23 = iVar23 + 1;
            } while (iVar23 != 0x1f);
          }
        }
      }
LAB_0154ce60:
      puVar17 = (undefined2 *)FUN_01a5190c(&local_90,1,&local_c8,0);
      uVar9 = *puVar17;
      uVar7 = *(undefined1 *)(puVar17 + 1);
      uVar8 = *(undefined1 *)((long)puVar17 + 3);
      uVar6 = *(undefined4 *)(puVar17 + 2);
      lVar28 = *(long *)puVar12;
      local_e0 = uVar9;
      local_de = uVar7;
      local_dd = uVar8;
      local_dc = uVar6;
      uVar15 = FUN_0277d6c4(&local_e0);
      lVar18 = *(long *)puVar12;
      if (lVar18 != 0) {
        lVar28 = *(long *)(lVar28 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar28 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          local_f8 = PTR_DAT_04bc0510 + 0x10;
          local_e8 = (uint *)0x0;
          local_f0 = uVar9;
          local_ee = uVar7;
          local_ed = uVar8;
          local_ec = uVar6;
          uVar15 = FUN_0277d6c4(&local_f0);
          if (*(long *)puVar12 == 0) {
LAB_0154cf8c:
            puVar27 = (uint *)0x0;
          }
          else {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((*(uint *)(lVar18 + 0x1d8) <= uVar15) ||
               (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar15 * 8) == 0))
            goto LAB_0154cf8c;
            lVar18 = *(long *)PTR_DAT_04bc0428;
            uVar15 = FUN_0277d6c4(&local_e0);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (uVar15 < *(uint *)(lVar18 + 0x1d8)) {
              puVar27 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar15 * 8);
              if (puVar27 != (uint *)0x0) {
                local_e8 = puVar27;
              }
            }
            else {
              puVar27 = (uint *)0x0;
            }
          }
          uVar19 = FUN_01ae89e0(&local_f8);
          if ((uVar19 & 1) == 0) {
            local_17a0[0] = 0xac;
            if (puVar27 == (uint *)0x0) {
              local_6c = 0xbc;
            }
            else {
              uVar15 = *puVar27;
              local_6c = 0;
              if ((uVar15 != 0) && (puVar27 != (uint *)(ulong)uVar15)) {
                puVar21 = (uint *)((long)puVar27 - (long)(ulong)uVar15);
                local_6c = 0;
                if (*puVar21 != 0) {
                  uVar15 = puVar21[1];
                  if ((uVar15 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                    lVar18 = 0xc;
                    if (*(char *)((long)puVar21 + 10) != '\0') {
                      lVar18 = 0x1c;
                    }
                    lVar18 = (long)puVar21 + lVar18 + (ulong)(ushort)puVar21[2] * 8;
                    if (lVar18 != 0) {
                      uVar22 = 0;
                      if ((ulong)uVar15 != 0) {
                        uVar22 = (uint)((ulong)((long)puVar27 - lVar18) / (ulong)uVar15);
                      }
                      if (*puVar21 <= uVar22) {
                        uVar22 = 0xffffffff;
                      }
                      if ((uVar22 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_6c = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar22 * 2
                                            ), local_6c < 0xbd)) goto LAB_0154d04c;
                    }
                  }
                  local_6c = 0;
                }
              }
            }
LAB_0154d04c:
            if (local_6c != 0xac) goto LAB_0154d280;
          }
          local_fc[0] = *(undefined2 *)PTR_DAT_04bb3170;
          uVar19 = FUN_01ae89e0(&local_f8);
          if ((uVar19 & 1) != 0) {
            FUN_01b08c14(local_17a0,&local_f8);
            local_fc[0] = (undefined2)local_17a0[0];
          }
          local_17a0[0] = 0xac;
          if (puVar27 == (uint *)0x0) {
            local_6c = 0xbc;
          }
          else {
            uVar15 = *puVar27;
            local_6c = 0;
            if ((uVar15 != 0) && (puVar27 != (uint *)(ulong)uVar15)) {
              puVar21 = (uint *)((long)puVar27 - (long)(ulong)uVar15);
              local_6c = 0;
              if (*puVar21 != 0) {
                uVar15 = puVar21[1];
                if ((uVar15 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar21 + lVar18 + (ulong)(ushort)puVar21[2] * 8;
                  if (lVar18 != 0) {
                    uVar22 = 0;
                    if ((ulong)uVar15 != 0) {
                      uVar22 = (uint)((ulong)((long)puVar27 - lVar18) / (ulong)uVar15);
                    }
                    if (*puVar21 <= uVar22) {
                      uVar22 = 0xffffffff;
                    }
                    if ((uVar22 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_6c = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar22 * 2),
                       local_6c < 0xbd)) goto LAB_0154d130;
                  }
                }
                local_6c = 0;
              }
            }
          }
LAB_0154d130:
          if (local_6c == 0xac) {
            FUN_01b086f4(local_17a0,&local_f8);
            local_fc[0] = (undefined2)local_17a0[0];
          }
          uVar19 = FUN_007ef180(local_fc);
          if ((uVar19 & 1) != 0) {
            FUN_007ef010(auStack_17a2,local_fc);
            FUN_007e4920(local_17a0,auStack_17a2);
            iVar23 = 0;
            do {
              piVar25 = (int *)((long)&DAT_053275f0 + (long)iVar23 * 0x138 + 4);
              if ((*piVar25 != 0xfffe) && (iVar16 = FUN_0277d6c4(&local_e0), iVar16 == *piVar25)) {
                local_6c = FUN_007e68d0(local_17a0);
                if ((local_6c != *(uint *)(&DAT_053275f0 + (long)iVar23 * 0x27)) &&
                   (uVar19 = FUN_01a4f798(&local_90,1,&local_c8), (uVar19 & 1) != 0)) {
                  if (param_1 == 0) {
LAB_0154d244:
                    plVar20 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_0154d248:
                    lVar18 = *plVar20;
                  }
                  else {
                    if (param_1 != 0) {
                      local_70 = param_1;
                      if (param_1 == 0) goto LAB_0154d244;
                      plVar2 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
                      plVar20 = plVar2 + param_1;
                      if (0x38 < param_1) {
                        plVar20 = plVar2;
                      }
                      goto LAB_0154d248;
                    }
                    lVar18 = 0;
                    local_70 = param_1;
                  }
                  local_6c = 1;
                  if (*(long *)(lVar18 + 0xe0) != 0) {
                    FUN_012e5af4(*(long *)(lVar18 + 0xe0),&local_c8);
                  }
                }
                break;
              }
              iVar23 = iVar23 + 1;
            } while (iVar23 != 0x1f);
          }
        }
      }
LAB_0154d280:
      lVar18 = 2;
      do {
        bVar11 = bVar13;
        if (lVar18 == 6) {
          bVar11 = true;
        }
        if (!bVar11) {
          puVar17 = (undefined2 *)FUN_01a5190c(&local_90,lVar18,&local_c8,0);
          uVar9 = *puVar17;
          uVar7 = *(undefined1 *)(puVar17 + 1);
          uVar8 = *(undefined1 *)((long)puVar17 + 3);
          uVar6 = *(undefined4 *)(puVar17 + 2);
          lVar28 = *(long *)puVar12;
          local_e0 = uVar9;
          local_de = uVar7;
          local_dd = uVar8;
          local_dc = uVar6;
          uVar15 = FUN_0277d6c4(&local_e0);
          lVar26 = *(long *)puVar12;
          if (lVar26 != 0) {
            lVar28 = *(long *)(lVar28 + 0x57e58);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if ((uVar15 < *(uint *)(lVar28 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
              local_e8 = (uint *)0x0;
              local_f8 = puVar1;
              local_f0 = uVar9;
              local_ee = uVar7;
              local_ed = uVar8;
              local_ec = uVar6;
              uVar15 = FUN_0277d6c4(&local_f0);
              if (*(long *)puVar12 == 0) {
LAB_0154d3c8:
                puVar27 = (uint *)0x0;
              }
              else {
                lVar28 = *(long *)(lVar26 + 0x57e58);
                uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                if (*(uint *)(lVar28 + 0x1d8) <= uVar15) goto LAB_0154d3c8;
                if (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar15 * 8) == 0) {
LAB_0154d3e0:
                  puVar27 = (uint *)0x0;
                }
                else {
                  lVar28 = *(long *)PTR_DAT_04bc0428;
                  uVar15 = FUN_0277d6c4(&local_e0);
                  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                  if (*(uint *)(lVar28 + 0x1d8) <= uVar15) goto LAB_0154d3e0;
                  puVar27 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar15 * 8);
                  if (puVar27 != (uint *)0x0) {
                    local_e8 = puVar27;
                  }
                }
              }
              uVar19 = FUN_01ae89e0(&local_f8);
              if ((uVar19 & 1) == 0) {
                local_17a0[0] = 0xac;
                if (puVar27 == (uint *)0x0) {
                  local_6c = 0xbc;
                }
                else {
                  uVar15 = *puVar27;
                  local_6c = 0;
                  if ((uVar15 != 0) && (puVar27 != (uint *)(ulong)uVar15)) {
                    puVar21 = (uint *)((long)puVar27 - (long)(ulong)uVar15);
                    local_6c = 0;
                    if (*puVar21 != 0) {
                      uVar15 = puVar21[1];
                      if ((uVar15 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                        lVar28 = 0xc;
                        if (*(char *)((long)puVar21 + 10) != '\0') {
                          lVar28 = 0x1c;
                        }
                        lVar28 = (long)puVar21 + lVar28 + (ulong)(ushort)puVar21[2] * 8;
                        if (lVar28 != 0) {
                          uVar22 = 0;
                          if ((ulong)uVar15 != 0) {
                            uVar22 = (uint)((ulong)((long)puVar27 - lVar28) / (ulong)uVar15);
                          }
                          if (*puVar21 <= uVar22) {
                            uVar22 = 0xffffffff;
                          }
                          if ((uVar22 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_6c = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar22 * 2), local_6c < 0xbd))
                          goto LAB_0154d490;
                        }
                      }
                      local_6c = 0;
                    }
                  }
                }
LAB_0154d490:
                if (local_6c != 0xac) goto LAB_0154d290;
              }
              local_fc[0] = *(undefined2 *)PTR_DAT_04bb3170;
              uVar19 = FUN_01ae89e0(&local_f8);
              if ((uVar19 & 1) != 0) {
                FUN_01b08c14(local_17a0,&local_f8);
                local_fc[0] = (undefined2)local_17a0[0];
              }
              local_17a0[0] = 0xac;
              if (puVar27 == (uint *)0x0) {
                local_6c = 0xbc;
              }
              else {
                uVar15 = *puVar27;
                local_6c = 0;
                if ((uVar15 != 0) && (puVar27 != (uint *)(ulong)uVar15)) {
                  puVar21 = (uint *)((long)puVar27 - (long)(ulong)uVar15);
                  local_6c = 0;
                  if (*puVar21 != 0) {
                    uVar15 = puVar21[1];
                    if ((uVar15 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                      lVar28 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      lVar28 = (long)puVar21 + lVar28 + (ulong)(ushort)puVar21[2] * 8;
                      if (lVar28 != 0) {
                        uVar22 = 0;
                        if ((ulong)uVar15 != 0) {
                          uVar22 = (uint)((ulong)((long)puVar27 - lVar28) / (ulong)uVar15);
                        }
                        if (*puVar21 <= uVar22) {
                          uVar22 = 0xffffffff;
                        }
                        if ((uVar22 < *(uint *)PTR_DAT_04bc00c8) &&
                           (local_6c = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar22 * 2), local_6c < 0xbd))
                        goto LAB_0154d574;
                      }
                    }
                    local_6c = 0;
                  }
                }
              }
LAB_0154d574:
              if (local_6c == 0xac) {
                FUN_01b086f4(local_17a0,&local_f8);
                local_fc[0] = (undefined2)local_17a0[0];
              }
              uVar19 = FUN_007ef180(local_fc);
              if ((uVar19 & 1) != 0) {
                FUN_007ef010(auStack_17a2,local_fc);
                FUN_007e4920(local_17a0,auStack_17a2);
                iVar23 = 0;
                do {
                  piVar25 = (int *)((long)&DAT_053275f0 + (long)iVar23 * 0x138 + 4);
                  if ((*piVar25 != 0xfffe) && (iVar16 = FUN_0277d6c4(&local_e0), iVar16 == *piVar25)
                     ) {
                    local_6c = FUN_007e68d0(local_17a0);
                    if (local_6c != *(uint *)(&DAT_053275f0 + (long)iVar23 * 0x27)) {
                      FUN_01a50cb0(&local_90,lVar18,&local_c8);
                    }
                    break;
                  }
                  iVar23 = iVar23 + 1;
                } while (iVar23 != 0x1f);
              }
            }
          }
        }
LAB_0154d290:
        lVar18 = lVar18 + 1;
      } while (lVar18 != 8);
      if (local_c0 < *(int *)(local_d0 + 1)) {
        local_c0 = local_c0 + 1;
      }
      else {
        local_bc = local_bc + 1;
        local_c0 = *(int *)(local_d8 + 1);
      }
    } while ((iVar5 != local_c0) || (iVar14 != local_bc));
  }
  return;
}

