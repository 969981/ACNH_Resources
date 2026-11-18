
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_036907a0(long param_1,byte *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  undefined4 *puVar16;
  long lVar17;
  byte bVar18;
  uint *puVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  undefined *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  long local_160;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  long local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined2 local_138;
  undefined1 local_136;
  undefined1 local_135;
  undefined4 local_134;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  undefined2 local_128;
  undefined1 local_126;
  undefined1 local_125;
  undefined4 local_124;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined2 local_118;
  undefined1 local_116;
  undefined1 local_115;
  undefined4 local_114;
  undefined *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  uint *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  
  puVar5 = PTR_DAT_04bb37e0;
  if ((-1 < (int)param_3) && (uVar20 = (ulong)param_3, (int)param_3 < *(int *)(param_1 + 0x278))) {
    local_b0 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_ae = PTR_DAT_04bb37e0[2];
    local_ad = PTR_DAT_04bb37e0[3];
    local_98 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_ac = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_a8 = local_b0;
    local_a6 = local_ae;
    local_a5 = local_ad;
    local_a4 = local_ac;
    local_a0 = local_b0;
    local_9e = local_ae;
    local_9d = local_ad;
    local_9c = local_ac;
    local_94 = local_ac;
    local_90 = local_b0;
    local_8e = local_ae;
    local_8d = local_ad;
    local_8c = local_ac;
    local_88 = local_b0;
    local_86 = local_ae;
    local_85 = local_ad;
    local_84 = local_ac;
    local_80 = local_b0;
    local_7e = local_ae;
    local_7d = local_ad;
    local_7c = local_ac;
    local_78 = local_b0;
    local_76 = local_ae;
    local_75 = local_ad;
    local_74 = local_ac;
    local_70 = local_b0;
    local_6e = local_ae;
    local_6d = local_ad;
    local_6c = local_ac;
    FUN_03691404(param_1,&local_b0,uVar20);
    puVar6 = PTR_DAT_04bb43c0;
    puVar4 = PTR_DAT_04bb27c0;
    uVar22 = 0;
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    do {
      if (((long)uVar22 < (long)(int)*(uint *)(param_1 + 0x278)) &&
         ((*param_2 >> (ulong)((uint)uVar22 & 0x1f) & 1) != 0)) {
        if (uVar22 < *(uint *)(param_1 + 0x278)) {
          lVar17 = *(long *)(*(long *)(param_1 + 0x280) + uVar22 * 8);
          lVar14 = *(long *)puVar4;
        }
        else {
          lVar17 = 0;
          lVar14 = *(long *)puVar4;
        }
        if (lVar14 != 0) {
          uVar11 = *(uint *)(lVar17 + 0x40);
          if ((((uVar11 == 0) ||
               (plVar21 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                    ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar21 == (long *)0x0)) ||
              ((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar21 + 0x46) != uVar11))
          {
            plVar21 = (long *)0x0;
          }
          if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
            plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar17 = *(long *)puVar4;
            iVar9 = (**(code **)(*plVar12 + 0x60))();
            if (iVar9 < 0x11) {
              uVar11 = 1;
            }
            else {
              if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_03690a44;
              uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_03690a44:
            uVar11 = 0;
          }
          if (plVar21 != (long *)0x0) {
            if (((*PTR_DAT_04bb3748 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bb3740 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb3748);
            }
            uVar10 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bb3740);
            if ((uVar11 & uVar10) == 1) {
              local_f0 = *(undefined2 *)puVar5;
              local_ee = puVar5[2];
              local_ed = puVar5[3];
              local_b8 = *(undefined4 *)puVar5;
              local_e0 = *(undefined4 *)puVar5;
              local_f8 = *(undefined4 *)puVar5;
              local_f4 = *(undefined4 *)(puVar5 + 4);
              local_ec = local_f4;
              local_e8 = local_f0;
              local_e6 = local_ee;
              local_e5 = local_ed;
              local_e4 = local_f4;
              local_dc = local_f4;
              local_d8 = local_f0;
              local_d6 = local_ee;
              local_d5 = local_ed;
              local_d4 = local_f4;
              local_d0 = local_f0;
              local_ce = local_ee;
              local_cd = local_ed;
              local_cc = local_f4;
              local_c8 = local_f0;
              local_c6 = local_ee;
              local_c5 = local_ed;
              local_c4 = local_f4;
              local_c0 = local_f0;
              local_be = local_ee;
              local_bd = local_ed;
              local_bc = local_f4;
              local_b4 = local_f4;
              FUN_03691404(param_1,&local_f8,uVar22 & 0xffffffff);
              uVar11 = *(uint *)(param_1 + 0x278);
              if (uVar22 < uVar11) {
                lVar17 = *(long *)(*(long *)(param_1 + 0x280) + uVar22 * 8);
              }
              else {
                lVar17 = 0;
              }
              iVar9 = *(int *)(lVar17 + 0x44);
              if (iVar9 == 2) {
                if (param_3 < uVar11) {
                  lVar17 = *(long *)(*(long *)(param_1 + 0x280) + uVar20 * 8);
                }
                else {
                  lVar17 = 0;
                }
                if (*(int *)(lVar17 + 0x44) == 1) goto LAB_03690db8;
                if (*(int *)(lVar17 + 0x44) != 0) goto LAB_03690960;
                FUN_036916b8(param_1,&local_f0,&local_a8,
                             *(undefined8 *)(*(long *)(param_1 + 0x280) + uVar22 * 8),0);
                FUN_036916b8(param_1,&local_f8,&local_b0,
                             *(undefined8 *)(*(long *)(param_1 + 0x280) + uVar22 * 8),1);
                lVar14 = *(long *)puVar6;
                uVar11 = FUN_0277d6c4(&local_98);
                lVar17 = *(long *)puVar6;
                if (lVar17 != 0) {
                  lVar14 = *(long *)(lVar14 + 0x57e58);
                  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                  if ((uVar11 < *(uint *)(lVar14 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                    local_148 = 0;
                    local_150 = local_98;
                    local_14c = local_94;
                    local_158 = puVar2;
                    uVar11 = FUN_0277d6c4(&local_150);
                    if (*(long *)puVar6 != 0) {
                      lVar17 = *(long *)(lVar17 + 0x57e58);
                      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                      if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                        lVar17 = *(long *)PTR_DAT_04bc0428;
                        uVar11 = FUN_0277d6c4(&local_98);
                        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                        if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                           (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8),
                           lVar17 != 0)) {
                          local_148 = lVar17;
                        }
                      }
                    }
                    uVar13 = FUN_01adc790(&local_158);
                    if ((uVar13 & 1) == 0) {
                      FUN_0277d7b4(&local_e0,&local_98);
                      local_e0 = local_98;
                      local_dc = local_94;
                      puVar16 = (undefined4 *)puVar5;
                    }
                    else {
                      FUN_0277d7b4(&local_b8,&local_98);
                      puVar16 = &local_98;
                    }
                    local_b8 = *puVar16;
                    local_b4 = puVar16[1];
                  }
                }
LAB_03690df4:
                bVar8 = 0;
              }
              else {
                if (iVar9 == 1) {
LAB_03690db8:
                  FUN_036916b8(param_1,&local_f0,&local_a8,
                               *(undefined8 *)(*(long *)(param_1 + 0x280) + uVar22 * 8),0);
                  FUN_036916b8(param_1,&local_f8,&local_b0,
                               *(undefined8 *)(*(long *)(param_1 + 0x280) + uVar22 * 8),1);
                  goto LAB_03690df4;
                }
                if (iVar9 != 0) goto LAB_03690960;
                if (param_3 < uVar11) {
                  lVar17 = *(long *)(*(long *)(param_1 + 0x280) + uVar20 * 8);
                }
                else {
                  lVar17 = 0;
                }
                iVar9 = *(int *)(lVar17 + 0x44);
                if (iVar9 != 2) {
                  if (iVar9 == 1) goto LAB_03690db8;
                  if (iVar9 != 0) goto LAB_03690960;
                }
                lVar17 = uVar22 * 8;
                bVar8 = FUN_036916b8(param_1,&local_e0,&local_98,
                                     *(undefined8 *)(*(long *)(param_1 + 0x280) + lVar17),2);
                FUN_036916b8(param_1,&local_f0,&local_a8,
                             *(undefined8 *)(*(long *)(param_1 + 0x280) + lVar17),0);
                FUN_036916b8(param_1,&local_f8,&local_b0,
                             *(undefined8 *)(*(long *)(param_1 + 0x280) + lVar17),1);
                if ((short)local_98 == -2) {
                  lVar17 = *(long *)puVar6;
                  uVar11 = FUN_0277d6c4(&local_e0);
                  bVar7 = false;
                  if (*(long *)puVar6 != 0) {
                    lVar17 = *(long *)(lVar17 + 0x57e58);
                    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                    if (uVar11 < *(uint *)(lVar17 + 0x1d8)) {
                      bVar7 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0;
                    }
                    else {
                      bVar7 = false;
                    }
                  }
                  bVar8 = bVar8 & bVar7;
                }
                else {
                  bVar8 = 0;
                }
              }
              lVar17 = *(long *)puVar6;
              uVar11 = FUN_0277d6c4(&local_e0);
              lVar14 = *(long *)puVar6;
              if (lVar14 != 0) {
                lVar17 = *(long *)(lVar17 + 0x57e58);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                  local_100 = (uint *)0x0;
                  local_110 = PTR_DAT_04bc0510 + 0x10;
                  local_108 = local_e0;
                  uStack_104 = local_dc;
                  uVar11 = FUN_0277d6c4(&local_108);
                  if (*(long *)puVar6 == 0) {
LAB_03690ed4:
                    if (local_100 != (uint *)0x0) goto LAB_03690edc;
                    uVar11 = 0xbc;
                    local_158 = (undefined *)CONCAT44(local_158._4_4_,0xac);
LAB_03691194:
                    local_170 = (undefined *)CONCAT44(local_170._4_4_,uVar11);
                  }
                  else {
                    lVar17 = *(long *)(lVar14 + 0x57e58);
                    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                    if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
                       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
                    goto LAB_03690ed4;
                    lVar17 = *(long *)PTR_DAT_04bc0428;
                    uVar11 = FUN_0277d6c4(&local_e0);
                    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                    if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
                       (puVar15 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8),
                       puVar15 == (uint *)0x0)) goto LAB_03690ed4;
                    local_100 = puVar15;
LAB_03690edc:
                    puVar15 = (uint *)((long)local_100 - (ulong)*local_100);
                    if ((((*local_100 == 0) || (puVar15 == (uint *)0x0)) || (*puVar15 == 0)) ||
                       ((uVar11 = puVar15[1], uVar11 == 0 || ((ulong)(ushort)puVar15[2] == 0)))) {
LAB_036910ec:
                      local_158 = (undefined *)CONCAT44(local_158._4_4_,0xac);
                      uVar11 = 0;
                      uVar10 = *local_100;
                      if ((uVar10 != 0) && (local_100 != (uint *)(ulong)uVar10)) {
                        puVar15 = (uint *)((long)local_100 - (long)(ulong)uVar10);
                        uVar11 = 0;
                        if (*puVar15 != 0) {
                          uVar11 = puVar15[1];
                          if ((uVar11 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                            lVar17 = 0xc;
                            if (*(char *)((long)puVar15 + 10) != '\0') {
                              lVar17 = 0x1c;
                            }
                            lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                            if (lVar17 != 0) {
                              uVar10 = 0;
                              if ((ulong)uVar11 != 0) {
                                uVar10 = (uint)((ulong)((long)local_100 - lVar17) / (ulong)uVar11);
                              }
                              if (*puVar15 <= uVar10) {
                                uVar10 = 0xffffffff;
                              }
                              if ((uVar10 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (uVar11 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar10 * 2), uVar11 < 0xbd))
                              goto LAB_03691194;
                            }
                          }
                          uVar11 = 0;
                        }
                      }
                      goto LAB_03691194;
                    }
                    lVar17 = 0xc;
                    if (*(char *)((long)puVar15 + 10) != '\0') {
                      lVar17 = 0x1c;
                    }
                    lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                    if (lVar17 == 0) goto LAB_036910ec;
                    uVar10 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar10 = (uint)((ulong)((long)local_100 - lVar17) / (ulong)uVar11);
                    }
                    if (*puVar15 <= uVar10) {
                      uVar10 = 0xffffffff;
                    }
                    if (((*(uint *)PTR_DAT_04bc00c8 <= uVar10) ||
                        (uVar3 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar10 * 2),
                        0xbc < uVar3)) || (uVar3 != 0xaf)) goto LAB_036910ec;
                    local_138 = *(undefined2 *)puVar5;
                    local_136 = puVar5[2];
                    local_135 = puVar5[3];
                    local_140 = *(undefined4 *)puVar5;
                    local_150 = *(undefined4 *)puVar5;
                    local_14c = *(undefined4 *)(puVar5 + 4);
                    local_148 = *(long *)puVar5;
                    local_158 = *(undefined **)puVar5;
                    local_13c = local_14c;
                    local_134 = local_14c;
                    local_130 = local_138;
                    local_12e = local_136;
                    local_12d = local_135;
                    local_12c = local_14c;
                    local_128 = local_138;
                    local_126 = local_136;
                    local_125 = local_135;
                    local_124 = local_14c;
                    local_120 = local_138;
                    local_11e = local_136;
                    local_11d = local_135;
                    local_11c = local_14c;
                    local_118 = local_138;
                    local_116 = local_136;
                    local_115 = local_135;
                    local_114 = local_14c;
                    FUN_03691404(param_1,&local_158,uVar22 & 0xffffffff);
                    uVar13 = FUN_0277d7b4(&local_e0,&local_140);
                    if ((uVar13 & 1) != 0) {
                      local_160 = 0;
                      local_168 = local_140;
                      uStack_164 = local_13c;
                      lVar17 = *(long *)puVar6;
                      local_170 = PTR_DAT_04bc0510 + 0x10;
                      uVar11 = FUN_0277d6c4(&local_168);
                      if (*(long *)puVar6 != 0) {
                        lVar17 = *(long *)(lVar17 + 0x57e58);
                        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                        if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                          lVar17 = *(long *)PTR_DAT_04bc0428;
                          uVar11 = FUN_0277d6c4(&local_140);
                          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                          if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                             (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8),
                             lVar17 != 0)) {
                            local_160 = lVar17;
                          }
                        }
                      }
                      uVar13 = FUN_01377be0(&local_110);
                      if ((uVar13 & 1) != 0) {
                        FUN_01377be0(&local_110);
                      }
                      uVar13 = FUN_01377be0(&local_170);
                      if ((uVar13 & 1) != 0) {
                        FUN_01377be0(&local_170);
                      }
                    }
                  }
                  lVar14 = *(long *)puVar6;
                }
              }
              uVar11 = FUN_0277d6c4(&local_f8);
              lVar17 = *(long *)puVar6;
              if (lVar17 != 0) {
                lVar14 = *(long *)(lVar14 + 0x57e58);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if ((uVar11 < *(uint *)(lVar14 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                  local_148 = 0;
                  local_158 = PTR_DAT_04bc0510 + 0x10;
                  local_150 = local_f8;
                  local_14c = local_f4;
                  uVar11 = FUN_0277d6c4(&local_150);
                  if (*(long *)puVar6 == 0) {
LAB_03691310:
                    local_110 = (undefined *)CONCAT44(local_110._4_4_,0xac);
                    uVar11 = 0xbc;
                  }
                  else {
                    lVar17 = *(long *)(lVar17 + 0x57e58);
                    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                    if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
                       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
                    goto LAB_03691310;
                    lVar17 = *(long *)PTR_DAT_04bc0428;
                    uVar11 = FUN_0277d6c4(&local_f8);
                    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                    if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
                       (puVar15 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8),
                       puVar15 == (uint *)0x0)) goto LAB_03691310;
                    uVar11 = 0;
                    local_110 = (undefined *)CONCAT44(local_110._4_4_,0xac);
                    uVar10 = *puVar15;
                    if ((uVar10 != 0) && (puVar15 != (uint *)(ulong)uVar10)) {
                      puVar19 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
                      uVar11 = 0;
                      if (*puVar19 != 0) {
                        uVar11 = puVar19[1];
                        if ((uVar11 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                          lVar17 = 0xc;
                          if (*(char *)((long)puVar19 + 10) != '\0') {
                            lVar17 = 0x1c;
                          }
                          lVar17 = (long)puVar19 + lVar17 + (ulong)(ushort)puVar19[2] * 8;
                          if (lVar17 != 0) {
                            uVar10 = 0;
                            if ((ulong)uVar11 != 0) {
                              uVar10 = (uint)((ulong)((long)puVar15 - lVar17) / (ulong)uVar11);
                            }
                            if (*puVar19 <= uVar10) {
                              uVar10 = 0xffffffff;
                            }
                            if ((uVar10 < *(uint *)PTR_DAT_04bc00c8) &&
                               (uVar11 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar10 * 2), uVar11 < 0xbd))
                            goto LAB_0369131c;
                          }
                        }
                        uVar11 = 0;
                      }
                    }
                  }
LAB_0369131c:
                  local_170 = (undefined *)CONCAT44(local_170._4_4_,uVar11);
                }
              }
              if (uVar22 < *(uint *)(param_1 + 0x278)) {
                lVar17 = *(long *)(*(long *)(param_1 + 0x280) + uVar22 * 8);
                if (*(int *)(lVar17 + 0x44) == 0) goto LAB_03691364;
LAB_03691358:
                if (*(int *)(lVar17 + 0x44) == 1) goto LAB_03691364;
              }
              else {
                if (_DAT_00000044 != 0) {
                  lVar17 = 0;
                  goto LAB_03691358;
                }
LAB_03691364:
                uVar13 = FUN_03691bb4(&local_b0);
                if ((uVar13 & 1) == 0) {
                  FUN_03691bb4(&local_98);
                }
              }
              FUN_03690398(param_1,uVar22 & 0xffffffff,&local_f8);
              bVar18 = 4;
              if (bVar8 == 0) {
                bVar18 = 0;
              }
              lVar17 = *(long *)(*(long *)(param_1 + 0x280) + uVar22 * 8);
              *(byte *)(lVar17 + 0x48) = *(byte *)(lVar17 + 0x48) & 0xfb | bVar18;
            }
          }
        }
      }
LAB_03690960:
      uVar22 = uVar22 + 1;
    } while (uVar22 != 7);
  }
  return;
}

