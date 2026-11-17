
void FUN_02f9ab00(long param_1,uint *param_2,int param_3)

{
  bool bVar1;
  byte *pbVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  byte bVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  short *psVar21;
  short *psVar22;
  long lVar23;
  short *psVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  short *psVar31;
  undefined **local_140;
  undefined8 local_138;
  int local_11c;
  undefined *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  char *pcStack_78;
  byte local_6c [12];
  
  local_140 = (undefined **)(PTR_DAT_04bc6588 + 0x10);
  local_11c = param_3;
  switch(param_3) {
  case 0:
    local_140 = &PTR_LAB_04ae8548;
    break;
  case 1:
    local_140 = &PTR_LAB_04ae8598;
    break;
  case 2:
    local_140 = &PTR_LAB_04ae8570;
    break;
  case 4:
    local_140 = &PTR_LAB_04ae85e8;
    break;
  case 5:
    local_140 = &PTR_LAB_04ae8610;
    break;
  case 6:
    local_140 = &PTR_LAB_04ae8638;
    break;
  case 0xc:
    local_140 = &PTR_LAB_04ae86b0;
    break;
  case 0xe:
    local_140 = &PTR_LAB_04ae8700;
    break;
  case 0x14:
    local_140 = &PTR_LAB_04ae85c0;
    break;
  case 0x15:
    local_140 = &PTR_LAB_04ae8660;
    break;
  case 0x16:
    local_140 = &PTR_LAB_04ae86d8;
    break;
  case 0x17:
    local_140 = &PTR_LAB_04ae8728;
    break;
  case 0x18:
    local_140 = &PTR_LAB_04ae8750;
    break;
  case 0x19:
    local_140 = &PTR_LAB_04ae8778;
    break;
  case 0x1a:
    lVar15 = param_1 + 0x1f8;
    uVar11 = FUN_02612f30(lVar15,0x300000000,0);
    iVar10 = FUN_02612f30(lVar15,0x300000000,1);
    uVar17 = FUN_02612f30(lVar15,0x300000000,2);
    lVar15 = FUN_02612f30(lVar15,0x300000000,3);
    local_138 = (uVar17 & 0xffff) << 0x20 | lVar15 << 0x30 | (ulong)(uint)(iVar10 << 0x10) |
                uVar11 & 0xffff;
    local_140 = &PTR_LAB_04ae87a0;
    break;
  case 0x1b:
    uVar11 = FUN_02f9fccc(param_1);
    if ((uVar11 & 1) == 0) {
      local_6c[0] = *(byte *)(param_1 + 0x1f8);
      pbVar2 = (byte *)(param_1 + 0x1f8);
      if (7 < local_6c[0]) {
        local_6c[0] = 0xff;
      }
      uVar11 = FUN_02669430(local_6c);
      puVar14 = PTR_DAT_04bb2020;
      if ((uVar11 & 1) != 0) {
        puVar13 = PTR_DAT_04bb2020 + 0x10;
        local_110 = "RcmImmQuestComplete";
        local_118 = puVar13;
        uVar11 = FUN_0273f0a0(&local_118);
        if ((uVar11 & 1) == 0) {
          pcStack_78 = "ImmQCompleteDemo";
          local_80 = puVar13;
          iVar10 = FUN_0274bce0(pbVar2,&local_80);
          if (iVar10 == 0) {
            local_118 = puVar14 + 0x10;
            local_110 = "ImmQ_A_GetHousing";
            uVar11 = FUN_0273f0a0(&local_118);
            if ((uVar11 & 1) != 0) {
              local_118 = (undefined *)((ulong)local_118 & 0xffffffff00000000);
              FUN_02f9ffa4(&local_118);
              bVar16 = *pbVar2;
              local_140 = &PTR_LAB_04ae87f0;
              if (7 < bVar16) {
                bVar16 = 0xff;
              }
              local_138._0_5_ = CONCAT14(bVar16,local_118._0_4_);
              break;
            }
          }
        }
      }
      uVar11 = FUN_02f9feb4(param_1);
      if ((uVar11 & 1) == 0) {
        local_140 = &PTR_LAB_04ae8840;
      }
      else {
        bVar16 = *pbVar2;
        local_140 = &PTR_LAB_04ae8818;
        if (7 < bVar16) {
          bVar16 = 0xff;
        }
        local_138 = CONCAT71(local_138._1_7_,bVar16);
      }
    }
    else {
      local_140 = &PTR_LAB_04ae87c8;
    }
    break;
  case 0x1c:
    local_140 = &PTR_FUN_04ae8688;
  }
  if (0 < (int)*param_2) {
    lVar15 = 0;
    puVar27 = *(undefined8 **)(param_2 + 4);
    do {
      puVar18 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar15 * 8);
      lVar15 = lVar15 + 1;
      *puVar18 = puVar27;
      *(undefined8 **)(param_2 + 4) = puVar18;
      puVar27 = puVar18;
    } while (lVar15 < (int)*param_2);
  }
  *param_2 = 0;
  if (*(int *)(param_1 + 0x86340) != 0) {
    puVar27 = *(undefined8 **)(param_1 + 0x86348);
    lVar15 = (long)*(int *)(param_1 + 0x86340) << 3;
    do {
      uVar25 = *puVar27;
      uVar11 = (*(code *)*local_140)(&local_140,uVar25);
      if ((uVar11 & 1) != 0) {
        FUN_00dbf7b0(param_2,uVar25);
      }
      puVar27 = puVar27 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  puVar14 = PTR_DAT_04bb4f78;
  if (local_11c != 0x1a) goto LAB_02f9aebc;
  pbVar2 = (byte *)(param_1 + 0x1f8);
  if (*(byte *)(param_1 + 0x1f8) < 8) {
    local_80 = (undefined *)CONCAT71(local_80._1_7_,*(byte *)(param_1 + 0x1f8));
    lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
    if (lVar15 == 0) goto LAB_02f9ad94;
    FUN_02613254(&local_118,lVar15,0);
    if (local_110._4_1_ == '\0') goto LAB_02f9ad94;
    uVar11 = (ulong)local_110 & 0xffffffff;
    puVar13 = local_118;
  }
  else {
LAB_02f9ad94:
    uVar11 = 0;
    puVar13 = (undefined *)0x300000000;
  }
  sVar6 = FUN_02612f30(pbVar2,puVar13,uVar11);
  if (*pbVar2 < 8) {
    local_80 = (undefined *)CONCAT71(local_80._1_7_,*pbVar2);
    lVar15 = FUN_025830c0(*(undefined8 *)puVar14,&local_80,1);
    if (lVar15 == 0) goto LAB_02f9adec;
    FUN_02613254(&local_118,lVar15,1);
    if (local_110._4_1_ == '\0') goto LAB_02f9adec;
    uVar11 = (ulong)local_110 & 0xffffffff;
    puVar13 = local_118;
  }
  else {
LAB_02f9adec:
    uVar11 = 0;
    puVar13 = (undefined *)0x300000000;
  }
  sVar7 = FUN_02612f30(pbVar2,puVar13,uVar11);
  if (*pbVar2 < 8) {
    local_80 = (undefined *)CONCAT71(local_80._1_7_,*pbVar2);
    lVar15 = FUN_025830c0(*(undefined8 *)puVar14,&local_80,1);
    if (lVar15 == 0) goto LAB_02f9ae44;
    FUN_02613254(&local_118,lVar15,2);
    if (local_110._4_1_ == '\0') goto LAB_02f9ae44;
    uVar11 = (ulong)local_110 & 0xffffffff;
    puVar13 = local_118;
  }
  else {
LAB_02f9ae44:
    uVar11 = 0;
    puVar13 = (undefined *)0x300000000;
  }
  sVar8 = FUN_02612f30(pbVar2,puVar13,uVar11);
  if (*pbVar2 < 8) {
    local_80 = (undefined *)CONCAT71(local_80._1_7_,*pbVar2);
    lVar15 = FUN_025830c0(*(undefined8 *)puVar14,&local_80,1);
    if (lVar15 == 0) goto LAB_02f9ae9c;
    FUN_02613254(&local_118,lVar15,3);
    if (local_110._4_1_ == '\0') goto LAB_02f9ae9c;
    uVar11 = (ulong)local_110 & 0xffffffff;
    puVar14 = local_118;
  }
  else {
LAB_02f9ae9c:
    uVar11 = 0;
    puVar14 = (undefined *)0x300000000;
  }
  sVar9 = FUN_02612f30(pbVar2,puVar14,uVar11);
  if (1 < (int)*param_2) {
    lVar15 = *(long *)(param_2 + 2);
    uVar19 = 0;
    uVar20 = *param_2 - 1;
    do {
      if ((int)uVar20 <= (int)uVar19) break;
      uVar17 = (ulong)uVar19;
      uVar30 = (ulong)uVar20;
      uVar11 = uVar17;
      psVar21 = *(short **)(lVar15 + (ulong)uVar19 * 8);
      uVar20 = uVar19;
      do {
        lVar23 = lVar15 + uVar11 * 8;
        psVar22 = *(short **)(lVar23 + 8);
        sVar3 = 0x4c7b;
        if (psVar21[4] != -2) {
          sVar3 = *psVar21;
        }
        if (sVar3 != sVar6) {
          sVar4 = 0x4c7b;
          if (psVar22[4] != -2) {
            sVar4 = *psVar22;
          }
          if ((sVar4 == sVar6) ||
             ((sVar3 != sVar7 &&
              ((sVar4 == sVar7 ||
               ((sVar8 != sVar3 && ((sVar8 == sVar4 || ((sVar3 != sVar9 && (sVar4 == sVar9))))))))))
             )) {
            uVar20 = (uint)uVar11;
            *(short **)(lVar23 + 8) = psVar21;
            *(short **)(lVar15 + uVar11 * 8) = psVar22;
            psVar22 = psVar21;
          }
        }
        uVar11 = uVar11 + 1;
        psVar21 = psVar22;
      } while (uVar30 != uVar11);
      if ((int)uVar20 <= (int)uVar19) break;
      psVar21 = *(short **)(lVar15 + (ulong)uVar20 * 8);
      uVar11 = (ulong)uVar20;
      uVar19 = uVar20;
      do {
        lVar23 = lVar15 + uVar11 * 8;
        psVar22 = *(short **)(lVar23 + -8);
        sVar3 = 0x4c7b;
        if (psVar21[4] != -2) {
          sVar3 = *psVar21;
        }
        if (sVar3 == sVar6) {
LAB_02f9b170:
          uVar19 = (uint)uVar11;
          *(short **)(lVar23 + -8) = psVar21;
          *(short **)(lVar15 + uVar11 * 8) = psVar22;
        }
        else {
          sVar4 = 0x4c7b;
          if (psVar22[4] != -2) {
            sVar4 = *psVar22;
          }
          if ((sVar4 != sVar6) &&
             ((sVar3 == sVar7 ||
              ((sVar4 != sVar7 &&
               ((sVar8 == sVar3 || ((sVar8 != sVar4 && ((sVar3 == sVar9 || (sVar4 != sVar9))))))))))
             )) goto LAB_02f9b170;
          psVar21 = psVar22;
        }
        uVar11 = uVar11 - 1;
      } while ((long)uVar17 < (long)uVar11);
    } while (uVar19 != uVar20);
  }
LAB_02f9aebc:
  if ((local_11c == 0x1b) && (uVar11 = FUN_02f9fccc(param_1), (uVar11 & 1) == 0)) {
    local_6c[0] = *(byte *)(param_1 + 0x1f8);
    if (7 < local_6c[0]) {
      local_6c[0] = 0xff;
    }
    uVar11 = FUN_02669430(local_6c);
    puVar14 = PTR_DAT_04bb2020;
    if ((uVar11 & 1) != 0) {
      puVar13 = PTR_DAT_04bb2020 + 0x10;
      local_110 = "RcmImmQuestComplete";
      local_118 = puVar13;
      uVar11 = FUN_0273f0a0(&local_118);
      if ((uVar11 & 1) == 0) {
        pcStack_78 = "ImmQCompleteDemo";
        local_80 = puVar13;
        iVar10 = FUN_0274bce0(param_1 + 0x1f8,&local_80);
        if (iVar10 == 0) {
          local_118 = puVar14 + 0x10;
          local_110 = "ImmQ_A_GetHousing";
          uVar11 = FUN_0273f0a0(&local_118);
          if ((uVar11 & 1) != 0) {
            FUN_02f9fdb8(&local_118);
            puVar14 = PTR_DAT_04bb48f0;
            lVar15 = *(long *)PTR_DAT_04bb48f0;
            FUN_01e2543c(lVar15);
            local_118 = *(undefined **)(lVar15 + 0x3c);
            local_110 = *(char **)(lVar15 + 0x44);
            uStack_108 = *(undefined8 *)(lVar15 + 0x4c);
            local_100 = *(undefined8 *)(lVar15 + 0x54);
            uStack_f8 = *(undefined8 *)(lVar15 + 0x5c);
            local_f0 = *(undefined4 *)(lVar15 + 100);
            uStack_ec = *(undefined4 *)(lVar15 + 0x68);
            lVar15 = *(long *)puVar14;
            FUN_01e2543c(lVar15);
            local_e8 = *(undefined4 *)(lVar15 + 0xac);
            uStack_e4 = *(undefined4 *)(lVar15 + 0xb0);
            local_d0 = *(undefined8 *)(lVar15 + 0xc4);
            local_e0 = *(undefined8 *)(lVar15 + 0xb4);
            uStack_d8 = *(undefined8 *)(lVar15 + 0xbc);
            local_c8 = *(undefined4 *)(lVar15 + 0xcc);
            uStack_c4 = *(undefined4 *)(lVar15 + 0xd0);
            local_80 = (undefined *)0xc86;
            FUN_0277d4ac(&local_80);
            local_b8 = *(undefined4 *)(lVar15 + 0xd4);
            uStack_b4 = *(undefined4 *)(lVar15 + 0xd8);
            lVar15 = *(long *)puVar14;
            local_c0 = (undefined4)local_80;
            uStack_bc = local_80._4_4_;
            FUN_01e2543c(lVar15);
            puVar14 = PTR_DAT_04bb37e0;
            local_b0 = *(undefined4 *)(lVar15 + 0x11c);
            uStack_ac = *(undefined4 *)(lVar15 + 0x120);
            local_a8 = *(undefined8 *)(lVar15 + 0x124);
            uStack_a0 = *(undefined8 *)(lVar15 + 300);
            uVar20 = *param_2;
            uVar11 = (ulong)uVar20;
            local_98 = *(undefined8 *)(lVar15 + 0x134);
            uStack_90 = *(undefined8 *)(lVar15 + 0x13c);
            local_88 = *(undefined4 *)(lVar15 + 0x144);
            uStack_84 = *(undefined4 *)(lVar15 + 0x148);
            if ((int)uVar20 < 2) {
              return;
            }
            plVar26 = *(long **)(param_2 + 2);
            uVar17 = (ulong)(uVar20 >> 1);
            do {
              uVar28 = (uint)uVar17;
              uVar19 = uVar28 * 2;
              lVar15 = plVar26[uVar17 - 1 & 0xffffffff];
              if ((int)uVar19 <= (int)uVar20) {
                psVar21 = (short *)(lVar15 + 8);
                uVar30 = uVar17 & 0xffffffff;
                do {
                  uVar28 = (uint)uVar30;
                  uVar5 = uVar19;
                  if ((int)uVar19 < (int)uVar20) {
                    lVar23 = plVar26[(int)uVar19];
                    psVar31 = (short *)((plVar26 + (int)uVar19)[-1] + 8);
                    psVar22 = (short *)puVar14;
                    if (*psVar31 != -2) {
                      psVar22 = psVar31;
                    }
                    local_80 = *(undefined **)psVar22;
                    iVar10 = FUN_0277d6c4(&local_80);
                    if (iVar10 != 0xa37) {
                      psVar24 = (short *)(lVar23 + 8);
                      psVar22 = (short *)puVar14;
                      if (*psVar24 != -2) {
                        psVar22 = psVar24;
                      }
                      local_80 = *(undefined **)psVar22;
                      iVar10 = FUN_0277d6c4(&local_80);
                      if (iVar10 == 0xa37) goto LAB_02f9b324;
                      uVar29 = 0;
                      do {
                        lVar23 = (long)&local_118 + ((long)((ulong)uVar29 << 0x20) >> 0x1d);
                        psVar22 = (short *)puVar14;
                        if (*psVar31 != -2) {
                          psVar22 = psVar31;
                        }
                        local_80 = *(undefined **)psVar22;
                        uVar30 = FUN_0277d7b4(&local_80,lVar23);
                        if ((uVar30 & 1) != 0) break;
                        psVar22 = (short *)puVar14;
                        if (*psVar24 != -2) {
                          psVar22 = psVar24;
                        }
                        local_80 = *(undefined **)psVar22;
                        uVar30 = FUN_0277d7b4(&local_80,lVar23);
                        if ((uVar30 & 1) != 0) goto LAB_02f9b324;
                        uVar29 = uVar29 + 1;
                      } while (uVar29 != 0x13);
                    }
                    uVar5 = uVar19 | 1;
                  }
LAB_02f9b324:
                  uVar30 = (ulong)uVar5;
                  lVar23 = plVar26[(int)(uVar5 - 1)];
                  psVar22 = (short *)puVar14;
                  if (*psVar21 != -2) {
                    psVar22 = psVar21;
                  }
                  local_80 = *(undefined **)psVar22;
                  iVar10 = FUN_0277d6c4(&local_80);
                  if (iVar10 != 0xa37) {
                    psVar31 = (short *)(lVar23 + 8);
                    psVar22 = (short *)puVar14;
                    if (*psVar31 != -2) {
                      psVar22 = psVar31;
                    }
                    local_80 = *(undefined **)psVar22;
                    iVar10 = FUN_0277d6c4(&local_80);
                    if (iVar10 == 0xa37) break;
                    uVar19 = 0;
                    do {
                      lVar23 = (long)&local_118 + ((long)((ulong)uVar19 << 0x20) >> 0x1d);
                      psVar22 = (short *)puVar14;
                      if (*psVar21 != -2) {
                        psVar22 = psVar21;
                      }
                      local_80 = *(undefined **)psVar22;
                      uVar12 = FUN_0277d7b4(&local_80,lVar23);
                      if ((uVar12 & 1) != 0) break;
                      psVar22 = (short *)puVar14;
                      if (*psVar31 != -2) {
                        psVar22 = psVar31;
                      }
                      local_80 = *(undefined **)psVar22;
                      uVar12 = FUN_0277d7b4(&local_80,lVar23);
                      if ((uVar12 & 1) != 0) goto LAB_02f9b254;
                      uVar19 = uVar19 + 1;
                    } while (uVar19 != 0x13);
                  }
                  uVar19 = uVar5 * 2;
                  plVar26[(int)(uVar28 - 1)] = plVar26[(int)(uVar5 - 1)];
                  uVar28 = uVar5;
                } while ((int)uVar19 <= (int)uVar20);
              }
LAB_02f9b254:
              plVar26[(int)(uVar28 - 1)] = lVar15;
              bVar1 = 1 < (long)uVar17;
              uVar17 = uVar17 - 1;
            } while (bVar1);
            uVar17 = uVar11 - 1 & 0xffffffff;
            lVar15 = plVar26[uVar17];
            plVar26[uVar17] = *plVar26;
            uVar17 = uVar11 - 1;
            if (2 < uVar20) {
              do {
                uVar30 = uVar17;
                psVar21 = (short *)(lVar15 + 8);
                uVar20 = 2;
                uVar19 = 1;
                do {
                  if ((int)uVar20 < (int)uVar30) {
                    lVar23 = plVar26[(int)uVar20];
                    psVar31 = (short *)((plVar26 + (int)uVar20)[-1] + 8);
                    psVar22 = (short *)puVar14;
                    if (*psVar31 != -2) {
                      psVar22 = psVar31;
                    }
                    local_80 = *(undefined **)psVar22;
                    iVar10 = FUN_0277d6c4(&local_80);
                    if (iVar10 != 0xa37) {
                      psVar24 = (short *)(lVar23 + 8);
                      psVar22 = (short *)puVar14;
                      if (*psVar24 != -2) {
                        psVar22 = psVar24;
                      }
                      local_80 = *(undefined **)psVar22;
                      iVar10 = FUN_0277d6c4(&local_80);
                      if (iVar10 == 0xa37) goto LAB_02f9b794;
                      uVar28 = 0;
                      do {
                        lVar23 = (long)&local_118 + ((long)((ulong)uVar28 << 0x20) >> 0x1d);
                        psVar22 = (short *)puVar14;
                        if (*psVar31 != -2) {
                          psVar22 = psVar31;
                        }
                        local_80 = *(undefined **)psVar22;
                        uVar17 = FUN_0277d7b4(&local_80,lVar23);
                        if ((uVar17 & 1) != 0) break;
                        psVar22 = (short *)puVar14;
                        if (*psVar24 != -2) {
                          psVar22 = psVar24;
                        }
                        local_80 = *(undefined **)psVar22;
                        uVar17 = FUN_0277d7b4(&local_80,lVar23);
                        if ((uVar17 & 1) != 0) goto LAB_02f9b794;
                        uVar28 = uVar28 + 1;
                      } while (uVar28 != 0x13);
                    }
                    uVar28 = uVar20 | 1;
                  }
                  else {
LAB_02f9b794:
                    uVar28 = uVar20;
                  }
                  lVar23 = plVar26[(int)(uVar28 - 1)];
                  psVar22 = (short *)puVar14;
                  if (*psVar21 != -2) {
                    psVar22 = psVar21;
                  }
                  local_80 = *(undefined **)psVar22;
                  iVar10 = FUN_0277d6c4(&local_80);
                  if (iVar10 != 0xa37) {
                    psVar31 = (short *)(lVar23 + 8);
                    psVar22 = (short *)puVar14;
                    if (*psVar31 != -2) {
                      psVar22 = psVar31;
                    }
                    local_80 = *(undefined **)psVar22;
                    iVar10 = FUN_0277d6c4(&local_80);
                    if (iVar10 == 0xa37) break;
                    uVar20 = 0;
                    do {
                      lVar23 = (long)&local_118 + ((long)((ulong)uVar20 << 0x20) >> 0x1d);
                      psVar22 = (short *)puVar14;
                      if (*psVar21 != -2) {
                        psVar22 = psVar21;
                      }
                      local_80 = *(undefined **)psVar22;
                      uVar17 = FUN_0277d7b4(&local_80,lVar23);
                      if ((uVar17 & 1) != 0) break;
                      psVar22 = (short *)puVar14;
                      if (*psVar31 != -2) {
                        psVar22 = psVar31;
                      }
                      local_80 = *(undefined **)psVar22;
                      uVar17 = FUN_0277d7b4(&local_80,lVar23);
                      if ((uVar17 & 1) != 0) goto LAB_02f9b6c0;
                      uVar20 = uVar20 + 1;
                    } while (uVar20 != 0x13);
                  }
                  uVar20 = uVar28 << 1;
                  plVar26[(int)(uVar19 - 1)] = plVar26[(int)(uVar28 - 1)];
                  uVar19 = uVar28;
                } while ((long)(int)uVar20 < (long)uVar11);
LAB_02f9b6c0:
                plVar26[(int)(uVar19 - 1)] = lVar15;
                uVar11 = uVar30 - 1 & 0xffffffff;
                lVar15 = plVar26[uVar11];
                plVar26[uVar11] = *plVar26;
                uVar17 = uVar30 - 1;
                uVar11 = uVar30;
              } while (2 < uVar30);
            }
            *plVar26 = lVar15;
            return;
          }
        }
      }
    }
    uVar11 = FUN_02f9feb4(param_1);
    puVar14 = PTR_DAT_04bb37e0;
    if (((uVar11 & 1) != 0) && (1 < (int)*param_2)) {
      lVar15 = *(long *)(param_2 + 2);
      uVar19 = 0;
      uVar20 = *param_2 - 1;
      do {
        if ((int)uVar20 <= (int)uVar19) {
          return;
        }
        uVar17 = (ulong)uVar19;
        uVar30 = (ulong)uVar20;
        uVar11 = uVar17;
        uVar20 = uVar19;
        do {
          plVar26 = (long *)(lVar15 + uVar11 * 8);
          lVar23 = plVar26[1];
          psVar21 = (short *)puVar14;
          if (*(short *)(*plVar26 + 8) != -2) {
            psVar21 = (short *)(*plVar26 + 8);
          }
          local_118 = *(undefined **)psVar21;
          iVar10 = FUN_0277d6c4(&local_118);
          if (iVar10 != 0x1c2b) {
            psVar21 = (short *)puVar14;
            if (*(short *)(lVar23 + 8) != -2) {
              psVar21 = (short *)(lVar23 + 8);
            }
            local_118 = *(undefined **)psVar21;
            iVar10 = FUN_0277d6c4(&local_118);
            if (iVar10 == 0x1c2b) {
              lVar23 = plVar26[1];
              uVar20 = (uint)uVar11;
              plVar26[1] = *(long *)(lVar15 + uVar11 * 8);
              *(long *)(lVar15 + uVar11 * 8) = lVar23;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar30 != uVar11);
        if ((int)uVar20 <= (int)uVar19) {
          return;
        }
        uVar11 = (ulong)uVar20;
        uVar19 = uVar20;
        do {
          plVar26 = (long *)(lVar15 + uVar11 * 8);
          lVar23 = plVar26[-1];
          psVar21 = (short *)puVar14;
          if (*(short *)(*plVar26 + 8) != -2) {
            psVar21 = (short *)(*plVar26 + 8);
          }
          local_118 = *(undefined **)psVar21;
          iVar10 = FUN_0277d6c4(&local_118);
          if (iVar10 == 0x1c2b) {
LAB_02f9b524:
            lVar23 = plVar26[-1];
            uVar19 = (uint)uVar11;
            plVar26[-1] = *(long *)(lVar15 + uVar11 * 8);
            *(long *)(lVar15 + uVar11 * 8) = lVar23;
          }
          else {
            psVar21 = (short *)puVar14;
            if (*(short *)(lVar23 + 8) != -2) {
              psVar21 = (short *)(lVar23 + 8);
            }
            local_118 = *(undefined **)psVar21;
            iVar10 = FUN_0277d6c4(&local_118);
            if (iVar10 != 0x1c2b) goto LAB_02f9b524;
          }
          uVar11 = uVar11 - 1;
        } while ((long)uVar17 < (long)uVar11);
      } while (uVar19 != uVar20);
    }
  }
  return;
}

