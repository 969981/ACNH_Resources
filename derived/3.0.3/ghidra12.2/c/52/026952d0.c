
void FUN_026952d0(long param_1,long *param_2,long param_3,int param_4,undefined8 param_5,int param_6
                 ,uint param_7,int *param_8,undefined8 param_9,long param_10,int param_11)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  uint uVar19;
  uint *puVar20;
  long *plVar21;
  uint uVar22;
  undefined *puVar23;
  long lVar24;
  long *plVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  int iVar29;
  long local_158;
  long lStack_150;
  undefined8 local_148;
  uint *local_140;
  undefined1 *local_138;
  undefined1 *puStack_130;
  uint *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  uint *local_110;
  undefined1 *local_108;
  undefined1 *puStack_100;
  uint local_f8;
  int local_f4;
  undefined *local_f0;
  char **local_e8;
  int local_dc;
  long *local_d8;
  int local_cc;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  uint uStack_a4;
  long local_a0;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  undefined *local_88;
  char *local_80;
  uint *local_78;
  uint local_6c;
  
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "WearItemLayer1LayoutLimit";
  local_d8 = param_2;
  local_f4 = FUN_02749340(param_1 + 0x1267c,&local_88);
  if (local_f4 < 3) {
    local_f4 = 2;
  }
  local_b4 = *(undefined4 *)(param_1 + 0x125ec);
  local_b0 = *(uint *)(param_1 + 0x125f0);
  local_bc = *(undefined4 *)(param_1 + 0x12644);
  local_b8 = *(uint *)(param_1 + 0x12648);
  local_c4 = *(uint *)(param_1 + 0x12618);
  local_c0 = *(uint *)(param_1 + 0x1261c);
  local_c8 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  puVar7 = PTR_DAT_04bc00c8;
  if (param_4 != param_6) {
    local_f8 = 0;
    iVar29 = 0;
    local_dc = param_11;
    puStack_118 = (undefined1 *)((ulong)&local_b4 | 2);
    local_120 = (undefined1 *)((ulong)&local_b4 | 3);
    local_128 = &local_b0;
    puStack_130 = (undefined1 *)((ulong)&local_bc | 2);
    local_138 = (undefined1 *)((ulong)&local_bc | 3);
    local_140 = &local_b8;
    local_148 = param_9;
    puStack_100 = (undefined1 *)((ulong)&local_c4 | 2);
    local_108 = (undefined1 *)((ulong)&local_c4 | 3);
    local_110 = &local_c0;
    local_cc = 0x18;
    if ((param_7 & 1) == 0) {
      local_cc = 0;
    }
    local_e8 = &local_80;
    lStack_150 = param_1 + 0x10d6c;
    local_158 = param_1 + 0x1094c;
    local_f0 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar6 = PTR_DAT_04bb43c0;
      if (((param_10 == 0) || (uVar9 = iVar29 + local_cc, 0x37 < uVar9)) ||
         ((*(uint *)(param_10 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) == 0)) {
        puVar28 = (uint *)(param_3 + (long)param_4 * 0x2c);
        local_90 = *puVar28;
        local_8c = puVar28[1];
        lVar24 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(&local_90);
        if (*(long *)puVar6 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            uVar11 = FUN_0277e294(&local_90);
            if ((uVar11 & 1) != 0) {
              uVar11 = FUN_0277d7b4(&local_90,&local_b4);
              if ((uVar11 & 1) == 0) {
LAB_02695574:
                uVar11 = FUN_0277d7b4(&local_90,&local_bc);
                puVar23 = PTR_DAT_04bb37e0;
                if ((uVar11 & 1) != 0) {
                  if ((local_90._3_1_ == local_bc._3_1_) && (local_8c == local_b8)) {
                    local_bc = CONCAT22(local_bc._2_2_,*(undefined2 *)PTR_DAT_04bb37e0);
                    puVar14 = puStack_130;
                    puVar16 = local_138;
                    puVar28 = local_140;
                    goto LAB_02695464;
                  }
                }
                uVar11 = FUN_0277d7b4(&local_90,&local_c4);
                if ((((uVar11 & 1) == 0) || ((uint)local_90._3_1_ != local_c4 >> 0x18)) ||
                   (local_8c != local_c0)) {
                  local_78 = (uint *)0x0;
                  lVar24 = *(long *)puVar6;
                  local_88 = local_f0;
                  local_80 = (char *)CONCAT62(CONCAT51(CONCAT41(local_8c,local_90._3_1_),
                                                       local_90._2_1_),(undefined2)local_90);
                  uVar9 = FUN_0277d6c4(local_e8);
                  if (*(long *)puVar6 == 0) {
LAB_02695734:
                    uVar9 = 0xbc;
                    local_94 = 0xbc;
                  }
                  else {
                    lVar24 = *(long *)(lVar24 + 0x57e58);
                    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
                       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                    goto LAB_02695734;
                    lVar24 = *(long *)PTR_DAT_04bc0428;
                    uVar9 = FUN_0277d6c4(&local_90);
                    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
                       (puVar15 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8),
                       puVar15 == (uint *)0x0)) goto LAB_02695734;
                    uVar9 = *puVar15;
                    local_78 = puVar15;
                    if ((uVar9 == 0) || (puVar15 == (uint *)(ulong)uVar9)) {
LAB_026959c8:
                      uVar9 = 0;
                      local_94 = 0;
                    }
                    else {
                      puVar20 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
                      if ((*puVar20 == 0) ||
                         ((uVar9 = puVar20[1], uVar9 == 0 || ((ulong)(ushort)puVar20[2] == 0))))
                      goto LAB_026959c8;
                      lVar24 = 0xc;
                      if (*(char *)((long)puVar20 + 10) != '\0') {
                        lVar24 = 0x1c;
                      }
                      lVar24 = (long)puVar20 + lVar24 + (ulong)(ushort)puVar20[2] * 8;
                      if (lVar24 == 0) goto LAB_026959c8;
                      uVar22 = 0;
                      if ((ulong)uVar9 != 0) {
                        uVar22 = (uint)((ulong)((long)puVar15 - lVar24) / (ulong)uVar9);
                      }
                      if (*puVar20 <= uVar22) {
                        uVar22 = 0xffffffff;
                      }
                      if (*(uint *)puVar7 <= uVar22) goto LAB_026959c8;
                      uVar5 = *(ushort *)(*(long *)(puVar7 + 8) + (long)(int)uVar22 * 2);
                      uVar9 = (uint)uVar5;
                      if (0xbc < uVar5) goto LAB_026959c8;
                      local_94 = (uint)uVar5;
                      if (local_94 == 0xac) goto switchD_0269596c_caseD_1;
                    }
                  }
                  if (local_dc < 0x33) {
                    if (1 < uVar9 - 9) {
                      if (local_78 == (uint *)0x0) {
LAB_026957e4:
                        local_a8 = 0;
                      }
                      else {
                        uVar9 = *local_78;
                        local_a8 = 0;
                        if ((uVar9 != 0) && (local_78 != (uint *)(ulong)uVar9)) {
                          puVar15 = (uint *)((long)local_78 - (long)(ulong)uVar9);
                          local_a8 = 0;
                          if (*puVar15 != 0) {
                            uVar9 = puVar15[1];
                            if ((uVar9 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                              lVar24 = 0xc;
                              if (*(char *)((long)puVar15 + 10) != '\0') {
                                lVar24 = 0x1c;
                              }
                              lVar24 = (long)puVar15 + lVar24 + (ulong)(ushort)puVar15[2] * 8;
                              if (lVar24 != 0) {
                                uVar22 = 0;
                                if ((ulong)uVar9 != 0) {
                                  uVar22 = (uint)((ulong)((long)local_78 - lVar24) / (ulong)uVar9);
                                }
                                if (*puVar15 <= uVar22) {
                                  uVar22 = 0xffffffff;
                                }
                                if ((uVar22 < *(uint *)PTR_DAT_04bc01a0) &&
                                   (local_a8 = (uint)*(ushort *)
                                                      (*(long *)(PTR_DAT_04bc01a0 + 8) +
                                                      (long)(int)uVar22 * 2), local_a8 < 0x15))
                                goto LAB_026957e8;
                              }
                            }
                            goto LAB_026957e4;
                          }
                        }
                      }
LAB_026957e8:
                      if (local_a8 == 0) goto LAB_02695898;
                    }
                    lVar24 = *(long *)puVar6;
                    local_a0 = 0;
                    local_a8 = local_90;
                    uStack_a4 = local_8c;
                    uVar9 = FUN_0277d6c4(&local_a8);
                    if (*(long *)puVar6 != 0) {
                      lVar24 = *(long *)(lVar24 + 0x57e58);
                      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                      if (((uVar9 < *(uint *)(lVar24 + 0x1d8)) &&
                          (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
                         (lVar24 = *(long *)PTR_DAT_04bb43a8, lVar24 != 0)) {
                        uVar11 = FUN_0277d6c4(&local_90);
                        local_a0 = lVar24 + (uVar11 & 0xffffffff) * 0x23;
                        if (0x752 < ((uint)(uVar11 >> 3) & 0x1fffffff)) {
                          local_a0 = lVar24;
                        }
                      }
                    }
                    local_ac = local_dc;
                    local_6c = FUN_007b0ea4(&local_a8,&local_ac);
                    if (local_6c != 4) goto switchD_0269596c_caseD_1;
                  }
LAB_02695898:
                  iVar3 = *param_8;
                  if (3 < iVar3 - 2U) {
                    if (iVar3 == 1) {
                      switch(local_94) {
                      case 1:
                      case 2:
                      case 0x49:
                      case 0x56:
                      case 0x69:
                      case 0x6a:
                      case 0x6b:
                        local_a8 = FUN_01ae7550(&local_88);
                        if ((local_a8 - 5 & 0xfffffffd) == 0) goto LAB_02695a04;
                        break;
                      default:
                        local_a8 = FUN_01ae7550(&local_88);
                        if ((local_a8 - 5 & 0xfffffffd) == 0) goto switchD_0269596c_caseD_9;
                        break;
                      case 0xf:
                      case 0x10:
                      case 0x11:
                      case 0x12:
switchD_0269596c_caseD_9:
                        uVar11 = FUN_02694c0c(&local_90,&local_c8,local_148);
                        if ((uVar11 & 1) == 0) goto LAB_02695a04;
                      }
                    }
                    else if ((iVar3 == 0) && (*(byte *)(param_3 + (long)param_4 * 0x2c + 0x28) < 2))
                    {
                      switch(local_94) {
                      case 1:
                      case 2:
                      case 0x18:
                      case 0x19:
                      case 0x1c:
                      case 0x49:
                      case 0x56:
                      case 0x72:
                      case 0x73:
                      case 0x74:
                      case 0x75:
                      case 0x77:
                        break;
                      default:
                        local_a8 = FUN_01ae7550(&local_88);
                        if (((local_a8 < 10) ||
                            (uVar11 = FUN_01ae7a70(&local_88), (uVar11 & 1) != 0)) &&
                           (uVar11 = FUN_01ae8eec(&local_88), (uVar11 & 1) != 0)) {
                          if (local_78 == (uint *)0x0) {
LAB_02696190:
                            local_a8 = 0;
                          }
                          else {
                            uVar9 = *local_78;
                            local_a8 = 0;
                            if ((uVar9 != 0) && (local_78 != (uint *)(ulong)uVar9)) {
                              puVar15 = (uint *)((long)local_78 - (long)(ulong)uVar9);
                              local_a8 = 0;
                              if (*puVar15 != 0) {
                                uVar9 = puVar15[1];
                                if ((uVar9 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                                  lVar24 = 0xc;
                                  if (*(char *)((long)puVar15 + 10) != '\0') {
                                    lVar24 = 0x1c;
                                  }
                                  lVar24 = (long)puVar15 + lVar24 + (ulong)(ushort)puVar15[2] * 8;
                                  if (lVar24 != 0) {
                                    uVar22 = 0;
                                    if ((ulong)uVar9 != 0) {
                                      uVar22 = (uint)((ulong)((long)local_78 - lVar24) /
                                                     (ulong)uVar9);
                                    }
                                    if (*puVar15 <= uVar22) {
                                      uVar22 = 0xffffffff;
                                    }
                                    if ((uVar22 < *(uint *)PTR_DAT_04bc0048) &&
                                       (local_a8 = (uint)*(ushort *)
                                                          (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                          (long)(int)uVar22 * 2), local_a8 < 0x52))
                                    goto LAB_02696194;
                                  }
                                }
                                goto LAB_02696190;
                              }
                            }
                          }
LAB_02696194:
                          if (local_a8 != 0x1d) goto switchD_0269596c_caseD_9;
                        }
                        break;
                      case 9:
                      case 10:
                      case 0xd:
                      case 0xe:
                      case 0xf:
                      case 0x10:
                      case 0x11:
                      case 0x12:
                      case 0x13:
                        goto switchD_0269596c_caseD_9;
                      case 0x69:
                      case 0x6a:
                      case 0x6b:
                        uVar11 = FUN_01ae8eec(&local_88);
                        if ((uVar11 & 1) != 0) goto LAB_02695a04;
                      }
                    }
                    goto switchD_0269596c_caseD_1;
                  }
                  uVar11 = FUN_01ae7a70(&local_88);
                  if ((uVar11 & 1) == 0) {
                    local_a8 = 10;
                    local_6c = FUN_01ae7550(&local_88);
                    if (local_6c != local_a8) {
                      local_a8 = 0xb;
                      local_6c = FUN_01ae7550(&local_88);
                      if (local_6c != local_a8) {
                        local_a8 = 0xc;
                        local_6c = FUN_01ae7550(&local_88);
                        if (local_6c != local_a8) goto switchD_0269596c_caseD_1;
                      }
                    }
                  }
LAB_02695a04:
                  pbVar12 = (byte *)(param_3 + (long)param_4 * 0x2c + 0x28);
                  bVar4 = *pbVar12;
                  iVar3 = iVar29 + local_cc;
                  uVar9 = *(uint *)(local_d8 + 2);
                  if (0 < (int)uVar9) {
                    uVar22 = uVar9;
                    if (*param_8 != 1) goto LAB_02695ec4;
                    lVar24 = *(long *)puVar6;
                    local_88 = PTR_DAT_04bc0510 + 0x10;
                    local_80 = *(char **)puVar28;
                    local_78 = (uint *)0x0;
                    uVar9 = FUN_0277d6c4(local_e8);
                    if (*(long *)puVar6 == 0) {
LAB_02695b94:
                      local_a8 = 0xbc;
                    }
                    else {
                      lVar24 = *(long *)(lVar24 + 0x57e58);
                      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                      if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
                         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                      goto LAB_02695b94;
                      lVar24 = *(long *)PTR_DAT_04bc0428;
                      uVar9 = FUN_0277d6c4(puVar28);
                      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                      if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
                         (puVar28 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8),
                         puVar28 == (uint *)0x0)) goto LAB_02695b94;
                      uVar9 = *puVar28;
                      local_a8 = 0;
                      if ((uVar9 != 0) && (puVar28 != (uint *)(ulong)uVar9)) {
                        puVar15 = (uint *)((long)puVar28 - (long)(ulong)uVar9);
                        local_a8 = 0;
                        if (*puVar15 != 0) {
                          uVar9 = puVar15[1];
                          if ((uVar9 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                            lVar24 = 0xc;
                            if (*(char *)((long)puVar15 + 10) != '\0') {
                              lVar24 = 0x1c;
                            }
                            lVar24 = (long)puVar15 + lVar24 + (ulong)(ushort)puVar15[2] * 8;
                            if (lVar24 != 0) {
                              uVar27 = 0;
                              if ((ulong)uVar9 != 0) {
                                uVar27 = (uint)((ulong)((long)puVar28 - lVar24) / (ulong)uVar9);
                              }
                              if (*puVar15 <= uVar27) {
                                uVar27 = 0xffffffff;
                              }
                              if ((uVar27 < *(uint *)puVar7) &&
                                 (local_a8 = (uint)*(ushort *)
                                                    (*(long *)(puVar7 + 8) + (long)(int)uVar27 * 2),
                                 local_a8 < 0xbd)) goto LAB_02695bac;
                            }
                          }
                          local_a8 = 0;
                        }
                      }
                    }
LAB_02695bac:
                    if (local_a8 - 0xf < 4) {
                      iVar1 = local_f8 + 1;
                      bVar8 = local_f4 <= (int)local_f8;
                      local_f8 = iVar1;
                      if (bVar8) {
                        uVar9 = *(uint *)(local_d8 + 2);
                        if (0 < (int)uVar9) {
                          uVar22 = 0;
                          uVar26 = uVar9;
                          uVar27 = uVar9;
                          do {
                            uVar27 = uVar27 - 1;
                            local_f8 = uVar26 - 1;
                            if (local_f8 < *(uint *)(local_d8 + 2)) {
                              uVar2 = uVar9 + ~uVar22 &
                                      ((int)(uVar9 + ~uVar22) >> 0x1f ^ 0xffffffffU);
                              uVar10 = (uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU)) + 1;
                              plVar25 = local_d8;
                              if (6 < uVar2) {
                                uVar19 = uVar10 & 0xfffffff8;
                                do {
                                  uVar19 = uVar19 - 8;
                                  plVar25 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(*(long *)(plVar25[1] + 8) + 8) + 8) + 8) +
                                                  8) + 8) + 8);
                                } while (uVar19 != 0);
                              }
                              if ((uVar2 + 1 & 7) != 0) {
                                iVar13 = -(uVar10 & 7);
                                do {
                                  plVar25 = (long *)plVar25[1];
                                  bVar8 = iVar13 != -1;
                                  iVar13 = iVar13 + 1;
                                } while (bVar8);
                              }
                              if (((plVar25 != (long *)0x0) &&
                                  (puVar28 = (uint *)(plVar25 + -5), puVar28 != (uint *)0x0)) &&
                                 (uVar10 = *puVar28, -1 < (int)uVar10)) {
                                uVar19 = 0x20;
                                uVar2 = uVar10 - 0x18;
                                if (uVar10 < 0x18) {
                                  uVar19 = 0x18;
                                  uVar2 = uVar10;
                                }
                                if (uVar2 < uVar19) {
                                  plVar18 = &lStack_150;
                                  if (uVar10 < 0x18) {
                                    plVar18 = &local_158;
                                  }
                                  puVar17 = (undefined8 *)(*plVar18 + (ulong)uVar2 * 0x2c);
                                  local_80 = (char *)*puVar17;
                                  local_78 = (uint *)0x0;
                                  local_88 = PTR_DAT_04bc0510 + 0x10;
                                  lVar24 = *(long *)PTR_DAT_04bb43c0;
                                  uVar10 = FUN_0277d6c4(local_e8);
                                  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_02695e28:
                                    local_a8 = 0xbc;
                                  }
                                  else {
                                    lVar24 = *(long *)(lVar24 + 0x57e58);
                                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                                    if ((*(uint *)(lVar24 + 0x1d8) <= uVar10) ||
                                       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8)
                                        == 0)) goto LAB_02695e28;
                                    lVar24 = *(long *)PTR_DAT_04bc0428;
                                    uVar10 = FUN_0277d6c4(puVar17);
                                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                                    if ((*(uint *)(lVar24 + 0x1d8) <= uVar10) ||
                                       (puVar15 = *(uint **)(*(long *)(lVar24 + 0x1e0) +
                                                            (long)(int)uVar10 * 8),
                                       puVar15 == (uint *)0x0)) goto LAB_02695e28;
                                    uVar10 = *puVar15;
                                    local_a8 = 0;
                                    if ((uVar10 != 0) && (puVar15 != (uint *)(ulong)uVar10)) {
                                      puVar20 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
                                      local_a8 = 0;
                                      if (*puVar20 != 0) {
                                        uVar10 = puVar20[1];
                                        if ((uVar10 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                                          lVar24 = 0xc;
                                          if (*(char *)((long)puVar20 + 10) != '\0') {
                                            lVar24 = 0x1c;
                                          }
                                          lVar24 = (long)puVar20 +
                                                   lVar24 + (ulong)(ushort)puVar20[2] * 8;
                                          if (lVar24 != 0) {
                                            uVar2 = 0;
                                            if ((ulong)uVar10 != 0) {
                                              uVar2 = (uint)((ulong)((long)puVar15 - lVar24) /
                                                            (ulong)uVar10);
                                            }
                                            if (*puVar20 <= uVar2) {
                                              uVar2 = 0xffffffff;
                                            }
                                            if ((uVar2 < *(uint *)puVar7) &&
                                               (local_a8 = (uint)*(ushort *)
                                                                  (*(long *)(puVar7 + 8) +
                                                                  (long)(int)uVar2 * 2),
                                               local_a8 < 0xbd)) goto LAB_02695e34;
                                          }
                                        }
                                        local_a8 = 0;
                                      }
                                    }
                                  }
LAB_02695e34:
                                  if (local_a8 - 0xf < 4) {
                                    if (*plVar25 != 0) {
                                      *(long *)(*plVar25 + 8) = plVar25[1];
                                    }
                                    if ((long *)plVar25[1] != (long *)0x0) {
                                      *(long *)plVar25[1] = *plVar25;
                                    }
                                    *plVar25 = 0;
                                    plVar25[1] = 0;
                                    *(int *)(local_d8 + 2) = (int)local_d8[2] + -1;
                                    plVar25[-5] = local_d8[3];
                                    local_d8[3] = (long)puVar28;
                                    break;
                                  }
                                }
                              }
                            }
                            uVar22 = uVar22 + 1;
                            bVar8 = 1 < uVar26;
                            uVar26 = local_f8;
                          } while (bVar8);
                          uVar9 = *(uint *)(local_d8 + 2);
                          uVar22 = uVar9;
                          local_f8 = iVar1;
                          if (0 < (int)uVar9) goto LAB_02695ec4;
                        }
                        goto LAB_02696054;
                      }
                    }
                    uVar9 = *(uint *)(local_d8 + 2);
LAB_02695ec4:
                    uVar26 = 1;
                    uVar27 = 1;
                    uVar10 = 0;
LAB_02695ef4:
                    uVar2 = uVar10 + 1;
                    if (uVar9 <= uVar10) goto LAB_02695ee0;
                    plVar25 = local_d8;
                    if (6 < uVar10) {
                      uVar19 = uVar27 & 0xfffffff8;
                      do {
                        uVar19 = uVar19 - 8;
                        plVar25 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(plVar25[1] + 8) + 8) + 8) + 8) + 8) + 8) +
                                            8);
                      } while (uVar19 != 0);
                    }
                    if ((uVar2 & 7) != 0) {
                      uVar19 = uVar27 & 7;
                      do {
                        plVar25 = (long *)plVar25[1];
                        uVar19 = uVar19 - 1;
                      } while (uVar19 != 0);
                    }
                    if (((plVar25 == (long *)0x0) || (plVar25 == (long *)&DAT_00000028)) ||
                       (*(int *)((long)plVar25 + -0x24) < (int)(uint)*pbVar12)) goto LAB_02695ee0;
                    plVar25 = local_d8;
                    if (6 < uVar10) {
                      uVar27 = uVar27 & 0xfffffff8;
                      do {
                        uVar27 = uVar27 - 8;
                        plVar25 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(plVar25[1] + 8) + 8) + 8) + 8) + 8) + 8) +
                                            8);
                      } while (uVar27 != 0);
                    }
                    if ((uVar10 + 1 & 7) != 0) {
                      uVar26 = uVar26 & 7;
                      do {
                        plVar25 = (long *)plVar25[1];
                        uVar26 = uVar26 - 1;
                      } while (uVar26 != 0);
                    }
                    plVar18 = (long *)0x0;
                    if (plVar25 != (long *)0x0) {
                      plVar18 = plVar25 + -5;
                    }
                    if ((int)uVar9 < (int)local_d8[5]) {
                      plVar25 = (long *)local_d8[3];
                      if (plVar25 != (long *)0x0) {
                        local_d8[3] = *plVar25;
                      }
                      *(int *)plVar25 = iVar3;
                      *(uint *)((long)plVar25 + 4) = (uint)bVar4;
                      *(undefined1 *)(plVar25 + 3) = 0;
                      ((int *)((long)plVar25 + 0x1c))[0] = 0;
                      ((int *)((long)plVar25 + 0x1c))[1] = 0;
                      plVar25[6] = 0;
                      plVar25[1] = -1;
                      plVar25[2] = -1;
                      plVar21 = plVar25 + 5;
                      *plVar21 = 0;
                      plVar18 = plVar18 + 5;
                      lVar24 = *plVar18;
                      *plVar18 = (long)plVar21;
                      plVar25[6] = (long)plVar18;
                      *plVar21 = lVar24;
                      if (lVar24 != 0) {
                        *(long **)(lVar24 + 8) = plVar21;
                      }
                      uVar9 = (int)local_d8[2] + 1;
                      *(uint *)(local_d8 + 2) = uVar9;
                    }
LAB_02696048:
                    if (uVar9 == uVar22) goto LAB_02696054;
                    goto LAB_02695484;
                  }
LAB_02696054:
                  if ((int)uVar9 < (int)local_d8[5]) {
                    plVar25 = (long *)local_d8[3];
                    if (plVar25 != (long *)0x0) {
                      local_d8[3] = *plVar25;
                    }
                    *(int *)plVar25 = iVar3;
                    *(uint *)((long)plVar25 + 4) = (uint)bVar4;
                    *(undefined1 *)(plVar25 + 3) = 0;
                    ((int *)((long)plVar25 + 0x1c))[0] = 0;
                    ((int *)((long)plVar25 + 0x1c))[1] = 0;
                    plVar25[6] = 0;
                    plVar25[1] = -1;
                    plVar25[2] = -1;
                    plVar18 = plVar25 + 5;
                    *plVar18 = 0;
                    lVar24 = *local_d8;
                    *local_d8 = (long)plVar18;
                    plVar25[6] = (long)local_d8;
                    *plVar18 = lVar24;
                    if (lVar24 != 0) {
                      *(long **)(lVar24 + 8) = plVar18;
                    }
                    *(int *)(local_d8 + 2) = (int)local_d8[2] + 1;
                  }
                  goto LAB_02695484;
                }
                local_c4 = CONCAT22(local_c4._2_2_,*(undefined2 *)puVar23);
                puVar14 = puStack_100;
                puVar16 = local_108;
                puVar28 = local_110;
              }
              else {
                if ((local_90._3_1_ != local_b4._3_1_) || (local_8c != local_b0)) goto LAB_02695574;
                local_b4 = CONCAT22(local_b4._2_2_,*(undefined2 *)PTR_DAT_04bb37e0);
                puVar14 = puStack_118;
                puVar16 = local_120;
                puVar28 = local_128;
                puVar23 = PTR_DAT_04bb37e0;
              }
LAB_02695464:
              *puVar14 = puVar23[2];
              uVar9 = *(uint *)(puVar23 + 4);
              *puVar16 = puVar23[3];
              *puVar28 = uVar9;
            }
          }
        }
switchD_0269596c_caseD_1:
      }
LAB_02695484:
      param_4 = param_4 + 1;
      iVar29 = iVar29 + 1;
    } while (param_4 != param_6);
  }
  return;
LAB_02695ee0:
  uVar27 = uVar27 + 1;
  uVar26 = uVar26 + 1;
  uVar10 = uVar2;
  if (uVar2 == uVar22) goto LAB_02696048;
  goto LAB_02695ef4;
}

