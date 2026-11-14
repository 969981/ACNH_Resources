
void FUN_01d82d30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined2 uVar10;
  byte bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  undefined1 *puVar28;
  byte bVar29;
  undefined *local_210;
  undefined1 *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 *puStack_1f0;
  undefined4 local_1e8;
  undefined *local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined1 local_18d;
  undefined *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  undefined1 local_174 [63];
  undefined1 local_135;
  long local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_114;
  undefined4 local_10c;
  byte local_108;
  int local_104;
  undefined1 auStack_100 [4];
  undefined8 uStack_fc;
  int local_ec;
  undefined4 local_e6;
  undefined1 local_e2;
  undefined2 local_e0;
  undefined4 local_de;
  undefined1 local_da;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  byte local_c2;
  undefined1 auStack_c0 [24];
  undefined4 local_a8 [2];
  undefined1 *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xe8));
  iVar19 = *(int *)(param_1 + 0xb8);
  if (iVar19 == 0) {
    if (*(char *)(param_1 + 0x111) == '\0') goto LAB_01d82f68;
LAB_01d82de8:
    iVar19 = *(int *)(param_1 + 0x40);
    if (iVar19 != 0) {
      do {
        if (iVar19 < 1) {
          plVar26 = (long *)0x0;
        }
        else {
          plVar26 = *(long **)(param_1 + 0x38);
          if (*plVar26 != 0) {
            *(long *)(*plVar26 + 8) = plVar26[1];
          }
          if ((long *)plVar26[1] != (long *)0x0) {
            *(long *)plVar26[1] = *plVar26;
          }
          *plVar26 = 0;
          plVar26[1] = 0;
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        }
        lVar22 = 0;
        if (plVar26 != (long *)0x0) {
          lVar22 = (long)plVar26 - (long)*(int *)(param_1 + 0x44);
        }
        plVar26 = (long *)(lVar22 + *(int *)(param_1 + 0x2c));
        puVar23 = *(undefined8 **)(param_1 + 0x20);
        *(long **)(param_1 + 0x20) = plVar26;
        *plVar26 = param_1 + 0x18;
        plVar26[1] = (long)puVar23;
        if (puVar23 != (undefined8 *)0x0) {
          *puVar23 = plVar26;
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        iVar19 = *(int *)(param_1 + 0x40);
      } while (iVar19 != 0);
    }
    iVar19 = *(int *)(param_1 + 0x58);
    if (iVar19 != 0) {
      do {
        if (iVar19 < 1) {
          plVar26 = (long *)0x0;
        }
        else {
          plVar26 = *(long **)(param_1 + 0x50);
          if (*plVar26 != 0) {
            *(long *)(*plVar26 + 8) = plVar26[1];
          }
          if ((long *)plVar26[1] != (long *)0x0) {
            *(long *)plVar26[1] = *plVar26;
          }
          *plVar26 = 0;
          plVar26[1] = 0;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
        }
        lVar22 = 0;
        if (plVar26 != (long *)0x0) {
          lVar22 = (long)plVar26 - (long)*(int *)(param_1 + 0x5c);
        }
        plVar26 = (long *)(lVar22 + *(int *)(param_1 + 0x2c));
        puVar23 = *(undefined8 **)(param_1 + 0x20);
        *(long **)(param_1 + 0x20) = plVar26;
        *plVar26 = param_1 + 0x18;
        plVar26[1] = (long)puVar23;
        if (puVar23 != (undefined8 *)0x0) {
          *puVar23 = plVar26;
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        iVar19 = *(int *)(param_1 + 0x58);
      } while (iVar19 != 0);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x111) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0xac) = 0;
  }
  else {
    lVar22 = *(long *)(param_1 + 0xc0);
    bVar12 = false;
    iVar25 = 0;
    do {
      plVar26 = (long *)(lVar22 + (long)iVar25 * 0xf8 + 8);
      lVar27 = *plVar26;
      if (lVar27 != 0) {
        if (*(int *)(*(long *)(lVar22 + (long)iVar25 * 0xf8) + 0x50) == 2) {
          *(ushort *)(lVar27 + 0x100) = *(ushort *)(lVar27 + 0x100) | 8;
          *plVar26 = 0;
          *(undefined1 *)(param_1 + 0x110) = 1;
        }
        else {
          bVar12 = true;
        }
      }
      iVar25 = iVar25 + 1;
    } while (iVar19 != iVar25);
    if (*(char *)(param_1 + 0x111) == '\0') {
LAB_01d82f68:
      uVar13 = FUN_02640eb0();
      if (*(long *)(param_1 + 0x38) != param_1 + 0x30) {
        iVar19 = *(int *)(param_1 + 0x44);
        lVar22 = (long)-iVar19;
        puVar28 = (undefined1 *)(lVar22 + *(long *)(param_1 + 0x38));
        bVar11 = 0;
        puVar1 = PTR_DAT_04bb2df8 + 0x10;
        puVar2 = PTR_DAT_04bb5070 + 0x10;
        puVar3 = PTR_DAT_04bb2020 + 0x10;
        puVar4 = PTR_DAT_04bc0cd8 + 0x10;
        puVar5 = PTR_DAT_04bb2bc0 + 0x10;
        plVar26 = (long *)PTR_DAT_04bb39b0;
        do {
          lVar27 = *(long *)(puVar28 + (long)iVar19 + 8);
          uVar14 = (uint)*(ushort *)(puVar28 + 0x100);
          if ((*(ushort *)(puVar28 + 0x100) >> 4 & 1) == 0) {
LAB_01d8307c:
            uVar8 = uVar14 & 0xc;
            if ((bool)(uVar8 != 4 | bVar11)) {
              bVar29 = uVar8 == 4 | bVar11;
              bVar11 = bVar29;
              if (uVar8 != 4) {
LAB_01d830a0:
                bVar11 = bVar29;
                if ((uVar14 >> 7 & 1) != 0) {
                  plVar24 = (long *)(puVar28 + *(int *)(param_1 + 0x44));
                  if (*plVar24 != 0) {
                    *(long *)(*plVar24 + 8) = plVar24[1];
                  }
                  if ((long *)plVar24[1] != (long *)0x0) {
                    *(long *)plVar24[1] = *plVar24;
                  }
                  *plVar24 = 0;
                  plVar24[1] = 0;
                  plVar24 = (long *)(puVar28 + *(int *)(param_1 + 0x5c));
                  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
                  puVar23 = *(undefined8 **)(param_1 + 0x50);
                  *(long **)(param_1 + 0x50) = plVar24;
                  *plVar24 = param_1 + 0x48;
                  plVar24[1] = (long)puVar23;
                  if (puVar23 != (undefined8 *)0x0) {
                    *puVar23 = plVar24;
                  }
                  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
                  *(undefined4 *)(puVar28 + 0x104) = *(undefined4 *)(param_1 + 0x10c);
                  iVar25 = 1;
                  if (1 < *(int *)(param_1 + 0x10c) + 1U) {
                    iVar25 = *(int *)(param_1 + 0x10c) + 1;
                  }
                  *(int *)(param_1 + 0x10c) = iVar25;
                }
              }
            }
            else {
              iVar25 = *(int *)(param_1 + 0xb8);
              if (iVar25 != 0) {
                lVar15 = *(long *)(param_1 + 0xc0);
                iVar21 = 0;
                do {
                  if (*(undefined1 **)(lVar15 + (long)iVar21 * 0xf8 + 8) == puVar28) {
                    bVar11 = 0;
                    goto LAB_01d83060;
                  }
                  iVar21 = iVar21 + 1;
                } while (iVar25 != iVar21);
                iVar21 = 0;
                do {
                  plVar24 = (long *)(lVar15 + (long)iVar21 * 0xf8 + 8);
                  if (*plVar24 == 0) {
                    *plVar24 = (long)puVar28;
                    puVar23 = (undefined8 *)(lVar15 + (long)iVar21 * 0xf8);
                    puVar23[3] = puVar28 + 0x5c;
                    *(undefined1 *)((long)puVar23 + 0x24) = 0;
                    *(undefined4 *)(puVar23 + 10) = 0x40;
                    *(undefined1 *)((long)puVar23 + 0x93) = 0;
                    *(undefined4 *)(puVar23 + 0x15) = 0x40;
                    *(undefined1 *)((long)puVar23 + 0xeb) = 0;
                    plVar24 = puVar23 + 2;
                    *plVar24 = (long)puVar1;
                    *(undefined4 *)(puVar23 + 4) = 0x41;
                    puVar23[0x1e] = plVar24;
                    *(undefined4 *)(puVar23 + 7) = 0xffffffff;
                    puVar23[5] = 0xffffffff;
                    puVar23[6] = 0xffffffff00000000;
                    *(undefined1 *)((long)puVar23 + 0x54) = 0;
                    *(undefined1 *)((long)puVar23 + 0xac) = 0;
                    puVar23[8] = puVar5;
                    puVar23[9] = (undefined1 *)((long)puVar23 + 0x54);
                    puVar16 = (undefined1 *)*puVar23;
                    puVar23[0x13] = puVar5;
                    puVar23[0x14] = (undefined1 *)((long)puVar23 + 0xac);
                    if (*(long *)(puVar16 + 0x58) == 0) {
                      *puVar16 = 0;
                      *(undefined8 *)(puVar16 + 8) = 0;
                      puVar16[0x10] = 0;
                      *(undefined4 *)(puVar16 + 0x20) = 0;
                      *(long **)(puVar16 + 0x18) = plVar24;
                      *(undefined1 **)(puVar16 + 0x30) = puVar16;
                      *(undefined **)(puVar16 + 0x38) = PTR_FUN_04bc0b98;
                      lVar20 = *(long *)PTR_DAT_04bb28f8;
                      *(undefined8 *)(puVar16 + 0x40) = 0;
                      local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
                      lVar15 = *(long *)(lVar20 + 0x8820);
                      if (lVar15 != 0) {
                        local_200 = 0;
                        local_208 = (undefined1 *)CONCAT53(local_208._3_5_,0x10001);
                        local_120 = puVar16 + 0x48;
                        puStack_1f0 = puVar16 + 0x28;
                        local_1f8 = *(undefined8 *)(lVar20 + 0x8808);
                        local_1e8 = 0;
                        local_1e0 = (undefined *)0x0;
                        local_1d8 = 0;
                        local_130 = 0;
                        local_128 = &local_210;
                        local_1c8 = PTR_DAT_04bb2120;
                        local_210 = puVar2;
                        local_1d0 = puVar3;
                        FUN_03f45184(lVar15,&local_130);
                      }
                    }
                    uVar14 = (uint)*(ushort *)(puVar28 + 0x100);
                    bVar11 = 0;
                    bVar29 = 0;
                    if ((uVar14 & 0xc) != 4) goto LAB_01d830a0;
                    goto LAB_01d83060;
                  }
                  iVar21 = iVar21 + 1;
                } while (iVar25 != iVar21);
              }
              bVar11 = 1;
            }
          }
          else if ((uVar13 & 1) != 0) {
            lVar15 = *plVar26;
            pbVar18 = PTR_DAT_04bb32e0;
            if (lVar15 == 0) {
              if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01d83208;
LAB_01d833c0:
              bVar29 = *pbVar18;
              if (7 < bVar29) {
                bVar29 = 0xff;
              }
              local_210 = (undefined *)CONCAT71(local_210._1_7_,bVar29);
            }
            else {
              if (*(int *)(lVar15 + 0x15c) != 0) {
                pbVar18 = (byte *)(lVar15 + 0x158);
              }
              if ((*pbVar18 < 8) ||
                 (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                  (pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar18 < 8))))
              goto LAB_01d833c0;
LAB_01d83208:
              pbVar18 = PTR_DAT_04bb5038;
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01d833c0;
              lVar15 = **(long **)PTR_DAT_04bb27d0;
              bVar29 = *(byte *)(lVar15 + 0x473);
              pbVar17 = PTR_DAT_04bb5038;
              if ((long)(char)bVar29 != 0xffffffffffffffff) {
                puVar9 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar29 & 0xffffffffU) * 0x20;
                if (7 < bVar29) {
                  puVar9 = (uint *)(lVar15 + 0x48);
                }
                if ((*puVar9 & 8) != 0) {
                  pbVar17 = (byte *)(lVar15 + 0x471);
                }
              }
              bVar29 = *pbVar17;
              bVar12 = 7 < bVar29;
              if (bVar12) {
                bVar29 = 0xff;
              }
              local_210 = (undefined *)CONCAT71(local_210._1_7_,bVar29);
              if (bVar12) goto LAB_01d833c0;
            }
            FUN_02645730(auStack_c0,&local_210);
            lVar15 = *plVar26;
            pbVar18 = PTR_DAT_04bb32e0;
            if (lVar15 == 0) {
              if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01d83454;
LAB_01d834d0:
              bVar29 = *pbVar18;
              if (7 < bVar29) {
                bVar29 = 0xff;
              }
              local_210 = (undefined *)CONCAT71(local_210._1_7_,bVar29);
            }
            else {
              if (*(int *)(lVar15 + 0x15c) != 0) {
                pbVar18 = (byte *)(lVar15 + 0x158);
              }
              if ((*pbVar18 < 8) ||
                 (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                  (pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar18 < 8))))
              goto LAB_01d834d0;
LAB_01d83454:
              pbVar18 = PTR_DAT_04bb5038;
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01d834d0;
              lVar15 = **(long **)PTR_DAT_04bb27d0;
              bVar29 = *(byte *)(lVar15 + 0x473);
              pbVar17 = PTR_DAT_04bb5038;
              if ((long)(char)bVar29 != 0xffffffffffffffff) {
                puVar9 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar29 & 0xffffffffU) * 0x20;
                if (7 < bVar29) {
                  puVar9 = (uint *)(lVar15 + 0x48);
                }
                if ((*puVar9 & 8) != 0) {
                  pbVar17 = (byte *)(lVar15 + 0x471);
                }
              }
              bVar29 = *pbVar17;
              bVar12 = 7 < bVar29;
              if (bVar12) {
                bVar29 = 0xff;
              }
              local_210 = (undefined *)CONCAT71(local_210._1_7_,bVar29);
              if (bVar12) goto LAB_01d834d0;
            }
            lVar15 = FUN_026585a0(&local_210);
            if (((*(ushort *)(puVar28 + 0x100) >> 1 & 1) == 0) ||
               (lVar15 == *(long *)(puVar28 + 0xe8))) {
              local_120 = (undefined1 *)0x0;
              local_108 = 2;
              local_e2 = 0;
              local_e0 = 0;
              local_da = 0;
              local_10c = 0;
              uStack_114 = 0;
              local_104 = 0;
              uStack_fc = 0;
              local_ec = 0;
              local_e6 = 0x101;
              local_de = 0x101;
              local_c8 = 0;
              local_d8 = 0;
              local_d0 = 0;
              local_cf = 0;
              local_ce = 0;
              local_cd = 0;
              local_cc = 0;
              local_cb = 0;
              local_ca = 0;
              local_c9 = 0;
              local_c6 = *(undefined2 *)PTR_DAT_04bb3170;
              local_c4 = 0;
              local_c2 = 0;
              local_130 = 0;
              local_128 = (undefined **)0x0;
              FUN_02645a90(auStack_c0,&local_130,puVar28 + 0xe0);
              if ((local_130 != 0) && ((local_104 != 0 && ((int)local_120 != 0)))) {
                bVar29 = local_c2 & 6;
                if ((*(ushort *)(puVar28 + 0x100) >> 1 & 1) != 0) {
                  bVar29 = bVar29 | 4;
                }
                if (bVar29 == 6) {
                  *puVar28 = local_d0;
                  puVar28[1] = local_cf;
                  puVar28[2] = local_ce;
                  puVar28[3] = local_cd;
                  puVar28[4] = local_cc;
                  puVar28[5] = local_cb;
                  puVar28[6] = local_ca;
                  puVar28[7] = local_c9;
                  uVar10 = *(undefined2 *)PTR_DAT_04bb3170;
                  puVar28[8] = local_c8;
                  *(undefined2 *)(puVar28 + 10) = uVar10;
                  local_208 = puVar28 + 0x22;
                  puVar6 = PTR_DAT_04bb2df8 + 0x10;
                  local_200._4_4_ = (uint)((ulong)local_200 >> 0x20) & 0xffffff00;
                  local_18d = 0;
                  local_1d0._4_4_ = (uint)((ulong)local_1d0 >> 0x20) & 0xffffff00;
                  local_135 = 0;
                  local_174[0] = 0;
                  puVar7 = PTR_DAT_04bb2bc0 + 0x10;
                  local_200._0_4_ = 0xb;
                  local_1e8 = 0xffffffff;
                  local_1f8 = 0xffffffff;
                  puStack_1f0 = (undefined1 *)0xffffffff00000000;
                  local_1d0._0_4_ = 0x40;
                  local_178 = 0x40;
                  local_a8[0] = 10;
                  local_210 = puVar6;
                  local_1e0 = puVar7;
                  local_1d8 = (long)&local_1d0 + 4;
                  local_188 = puVar7;
                  puStack_180 = local_174;
                  local_a0 = auStack_100;
                  FUN_006f5e38(&local_210);
                  local_70 = 1;
                  local_6c = 0;
                  local_80 = 0;
                  uStack_78 = 0;
                  local_90 = 0;
                  uStack_88 = 0;
                  local_98 = puVar4;
                  FUN_02906b00(&local_98,&local_210,local_a8);
                  local_208 = puVar28 + 0xc;
                  local_200._4_4_ = local_200._4_4_ & 0xffffff00;
                  local_1d0._4_4_ = local_1d0._4_4_ & 0xffffff00;
                  *(int *)(puVar28 + 0x54) = local_104;
                  local_18d = 0;
                  local_135 = 0;
                  local_174[0] = 0;
                  local_1e8 = 0xffffffff;
                  local_200 = CONCAT44(local_200._4_4_,0xb);
                  *(undefined ***)(puVar28 + 0x108) = local_128;
                  local_1f8 = 0xffffffff;
                  puStack_1f0 = &DAT_ffffffff00000000;
                  local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,0x40);
                  local_178 = 0x40;
                  local_a8[0] = 10;
                  local_210 = puVar6;
                  local_1e0 = puVar7;
                  local_1d8 = (long)&local_1d0 + 4;
                  local_188 = puVar7;
                  puStack_180 = local_174;
                  local_a0 = (undefined1 *)((long)&local_120 + 4);
                  FUN_006f5e38(&local_210);
                  plVar26 = (long *)PTR_DAT_04bb39b0;
                  local_80 = 0;
                  uStack_78 = 0;
                  local_90 = 0;
                  uStack_88 = 0;
                  local_70 = 1;
                  local_6c = 0;
                  local_98 = puVar4;
                  FUN_02906b00(&local_98,&local_210,local_a8);
                  *(int *)(puVar28 + 0x50) = (int)local_120;
                  uVar14 = 2;
                  if (local_108 < 4) {
                    uVar14 = (uint)local_108;
                  }
                  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar14);
                  *(uint *)(puVar28 + 0x58) = uVar14;
                  uVar14 = (uint)*(ushort *)(puVar28 + 0x100);
                  if (local_ec != 1) {
                    uVar14 = *(ushort *)(puVar28 + 0x100) + 0x100;
                  }
                  uVar14 = uVar14 - 0x10;
                  *(short *)(puVar28 + 0x100) = (short)uVar14;
                  goto LAB_01d8307c;
                }
              }
            }
            plVar24 = (long *)(puVar28 + *(int *)(param_1 + 0x44));
            if (*plVar24 != 0) {
              *(long *)(*plVar24 + 8) = plVar24[1];
            }
            if ((long *)plVar24[1] != (long *)0x0) {
              *(long *)plVar24[1] = *plVar24;
            }
            *plVar24 = 0;
            plVar24[1] = 0;
            plVar24 = (long *)(puVar28 + *(int *)(param_1 + 0x2c));
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
            puVar23 = *(undefined8 **)(param_1 + 0x20);
            *(long **)(param_1 + 0x20) = plVar24;
            *plVar24 = param_1 + 0x18;
            plVar24[1] = (long)puVar23;
            if (puVar23 != (undefined8 *)0x0) {
              *puVar23 = plVar24;
            }
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
LAB_01d83060:
          puVar28 = (undefined1 *)(lVar27 + lVar22);
        } while (puVar28 != (undefined1 *)(lVar22 + param_1 + 0x30));
      }
      goto LAB_01d82f40;
    }
    if (!bVar12) goto LAB_01d82de8;
  }
  *(undefined4 *)(param_1 + 0x10c) = 1;
LAB_01d82f40:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xe8));
  return;
}

