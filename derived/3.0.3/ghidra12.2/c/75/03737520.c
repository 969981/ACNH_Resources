
void FUN_03737520(long param_1,undefined8 param_2)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined2 local_174 [2];
  undefined *local_170;
  uint local_168;
  undefined *local_160;
  undefined1 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c [15];
  undefined1 local_13d;
  undefined2 local_138;
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
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined2 local_5c;
  undefined8 local_58;
  long local_50;
  undefined1 local_48;
  undefined2 local_46;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) != 0) {
      local_48 = 0;
      local_13d = 0;
      local_150 = 0x10;
      local_14c[0] = 0;
      local_138 = 0xffff;
      puStack_158 = local_14c;
      local_170 = PTR_DAT_04bcacd8 + 0x10;
      local_46 = *(undefined2 *)PTR_DAT_04bb3170;
      local_168 = *(uint *)PTR_DAT_04bb3238;
      local_160 = PTR_DAT_04bb2ab0 + 0x10;
      local_134 = 3;
      local_5c = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_130 = *(undefined2 *)PTR_DAT_04bb37e0;
      local_12e = PTR_DAT_04bb37e0[2];
      local_12d = PTR_DAT_04bb37e0[3];
      local_12c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_58 = 0;
      local_50 = 0;
      local_a0 = 0xffffffff;
      uStack_98 = 0xffffffff00000000;
      local_90 = 0xffffffff;
      uStack_88 = 0xffffffffffffffff;
      local_70 = 0x244db4da;
      local_6c = 0;
      uStack_64 = 0;
      if (*(int *)(param_1 + 0xe0) != 0) {
        plVar8 = *(long **)(param_1 + 0xe8);
        lVar9 = (long)*(int *)(param_1 + 0xe0) << 3;
        do {
          if ((*(ushort *)(*plVar8 + 0x114) & 1) != 0) {
            local_128 = local_130;
            local_126 = local_12e;
            local_125 = local_12d;
            local_124 = local_12c;
            local_120 = local_130;
            local_11e = local_12e;
            local_11d = local_12d;
            local_11c = local_12c;
            local_118 = local_130;
            local_116 = local_12e;
            local_115 = local_12d;
            local_114 = local_12c;
            local_110 = local_130;
            local_10e = local_12e;
            local_10d = local_12d;
            local_10c = local_12c;
            local_108 = local_130;
            local_106 = local_12e;
            local_105 = local_12d;
            local_104 = local_12c;
            local_100 = local_130;
            local_fe = local_12e;
            local_fd = local_12d;
            local_fc = local_12c;
            local_f8 = local_130;
            local_f6 = local_12e;
            local_f5 = local_12d;
            local_f4 = local_12c;
            local_f0 = local_130;
            local_ee = local_12e;
            local_ed = local_12d;
            local_ec = local_12c;
            local_e8 = local_130;
            local_e6 = local_12e;
            local_e5 = local_12d;
            local_e4 = local_12c;
            local_e0 = local_130;
            local_de = local_12e;
            local_dd = local_12d;
            local_dc = local_12c;
            local_d8 = local_130;
            local_d6 = local_12e;
            local_d5 = local_12d;
            local_d4 = local_12c;
            local_d0 = local_130;
            local_ce = local_12e;
            local_cd = local_12d;
            local_cc = local_12c;
            local_c8 = local_130;
            local_c6 = local_12e;
            local_c5 = local_12d;
            local_c4 = local_12c;
            local_c0 = local_130;
            local_be = local_12e;
            local_bd = local_12d;
            local_bc = local_12c;
            local_b8 = local_130;
            local_b6 = local_12e;
            local_b5 = local_12d;
            local_b4 = local_12c;
            local_b0 = local_130;
            local_ae = local_12e;
            local_ad = local_12d;
            local_ac = local_12c;
            local_a8 = local_130;
            local_a6 = local_12e;
            local_a5 = local_12d;
            local_a4 = local_12c;
            FUN_0373b290(&local_170);
            puVar3 = PTR_DAT_04bb27c0;
            if (local_168 == 0) {
              return;
            }
            lVar9 = *(long *)PTR_DAT_04bb27c0;
            if (lVar9 == 0) {
              return;
            }
            plVar8 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                               ((ulong)(local_168 >> 0x11) & 0x7ff8));
            if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar8 + 0x46) != local_168)) {
              plVar8 = (long *)0x0;
            }
            if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
              plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
              lVar9 = *(long *)puVar3;
              iVar4 = (**(code **)(*plVar6 + 0x60))();
              if (iVar4 < 0x11) {
                uVar10 = 1;
                goto LAB_0373784c;
              }
              if (*(uint *)(lVar9 + 0x5e8) < 5) {
                uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
                goto LAB_0373784c;
              }
            }
            uVar10 = 0;
LAB_0373784c:
            if (plVar8 == (long *)0x0) {
              return;
            }
            if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
              *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb37d8);
            }
            uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
            if ((uVar10 & uVar5) != 1) {
              return;
            }
            plVar8 = (long *)plVar8[0xc];
            if (plVar8 == (long *)0x0) {
              return;
            }
            if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar4 != 0)) {
              *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb37a0);
            }
            uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb3798);
            if ((uVar7 & 1) == 0) {
              return;
            }
            local_50 = plVar8[0x1835];
            local_48 = (undefined1)plVar8[0x1836];
            FUN_007ef010(local_174,param_2);
            local_46 = local_174[0];
            FUN_02346fe0(plVar8,&local_50);
            return;
          }
          plVar8 = plVar8 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
  }
  return;
}

