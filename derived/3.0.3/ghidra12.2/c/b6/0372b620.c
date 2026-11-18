
void FUN_0372b620(undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte *pbVar12;
  byte bVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 local_1d0;
  uint uStack_1cc;
  float local_1c8;
  undefined8 local_1c4;
  undefined2 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined8 local_1ac;
  float local_1a4;
  undefined4 local_1a0 [2];
  undefined1 auStack_198 [8];
  undefined8 local_190;
  undefined1 auStack_188 [8];
  undefined8 local_180;
  uint uStack_178;
  float local_174;
  undefined *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c [15];
  undefined1 local_14d;
  undefined2 local_148;
  undefined4 local_144;
  undefined2 local_140;
  undefined1 local_13e;
  undefined1 local_13d;
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
  undefined2 local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined2 local_108;
  undefined1 local_106;
  undefined1 local_105;
  undefined4 local_104;
  undefined2 local_100;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dd;
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
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined2 local_6c;
  undefined8 local_68;
  
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    return;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
  if (0xff < (uint)(int)sVar4) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 0x1b & 1) != 0) {
    return;
  }
  local_180._0_4_ = 0x1a;
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
  if (0xff < (uint)(int)sVar4) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 0x1a & 1) == 0) {
    return;
  }
  uVar3 = *(uint *)(&DAT_00001230 + param_4);
  *(uint *)(&DAT_00001230 + param_4) = uVar3 & 0xfffffff3;
  if (*(int *)(param_4 + 0xe0) != 0) {
    plVar16 = *(long **)(param_4 + 0xe8);
    lVar15 = (long)*(int *)(param_4 + 0xe0) << 3;
    do {
      lVar18 = *plVar16;
      plVar9 = (long *)FUN_0372ad50(lVar18 + 8);
      if ((plVar9 != (long *)0x0) &&
         ((uVar17 = (int)plVar9[0xef6] - 0x10,
          0x3b < uVar17 || (1L << ((ulong)uVar17 & 0x3f) & 0x800100000000001U) == 0 ||
          ((*(ushort *)(lVar18 + 0x114) & 1) != 0)))) {
        (**(code **)(*plVar9 + 0x410))();
      }
      plVar16 = plVar16 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  uVar19 = FUN_03771210();
  puVar6 = PTR_DAT_04bb39b0;
  puVar5 = PTR_DAT_04bb2720;
  local_1ac = CONCAT44(param_2,uVar19);
  local_1a4 = param_3;
  if ((uVar3 >> 3 & 1) == 0) {
    if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar15 = *(long *)PTR_DAT_04bb2720, lVar15 == 0)) ||
       (*(long *)(lVar15 + 0x330) == 0)) {
LAB_0372b7e4:
      local_1c8 = 0.0;
      local_1d0 = 0;
      uStack_1cc = 0;
      local_1a0[0] = 0;
      FUN_0372bfa0(param_4,&local_1d0,local_1a0);
      local_170 = (undefined *)CONCAT26(local_170._6_2_,0x10000000000);
      lVar15 = *(long *)puVar6;
      local_168._4_4_ = local_168._4_4_ & 0xffffff00;
      pbVar12 = PTR_DAT_04bb32e0;
      if (lVar15 == 0) {
        if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0372baa4;
LAB_0372bb04:
        bVar13 = *pbVar12;
        if (7 < bVar13) {
          bVar13 = 0xff;
        }
      }
      else {
        if (*(int *)(lVar15 + 0x15c) != 0) {
          pbVar12 = (byte *)(lVar15 + 0x158);
        }
        if ((*pbVar12 < 8) ||
           (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar12 < 8))))
        goto LAB_0372bb04;
LAB_0372baa4:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0372bafc:
          pbVar12 = PTR_DAT_04bb5038;
          goto LAB_0372bb04;
        }
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar13 = *(byte *)(lVar15 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar13 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
          if (7 < bVar13) {
            puVar2 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar12 = (byte *)(lVar15 + 0x471);
          }
        }
        bVar13 = *pbVar12;
        if (7 < bVar13) goto LAB_0372bafc;
      }
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      local_180._0_4_ = CONCAT31(local_180._1_3_,bVar13);
      local_168 = (undefined1 *)CONCAT44(local_168._4_4_,1);
      local_170 = (undefined *)CONCAT35(local_170._5_3_,0x100000000);
      local_180._4_4_ = local_1d0;
      uStack_178 = uStack_1cc;
      local_170 = (undefined *)CONCAT44(local_170._4_4_,local_1a0[0]);
      local_174 = local_1c8;
      FUN_0255c85c(&local_180);
      local_1ac = CONCAT44(uStack_178,local_180._4_4_);
      local_1a4 = local_174;
      goto LAB_0372bb5c;
    }
    puVar10 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
    iVar8 = FUN_006bd550(*puVar10,0);
    if (((iVar8 != 0x758f7eaf) || (*(long *)puVar5 == 0)) ||
       ((lVar15 = *(long *)(*(long *)puVar5 + 0x330), lVar15 == 0 ||
        (puVar5 = (undefined *)CONCAT44(local_180._4_4_,(int)local_180),
        *(int *)(lVar15 + 0x244) == 0)))) goto LAB_0372b7e4;
  }
  else {
    uStack_1cc = 0;
    local_1c8 = 0.0;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b4 = 0;
    local_1bc = 0x101;
    local_180 = PTR_DAT_04bcacd8 + 0x10;
    local_160 = 0x10;
    local_14d = 0;
    local_15c[0] = 0;
    bVar13 = *PTR_DAT_04bb32e0;
    uStack_178 = *(uint *)PTR_DAT_04bb3238;
    local_168 = local_15c;
    local_170 = PTR_DAT_04bb2ab0 + 0x10;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    local_1d0 = CONCAT31(local_1d0._1_3_,bVar13);
    local_148 = 0xffff;
    local_144 = 3;
    local_90 = 0;
    uStack_88 = 0;
    local_68 = 0;
    local_140 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_13e = PTR_DAT_04bb37e0[2];
    local_13d = PTR_DAT_04bb37e0[3];
    local_13c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_7c = 0;
    uStack_74 = 0;
    local_6c = 0;
    local_b0 = 0xffffffff;
    uStack_a8 = 0xffffffff00000000;
    local_a0 = 0xffffffff;
    uStack_98 = 0xffffffffffffffff;
    local_80 = 0x244db4da;
    if (*(int *)(param_4 + 0xe0) == 0) {
      return;
    }
    lVar15 = (long)*(int *)(param_4 + 0xe0) << 3;
    plVar16 = *(long **)(param_4 + 0xe8);
    while ((*(ushort *)(*plVar16 + 0x114) & 1) == 0) {
      plVar16 = plVar16 + 1;
      lVar15 = lVar15 + -8;
      if (lVar15 == 0) {
        return;
      }
    }
    local_138 = local_140;
    local_136 = local_13e;
    local_135 = local_13d;
    local_134 = local_13c;
    local_130 = local_140;
    local_12e = local_13e;
    local_12d = local_13d;
    local_12c = local_13c;
    local_128 = local_140;
    local_126 = local_13e;
    local_125 = local_13d;
    local_124 = local_13c;
    local_120 = local_140;
    local_11e = local_13e;
    local_11d = local_13d;
    local_11c = local_13c;
    local_118 = local_140;
    local_116 = local_13e;
    local_115 = local_13d;
    local_114 = local_13c;
    local_110 = local_140;
    local_10e = local_13e;
    local_10d = local_13d;
    local_10c = local_13c;
    local_108 = local_140;
    local_106 = local_13e;
    local_105 = local_13d;
    local_104 = local_13c;
    local_100 = local_140;
    local_fe = local_13e;
    local_fd = local_13d;
    local_fc = local_13c;
    local_f8 = local_140;
    local_f6 = local_13e;
    local_f5 = local_13d;
    local_f4 = local_13c;
    local_f0 = local_140;
    local_ee = local_13e;
    local_ed = local_13d;
    local_ec = local_13c;
    local_e8 = local_140;
    local_e6 = local_13e;
    local_e5 = local_13d;
    local_e4 = local_13c;
    local_e0 = local_140;
    local_de = local_13e;
    local_dd = local_13d;
    local_dc = local_13c;
    local_d8 = local_140;
    local_d6 = local_13e;
    local_d5 = local_13d;
    local_d4 = local_13c;
    local_d0 = local_140;
    local_ce = local_13e;
    local_cd = local_13d;
    local_cc = local_13c;
    local_c8 = local_140;
    local_c6 = local_13e;
    local_c5 = local_13d;
    local_c4 = local_13c;
    local_c0 = local_140;
    local_be = local_13e;
    local_bd = local_13d;
    local_bc = local_13c;
    local_b8 = local_140;
    local_b6 = local_13e;
    local_b5 = local_13d;
    local_b4 = local_13c;
    FUN_0373b290(&local_180);
    puVar5 = PTR_DAT_04bb27c0;
    lVar15 = *(long *)PTR_DAT_04bb27c0;
    if (lVar15 == 0) {
      return;
    }
    if ((((uStack_178 == 0) ||
         (plVar16 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                              ((ulong)(uStack_178 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
        ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uStack_178)) {
      plVar16 = (long *)0x0;
    }
    if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar15 = *(long *)puVar5;
      iVar8 = (**(code **)(*plVar9 + 0x60))();
      if (iVar8 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_0372bde4;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0372bde4:
      uVar17 = 0;
    }
    if (plVar16 == (long *)0x0) {
      return;
    }
    lVar15 = plVar16[0x2a];
    if ((*PTR_DAT_04bb37d8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8);
      if (iVar8 != 0) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
    }
    uVar11 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar15 == 1) {
      uVar1 = uVar17;
    }
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (uVar1 == 0) {
      return;
    }
    FUN_025196e4(local_1a0);
    uVar14 = *(undefined8 *)(plVar16[0xd] + 0x278);
    bVar13 = (byte)local_1a0[0];
    if (7 < (byte)local_1a0[0]) {
      bVar13 = 0xff;
    }
    local_1d0 = CONCAT31(local_1d0._1_3_,bVar13);
    uStack_1cc = (uint)uVar14;
    local_1c8 = (float)((ulong)uVar14 >> 0x20);
    local_1c4 = CONCAT44(local_1c4._4_4_,*(undefined4 *)(plVar16[0xd] + 0x280));
    local_1c8 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,&uStack_1cc,0);
    local_1c4 = CONCAT44(*(undefined4 *)(plVar16[0xd] + 0x2b4),(float)local_1c4);
    if ((int)plVar16[0xea] == 3) {
      local_1b8 = 4;
    }
    else if ((int)plVar16[0xea] == 1) {
      local_1b8 = 2;
      FUN_016d73fc(auStack_188,&uStack_1cc);
      uVar11 = FUN_0277db54(auStack_188);
      if ((uVar11 & 1) != 0) {
        FUN_0124c030(local_1a0,auStack_188);
        iVar8 = FUN_0123db50(auStack_198,local_190);
        if ((iVar8 - 2U & 0xfffffff9) == 0) {
          local_1b8 = 3;
          fVar20 = (float)FUN_0124e3b0(local_1a0);
          local_1c8 = fVar20 + local_1c8;
        }
      }
    }
    else {
      local_1b8 = 1;
    }
    local_1bc = CONCAT11(local_1bc._1_1_,1);
    FUN_0255c85c(&local_1d0);
    local_1ac = CONCAT44(local_1c8,uStack_1cc);
    local_1a4 = (float)local_1c4;
LAB_0372bb5c:
    puVar5 = local_180;
  }
  local_180._4_4_ = (undefined4)((ulong)puVar5 >> 0x20);
  local_180._0_4_ = (int)puVar5;
  lVar15 = *(long *)puVar6;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_0372bbb8:
    if (7 < *pbVar12) {
LAB_0372bbc4:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar13 = *(byte *)(lVar15 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar13 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
          if (7 < bVar13) {
            puVar2 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar12 = (byte *)(lVar15 + 0x471);
          }
        }
        bVar13 = *pbVar12;
        bVar7 = 7 < bVar13;
        if (bVar7) {
          bVar13 = 0xff;
        }
        local_180._1_3_ = (undefined3)((ulong)puVar5 >> 8);
        local_180._0_4_ = CONCAT31(local_180._1_3_,bVar13);
        if (!bVar7) goto LAB_0372bc44;
      }
      pbVar12 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0372bbb8;
      }
      goto LAB_0372bbc4;
    }
  }
  bVar13 = *pbVar12;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  local_180._0_4_ = CONCAT31(local_180._1_3_,bVar13);
LAB_0372bc44:
  FUN_0254d938(&local_180,0);
  if ((uVar3 >> 3 & 1) == 0) {
    local_180._0_4_ = 0x4b45ff0;
    local_180._4_4_ = 0;
    FUN_0372c5e0(param_4,&local_180,&local_1ac);
    uVar11 = FUN_0375f6e0();
    if (((uVar11 & 1) != 0) && (lVar15 = *(long *)PTR_DAT_04bb3968, lVar15 != 0)) {
      local_180._0_4_ = 0x4b43738;
      local_180._4_4_ = 0;
      if (*(int *)(lVar15 + 0xb88) != 0) {
        lVar18 = (long)*(int *)(lVar15 + 0xb88) << 3;
        puVar10 = *(undefined8 **)(lVar15 + 0xb90);
        do {
          (**(code **)CONCAT44(local_180._4_4_,(int)local_180))(&local_180,*puVar10);
          lVar18 = lVar18 + -8;
          puVar10 = puVar10 + 1;
        } while (lVar18 != 0);
      }
    }
  }
  plVar16 = (long *)FUN_0372a970(param_4);
  if (plVar16 != (long *)0x0) {
    local_180._0_4_ = 0x3c;
    if ((*(ushort *)((long)plVar16 + 0xaf64) & 1) != 0) {
      lVar15 = FUN_0252d9bc(0);
      lVar18 = FUN_0252dec4(0);
      if ((lVar15 == 0) || (lVar18 == 0)) {
        local_180._0_4_ = 0x3d;
      }
    }
    if ((int)plVar16[0xef6] != (int)local_180) {
      (**(code **)(*plVar16 + 0x38))(plVar16,(int)local_180,0,0);
    }
  }
  return;
}

