
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0372a970(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined *local_160;
  uint local_158;
  undefined *local_150;
  undefined1 *puStack_148;
  undefined4 local_140;
  undefined1 local_13c [15];
  undefined1 local_12d;
  undefined2 local_128;
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
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined2 local_4c;
  undefined8 local_48;
  
  local_12d = 0;
  local_13c[0] = 0;
  local_140 = 0x10;
  local_128 = 0xffff;
  local_124 = 3;
  local_160 = PTR_DAT_04bcacd8 + 0x10;
  local_158 = *(uint *)PTR_DAT_04bb3238;
  puStack_148 = local_13c;
  local_70 = 0;
  uStack_68 = 0;
  local_150 = PTR_DAT_04bb2ab0 + 0x10;
  local_48 = 0;
  local_4c = 0;
  local_120 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_11e = PTR_DAT_04bb37e0[2];
  local_11d = PTR_DAT_04bb37e0[3];
  local_11c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_90 = 0xffffffff;
  uStack_88 = 0xffffffff00000000;
  local_80 = 0xffffffff;
  uStack_78 = 0xffffffffffffffff;
  local_60 = 0x244db4da;
  local_5c = 0;
  uStack_54 = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar7 = *(long **)(param_1 + 0xe8);
    lVar8 = (long)*(int *)(param_1 + 0xe0) << 3;
    do {
      if ((*(ushort *)(*plVar7 + 0x114) & 1) != 0) {
        local_118 = local_120;
        local_116 = local_11e;
        local_115 = local_11d;
        local_114 = local_11c;
        local_110 = local_120;
        local_10e = local_11e;
        local_10d = local_11d;
        local_10c = local_11c;
        local_108 = local_120;
        local_106 = local_11e;
        local_105 = local_11d;
        local_104 = local_11c;
        local_100 = local_120;
        local_fe = local_11e;
        local_fd = local_11d;
        local_fc = local_11c;
        local_f8 = local_120;
        local_f6 = local_11e;
        local_f5 = local_11d;
        local_f4 = local_11c;
        local_f0 = local_120;
        local_ee = local_11e;
        local_ed = local_11d;
        local_ec = local_11c;
        local_e8 = local_120;
        local_e6 = local_11e;
        local_e5 = local_11d;
        local_e4 = local_11c;
        local_e0 = local_120;
        local_de = local_11e;
        local_dd = local_11d;
        local_dc = local_11c;
        local_d8 = local_120;
        local_d6 = local_11e;
        local_d5 = local_11d;
        local_d4 = local_11c;
        local_d0 = local_120;
        local_ce = local_11e;
        local_cd = local_11d;
        local_cc = local_11c;
        local_c8 = local_120;
        local_c6 = local_11e;
        local_c5 = local_11d;
        local_c4 = local_11c;
        local_c0 = local_120;
        local_be = local_11e;
        local_bd = local_11d;
        local_bc = local_11c;
        local_b8 = local_120;
        local_b6 = local_11e;
        local_b5 = local_11d;
        local_b4 = local_11c;
        local_b0 = local_120;
        local_ae = local_11e;
        local_ad = local_11d;
        local_ac = local_11c;
        local_a8 = local_120;
        local_a6 = local_11e;
        local_a5 = local_11d;
        local_a4 = local_11c;
        local_a0 = local_120;
        local_9e = local_11e;
        local_9d = local_11d;
        local_9c = local_11c;
        local_98 = local_120;
        local_96 = local_11e;
        local_95 = local_11d;
        local_94 = local_11c;
        FUN_0373b290(&local_160);
        puVar2 = PTR_DAT_04bb27c0;
        if (local_158 == 0) {
          return (undefined8 *)0x0;
        }
        lVar8 = *(long *)PTR_DAT_04bb27c0;
        if (lVar8 == 0) {
          return (undefined8 *)0x0;
        }
        plVar7 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(local_158 >> 0x11) & 0x7ff8));
        if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
           (*(uint *)(plVar7 + 0x46) != local_158)) {
          plVar7 = (long *)0x0;
        }
        if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
          plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar8 = *(long *)puVar2;
          iVar3 = (**(code **)(*plVar5 + 0x60))();
          if (iVar3 < 0x11) {
            uVar10 = 1;
            goto joined_r0x0372ac2c;
          }
          if (*(uint *)(lVar8 + 0x5e8) < 5) {
            uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
            goto joined_r0x0372ac2c;
          }
        }
        uVar10 = 0;
joined_r0x0372ac2c:
        if (plVar7 == (long *)0x0) {
          return (undefined8 *)0x0;
        }
        lVar8 = plVar7[0x2a];
        uVar1 = *(uint *)(plVar7 + 0x49);
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
        if ((int)lVar8 != 1) {
          return (undefined8 *)0x0;
        }
        if ((uVar4 & uVar10) == 0) {
          return (undefined8 *)0x0;
        }
        if ((uVar1 >> 4 & 1) == 0) {
          return (undefined8 *)0x0;
        }
        puVar9 = (undefined8 *)plVar7[0x77];
        if (((*PTR_DAT_04bc2398 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc2398), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bc2390 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc2398);
        }
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc2390);
        if ((uVar6 & 1) == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        return puVar9;
      }
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  return (undefined8 *)0x0;
}

