
void FUN_037327a0(long param_1,uint *param_2,undefined2 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined4 *puVar23;
  byte bVar24;
  ulong uVar25;
  long *plVar26;
  uint uVar27;
  undefined8 *puVar28;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined1 local_1cc [8];
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined2 local_1a8;
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined2 uStack_184;
  undefined1 uStack_182;
  undefined1 uStack_181;
  undefined4 uStack_180;
  undefined2 local_17c;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined4 uStack_178;
  undefined2 local_174;
  undefined1 uStack_172;
  undefined1 uStack_171;
  undefined4 uStack_170;
  undefined2 local_16c;
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
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
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined2 local_74;
  undefined8 local_70;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0xe0) == 0) {
    return;
  }
  uVar27 = *param_2;
  uVar25 = 0;
  lVar22 = (long)*(int *)(param_1 + 0xe0) << 3;
  while (uVar27 != *(uint *)(*(long *)(*(long *)(param_1 + 0xe8) + uVar25 * 8) + 8)) {
    uVar25 = uVar25 + 1;
    lVar22 = lVar22 + -8;
    if (lVar22 == 0) {
      return;
    }
  }
  if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0xe8) + uVar25 * 8) + 0x114) & 1) != 0) {
    local_158._0_4_ = (uint)(uint3)local_158;
    *(undefined2 *)(param_1 + 0x11d0) = *param_3;
    *(undefined1 *)(param_1 + 0x11d2) = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)(param_1 + 0x11d3) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_1 + 0x11d4) = *(undefined4 *)(param_3 + 2);
    *(undefined2 *)(param_1 + 0x11d8) = param_3[4];
    *(undefined1 *)(param_1 + 0x11da) = *(undefined1 *)(param_3 + 5);
    *(undefined1 *)(param_1 + 0x11db) = *(undefined1 *)((long)param_3 + 0xb);
    *(undefined4 *)(param_1 + 0x11dc) = *(undefined4 *)(param_3 + 6);
    *(undefined2 *)(param_1 + 0x11e0) = param_3[8];
    *(undefined1 *)(param_1 + 0x11e2) = *(undefined1 *)(param_3 + 9);
    *(undefined1 *)(param_1 + 0x11e3) = *(undefined1 *)((long)param_3 + 0x13);
    *(undefined4 *)(param_1 + 0x11e4) = *(undefined4 *)(param_3 + 10);
    *(undefined2 *)(param_1 + 0x11e8) = param_3[0xc];
    *(undefined1 *)(param_1 + 0x11ea) = *(undefined1 *)(param_3 + 0xd);
    *(undefined1 *)(param_1 + 0x11eb) = *(undefined1 *)((long)param_3 + 0x1b);
    *(undefined4 *)(param_1 + 0x11ec) = *(undefined4 *)(param_3 + 0xe);
    *(undefined2 *)(param_1 + 0x11f0) = param_3[0x10];
    *(undefined1 *)(param_1 + 0x11f2) = *(undefined1 *)(param_3 + 0x11);
    *(undefined1 *)(param_1 + 0x11f3) = *(undefined1 *)((long)param_3 + 0x23);
    *(undefined4 *)(param_1 + 0x11f4) = *(undefined4 *)(param_3 + 0x12);
    *(undefined2 *)(param_1 + 0x11f8) = param_3[0x14];
    *(undefined1 *)(param_1 + 0x11fa) = *(undefined1 *)(param_3 + 0x15);
    *(undefined1 *)(param_1 + 0x11fb) = *(undefined1 *)((long)param_3 + 0x2b);
    *(undefined4 *)(param_1 + 0x11fc) = *(undefined4 *)(param_3 + 0x16);
    *(undefined2 *)(param_1 + 0x1200) = param_3[0x18];
    *(undefined1 *)(param_1 + 0x1202) = *(undefined1 *)(param_3 + 0x19);
    *(undefined1 *)(param_1 + 0x1203) = *(undefined1 *)((long)param_3 + 0x33);
    puVar1 = PTR_DAT_04bcacd8;
    puVar23 = (undefined4 *)PTR_DAT_04bb3238;
    puVar2 = PTR_DAT_04bb2ab0;
    local_164 = local_164 & 0xffffff00;
    local_98 = 0;
    uStack_90 = 0;
    *(undefined4 *)(param_1 + 0x1204) = *(undefined4 *)(param_3 + 0x1a);
    puVar4 = PTR_DAT_04bb37e0;
    puVar1 = puVar1 + 0x10;
    local_70 = 0;
    uStack_168 = 0x10;
    local_150 = CONCAT62(local_150._2_6_,0xffff);
    local_150 = CONCAT44(3,(undefined4)local_150);
    local_b8 = 0xffffffff;
    uStack_b0 = 0xffffffff00000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0xffffffffffffffff;
    local_188 = SUB84(puVar1,0);
    uVar5 = local_188;
    uStack_184 = (undefined2)((ulong)puVar1 >> 0x20);
    uVar3 = uStack_184;
    uStack_182 = (undefined1)((ulong)puVar1 >> 0x30);
    uVar6 = uStack_182;
    uStack_181 = (undefined1)((ulong)puVar1 >> 0x38);
    uVar7 = uStack_181;
    local_88 = 0x244db4da;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = 0;
    puVar2 = puVar2 + 0x10;
    *(undefined2 *)(param_1 + 0x1208) = param_3[0x1c];
    uStack_178 = SUB84(puVar2,0);
    uVar8 = uStack_178;
    local_174 = (undefined2)((ulong)puVar2 >> 0x20);
    uVar9 = local_174;
    uStack_172 = (undefined1)((ulong)puVar2 >> 0x30);
    uVar10 = uStack_172;
    uStack_171 = (undefined1)((ulong)puVar2 >> 0x38);
    uVar11 = uStack_171;
    uStack_170 = SUB84(&local_164,0);
    uVar12 = uStack_170;
    local_16c = (undefined2)((ulong)&local_164 >> 0x20);
    uVar13 = local_16c;
    uStack_16a = (undefined1)((ulong)&local_164 >> 0x30);
    uVar14 = uStack_16a;
    uStack_169 = (undefined1)((ulong)&local_164 >> 0x38);
    uVar15 = uStack_169;
    *(undefined1 *)(param_1 + 0x120a) = *(undefined1 *)(param_3 + 0x1d);
    *(undefined1 *)(param_1 + 0x120b) = *(undefined1 *)((long)param_3 + 0x3b);
    *(undefined4 *)(param_1 + 0x120c) = *(undefined4 *)(param_3 + 0x1e);
    *(undefined2 *)(param_1 + 0x1210) = param_3[0x20];
    *(undefined1 *)(param_1 + 0x1212) = *(undefined1 *)(param_3 + 0x21);
    *(undefined1 *)(param_1 + 0x1213) = *(undefined1 *)((long)param_3 + 0x43);
    uStack_180 = *puVar23;
    local_12e = puVar4[2];
    *(undefined4 *)(param_1 + 0x1214) = *(undefined4 *)(param_3 + 0x22);
    local_130 = *(undefined2 *)puVar4;
    local_144 = *(undefined4 *)(puVar4 + 4);
    local_12d = puVar4[3];
    local_148 = CONCAT13(local_12d,CONCAT12(local_12e,local_130));
    local_140 = CONCAT13(local_12d,CONCAT12(local_12e,local_130));
    local_138 = CONCAT13(local_12d,CONCAT12(local_12e,local_130));
    if (*(int *)(param_1 + 0xe0) != 0) {
      plVar26 = *(long **)(param_1 + 0xe8);
      lVar22 = (long)*(int *)(param_1 + 0xe0) << 3;
      do {
        if ((*(ushort *)(*plVar26 + 0x114) & 1) != 0) {
          local_13c = local_144;
          local_134 = local_144;
          local_12c = local_144;
          local_128 = local_130;
          local_126 = local_12e;
          local_125 = local_12d;
          local_124 = local_144;
          local_120 = local_130;
          local_11e = local_12e;
          local_11d = local_12d;
          local_11c = local_144;
          local_118 = local_130;
          local_116 = local_12e;
          local_115 = local_12d;
          local_114 = local_144;
          local_110 = local_130;
          local_10e = local_12e;
          local_10d = local_12d;
          local_10c = local_144;
          local_108 = local_130;
          local_106 = local_12e;
          local_105 = local_12d;
          local_104 = local_144;
          local_100 = local_130;
          local_fe = local_12e;
          local_fd = local_12d;
          local_fc = local_144;
          local_f8 = local_130;
          local_f6 = local_12e;
          local_f5 = local_12d;
          local_f4 = local_144;
          local_f0 = local_130;
          local_ee = local_12e;
          local_ed = local_12d;
          local_ec = local_144;
          local_e8 = local_130;
          local_e6 = local_12e;
          local_e5 = local_12d;
          local_e4 = local_144;
          local_e0 = local_130;
          local_de = local_12e;
          local_dd = local_12d;
          local_dc = local_144;
          local_d8 = local_130;
          local_d6 = local_12e;
          local_d5 = local_12d;
          local_d4 = local_144;
          local_d0 = local_130;
          local_ce = local_12e;
          local_cd = local_12d;
          local_cc = local_144;
          local_c8 = local_130;
          local_c6 = local_12e;
          local_c5 = local_12d;
          local_c4 = local_144;
          local_c0 = local_130;
          local_be = local_12e;
          local_bd = local_12d;
          local_bc = local_144;
          FUN_0373b290(&local_188);
          local_1cc._4_2_ = 0;
          local_1d0 = (undefined4)local_b8;
          uVar17 = FUN_0252d29c();
          local_1cc._0_4_ = uVar17;
          FUN_021283a0(param_1 + 0x11d0,&local_1d0);
          puVar23 = (undefined4 *)PTR_DAT_04bb3238;
          break;
        }
        plVar26 = plVar26 + 1;
        lVar22 = lVar22 + -8;
      } while (lVar22 != 0);
    }
    uStack_180 = *puVar23;
    uStack_168 = 0x10;
    local_12e = puVar4[2];
    local_12d = puVar4[3];
    local_158._0_4_ = (uint)(uint3)local_158;
    local_164 = local_164 & 0xffffff00;
    local_144 = *(undefined4 *)(puVar4 + 4);
    local_150 = CONCAT62(local_150._2_6_,0xffff);
    local_150 = CONCAT44(3,(undefined4)local_150);
    local_88 = 0x244db4da;
    local_70 = 0;
    local_130 = *(undefined2 *)puVar4;
    local_138 = *(undefined4 *)puVar4;
    local_140 = *(undefined4 *)puVar4;
    local_148 = *(undefined4 *)puVar4;
    local_74 = 0;
    local_b8 = 0xffffffff;
    uStack_b0 = 0xffffffff00000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0xffffffffffffffff;
    local_98 = 0;
    uStack_90 = 0;
    local_84 = 0;
    uStack_7c = 0;
    local_188 = uVar5;
    local_13c = local_144;
    local_134 = local_144;
    local_12c = local_144;
    local_128 = local_130;
    local_126 = local_12e;
    local_125 = local_12d;
    local_124 = local_144;
    local_120 = local_130;
    local_11e = local_12e;
    local_11d = local_12d;
    local_11c = local_144;
    local_118 = local_130;
    local_116 = local_12e;
    local_115 = local_12d;
    local_114 = local_144;
    local_110 = local_130;
    local_10e = local_12e;
    local_10d = local_12d;
    local_10c = local_144;
    local_108 = local_130;
    local_106 = local_12e;
    local_105 = local_12d;
    local_104 = local_144;
    local_100 = local_130;
    local_fe = local_12e;
    local_fd = local_12d;
    local_fc = local_144;
    local_f8 = local_130;
    local_f6 = local_12e;
    local_f5 = local_12d;
    local_f4 = local_144;
    local_f0 = local_130;
    local_ee = local_12e;
    local_ed = local_12d;
    local_ec = local_144;
    local_e8 = local_130;
    local_e6 = local_12e;
    local_e5 = local_12d;
    local_e4 = local_144;
    local_e0 = local_130;
    local_de = local_12e;
    local_dd = local_12d;
    local_dc = local_144;
    local_d8 = local_130;
    local_d6 = local_12e;
    local_d5 = local_12d;
    local_d4 = local_144;
    local_d0 = local_130;
    local_ce = local_12e;
    local_cd = local_12d;
    local_cc = local_144;
    local_c8 = local_130;
    local_c6 = local_12e;
    local_c5 = local_12d;
    local_c4 = local_144;
    local_c0 = local_130;
    local_be = local_12e;
    local_bd = local_12d;
    local_bc = local_144;
    if (*(int *)(param_1 + 0xe0) != 0) {
      plVar26 = *(long **)(param_1 + 0xe8);
      lVar22 = (long)*(int *)(param_1 + 0xe0) << 3;
      do {
        if ((*(ushort *)(*plVar26 + 0x114) & 1) != 0) {
          uStack_184 = uVar3;
          uStack_182 = uVar6;
          uStack_181 = uVar7;
          uStack_178 = uVar8;
          local_174 = uVar9;
          uStack_172 = uVar10;
          uStack_171 = uVar11;
          uStack_170 = uVar12;
          local_16c = uVar13;
          uStack_16a = uVar14;
          uStack_169 = uVar15;
          FUN_0373b290(&local_188);
          FUN_0372b220(uStack_180,param_1 + 0x11d0);
          break;
        }
        plVar26 = plVar26 + 1;
        lVar22 = lVar22 + -8;
      } while (lVar22 != 0);
    }
    uStack_184 = *(undefined2 *)puVar4;
    uStack_182 = puVar4[2];
    uStack_180 = *(undefined4 *)(puVar4 + 4);
    bVar24 = *PTR_DAT_04bb32e0;
    local_13c._0_1_ = 1;
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    local_138 = 0;
    uStack_181 = puVar4[3];
    local_164 = CONCAT13(uStack_181,*(undefined3 *)puVar4);
    local_15c = CONCAT13(uStack_181,*(undefined3 *)puVar4);
    local_158 = CONCAT17(uStack_181,CONCAT16(uStack_182,CONCAT24(uStack_184,uStack_180)));
    local_150 = CONCAT17(uStack_181,CONCAT16(uStack_182,CONCAT24(uStack_184,uStack_180)));
    local_144 = CONCAT13(uStack_181,*(undefined3 *)puVar4);
    local_17c = uStack_184;
    uStack_17a = uStack_182;
    uStack_179 = uStack_181;
    uStack_178 = uStack_180;
    local_174 = uStack_184;
    uStack_172 = uStack_182;
    uStack_171 = uStack_181;
    uStack_170 = uStack_180;
    local_16c = uStack_184;
    uStack_16a = uStack_182;
    uStack_169 = uStack_181;
    uStack_168 = uStack_180;
    local_160 = uStack_180;
    local_148 = uStack_180;
    local_140 = uStack_180;
    local_188._0_1_ = bVar24;
    FUN_0252d11c(&local_1d0);
    uStack_184 = *(undefined2 *)(param_1 + 0x11d0);
    local_13c = (uint)local_13c._1_3_ << 8;
    local_138 = 0;
    uVar3 = *(undefined2 *)(param_1 + 0x11d2);
    uStack_182 = (undefined1)uVar3;
    uStack_181 = (undefined1)((ushort)uVar3 >> 8);
    uStack_180 = *(undefined4 *)(param_1 + 0x11d4);
    local_17c = *(undefined2 *)(param_1 + 0x11d8);
    uStack_17a = (undefined1)*(undefined2 *)(param_1 + 0x11da);
    uStack_179 = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x11da) >> 8);
    bVar24 = (byte)local_1d0;
    if (7 < (byte)local_1d0) {
      bVar24 = 0xff;
    }
    local_188 = CONCAT31(local_188._1_3_,bVar24);
    uStack_178 = *(undefined4 *)(param_1 + 0x11dc);
    local_174 = *(undefined2 *)(param_1 + 0x11e0);
    uStack_172 = *(undefined1 *)(param_1 + 0x11e2);
    uStack_171 = *(undefined1 *)(param_1 + 0x11e3);
    uStack_170 = *(undefined4 *)(param_1 + 0x11e4);
    local_16c = *(undefined2 *)(param_1 + 0x11e8);
    uStack_16a = *(undefined1 *)(param_1 + 0x11ea);
    uStack_169 = *(undefined1 *)(param_1 + 0x11eb);
    uStack_168 = *(undefined4 *)(param_1 + 0x11ec);
    local_164 = *(undefined4 *)(param_1 + 0x11f0);
    local_160 = *(undefined4 *)(param_1 + 0x11f4);
    local_15c = *(undefined4 *)(param_1 + 0x11f8);
    local_158 = *(undefined8 *)(param_1 + 0x11fc);
    local_150 = *(undefined8 *)(param_1 + 0x1204);
    local_148 = *(undefined4 *)(param_1 + 0x120c);
    local_144 = *(undefined4 *)(param_1 + 0x1210);
    local_140 = *(undefined4 *)(param_1 + 0x1214);
    FUN_02543cdc(&local_188);
    return;
  }
  lVar22 = *(long *)PTR_DAT_04bb27c0;
  if (lVar22 == 0) {
    return;
  }
  if ((((uVar27 == 0) ||
       (plVar26 = *(long **)(*(long *)(*(long *)(lVar22 + 0x1c0) + 8) +
                            ((ulong)(uVar27 >> 0x11) & 0x7ff8)), plVar26 == (long *)0x0)) ||
      ((*(uint *)(plVar26 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar26 + 0x46) != uVar27)) {
    plVar26 = (long *)0x0;
  }
  if (*(int *)(lVar22 + 0x288) == 1 || *(int *)(lVar22 + 0x288) == -1) {
    plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar22 = *(long *)puVar1;
    iVar16 = (**(code **)(*plVar19 + 0x60))();
    if (iVar16 < 0x11) {
      uVar27 = 1;
      goto joined_r0x03733004;
    }
    if (*(uint *)(lVar22 + 0x5e8) < 5) {
      uVar27 = 0x1aU >> (ulong)(*(uint *)(lVar22 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03733004;
    }
  }
  uVar27 = 0;
joined_r0x03733004:
  if (plVar26 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar16 != 0)) {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar18 = (**(code **)(*plVar26 + 0x20))(plVar26,PTR_DAT_04bb37d0);
  if ((uVar27 & uVar18) != 1) {
    return;
  }
  puVar28 = (undefined8 *)plVar26[0x77];
  if (((*PTR_DAT_04bb6710 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar16 != 0)) {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if ((puVar28 != (undefined8 *)0x0) &&
     (uVar20 = (**(code **)*puVar28)(puVar28,PTR_DAT_04bb6708), (uVar20 & 1) != 0)) {
    FUN_03734854(param_1,param_3,uVar25 & 0xffffffff);
    lVar22 = *(long *)(*(long *)(param_1 + 0xe8) + uVar25 * 8);
    local_188 = *(undefined4 *)(lVar22 + 0x88);
    uVar21 = *(undefined8 *)(lVar22 + 0x8c);
    uStack_184 = (undefined2)uVar21;
    uStack_182 = (undefined1)((ulong)uVar21 >> 0x10);
    uStack_181 = (undefined1)((ulong)uVar21 >> 0x18);
    uStack_180 = (undefined4)((ulong)uVar21 >> 0x20);
    uVar21 = *(undefined8 *)(lVar22 + 0x94);
    local_17c = (undefined2)uVar21;
    uStack_17a = (undefined1)((ulong)uVar21 >> 0x10);
    uStack_179 = (undefined1)((ulong)uVar21 >> 0x18);
    uStack_178 = (undefined4)((ulong)uVar21 >> 0x20);
    uVar21 = *(undefined8 *)(lVar22 + 0x9c);
    local_174 = (undefined2)uVar21;
    uStack_172 = (undefined1)((ulong)uVar21 >> 0x10);
    uStack_171 = (undefined1)((ulong)uVar21 >> 0x18);
    uStack_170 = (undefined4)((ulong)uVar21 >> 0x20);
    uVar21 = *(undefined8 *)(lVar22 + 0xa4);
    local_16c = (undefined2)uVar21;
    uStack_16a = (undefined1)((ulong)uVar21 >> 0x10);
    uStack_169 = (undefined1)((ulong)uVar21 >> 0x18);
    uStack_168 = (undefined4)((ulong)uVar21 >> 0x20);
    local_164 = *(undefined4 *)(lVar22 + 0xac);
    local_160 = *(undefined4 *)(lVar22 + 0xb0);
    local_15c = *(undefined4 *)(lVar22 + 0xb4);
    local_158 = *(undefined8 *)(lVar22 + 0xb8);
    local_150 = *(undefined8 *)(lVar22 + 0xc0);
    local_148 = *(undefined4 *)(lVar22 + 200);
    local_144 = *(undefined4 *)(lVar22 + 0xcc);
    FUN_01fa16d0(puVar28,&local_188);
    return;
  }
  puVar28 = (undefined8 *)plVar26[0x77];
  if (((*PTR_DAT_04bb6728 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb6728), iVar16 != 0)) {
    *(undefined **)PTR_DAT_04bb6720 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6728);
  }
  if (puVar28 == (undefined8 *)0x0) {
    return;
  }
  uVar20 = (**(code **)*puVar28)(puVar28,PTR_DAT_04bb6720);
  if ((uVar20 & 1) == 0) {
    return;
  }
  FUN_03734854(param_1,param_3,uVar25 & 0xffffffff);
  plVar26 = *(long **)(puVar28[1] + 0x60);
  if (plVar26 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb37c8 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb37c8), iVar16 != 0)) {
    *(undefined **)PTR_DAT_04bb37c0 = PTR_DAT_04bb37a8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37c8);
  }
  uVar20 = (**(code **)(*plVar26 + 0x10))(plVar26,PTR_DAT_04bb37c0);
  if ((uVar20 & 1) == 0) {
    return;
  }
  lVar22 = *(long *)(*(long *)(param_1 + 0xe8) + uVar25 * 8);
  local_1d0 = *(undefined4 *)(lVar22 + 0x88);
  local_1cc = *(undefined1 (*) [8])(lVar22 + 0x8c);
  local_1c4 = *(undefined8 *)(lVar22 + 0x94);
  local_1bc = *(undefined8 *)(lVar22 + 0x9c);
  local_1b4 = *(undefined8 *)(lVar22 + 0xa4);
  local_1ac = *(undefined4 *)(lVar22 + 0xac);
  local_1a8 = *(undefined2 *)(lVar22 + 0xb0);
  local_1a6 = *(undefined1 *)(lVar22 + 0xb2);
  local_1a5 = *(undefined1 *)(lVar22 + 0xb3);
  local_1a4 = *(undefined4 *)(lVar22 + 0xb4);
  local_1a0 = *(undefined8 *)(lVar22 + 0xb8);
  uStack_198 = *(undefined8 *)(lVar22 + 0xc0);
  local_190 = *(undefined4 *)(lVar22 + 200);
  uStack_18c = *(undefined4 *)(lVar22 + 0xcc);
  FUN_007091b4(&local_188);
  local_1d4 = 0;
  local_bc = CONCAT31(local_bc._1_3_,*(undefined1 *)(puVar28[1] + 0x224));
  FUN_02017350(plVar26,local_1cc + 4,&local_1d4);
  local_1d4 = 0;
  FUN_02015a90(plVar26,(long)&local_1b4 + 4,&local_1d4);
  local_1d4 = 0;
  FUN_02016ab0(plVar26,&local_1d0,&local_1d4);
  local_1d4 = 0;
  FUN_020174e4(plVar26,&local_1a0,&local_1d4);
  local_1d4 = 0;
  FUN_02015670(plVar26,(long)&local_1bc + 4,&local_1d4);
  return;
}

