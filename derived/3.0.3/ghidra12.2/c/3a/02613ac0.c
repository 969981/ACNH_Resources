
undefined8 FUN_02613ac0(byte *param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  char *pcVar2;
  long lVar3;
  undefined2 uVar4;
  ushort uVar5;
  char *pcVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  undefined2 uVar11;
  int iVar12;
  uint uVar13;
  undefined8 ***pppuVar14;
  char cVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined2 *puVar28;
  ulong uVar29;
  uint uVar30;
  int iVar31;
  undefined8 uVar32;
  long lVar33;
  undefined *puVar34;
  long lVar35;
  int iVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined **local_118;
  char *local_110;
  ulong local_108;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  byte local_dc [4];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 ***local_c8;
  undefined8 ***pppuStack_c0;
  undefined8 **local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [24];
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined2 local_7c;
  undefined **local_78;
  char *local_70;
  
  puVar34 = PTR_DAT_04bb46f0;
  if (7 < *param_1) {
    return 0;
  }
  lVar33 = *(long *)PTR_DAT_04bb46f0;
  if (lVar33 != 0) {
    uVar23 = FUN_02613470(param_1,param_2,param_3 & 0xffffffff);
    if ((uVar23 & 1) != 0) {
      uVar23 = FUN_02612f30(param_1,param_2,param_3 & 0xffffffff);
      lVar24 = *(long *)puVar34;
      uVar30 = (uint)uVar23;
      local_7c = (undefined2)(uVar23 >> 0x20);
      local_80 = uVar30;
      if (lVar24 == 0) {
        local_88 = *(undefined4 *)PTR_DAT_04bb37e0;
        uStack_84 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      }
      else if (((uVar30 & 0xffff) < 0x800) &&
              ((*(byte *)(lVar24 + ((uVar23 & 0xffffffff) >> 3 & 0x1fff) + 0xe99e0) >>
                (ulong)(uVar30 & 7) & 1) != 0)) {
        FUN_02621f00(&local_88,lVar24,uVar23 & 0xffffffff);
      }
      else {
        FUN_0262eb00(&local_88,lVar24,uVar23 & 0xffffffff,lVar24 + 0xe98e0);
      }
      local_d8 = 0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = &local_b8;
      local_b8 = &local_b0;
      local_b0 = &local_a8;
      local_a8 = 0;
      if (auStack_a0 != (undefined1 *)0x0) {
        local_d8 = 0x300000000;
        local_d0 = auStack_a0;
      }
      pppuStack_c0 = local_c8;
      iVar17 = FUN_02672e00(param_1);
      iVar18 = FUN_02555fe0(param_1);
      if (0 < iVar17) {
        iVar36 = 0;
        iVar31 = 0;
        uVar13 = uVar30 >> 0x10 & 0xff;
        ppuVar1 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        do {
          iVar19 = FUN_02672e00(param_1);
          iVar7 = iVar31;
          if (iVar19 <= iVar31) {
            iVar7 = -1;
          }
          if ((iVar18 != iVar7) && (cVar15 = FUN_02678270(param_1,iVar7), cVar15 == -1)) {
            plVar25 = (long *)FUN_02677ea0(param_1,iVar7);
            uVar26 = FUN_0277d7b4(plVar25,&local_88);
            puVar34 = PTR_DAT_04bb43c0;
            if ((uVar26 & 1) != 0) {
              local_110 = (char *)*plVar25;
              local_108 = 0;
              lVar24 = *(long *)PTR_DAT_04bb43c0;
              local_118 = ppuVar1;
              uVar20 = FUN_0277d6c4(&local_110);
              if (*(long *)puVar34 != 0) {
                lVar24 = *(long *)(lVar24 + 0x57e58);
                uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                if ((uVar20 < *(uint *)(lVar24 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
                  lVar24 = *(long *)PTR_DAT_04bc0428;
                  uVar20 = FUN_0277d6c4(plVar25);
                  uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                  if (uVar20 < *(uint *)(lVar24 + 0x1d8)) {
                    uVar26 = *(ulong *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar20 * 8);
                    if (uVar26 != 0) {
                      local_108 = uVar26;
                    }
                  }
                }
              }
              uVar26 = FUN_01af0020(&local_118);
              if ((uVar26 & 1) == 0) {
                iVar19 = 1;
              }
              else {
                iVar21 = FUN_01af02d0(&local_118);
                iVar12 = uVar13 - iVar36;
                iVar19 = iVar21;
                if (iVar12 <= iVar21) {
                  iVar19 = iVar12;
                }
                if (iVar21 < 2) {
                  iVar19 = iVar21;
                }
              }
              pppuVar14 = local_c8;
              if ((int)local_d8 < local_d8._4_4_) {
                if (local_c8 != (undefined8 ***)0x0) {
                  local_c8 = (undefined8 ***)*local_c8;
                }
                *(short *)pppuVar14 = (short)*plVar25;
                *(undefined1 *)((long)pppuVar14 + 2) = *(undefined1 *)((long)plVar25 + 2);
                *(undefined1 *)((long)pppuVar14 + 3) = *(undefined1 *)((long)plVar25 + 3);
                *(undefined4 *)((long)pppuVar14 + 4) = *(undefined4 *)((long)plVar25 + 4);
                if ((int)local_d8 < local_d8._4_4_) {
                  *(undefined8 ****)(local_d0 + (long)(int)local_d8 * 8) = pppuVar14;
                  local_d8 = CONCAT44(local_d8._4_4_,(int)local_d8 + 1);
                }
              }
              iVar36 = iVar19 + iVar36;
              FUN_026776a0(param_1,iVar7);
            }
            if ((int)uVar13 <= iVar36) {
              auVar38 = FUN_02614d60(&local_80,&local_d8);
              local_dc[0] = *param_1;
              if (7 < local_dc[0]) {
                local_dc[0] = 0xff;
              }
              lVar24 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_dc,1);
              plVar25 = (long *)PTR_DAT_04bb46f0;
              uVar11 = (undefined2)uVar23;
              puVar34 = PTR_DAT_04bb2020;
              if (lVar24 != 0) {
                lVar35 = lVar24 + 0x194b0;
                if (*(long *)(lVar24 + 0x194b8) == 0) {
                  lVar35 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
                }
                local_108 = local_108 & 0xffffffffffffff00;
                pcVar2 = (char *)(lVar35 + 0x2d1a8);
                pcVar6 = pcVar2 + (param_3 & 0xff) * 0x38;
                if ((param_3 & 0xfc) != 0) {
                  pcVar6 = pcVar2;
                }
                local_110 = pcVar6;
                if (*(long *)(pcVar6 + 0x28) == 0) {
                  uVar16 = 0;
                }
                else {
                  puVar27 = *(undefined8 **)(*(long *)(pcVar6 + 0x28) + 0x10);
                  uVar16 = 0;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar16 = (**(code **)*puVar27)();
                  }
                }
                local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                            0xffffffffffff01ff;
                local_118 = &PTR_FUN_04a86f20;
                FUN_02640280(pcVar6,6);
                *(undefined1 *)(*(long *)(pcVar6 + 0x10) + *(long *)(pcVar6 + 8) + 5) = 1;
                FUN_02640184(&local_118);
                local_108 = CONCAT71(local_108._1_7_,1);
                if (*(long **)(pcVar6 + 0x28) == (long *)0x0) {
                  uVar16 = 0;
                  local_110 = pcVar6;
                }
                else {
                  puVar27 = (undefined8 *)**(long **)(pcVar6 + 0x28);
                  uVar16 = 0;
                  local_110 = pcVar6;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar16 = (**(code **)*puVar27)();
                  }
                }
                local_118 = &PTR_FUN_04a86f20;
                local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                            0xffffffffffff01ff;
                bVar8 = *(byte *)(*(long *)(pcVar6 + 0x10) + *(long *)(pcVar6 + 8) + 4);
                FUN_02640184(&local_118);
                local_108 = CONCAT71(local_108._1_7_,1);
                local_110 = pcVar2;
                if (*(long **)(lVar35 + 0x2d1d0) == (long *)0x0) {
                  uVar16 = 0;
                }
                else {
                  puVar27 = (undefined8 *)**(long **)(lVar35 + 0x2d1d0);
                  uVar16 = 0;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar16 = (**(code **)*puVar27)();
                  }
                }
                local_118 = &PTR_FUN_04a86f20;
                local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                            0xffffffffffff01ff;
                bVar9 = *(byte *)(*(long *)(lVar35 + 0x2d1b8) + *(long *)(lVar35 + 0x2d1b0) + 4);
                FUN_02640184(&local_118);
                if (bVar8 <= bVar9) {
                  if (bVar9 == bVar8) {
                    local_108 = (ulong)local_108._1_7_ << 8;
                    if (*(long *)(lVar35 + 0x2d1d0) == 0) {
                      uVar16 = 0;
                      local_110 = pcVar2;
                    }
                    else {
                      puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d1d0) + 0x10);
                      uVar16 = 0;
                      local_110 = pcVar2;
                      if (puVar27 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar27)();
                      }
                    }
                    local_118 = &PTR_FUN_04a86f20;
                    local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                                0xffffffffffff01ff;
                    FUN_02640280(pcVar2,6);
                    *(undefined1 *)(*(long *)(lVar35 + 0x2d1b8) + *(long *)(lVar35 + 0x2d1b0) + 4) =
                         3;
                  }
                  else {
                    if (bVar9 == 0) goto LAB_02614084;
                    local_108 = (ulong)local_108._1_7_ << 8;
                    if (*(long *)(lVar35 + 0x2d1d0) == 0) {
                      uVar16 = 0;
                      local_110 = pcVar2;
                    }
                    else {
                      puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d1d0) + 0x10);
                      uVar16 = 0;
                      local_110 = pcVar2;
                      if (puVar27 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar27)();
                      }
                    }
                    local_118 = &PTR_FUN_04a86f20;
                    local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                                0xffffffffffff01ff;
                    FUN_02640280(pcVar2,6);
                    *(byte *)(*(long *)(lVar35 + 0x2d1b8) + *(long *)(lVar35 + 0x2d1b0) + 4) =
                         bVar9 - 1;
                  }
                  FUN_02640184(&local_118);
                }
LAB_02614084:
                pcVar2 = (char *)(lVar35 + 0x2d1e0);
                local_108 = CONCAT71(local_108._1_7_,1);
                local_110 = pcVar2;
                if (*(long **)(lVar35 + 0x2d208) == (long *)0x0) {
                  uVar16 = 0;
                }
                else {
                  puVar27 = (undefined8 *)**(long **)(lVar35 + 0x2d208);
                  uVar16 = 0;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar16 = (**(code **)*puVar27)();
                  }
                }
                local_118 = &PTR_FUN_04a86f20;
                local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                            0xffffffffffff01ff;
                bVar9 = *(byte *)(*(long *)(lVar35 + 0x2d1f0) + *(long *)(lVar35 + 0x2d1e8) + 4);
                FUN_02640184(&local_118);
                if (bVar8 <= bVar9) {
                  if (bVar9 == bVar8) {
                    local_108 = (ulong)local_108._1_7_ << 8;
                    if (*(long *)(lVar35 + 0x2d208) == 0) {
                      uVar16 = 0;
                      local_110 = pcVar2;
                    }
                    else {
                      puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d208) + 0x10);
                      uVar16 = 0;
                      local_110 = pcVar2;
                      if (puVar27 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar27)();
                      }
                    }
                    local_118 = &PTR_FUN_04a86f20;
                    local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                                0xffffffffffff01ff;
                    FUN_02640280(pcVar2,6);
                    *(undefined1 *)(*(long *)(lVar35 + 0x2d1f0) + *(long *)(lVar35 + 0x2d1e8) + 4) =
                         3;
                  }
                  else {
                    if (bVar9 == 0) goto LAB_026141a8;
                    local_108 = (ulong)local_108._1_7_ << 8;
                    if (*(long *)(lVar35 + 0x2d208) == 0) {
                      uVar16 = 0;
                      local_110 = pcVar2;
                    }
                    else {
                      puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d208) + 0x10);
                      uVar16 = 0;
                      local_110 = pcVar2;
                      if (puVar27 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar27)();
                      }
                    }
                    local_118 = &PTR_FUN_04a86f20;
                    local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                                0xffffffffffff01ff;
                    FUN_02640280(pcVar2,6);
                    *(byte *)(*(long *)(lVar35 + 0x2d1f0) + *(long *)(lVar35 + 0x2d1e8) + 4) =
                         bVar9 - 1;
                  }
                  FUN_02640184(&local_118);
                }
LAB_026141a8:
                pcVar2 = (char *)(lVar35 + 0x2d218);
                local_108 = CONCAT71(local_108._1_7_,1);
                local_110 = pcVar2;
                if (*(long **)(lVar35 + 0x2d240) == (long *)0x0) {
                  uVar16 = 0;
                }
                else {
                  puVar27 = (undefined8 *)**(long **)(lVar35 + 0x2d240);
                  uVar16 = 0;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar16 = (**(code **)*puVar27)();
                  }
                }
                local_118 = &PTR_FUN_04a86f20;
                local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                            0xffffffffffff01ff;
                bVar9 = *(byte *)(*(long *)(lVar35 + 0x2d228) + *(long *)(lVar35 + 0x2d220) + 4);
                FUN_02640184(&local_118);
                if (bVar8 <= bVar9) {
                  if (bVar9 == bVar8) {
                    local_108 = (ulong)local_108._1_7_ << 8;
                    if (*(long *)(lVar35 + 0x2d240) == 0) {
                      uVar16 = 0;
                      local_110 = pcVar2;
                    }
                    else {
                      puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d240) + 0x10);
                      uVar16 = 0;
                      local_110 = pcVar2;
                      if (puVar27 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar27)();
                      }
                    }
                    local_118 = &PTR_FUN_04a86f20;
                    local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                                0xffffffffffff01ff;
                    FUN_02640280(pcVar2,6);
                    *(undefined1 *)(*(long *)(lVar35 + 0x2d228) + *(long *)(lVar35 + 0x2d220) + 4) =
                         3;
                  }
                  else {
                    if (bVar9 == 0) goto LAB_026142c4;
                    local_108 = (ulong)local_108._1_7_ << 8;
                    if (*(long *)(lVar35 + 0x2d240) == 0) {
                      uVar16 = 0;
                      local_110 = pcVar2;
                    }
                    else {
                      puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d240) + 0x10);
                      uVar16 = 0;
                      local_110 = pcVar2;
                      if (puVar27 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar27)();
                      }
                    }
                    local_118 = &PTR_FUN_04a86f20;
                    local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                                0xffffffffffff01ff;
                    FUN_02640280(pcVar2,6);
                    *(byte *)(*(long *)(lVar35 + 0x2d228) + *(long *)(lVar35 + 0x2d220) + 4) =
                         bVar9 - 1;
                  }
                  FUN_02640184(&local_118);
                }
LAB_026142c4:
                pcVar2 = (char *)(lVar35 + 0x2d250);
                local_108 = CONCAT71(local_108._1_7_,1);
                local_110 = pcVar2;
                if (*(long **)(lVar35 + 0x2d278) == (long *)0x0) {
                  uVar16 = 0;
                }
                else {
                  puVar27 = (undefined8 *)**(long **)(lVar35 + 0x2d278);
                  uVar16 = 0;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar16 = (**(code **)*puVar27)();
                  }
                }
                local_118 = &PTR_FUN_04a86f20;
                local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                            0xffffffffffff01ff;
                bVar9 = *(byte *)(*(long *)(lVar35 + 0x2d260) + *(long *)(lVar35 + 0x2d258) + 4);
                FUN_02640184(&local_118);
                if (bVar8 <= bVar9) {
                  if (bVar9 == bVar8) {
                    local_108 = (ulong)local_108._1_7_ << 8;
                    if (*(long *)(lVar35 + 0x2d278) == 0) {
                      uVar16 = 0;
                      local_110 = pcVar2;
                    }
                    else {
                      puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d278) + 0x10);
                      uVar16 = 0;
                      local_110 = pcVar2;
                      if (puVar27 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar27)();
                      }
                    }
                    local_118 = &PTR_FUN_04a86f20;
                    local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                                0xffffffffffff01ff;
                    FUN_02640280(pcVar2,6);
                    *(undefined1 *)(*(long *)(lVar35 + 0x2d260) + *(long *)(lVar35 + 0x2d258) + 4) =
                         3;
                  }
                  else {
                    if (bVar9 == 0) goto LAB_026143e0;
                    local_108 = (ulong)local_108._1_7_ << 8;
                    if (*(long *)(lVar35 + 0x2d278) == 0) {
                      uVar16 = 0;
                      local_110 = pcVar2;
                    }
                    else {
                      puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d278) + 0x10);
                      uVar16 = 0;
                      local_110 = pcVar2;
                      if (puVar27 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar27)();
                      }
                    }
                    local_118 = &PTR_FUN_04a86f20;
                    local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                                0xffffffffffff01ff;
                    FUN_02640280(pcVar2,6);
                    *(byte *)(*(long *)(lVar35 + 0x2d260) + *(long *)(lVar35 + 0x2d258) + 4) =
                         bVar9 - 1;
                  }
                  FUN_02640184(&local_118);
                }
LAB_026143e0:
                pcVar2 = (char *)(lVar35 + 0x2d138);
                FUN_02776d24(param_1,((uint)(uVar23 >> 0x18) & 0xff) * auVar38._0_4_);
                puVar34 = PTR_DAT_04bb2020;
                local_108 = local_108 & 0xffffffffffffff00;
                local_110 = pcVar2;
                if (*(long *)(lVar35 + 0x2d160) == 0) {
                  uVar16 = 0;
                }
                else {
                  puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d160) + 0x10);
                  if (puVar27 == (undefined8 *)0x0) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = (**(code **)*puVar27)();
                  }
                }
                local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                            0xffffffffffff01ff;
                local_118 = &PTR_FUN_04a86f40;
                FUN_02640280(pcVar2,0x30);
                lVar24 = *(long *)(lVar35 + 0x2d148) + *(long *)(lVar35 + 0x2d140);
                FUN_02640184(&local_118);
                local_108 = local_108 & 0xffffffffffffff00;
                *(short *)(lVar24 + 0x18) = *(short *)(lVar24 + 0x18) + 1;
                if (*(long *)(lVar35 + 0x2d160) == 0) {
                  uVar16 = 0;
                  local_110 = pcVar2;
                }
                else {
                  puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d160) + 0x10);
                  uVar16 = 0;
                  local_110 = pcVar2;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar16 = (**(code **)*puVar27)();
                  }
                }
                local_118 = &PTR_FUN_04a86f40;
                local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                            0xffffffffffff01ff;
                FUN_02640280(pcVar2,0x30);
                lVar3 = *(long *)(lVar35 + 0x2d148) + *(long *)(lVar35 + 0x2d140);
                FUN_02640184(&local_118);
                cVar15 = *(char *)(lVar3 + 0x1a);
                *(byte *)(lVar3 + 0x1a) = cVar15 + 1U;
                if (cVar15 == '\t') {
LAB_02614564:
                  *(undefined2 *)(lVar24 + 0x18) = 0;
                  uVar32 = 100;
                }
                else if (cVar15 == '\x04') {
                  *(undefined2 *)(lVar24 + 0x18) = 0;
                  uVar32 = 0x32;
                }
                else if (cVar15 == '\0') {
                  *(undefined2 *)(lVar24 + 0x18) = 0;
                  uVar32 = 0;
                  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
                    local_118 = (undefined **)(puVar34 + 0x10);
                    local_110 = "ReserveFirstTradeBonus";
                    FUN_0274bfe8(param_1,&local_118,1);
                    uVar32 = 0;
                  }
                }
                else {
                  if ((byte)(cVar15 + 1U) < 0x65) {
                    if (9 < *(ushort *)(lVar24 + 0x18)) goto LAB_02614564;
                  }
                  else if (0x13 < *(ushort *)(lVar24 + 0x18)) {
                    uVar32 = 100;
                    *(undefined1 *)(lVar3 + 0x1a) = 100;
                    *(undefined2 *)(lVar24 + 0x18) = 0;
                    goto LAB_0261458c;
                  }
                  uVar32 = 0;
                }
LAB_0261458c:
                if (10 < *(byte *)(lVar3 + 0x1a)) {
                  uVar22 = FUN_0252d29c();
                  local_118 = (undefined **)CONCAT44(local_118._4_4_,uVar22);
                  iVar17 = FUN_0262298c(lVar33,&local_118,uVar23 & 0xffffffff,1);
                  fVar37 = (float)FUN_026253e0(lVar33,uVar23 & 0xffffffff);
                  if ((10000.0 < fVar37) && (iVar17 - 3U < 2)) {
                    local_108 = local_108 & 0xffffffffffffff00;
                    pcVar2 = (char *)(lVar35 + 0x2d288);
                    local_110 = pcVar2;
                    if (*(long *)(lVar35 + 0x2d2b0) == 0) {
                      uVar16 = 0;
                    }
                    else {
                      puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d2b0) + 0x10);
                      uVar16 = 0;
                      if (puVar27 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar27)();
                      }
                    }
                    local_118 = &PTR_FUN_04a86f60;
                    local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                                0xffffffffffff01ff;
                    FUN_02640280(pcVar2,4);
                    *(undefined2 *)(*(long *)(lVar35 + 0x2d298) + *(long *)(lVar35 + 0x2d290)) =
                         uVar11;
                    FUN_02640184(&local_118);
                    local_108 = local_108 & 0xffffffffffffff00;
                    if (*(long *)(lVar35 + 0x2d2b0) == 0) {
                      uVar16 = 0;
                      local_110 = pcVar2;
                    }
                    else {
                      puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d2b0) + 0x10);
                      uVar16 = 0;
                      local_110 = pcVar2;
                      if (puVar27 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar27)();
                      }
                    }
                    local_118 = &PTR_FUN_04a86f60;
                    local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                                0xffffffffffff01ff;
                    FUN_02640280(pcVar2,4);
                    *(undefined1 *)(*(long *)(lVar35 + 0x2d298) + *(long *)(lVar35 + 0x2d290) + 2) =
                         0;
                    FUN_02640184(&local_118);
                    puVar34 = PTR_DAT_04bb2020;
                    local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar17);
                    local_118 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                    local_110 = "HighPriceTradeOrderBonusCandidateTicketNum";
                    uVar22 = 300;
                    if (1 < iVar17 - 3U) {
                      uVar22 = 100;
                    }
                    FUN_0274bfe8(param_1,&local_118,uVar22);
                  }
                  local_118 = (undefined **)(puVar34 + 0x10);
                  local_110 = "HighPriceTradeOrderBonusItemRecipeID";
                  uVar26 = FUN_0274bce0(param_1,&local_118);
                  lVar24 = *plVar25;
                  if (lVar24 == 0) {
                    local_e4 = *(undefined4 *)PTR_DAT_04bb37e0;
                    uStack_e0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                  }
                  else {
                    if (((uint)uVar26 & 0xffff) < 0x800) {
                      uVar13 = 1 << (ulong)((uint)uVar26 & 7) &
                               (uint)*(byte *)(lVar24 + ((uVar26 & 0xffffffff) >> 3 & 0x1fff) +
                                              0xe99e0);
                      uVar4 = 0x4c7b;
                      if (uVar13 != 0) {
                        uVar4 = (short)uVar26;
                      }
                      local_118 = (undefined **)CONCAT62(local_118._2_6_,uVar4);
                      if (uVar13 != 0) {
                        FUN_026126cc(&local_e4,&local_118);
                        goto LAB_02614780;
                      }
                    }
                    FUN_0262eb00(&local_e4,lVar24,uVar26 & 0xffffffff,lVar24 + 0xe98e0);
                  }
LAB_02614780:
                  pcVar2 = (char *)(lVar35 + 0x2d288);
                  local_108 = CONCAT71(local_108._1_7_,1);
                  local_110 = pcVar2;
                  if (*(long **)(lVar35 + 0x2d2b0) == (long *)0x0) {
                    uVar16 = 0;
                  }
                  else {
                    puVar27 = (undefined8 *)**(long **)(lVar35 + 0x2d2b0);
                    uVar16 = 0;
                    if (puVar27 != (undefined8 *)0x0) {
                      uVar16 = (**(code **)*puVar27)();
                    }
                  }
                  local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                              0xffffffffffff01ff;
                  local_118 = &PTR_FUN_04a86f60;
                  uVar10 = *(ushort *)(*(long *)(lVar35 + 0x2d298) + *(long *)(lVar35 + 0x2d290));
                  FUN_02640184(&local_118);
                  lVar24 = *plVar25;
                  if (lVar24 == 0) {
                    local_ec = *(undefined4 *)PTR_DAT_04bb37e0;
                    uStack_e8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                  }
                  else {
                    if (uVar10 < 0x800) {
                      uVar13 = 1 << (ulong)(uVar10 & 7) &
                               (uint)*(byte *)(lVar24 + (ulong)(uVar10 >> 3) + 0xe99e0);
                      uVar5 = 0x4c7b;
                      if (uVar13 != 0) {
                        uVar5 = uVar10;
                      }
                      local_118 = (undefined **)CONCAT62(local_118._2_6_,uVar5);
                      if (uVar13 != 0) {
                        FUN_026126cc(&local_ec,&local_118);
                        goto LAB_02614854;
                      }
                    }
                    FUN_0262eb00(&local_ec,lVar24,uVar10,lVar24 + 0xe98e0);
                  }
LAB_02614854:
                  uVar26 = FUN_0277d9a8(&local_e4);
                  uVar29 = auVar38._8_8_ >> 0x20;
                  if ((uVar26 & 1) == 0) {
                    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                    local_110 = "HighPriceTradeOrderBonusPoint";
                    local_118 = ppuVar1;
                    FUN_0274ca70(param_1,&local_118,uVar29);
                    plVar25 = (long *)PTR_DAT_04bb46f0;
                    local_110 = "HighPriceTradeOrderBonusPoint";
                    local_118 = ppuVar1;
                    iVar18 = FUN_0274bce0(param_1,&local_118);
                    if (0x31 < iVar18) {
                      uVar26 = FUN_0277d9a8(&local_ec);
                      puVar34 = PTR_DAT_04bb2020;
                      if ((uVar26 & 1) == 0) {
                        ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                        local_110 = "HighPriceTradeOrderBonusItemRecipeID";
                        local_118 = ppuVar1;
                        FUN_0274bfe8(param_1,&local_118,uVar30 & 0xffff);
                        local_110 = "HighPriceTradeOrderBonusTicketNum";
                        local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar17);
                        uVar22 = 300;
                        if (1 < iVar17 - 3U) {
                          uVar22 = 100;
                        }
                        local_118 = ppuVar1;
                        FUN_0274bfe8(param_1,&local_118,uVar22);
                        plVar25 = (long *)PTR_DAT_04bb46f0;
                      }
                      else {
                        ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                        local_110 = "HighPriceTradeOrderBonusItemRecipeID";
                        local_118 = ppuVar1;
                        FUN_0274bfe8(param_1,&local_118,uVar10);
                        local_110 = "HighPriceTradeOrderBonusTicketNum";
                        local_70 = "HighPriceTradeOrderBonusCandidateTicketNum";
                        local_118 = ppuVar1;
                        local_78 = ppuVar1;
                        uVar22 = FUN_0274bce0(param_1,&local_78);
                        FUN_0274bfe8(param_1,&local_118,uVar22);
                        plVar25 = (long *)PTR_DAT_04bb46f0;
                        local_108 = local_108 & 0xffffffffffffff00;
                        if (*(long *)(lVar35 + 0x2d2b0) == 0) {
                          uVar16 = 0;
                          local_110 = pcVar2;
                        }
                        else {
                          puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d2b0) + 0x10);
                          uVar16 = 0;
                          local_110 = pcVar2;
                          if (puVar27 != (undefined8 *)0x0) {
                            uVar16 = (**(code **)*puVar27)();
                          }
                        }
                        puVar34 = PTR_DAT_04bb2020;
                        local_118 = &PTR_FUN_04a86f60;
                        local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108))
                                    & 0xffffffffffff01ff;
                        puVar28 = (undefined2 *)FUN_0261513c(&local_118);
                        *puVar28 = 0x4c7b;
                        FUN_02640184(&local_118);
                        local_108 = local_108 & 0xffffffffffffff00;
                        if (*(long *)(lVar35 + 0x2d2b0) == 0) {
                          uVar16 = 0;
                          local_110 = pcVar2;
                        }
                        else {
                          puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x2d2b0) + 0x10);
                          uVar16 = 0;
                          local_110 = pcVar2;
                          if (puVar27 != (undefined8 *)0x0) {
                            uVar16 = (**(code **)*puVar27)();
                          }
                        }
                        local_118 = &PTR_FUN_04a86f60;
                        local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108))
                                    & 0xffffffffffff01ff;
                        lVar24 = FUN_0261513c(&local_118);
                        *(undefined1 *)(lVar24 + 2) = 0;
                        FUN_02640184(&local_118);
                        local_118 = (undefined **)(puVar34 + 0x10);
                        local_110 = "HighPriceTradeOrderBonusCandidateTicketNum";
                        FUN_0274bfe8(param_1,&local_118,0);
                      }
                      local_118 = (undefined **)(puVar34 + 0x10);
                      local_110 = "HighPriceTradeOrderBonusItemLapsedDays";
                      FUN_0274bfe8(param_1,&local_118,0);
                    }
                  }
                  else {
                    local_118 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                    local_110 = "HighPriceTradeOrderBonusPointBackup";
                    FUN_0274ca70(param_1,&local_118,uVar29);
                  }
                  puVar34 = PTR_DAT_04bb2020;
                }
                FUN_02615198(param_1,auVar38._0_8_ >> 0x20,uVar32);
                ppuVar1 = (undefined **)(puVar34 + 0x10);
                local_110 = "HotelDiyTradeAchieveOrderNum";
                local_118 = ppuVar1;
                FUN_0274ca70(param_1,&local_118,1);
                local_110 = "HotelDiyTradeAchieveOrderNumNowIsland";
                local_118 = ppuVar1;
                FUN_0274ca70(param_1,&local_118,1);
                local_110 = "DIYTrade";
                local_118 = ppuVar1;
                FUN_0279a9f0(param_1,&local_118,1);
                lVar24 = *plVar25;
                local_110 = "PE_DIY_Trade";
                if (lVar24 == 0) {
                  local_78 = *(undefined ***)PTR_DAT_04bb37e0;
                  local_118 = ppuVar1;
                }
                else {
                  if ((uVar30 & 0xffff) < 0x800) {
                    uVar13 = 1 << (ulong)(uVar30 & 7) &
                             (uint)*(byte *)(lVar24 + ((uVar23 & 0xffffffff) >> 3 & 0x1fff) +
                                            0xe99e0);
                    uVar4 = 0x4c7b;
                    if (uVar13 != 0) {
                      uVar4 = uVar11;
                    }
                    local_e4 = CONCAT22(local_e4._2_2_,uVar4);
                    if (uVar13 != 0) {
                      local_118 = ppuVar1;
                      FUN_026126cc(&local_78,&local_e4);
                      goto LAB_02614ba4;
                    }
                  }
                  local_118 = ppuVar1;
                  FUN_0262eb00(&local_78,lVar24,uVar23 & 0xffffffff,lVar24 + 0xe98e0);
                }
LAB_02614ba4:
                FUN_01b600a0(&local_118,&local_78,param_1);
              }
              lVar24 = FUN_0264d580();
              if (lVar24 != 0) {
                local_108 = local_108 & 0xffffffffffffff00;
                pcVar2 = (char *)(lVar24 + 0xe75e8);
                local_110 = pcVar2;
                if (*(long *)(lVar24 + 0xe7610) == 0) {
                  uVar16 = 0;
                }
                else {
                  puVar27 = *(undefined8 **)(*(long *)(lVar24 + 0xe7610) + 0x10);
                  uVar16 = 0;
                  if (puVar27 != (undefined8 *)0x0) {
                    uVar16 = (**(code **)*puVar27)();
                  }
                }
                local_108 = CONCAT62(local_108._2_6_,CONCAT11(uVar16,(undefined1)local_108)) &
                            0xffffffffffff01ff;
                local_118 = (undefined **)(PTR_DAT_04bb4f88 + 0x10);
                FUN_02640280(pcVar2,0x800);
                local_78 = (undefined **)(puVar34 + 0x10);
                local_70 = "HotelUnlockItemFromPoint";
                FUN_02740030(*(long *)(lVar24 + 0xe75f8) + *(long *)(lVar24 + 0xe75f0),&local_78,
                             auVar38._8_8_ & 0xffffffff);
                FUN_02640184(&local_118);
              }
              local_78 = (undefined **)(puVar34 + 0x10);
              local_70 = "hotel_trade_item";
              FUN_025ffac8(&local_118,&local_78,param_1);
              local_118 = (undefined **)(PTR_DAT_04bc3318 + 0x10);
              uVar22 = FUN_0252d29c();
              local_78 = (undefined **)CONCAT44(local_78._4_4_,uVar22);
              uVar22 = FUN_0262298c(lVar33,&local_78,uVar23 & 0xffffffff,1);
              lVar33 = *plVar25;
              if (lVar33 == 0) {
                local_78 = *(undefined ***)PTR_DAT_04bb37e0;
              }
              else {
                if ((uVar30 & 0xffff) < 0x800) {
                  uVar30 = 1 << (ulong)(uVar30 & 7) &
                           (uint)*(byte *)(lVar33 + ((uVar23 & 0xffffffff) >> 3 & 0x1fff) + 0xe99e0)
                  ;
                  uVar4 = 0x4c7b;
                  if (uVar30 != 0) {
                    uVar4 = uVar11;
                  }
                  local_e4 = CONCAT22(local_e4._2_2_,uVar4);
                  if (uVar30 != 0) {
                    FUN_026126cc(&local_78,&local_e4);
                    goto LAB_02614d20;
                  }
                }
                FUN_0262eb00(&local_78,lVar33,uVar23 & 0xffffffff,lVar33 + 0xe98e0);
              }
LAB_02614d20:
              uVar26 = FUN_0277d6c4(&local_78);
              local_70 = (char *)CONCAT44(local_70._4_4_,uVar22);
              local_78 = (undefined **)(uVar26 & 0xffffffff | (uVar23 >> 0x10 & 0xff) << 0x20);
              FUN_025b2b8c(&local_118,&local_78);
              FUN_025b2a7c(&local_118);
              return 1;
            }
          }
          iVar31 = iVar31 + 1;
        } while (iVar17 != iVar31);
      }
    }
  }
  return 0;
}

