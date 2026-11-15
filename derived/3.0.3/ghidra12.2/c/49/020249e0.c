
/* WARNING: Removing unreachable block (ram,0x02027b6c) */
/* WARNING: Removing unreachable block (ram,0x02024f40) */
/* WARNING: Removing unreachable block (ram,0x02024f50) */
/* WARNING: Removing unreachable block (ram,0x02027b7c) */
/* WARNING: Removing unreachable block (ram,0x02027b88) */

void FUN_020249e0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  char *pcVar10;
  byte bVar11;
  undefined ***pppuVar12;
  ulong *puVar13;
  undefined ***pppuVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined4 *puVar27;
  ushort uVar28;
  long lVar29;
  uint *puVar30;
  byte *pbVar31;
  undefined8 *puVar32;
  long *plVar33;
  byte bVar34;
  long lVar35;
  byte *pbVar36;
  int *piVar37;
  char *pcVar38;
  long *plVar39;
  undefined **ppuVar40;
  undefined *puVar41;
  undefined2 uVar42;
  undefined8 uVar43;
  uint *puVar44;
  char cVar45;
  undefined *puVar46;
  ushort *puVar47;
  float fVar48;
  undefined4 uVar49;
  undefined *local_8b0;
  byte *local_8a8;
  undefined8 local_89c;
  float local_894;
  undefined **local_890;
  undefined8 local_888;
  undefined1 local_880 [8];
  uint uStack_878;
  undefined7 local_874;
  undefined4 uStack_86d;
  undefined1 local_869;
  undefined1 local_85d;
  undefined1 local_7fd;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined1 local_7e8 [8];
  uint local_7e0;
  undefined4 local_7dc;
  undefined4 uStack_7d8;
  undefined8 local_7d4;
  undefined *local_7c8;
  ulong *local_7c0;
  int local_7b8;
  ulong local_7b4;
  char local_7ac [8];
  char local_7a4 [8];
  char local_79c [8];
  char local_794 [7];
  char cStack_78d;
  char acStack_78c [7];
  undefined1 local_785;
  undefined1 local_735;
  undefined4 local_730;
  undefined2 local_72c;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  float local_710;
  uint uStack_70c;
  uint local_708;
  undefined8 local_704;
  undefined8 local_6fc;
  undefined *local_6f0;
  undefined ***local_6e8;
  int local_6e0;
  char local_6dc;
  undefined5 uStack_6db;
  char acStack_6d6 [2];
  char local_6d4 [6];
  char cStack_6ce;
  char cStack_6cd;
  char acStack_6cc [6];
  char local_6c6 [2];
  undefined2 uStack_6c4;
  uint uStack_6c2;
  char local_6be;
  char cStack_6bd;
  undefined4 local_6bc;
  char cStack_6b8;
  char cStack_6b7;
  char cStack_6b6;
  char cStack_6b5;
  char local_6b4;
  uint local_6b3;
  char local_6af;
  char local_6ae;
  undefined1 local_6ad;
  undefined1 local_65d;
  undefined4 local_658;
  undefined2 local_654;
  undefined8 local_650;
  undefined **local_120;
  byte *local_118;
  int local_110;
  byte local_10c [7];
  undefined1 local_105;
  undefined1 local_fd;
  undefined **local_e8;
  byte *local_e0;
  undefined4 local_d8;
  byte local_d4 [7];
  undefined1 local_cd;
  undefined **local_c8;
  byte *local_c0;
  undefined4 local_b8;
  byte local_b4 [7];
  undefined1 local_ad;
  undefined8 local_a8;
  byte *local_a0;
  undefined4 local_98;
  byte local_94 [7];
  undefined1 local_8d;
  
  puVar46 = PTR_DAT_04bb2020;
  if (**(int **)PTR_DAT_04bb59b8 != 0) {
    return;
  }
  local_718._0_4_ = 1.584104e-36;
  local_718._4_4_ = 0.0;
  local_720 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  iVar16 = FUN_0273ea30(&local_720);
  puVar47 = (ushort *)PTR_DAT_04bb6298;
  plVar39 = (long *)PTR_DAT_04bb27d0;
  uVar28 = *(ushort *)PTR_DAT_04bb6298;
  uVar17 = (uint)(short)uVar28;
  if (iVar16 == 0) {
    if (uVar28 != 0xffff) {
      puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar17 * 8);
      if (0xff < uVar28) {
        puVar44 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar44 >> 0xe & 1) != 0) {
        uStack_70c = 0x3f800000;
        local_708 = 0;
        local_6e8 = (undefined ***)&local_6dc;
        local_6f0 = PTR_DAT_04bb2d88 + 0x10;
        local_704 = 0;
        local_6fc = 0;
        uVar22 = *(undefined8 *)(*(long *)PTR_DAT_04bb5c90 + 0x40);
        local_710 = *(float *)(*(long *)PTR_DAT_04bb5c90 + 0x48);
        local_6e0 = 0x80;
        local_65d = 0;
        local_650 = 0;
        local_654 = 0;
        cStack_6ce = '\0';
        local_658 = 7;
        local_718._0_4_ = (float)uVar22;
        local_718._4_4_ = (float)((ulong)uVar22 >> 0x20);
        local_720._0_4_ = 0;
        local_720._4_4_ = 10;
        local_6dc = s_rco_AIC_Normal_0405d310[0];
        uStack_6db = s_rco_AIC_Normal_0405d310._1_5_;
        acStack_6d6[0] = s_rco_AIC_Normal_0405d310[6];
        acStack_6d6[1] = s_rco_AIC_Normal_0405d310[7];
        local_6d4[0] = s_rco_AIC_Normal_0405d310[8];
        local_6d4[1] = s_rco_AIC_Normal_0405d310[9];
        local_6d4[2] = s_rco_AIC_Normal_0405d310[10];
        local_6d4[3] = s_rco_AIC_Normal_0405d310[0xb];
        local_6d4[4] = s_rco_AIC_Normal_0405d310[0xc];
        local_6d4[5] = s_rco_AIC_Normal_0405d310[0xd];
        FUN_0203e0f0(param_1 + 0x11058,&local_720);
      }
    }
  }
  else if (uVar28 != 0xffff) {
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar17 * 8);
    if (0xff < uVar17) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar44 >> 3 & 1) != 0) {
      lVar35 = *(long *)PTR_DAT_04bb27d0;
      if ((lVar35 != 0) && (*(long *)(lVar35 + 0x28) != 0)) {
        if (*(int *)(lVar35 + 0x80) == 1) goto LAB_02024ee8;
      }
      if ((puVar44[1] & 1) == 0) {
        local_718._0_4_ = 1.5917504e-36;
        local_718._4_4_ = 0.0;
        local_720 = (undefined **)(puVar46 + 0x10);
        iVar16 = FUN_0273ea30(&local_720);
        puVar41 = PTR_DAT_04bb32f0;
        if (iVar16 != 0xffff) {
          local_718._0_4_ = 1.5917504e-36;
          local_718._4_4_ = 0.0;
          lVar35 = *(long *)PTR_DAT_04bb32f0;
          local_720 = (undefined **)(puVar46 + 0x10);
          uVar17 = FUN_0273ea30(&local_720);
          uVar28 = *(ushort *)(lVar35 + 0x420);
          uVar17 = (uVar17 & 0xffff) - (uint)uVar28;
          if (((*(uint *)(lVar35 + 0x400) <= uVar17) ||
              (puVar44 = *(uint **)(*(long *)(lVar35 + 0x408) + (long)(int)uVar17 * 8),
              puVar44 == (uint *)0x0)) &&
             (puVar44 = (uint *)0x0, -(uint)uVar28 < *(uint *)(lVar35 + 0x400))) {
            puVar44 = *(uint **)(*(long *)(lVar35 + 0x408) + (ulong)uVar28 * -8);
          }
          uVar22 = FUN_01d69460(*(undefined8 *)(*plVar39 + 0x10),*puVar47);
          puVar9 = PTR_DAT_04bb3250;
          if (puVar44 != (uint *)0x0) {
            uVar43 = *(undefined8 *)puVar41;
            uVar17 = *puVar44;
            if (uVar17 != 0) {
              cVar45 = *PTR_DAT_04bb3248;
              do {
                if (cVar45 == '\0') {
                  cVar45 = '\x01';
                  *PTR_DAT_04bb3248 = 1;
                  memset(puVar9,0xff,0x288);
                  uVar17 = *puVar44;
                }
                else {
                  uVar19 = *(uint *)(puVar9 + 0x148);
                  if (-1 < (int)uVar19) {
                    lVar35 = (ulong)uVar19 + (long)puVar44;
                    goto LAB_02024c8c;
                  }
                  if (uVar19 != 0xffffffff) break;
                }
                puVar30 = (uint *)(ulong)uVar17;
                lVar35 = 0;
                if ((puVar30 == (uint *)0x0) || (puVar44 == puVar30)) goto LAB_02024c8c;
                lVar35 = 0xc;
                if (*(char *)((long)puVar44 + (10 - (long)puVar30)) != '\0') {
                  lVar35 = 0x1c;
                }
                lVar25 = (long)puVar44 + (lVar35 - (long)puVar30);
                lVar35 = 0;
                if (lVar25 == 0) goto LAB_02024c8c;
                uVar23 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar30));
                *(undefined4 *)(puVar9 + 0x148) = 0xfffffffe;
                if (uVar23 == 0) break;
                piVar37 = (int *)(lVar25 + 4);
                while (piVar37[-1] != 0x443c0fb7) {
                  piVar37 = piVar37 + 2;
                  uVar23 = uVar23 - 1;
                  if (uVar23 == 0) goto LAB_02024c88;
                }
                iVar16 = 0;
                if (*piVar37 != -1) {
                  iVar16 = *piVar37;
                }
                *(int *)(puVar9 + 0x148) = iVar16;
                uVar17 = *puVar44;
                if (uVar17 == 0) break;
              } while( true );
            }
LAB_02024c88:
            lVar35 = 0;
LAB_02024c8c:
            puVar46 = PTR_DAT_04bb2020;
            lVar25 = *(long *)PTR_PTR_04bb3260;
            if (lVar35 != 0) {
              lVar25 = lVar35;
            }
            ppuVar40 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            local_718._0_4_ = (float)lVar25;
            local_718._4_4_ = (float)((ulong)lVar25 >> 0x20);
            local_720 = ppuVar40;
            uVar23 = FUN_00884390(uVar43,&local_720,uVar22);
            plVar39 = (long *)PTR_DAT_04bb27d0;
            puVar47 = (ushort *)PTR_DAT_04bb6298;
            if ((uVar23 & 1) != 0) {
              local_708 = 0;
              local_710 = 0.0;
              uStack_70c = 0x3f800000;
              local_720._0_4_ = 0;
              local_720._4_4_ = 10;
              local_718._0_4_ = 0.0;
              local_718._4_4_ = 0.0;
              local_6e0 = 0x80;
              local_6f0 = PTR_DAT_04bb2d88 + 0x10;
              local_6e8 = (undefined ***)&local_6dc;
              local_65d = 0;
              local_6dc = '\0';
              iVar16 = 0;
              ppuVar1 = (undefined **)(PTR_DAT_04bb35a0 + 0x10);
              ppuVar2 = (undefined **)(PTR_DAT_04bb2ab0 + 0x10);
              local_658 = 7;
              puVar41 = PTR_DAT_04bb5cb0 + 0x10;
              puVar3 = PTR_DAT_04bb5bb8 + 0x10;
              puVar4 = PTR_DAT_04bb5ba8 + 0x10;
              local_650 = 0;
              puVar5 = PTR_DAT_04bbc1a0 + 0x10;
              puVar6 = PTR_DAT_04bb2010 + 0x10;
              local_654 = 0;
              ppuVar7 = (undefined **)(PTR_DAT_04bb6a30 + 0x10);
              ppuVar8 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
              local_704 = 0;
              local_6fc = 0;
              do {
                local_89c = (undefined **)0x0;
                local_894 = 0.0;
                uVar17 = *puVar44;
                if (uVar17 != 0) {
                  cVar45 = *PTR_DAT_04bb3248;
                  do {
                    if (cVar45 == '\0') {
                      cVar45 = '\x01';
                      *PTR_DAT_04bb3248 = 1;
                      memset(puVar9,0xff,0x288);
                      uVar17 = *puVar44;
                    }
                    else {
                      uVar19 = *(uint *)(puVar9 + 0x14c);
                      if (-1 < (int)uVar19) {
                        lVar35 = (ulong)uVar19 + (long)puVar44;
                        goto LAB_02025198;
                      }
                      if (uVar19 != 0xffffffff) break;
                    }
                    puVar30 = (uint *)(ulong)uVar17;
                    lVar35 = 0;
                    if ((puVar30 == (uint *)0x0) || (lVar35 = 0, puVar44 == puVar30))
                    goto LAB_02025198;
                    lVar35 = 0xc;
                    if (*(char *)((long)puVar44 + (10 - (long)puVar30)) != '\0') {
                      lVar35 = 0x1c;
                    }
                    lVar25 = (long)puVar44 + (lVar35 - (long)puVar30);
                    lVar35 = 0;
                    if (lVar25 == 0) goto LAB_02025198;
                    uVar23 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar30));
                    *(undefined4 *)(puVar9 + 0x14c) = 0xfffffffe;
                    if (uVar23 == 0) break;
                    piVar37 = (int *)(lVar25 + 4);
                    while (piVar37[-1] != -0x44991235) {
                      piVar37 = piVar37 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) goto LAB_02025194;
                    }
                    iVar20 = 0;
                    if (*piVar37 != -1) {
                      iVar20 = *piVar37;
                    }
                    *(int *)(puVar9 + 0x14c) = iVar20;
                    uVar17 = *puVar44;
                    if (uVar17 == 0) break;
                  } while( true );
                }
LAB_02025194:
                lVar35 = 0;
LAB_02025198:
                lVar25 = *(long *)PTR_PTR_04bb3270;
                if (lVar35 != 0) {
                  lVar25 = lVar35;
                }
                FUN_0074fda4(&local_7f8,"E_%s_NPC_%d",lVar25,iVar16);
                (*(code *)local_7f8[3])(&local_7f8);
                uVar18 = FUN_006bd550(local_7f0,0);
                uVar23 = FUN_0118b0a0(&local_89c,uVar18);
                if ((uVar23 & 1) != 0) {
                  FUN_0118b220(&local_a8,&local_7f8);
                  local_7fd = 0;
                  local_880._0_4_ = 0x80;
                  local_880._4_4_ = local_880._4_4_ & 0xffffff00;
                  local_890 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
                  local_118 = &DAT_04076b75;
                  local_888 = (undefined ***)(local_880 + 4);
                  local_120 = ppuVar40;
                  (*(code *)local_a8[3])(&local_a8);
                  (*(code *)local_a8[3])(&local_a8);
                  pbVar31 = local_a0;
                  (*(code *)local_120[3])(&local_120);
                  if (pbVar31 == local_118) {
LAB_0202546c:
                    local_fd = 0;
                    local_110 = 0x10;
                    local_120 = ppuVar1;
                    local_118 = local_10c;
                    (*(code *)local_a8[3])(&local_a8);
                    pbVar31 = local_a0;
                    if (local_10c != local_a0) {
                      (*(code *)local_a8[3])(&local_a8);
                      lVar35 = 0;
                      do {
                        if (local_a0[lVar35] == 0) goto LAB_020254fc;
                        if (local_a0[lVar35 + 1] == 0) {
                          lVar35 = lVar35 + 1;
                          goto LAB_020254fc;
                        }
                        if (local_a0[lVar35 + 2] == 0) {
                          lVar35 = lVar35 + 2;
                          goto LAB_020254fc;
                        }
                        lVar35 = lVar35 + 3;
                      } while (lVar35 != 0x80001);
                      lVar35 = 0;
LAB_020254fc:
                      iVar20 = (int)lVar35;
                      if (local_110 <= (int)lVar35) {
                        iVar20 = local_110 + -1;
                      }
                      memcpy(local_10c,pbVar31,(long)iVar20);
                      local_10c[iVar20] = 0;
                    }
                    local_118[(long)local_110 + -1] = 0;
                    bVar34 = *local_118;
                    if (bVar34 != 0) {
                      bVar11 = bVar34 - 0x20;
                      if (0x19 < bVar34 - 0x61) {
                        bVar11 = bVar34;
                      }
                      *local_118 = bVar11;
                    }
                    local_120 = ppuVar2;
                    (*(code *)local_a8[3])(&local_a8);
                    pbVar36 = local_a0;
                    (*(code *)local_120[3])(&local_120);
                    pbVar31 = local_118;
                    uVar17 = *puVar44;
                    if (uVar17 != 0) {
                      cVar45 = *PTR_DAT_04bb3248;
                      do {
                        if (cVar45 == '\0') {
                          cVar45 = '\x01';
                          *PTR_DAT_04bb3248 = 1;
                          memset(puVar9,0xff,0x288);
                          uVar17 = *puVar44;
                        }
                        else {
                          uVar19 = *(uint *)(puVar9 + 0x14c);
                          if (-1 < (int)uVar19) {
                            lVar35 = (ulong)uVar19 + (long)puVar44;
                            goto LAB_02025658;
                          }
                          if (uVar19 != 0xffffffff) break;
                        }
                        puVar30 = (uint *)(ulong)uVar17;
                        lVar35 = 0;
                        if ((puVar30 == (uint *)0x0) || (puVar44 == puVar30)) goto LAB_02025658;
                        lVar35 = 0xc;
                        if (*(char *)((long)puVar44 + (10 - (long)puVar30)) != '\0') {
                          lVar35 = 0x1c;
                        }
                        lVar25 = (long)puVar44 + (lVar35 - (long)puVar30);
                        lVar35 = 0;
                        if (lVar25 == 0) goto LAB_02025658;
                        uVar23 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar30));
                        *(undefined4 *)(puVar9 + 0x14c) = 0xfffffffe;
                        if (uVar23 == 0) break;
                        piVar37 = (int *)(lVar25 + 4);
                        while (piVar37[-1] != -0x44991235) {
                          piVar37 = piVar37 + 2;
                          uVar23 = uVar23 - 1;
                          if (uVar23 == 0) goto LAB_02025654;
                        }
                        iVar20 = 0;
                        if (*piVar37 != -1) {
                          iVar20 = *piVar37;
                        }
                        *(int *)(puVar9 + 0x14c) = iVar20;
                        uVar17 = *puVar44;
                        if (uVar17 == 0) break;
                      } while( true );
                    }
LAB_02025654:
                    lVar35 = 0;
LAB_02025658:
                    lVar25 = *(long *)PTR_PTR_04bb3270;
                    if (lVar35 != 0) {
                      lVar25 = lVar35;
                    }
                    FUN_038d1270(&local_890,"%s/AIC:Special/AIF:AI_NPC_%s_%s",pbVar36,pbVar31,lVar25
                                );
                    FUN_029342d0();
                    puVar46 = PTR_DAT_04bb2020;
                    local_c8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                    local_c0 = &DAT_04066e12;
                    (*(code *)local_a8[3])(&local_a8);
                    (*(code *)local_a8[3])(&local_a8);
                    pbVar31 = local_a0;
                    (*(code *)local_c8[3])(&local_c8);
                    puVar47 = (ushort *)PTR_DAT_04bb6298;
                    if (pbVar31 == local_c0) {
LAB_02025754:
                      uVar17 = *puVar44;
                      if (uVar17 != 0) {
                        cVar45 = *PTR_DAT_04bb3248;
                        do {
                          if (cVar45 == '\0') {
                            cVar45 = '\x01';
                            *PTR_DAT_04bb3248 = 1;
                            memset(puVar9,0xff,0x288);
                            uVar17 = *puVar44;
                          }
                          else {
                            uVar19 = *(uint *)(puVar9 + 0x14c);
                            if (-1 < (int)uVar19) {
                              pcVar38 = (char *)((ulong)uVar19 + (long)puVar44);
                              goto LAB_02025828;
                            }
                            if (uVar19 != 0xffffffff) break;
                          }
                          puVar30 = (uint *)(ulong)uVar17;
                          pcVar38 = (char *)0x0;
                          if ((puVar30 == (uint *)0x0) || (puVar44 == puVar30)) goto LAB_02025828;
                          lVar35 = 0xc;
                          if (*(char *)((long)puVar44 + (10 - (long)puVar30)) != '\0') {
                            lVar35 = 0x1c;
                          }
                          lVar35 = (long)puVar44 + (lVar35 - (long)puVar30);
                          pcVar38 = (char *)0x0;
                          if (lVar35 == 0) goto LAB_02025828;
                          uVar23 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar30));
                          *(undefined4 *)(puVar9 + 0x14c) = 0xfffffffe;
                          if (uVar23 == 0) break;
                          piVar37 = (int *)(lVar35 + 4);
                          while (piVar37[-1] != -0x44991235) {
                            piVar37 = piVar37 + 2;
                            uVar23 = uVar23 - 1;
                            if (uVar23 == 0) goto LAB_02025824;
                          }
                          iVar20 = 0;
                          if (*piVar37 != -1) {
                            iVar20 = *piVar37;
                          }
                          *(int *)(puVar9 + 0x14c) = iVar20;
                          uVar17 = *puVar44;
                          if (uVar17 == 0) break;
                        } while( true );
                      }
LAB_02025824:
                      pcVar38 = (char *)0x0;
LAB_02025828:
                      fVar48 = local_894;
                      pcVar10 = *(char **)PTR_PTR_04bb3270;
                      if (pcVar38 != (char *)0x0) {
                        pcVar10 = pcVar38;
                      }
                      if ((pcVar10 == "Countdown") ||
                         ((((((*pcVar10 == 'C' && (pcVar10[1] == 'o')) && (pcVar10[2] == 'u')) &&
                            (((pcVar10[3] == 'n' && (pcVar10[4] == 't')) &&
                             ((pcVar10[5] == 'd' && ((pcVar10[6] == 'o' && (pcVar10[7] == 'w')))))))
                            ) && (pcVar10[8] == 'n')) && (pcVar10[9] == '\0')))) {
                        uVar18 = (undefined4)local_89c;
                        uVar49 = local_89c._4_4_;
                        lVar35 = *(long *)(param_1 + 0x2b8);
                        if (lVar35 == 0) {
                          lVar25 = 1;
                        }
                        else {
                          lVar29 = nn::os::GetTlsValue(*(undefined4 *)
                                                        (*(long *)PTR_DAT_04bb3350 + 0x68));
                          lVar25 = *(long *)(lVar29 + 0xa8);
                          *(long *)(lVar29 + 0xa8) = lVar35;
                        }
                        if (*(int *)(param_1 + 0x2c0) == 0) {
                          lVar35 = *(long *)PTR_DAT_04bb2698;
                          if (lVar35 == 0) {
                            plVar39 = malloc(0x1f0);
                          }
                          else {
                            lVar29 = nn::os::GetTlsValue(*(undefined4 *)
                                                          (*(long *)PTR_DAT_04bb3350 + 0x68));
                            plVar39 = (long *)(lVar35 + 8);
                            if (lVar29 != 0) {
                              plVar39 = (long *)(lVar29 + 0xa8);
                            }
                            plVar39 = (long *)*plVar39;
                            if (plVar39 == (long *)0x0) {
                              plVar39 = (long *)0x0;
                            }
                            else {
                              plVar39 = (long *)(**(code **)(*plVar39 + 0x30))(plVar39,0x1f0,8);
                            }
                          }
                          *(undefined8 *)((long)plVar39 + 0x1d) = 0;
                          plVar39[2] = 0;
                          plVar39[3] = 0;
                          plVar39[0x10] = 0;
                          plVar39[0x11] = 0;
                          plVar39[0x16] = 0;
                          plVar39[0x17] = 0;
                          *plVar39 = (long)puVar41;
                          plVar39[1] = 0;
                          plVar39[10] = (long)puVar3;
                          plVar39[0x1c] = 0;
                          plVar39[0x1d] = 0;
                          plVar39[0x22] = 0;
                          plVar39[0x23] = 0;
                          plVar39[0x28] = 0;
                          plVar39[0x29] = 0;
                          plVar39[0x2e] = 0;
                          plVar39[0x2f] = 0;
                          plVar39[0x34] = 0;
                          plVar39[0x35] = 0;
                          plVar39[0xc] = (long)puVar4;
                          plVar39[0xd] = 0;
                          plVar39[0xe] = 0;
                          plVar39[0xf] = (long)puVar4;
                          plVar39[0x12] = (long)puVar4;
                          plVar39[0x13] = 0;
                          plVar39[0x14] = 0;
                          plVar39[0x15] = (long)puVar4;
                          plVar39[0x18] = (long)puVar4;
                          plVar39[0x19] = 0;
                          plVar39[0x1a] = 0;
                          plVar39[0x1b] = (long)puVar4;
                          plVar39[0x1e] = (long)puVar4;
                          plVar39[0x1f] = 0;
                          plVar39[0x20] = 0;
                          plVar39[0x21] = (long)puVar4;
                          plVar39[0x24] = (long)puVar4;
                          plVar39[0x25] = 0;
                          plVar39[0x26] = 0;
                          plVar39[0x27] = (long)puVar4;
                          plVar39[0x2a] = (long)puVar4;
                          plVar39[0x2b] = 0;
                          plVar39[0x2c] = 0;
                          plVar39[0x2d] = (long)puVar4;
                          plVar39[0x30] = (long)puVar4;
                          plVar39[0x31] = 0;
                          plVar39[0x32] = 0;
                          plVar39[0x33] = (long)puVar4;
                          *(undefined4 *)(plVar39 + 0x36) = 0;
                          *(undefined1 *)(plVar39 + 0x37) = 0;
                          plVar39[0x3a] = 0;
                          *(undefined4 *)(plVar39 + 0x3d) = 0;
                          *(undefined4 *)(plVar39 + 8) = uVar18;
                          *(undefined4 *)((long)plVar39 + 0x44) = uVar49;
                          *(float *)(plVar39 + 9) = fVar48 + -15.0;
                          *(undefined4 *)(plVar39 + 0xb) = 0;
                          plVar39[0x38] = (long)puVar5;
                          plVar39[0x39] = (long)puVar6;
                          plVar39[0x3b] = (long)puVar6;
                          plVar39[0x3c] = 0;
                          plVar39[5] = 0x41a0000041200000;
                          plVar39[6] = 0x41a00000;
                          plVar39[7] = 0;
                          *(undefined4 *)((long)plVar39 + 0x1c) = 0x800;
                          *(undefined1 *)((long)plVar39 + 0x1ec) = 1;
                          *(undefined4 *)((long)plVar39 + 0x4c) = 0x200000;
                          if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
                            *(long **)(*(long *)(param_1 + 0x2c8) +
                                      (long)*(int *)(param_1 + 0x2c0) * 8) = plVar39;
                            *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
                          }
                          lVar35 = *(long *)PTR_DAT_04bb27c8;
                          if ((lVar35 != 0) && (plVar39[2] == 0 && plVar39[1] == 0)) {
                            nn::os::LockMutex((MutexType *)(lVar35 + 0x50));
                            plVar33 = (long *)(lVar35 + 0x70);
                            lVar29 = *plVar33;
                            plVar39 = (long *)((long)*(int *)(lVar35 + 0x84) + (long)plVar39);
                            *plVar33 = (long)plVar39;
                            *plVar39 = lVar29;
                            plVar39[1] = (long)plVar33;
                            if (lVar29 != 0) {
                              *(long **)(lVar29 + 8) = plVar39;
                            }
                            *(int *)(lVar35 + 0x80) = *(int *)(lVar35 + 0x80) + 1;
                            nn::os::UnlockMutex((MutexType *)(lVar35 + 0x50));
                          }
                        }
                        if (lVar25 != 1) {
                          lVar35 = nn::os::GetTlsValue(*(undefined4 *)
                                                        (*(long *)PTR_DAT_04bb3350 + 0x68));
                          *(long *)(lVar35 + 0xa8) = lVar25;
                        }
                        puVar47 = (ushort *)PTR_DAT_04bb6298;
                        puVar46 = PTR_DAT_04bb2020;
                        lVar35 = *(long *)PTR_DAT_04bb39b0;
                        if (lVar35 == 0) {
                          bVar34 = *PTR_DAT_04bb32e0;
LAB_02025b78:
                          if (bVar34 < 8) goto LAB_02025b80;
LAB_02025b88:
                          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02025e68:
                            bVar11 = *PTR_DAT_04bb5038;
                            bVar34 = bVar11;
                            if (7 < bVar11) {
                              bVar34 = 0xff;
                            }
                            local_e8 = (undefined **)CONCAT71(local_e8._1_7_,bVar34);
                            if (7 < bVar11) goto LAB_020258f8;
                          }
                          else {
                            lVar35 = **(long **)PTR_DAT_04bb27d0;
                            bVar34 = *(byte *)(lVar35 + 0x473);
                            pbVar31 = PTR_DAT_04bb5038;
                            if ((long)(char)bVar34 != 0xffffffffffffffff) {
                              puVar30 = (uint *)(lVar35 + 0x48) +
                                        ((long)(char)bVar34 & 0xffffffffU) * 0x20;
                              if (7 < bVar34) {
                                puVar30 = (uint *)(lVar35 + 0x48);
                              }
                              if ((*puVar30 & 8) != 0) {
                                pbVar31 = (byte *)(lVar35 + 0x471);
                              }
                            }
                            bVar34 = *pbVar31;
                            bVar15 = 7 < bVar34;
                            if (bVar15) {
                              bVar34 = 0xff;
                            }
                            local_e8 = (undefined **)CONCAT71(local_e8._1_7_,bVar34);
                            if (bVar15) goto LAB_02025e68;
                          }
                        }
                        else {
                          pbVar31 = PTR_DAT_04bb32e0;
                          if (*(int *)(lVar35 + 0x15c) != 0) {
                            pbVar31 = (byte *)(lVar35 + 0x158);
                          }
                          bVar34 = *pbVar31;
                          if (7 < bVar34) {
                            if ((*(int *)(lVar35 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0))
                            {
                              bVar34 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                              goto LAB_02025b78;
                            }
                            goto LAB_02025b88;
                          }
LAB_02025b80:
                          local_e8 = (undefined **)CONCAT71(local_e8._1_7_,bVar34);
                        }
                        uVar23 = FUN_0253dfb0(&local_e8);
                        if ((uVar23 & 1) != 0) {
                          local_c8 = (undefined **)(puVar46 + 0x10);
                          local_c0 = (byte *)0x40820ef;
                          iVar20 = FUN_0274bce0(&local_e8,&local_c8);
                          if (iVar20 != 0) goto LAB_020250ac;
                        }
                      }
                    }
                    else {
                      uVar23 = 0;
                      bVar15 = true;
                      do {
                        if (local_a0[uVar23] != local_c0[uVar23]) break;
                        if (local_a0[uVar23] == 0) {
                          if (bVar15) goto LAB_02025754;
                          break;
                        }
                        if (local_a0[uVar23 + 1] != local_c0[uVar23 + 1]) break;
                        if (local_a0[uVar23 + 1] == 0) goto LAB_02025754;
                        if (local_a0[uVar23 + 2] != local_c0[uVar23 + 2]) break;
                        if (local_a0[uVar23 + 2] == 0) goto LAB_02025754;
                        bVar15 = uVar23 < 0x7fffe;
                        uVar23 = uVar23 + 3;
                      } while (uVar23 != 0x80001);
                    }
LAB_020258f8:
                    local_c8 = (undefined **)(puVar46 + 0x10);
                    local_c0 = &DAT_04076b75;
                    (*(code *)local_a8[3])(&local_a8);
                    (*(code *)local_a8[3])(&local_a8);
                    pbVar31 = local_a0;
                    (*(code *)local_c8[3])(&local_c8);
                    if (pbVar31 != local_c0) {
                      uVar23 = 0;
                      bVar15 = true;
                      do {
                        if (local_a0[uVar23] != local_c0[uVar23]) break;
                        if (local_a0[uVar23] == 0) {
                          if (bVar15) goto LAB_02025c5c;
                          break;
                        }
                        if (local_a0[uVar23 + 1] != local_c0[uVar23 + 1]) break;
                        if (local_a0[uVar23 + 1] == 0) goto LAB_02025c5c;
                        if (local_a0[uVar23 + 2] != local_c0[uVar23 + 2]) break;
                        if (local_a0[uVar23 + 2] == 0) goto LAB_02025c5c;
                        bVar15 = uVar23 < 0x7fffe;
                        uVar23 = uVar23 + 3;
                      } while (uVar23 != 0x80001);
                      local_8b0 = puVar46 + 0x10;
                      local_8a8 = &DAT_04066e12;
                      (*(code *)local_a8[3])(&local_a8);
                      (*(code *)local_a8[3])(&local_a8);
                      pbVar31 = local_a0;
                      (**(code **)(local_8b0 + 0x18))(&local_8b0);
                      if (pbVar31 != local_8a8) {
                        uVar23 = 0;
                        bVar15 = true;
                        do {
                          if (local_a0[uVar23] != local_8a8[uVar23]) break;
                          if (local_a0[uVar23] == 0) {
                            if (bVar15) goto LAB_02025c5c;
                            break;
                          }
                          if (local_a0[uVar23 + 1] != local_8a8[uVar23 + 1]) break;
                          if (local_a0[uVar23 + 1] == 0) goto LAB_02025c5c;
                          if (local_a0[uVar23 + 2] != local_8a8[uVar23 + 2]) break;
                          if (local_a0[uVar23 + 2] == 0) goto LAB_02025c5c;
                          bVar15 = uVar23 < 0x7fffe;
                          uVar23 = uVar23 + 3;
                        } while (uVar23 != 0x80001);
                        goto LAB_02025cb4;
                      }
                    }
LAB_02025c5c:
                    uVar23 = FUN_029342d0();
                    if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x43080996) &&
                       (((*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46 ||
                         (*(long *)PTR_DAT_04bb6270 == 0)) ||
                        ((*(byte *)(*(long *)PTR_DAT_04bb6270 + 0x780) & 9) == 0)))) {
                      uVar23 = 0;
                    }
                    if ((uVar23 & 1) != 0) goto LAB_020250ac;
                  }
                  else {
                    uVar23 = 0;
                    bVar15 = true;
                    do {
                      if (local_a0[uVar23] != local_118[uVar23]) break;
                      if (local_a0[uVar23] == 0) {
                        if (bVar15) goto LAB_0202546c;
                        break;
                      }
                      if (local_a0[uVar23 + 1] != local_118[uVar23 + 1]) break;
                      if (local_a0[uVar23 + 1] == 0) goto LAB_0202546c;
                      if (local_a0[uVar23 + 2] != local_118[uVar23 + 2]) break;
                      if (local_a0[uVar23 + 2] == 0) goto LAB_0202546c;
                      bVar15 = uVar23 < 0x7fffe;
                      uVar23 = uVar23 + 3;
                    } while (uVar23 != 0x80001);
                    local_c8 = (undefined **)(puVar46 + 0x10);
                    local_c0 = &DAT_04066e12;
                    (*(code *)local_a8[3])(&local_a8);
                    (*(code *)local_a8[3])(&local_a8);
                    pbVar31 = local_a0;
                    (*(code *)local_c8[3])(&local_c8);
                    if (pbVar31 == local_c0) goto LAB_0202546c;
                    uVar23 = 0;
                    bVar15 = true;
                    do {
                      if (local_a0[uVar23] != local_c0[uVar23]) break;
                      if (local_a0[uVar23] == 0) {
                        if (bVar15) goto LAB_0202546c;
                        break;
                      }
                      if (local_a0[uVar23 + 1] != local_c0[uVar23 + 1]) break;
                      if (local_a0[uVar23 + 1] == 0) goto LAB_0202546c;
                      if (local_a0[uVar23 + 2] != local_c0[uVar23 + 2]) break;
                      if (local_a0[uVar23 + 2] == 0) goto LAB_0202546c;
                      bVar15 = uVar23 < 0x7fffe;
                      uVar23 = uVar23 + 3;
                    } while (uVar23 != 0x80001);
                    local_e8 = (undefined **)(puVar46 + 0x10);
                    local_e0 = &DAT_040b02b3;
                    (*(code *)local_a8[3])(&local_a8);
                    (*(code *)local_a8[3])(&local_a8);
                    pbVar31 = local_a0;
                    (*(code *)local_e8[3])(&local_e8);
                    if (pbVar31 == local_e0) goto LAB_0202546c;
                    if (*local_a0 == *local_e0) {
                      if (*local_a0 != 0) {
                        lVar35 = 0x7fffe;
                        pbVar31 = local_e0;
                        pbVar36 = local_a0;
                        do {
                          if (pbVar36[1] != pbVar31[1]) goto LAB_02025bd8;
                          if (pbVar36[1] == 0) break;
                          if (pbVar36[2] != pbVar31[2]) goto LAB_02025bd8;
                          if (pbVar36[2] == 0) break;
                          if ((lVar35 == 0) || (bVar34 = pbVar36[3], bVar34 != pbVar31[3]))
                          goto LAB_02025bd8;
                          lVar35 = lVar35 + -3;
                          pbVar31 = pbVar31 + 3;
                          pbVar36 = pbVar36 + 3;
                        } while (bVar34 != 0);
                      }
                      goto LAB_0202546c;
                    }
LAB_02025bd8:
                    local_105 = 0;
                    local_110 = 8;
                    local_120 = ppuVar7;
                    local_118 = local_10c;
                    (*(code *)local_a8[3])(&local_a8);
                    pbVar31 = local_a0;
                    if (local_10c != local_a0) {
                      (*(code *)local_a8[3])(&local_a8);
                      lVar35 = 0;
                      do {
                        if (local_a0[lVar35] == 0) goto LAB_02026030;
                        if (local_a0[lVar35 + 1] == 0) {
                          lVar35 = lVar35 + 1;
                          goto LAB_02026030;
                        }
                        if (local_a0[lVar35 + 2] == 0) {
                          lVar35 = lVar35 + 2;
                          goto LAB_02026030;
                        }
                        lVar35 = lVar35 + 3;
                      } while (lVar35 != 0x80001);
                      lVar35 = 0;
LAB_02026030:
                      iVar20 = (int)lVar35;
                      if (local_110 <= (int)lVar35) {
                        iVar20 = local_110 + -1;
                      }
                      memcpy(local_10c,pbVar31,(long)iVar20);
                      local_10c[iVar20] = 0;
                    }
                    local_118[(long)local_110 + -1] = 0;
                    bVar34 = *local_118;
                    if (bVar34 != 0) {
                      bVar11 = bVar34 - 0x20;
                      if (0x19 < bVar34 - 0x61) {
                        bVar11 = bVar34;
                      }
                      *local_118 = bVar11;
                    }
                    local_120 = ppuVar8;
                    (*(code *)local_a8[3])(&local_a8);
                    pbVar31 = local_a0;
                    (*(code *)local_120[3])(&local_120);
                    FUN_038d1270(&local_890,"%s/AIC:Special/AIF:AI_NPC_%s",pbVar31,local_118);
                    puVar46 = PTR_DAT_04bb2020;
                  }
LAB_02025cb4:
                  local_120 = (undefined **)(puVar46 + 0x10);
                  local_118 = &DAT_04096555;
                  (*(code *)local_a8[3])(&local_a8);
                  (*(code *)local_a8[3])(&local_a8);
                  pbVar31 = local_a0;
                  (*(code *)local_120[3])(&local_120);
                  if (pbVar31 == local_118) {
LAB_02025d78:
                    local_120 = (undefined **)(puVar46 + 0x10);
                    local_e8 = (undefined **)((ulong)local_e8 & 0xffffffff00000000);
                    local_118 = &DAT_04096555;
                    FUN_0203e280(param_1,&local_120,&local_c8,&local_e8);
                    local_89c = local_c8;
                    local_894 = local_c0._0_4_;
                    local_708 = (uint)local_e8;
                  }
                  else {
                    uVar23 = 0;
                    bVar15 = true;
                    do {
                      if (local_a0[uVar23] != local_118[uVar23]) break;
                      if (local_a0[uVar23] == 0) {
                        if (bVar15) goto LAB_02025d78;
                        break;
                      }
                      if (local_a0[uVar23 + 1] != local_118[uVar23 + 1]) break;
                      if (local_a0[uVar23 + 1] == 0) goto LAB_02025d78;
                      if (local_a0[uVar23 + 2] != local_118[uVar23 + 2]) break;
                      if (local_a0[uVar23 + 2] == 0) goto LAB_02025d78;
                      bVar15 = uVar23 < 0x7fffe;
                      uVar23 = uVar23 + 3;
                    } while (uVar23 != 0x80001);
                  }
                  pppuVar14 = local_6e8;
                  local_718._0_4_ = SUB84(local_89c,0);
                  local_718._4_4_ = (float)((ulong)local_89c >> 0x20);
                  local_710 = local_894;
                  (*(code *)local_890[3])(&local_890);
                  pppuVar12 = local_888;
                  if (pppuVar14 != local_888) {
                    (*(code *)local_890[3])(&local_890);
                    lVar35 = 0;
                    do {
                      if (*(char *)((long)local_888 + lVar35) == '\0') goto LAB_02025068;
                      if (*(char *)((long)local_888 + lVar35 + 1) == '\0') {
                        lVar35 = lVar35 + 1;
                        goto LAB_02025068;
                      }
                      if (*(char *)((long)local_888 + lVar35 + 2) == '\0') {
                        lVar35 = lVar35 + 2;
                        goto LAB_02025068;
                      }
                      lVar35 = lVar35 + 3;
                    } while (lVar35 != 0x80001);
                    lVar35 = 0;
LAB_02025068:
                    iVar20 = (int)lVar35;
                    if (local_6e0 <= (int)lVar35) {
                      iVar20 = local_6e0 + -1;
                    }
                    memcpy(pppuVar14,pppuVar12,(long)iVar20);
                    *(char *)((long)pppuVar14 + (long)iVar20) = '\0';
                  }
                  FUN_0203e0f0(param_1 + 0x11058,&local_720);
                  puVar46 = PTR_DAT_04bb2020;
                  puVar47 = (ushort *)PTR_DAT_04bb6298;
                }
LAB_020250ac:
                iVar16 = iVar16 + 1;
              } while (iVar16 != 4);
              plVar39 = (long *)PTR_DAT_04bb27d0;
            }
          }
        }
      }
    }
  }
LAB_02024ee8:
  local_720 = (undefined **)(puVar46 + 0x10);
  local_718._0_4_ = 1.584104e-36;
  local_718._4_4_ = 0.0;
  iVar16 = FUN_0273ea30(&local_720);
  puVar41 = (undefined *)local_720;
  if (iVar16 != 0) {
    local_7f8 = (undefined **)CONCAT44(local_7f8._4_4_,1);
    puVar41 = (undefined *)CONCAT44(local_720._4_4_,1);
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      plVar33 = (long *)*plVar39;
      if (plVar33 == (long *)0x0) {
LAB_02024f90:
        bVar15 = true;
      }
      else {
        bVar34 = *(byte *)(*plVar33 + 0x473);
        if ((long)(char)bVar34 == 0xffffffffffffffff) goto LAB_02024f90;
        pbVar31 = (byte *)(*plVar33 + 0x48);
        uVar23 = (long)(char)bVar34 & 0xffffffff;
        pbVar36 = pbVar31 + uVar23 * 0x80;
        if (7 < bVar34) {
          pbVar36 = pbVar31;
        }
        if ((*pbVar36 >> 3 & 1) == 0) goto LAB_02024f90;
        lVar35 = plVar33[2] + 0x108 + uVar23 * 0xc;
        if (0xb < bVar34) {
          lVar35 = plVar33[2] + 0x108;
        }
        bVar15 = *(char *)(lVar35 + 10) != '\0';
      }
      uVar28 = *puVar47;
      puVar41 = (undefined *)CONCAT44(local_720._4_4_,1);
      if (uVar28 != 0xffff) {
        local_720._0_4_ = 3;
        puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar28 * 8);
        if (0xff < (uint)(int)(short)uVar28) {
          puVar44 = (uint *)PTR_DAT_04bc39f8;
        }
        puVar41 = (undefined *)CONCAT44(local_720._4_4_,3);
        if ((*puVar44 >> 3 & 1) != 0) {
          local_c8 = (undefined **)FUN_01d69460(plVar33[2]);
          puVar32 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
          if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
            lVar25 = (**(code **)(*(long *)*puVar32 + 0x38))();
            lVar35 = 0;
            if (lVar25 != 0) {
              lVar35 = lVar25 + 0x70;
            }
          }
          else if (puVar32 == (undefined8 *)0x0) {
            lVar35 = 0;
          }
          else {
            lVar35 = 0;
            if ((long *)puVar32[0x26] != (long *)0x0) {
              lVar35 = (**(code **)(*(long *)puVar32[0x26] + 0x38))();
            }
          }
          plVar33 = (long *)(lVar35 + 0x1bf240);
          if ((*(long **)(lVar35 + 0x1bf260) == (long *)0x0) ||
             (puVar32 = (undefined8 *)**(long **)(lVar35 + 0x1bf260), puVar32 == (undefined8 *)0x0))
          {
            uVar23 = 0;
          }
          else {
            uVar23 = (**(code **)*puVar32)();
            uVar23 = uVar23 & 0xffffffff;
          }
          uVar17 = FUN_028d6b0c(*(long *)(lVar35 + 0x1bf248) + *plVar33);
          if (uVar17 < 0xc) {
            puVar32 = *(undefined8 **)(PTR_DAT_04bbbac0 + (ulong)uVar17 * 8 + 0x38);
          }
          else {
            puVar32 = &DAT_0407ebb1;
          }
          local_718._0_4_ = SUB84(puVar32,0);
          local_718._4_4_ = (float)((ulong)puVar32 >> 0x20);
          local_720 = (undefined **)(puVar46 + 0x10);
          uVar26 = FUN_028d4a98(&local_c8,&local_720);
          switch(uVar17) {
          case 1:
            if ((uVar26 & 1) == 0) {
              if (bVar15) {
                local_718._0_4_ = 1.6800117e-36;
LAB_020262d8:
                local_720 = (undefined **)(puVar46 + 0x10);
                local_718._4_4_ = 0.0;
                FUN_022029d0(&local_720);
              }
            }
            else {
              local_718._0_4_ = 1.6800117e-36;
LAB_0202622c:
              uVar22 = 0;
LAB_02026240:
              local_718._4_4_ = 0.0;
              local_720 = (undefined **)(puVar46 + 0x10);
              FUN_020441a0(param_1,&local_720,uVar22);
            }
            break;
          case 2:
            if ((uVar26 & 1) != 0) {
              local_718._0_4_ = 1.6607074e-36;
              goto LAB_0202622c;
            }
            if (bVar15) {
              local_718._0_4_ = 1.6607074e-36;
              goto LAB_020262d8;
            }
            break;
          case 3:
            if ((uVar26 & 1) != 0) {
              local_718._0_4_ = 1.603546e-36;
              goto LAB_0202622c;
            }
            if (bVar15) {
              local_718._0_4_ = 1.603546e-36;
              goto LAB_020262d8;
            }
            break;
          case 5:
            if ((uVar26 & 1) != 0) {
              local_718._0_4_ = 1.6035941e-36;
LAB_02026208:
              uVar22 = 1;
              goto LAB_02026240;
            }
            if (bVar15) {
              local_718._0_4_ = 1.6035941e-36;
              goto LAB_020262d8;
            }
            break;
          case 6:
            if ((uVar26 & 1) != 0) {
              local_718._0_4_ = 1.6799127e-36;
              goto LAB_02026208;
            }
            if (bVar15) {
              local_718._0_4_ = 1.6799127e-36;
              goto LAB_020262d8;
            }
            break;
          case 7:
            if ((uVar26 & 1) != 0) {
              local_718._0_4_ = 1.6303525e-36;
              goto LAB_02026208;
            }
            if (bVar15) {
              local_718._0_4_ = 1.6303525e-36;
              goto LAB_020262d8;
            }
            break;
          case 8:
            if ((uVar26 & 1) != 0) {
              local_718._0_4_ = 1.584234e-36;
              goto LAB_0202622c;
            }
            if (bVar15) {
              local_718._0_4_ = 1.584234e-36;
              goto LAB_020262d8;
            }
            break;
          case 9:
            if ((uVar26 & 1) != 0) {
              local_718._0_4_ = 1.6340489e-36;
              goto LAB_02026208;
            }
            if (bVar15) {
              local_718._0_4_ = 1.6340489e-36;
              goto LAB_020262d8;
            }
            break;
          case 0xb:
            if ((uVar26 & 1) != 0) {
              local_718._0_4_ = 1.5918408e-36;
              goto LAB_0202622c;
            }
            if (bVar15) {
              local_718._0_4_ = 1.5918408e-36;
              goto LAB_020262d8;
            }
          }
          local_718._0_4_ = 1.6800124e-36;
          local_718._4_4_ = 0.0;
          local_720 = (undefined **)(puVar46 + 0x10);
          uVar26 = FUN_028d4a98(&local_c8,&local_720);
          uVar24 = FUN_028d4428(*(long *)(lVar35 + 0x1bf248) + *plVar33);
          if (((uVar26 & 1) == 0) || ((uVar24 & 1) == 0)) {
            if (bVar15) {
              local_720 = (undefined **)(puVar46 + 0x10);
              local_718._0_4_ = 1.6800124e-36;
              local_718._4_4_ = 0.0;
              FUN_022029d0(&local_720);
            }
          }
          else {
            local_720 = (undefined **)(puVar46 + 0x10);
            local_718._0_4_ = 1.6800124e-36;
            local_718._4_4_ = 0.0;
            FUN_020441a0(param_1,&local_720,0);
          }
          uVar26 = FUN_028d53e4(*(long *)(lVar35 + 0x1bf248) + *plVar33);
          if ((uVar26 & 1) == 0) {
            if (bVar15) {
              local_718._0_4_ = 1.5802292e-36;
              local_718._4_4_ = 0.0;
              local_720 = (undefined **)(puVar46 + 0x10);
              FUN_022029d0(&local_720);
            }
          }
          else {
            local_710 = 0.0;
            uStack_70c = 0x3f800000;
            local_708 = 0;
            local_720._0_4_ = 0;
            local_720._4_4_ = 10;
            local_6e8 = (undefined ***)&local_6dc;
            local_718._0_4_ = 0.0;
            local_718._4_4_ = 0.0;
            local_6e0 = 0x80;
            local_65d = 0;
            local_6dc = '\0';
            local_6f0 = PTR_DAT_04bb2d88 + 0x10;
            local_658 = 7;
            local_650 = 0;
            local_654 = 0;
            local_704 = 0;
            local_6fc = 0;
            puVar44 = (uint *)FUN_00882dc4(*(undefined8 *)PTR_DAT_04bb32f0);
            puVar46 = PTR_DAT_04bb3250;
            if (puVar44 != (uint *)0x0) {
              iVar16 = 0;
              do {
                local_a8 = (undefined **)0x0;
                local_a0 = (byte *)((ulong)local_a0 & 0xffffffff00000000);
                uVar17 = *puVar44;
                if (uVar17 != 0) {
                  cVar45 = *PTR_DAT_04bb3248;
                  do {
                    if (cVar45 == '\0') {
                      cVar45 = '\x01';
                      *PTR_DAT_04bb3248 = 1;
                      memset(puVar46,0xff,0x288);
                      uVar17 = *puVar44;
                    }
                    else {
                      uVar19 = *(uint *)(puVar46 + 0x14c);
                      if (-1 < (int)uVar19) {
                        lVar25 = (ulong)uVar19 + (long)puVar44;
                        goto LAB_02026558;
                      }
                      if (uVar19 != 0xffffffff) break;
                    }
                    puVar30 = (uint *)(ulong)uVar17;
                    lVar25 = 0;
                    if ((puVar30 == (uint *)0x0) || (lVar25 = 0, puVar44 == puVar30))
                    goto LAB_02026558;
                    lVar25 = 0xc;
                    if (*(char *)((long)puVar44 + (10 - (long)puVar30)) != '\0') {
                      lVar25 = 0x1c;
                    }
                    lVar29 = (long)puVar44 + (lVar25 - (long)puVar30);
                    lVar25 = 0;
                    if (lVar29 == 0) goto LAB_02026558;
                    uVar26 = (ulong)*(ushort *)((long)puVar44 + (8 - (long)puVar30));
                    *(undefined4 *)(puVar46 + 0x14c) = 0xfffffffe;
                    if (uVar26 == 0) break;
                    piVar37 = (int *)(lVar29 + 4);
                    while (piVar37[-1] != -0x44991235) {
                      piVar37 = piVar37 + 2;
                      uVar26 = uVar26 - 1;
                      if (uVar26 == 0) goto LAB_02026554;
                    }
                    iVar20 = 0;
                    if (*piVar37 != -1) {
                      iVar20 = *piVar37;
                    }
                    *(int *)(puVar46 + 0x14c) = iVar20;
                    uVar17 = *puVar44;
                    if (uVar17 == 0) break;
                  } while( true );
                }
LAB_02026554:
                lVar25 = 0;
LAB_02026558:
                lVar29 = *(long *)PTR_PTR_04bb3270;
                if (lVar25 != 0) {
                  lVar29 = lVar25;
                }
                FUN_0074fda4(&local_7f8,"E_%s_NPC_%d",lVar29,iVar16);
                (*(code *)local_7f8[3])(&local_7f8);
                uVar18 = FUN_006bd550(local_7f0,0);
                uVar26 = FUN_0118b0a0(&local_a8,uVar18);
                if ((uVar26 & 1) == 0) {
                  puVar47 = (ushort *)PTR_DAT_04bb6298;
                  break;
                }
                FUN_0118b220(&local_120,&local_7f8);
                (*(code *)local_120[3])(&local_120);
                FUN_0074fda4(&local_890,"%s/AIC:Totakeke/AIF:AI_NPC_Tkk",local_118);
                pppuVar14 = local_6e8;
                local_708 = 0;
                local_718._0_4_ = SUB84(local_a8,0);
                local_718._4_4_ = (float)((ulong)local_a8 >> 0x20);
                local_710 = local_a0._0_4_;
                (*(code *)local_890[3])(&local_890);
                pppuVar12 = local_888;
                if (pppuVar14 != local_888) {
                  (*(code *)local_890[3])(&local_890);
                  lVar25 = 0;
                  do {
                    if (*(char *)((long)local_888 + lVar25) == '\0') {
LAB_02026428:
                      iVar20 = (int)lVar25;
                      goto LAB_0202642c;
                    }
                    if (*(char *)((long)local_888 + lVar25 + 1) == '\0') {
                      lVar25 = lVar25 + 1;
                      goto LAB_02026428;
                    }
                    if (*(char *)((long)local_888 + lVar25 + 2) == '\0') {
                      lVar25 = lVar25 + 2;
                      goto LAB_02026428;
                    }
                    lVar25 = lVar25 + 3;
                  } while (lVar25 != 0x80001);
                  iVar20 = 0;
LAB_0202642c:
                  if (local_6e0 <= iVar20) {
                    iVar20 = local_6e0 + -1;
                  }
                  memcpy(pppuVar14,pppuVar12,(long)iVar20);
                  *(char *)((long)pppuVar14 + (long)iVar20) = '\0';
                }
                FUN_0203e0f0(param_1 + 0x11058,&local_720);
                iVar16 = iVar16 + 1;
                puVar47 = (ushort *)PTR_DAT_04bb6298;
              } while (iVar16 != 10);
            }
            puVar46 = PTR_DAT_04bb2020;
          }
          puVar41 = (undefined *)local_720;
          if ((((uVar23 & 1) != 0) && (*(long *)(lVar35 + 0x1bf260) != 0)) &&
             (puVar32 = *(undefined8 **)(*(long *)(lVar35 + 0x1bf260) + 8),
             puVar32 != (undefined8 *)0x0)) {
            (**(code **)*puVar32)();
            puVar41 = (undefined *)local_720;
          }
        }
      }
    }
  }
  local_720 = (undefined **)puVar41;
  FUN_0203d3e0(param_1);
  puVar41 = PTR_DAT_04bc3a80;
  uVar28 = *puVar47;
  if (uVar28 == 0xffff) {
LAB_02026750:
    puVar9 = PTR_DAT_04bc39f8;
    if ((*(byte *)(*(long *)*plVar39 + 0x476) < 2) && (uVar28 = *puVar47, uVar28 != 0xffff)) {
      local_720._0_4_ = 0;
      puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar28 * 8);
      if (0xff < (uint)(int)(short)uVar28) {
        puVar44 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar44 & 1) != 0) && (uVar23 = FUN_0290d828(), (uVar23 & 1) == 0)) {
        uVar28 = *puVar47;
        if ((long)(short)uVar28 != 0xffffffffffffffff) {
          puVar44 = (uint *)(puVar9 + ((long)(short)uVar28 & 0xffffffffU) * 8);
          if (0xff < uVar28) {
            puVar44 = (uint *)puVar9;
          }
          if ((*puVar44 >> 0x19 & 1) != 0) goto LAB_0202686c;
        }
        if (*(int *)(puVar41 + 0x38) != 0x1693a871) {
          local_718._0_4_ = 1.584104e-36;
          local_718._4_4_ = 0.0;
          ppuVar40 = *(undefined ***)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          local_720 = (undefined **)(puVar46 + 0x10);
          local_7f8 = ppuVar40;
          iVar16 = FUN_0273ea30(&local_720);
          if (iVar16 != 0) {
            uVar23 = FUN_00a8117c(&local_7f8);
            if (((uVar23 & 1) != 0) ||
               (((uint)((ulong)ppuVar40 >> 0x20) & 0xff) - 0x14 < 0xfffffff1)) {
              local_718._0_4_ = 1.676749e-36;
              local_718._4_4_ = 0.0;
              local_720 = (undefined **)(puVar46 + 0x10);
              FUN_0273f3c4(&local_720,1);
            }
          }
        }
      }
    }
LAB_0202686c:
    local_718._0_4_ = 1.580374e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)(puVar46 + 0x10);
    uVar23 = FUN_0273f0a0(&local_720);
    ppuVar40 = local_720;
    if ((uVar23 & 1) != 0) goto LAB_020269b8;
    local_718._0_4_ = 1.676749e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)(puVar46 + 0x10);
    uVar23 = FUN_0273f0a0(&local_720);
    ppuVar40 = local_720;
    if ((uVar23 & 1) != 0) goto LAB_020269b8;
    uVar28 = *puVar47;
    if (uVar28 != 0xffff) {
      ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,3);
      puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar28 * 8);
      if (0xff < (uint)(int)(short)uVar28) {
        puVar44 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar44 >> 3 & 1) != 0) {
        local_6e0 = 0x80;
        local_658 = 7;
        uStack_6c4 = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520._24_2_;
        uStack_6c2 = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520._26_4_;
        acStack_6cc[0] = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0x10];
        acStack_6cc[1] = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0x11];
        acStack_6cc[2] = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0x12];
        acStack_6cc[3] = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0x13];
        acStack_6cc[4] = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0x14];
        acStack_6cc[5] = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0x15];
        local_6c6[0] = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0x16];
        local_6c6[1] = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0x17];
        local_6d4 = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520._8_6_;
        cStack_6ce = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0xe];
        cStack_6cd = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0xf];
        local_65d = 0;
        local_650 = 0;
        local_654 = 0;
        local_6be = '\0';
        local_6dc = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520[0];
        uStack_6db = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520._1_5_;
        acStack_6d6 = s_rct_AIC_Special_AIF_AI_NPC_Rct_04092520._6_2_;
        local_704 = 0;
        lVar35 = *(long *)PTR_DAT_04bb5c90;
        local_720._0_4_ = 0;
        local_720._4_4_ = 10;
        local_6fc = 0;
        uStack_70c = 0x3f800000;
        local_708 = 0;
        local_6e8 = (undefined ***)&local_6dc;
        local_718._0_4_ = *(float *)(lVar35 + 0x40) + 45.0;
        local_6f0 = PTR_DAT_04bb2d88 + 0x10;
        local_718._4_4_ = *(float *)(lVar35 + 0x44) + 0.0;
        local_710 = *(float *)(lVar35 + 0x48) + 20.0;
        FUN_0203e0f0(param_1 + 0x11058,&local_720);
        ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
      }
      goto LAB_020269b8;
    }
LAB_02027874:
    puVar3 = PTR_DAT_04bc3a48;
    puVar9 = PTR_DAT_04bb3768;
    local_880 = (undefined1  [8])CONCAT44(local_880._4_4_,local_880._0_4_);
    local_7e8 = (undefined1  [8])CONCAT44(local_7e8._4_4_,local_7e8._0_4_);
    if (*(int *)(puVar41 + 0x38) != -0x6efba09b) goto LAB_02027eb0;
    local_710 = 1.12104e-44;
    local_708 = local_708 & 0xffffff;
    uStack_70c = uStack_70c & 0xffffff00;
    lVar35 = *(long *)PTR_DAT_04bb27f8;
    local_718 = (undefined ***)&uStack_70c;
    local_720 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
    if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
       (lVar25 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar25 == 0)) {
      uVar42 = *(undefined2 *)(lVar35 + 0x2a);
LAB_02027940:
      puVar41 = PTR_DAT_04bc3a80;
    }
    else {
      if ((*(long **)(lVar25 + 0x60) == (long *)0x0) ||
         (puVar32 = (undefined8 *)**(long **)(lVar25 + 0x60), puVar32 == (undefined8 *)0x0)) {
        uVar42 = *(undefined2 *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
        goto LAB_02027940;
      }
      uVar23 = (**(code **)*puVar32)();
      puVar41 = PTR_DAT_04bc3a80;
      uVar42 = *(undefined2 *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
      if (((uVar23 & 1) == 0) || (*(long *)(lVar25 + 0x60) == 0)) goto LAB_02027940;
      puVar32 = *(undefined8 **)(*(long *)(lVar25 + 0x60) + 8);
      if (puVar32 != (undefined8 *)0x0) {
        (**(code **)*puVar32)();
      }
    }
    FUN_0376b510(&local_720,uVar42);
    ppuVar40 = local_720;
    if ((*(char *)local_718 == 'o') && (*(char *)((long)local_718 + 1) == 't')) {
      local_880 = (undefined1  [8])CONCAT44(local_880._4_4_,local_880._0_4_);
      local_7e8 = (undefined1  [8])CONCAT44(local_7e8._4_4_,local_7e8._0_4_);
      if (*(char *)((long)local_718 + 2) == 'g') goto LAB_02027eb0;
    }
    local_880 = (undefined1  [8])CONCAT44(local_880._4_4_,local_880._0_4_);
    local_7e8 = (undefined1  [8])CONCAT44(local_7e8._4_4_,local_7e8._0_4_);
    if ((*(ushort *)(lVar35 + 0xc0) & 0xf) == 2) goto LAB_02027eb0;
    FUN_0252d11c(&local_c8);
    if ((byte)local_c8 < 8) {
      if ((*(ushort **)puVar3 == (ushort *)0x0) || (uVar28 = **(ushort **)puVar3, (uVar28 & 1) == 0)
         ) {
        if (*(int *)(lVar35 + 0x10) == 1) goto LAB_020279dc;
      }
      else if (((uVar28 ^ 0xffff) & 3) == 0) {
LAB_020279dc:
        if ((0 < *(int *)(lVar35 + 0x14)) && (*(int *)(lVar35 + 0x14) < 4)) {
          local_65d = 0;
          local_650 = 0;
          local_720._0_4_ = 0;
          local_720._4_4_ = 10;
          local_6e0 = 0x80;
          local_6e8 = (undefined ***)&local_6dc;
          local_658 = 7;
          local_6f0 = PTR_DAT_04bb2d88 + 0x10;
          local_710 = 417.5;
          uStack_70c = 0x3f800000;
          local_718._0_4_ = 445.0;
          local_718._4_4_ = 0.0;
          local_654 = 0;
          local_6d4 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0._8_6_;
          cStack_6ce = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0[0xe];
          cStack_6cd = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0[0xf];
          local_6dc = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0[0];
          uStack_6db = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0._1_5_;
          acStack_6d6 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0._6_2_;
          local_704 = 0;
          local_6fc = 0;
          local_708 = 0;
          local_6af = '\0';
          local_6b4 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0[0x28];
          local_6b3 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0._41_4_;
          local_6bc = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0._32_4_;
          cStack_6b8 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0[0x24];
          cStack_6b7 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0[0x25];
          cStack_6b6 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0[0x26];
          cStack_6b5 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0[0x27];
          uStack_6c4 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0._24_2_;
          uStack_6c2 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0._26_4_;
          local_6be = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0[0x1e];
          cStack_6bd = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0[0x1f];
          acStack_6cc = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0._16_6_;
          local_6c6 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_040bb8d0._22_2_;
          FUN_0203e0f0(param_1 + 0x11058,&local_720);
          local_7e0 = local_7e0 & 0xffffff;
          local_7f0 = (undefined ***)(local_7e8 + 4);
          local_7e8._0_4_ = 8;
          local_7e8._4_4_ = local_7e8._4_4_ & 0xffffff00;
          local_7f8 = (undefined **)(puVar9 + 0x10);
          uVar22 = FUN_036e1fd8(lVar35,&local_7f8);
          if (*(char *)local_7f0 == '\0') {
            local_880._0_4_ = 8;
            local_888 = (undefined ***)(local_880 + 4);
            uStack_878 = uStack_878 & 0xffffff;
            local_880._4_4_ = local_880._4_4_ & 0xffffff00;
            local_890 = (undefined **)(puVar9 + 0x10);
            FUN_036ddfc0(lVar35,&local_890);
            local_118 = &DAT_0409b647;
            local_120 = (undefined **)(puVar46 + 0x10);
            uVar23 = FUN_00710cb0(&local_890,&local_120);
            if ((uVar23 & 1) == 0) {
              local_a0 = &DAT_040ee9d7;
              local_a8 = (undefined **)(puVar46 + 0x10);
              uVar23 = FUN_00710cb0(&local_890,&local_a8);
              uVar22 = 3;
              if ((uVar23 & 1) == 0) {
                uVar22 = 0;
              }
              FUN_0203ee6c(uVar23,uVar22);
              ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
            }
            else {
              FUN_0203ee6c(uVar23,3);
              ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
            }
          }
          else {
            FUN_0203ee6c(uVar22,2);
            ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
          }
          goto LAB_02027eb0;
        }
      }
    }
    local_718._0_4_ = 1.684025e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)(puVar46 + 0x10);
    iVar16 = FUN_02758850(&local_720);
    if (iVar16 == 1) {
      puVar32 = (undefined8 *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x17c40) + 0xf0))()
      ;
      local_a8 = (undefined **)*puVar32;
      local_a0 = (byte *)CONCAT44(local_a0._4_4_,*(undefined4 *)(puVar32 + 1));
      local_120 = (undefined **)(PTR_DAT_04bc43f8 + 0x10);
      local_118 = (byte *)CONCAT44(local_118._4_4_,0x20);
      local_720._0_4_ = 0;
      lVar35 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      if ((lVar35 == 0) || (*(long *)(lVar35 + 0x150) == 0)) {
        local_7f8 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
        local_7f0 = (undefined ***)CONCAT71(local_7f0._1_7_,PTR_DAT_04bbc570[8]);
        local_7f0 = (undefined ***)
                    CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(float)local_7f0);
        local_7e8 = (undefined1  [8])(PTR_DAT_04bb2010 + 0x10);
        local_7e0 = (uint)*(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_7dc = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_04bbc570 + 0x18) >> 0x20);
        uStack_7d8 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_7d4 = CONCAT62(local_7d4._2_6_,*(undefined2 *)(PTR_DAT_04bbc570 + 0x24));
      }
      else {
        local_7f8 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
        local_7f0 = (undefined ***)CONCAT71(local_7f0._1_7_,PTR_DAT_04bbc570[8]);
        local_7f0 = (undefined ***)
                    CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(float)local_7f0);
        local_7e8 = (undefined1  [8])(PTR_DAT_04bb2010 + 0x10);
        local_7e0 = (uint)*(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_7dc = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_04bbc570 + 0x18) >> 0x20);
        uStack_7d8 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_7d4 = CONCAT62(local_7d4._2_6_,*(undefined2 *)(PTR_DAT_04bbc570 + 0x24));
        local_888 = &local_120;
        local_890 = &PTR_FUN_04a9b150;
        local_880 = (undefined1  [8])&local_7f8;
        plVar33 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar35 + 0x150) + 0x10))();
        iVar16 = (**(code **)(*plVar33 + 0x18))();
        if (0 < iVar16) {
          iVar20 = 0;
          do {
            FUN_01360490(&local_720,*(undefined8 *)(lVar35 + 0x150),iVar20);
            uVar23 = (*(code *)*local_890)(&local_890,&local_720);
            if ((uVar23 & 1) != 0) break;
            bVar15 = iVar16 + -1 != iVar20;
            iVar20 = iVar20 + 1;
          } while (bVar15);
        }
      }
      if (local_7f0._4_4_ == 0) {
        local_710 = local_a0._0_4_;
      }
      else {
        FUN_02a8f1dc(&local_7f8,&local_a8);
        local_710 = local_a0._0_4_ + 15.0;
        local_a0 = (byte *)CONCAT44(local_a0._4_4_,local_710);
      }
      local_708 = 0x80000000;
      local_718._0_4_ = (float)(uint)local_a8;
      local_718._4_4_ = (float)local_a8._4_4_;
      local_6d4 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._8_6_;
      cStack_6ce = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0xe];
      cStack_6cd = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0xf];
      local_6dc = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0];
      uStack_6db = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._1_5_;
      acStack_6d6 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._6_2_;
LAB_02027e80:
      local_6f0 = PTR_DAT_04bb2d88 + 0x10;
      local_650 = 0;
      local_654 = 0;
      local_658 = 7;
      local_65d = 0;
      local_6e0 = 0x80;
      local_6e8 = (undefined ***)&local_6dc;
      local_6fc = 0;
      local_704 = 0;
      uStack_70c = 0x3f800000;
      local_720._4_4_ = 10;
      local_720._0_4_ = 0;
      local_6af = '\0';
      uStack_6c4 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._24_2_;
      uStack_6c2 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._26_4_;
      local_6be = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0x1e];
      cStack_6bd = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0x1f];
      local_6b4 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0x28];
      local_6b3 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._41_4_;
      local_6bc = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._32_4_;
      cStack_6b8 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0x24];
      cStack_6b7 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0x25];
      cStack_6b6 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0x26];
      cStack_6b5 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0x27];
      acStack_6cc = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._16_6_;
      local_6c6 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._22_2_;
    }
    else {
      local_890 = (undefined **)CONCAT44(local_890._4_4_,5);
      uVar23 = FUN_037733e0(&local_890);
      if ((uVar23 & 1) != 0) {
        local_710 = 655.0;
        local_718._0_4_ = 396.0;
        local_718._4_4_ = 0.0;
        local_708 = 0;
        local_6d4 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._8_6_;
        cStack_6ce = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0xe];
        cStack_6cd = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0xf];
        local_6dc = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d[0];
        uStack_6db = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._1_5_;
        acStack_6d6 = s_otg_AIC_Special_AIF_AI_NPC_Otg_W_04077a5d._6_2_;
        goto LAB_02027e80;
      }
      FUN_03773b40(&local_890);
      local_718._0_4_ = 1.5881148e-36;
      local_718._4_4_ = 0.0;
      local_720 = (undefined **)(puVar46 + 0x10);
      iVar16 = FUN_02758850(&local_720);
      ppuVar40 = local_720;
      if (iVar16 != 1) goto LAB_02027eb0;
      local_718._0_4_ = 1.5881148e-36;
      local_718._4_4_ = 0.0;
      local_720 = (undefined **)(puVar46 + 0x10);
      iVar16 = FUN_02758850(&local_720);
      if (iVar16 == 2) {
        local_890 = (undefined **)CONCAT44(local_890._4_4_,5);
      }
      ppuVar40 = local_720;
      if ((uint)local_890 == 5) goto LAB_02027eb0;
      switch((ulong)local_890 & 0xffffffff) {
      case 0:
        plVar33 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17dc8);
        break;
      case 1:
        plVar33 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17e70);
        break;
      case 2:
        plVar33 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17e00);
        break;
      case 3:
        plVar33 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17e38);
        break;
      case 4:
        plVar33 = (long *)(*(long *)PTR_DAT_04bb3968 + 0x17ea8);
        break;
      default:
        uVar17 = 0;
        fVar48 = 0.0;
        uVar18 = 0;
        uVar49 = 0;
        goto LAB_0202a020;
      }
      puVar27 = (undefined4 *)(**(code **)(*plVar33 + 0xf0))();
      uVar49 = *puVar27;
      uVar18 = puVar27[1];
      uVar17 = 0x80000000;
      fVar48 = (float)puVar27[2];
LAB_0202a020:
      FUN_007091b4(&local_720);
      local_7f8 = (undefined **)(puVar46 + 0x10);
      local_720._4_4_ = 10;
      local_7f0 = (undefined ***)0x4077a5d;
      local_718._0_4_ = (float)uVar49;
      local_718._4_4_ = (float)uVar18;
      local_710 = fVar48;
      local_708 = uVar17;
      FUN_00709380(&local_720,&local_7f8);
    }
    FUN_0203e0f0(param_1 + 0x11058,&local_720);
    ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
  }
  else {
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar28 * 8);
    if (0xff < (uint)(int)(short)uVar28) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar44 >> 0xe & 1) == 0) goto LAB_02026750;
    local_720 = (undefined **)(puVar46 + 0x10);
    local_718._0_4_ = 1.584104e-36;
    local_718._4_4_ = 0.0;
    iVar16 = FUN_0273ea30(&local_720);
    ppuVar40 = local_720;
    if (iVar16 != 0) goto LAB_02026750;
LAB_020269b8:
    local_720._4_4_ = (undefined4)((ulong)ppuVar40 >> 0x20);
    uVar28 = *puVar47;
    if (uVar28 == 0xffff) goto LAB_02027874;
    local_720._0_4_ = 3;
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar28 * 8);
    if (0xff < uVar28) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar44 >> 3 & 1) != 0) {
      local_120 = (undefined **)FUN_01d69460(*(undefined8 *)(*plVar39 + 0x10));
      puVar32 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
      if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
        lVar25 = (**(code **)(*(long *)*puVar32 + 0x38))();
        lVar35 = 0;
        if (lVar25 != 0) {
          lVar35 = lVar25 + 0x70;
        }
      }
      else {
        lVar35 = (**(code **)(*(long *)puVar32[0x26] + 0x38))();
      }
      plVar33 = *(long **)(lVar35 + 0x1bf260);
      if ((plVar33 == (long *)0x0) ||
         (puVar32 = (undefined8 *)*plVar33, puVar32 == (undefined8 *)0x0)) {
        uVar17 = 1;
        plVar33 = (long *)*plVar39;
        if (plVar33 != (long *)0x0) goto LAB_02026a9c;
LAB_02026ac8:
        bVar15 = true;
      }
      else {
        uVar17 = (**(code **)*puVar32)();
        uVar17 = uVar17 ^ 1;
        plVar33 = (long *)*plVar39;
        if (plVar33 == (long *)0x0) goto LAB_02026ac8;
LAB_02026a9c:
        bVar34 = *(byte *)(*plVar33 + 0x473);
        if ((long)(char)bVar34 == 0xffffffffffffffff) goto LAB_02026ac8;
        pbVar31 = (byte *)(*plVar33 + 0x48);
        uVar23 = (long)(char)bVar34 & 0xffffffff;
        pbVar36 = pbVar31 + uVar23 * 0x80;
        if (7 < bVar34) {
          pbVar36 = pbVar31;
        }
        if ((*pbVar36 >> 3 & 1) == 0) goto LAB_02026ac8;
        lVar25 = plVar33[2] + 0x108 + uVar23 * 0xc;
        if (0xb < bVar34) {
          lVar25 = plVar33[2] + 0x108;
        }
        bVar15 = *(char *)(lVar25 + 10) != '\0';
      }
      local_718._0_4_ = 1.6837566e-36;
      local_718._4_4_ = 0.0;
      local_720 = (undefined **)(puVar46 + 0x10);
      uVar19 = FUN_028d4a98(&local_120,&local_720);
      lVar25 = *plVar39;
      if (((lVar25 == 0) || (*(long *)(lVar25 + 0x28) == 0)) || (*(int *)(lVar25 + 0x80) != 1)) {
        local_718._0_4_ = 1.661783e-36;
        local_718._4_4_ = 0.0;
        local_720 = (undefined **)(puVar46 + 0x10);
        iVar16 = FUN_0273ea30(&local_720);
        if (iVar16 == 0 || ((uVar19 ^ 0xffffffff) & 1) != 0) goto LAB_02026c08;
        local_708 = 0;
        local_65d = 0;
        local_720._0_4_ = 0;
        local_720._4_4_ = 10;
        local_6e8 = (undefined ***)&local_6dc;
        local_710 = 0.0;
        uStack_70c = 0x3f800000;
        local_6e0 = 0x80;
        local_6f0 = PTR_DAT_04bb2d88 + 0x10;
        local_718._0_4_ = 0.0;
        local_718._4_4_ = 0.0;
        local_658 = 7;
        local_650 = 0;
        local_654 = 0;
        local_704 = 0;
        local_6fc = 0;
        local_6be = '\0';
        local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
        uStack_6c4 = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d._24_2_;
        uStack_6c2 = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d._26_4_;
        local_7f8 = (undefined **)(puVar46 + 0x10);
        acStack_6cc[0] = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0x10];
        acStack_6cc[1] = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0x11];
        acStack_6cc[2] = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0x12];
        acStack_6cc[3] = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0x13];
        acStack_6cc[4] = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0x14];
        acStack_6cc[5] = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0x15];
        local_6c6[0] = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0x16];
        local_6c6[1] = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0x17];
        local_6d4 = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d._8_6_;
        cStack_6ce = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0xe];
        cStack_6cd = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0xf];
        local_6dc = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d[0];
        uStack_6db = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d._1_5_;
        acStack_6d6 = s_pyn_AIC_Special_AIF_AI_NPC_Pyn_040fa38d._6_2_;
        local_7f0 = (undefined ***)&DAT_040f3cf9;
        FUN_0203e280(param_1,&local_7f8,&local_890,&local_a8);
        local_718._0_4_ = SUB84(local_890,0);
        local_718._4_4_ = (float)((ulong)local_890 >> 0x20);
        local_710 = (float)local_888;
        local_708 = (uint)local_a8;
        FUN_0203e0f0(param_1 + 0x11058,&local_720);
      }
      else {
LAB_02026c08:
        if (bVar15) {
          local_720 = (undefined **)(puVar46 + 0x10);
          local_718._0_4_ = 1.6837566e-36;
          local_718._4_4_ = 0.0;
          FUN_022029d0(&local_720);
        }
      }
      ppuVar40 = local_720;
      if ((((uVar17 & 1) == 0) && (lVar35 = *(long *)(lVar35 + 0x1bf260), lVar35 != 0)) &&
         (puVar32 = *(undefined8 **)(lVar35 + 8), puVar32 != (undefined8 *)0x0)) {
        (**(code **)*puVar32)();
        ppuVar40 = local_720;
      }
      local_720._4_4_ = (undefined4)((ulong)ppuVar40 >> 0x20);
      uVar28 = *(ushort *)PTR_DAT_04bb6298;
      puVar41 = PTR_DAT_04bc3a80;
      puVar47 = (ushort *)PTR_DAT_04bb6298;
      if (uVar28 == 0xffff) goto LAB_02027874;
    }
    local_720._0_4_ = 3;
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar28 & 0xffffffffU) * 8);
    if (0xff < uVar28) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar44 >> 3 & 1) != 0) {
      local_120 = (undefined **)FUN_01d69460(*(undefined8 *)(*plVar39 + 0x10));
      plVar33 = (long *)*plVar39;
      if (plVar33 == (long *)0x0) {
LAB_02026ce8:
        bVar15 = true;
      }
      else {
        bVar34 = *(byte *)(*plVar33 + 0x473);
        if ((long)(char)bVar34 == 0xffffffffffffffff) goto LAB_02026ce8;
        pbVar31 = (byte *)(*plVar33 + 0x48);
        uVar23 = (long)(char)bVar34 & 0xffffffff;
        pbVar36 = pbVar31 + uVar23 * 0x80;
        if (7 < bVar34) {
          pbVar36 = pbVar31;
        }
        if ((*pbVar36 >> 3 & 1) == 0) goto LAB_02026ce8;
        lVar35 = plVar33[2] + 0x108 + uVar23 * 0xc;
        if (0xb < bVar34) {
          lVar35 = plVar33[2] + 0x108;
        }
        bVar15 = *(char *)(lVar35 + 10) != '\0';
      }
      local_718._0_4_ = 1.6340611e-36;
      local_718._4_4_ = 0.0;
      ppuVar40 = (undefined **)(puVar46 + 0x10);
      local_720 = ppuVar40;
      uVar17 = FUN_028d4a98(&local_120,&local_720);
      local_718._0_4_ = 1.5995283e-36;
      local_718._4_4_ = 0.0;
      local_720 = ppuVar40;
      uVar23 = FUN_0273f0a0(&local_720);
      if ((uVar23 & 1) == 0) {
LAB_02026e20:
        ppuVar40 = local_720;
        if (bVar15) {
          local_720 = (undefined **)(puVar46 + 0x10);
          local_718._0_4_ = 1.6340611e-36;
          local_718._4_4_ = 0.0;
          FUN_022029d0(&local_720);
          ppuVar40 = local_720;
        }
      }
      else {
        local_7f0 = (undefined ***)0x40cfddc;
        local_7f8 = ppuVar40;
        uVar19 = FUN_0273f0a0(&local_7f8);
        if ((uVar17 & (uVar19 ^ 0xffffffff) & 1) == 0) goto LAB_02026e20;
        local_708 = 0;
        local_65d = 0;
        local_710 = 0.0;
        uStack_70c = 0x3f800000;
        local_720._0_4_ = 0;
        local_720._4_4_ = 10;
        local_6e8 = (undefined ***)&local_6dc;
        local_6bc = 0x74697369;
        local_6f0 = PTR_DAT_04bb2d88 + 0x10;
        local_6e0 = 0x80;
        local_658 = 7;
        local_718._0_4_ = 0.0;
        local_718._4_4_ = 0.0;
        local_650 = 0;
        uStack_6c4 = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212._24_2_;
        uStack_6c2 = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212._26_4_;
        local_6be = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212[0x1e];
        cStack_6bd = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212[0x1f];
        local_7f8 = (undefined **)(puVar46 + 0x10);
        local_654 = 0;
        local_704 = 0;
        local_6fc = 0;
        acStack_6cc = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212._16_6_;
        local_6c6 = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212._22_2_;
        local_6d4 = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212._8_6_;
        cStack_6ce = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212[0xe];
        cStack_6cd = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212[0xf];
        local_6dc = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212[0];
        uStack_6db = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212._1_5_;
        acStack_6d6 = s_fox_AIC_Special_AIF_AI_NPC_Fox_V_040e5212._6_2_;
        cStack_6b8 = '\0';
        local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
        local_7f0 = (undefined ***)&DAT_040b02b3;
        FUN_0203e280(param_1,&local_7f8,&local_890,&local_a8);
        local_718._0_4_ = SUB84(local_890,0);
        local_718._4_4_ = (float)((ulong)local_890 >> 0x20);
        local_710 = (float)local_888;
        local_708 = (uint)local_a8;
        FUN_0203e0f0(param_1 + 0x11058,&local_720);
        ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
      }
      local_720._4_4_ = (undefined4)((ulong)ppuVar40 >> 0x20);
      uVar28 = *puVar47;
      if (uVar28 == 0xffff) goto LAB_02027874;
    }
    local_720._0_4_ = 3;
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar28 & 0xffffffffU) * 8);
    if (0xff < uVar28) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar44 >> 3 & 1) != 0) {
      local_120 = (undefined **)FUN_01d69460(*(undefined8 *)(*plVar39 + 0x10));
      puVar32 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
      if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
        lVar25 = (**(code **)(*(long *)*puVar32 + 0x38))();
        lVar35 = 0;
        if (lVar25 != 0) {
          lVar35 = lVar25 + 0x70;
        }
      }
      else if (puVar32 == (undefined8 *)0x0) {
        lVar35 = 0;
      }
      else {
        lVar35 = 0;
        if ((long *)puVar32[0x26] != (long *)0x0) {
          lVar35 = (**(code **)(*(long *)puVar32[0x26] + 0x38))();
        }
      }
      if ((*(long **)(lVar35 + 0x1bf260) == (long *)0x0) ||
         (puVar32 = (undefined8 *)**(long **)(lVar35 + 0x1bf260), puVar32 == (undefined8 *)0x0)) {
        uVar17 = 1;
      }
      else {
        uVar17 = (**(code **)*puVar32)();
        uVar17 = uVar17 ^ 1;
      }
      plVar33 = (long *)*plVar39;
      if (plVar33 == (long *)0x0) {
LAB_02026fac:
        bVar15 = true;
      }
      else {
        bVar34 = *(byte *)(*plVar33 + 0x473);
        if ((long)(char)bVar34 == 0xffffffffffffffff) goto LAB_02026fac;
        pbVar31 = (byte *)(*plVar33 + 0x48);
        uVar23 = (long)(char)bVar34 & 0xffffffff;
        pbVar36 = pbVar31 + uVar23 * 0x80;
        if (7 < bVar34) {
          pbVar36 = pbVar31;
        }
        if ((*pbVar36 >> 3 & 1) == 0) goto LAB_02026fac;
        lVar25 = plVar33[2] + 0x108 + uVar23 * 0xc;
        if (0xb < bVar34) {
          lVar25 = plVar33[2] + 0x108;
        }
        bVar15 = *(char *)(lVar25 + 10) != '\0';
      }
      local_718._0_4_ = 1.6187942e-36;
      local_718._4_4_ = 0.0;
      local_720 = (undefined **)(puVar46 + 0x10);
      uVar23 = FUN_028d4a98(&local_120,&local_720);
      uVar26 = FUN_028d54a0(*(long *)(lVar35 + 0x1bf248) + *(long *)(lVar35 + 0x1bf240));
      if (((uVar23 & 1) == 0) || ((uVar26 & 1) == 0)) {
        if (bVar15) {
          local_720 = (undefined **)(puVar46 + 0x10);
          local_718._0_4_ = 1.6187942e-36;
          local_718._4_4_ = 0.0;
          FUN_022029d0(&local_720);
        }
      }
      else {
        uVar23 = FUN_016cf630();
        if ((uVar23 & 1) == 0) {
          local_708 = 0;
          local_65d = 0;
          local_710 = 0.0;
          uStack_70c = 0x3f800000;
          local_720._0_4_ = 0;
          local_720._4_4_ = 10;
          local_6e8 = (undefined ***)&local_6dc;
          local_6bc = 0x74697369;
          local_6f0 = PTR_DAT_04bb2d88 + 0x10;
          local_6e0 = 0x80;
          local_658 = 7;
          local_718._0_4_ = 0.0;
          local_718._4_4_ = 0.0;
          local_650 = 0;
          uStack_6c4 = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab._24_2_;
          uStack_6c2 = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab._26_4_;
          local_6be = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab[0x1e];
          cStack_6bd = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab[0x1f];
          local_7f8 = (undefined **)(puVar46 + 0x10);
          local_654 = 0;
          local_704 = 0;
          local_6fc = 0;
          acStack_6cc = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab._16_6_;
          local_6c6 = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab._22_2_;
          local_6d4 = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab._8_6_;
          cStack_6ce = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab[0xe];
          cStack_6cd = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab[0xf];
          local_6dc = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab[0];
          uStack_6db = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab._1_5_;
          acStack_6d6 = s_spn_AIC_Special_AIF_AI_NPC_Spn_V_040bb8ab._6_2_;
          cStack_6b8 = '\0';
          local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
          local_7f0 = (undefined ***)&DAT_0409b637;
          FUN_0203e280(param_1,&local_7f8,&local_890,&local_a8);
          local_718._0_4_ = SUB84(local_890,0);
          local_718._4_4_ = (float)((ulong)local_890 >> 0x20);
          local_710 = (float)local_888;
          local_708 = (uint)local_a8;
          FUN_0203e0f0(param_1 + 0x11058,&local_720);
        }
      }
      ppuVar40 = local_720;
      if ((((uVar17 & 1) == 0) && (*(long *)(lVar35 + 0x1bf260) != 0)) &&
         (puVar32 = *(undefined8 **)(*(long *)(lVar35 + 0x1bf260) + 8), puVar32 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar32)();
        ppuVar40 = local_720;
      }
      local_720._4_4_ = (undefined4)((ulong)ppuVar40 >> 0x20);
      uVar28 = *puVar47;
      puVar41 = PTR_DAT_04bc3a80;
      if (uVar28 == 0xffff) goto LAB_02027874;
    }
    local_720._0_4_ = 3;
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar28 & 0xffffffffU) * 8);
    if (0xff < uVar28) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,3);
    if ((*puVar44 >> 3 & 1) != 0) {
      plVar33 = (long *)*plVar39;
      if (plVar33 == (long *)0x0) {
LAB_02027190:
        bVar15 = true;
      }
      else {
        bVar34 = *(byte *)(*plVar33 + 0x473);
        if ((long)(char)bVar34 == 0xffffffffffffffff) goto LAB_02027190;
        pbVar31 = (byte *)(*plVar33 + 0x48);
        uVar23 = (long)(char)bVar34 & 0xffffffff;
        pbVar36 = pbVar31 + uVar23 * 0x80;
        if (7 < bVar34) {
          pbVar36 = pbVar31;
        }
        if ((*pbVar36 >> 3 & 1) == 0) goto LAB_02027190;
        lVar35 = plVar33[2] + 0x108 + uVar23 * 0xc;
        if (0xb < bVar34) {
          lVar35 = plVar33[2] + 0x108;
        }
        bVar15 = *(char *)(lVar35 + 10) != '\0';
      }
      puVar32 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
      if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
        lVar25 = (**(code **)(*(long *)*puVar32 + 0x38))();
        lVar35 = 0;
        if (lVar25 != 0) {
          lVar35 = lVar25 + 0x70;
        }
      }
      else {
        lVar35 = (**(code **)(*(long *)puVar32[0x26] + 0x38))();
      }
      plVar33 = *(long **)(lVar35 + 0x1bf260);
      if ((plVar33 == (long *)0x0) ||
         (puVar32 = (undefined8 *)*plVar33, puVar32 == (undefined8 *)0x0)) {
        uVar17 = 1;
      }
      else {
        uVar17 = (**(code **)*puVar32)();
        uVar17 = uVar17 ^ 1;
      }
      local_718._0_4_ = 1.5930677e-36;
      local_718._4_4_ = 0.0;
      local_720 = (undefined **)(puVar46 + 0x10);
      iVar16 = FUN_0273ea30(&local_720);
      if (iVar16 == 1) {
LAB_02027254:
        local_708 = 0;
        local_65d = 0;
        local_720._0_4_ = 0;
        local_720._4_4_ = 10;
        local_6e8 = (undefined ***)&local_6dc;
        local_710 = 0.0;
        uStack_70c = 0x3f800000;
        local_6e0 = 0x80;
        local_6f0 = PTR_DAT_04bb2d88 + 0x10;
        local_658 = 7;
        local_718._0_4_ = 0.0;
        local_718._4_4_ = 0.0;
        local_650 = 0;
        local_654 = 0;
        local_704 = 0;
        local_6fc = 0;
        local_6be = '\0';
        local_890 = (undefined **)((ulong)local_890 & 0xffffffff00000000);
        uStack_6c4 = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356._24_2_;
        uStack_6c2 = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356._26_4_;
        acStack_6cc[0] = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0x10];
        acStack_6cc[1] = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0x11];
        acStack_6cc[2] = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0x12];
        acStack_6cc[3] = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0x13];
        acStack_6cc[4] = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0x14];
        acStack_6cc[5] = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0x15];
        local_6c6[0] = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0x16];
        local_6c6[1] = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0x17];
        local_6d4 = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356._8_6_;
        cStack_6ce = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0xe];
        cStack_6cd = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0xf];
        local_6dc = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356[0];
        uStack_6db = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356._1_5_;
        acStack_6d6 = s_mol_AIC_Special_AIF_AI_NPC_Mol_040b6356._6_2_;
        FUN_0203e280(param_1,&DAT_053cafb0,&local_7f8,&local_890);
        local_718._0_4_ = SUB84(local_7f8,0);
        local_718._4_4_ = (float)((ulong)local_7f8 >> 0x20);
        local_710 = (float)local_7f0;
        local_708 = (uint)local_890;
        FUN_0203e0f0(param_1 + 0x11058,&local_720);
      }
      else {
        local_718._0_4_ = 1.681208e-36;
        local_718._4_4_ = 0.0;
        local_720 = (undefined **)(puVar46 + 0x10);
        iVar16 = FUN_0273ea30(&local_720);
        if (iVar16 == 1) goto LAB_02027254;
        if (bVar15) {
          FUN_022029d0(&DAT_053cafb0);
        }
      }
      puVar41 = PTR_DAT_04bc3a80;
      ppuVar40 = local_720;
      if ((((uVar17 & 1) == 0) && (lVar35 = *(long *)(lVar35 + 0x1bf260), lVar35 != 0)) &&
         (puVar32 = *(undefined8 **)(lVar35 + 8), puVar32 != (undefined8 *)0x0)) {
        (**(code **)*puVar32)();
        ppuVar40 = local_720;
      }
    }
    local_720._4_4_ = (undefined4)((ulong)ppuVar40 >> 0x20);
    uVar28 = *puVar47;
    if (uVar28 == 0xffff) goto LAB_02027874;
    local_720._0_4_ = 3;
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar28 * 8);
    if (0xff < uVar28) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar44 >> 3 & 1) != 0) {
      local_120 = (undefined **)FUN_01d69460(*(undefined8 *)(*plVar39 + 0x10));
      puVar32 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
      if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
        lVar25 = (**(code **)(*(long *)*puVar32 + 0x38))();
        lVar35 = 0;
        if (lVar25 != 0) {
          lVar35 = lVar25 + 0x70;
        }
      }
      else if (puVar32 == (undefined8 *)0x0) {
        lVar35 = 0;
      }
      else {
        lVar35 = 0;
        if ((long *)puVar32[0x26] != (long *)0x0) {
          lVar35 = (**(code **)(*(long *)puVar32[0x26] + 0x38))();
        }
      }
      if ((*(long **)(lVar35 + 0x1bf260) == (long *)0x0) ||
         (puVar32 = (undefined8 *)**(long **)(lVar35 + 0x1bf260), puVar32 == (undefined8 *)0x0)) {
        uVar17 = 1;
      }
      else {
        uVar17 = (**(code **)*puVar32)();
        uVar17 = uVar17 ^ 1;
      }
      plVar33 = (long *)*plVar39;
      if (plVar33 == (long *)0x0) {
LAB_020274bc:
        bVar15 = true;
      }
      else {
        bVar34 = *(byte *)(*plVar33 + 0x473);
        if ((long)(char)bVar34 == 0xffffffffffffffff) goto LAB_020274bc;
        pbVar31 = (byte *)(*plVar33 + 0x48);
        uVar23 = (long)(char)bVar34 & 0xffffffff;
        pbVar36 = pbVar31 + uVar23 * 0x80;
        if (7 < bVar34) {
          pbVar36 = pbVar31;
        }
        if ((*pbVar36 >> 3 & 1) == 0) goto LAB_020274bc;
        lVar25 = plVar33[2] + 0x108 + uVar23 * 0xc;
        if (0xb < bVar34) {
          lVar25 = plVar33[2] + 0x108;
        }
        bVar15 = *(char *)(lVar25 + 10) != '\0';
      }
      local_718._0_4_ = 1.5843514e-36;
      local_718._4_4_ = 0.0;
      local_720 = (undefined **)(puVar46 + 0x10);
      uVar23 = FUN_028d4a98(&local_120,&local_720);
      uVar26 = FUN_028d6104(*(long *)(lVar35 + 0x1bf248) + *(long *)(lVar35 + 0x1bf240));
      if (((uVar23 & 1) == 0) || ((uVar26 & 1) == 0)) {
        if (bVar15) {
          local_720 = (undefined **)(puVar46 + 0x10);
          local_718._0_4_ = 1.5843514e-36;
          local_718._4_4_ = 0.0;
          FUN_022029d0(&local_720);
        }
      }
      else {
        local_708 = 0;
        local_65d = 0;
        local_720._0_4_ = 0;
        local_720._4_4_ = 10;
        local_6e8 = (undefined ***)&local_6dc;
        local_710 = 0.0;
        uStack_70c = 0x3f800000;
        local_6f0 = PTR_DAT_04bb2d88 + 0x10;
        local_658 = 7;
        local_6e0 = 0x80;
        local_718._0_4_ = 0.0;
        local_718._4_4_ = 0.0;
        local_650 = 0;
        uStack_6c4 = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac._24_2_;
        uStack_6c2 = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac._26_4_;
        local_7f8 = (undefined **)(puVar46 + 0x10);
        local_654 = 0;
        local_704 = 0;
        local_6fc = 0;
        acStack_6cc[0] = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0x10];
        acStack_6cc[1] = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0x11];
        acStack_6cc[2] = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0x12];
        acStack_6cc[3] = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0x13];
        acStack_6cc[4] = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0x14];
        acStack_6cc[5] = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0x15];
        local_6c6[0] = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0x16];
        local_6c6[1] = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0x17];
        local_6d4 = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac._8_6_;
        cStack_6ce = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0xe];
        cStack_6cd = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0xf];
        local_6dc = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac[0];
        uStack_6db = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac._1_5_;
        acStack_6d6 = s_ows_AIC_Special_AIF_AI_NPC_Ows_040fa3ac._6_2_;
        local_6be = '\0';
        local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
        local_7f0 = (undefined ***)&DAT_0406c81e;
        FUN_0203e280(param_1,&local_7f8,&local_890,&local_a8);
        local_718._0_4_ = SUB84(local_890,0);
        local_718._4_4_ = (float)((ulong)local_890 >> 0x20);
        local_710 = (float)local_888;
        local_708 = (uint)local_a8;
        FUN_0203e0f0(param_1 + 0x11058,&local_720);
      }
      ppuVar40 = local_720;
      if ((((uVar17 & 1) == 0) && (*(long *)(lVar35 + 0x1bf260) != 0)) &&
         (puVar32 = *(undefined8 **)(*(long *)(lVar35 + 0x1bf260) + 8), puVar32 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar32)();
        ppuVar40 = local_720;
      }
      local_720._4_4_ = (undefined4)((ulong)ppuVar40 >> 0x20);
      uVar28 = *puVar47;
      puVar41 = PTR_DAT_04bc3a80;
      if (uVar28 == 0xffff) goto LAB_02027874;
    }
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar28 & 0xffffffffU) * 8);
    if (0xff < uVar28) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar44 >> 0x11 & 1) != 0) {
      uVar17 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428;
      if (((uVar17 < DAT_0534f408) &&
          (puVar44 = *(uint **)(DAT_0534f410 + (long)(int)uVar17 * 8), puVar44 != (uint *)0x0)) &&
         ((uVar17 = *puVar44, uVar17 != 0 && (puVar44 != (uint *)(ulong)uVar17)))) {
        puVar30 = (uint *)((long)puVar44 - (long)(ulong)uVar17);
        if (((*puVar30 != 0) && (uVar17 = puVar30[1], uVar17 != 0)) &&
           ((ulong)(ushort)puVar30[2] != 0)) {
          lVar35 = 0xc;
          if (*(char *)((long)puVar30 + 10) != '\0') {
            lVar35 = 0x1c;
          }
          lVar35 = (long)puVar30 + lVar35 + (ulong)(ushort)puVar30[2] * 8;
          if (lVar35 != 0) {
            uVar19 = 0;
            if ((ulong)uVar17 != 0) {
              uVar19 = (uint)((ulong)((long)puVar44 - lVar35) / (ulong)uVar17);
            }
            if (*puVar30 <= uVar19) {
              uVar19 = 0xffffffff;
            }
            if ((uVar19 < *(uint *)PTR_DAT_04bc0e98) &&
               (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar19 * 2) == 1)) {
              uStack_70c = 0x3f800000;
              local_6e0 = 0x80;
              local_658 = 7;
              local_6b4 = 'r';
              local_65d = 0;
              local_6e8 = (undefined ***)&local_6dc;
              local_650 = 0;
              local_6f0 = PTR_DAT_04bb2d88 + 0x10;
              local_654 = 0;
              local_704 = 0;
              local_6fc = 0;
              local_6b3 = local_6b3 & 0xffffff00;
              local_6d4 = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4._8_6_;
              cStack_6ce = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4[0xe];
              cStack_6cd = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4[0xf];
              local_6dc = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4[0];
              uStack_6db = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4._1_5_;
              acStack_6d6 = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4._6_2_;
              acStack_6cc = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4._16_6_;
              local_6c6 = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4._22_2_;
              uStack_6c4 = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4._24_2_;
              uStack_6c2 = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4._26_4_;
              local_6be = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4[0x1e];
              cStack_6bd = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4[0x1f];
              local_6bc = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4._32_4_;
              cStack_6b8 = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4[0x24];
              cStack_6b7 = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4[0x25];
              cStack_6b6 = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4[0x26];
              cStack_6b5 = s_xct_AIC_Special_AIF_AI_NPC_Xct_M_040681a4[0x27];
              local_720._0_4_ = 0;
              local_720._4_4_ = 10;
              local_718._4_4_ = 0.0;
              bVar15 = *(short *)(*(long *)PTR_DAT_04bb4928 + 8) != 0x1c;
              local_710 = 310.0;
              if (bVar15) {
                local_710 = 318.0;
              }
              local_708 = 0x80000000;
              if (bVar15) {
                local_708 = 0x6aaaab00;
              }
              local_718._0_4_ = 470.0;
              if (bVar15) {
                local_718._0_4_ = 485.0;
              }
              FUN_0203e0f0(param_1 + 0x11058,&local_720);
              uVar28 = *puVar47;
              ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
              if (uVar28 == 0xffff) goto LAB_02027874;
            }
          }
        }
      }
    }
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar28 & 0xffffffffU) * 8);
    if (0xff < uVar28) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,0x19);
    if ((*puVar44 >> 0x19 & 1) == 0) goto LAB_02027874;
    local_718._0_4_ = 1.6454464e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)(puVar46 + 0x10);
    iVar16 = FUN_02758850(&local_720);
    ppuVar40 = local_720;
    local_880 = (undefined1  [8])CONCAT44(local_880._4_4_,local_880._0_4_);
    local_7e8 = (undefined1  [8])CONCAT44(local_7e8._4_4_,local_7e8._0_4_);
    if (iVar16 == 0) goto LAB_02027874;
  }
LAB_02027eb0:
  puVar9 = PTR_DAT_04bc3a48;
  local_720._4_4_ = (undefined4)((ulong)ppuVar40 >> 0x20);
  uVar28 = *puVar47;
  uVar23 = (ulong)(short)uVar28;
  if (uVar23 != 0xffffffffffffffff) {
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar28 * 8);
    if (0xff < (uint)(int)(short)uVar28) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,0x1b);
    if ((*puVar44 >> 0x1b & 1) == 0) {
      local_720._0_4_ = 0x19;
      puVar44 = (uint *)(PTR_DAT_04bc39f8 + (uVar23 & 0xffffffff) * 8);
      if (0xff < uVar28) {
        puVar44 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar44 >> 0x19 & 1) == 0) {
        local_720._0_4_ = 0x1a;
        puVar44 = (uint *)(PTR_DAT_04bc39f8 + (uVar23 & 0xffffffff) * 8);
        if (0xff < uVar28) {
          puVar44 = (uint *)PTR_DAT_04bc39f8;
        }
        ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,0x1a);
        if ((*puVar44 >> 0x1a & 1) == 0) goto LAB_0202886c;
      }
      if (*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) {
        ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
        if ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0) goto LAB_0202886c;
      }
      ppuVar40 = (undefined **)(puVar46 + 0x10);
      lVar35 = *(long *)PTR_DAT_04bb27f8;
      local_718._0_4_ = 1.6188064e-36;
      local_718._4_4_ = 0.0;
      local_720 = ppuVar40;
      iVar16 = FUN_02758850(&local_720);
      local_718._0_4_ = 1.604265e-36;
      local_718._4_4_ = 0.0;
      local_720 = ppuVar40;
      iVar20 = FUN_02758850(&local_720);
      if (iVar20 == 0) {
        local_7f0 = (undefined ***)0x40bfaa6;
        local_7f8 = ppuVar40;
        iVar20 = FUN_02758850(&local_7f8);
        bVar15 = iVar20 != 0;
      }
      else {
        bVar15 = false;
      }
      iVar20 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
      if (iVar20 == -0x6efba09b) {
        local_708 = local_708 & 0xffffff;
        local_710 = 1.12104e-44;
        local_718 = (undefined ***)&uStack_70c;
        uStack_70c = uStack_70c & 0xffffff00;
        local_720 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
        if ((((*(ushort **)puVar9 == (ushort *)0x0) || ((**(ushort **)puVar9 & 1) == 0)) ||
            (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar25 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar25 == 0)) {
          uVar42 = *(undefined2 *)(lVar35 + 0x2a);
        }
        else if ((*(long **)(lVar25 + 0x60) == (long *)0x0) ||
                (puVar32 = (undefined8 *)**(long **)(lVar25 + 0x60), puVar32 == (undefined8 *)0x0))
        {
          uVar42 = *(undefined2 *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
        }
        else {
          uVar23 = (**(code **)*puVar32)();
          uVar42 = *(undefined2 *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
          if ((((uVar23 & 1) != 0) && (*(long *)(lVar25 + 0x60) != 0)) &&
             (puVar32 = *(undefined8 **)(*(long *)(lVar25 + 0x60) + 8), puVar32 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar32)();
          }
        }
        FUN_0376b510(&local_720,uVar42);
        local_7f8 = (undefined **)(puVar46 + 0x10);
        local_7f0 = (undefined ***)&DAT_0409b647;
        (*(code *)local_720[3])(&local_720);
        (*(code *)local_720[3])(&local_720);
        pppuVar12 = local_718;
        (*(code *)local_7f8[3])(&local_7f8);
        puVar41 = PTR_DAT_04bb2d88;
        if (pppuVar12 == local_7f0) {
LAB_02028294:
          puVar41 = PTR_DAT_04bc3a80;
          ppuVar40 = local_720;
        }
        else {
          uVar23 = 0;
          bVar15 = true;
          do {
            if (*(char *)((long)local_718 + uVar23) != *(char *)((long)local_7f0 + uVar23)) break;
            if (*(char *)((long)local_718 + uVar23) == '\0') {
              if (bVar15) goto LAB_02028294;
              break;
            }
            bVar15 = uVar23 < 0x80000;
            uVar23 = uVar23 + 1;
          } while (uVar23 != 0x80001);
          if ((*(char *)local_718 == 'o') && (*(char *)((long)local_718 + 1) == 't')) {
            bVar15 = *(char *)((long)local_718 + 2) == 'g';
          }
          else {
            bVar15 = false;
          }
          local_710 = 0.0;
          local_720._0_4_ = 0;
          local_720._4_4_ = 0xffffffff;
          local_718._0_4_ = 0.0;
          local_718._4_4_ = 0.0;
          uStack_70c = 0x3f800000;
          local_708 = 0;
          local_6e8 = (undefined ***)&local_6dc;
          local_6e0 = 0x80;
          local_65d = 0;
          local_6dc = '\0';
          local_6f0 = PTR_DAT_04bb2d88 + 0x10;
          local_650 = 0;
          local_654 = 0;
          local_704 = 0;
          local_658 = 7;
          local_6fc = 0;
          if (iVar16 < 1) {
            local_7f8 = (undefined **)(puVar46 + 0x10);
            local_7f0 = (undefined ***)0x407c072;
            iVar16 = FUN_02758850(&local_7f8);
            puVar41 = PTR_DAT_04bc3a80;
            puVar47 = (ushort *)PTR_DAT_04bb6298;
            ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
            if (iVar16 != 0) goto LAB_0202886c;
            local_718._0_4_ = 415.0;
            local_710 = 670.0;
            local_708 = 0x35555580;
            local_7f0 = (undefined ***)0x40bb8fe;
LAB_02028850:
            local_718._4_4_ = 0.0;
            local_720._4_4_ = 10;
            local_7f8 = (undefined **)(puVar46 + 0x10);
            FUN_00709380(&local_720,&local_7f8);
          }
          else {
            uVar28 = *(ushort *)(lVar35 + 0xc0) & 0xf;
            if (uVar28 == 2) {
LAB_02028524:
              iVar16 = 0x2d;
LAB_02028528:
              pppuVar12 = local_6e8;
              puVar47 = (ushort *)PTR_DAT_04bb6298;
              local_708 = 0;
              local_710 = 417.5;
              local_718._4_4_ = 0.0;
              local_718._0_4_ = 445.0;
              local_720._4_4_ = 10;
              memcpy(local_6e8,"mnc/AIC:Special/AIF:AI_NPC_Mnc_WherearenField",(long)iVar16);
              *(char *)((long)pppuVar12 + (long)iVar16) = '\0';
            }
            else {
              if (uVar28 != 1) {
                if (!bVar15) goto LAB_02028650;
                goto LAB_02028524;
              }
              local_7f8 = (undefined **)(puVar46 + 0x10);
              local_7f0 = (undefined ***)0x40bfaa6;
              iVar16 = FUN_02758850(&local_7f8);
              if (iVar16 != 0) {
                bVar15 = true;
              }
              if (!bVar15) {
LAB_02028650:
                local_7f0 = (undefined ***)0x4082108;
                local_7f8 = (undefined **)(puVar46 + 0x10);
                iVar16 = FUN_02758850(&local_7f8);
                if (iVar16 != 0) {
                  local_888 = (undefined ***)0x406d5b1;
                  local_890 = (undefined **)(puVar46 + 0x10);
                  iVar16 = FUN_02758850(&local_890);
                  puVar47 = (ushort *)PTR_DAT_04bb6298;
                  if (iVar16 == 0) {
                    FUN_025196e4(&local_890);
                    local_7f8 = (undefined **)(puVar46 + 0x10);
                    local_7f0 = (undefined ***)0x40abf27;
                    FUN_027533a8(&local_890,&local_7f8,0);
                    goto LAB_02028294;
                  }
                }
                puVar47 = (ushort *)PTR_DAT_04bb6298;
                uVar22 = FUN_025196e4(&local_890);
                local_7f8 = (undefined **)(puVar46 + 0x10);
                local_7f0 = (undefined ***)0x40ca927;
                iVar16 = FUN_02757a80(uVar22,&local_7f8);
                local_708 = DAT_0545c450;
                puVar41 = PTR_DAT_04bc3a80;
                if (iVar16 == 0) {
                  local_708 = 0;
                  local_718._0_4_ = 400.0;
                  local_710 = 665.0;
                  local_7f0 = (undefined ***)0x40bb8fe;
                }
                else {
                  DAT_0545c450 = 0;
                  local_718._0_4_ = 400.0;
                  local_710 = 665.0;
                  local_7f0 = (undefined ***)0x40bb8fe;
                }
                goto LAB_02028850;
              }
              local_708 = 0;
              local_720._4_4_ = 10;
              local_718._0_4_ = 445.0;
              local_718._4_4_ = 0.0;
              local_710 = 417.5;
              puVar47 = (ushort *)PTR_DAT_04bb6298;
              if (local_6e8 != (undefined ***)"mnc/AIC:Special/AIF:AI_NPC_Mnc_WherearenField") {
                if (0x2d < local_6e0) goto LAB_02028524;
                iVar16 = local_6e0 + -1;
                goto LAB_02028528;
              }
            }
            local_735 = 0;
            local_7e8._4_4_ = 0x3f800000;
            local_7e0 = 0;
            local_7b8 = 0x80;
            local_7c8 = puVar41 + 0x10;
            local_730 = 7;
            local_7c0 = &local_7b4;
            local_728 = 0;
            local_72c = 0;
            local_7a4[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x10];
            local_7a4[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x11];
            local_7a4[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x12];
            local_7a4[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x13];
            local_7a4[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x14];
            local_7a4[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x15];
            local_7a4[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x16];
            local_7a4[7] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x17];
            local_79c[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x18];
            local_79c[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x19];
            local_79c[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1a];
            local_79c[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1b];
            local_79c[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1c];
            local_79c[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1d];
            local_79c[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1e];
            local_79c[7] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1f];
            local_7dc = 0;
            uStack_7d8 = 0;
            local_7d4 = 0;
            local_785 = 0;
            local_794[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x20];
            local_794[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x21];
            local_794[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x22];
            local_794[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x23];
            local_794[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x24];
            local_794[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x25];
            local_794[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x26];
            cStack_78d = s_WherearenObjMncBox_None_None_Whe_040e5237[0x27];
            acStack_78c[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x28];
            acStack_78c[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x29];
            acStack_78c[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2a];
            acStack_78c[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2b];
            acStack_78c[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2c];
            acStack_78c[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2d];
            acStack_78c[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2e];
            local_7ac[0] = s_WherearenObjMncBox_None_None_Whe_040e5237[8];
            local_7ac[1] = s_WherearenObjMncBox_None_None_Whe_040e5237[9];
            local_7ac[2] = s_WherearenObjMncBox_None_None_Whe_040e5237[10];
            local_7ac[3] = s_WherearenObjMncBox_None_None_Whe_040e5237[0xb];
            local_7ac[4] = s_WherearenObjMncBox_None_None_Whe_040e5237[0xc];
            local_7ac[5] = s_WherearenObjMncBox_None_None_Whe_040e5237[0xd];
            local_7ac[6] = s_WherearenObjMncBox_None_None_Whe_040e5237[0xe];
            local_7ac[7] = s_WherearenObjMncBox_None_None_Whe_040e5237[0xf];
            local_7b4._0_1_ = s_WherearenObjMncBox_None_None_Whe_040e5237[0];
            local_7b4._1_1_ = s_WherearenObjMncBox_None_None_Whe_040e5237[1];
            local_7b4._2_1_ = s_WherearenObjMncBox_None_None_Whe_040e5237[2];
            local_7b4._3_1_ = s_WherearenObjMncBox_None_None_Whe_040e5237[3];
            local_7b4._4_1_ = s_WherearenObjMncBox_None_None_Whe_040e5237[4];
            local_7b4._5_1_ = s_WherearenObjMncBox_None_None_Whe_040e5237[5];
            local_7b4._6_1_ = s_WherearenObjMncBox_None_None_Whe_040e5237[6];
            local_7b4._7_1_ = s_WherearenObjMncBox_None_None_Whe_040e5237[7];
            local_7f8 = (undefined **)&DAT_ffffffff00000000;
            local_7f0 = (undefined ***)0x4060000043de8000;
            local_7e8._0_4_ = 0x43cf8000;
            uVar18 = FUN_0224b5e0(*(undefined8 *)PTR_DAT_04bb60a8,&local_7f8,0);
            uStack_878 = uStack_878 & 0xffffff;
            local_880._4_4_ = local_880._4_4_ & 0xffffff00;
            local_880._0_4_ = 8;
            local_888 = (undefined ***)(local_880 + 4);
            *(undefined4 *)(*(long *)PTR_DAT_04bb27f8 + 0x1a84) = uVar18;
            ppuVar40 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
            local_890 = ppuVar40;
            uVar22 = FUN_036e1fd8(lVar35,&local_890);
            if (*(char *)local_888 == '\0') {
              local_110 = 8;
              local_118 = local_10c;
              local_105 = 0;
              local_10c[0] = 0;
              local_120 = ppuVar40;
              FUN_036ddfc0(lVar35,&local_120);
              local_a8 = (undefined **)(puVar46 + 0x10);
              local_a0 = &DAT_040a033e;
              uVar23 = FUN_00710cb0(&local_120,&local_a8);
              uVar22 = 3;
              if ((uVar23 & 1) == 0) {
                uVar22 = 1;
              }
              FUN_0203ee6c(uVar23,uVar22);
            }
            else {
              FUN_0203ee6c(uVar22,2);
            }
            puVar41 = PTR_DAT_04bc3a80;
          }
          FUN_0203e0f0(param_1 + 0x11058,&local_720);
          ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
        }
      }
      else {
        if (iVar16 == 0) {
LAB_0202810c:
          if (iVar20 == -0x21ba1d3a) {
            local_7f0 = (undefined ***)((ulong)local_7f0 & 0xffffffff00000000);
            local_7f8 = (undefined **)0x0;
            local_890 = (undefined **)((ulong)local_890 & 0xffffffff00000000);
            FUN_0203f428(&local_7f8,&local_890);
            local_6e0 = 0x80;
            local_658 = 7;
            local_720._0_4_ = 0;
            local_720._4_4_ = 10;
            local_6e8 = (undefined ***)&local_6dc;
            local_718._0_4_ = SUB84(local_7f8,0);
            local_718._4_4_ = (float)((ulong)local_7f8 >> 0x20);
            uStack_70c = 0x3f800000;
            local_65d = 0;
            local_6f0 = PTR_DAT_04bb2d88 + 0x10;
            local_708 = (uint)local_890;
            local_650 = 0;
            local_654 = 0;
            local_6ae = '\0';
            local_704 = 0;
            local_6fc = 0;
            local_710 = (float)local_7f0;
            local_6d4 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae._8_6_;
            cStack_6ce = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0xe];
            cStack_6cd = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0xf];
            local_6dc = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0];
            uStack_6db = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae._1_5_;
            acStack_6d6 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae._6_2_;
            local_6b4 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0x28];
            local_6b3 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae._41_4_;
            local_6af = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0x2d];
            local_6bc = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae._32_4_;
            cStack_6b8 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0x24];
            cStack_6b7 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0x25];
            cStack_6b6 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0x26];
            cStack_6b5 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0x27];
            acStack_6cc = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae._16_6_;
            local_6c6 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae._22_2_;
            uStack_6c4 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae._24_2_;
            uStack_6c2 = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae._26_4_;
            local_6be = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0x1e];
            cStack_6bd = s_mnc_AIC_Special_AIF_AI_NPC_Mnc_W_040a16ae[0x1f];
            FUN_0203e0f0(param_1 + 0x11058,&local_720);
            goto LAB_02028294;
          }
        }
        else {
          local_718._0_4_ = 1.641824e-36;
          local_718._4_4_ = 0.0;
          local_720 = (undefined **)(puVar46 + 0x10);
          iVar16 = FUN_02758850(&local_720);
          if (iVar16 != 0) {
LAB_02028100:
            iVar20 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
            goto LAB_0202810c;
          }
          local_7f0 = (undefined ***)0x409c6d0;
          local_7f8 = (undefined **)(puVar46 + 0x10);
          iVar16 = FUN_02758850(&local_7f8);
          if (iVar16 != 0) {
            bVar15 = true;
          }
          if (bVar15) goto LAB_02028100;
          iVar20 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
        }
        puVar41 = PTR_DAT_04bc3a80;
        ppuVar40 = local_720;
        if (iVar20 == -0x68a9a319) {
          local_718._0_4_ = 1.600189e-36;
          local_718._4_4_ = 0.0;
          local_720 = (undefined **)(puVar46 + 0x10);
          iVar16 = FUN_02758850(&local_720);
          ppuVar40 = local_720;
          if (iVar16 != 0) {
            local_7f0 = (undefined ***)0x406d5b1;
            local_7f8 = (undefined **)(puVar46 + 0x10);
            iVar16 = FUN_02758850(&local_7f8);
            ppuVar40 = local_720;
            if (iVar16 == 0) {
              FUN_007091b4(&local_720);
              local_708 = 0x80000000;
              local_718._0_4_ = 125.0;
              local_710 = 142.0;
              local_7f0 = (undefined ***)0x40a16ae;
              goto LAB_02028850;
            }
          }
        }
      }
    }
  }
LAB_0202886c:
  iVar16 = *(int *)(puVar41 + 0x38);
  local_720 = ppuVar40;
  if (iVar16 == -0x21ba1d3a) {
    lVar35 = *(long *)PTR_DAT_04bb39b0;
    pbVar31 = PTR_DAT_04bb32e0;
    if (lVar35 == 0) {
LAB_020288d8:
      if (*pbVar31 < 8) goto LAB_02028948;
LAB_020288e4:
      if ((long *)*plVar39 == (long *)0x0) {
LAB_02028940:
        pbVar31 = PTR_DAT_04bb5038;
        goto LAB_02028948;
      }
      lVar35 = *(long *)*plVar39;
      bVar34 = *(byte *)(lVar35 + 0x473);
      pbVar31 = PTR_DAT_04bb5038;
      if ((long)(char)bVar34 != 0xffffffffffffffff) {
        puVar44 = (uint *)(lVar35 + 0x48) + ((long)(char)bVar34 & 0xffffffffU) * 0x20;
        if (7 < bVar34) {
          puVar44 = (uint *)(lVar35 + 0x48);
        }
        if ((*puVar44 & 8) != 0) {
          pbVar31 = (byte *)(lVar35 + 0x471);
        }
      }
      bVar34 = *pbVar31;
      bVar15 = 7 < bVar34;
      if (bVar15) {
        bVar34 = 0xff;
      }
      local_c8 = (undefined **)CONCAT71(local_c8._1_7_,bVar34);
      if (bVar15) goto LAB_02028940;
    }
    else {
      if (*(int *)(lVar35 + 0x15c) != 0) {
        pbVar31 = (byte *)(lVar35 + 0x158);
      }
      if (7 < *pbVar31) {
        if ((*(int *)(lVar35 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar31 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_020288d8;
        }
        goto LAB_020288e4;
      }
LAB_02028948:
      bVar34 = *pbVar31;
      if (7 < bVar34) {
        bVar34 = 0xff;
      }
      local_c8 = (undefined **)CONCAT71(local_c8._1_7_,bVar34);
    }
    local_718._0_4_ = 1.6690657e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)(puVar46 + 0x10);
    iVar16 = FUN_02753180(&local_c8,&local_720);
    if (iVar16 == 0) {
      local_7f0 = (undefined ***)0x40c59c9;
      local_7f8 = (undefined **)(puVar46 + 0x10);
      iVar16 = FUN_02758850(&local_7f8);
      if (iVar16 != 0) goto LAB_020289bc;
      local_888 = (undefined ***)0x40b06d8;
      local_890 = (undefined **)(puVar46 + 0x10);
      iVar16 = FUN_02758850(&local_890);
      if (iVar16 != 0) goto LAB_020289bc;
      local_118 = (byte *)0x40879cc;
      local_120 = (undefined **)(puVar46 + 0x10);
      iVar16 = FUN_02758850(&local_120);
      if (iVar16 == 0) {
        local_a8 = (undefined **)(puVar46 + 0x10);
        local_a0 = (byte *)0x40bfaa6;
        iVar16 = FUN_02758850(&local_a8);
        if (iVar16 != 0) goto LAB_020289bc;
      }
      uVar23 = FUN_0290d828();
      if ((uVar23 & 1) == 0) {
        puVar44 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar17 = *puVar44 ^ *puVar44 << 0xb;
        uVar19 = puVar44[3];
        *puVar44 = puVar44[1];
        puVar44[1] = puVar44[2];
        uVar17 = uVar17 >> 8 ^ uVar19 >> 0x13 ^ uVar17 ^ uVar19;
        puVar44[2] = uVar19;
        puVar44[3] = uVar17;
        if ((uVar17 & 1) != 0) goto LAB_02029350;
        goto LAB_020289bc;
      }
      local_720 = (undefined **)(puVar46 + 0x10);
      local_718._0_4_ = 1.6309652e-36;
      local_718._4_4_ = 0.0;
      iVar16 = FUN_02758850(&local_720);
      if (iVar16 == 0) {
        uVar17 = 0;
      }
      else {
LAB_02029350:
        uVar17 = FUN_0203f718();
      }
    }
    else {
LAB_020289bc:
      uVar17 = 0;
    }
    local_720 = (undefined **)(puVar46 + 0x10);
    local_718._0_4_ = 1.6309652e-36;
    local_718._4_4_ = 0.0;
    FUN_02758bb8(&local_720,uVar17 & 1);
    iVar16 = *(int *)(puVar41 + 0x38);
  }
  if (iVar16 == -0x6efba09b) {
    local_718._0_4_ = 1.6342514e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)(puVar46 + 0x10);
    iVar16 = FUN_02758850(&local_720);
    if (iVar16 == 1) {
      local_7e8._0_4_ = 0;
      local_7e8._4_4_ = 0x3f800000;
      local_7e0 = 0;
      local_7f8 = (undefined **)0xffffffff00000000;
      local_7f0 = (undefined ***)0x0;
      local_7c0 = &local_7b4;
      local_7b8 = 0x80;
      local_735 = 0;
      local_7b4 = local_7b4 & 0xffffffffffffff00;
      local_7c8 = PTR_DAT_04bb2d88 + 0x10;
      local_728 = 0;
      local_72c = 0;
      local_7dc = 0;
      uStack_7d8 = 0;
      local_7d4 = 0;
      local_730 = 7;
      uVar23 = FUN_0291e130(&local_720,&local_890,9);
      bVar15 = (uVar23 & 1) == 0;
      fVar48 = (float)local_718 + 10.0;
      uVar18 = local_720._4_4_;
      if (bVar15) {
        fVar48 = 215.0;
        uVar18 = 0;
      }
      lVar35 = *(long *)PTR_DAT_04bb39b0;
      uVar49 = (undefined4)local_720;
      if (bVar15) {
        uVar49 = 0x4400c000;
      }
      pbVar31 = PTR_DAT_04bb32e0;
      if (lVar35 == 0) {
LAB_02028b0c:
        if (*pbVar31 < 8) goto LAB_02028b7c;
LAB_02028b18:
        if ((long *)*plVar39 == (long *)0x0) {
LAB_02028b74:
          pbVar31 = PTR_DAT_04bb5038;
          goto LAB_02028b7c;
        }
        lVar35 = *(long *)*plVar39;
        bVar34 = *(byte *)(lVar35 + 0x473);
        pbVar31 = PTR_DAT_04bb5038;
        if ((long)(char)bVar34 != 0xffffffffffffffff) {
          puVar44 = (uint *)(lVar35 + 0x48) + ((long)(char)bVar34 & 0xffffffffU) * 0x20;
          if (7 < bVar34) {
            puVar44 = (uint *)(lVar35 + 0x48);
          }
          if ((*puVar44 & 8) != 0) {
            pbVar31 = (byte *)(lVar35 + 0x471);
          }
        }
        bVar34 = *pbVar31;
        bVar15 = 7 < bVar34;
        if (bVar15) {
          bVar34 = 0xff;
        }
        local_890 = (undefined **)CONCAT71(local_890._1_7_,bVar34);
        if (bVar15) goto LAB_02028b74;
      }
      else {
        if (*(int *)(lVar35 + 0x15c) != 0) {
          pbVar31 = (byte *)(lVar35 + 0x158);
        }
        if (7 < *pbVar31) {
          if ((*(int *)(lVar35 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar31 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_02028b0c;
          }
          goto LAB_02028b18;
        }
LAB_02028b7c:
        bVar34 = *pbVar31;
        if (7 < bVar34) {
          bVar34 = 0xff;
        }
        local_890 = (undefined **)CONCAT71(local_890._1_7_,bVar34);
      }
      local_718._0_4_ = 1.6841362e-36;
      local_718._4_4_ = 0.0;
      local_720 = (undefined **)(puVar46 + 0x10);
      iVar16 = FUN_0274bce0(&local_890,&local_720);
      puVar13 = local_7c0;
      if (iVar16 == 0) {
        local_7e0 = 0x80000000;
      }
      else {
        uVar49 = 0x44048000;
        uVar18 = 0xc154428f;
        fVar48 = 150.0;
        local_7e0 = 0;
      }
      local_7f8 = (undefined **)CONCAT44(10,(undefined4)local_7f8);
      local_7f0 = (undefined ***)CONCAT44(uVar18,uVar49);
      local_7e8._0_4_ = fVar48;
      if (local_7c0 != (ulong *)"man/AIC:Special/AIF:AI_NPC_Man_WherearenField") {
        iVar16 = 0x2d;
        if (local_7b8 < 0x2e) {
          iVar16 = local_7b8 + -1;
        }
        memcpy(local_7c0,"man/AIC:Special/AIF:AI_NPC_Man_WherearenField",(long)iVar16);
        *(char *)((long)puVar13 + (long)iVar16) = '\0';
      }
      FUN_0203e0f0(param_1 + 0x11058,&local_7f8);
    }
  }
  iVar16 = *(int *)(puVar41 + 0x38);
  if (iVar16 == -0x21ba1d3a) {
    local_718._0_4_ = 1.5803988e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)(puVar46 + 0x10);
    iVar16 = FUN_02758850(&local_720);
    if (iVar16 != 0) {
      local_65d = 0;
      local_650 = 0;
      local_6e8 = (undefined ***)&local_6dc;
      local_720._0_4_ = 0;
      local_720._4_4_ = 10;
      local_710 = 160.0;
      uStack_70c = 0x3f800000;
      local_6f0 = PTR_DAT_04bb2d88 + 0x10;
      local_718._0_4_ = 185.0;
      local_718._4_4_ = 0.0;
      local_6e0 = 0x80;
      local_658 = 7;
      local_654 = 0;
      local_704 = 0;
      local_6fc = 0;
      local_708 = 0;
      local_6d4 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28._8_6_;
      cStack_6ce = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0xe];
      cStack_6cd = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0xf];
      local_6dc = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0];
      uStack_6db = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28._1_5_;
      acStack_6d6 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28._6_2_;
      local_6ae = '\0';
      local_6b4 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0x28];
      local_6b3 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28._41_4_;
      local_6af = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0x2d];
      local_6bc = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28._32_4_;
      cStack_6b8 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0x24];
      cStack_6b7 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0x25];
      cStack_6b6 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0x26];
      cStack_6b5 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0x27];
      uStack_6c4 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28._24_2_;
      uStack_6c2 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28._26_4_;
      local_6be = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0x1e];
      cStack_6bd = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28[0x1f];
      acStack_6cc = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28._16_6_;
      local_6c6 = s_rco_AIC_Special_AIF_AI_NPC_Rco_W_040dfd28._22_2_;
      FUN_0203e0f0(param_1 + 0x11058,&local_720);
    }
    iVar16 = *(int *)(puVar41 + 0x38);
  }
  if (iVar16 == -0x6efba09b) {
LAB_02028d74:
    uVar23 = FUN_0203f890(param_1,0);
    ppuVar40 = local_720;
    if ((uVar23 & 1) == 0) {
      local_8d = 0;
      local_98 = 8;
      local_a0 = local_94;
      local_94[0] = 0;
      ppuVar40 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
      local_a8 = ppuVar40;
      uVar23 = FUN_02213be0(&DAT_0545a400,&local_a8);
      if ((uVar23 & 1) == 0) {
        FUN_0252d11c(&local_7f8);
        local_718._0_4_ = 1.6800687e-36;
        local_718._4_4_ = 0.0;
        local_720 = (undefined **)(puVar46 + 0x10);
        iVar16 = FUN_02753180(&local_7f8,&local_720);
        ppuVar40 = local_720;
        local_718 = (undefined ***)CONCAT44(local_718._4_4_,(float)local_718);
        if (iVar16 != 0) {
          local_718 = (undefined ***)CONCAT44(local_718._4_4_,(float)local_718);
          if (*(int *)(puVar41 + 0x38) == -0x5c2fda8c) {
            (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
            (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
            puVar41 = PTR_DAT_04bb2d88;
            if (DAT_0545c418 == &DAT_0409b647) {
LAB_02029240:
              local_65d = 0;
              local_6dc = 0;
              local_6e8 = (undefined ***)&local_6dc;
              local_704 = 0;
              local_6fc = 0;
              puVar46 = PTR_DAT_04bb2d88 + 0x10;
              local_650 = 0;
              local_6e0 = 0x80;
              local_658 = 7;
              local_654 = 0;
              local_720._0_4_ = 0;
              local_720._4_4_ = 10;
              local_718._0_4_ = 0.0;
              local_718._4_4_ = 0.0;
              local_710 = 0.0;
              uStack_70c = 0x3f800000;
              local_708 = 0;
              local_6f0 = puVar46;
              FUN_0074fda4(&local_7f8,"mnc/AIC:Special/AIF:AI_NPC_Mnc_WherearenSchool");
              pppuVar14 = local_6e8;
              (*(code *)local_7f8[3])(&local_7f8);
              pppuVar12 = local_7f0;
              if (pppuVar14 != local_7f0) {
                (*(code *)local_7f8[3])(&local_7f8);
                lVar35 = 0;
                do {
                  if (*(char *)((long)local_7f0 + lVar35) == '\0') goto LAB_020299d4;
                  if (*(char *)((long)local_7f0 + lVar35 + 1) == '\0') {
                    lVar35 = lVar35 + 1;
                    goto LAB_020299d4;
                  }
                  if (*(char *)((long)local_7f0 + lVar35 + 2) == '\0') {
                    lVar35 = lVar35 + 2;
                    goto LAB_020299d4;
                  }
                  lVar35 = lVar35 + 3;
                } while (lVar35 != 0x80001);
                lVar35 = 0;
LAB_020299d4:
                iVar16 = (int)lVar35;
                if (local_6e0 <= (int)lVar35) {
                  iVar16 = local_6e0 + -1;
                }
                memcpy(pppuVar14,pppuVar12,(long)iVar16);
                *(char *)((long)pppuVar14 + (long)iVar16) = '\0';
              }
              lVar35 = param_1 + 0x11058;
              FUN_0203e0f0(lVar35,&local_720);
              local_6e8 = (undefined ***)&local_6dc;
              local_6e0 = 0x80;
              local_704 = 0;
              local_6fc = 0;
              local_718._0_4_ = 1000.0;
              local_718._4_4_ = 1000.0;
              local_65d = 0;
              local_6dc = 0;
              local_658 = 7;
              local_650 = 0;
              local_654 = 0;
              local_720._0_4_ = 0;
              local_720._4_4_ = 10;
              local_710 = 1000.0;
              uStack_70c = 0x3f800000;
              local_708 = 0;
              local_6f0 = puVar46;
              FUN_0074fda4(&local_7f8,"otg/AIC:Normal");
              pppuVar14 = local_6e8;
              (*(code *)local_7f8[3])(&local_7f8);
              pppuVar12 = local_7f0;
              if (pppuVar14 != local_7f0) {
                (*(code *)local_7f8[3])(&local_7f8);
                lVar25 = 0;
                do {
                  if (*(char *)((long)local_7f0 + lVar25) == '\0') goto LAB_02029aec;
                  if (*(char *)((long)local_7f0 + lVar25 + 1) == '\0') {
                    lVar25 = lVar25 + 1;
                    goto LAB_02029aec;
                  }
                  if (*(char *)((long)local_7f0 + lVar25 + 2) == '\0') {
                    lVar25 = lVar25 + 2;
                    goto LAB_02029aec;
                  }
                  lVar25 = lVar25 + 3;
                } while (lVar25 != 0x80001);
                lVar25 = 0;
LAB_02029aec:
                iVar16 = (int)lVar25;
                if (local_6e0 <= (int)lVar25) {
                  iVar16 = local_6e0 + -1;
                }
                memcpy(pppuVar14,pppuVar12,(long)iVar16);
                *(char *)((long)pppuVar14 + (long)iVar16) = '\0';
              }
              FUN_0203e0f0(lVar35,&local_720);
              local_6e8 = (undefined ***)&local_6dc;
              local_65d = 0;
              local_704 = 0;
              local_6fc = 0;
              local_718._0_4_ = -1000.0;
              local_718._4_4_ = -1000.0;
              local_6e0 = 0x80;
              local_6dc = 0;
              local_658 = 7;
              local_650 = 0;
              local_654 = 0;
              local_720._0_4_ = 0;
              local_720._4_4_ = 10;
              local_710 = -1000.0;
              uStack_70c = 0x3f800000;
              local_708 = 0;
              local_6f0 = puVar41 + 0x10;
              FUN_0074fda4(&local_7f8,"man/AIC:Normal");
              pppuVar14 = local_6e8;
              (*(code *)local_7f8[3])(&local_7f8);
              pppuVar12 = local_7f0;
              if (pppuVar14 != local_7f0) {
                (*(code *)local_7f8[3])(&local_7f8);
                lVar25 = 0;
                do {
                  if (*(char *)((long)local_7f0 + lVar25) == '\0') goto LAB_02029c08;
                  if (*(char *)((long)local_7f0 + lVar25 + 1) == '\0') {
                    lVar25 = lVar25 + 1;
                    goto LAB_02029c08;
                  }
                  if (*(char *)((long)local_7f0 + lVar25 + 2) == '\0') {
                    lVar25 = lVar25 + 2;
                    goto LAB_02029c08;
                  }
                  lVar25 = lVar25 + 3;
                } while (lVar25 != 0x80001);
                lVar25 = 0;
LAB_02029c08:
                iVar16 = (int)lVar25;
                if (local_6e0 <= (int)lVar25) {
                  iVar16 = local_6e0 + -1;
                }
                memcpy(pppuVar14,pppuVar12,(long)iVar16);
                *(char *)((long)pppuVar14 + (long)iVar16) = '\0';
              }
              FUN_0203e0f0(lVar35,&local_720);
              puVar46 = PTR_DAT_04bb2020;
              local_718._0_4_ = 1.5722153e-36;
              local_718._4_4_ = 0.0;
              puVar9 = PTR_DAT_04bb2020 + 0x10;
              local_720 = (undefined **)puVar9;
              iVar16 = FUN_02758850(&local_720);
              local_718._0_4_ = 1.6758767e-36;
              local_718._4_4_ = 0.0;
              local_720 = (undefined **)puVar9;
              iVar20 = FUN_02758850(&local_720);
              local_718._0_4_ = 1.6847322e-36;
              local_718._4_4_ = 0.0;
              local_720 = (undefined **)puVar9;
              iVar21 = FUN_02758850(&local_720);
              local_6e8 = (undefined ***)&local_6dc;
              local_720._0_4_ = 0;
              local_720._4_4_ = 0xffffffff;
              local_6e0 = 0x80;
              local_65d = 0;
              acStack_6cc = s_WherearenObjMncBox_None_None_Whe_040e5237._16_6_;
              local_6c6 = s_WherearenObjMncBox_None_None_Whe_040e5237._22_2_;
              uStack_6c4 = s_WherearenObjMncBox_None_None_Whe_040e5237._24_2_;
              uStack_6c2 = s_WherearenObjMncBox_None_None_Whe_040e5237._26_4_;
              local_6be = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1e];
              cStack_6bd = s_WherearenObjMncBox_None_None_Whe_040e5237[0x1f];
              local_658 = 7;
              local_650 = 0;
              local_654 = 0;
              local_704 = 0;
              local_6fc = 0;
              local_6ad = 0;
              local_718._4_4_ = 0.0;
              local_6bc = s_WherearenObjMncBox_None_None_Whe_040e5237._32_4_;
              cStack_6b8 = s_WherearenObjMncBox_None_None_Whe_040e5237[0x24];
              cStack_6b7 = s_WherearenObjMncBox_None_None_Whe_040e5237[0x25];
              cStack_6b6 = s_WherearenObjMncBox_None_None_Whe_040e5237[0x26];
              cStack_6b5 = s_WherearenObjMncBox_None_None_Whe_040e5237[0x27];
              local_6b4 = s_WherearenObjMncBox_None_None_Whe_040e5237[0x28];
              local_6b3 = s_WherearenObjMncBox_None_None_Whe_040e5237._41_4_;
              local_6af = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2d];
              local_6ae = s_WherearenObjMncBox_None_None_Whe_040e5237[0x2e];
              local_6dc = s_WherearenObjMncBox_None_None_Whe_040e5237[0];
              uStack_6db = s_WherearenObjMncBox_None_None_Whe_040e5237._1_5_;
              acStack_6d6 = s_WherearenObjMncBox_None_None_Whe_040e5237._6_2_;
              local_6d4 = s_WherearenObjMncBox_None_None_Whe_040e5237._8_6_;
              cStack_6ce = s_WherearenObjMncBox_None_None_Whe_040e5237[0xe];
              cStack_6cd = s_WherearenObjMncBox_None_None_Whe_040e5237[0xf];
              uStack_70c = 0x3f800000;
              local_708 = (uint)(long)((float)iVar21 * 11930465.0);
              local_718._0_4_ = (float)iVar16 * 5.0;
              local_710 = (float)iVar20 * 5.0;
              local_6f0 = puVar41 + 0x10;
              uVar18 = FUN_0224b5e0(*(undefined8 *)PTR_DAT_04bb60a8,&local_720,0);
              *(undefined4 *)(*(long *)PTR_DAT_04bb27f8 + 0x1a84) = uVar18;
              plVar39 = (long *)PTR_DAT_04bb27d0;
              puVar47 = (ushort *)PTR_DAT_04bb6298;
              ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
              local_718 = (undefined ***)CONCAT44(local_718._4_4_,(float)local_718);
            }
            else {
              uVar23 = 0;
              bVar15 = true;
              do {
                ppuVar40 = local_720;
                local_718 = (undefined ***)CONCAT44(local_718._4_4_,(float)local_718);
                if (DAT_0545c418[uVar23] != (&DAT_0409b647)[uVar23]) break;
                if (DAT_0545c418[uVar23] == '\0') {
                  local_718 = (undefined ***)CONCAT44(local_718._4_4_,(float)local_718);
                  if (bVar15) goto LAB_02029240;
                  break;
                }
                bVar15 = uVar23 < 0x80000;
                uVar23 = uVar23 + 1;
                local_718 = (undefined ***)CONCAT44(local_718._4_4_,(float)local_718);
              } while (uVar23 != 0x80001);
            }
          }
        }
      }
      else {
        local_b8 = 8;
        local_c0 = local_b4;
        local_ad = 0;
        local_b4[0] = 0;
        local_d8 = 8;
        local_cd = 0;
        local_d4[0] = 0;
        local_e0 = local_d4;
        local_e8 = ppuVar40;
        local_c8 = ppuVar40;
        if ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 0) ||
           ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0 &&
            ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)))) {
          uVar23 = FUN_0376ee00(&local_c8,&local_e8);
          if ((uVar23 & 1) != 0) {
            (*(code *)local_c8[3])(&local_c8);
            (*(code *)local_c8[3])(&local_c8);
            pbVar31 = local_c0;
            (*(code *)local_a8[3])(&local_a8);
            ppuVar40 = local_720;
            if (pbVar31 == local_a0) goto LAB_02029504;
            uVar23 = 0;
            bVar15 = true;
            do {
              if (local_c0[uVar23] != local_a0[uVar23]) break;
              if (local_c0[uVar23] == 0) goto LAB_02029028;
              bVar15 = uVar23 < 0x80000;
              uVar23 = uVar23 + 1;
            } while (uVar23 != 0x80001);
          }
        }
        else {
          uVar23 = FUN_0376b510(&local_c8,*(undefined2 *)(*(long *)PTR_DAT_04bb27f8 + 0x2a));
          if ((uVar23 & 1) != 0) {
            (*(code *)local_c8[3])(&local_c8);
            (*(code *)local_c8[3])(&local_c8);
            pbVar31 = local_c0;
            (*(code *)local_a8[3])(&local_a8);
            ppuVar40 = local_720;
            if (pbVar31 == local_a0) goto LAB_02029504;
            uVar23 = 0;
            bVar15 = true;
            do {
              if (local_c0[uVar23] != local_a0[uVar23]) break;
              if (local_c0[uVar23] == 0) goto LAB_02029028;
              bVar15 = uVar23 < 0x80000;
              uVar23 = uVar23 + 1;
            } while (uVar23 != 0x80001);
          }
        }
LAB_0202902c:
        local_880._0_4_ = 0x20;
        local_880._4_4_ = s_AI_NPC__s_Wherearen_0409c6f3._0_4_;
        uStack_878 = s_AI_NPC__s_Wherearen_0409c6f3._4_4_;
        local_874 = s_AI_NPC__s_Wherearen_0409c6f3._8_7_;
        uStack_86d = CONCAT31(0x6e6572,s_AI_NPC__s_Wherearen_0409c6f3[0xf]);
        local_888 = (undefined ***)(local_880 + 4);
        local_85d = 0;
        local_869 = 0;
        local_890 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
        FUN_006d8678(&local_120,&DAT_0407ebb1);
        FUN_0252d11c(&local_7f8);
        local_718._0_4_ = 1.6800687e-36;
        local_718._4_4_ = 0.0;
        local_720 = (undefined **)(puVar46 + 0x10);
        iVar16 = FUN_02753180(&local_7f8,&local_720);
        if (iVar16 == 0) {
LAB_020290cc:
          fVar48 = 560.0;
          uVar18 = 0x43c80000;
        }
        else {
          uVar18 = 0;
          fVar48 = 0.0;
          if (*(int *)(puVar41 + 0x38) != -0x5c2fda8c) goto LAB_020290cc;
        }
        (*(code *)local_a8[3])(&local_a8);
        (*(code *)local_a8[3])(&local_a8);
        if (local_a0 == &DAT_040bac98) {
LAB_02029150:
          puVar41 = &UNK_0409c707;
LAB_02029398:
          (*(code *)local_890[3])(&local_890);
          FUN_038d1270(&local_120,local_888,puVar41);
        }
        else {
          uVar23 = 0;
          bVar15 = true;
          do {
            if (local_a0[uVar23] != (&DAT_040bac98)[uVar23]) break;
            if (local_a0[uVar23] == 0) {
              if (bVar15) goto LAB_02029150;
              break;
            }
            bVar15 = uVar23 < 0x80000;
            uVar23 = uVar23 + 1;
          } while (uVar23 != 0x80001);
          (*(code *)local_a8[3])(&local_a8);
          (*(code *)local_a8[3])(&local_a8);
          if (local_a0 == &DAT_040b026f) {
LAB_020291c8:
            puVar41 = &UNK_040e5267;
            goto LAB_02029398;
          }
          uVar23 = 0;
          bVar15 = true;
          do {
            if (local_a0[uVar23] != (&DAT_040b026f)[uVar23]) break;
            if (local_a0[uVar23] == 0) {
              if (bVar15) goto LAB_020291c8;
              break;
            }
            bVar15 = uVar23 < 0x80000;
            uVar23 = uVar23 + 1;
          } while (uVar23 != 0x80001);
          (*(code *)local_a8[3])(&local_a8);
          (*(code *)local_a8[3])(&local_a8);
          if (local_a0 == &DAT_0408be95) {
LAB_0202937c:
            fVar48 = 250.0;
            uVar18 = 0x4414c000;
            puVar41 = &DAT_040cf9b1;
            goto LAB_02029398;
          }
          uVar23 = 0;
          bVar15 = true;
          do {
            if (local_a0[uVar23] != (&DAT_0408be95)[uVar23]) break;
            if (local_a0[uVar23] == 0) {
              if (bVar15) goto LAB_0202937c;
              break;
            }
            bVar15 = uVar23 < 0x80000;
            uVar23 = uVar23 + 1;
          } while (uVar23 != 0x80001);
        }
        local_65d = 0;
        local_720._0_4_ = 0;
        local_720._4_4_ = 10;
        uStack_70c = 0x3f800000;
        local_708 = 0;
        local_6e0 = 0x80;
        local_6e8 = (undefined ***)&local_6dc;
        local_658 = 7;
        local_6f0 = PTR_DAT_04bb2d88 + 0x10;
        local_6dc = '\0';
        local_650 = 0;
        local_654 = 0;
        local_704 = 0;
        local_6fc = 0;
        local_718._4_4_ = 0.0;
        local_718._0_4_ = (float)uVar18;
        local_710 = fVar48;
        (*(code *)local_a8[3])(&local_a8);
        pbVar31 = local_a0;
        (*(code *)local_120[3])(&local_120);
        FUN_0074fda4(&local_7f8,"%s/AIC:Special/AIF:%s",pbVar31,local_118);
        pppuVar14 = local_6e8;
        (*(code *)local_7f8[3])(&local_7f8);
        pppuVar12 = local_7f0;
        if (pppuVar14 != local_7f0) {
          (*(code *)local_7f8[3])(&local_7f8);
          lVar35 = 0;
          do {
            if (*(char *)((long)local_7f0 + lVar35) == '\0') goto LAB_020294cc;
            if (*(char *)((long)local_7f0 + lVar35 + 1) == '\0') {
              lVar35 = lVar35 + 1;
              goto LAB_020294cc;
            }
            if (*(char *)((long)local_7f0 + lVar35 + 2) == '\0') {
              lVar35 = lVar35 + 2;
              goto LAB_020294cc;
            }
            lVar35 = lVar35 + 3;
          } while (lVar35 != 0x80001);
          lVar35 = 0;
LAB_020294cc:
          iVar16 = (int)lVar35;
          if (local_6e0 <= (int)lVar35) {
            iVar16 = local_6e0 + -1;
          }
          memcpy(pppuVar14,pppuVar12,(long)iVar16);
          *(char *)((long)pppuVar14 + (long)iVar16) = '\0';
        }
        FUN_0203e0f0(param_1 + 0x11058,&local_720);
        ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
        local_718 = (undefined ***)CONCAT44(local_718._4_4_,(float)local_718);
      }
    }
  }
  else {
    FUN_0252d11c(&local_7f8);
    local_718._0_4_ = 1.6800687e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)(puVar46 + 0x10);
    iVar16 = FUN_02753180(&local_7f8,&local_720);
    ppuVar40 = local_720;
    if (iVar16 != 0) {
      if (*(int *)(puVar41 + 0x38) == -0x5c2fda8c) goto LAB_02028d74;
    }
  }
LAB_02029504:
  local_720._4_4_ = (undefined4)((ulong)ppuVar40 >> 0x20);
  uVar28 = *puVar47;
  if (uVar28 != 0xffff) {
    local_720._0_4_ = 0x1a;
    puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar28 * 8);
    if (0xff < (uint)(int)(short)uVar28) {
      puVar44 = (uint *)PTR_DAT_04bc39f8;
    }
    ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,0x1a);
    if ((*puVar44 >> 0x1a & 1) != 0) {
      lVar35 = *(long *)PTR_DAT_04bb4e28;
      ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,0x1a);
      if (lVar35 != 0) {
        uVar23 = FUN_03720710(lVar35);
        ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
        if ((uVar23 & 1) != 0) {
          local_718._0_4_ = (float)param_1;
          local_718._4_4_ = (float)((ulong)param_1 >> 0x20);
          local_720._0_4_ = 0x4a6ed00;
          local_720._4_4_ = 0;
          local_7f8 = (undefined **)CONCAT44(local_7f8._4_4_,1);
          FUN_03735600(lVar35,&local_720,&local_7f8);
          ppuVar40 = (undefined **)CONCAT44(local_720._4_4_,(undefined4)local_720);
        }
      }
    }
  }
  lVar25 = *(long *)(param_1 + 0x11060);
  lVar35 = param_1 + 0x11058;
  local_720 = ppuVar40;
  if (lVar25 != lVar35) {
    lVar29 = lVar25 + -0xd8;
    do {
      FUN_0203d900(param_1,lVar29);
      lVar25 = *(long *)(lVar25 + 8);
      lVar29 = lVar25 + -0xd8;
    } while (lVar29 != param_1 + 0x10f80);
  }
  FUN_0203ddb0(param_1);
  uVar28 = *puVar47;
  if (uVar28 == 0xffff) {
    return;
  }
  local_720._0_4_ = 3;
  puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar28 * 8);
  if (0xff < (uint)(int)(short)uVar28) {
    puVar44 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar44 >> 3 & 1) != 0) {
    uVar23 = FUN_016cf630();
    if ((uVar23 & 1) == 0) {
      local_718._0_4_ = 1.6455328e-36;
      local_718._4_4_ = 0.0;
      local_720 = (undefined **)(puVar46 + 0x10);
      uVar23 = FUN_016d1770(&local_720,0);
      if ((uVar23 & 1) == 0) {
        puVar32 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
        if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
          lVar29 = (**(code **)(*(long *)*puVar32 + 0x38))();
          lVar25 = 0;
          if (lVar29 != 0) {
            lVar25 = lVar29 + 0x70;
          }
        }
        else {
          lVar25 = (**(code **)(*(long *)puVar32[0x26] + 0x38))();
        }
        plVar33 = (long *)(lVar25 + 0x1bf260);
        if (((long *)*plVar33 == (long *)0x0) ||
           (puVar32 = *(undefined8 **)*plVar33, puVar32 == (undefined8 *)0x0)) {
          uVar23 = 0;
        }
        else {
          uVar23 = (**(code **)*puVar32)();
          uVar23 = uVar23 & 0xffffffff;
        }
        if (*(int *)(param_1 + 0x11068) == *(int *)(param_1 + 0x11080) + -1) {
          local_718._0_4_ = 1.5930677e-36;
          local_718._4_4_ = 0.0;
          local_720 = (undefined **)(puVar46 + 0x10);
          iVar16 = FUN_0273ea30(&local_720);
          if (iVar16 == 1) {
            bVar15 = true;
          }
          else {
            local_718._0_4_ = 1.681208e-36;
            local_718._4_4_ = 0.0;
            local_720 = (undefined **)(puVar46 + 0x10);
            iVar16 = FUN_0273ea30(&local_720);
            bVar15 = iVar16 == 1;
          }
          if ((((uVar23 & 1) != 0) && (*plVar33 != 0)) &&
             (puVar32 = *(undefined8 **)(*plVar33 + 8), puVar32 != (undefined8 *)0x0)) {
            (**(code **)*puVar32)();
          }
          if (!bVar15) goto LAB_02029804;
        }
        else if ((((uVar23 & 1) != 0) && (*plVar33 != 0)) &&
                (puVar32 = *(undefined8 **)(*plVar33 + 8), puVar32 != (undefined8 *)0x0)) {
          (**(code **)*puVar32)();
        }
        local_710 = 0.0;
        uStack_70c = 0x3f800000;
        local_6e0 = 0x80;
        local_6e8 = (undefined ***)&local_6dc;
        local_658 = 7;
        uStack_6c4 = 0x6f65;
        local_718._0_4_ = 0.0;
        local_718._4_4_ = 0.0;
        local_708 = 0;
        local_6f0 = PTR_DAT_04bb2d88 + 0x10;
        local_65d = 0;
        local_650 = 0;
        local_654 = 0;
        local_704 = 0;
        local_6fc = 0;
        uStack_6c2 = uStack_6c2 & 0xffffff00;
        local_6dc = s_seo_AIC_Seo_AIF_AI_NPC_Seo_040f521d[0];
        uStack_6db = s_seo_AIC_Seo_AIF_AI_NPC_Seo_040f521d._1_5_;
        acStack_6d6 = s_seo_AIC_Seo_AIF_AI_NPC_Seo_040f521d._6_2_;
        local_6d4 = s_seo_AIC_Seo_AIF_AI_NPC_Seo_040f521d._8_6_;
        cStack_6ce = s_seo_AIC_Seo_AIF_AI_NPC_Seo_040f521d[0xe];
        cStack_6cd = s_seo_AIC_Seo_AIF_AI_NPC_Seo_040f521d[0xf];
        local_720._0_4_ = 0;
        local_720._4_4_ = 10;
        acStack_6cc = s_seo_AIC_Seo_AIF_AI_NPC_Seo_040f521d._16_6_;
        local_6c6 = s_seo_AIC_Seo_AIF_AI_NPC_Seo_040f521d._22_2_;
        lVar25 = FUN_0203e0f0(lVar35,&local_720);
        if (lVar25 != 0) {
          FUN_0203d900(param_1,&local_720);
        }
      }
    }
  }
LAB_02029804:
  uVar28 = *puVar47;
  if (uVar28 == 0xffff) {
    return;
  }
  puVar44 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar28 * 8);
  if (0xff < (uint)(int)(short)uVar28) {
    puVar44 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar44 >> 3 & 1) == 0) {
    return;
  }
  if ((*puVar44 >> 0xe & 1) != 0) {
    return;
  }
  plVar33 = (long *)*plVar39;
  puVar41 = puVar46 + 0x10;
  local_718._0_4_ = 1.669063e-36;
  local_718._4_4_ = 0.0;
  local_720 = (undefined **)puVar41;
  FUN_0273f0a0(&local_720);
  if (1 < *(byte *)(*plVar33 + 0x476)) {
    local_718._0_4_ = 1.5880664e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)puVar41;
    iVar16 = FUN_02743000(&local_720);
    if (iVar16 == 0) {
      if (1 < *(byte *)(*plVar33 + 0x476)) {
        return;
      }
      goto LAB_02029990;
    }
  }
  puVar9 = PTR_DAT_04bb32e8;
  local_7f8 = *(undefined ***)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_718 = (undefined ***)(PTR_DAT_04bbbac0 + 0x10);
  local_720 = (undefined **)puVar41;
  uVar23 = FUN_028d4a98(&local_7f8,&local_720);
  if (*(byte *)(*plVar33 + 0x476) < 2) {
    if ((uVar23 & 1) == 0) {
LAB_02029990:
      local_720 = (undefined **)(puVar46 + 0x10);
      local_718._0_4_ = 1.669063e-36;
      local_718._4_4_ = 0.0;
      FUN_0273f3c4(&local_720,0);
      return;
    }
    local_720 = (undefined **)(puVar46 + 0x10);
    local_718._0_4_ = 1.669063e-36;
    local_718._4_4_ = 0.0;
    FUN_0273f3c4(&local_720,1);
  }
  else if ((uVar23 & 1) == 0) {
    return;
  }
  local_718._0_4_ = 1.6455454e-36;
  local_718._4_4_ = 0.0;
  local_720 = (undefined **)(puVar46 + 0x10);
  uVar23 = FUN_0273f0a0(&local_720);
  if ((uVar23 & 1) != 0) {
    return;
  }
  puVar32 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar29 = (**(code **)(*(long *)*puVar32 + 0x38))();
    lVar25 = 0;
    if (lVar29 != 0) {
      lVar25 = lVar29 + 0x70;
    }
  }
  else if (puVar32 == (undefined8 *)0x0) {
    lVar25 = 0;
  }
  else {
    lVar25 = 0;
    if ((long *)puVar32[0x26] != (long *)0x0) {
      lVar25 = (**(code **)(*(long *)puVar32[0x26] + 0x38))();
    }
  }
  if ((*(long **)(lVar25 + 0x1bf260) == (long *)0x0) ||
     (puVar32 = (undefined8 *)**(long **)(lVar25 + 0x1bf260), puVar32 == (undefined8 *)0x0)) {
    uVar17 = 1;
  }
  else {
    uVar17 = (**(code **)*puVar32)();
    uVar17 = uVar17 ^ 1;
  }
  plVar39 = (long *)*plVar39;
  if (plVar39 == (long *)0x0) {
LAB_02029e0c:
    uVar23 = FUN_028d63bc(*(long *)(lVar25 + 0x1bf248) + *(long *)(lVar25 + 0x1bf240));
    if ((uVar23 & 1) != 0) {
      local_720 = (undefined **)(puVar46 + 0x10);
      local_7f8 = *(undefined ***)(*(long *)puVar9 + 0x4060);
      local_718._0_4_ = 1.664655e-36;
      local_718._4_4_ = 0.0;
      uVar23 = FUN_028d4a98(&local_7f8,&local_720);
      if ((uVar23 & 1) != 0) goto LAB_02029e4c;
    }
    local_718._0_4_ = 1.5880655e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)(puVar46 + 0x10);
    FUN_022029d0(&local_720);
  }
  else {
    bVar34 = *(byte *)(*plVar39 + 0x473);
    if ((long)(char)bVar34 == 0xffffffffffffffff) goto LAB_02029e0c;
    pbVar31 = (byte *)(*plVar39 + 0x48);
    uVar23 = (long)(char)bVar34 & 0xffffffff;
    pbVar36 = pbVar31 + uVar23 * 0x80;
    if (7 < bVar34) {
      pbVar36 = pbVar31;
    }
    if ((*pbVar36 >> 3 & 1) == 0) goto LAB_02029e0c;
    lVar29 = plVar39[2] + 0x108 + uVar23 * 0xc;
    if (0xb < bVar34) {
      lVar29 = plVar39[2] + 0x108;
    }
    if (*(char *)(lVar29 + 10) != '\0') goto LAB_02029e0c;
    local_718._0_4_ = 1.675973e-36;
    local_718._4_4_ = 0.0;
    local_720 = (undefined **)(puVar46 + 0x10);
    uVar23 = FUN_0203e9e0(&local_720,0);
    if ((uVar23 & 1) == 0) goto LAB_02029e94;
LAB_02029e4c:
    iVar16 = *(int *)(param_1 + 0x11080);
    iVar20 = *(int *)(param_1 + 0x11068);
    if (iVar20 == iVar16 + -2) {
      uVar19 = FUN_028d7740(*(long *)(lVar25 + 0x1bf248) + *(long *)(lVar25 + 0x1bf240));
      uVar19 = uVar19 & 1;
    }
    else {
      uVar19 = 0;
    }
    if (iVar20 <= iVar16 + -3) {
      uVar19 = 1;
    }
    if (uVar19 != 0) {
      if (*(byte *)(*plVar33 + 0x476) < 2) {
        ppuVar40 = (undefined **)(puVar46 + 0x10);
        local_7f0 = (undefined ***)&DAT_0407ebb1;
        local_890 = (undefined **)0x0;
        local_888 = (undefined ***)((ulong)local_888._4_4_ << 0x20);
        local_7f8 = ppuVar40;
        FUN_00709220(0x3f800000,&local_720,10,&local_890,0,0,0,0,0,&local_7f8);
        local_7f0 = (undefined ***)0x40d54ca;
        local_7f8 = ppuVar40;
        FUN_00709380(&local_720,&local_7f8);
        local_120 = (undefined **)((ulong)local_120 & 0xffffffff00000000);
        local_7f0 = (undefined ***)&DAT_04071901;
        local_7f8 = ppuVar40;
        FUN_0203e280(param_1,&local_7f8,&local_890,&local_120);
        local_718._0_4_ = SUB84(local_890,0);
        local_718._4_4_ = (float)((ulong)local_890 >> 0x20);
        local_710 = (float)local_888;
        local_708 = (uint)local_120;
        FUN_0203e0f0(lVar35,&local_720);
        iVar16 = FUN_0203d900(param_1,&local_720);
        if (iVar16 != 0) {
          local_7f0 = (undefined ***)0x408cffb;
          local_7f8 = ppuVar40;
          FUN_00709380(&local_720,&local_7f8);
          FUN_0203e0f0(lVar35,&local_720);
          FUN_02030e80(param_1,&local_720);
        }
      }
      else {
        ppuVar40 = (undefined **)(puVar46 + 0x10);
        local_7f0 = (undefined ***)&DAT_0407ebb1;
        local_890 = (undefined **)0x0;
        local_888 = (undefined ***)((ulong)local_888._4_4_ << 0x20);
        local_7f8 = ppuVar40;
        FUN_00709220(0x3f800000,&local_720,10,&local_890,0,0,0,0,0,&local_7f8);
        local_7f0 = (undefined ***)0x408cffb;
        local_7f8 = ppuVar40;
        FUN_00709380(&local_720,&local_7f8);
        local_7f0 = (undefined ***)0x408c216;
        local_7f8 = ppuVar40;
        iVar16 = FUN_02743000(&local_7f8);
        local_7f0 = (undefined ***)0x40d4587;
        local_7f8 = ppuVar40;
        iVar20 = FUN_02743000(&local_7f8);
        local_718._0_4_ = (float)iVar16;
        local_718._4_4_ = 0.0;
        local_708 = 0;
        local_710 = (float)iVar20;
        FUN_0203e0f0(lVar35,&local_720);
        FUN_0203d900(param_1,&local_720);
      }
    }
  }
LAB_02029e94:
  if ((((uVar17 & 1) == 0) && (*(long *)(lVar25 + 0x1bf260) != 0)) &&
     (puVar32 = *(undefined8 **)(*(long *)(lVar25 + 0x1bf260) + 8), puVar32 != (undefined8 *)0x0)) {
    (**(code **)*puVar32)();
  }
  return;
LAB_02029028:
  ppuVar40 = local_720;
  if (bVar15) goto LAB_02029504;
  goto LAB_0202902c;
}

