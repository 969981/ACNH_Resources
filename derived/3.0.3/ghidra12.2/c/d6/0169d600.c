
/* WARNING: Removing unreachable block (ram,0x0169d758) */
/* WARNING: Removing unreachable block (ram,0x0169d768) */
/* WARNING: Removing unreachable block (ram,0x0169d774) */

undefined8 FUN_0169d600(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  byte bVar18;
  short sVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  void *__s;
  ushort *puVar33;
  long lVar34;
  byte *pbVar35;
  uint *puVar36;
  ushort uVar37;
  int iVar38;
  long lVar39;
  ushort uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined8 *puVar45;
  undefined *puVar46;
  long lVar47;
  int iVar48;
  undefined2 local_18d0;
  undefined1 local_18ce;
  undefined1 local_18cd;
  undefined4 local_18cc;
  undefined2 local_18c8;
  undefined1 local_18c6;
  undefined1 local_18c5;
  undefined4 local_18c4;
  undefined *local_18c0;
  undefined *local_18b8;
  undefined8 local_18b0;
  undefined *local_18a8;
  undefined8 local_18a0;
  undefined4 local_1898 [2];
  undefined *local_1890;
  undefined8 local_1888;
  undefined *local_1880;
  int local_1878;
  int iStack_1874;
  undefined *local_1870;
  undefined *puStack_1868;
  int local_1860;
  int iStack_185c;
  undefined *local_1858;
  int local_1850;
  int iStack_184c;
  int local_1844;
  undefined8 local_1840;
  char *pcStack_1838;
  undefined1 auStack_218 [8];
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined2 local_1c4;
  undefined1 local_1c2;
  undefined1 local_1c1;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined1 local_1b9;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined1 local_1b2;
  undefined1 local_1b1;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined1 local_1aa;
  undefined1 local_1a9;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined1 local_1a2;
  undefined1 local_1a1;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined1 local_19a;
  undefined1 local_199;
  undefined4 local_198;
  undefined2 local_194;
  undefined1 local_192;
  undefined1 local_191;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 local_189;
  undefined4 local_188;
  undefined2 local_184;
  undefined1 local_182;
  undefined1 local_181;
  undefined4 local_180;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined1 local_179;
  undefined4 local_178;
  undefined2 local_174;
  undefined1 local_172;
  undefined1 local_171;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_16a;
  undefined1 local_169;
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_162;
  undefined1 local_161;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 local_159;
  undefined4 local_158;
  undefined2 local_154;
  undefined1 local_152;
  undefined1 local_151;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
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
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined2 local_f4;
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
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined1 local_c4;
  undefined4 local_c3;
  undefined3 uStack_bf;
  byte local_b4 [4];
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  uint local_6c;
  
  puVar3 = PTR_DAT_04bb2720;
  sVar19 = *(short *)PTR_DAT_04bb6298;
  if (sVar19 == -1) {
    return 0;
  }
  local_1840._4_4_ = (uint)((ulong)local_1840 >> 0x20);
  puVar36 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar19 * 8);
  if (0xff < (uint)(int)sVar19) {
    puVar36 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar36 & 1) == 0) {
    return 0;
  }
  local_1840._0_4_ = 0x15;
  if ((*puVar36 >> 0x15 & 1) == 0) {
    return 0;
  }
  local_80 = 0;
  lVar34 = *(long *)PTR_DAT_04bb2720;
  if (lVar34 == 0) {
    puVar45 = &DAT_055c04a0;
  }
  else {
    puVar45 = &DAT_055c04a0;
    if (*(long *)(lVar34 + 0x330) != 0) {
      puVar45 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar34 + 0x338));
      iVar26 = FUN_006bd550(*puVar45,0);
      puVar45 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar26 != 0x758f7eaf) {
        puVar45 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(undefined4 *)(puVar45 + 7);
  local_78 = FUN_017baf44();
  local_78 = local_78 & 1;
  local_88 = PTR_DAT_04bb6268 + 0x10;
  local_1840 = (undefined *)((ulong)local_1840._4_4_ << 0x20);
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) {
    return 0;
  }
  lVar34 = FUN_01a4fa00(&local_88);
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  iVar26 = *(int *)(lVar34 + 0x10);
  iVar43 = *(int *)(lVar34 + 0x14);
  puStack_a8 = PTR_DAT_04bb2010 + 0x10;
  iVar44 = *(int *)(lVar34 + 0x20);
  iVar10 = *(int *)(lVar34 + 0x24);
  local_a0 = 0;
  lVar34 = *(long *)puVar3;
  local_90 = 0;
  local_98 = puStack_a8;
  if (lVar34 == 0) {
    puVar45 = &DAT_055c04a0;
  }
  else {
    puVar45 = &DAT_055c04a0;
    if (*(long *)(lVar34 + 0x330) != 0) {
      puVar45 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar34 + 0x338));
      iVar27 = FUN_006bd550(*puVar45,0);
      puVar45 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar27 != 0x758f7eaf) {
        puVar45 = &DAT_055c04a0;
      }
    }
  }
  uVar32 = FUN_017ba710(*(undefined4 *)(puVar45 + 7),&local_b0);
  if ((uVar32 & 1) == 0) {
    return 0;
  }
  lVar34 = *(long *)PTR_DAT_04bb39b0;
  pbVar35 = PTR_DAT_04bb32e0;
  if (lVar34 == 0) {
LAB_0169d89c:
    if (*pbVar35 < 8) goto LAB_0169d914;
LAB_0169d8a8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0169d90c:
      pbVar35 = PTR_DAT_04bb5038;
      goto LAB_0169d914;
    }
    lVar34 = **(long **)PTR_DAT_04bb27d0;
    bVar18 = *(byte *)(lVar34 + 0x473);
    pbVar35 = PTR_DAT_04bb5038;
    if ((long)(char)bVar18 != 0xffffffffffffffff) {
      puVar36 = (uint *)(lVar34 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
      if (7 < bVar18) {
        puVar36 = (uint *)(lVar34 + 0x48);
      }
      if ((*puVar36 & 8) != 0) {
        pbVar35 = (byte *)(lVar34 + 0x471);
      }
    }
    local_b4[0] = *pbVar35;
    if (7 < local_b4[0]) goto LAB_0169d90c;
  }
  else {
    if (*(int *)(lVar34 + 0x15c) != 0) {
      pbVar35 = (byte *)(lVar34 + 0x158);
    }
    if (7 < *pbVar35) {
      if ((*(int *)(lVar34 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar35 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0169d89c;
      }
      goto LAB_0169d8a8;
    }
LAB_0169d914:
    local_b4[0] = *pbVar35;
    if (7 < local_b4[0]) {
      return 0;
    }
  }
  local_1840 = PTR_DAT_04bb2020 + 0x10;
  pcStack_1838 = "CurrentJuneBrideTheme";
  uVar28 = FUN_0274bce0(local_b4,&local_1840);
  *(undefined8 *)(param_1 + 0xb2c) = 0;
  *(undefined8 *)(param_1 + 0xb34) = 0;
  *(undefined8 *)(param_1 + 0xb3c) = 0;
  FUN_016a1790(auStack_218);
  *(undefined1 **)(param_1 + 0xb18) = auStack_218;
  FUN_016a18d4(&local_1840);
  *(undefined8 **)(param_1 + 0xb20) = &local_1840;
  puVar46 = PTR_DAT_04bb2010;
  local_1f4 = 0;
  local_1ec = 0;
  local_1e4 = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_14c = 0xffffffffffffffff;
  local_f4 = 0xffff;
  local_104 = 0xffffffffffffffff;
  uStack_fc = 0xffffffffffffffff;
  local_1c4 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_1c2 = PTR_DAT_04bb37e0[2];
  local_1c1 = PTR_DAT_04bb37e0[3];
  local_1c0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_c4 = 0;
  local_144 = 0xffffffff;
  local_d0 = 0;
  local_208 = 0;
  local_1f8 = 0;
  local_210 = 2;
  local_200 = 0xe;
  lVar34 = *(long *)(param_1 + 0xb20);
  local_cc = 0;
  local_c3 = 0xffffffff;
  uStack_bf = 0xffffff;
  local_d8 = 0;
  local_108 = 0;
  *(undefined1 *)(lVar34 + 0x1619) = 0;
  *(undefined4 *)(lVar34 + 0x1614) = 0;
  *(undefined4 *)(lVar34 + 0x160c) = 0;
  *(undefined1 *)(lVar34 + 0x1620) = 0;
  *(undefined8 *)(lVar34 + 0xf60) = 0;
  *(undefined8 *)(lVar34 + 0xf58) = 0;
  *(undefined8 *)(lVar34 + 0xf50) = 0;
  *(undefined8 *)(lVar34 + 0xf48) = 0;
  *(undefined8 *)(lVar34 + 0xf40) = 0;
  *(undefined8 *)(lVar34 + 0xf38) = 0;
  *(undefined8 *)(lVar34 + 0xf30) = 0;
  *(undefined8 *)(lVar34 + 0xf28) = 0;
  *(undefined8 *)(lVar34 + 0xf20) = 0;
  *(undefined8 *)(lVar34 + 0xf18) = 0;
  *(undefined8 *)(lVar34 + 0xf10) = 0;
  *(undefined8 *)(lVar34 + 0xf08) = 0;
  *(undefined8 *)(lVar34 + 0xf00) = 0;
  *(undefined8 *)(lVar34 + 0xef8) = 0;
  *(undefined8 *)(lVar34 + 0xef0) = 0;
  *(undefined8 *)(lVar34 + 0xee8) = 0;
  local_1bc = local_1c4;
  local_1ba = local_1c2;
  local_1b9 = local_1c1;
  local_1b8 = local_1c0;
  local_1b4 = local_1c4;
  local_1b2 = local_1c2;
  local_1b1 = local_1c1;
  local_1b0 = local_1c0;
  local_1ac = local_1c4;
  local_1aa = local_1c2;
  local_1a9 = local_1c1;
  local_1a8 = local_1c0;
  local_1a4 = local_1c4;
  local_1a2 = local_1c2;
  local_1a1 = local_1c1;
  local_1a0 = local_1c0;
  local_19c = local_1c4;
  local_19a = local_1c2;
  local_199 = local_1c1;
  local_198 = local_1c0;
  local_194 = local_1c4;
  local_192 = local_1c2;
  local_191 = local_1c1;
  local_190 = local_1c0;
  local_18c = local_1c4;
  local_18a = local_1c2;
  local_189 = local_1c1;
  local_188 = local_1c0;
  local_184 = local_1c4;
  local_182 = local_1c2;
  local_181 = local_1c1;
  local_180 = local_1c0;
  local_17c = local_1c4;
  local_17a = local_1c2;
  local_179 = local_1c1;
  local_178 = local_1c0;
  local_174 = local_1c4;
  local_172 = local_1c2;
  local_171 = local_1c1;
  local_170 = local_1c0;
  local_16c = local_1c4;
  local_16a = local_1c2;
  local_169 = local_1c1;
  local_168 = local_1c0;
  local_164 = local_1c4;
  local_162 = local_1c2;
  local_161 = local_1c1;
  local_160 = local_1c0;
  local_15c = local_1c4;
  local_15a = local_1c2;
  local_159 = local_1c1;
  local_158 = local_1c0;
  local_154 = local_1c4;
  local_152 = local_1c2;
  local_151 = local_1c1;
  local_150 = local_1c0;
  local_128 = local_1c4;
  local_126 = local_1c2;
  local_125 = local_1c1;
  local_124 = local_1c0;
  local_120 = local_1c4;
  local_11e = local_1c2;
  local_11d = local_1c1;
  local_11c = local_1c0;
  local_118 = local_1c4;
  local_116 = local_1c2;
  local_115 = local_1c1;
  local_114 = local_1c0;
  local_110 = local_1c4;
  local_10e = local_1c2;
  local_10d = local_1c1;
  local_10c = local_1c0;
  local_f0 = local_1c4;
  local_ee = local_1c2;
  local_ed = local_1c1;
  local_ec = local_1c0;
  local_e8 = local_1c4;
  local_e6 = local_1c2;
  local_e5 = local_1c1;
  local_e4 = local_1c0;
  local_e0 = local_1c4;
  local_de = local_1c2;
  local_dd = local_1c1;
  local_dc = local_1c0;
  __s = (void *)(**(code **)(*(long *)(lVar34 + 0x778) + 0x18))(lVar34 + 0x778);
  memset(__s,0,0x754);
  *(undefined1 *)(lVar34 + 0x1622) = 0;
  FUN_016a03e0(lVar34);
  puVar24 = PTR_DAT_04bc0510;
  lVar34 = 0;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4 = puVar46 + 0x10;
  *(undefined4 *)(*(long *)(param_1 + 0xb20) + 0x1624) = 0;
  do {
    local_1844 = (int)lVar34;
    uVar32 = FUN_01a4f680(&local_88,lVar34);
    if (lVar34 != 6) {
      if ((uVar32 & 1) != 0) {
        bVar25 = 3 < (int)lVar34 - 2U;
        iVar27 = iVar26;
        if (bVar25) {
          iVar27 = (int)local_a0;
        }
        lVar39 = *(long *)(param_1 + 0xb20);
        iVar6 = iVar43;
        if (bVar25) {
          iVar6 = local_a0._4_4_;
        }
        *(undefined8 *)(lVar39 + 0xee8) = 0;
        *(undefined8 *)(lVar39 + 0xef0) = 0;
        *(undefined8 *)(lVar39 + 0xef8) = 0;
        *(undefined8 *)(lVar39 + 0xf00) = 0;
        *(undefined8 *)(lVar39 + 0xf08) = 0;
        *(undefined8 *)(lVar39 + 0xf10) = 0;
        *(undefined8 *)(lVar39 + 0xf18) = 0;
        *(undefined8 *)(lVar39 + 0xf20) = 0;
        *(undefined8 *)(lVar39 + 0xf28) = 0;
        *(undefined8 *)(lVar39 + 0xf30) = 0;
        *(undefined8 *)(lVar39 + 0xf38) = 0;
        iVar7 = iVar44;
        if (bVar25) {
          iVar7 = (int)local_90;
        }
        *(undefined8 *)(lVar39 + 0xf40) = 0;
        *(undefined8 *)(lVar39 + 0xf48) = 0;
        *(undefined8 *)(lVar39 + 0xf50) = 0;
        iStack_184c = iVar10;
        if (bVar25) {
          iStack_184c = local_90._4_4_;
        }
        *(undefined8 *)(lVar39 + 0xf58) = 0;
        *(undefined8 *)(lVar39 + 0xf60) = 0;
        iVar1 = iStack_184c + 1;
        local_1870 = puVar3;
        puStack_1868 = puVar4;
        local_1860 = iVar27;
        iStack_185c = iVar6;
        local_1858 = puVar4;
        local_1850 = iVar7;
        if (iVar1 != iVar6) {
          iVar2 = (iVar7 - iVar27) + 1;
          iVar48 = iVar6;
          iVar42 = iVar27;
          do {
            uVar30 = (iVar42 - iVar27) + iVar2 * (iVar48 - iVar6);
            local_1880 = puVar46 + 0x10;
            local_1878 = iVar42;
            iStack_1874 = iVar48;
            if ((0x3ff < uVar30) ||
               ((*(uint *)(*(long *)(param_1 + 0xb20) + (ulong)(uVar30 >> 5) * 4 + 0xee8) >>
                 (ulong)(uVar30 & 0x1f) & 1) == 0)) {
              local_1888 = 0;
              local_1890 = local_1880;
              FUN_01a5033c(local_1898,&local_88,lVar34,&local_1880,&local_1890);
              puVar23 = PTR_DAT_04bb43c0;
              if ((short)local_1898[0] != -2) {
                lVar39 = *(long *)PTR_DAT_04bb43c0;
                uVar29 = FUN_0277d6c4(local_1898);
                puVar46 = PTR_DAT_04bb2010;
                if (*(long *)puVar23 != 0) {
                  lVar39 = *(long *)(lVar39 + 0x57e58);
                  uVar29 = (uVar29 & 0xffff) - (uint)*(ushort *)(lVar39 + 0x1f8);
                  if ((uVar29 < *(uint *)(lVar39 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar39 + 0x1e0) + (long)(int)uVar29 * 8) != 0)) {
                    FUN_0169e8d0(param_1,local_1898,&local_1890,&local_1870,&local_1844,0);
                    puVar46 = PTR_DAT_04bb43c0;
                    lVar39 = *(long *)PTR_DAT_04bb43c0;
                    local_6c = uVar28;
                    uVar30 = FUN_0277d6c4(local_1898);
                    lVar47 = *(long *)puVar46;
                    if (lVar47 != 0) {
                      lVar39 = *(long *)(lVar39 + 0x57e58);
                      uVar30 = (uVar30 & 0xffff) - (uint)*(ushort *)(lVar39 + 0x1f8);
                      if ((uVar30 < *(uint *)(lVar39 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar39 + 0x1e0) + (long)(int)uVar30 * 8) != 0)) {
                        local_18b0 = (uint *)0x0;
                        local_18c0 = puVar24 + 0x10;
                        uVar30 = FUN_0277d6c4(&local_18b8);
                        if (*(long *)PTR_DAT_04bb43c0 != 0) {
                          lVar39 = *(long *)(lVar47 + 0x57e58);
                          uVar30 = (uVar30 & 0xffff) - (uint)*(ushort *)(lVar39 + 0x1f8);
                          if ((uVar30 < *(uint *)(lVar39 + 0x1d8)) &&
                             (*(long *)(*(long *)(lVar39 + 0x1e0) + (long)(int)uVar30 * 8) != 0)) {
                            lVar39 = *(long *)PTR_DAT_04bc0428;
                            uVar30 = FUN_0277d6c4(local_1898);
                            uVar30 = (uVar30 & 0xffff) - (uint)*(ushort *)(lVar39 + 0x1f8);
                            if (uVar30 < *(uint *)(lVar39 + 0x1d8)) {
                              puVar36 = *(uint **)(*(long *)(lVar39 + 0x1e0) + (long)(int)uVar30 * 8
                                                  );
                              if (puVar36 != (uint *)0x0) {
                                local_18b0 = puVar36;
                              }
                            }
                          }
                        }
                        uVar32 = FUN_01ae59b0(&local_18c0);
                        if ((uVar32 & 1) != 0) {
                          *(int *)(param_1 + 0xb30) = *(int *)(param_1 + 0xb30) + 1;
                          iVar31 = FUN_01afcfa0(&local_18c0);
                          if (((iVar31 == 0) ||
                              (puVar33 = (ushort *)FUN_01afd600(&local_18c0),
                              puVar33 == (ushort *)0x0)) || ((*puVar33 & 0x18) != 0x10)) {
                            *(int *)(param_1 + 0xb34) = *(int *)(param_1 + 0xb34) + 1;
                            uVar30 = FUN_01ae3210(&local_18c0);
                            uVar29 = FUN_01ae3bc0(&local_18c0);
                            if (local_6c == 2) {
                              if ((uVar30 - 6 < 4) || (uVar29 - 6 < 4)) goto LAB_0169e048;
                            }
                            else if (local_6c == 1) {
                              if (((uVar30 < 0xd) && ((1 << (ulong)(uVar30 & 0x1f) & 0x1700U) != 0))
                                 || ((uVar29 < 0xd && ((1 << (ulong)(uVar29 & 0x1f) & 0x1700U) != 0)
                                     ))) goto LAB_0169e048;
                            }
                            else if ((local_6c == 0) &&
                                    ((((uVar30 == 2 || (uVar30 == 0xc)) || (uVar29 == 2)) ||
                                     (uVar29 == 0xc)))) {
LAB_0169e048:
                              *(int *)(param_1 + 0xb40) = *(int *)(param_1 + 0xb40) + 1;
                            }
                          }
                          if (local_18b0 == (uint *)0x0) {
                            uVar37 = 0;
                            uVar30 = 0;
                            goto LAB_0169e2e4;
                          }
                          uVar30 = *local_18b0;
                          if ((uVar30 == 0) || (local_18b0 == (uint *)(ulong)uVar30)) {
LAB_0169e178:
                            if (local_18b0 == (uint *)0x0) {
LAB_0169e2dc:
                              uVar37 = 0;
                              uVar30 = 0;
LAB_0169e2e4:
                              uVar40 = 0;
                            }
                            else {
                              uVar29 = *local_18b0;
                              uVar37 = 0;
                              if (uVar29 == 0) {
                                uVar30 = 0;
                                uVar40 = 0;
                              }
                              else {
                                uVar30 = 0;
                                uVar40 = 0;
                                if (local_18b0 != (uint *)(ulong)uVar29) {
                                  puVar36 = (uint *)((long)local_18b0 - (long)(ulong)uVar29);
                                  uVar29 = *puVar36;
                                  if (uVar29 != 0) {
                                    uVar32 = (ulong)puVar36[1];
                                    if (puVar36[1] == 0) goto LAB_0169e2dc;
                                    uVar30 = 0;
                                    if ((ulong)(ushort)puVar36[2] != 0) {
                                      lVar39 = 0xc;
                                      if (*(char *)((long)puVar36 + 10) != '\0') {
                                        lVar39 = 0x1c;
                                      }
                                      lVar39 = (long)puVar36 +
                                               lVar39 + (ulong)(ushort)puVar36[2] * 8;
                                      uVar30 = 0;
                                      if (lVar39 != 0) {
                                        uVar30 = 0;
                                        if (uVar32 != 0) {
                                          uVar30 = (uint)((ulong)((long)local_18b0 - lVar39) /
                                                         uVar32);
                                        }
                                        if (uVar29 <= uVar30) {
                                          uVar30 = 0xffffffff;
                                        }
                                        if ((*(uint *)PTR_DAT_04bc00b8 <= uVar30) ||
                                           (uVar37 = *(ushort *)
                                                      (*(long *)(PTR_DAT_04bc00b8 + 8) +
                                                      (long)(int)uVar30 * 2), uVar30 = (uint)uVar37,
                                           0x38 < uVar37)) {
                                          uVar30 = 0;
                                        }
                                      }
                                    }
                                    uVar37 = 0;
                                    if ((ulong)(ushort)puVar36[2] != 0) {
                                      lVar39 = 0xc;
                                      if (*(char *)((long)puVar36 + 10) != '\0') {
                                        lVar39 = 0x1c;
                                      }
                                      lVar39 = (long)puVar36 +
                                               lVar39 + (ulong)(ushort)puVar36[2] * 8;
                                      uVar37 = 0;
                                      if (lVar39 != 0) {
                                        uVar9 = 0;
                                        if (uVar32 != 0) {
                                          uVar9 = (uint)((ulong)((long)local_18b0 - lVar39) / uVar32
                                                        );
                                        }
                                        if (uVar29 <= uVar9) {
                                          uVar9 = 0xffffffff;
                                        }
                                        if ((*(uint *)PTR_DAT_04bc00a8 <= uVar9) ||
                                           (uVar37 = *(ushort *)
                                                      (*(long *)(PTR_DAT_04bc00a8 + 8) +
                                                      (long)(int)uVar9 * 2), 0x2e < uVar37)) {
                                          uVar37 = 0;
                                        }
                                      }
                                    }
                                    if ((ulong)(ushort)puVar36[2] != 0) {
                                      lVar39 = 0xc;
                                      if (*(char *)((long)puVar36 + 10) != '\0') {
                                        lVar39 = 0x1c;
                                      }
                                      lVar39 = (long)puVar36 +
                                               lVar39 + (ulong)(ushort)puVar36[2] * 8;
                                      if (lVar39 != 0) {
                                        uVar9 = 0;
                                        if (uVar32 != 0) {
                                          uVar9 = (uint)((ulong)((long)local_18b0 - lVar39) / uVar32
                                                        );
                                        }
                                        if (uVar29 <= uVar9) {
                                          uVar9 = 0xffffffff;
                                        }
                                        if ((uVar9 < *(uint *)PTR_DAT_04bc00b0) &&
                                           (uVar40 = *(ushort *)
                                                      (*(long *)(PTR_DAT_04bc00b0 + 8) +
                                                      (long)(int)uVar9 * 2), uVar40 < 0x2f))
                                        goto LAB_0169e2e8;
                                      }
                                    }
                                    goto LAB_0169e2e4;
                                  }
                                  uVar37 = 0;
                                  uVar30 = 0;
                                  uVar40 = 0;
                                }
                              }
                            }
LAB_0169e2e8:
                            if (local_6c != 2) {
                              if (local_6c == 1) {
                                if ((((uVar30 == 4) || (uVar30 == 0x13)) || (uVar37 == 0x17)) ||
                                   (uVar40 == 0x17)) goto LAB_0169e378;
                              }
                              else if ((local_6c == 0) &&
                                      (((uVar30 < 0x17 &&
                                        ((1 << (ulong)(uVar30 & 0x1f) & 0x502200U) != 0)) ||
                                       ((uVar37 == 0x18 || (uVar40 == 0x18)))))) goto LAB_0169e378;
                              goto LAB_0169e384;
                            }
                            if ((((0x16 < uVar30) ||
                                 ((1 << (ulong)(uVar30 & 0x1f) & 0x706500U) == 0)) &&
                                (uVar37 != 0x16)) && (uVar40 != 0x16)) goto LAB_0169e384;
                          }
                          else {
                            puVar36 = (uint *)((long)local_18b0 - (long)(ulong)uVar30);
                            if ((*puVar36 == 0) ||
                               ((uVar30 = puVar36[1], uVar30 == 0 ||
                                ((ulong)(ushort)puVar36[2] == 0)))) goto LAB_0169e178;
                            lVar39 = 0xc;
                            if (*(char *)((long)puVar36 + 10) != '\0') {
                              lVar39 = 0x1c;
                            }
                            lVar39 = (long)puVar36 + lVar39 + (ulong)(ushort)puVar36[2] * 8;
                            if (lVar39 == 0) goto LAB_0169e178;
                            uVar29 = 0;
                            if ((ulong)uVar30 != 0) {
                              uVar29 = (uint)((ulong)((long)local_18b0 - lVar39) / (ulong)uVar30);
                            }
                            if (*puVar36 <= uVar29) {
                              uVar29 = 0xffffffff;
                            }
                            if ((((*(uint *)PTR_DAT_04bc0068 <= uVar29) ||
                                 (*(short *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar29 * 2
                                            ) != 0x11b)) ||
                                ((iVar31 = FUN_01ad7260(&local_18c0), iVar31 == 0 &&
                                 (iVar31 = FUN_01afcfa0(&local_18c0), iVar31 == 0)))) ||
                               (iVar31 = FUN_01ad7260(&local_18c0), iVar31 == 0)) goto LAB_0169e178;
                            iVar31 = FUN_01ad7260(&local_18c0);
                            if ((iVar31 == 0) ||
                               (puVar33 = (ushort *)FUN_01afd600(&local_18c0),
                               puVar33 == (ushort *)0x0)) {
                              uVar30 = 0;
                            }
                            else {
                              uVar30 = *puVar33 & 7;
                              uVar29 = FUN_01ad7260(&local_18c0);
                              if (uVar29 <= uVar30) {
                                uVar30 = 0;
                              }
                            }
                            if (uVar30 != local_6c) goto LAB_0169e178;
                          }
LAB_0169e378:
                          *(int *)(param_1 + 0xb3c) = *(int *)(param_1 + 0xb3c) + 1;
                        }
                      }
                    }
LAB_0169e384:
                    puVar46 = PTR_DAT_04bb2010;
                    local_18b0 = (uint *)0x0;
                    local_18c0 = PTR_DAT_04bbc1a0 + 0x10;
                    local_18b8 = PTR_DAT_04bb2010 + 0x10;
                    local_18a0 = 0;
                    local_18a8 = local_18b8;
                    uVar32 = FUN_0277f02c(local_1898,&local_18c0);
                    if ((uVar32 & 1) != 0) {
                      local_18b0._0_4_ = (int)local_18b0 + (int)local_1888;
                      local_18a0._0_4_ = (int)local_18a0 + (int)local_1888;
                      iVar38 = local_18b0._4_4_ + local_1888._4_4_;
                      local_18a0._4_4_ = local_18a0._4_4_ + local_1888._4_4_;
                      iVar31 = local_18a0._4_4_ + 1;
                      local_18b0 = (uint *)CONCAT44(iVar38,(int)local_18b0);
                      if (iVar31 != iVar38) {
                        iVar41 = (int)local_18b0;
                        do {
                          uVar30 = (iVar41 - iVar27) + iVar2 * (iVar38 - iVar6);
                          if (uVar30 < 0x400) {
                            lVar39 = *(long *)(param_1 + 0xb20) + (ulong)(uVar30 >> 5) * 4;
                            *(uint *)(lVar39 + 0xee8) =
                                 *(uint *)(lVar39 + 0xee8) | 1 << (ulong)(uVar30 & 0x1f);
                          }
                          if (iVar41 < (int)local_18a0) {
                            iVar41 = iVar41 + 1;
                          }
                          else {
                            iVar38 = iVar38 + 1;
                            iVar41 = (int)local_18b0;
                          }
                        } while (((int)local_18b0 != iVar41) || (iVar31 != iVar38));
                      }
                    }
                    goto LAB_0169dfec;
                  }
                }
              }
              if (uVar30 < 0x400) {
                lVar39 = *(long *)(param_1 + 0xb20) + (ulong)(uVar30 >> 5) * 4;
                *(uint *)(lVar39 + 0xee8) = *(uint *)(lVar39 + 0xee8) | 1 << (ulong)(uVar30 & 0x1f);
              }
            }
LAB_0169dfec:
            if (iVar42 < iVar7) {
              iVar42 = iVar42 + 1;
            }
            else {
              iVar48 = iVar48 + 1;
              iVar42 = iVar27;
            }
          } while ((iVar27 != iVar42) || (iVar1 != iVar48));
        }
      }
    }
    puVar23 = PTR_DAT_04bb43c0;
    lVar34 = lVar34 + 1;
  } while (lVar34 != 8);
  lVar34 = *(long *)PTR_DAT_04bb5ce0;
  puVar45 = (undefined8 *)PTR_DAT_04bb37e0;
  puVar22 = (ulong *)PTR_DAT_04bb37e0;
  if (lVar34 != 0) {
    puVar45 = (undefined8 *)(lVar34 + 0xe54);
    puVar22 = (ulong *)(lVar34 + 0xe70);
  }
  uVar13 = *(undefined1 *)((long)puVar22 + 3);
  uVar11 = *(undefined4 *)((long)puVar22 + 4);
  uVar14 = *(undefined1 *)((long)puVar22 + 2);
  uVar32 = *puVar22;
  local_1870 = (undefined *)*puVar22;
  uVar17 = *(undefined2 *)puVar45;
  uVar12 = *(undefined4 *)((long)puVar45 + 4);
  uVar15 = *(undefined1 *)((long)puVar45 + 2);
  uVar16 = *(undefined1 *)((long)puVar45 + 3);
  local_18c0 = (undefined *)*puVar45;
  lVar34 = *(long *)PTR_DAT_04bb43c0;
  uVar28 = FUN_0277d6c4(&local_1870);
  lVar39 = *(long *)puVar23;
  if (lVar39 != 0) {
    lVar34 = *(long *)(lVar34 + 0x57e58);
    uVar28 = (uVar28 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
    if ((uVar28 < *(uint *)(lVar34 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar28 * 8) != 0)) {
      local_18c8 = (short)uVar32;
      local_18c6 = uVar14;
      local_18c5 = uVar13;
      local_18c4 = uVar11;
      FUN_0169fcb4(param_1,&local_18c8);
      lVar39 = *(long *)PTR_DAT_04bb43c0;
    }
  }
  uVar28 = FUN_0277d6c4(&local_18c0);
  if (*(long *)PTR_DAT_04bb43c0 != 0) {
    lVar34 = *(long *)(lVar39 + 0x57e58);
    uVar28 = (uVar28 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
    if ((uVar28 < *(uint *)(lVar34 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar28 * 8) != 0)) {
      local_18d0 = uVar17;
      local_18ce = uVar15;
      local_18cd = uVar16;
      local_18cc = uVar12;
      FUN_0169fcb4(param_1,&local_18d0);
    }
  }
  FUN_0169fdc8(param_1);
  *(int *)(*(long *)(param_1 + 0xb18) + 0x48) =
       *(int *)(*(long *)(param_1 + 0xb18) + 0x48) +
       *(char *)(*(long *)(param_1 + 0xb20) + 0x1618) * 400;
  lVar34 = *(long *)(param_1 + 0xb20);
  iVar26 = *(int *)(lVar34 + 0x1610);
  if (iVar26 < 10) {
LAB_0169e63c:
    if (5 < iVar26) {
      iVar26 = 1000;
      goto LAB_0169e648;
    }
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x123) = 0;
    lVar34 = *(long *)(param_1 + 0xb20);
    iVar26 = *(int *)(lVar34 + 0x1610);
    if (iVar26 < 0x14) {
      if (iVar26 < 0xf) {
        if (iVar26 < 10) goto LAB_0169e63c;
        iVar26 = 2000;
      }
      else {
        iVar26 = 3000;
      }
    }
    else {
      iVar26 = 4000;
    }
LAB_0169e648:
    *(int *)(*(long *)(param_1 + 0xb18) + 0x48) =
         *(int *)(*(long *)(param_1 + 0xb18) + 0x48) + iVar26;
    lVar34 = *(long *)(param_1 + 0xb20);
  }
  iVar26 = 0;
  uVar28 = 0;
  uVar32 = 0;
  uVar30 = 0xffffffff;
  do {
    uVar20 = uVar32 << 2;
    uVar21 = uVar32 >> 0x1f;
    uVar32 = (ulong)((int)uVar32 + 1);
    iVar43 = *(int *)(lVar34 + 0xfa4 + (-uVar21 & 0xfffffffc00000000 | uVar20));
    uVar29 = uVar28;
    if (iVar43 <= iVar26) {
      uVar29 = uVar30;
    }
    uVar28 = uVar28 + 1;
    if (iVar26 <= iVar43) {
      iVar26 = iVar43;
    }
    uVar30 = uVar29;
  } while (uVar28 != 0x39);
  if (3 < iVar26) {
    *(int *)(*(long *)(param_1 + 0xb18) + 0x28) =
         *(int *)(*(long *)(param_1 + 0xb18) + 0x28) + iVar26 * 1000;
    lVar34 = *(long *)(param_1 + 0xb18);
    if (iVar26 <= *(int *)(lVar34 + 0x10)) {
      if ((*(int *)(lVar34 + 0x10) != iVar26) || (uVar28 = FUN_0122b928(), 0x31 < uVar28))
      goto LAB_0169e724;
      lVar34 = *(long *)(param_1 + 0xb18);
    }
    *(uint *)(lVar34 + 0xc) = uVar29;
    *(int *)(*(long *)(param_1 + 0xb18) + 0x10) = iVar26;
    *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0xcd) = 0;
    puVar5 = (undefined2 *)(*(long *)(param_1 + 0xb20) + 0x11c0);
    puVar8 = puVar5 + (ulong)uVar29 * 4;
    if (0x38 < uVar29) {
      puVar8 = puVar5;
    }
    lVar34 = *(long *)(param_1 + 0xb18);
    *(undefined2 *)(lVar34 + 0x5c) = *puVar8;
    *(undefined1 *)(lVar34 + 0x5e) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)(lVar34 + 0x5f) = *(undefined1 *)((long)puVar8 + 3);
    *(undefined4 *)(lVar34 + 0x60) = *(undefined4 *)(puVar8 + 2);
  }
LAB_0169e724:
  FUN_0169ff70(param_1,0);
  iVar44 = 0;
  iVar43 = 0;
  iVar26 = 0;
  local_1870 = (undefined *)((ulong)local_1870 & 0xffffffff00000000);
  uVar32 = 0;
  do {
    iVar10 = *(int *)(*(long *)(param_1 + 0xb20) + 0x1104 +
                     (-(uVar32 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2));
    if (iVar43 < iVar10) {
      local_1870 = (undefined *)CONCAT44(local_1870._4_4_,iVar26);
      iVar43 = iVar10;
      iVar44 = iVar26;
    }
    iVar26 = iVar26 + 1;
    uVar32 = (ulong)((int)uVar32 + 1);
  } while (iVar26 != 0x2f);
  if (iVar43 < 5) goto LAB_0169e804;
  lVar34 = *(long *)(param_1 + 0xb18);
  if (*(int *)(lVar34 + 0x20) == 0) {
LAB_0169e7a8:
    *(int *)(lVar34 + 0x20) = iVar44;
    puVar5 = (undefined2 *)(*(long *)(param_1 + 0xb20) + 0x1480);
    lVar34 = *(long *)(param_1 + 0xb18);
    puVar8 = puVar5 + ((ulong)local_1870 & 0xffffffff) * 4;
    if (0x2e < (uint)local_1870) {
      puVar8 = puVar5;
    }
    *(undefined2 *)(lVar34 + 0xa4) = *puVar8;
    *(undefined1 *)(lVar34 + 0xa6) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)(lVar34 + 0xa7) = *(undefined1 *)((long)puVar8 + 3);
    *(undefined4 *)(lVar34 + 0xa8) = *(undefined4 *)(puVar8 + 2);
    *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0xd6) = 0;
  }
  else {
    uVar28 = FUN_0122b928();
    if (uVar28 < 0x1e) {
      lVar34 = *(long *)(param_1 + 0xb18);
      goto LAB_0169e7a8;
    }
  }
  *(int *)(*(long *)(param_1 + 0xb18) + 0x4c) =
       *(int *)(*(long *)(param_1 + 0xb18) + 0x4c) + iVar43 * 400;
LAB_0169e804:
  FUN_016a01f0(param_1,0);
  lVar34 = *(long *)(param_1 + 0xb18);
  iVar26 = *(int *)(lVar34 + 0x24) + *(int *)(param_1 + 0xb2c);
  *(int *)(param_1 + 0xb2c) = iVar26;
  iVar26 = *(int *)(lVar34 + 0x28) + iVar26;
  *(int *)(param_1 + 0xb2c) = iVar26;
  iVar26 = *(int *)(lVar34 + 0x2c) + iVar26;
  *(int *)(param_1 + 0xb2c) = iVar26;
  iVar26 = *(int *)(lVar34 + 0x30) + iVar26;
  *(int *)(param_1 + 0xb2c) = iVar26;
  iVar26 = *(int *)(lVar34 + 0x34) + iVar26;
  *(int *)(param_1 + 0xb2c) = iVar26;
  iVar26 = *(int *)(lVar34 + 0x38) + iVar26;
  *(int *)(param_1 + 0xb2c) = iVar26;
  iVar26 = *(int *)(lVar34 + 0x3c) + iVar26;
  *(int *)(param_1 + 0xb2c) = iVar26;
  iVar26 = *(int *)(lVar34 + 0x40) + iVar26;
  *(int *)(param_1 + 0xb2c) = iVar26;
  iVar26 = *(int *)(lVar34 + 0x44) + iVar26;
  *(int *)(param_1 + 0xb2c) = iVar26;
  iVar26 = *(int *)(lVar34 + 0x48) + iVar26;
  *(int *)(param_1 + 0xb2c) = iVar26;
  iVar26 = *(int *)(lVar34 + 0x4c) + iVar26;
  *(int *)(param_1 + 0xb2c) = iVar26;
  *(int *)(param_1 + 0xb2c) = *(int *)(lVar34 + 0x50) + iVar26;
  if (*(int *)(param_1 + 0xb34) != 0) {
    *(float *)(param_1 + 0xb38) =
         (float)*(int *)(param_1 + 0xb40) / (float)*(int *)(param_1 + 0xb34);
  }
  return 1;
}

