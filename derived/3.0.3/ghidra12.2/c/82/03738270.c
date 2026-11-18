
undefined4 FUN_03738270(long param_1)

{
  uint *puVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined *local_140;
  undefined4 local_138 [2];
  undefined **local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [15];
  undefined1 local_10d;
  undefined2 local_108;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined2 local_2c;
  undefined8 local_28;
  
  if ((*(uint *)(&DAT_00001230 + param_1) >> 2 & 1) != 0) {
    return DAT_04c9a0c8;
  }
  if ((*(uint *)(&DAT_00001230 + param_1) >> 3 & 1) != 0) {
    local_10d = 0;
    local_11c[0] = 0;
    local_120 = 0x10;
    local_108 = 0xffff;
    local_104 = 3;
    local_140 = PTR_DAT_04bcacd8 + 0x10;
    local_28 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_fd = PTR_DAT_04bb37e0[3];
    local_130 = &PTR_LAB_048fb098;
    puStack_128 = local_11c;
    local_100 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_2c = 0;
    local_138[0] = *(undefined4 *)PTR_DAT_04bb3238;
    local_fe = PTR_DAT_04bb37e0[2];
    local_fc = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_f8 = local_100;
    local_f0 = local_100;
    local_e8 = local_100;
    local_e0 = local_100;
    local_d8 = local_100;
    local_d0 = local_100;
    local_c8 = local_100;
    local_c0 = local_100;
    local_b8 = local_100;
    local_b0 = local_100;
    local_a8 = local_100;
    local_a0 = local_100;
    local_98 = local_100;
    local_90 = local_100;
    local_88 = local_100;
    local_80 = local_100;
    local_78 = local_100;
    local_f6 = local_fe;
    local_ee = local_fe;
    local_e6 = local_fe;
    local_de = local_fe;
    local_d6 = local_fe;
    local_ce = local_fe;
    local_c6 = local_fe;
    local_be = local_fe;
    local_b6 = local_fe;
    local_ae = local_fe;
    local_a6 = local_fe;
    local_9e = local_fe;
    local_96 = local_fe;
    local_8e = local_fe;
    local_86 = local_fe;
    local_7e = local_fe;
    local_76 = local_fe;
    local_f5 = local_fd;
    local_f4 = local_fc;
    local_ed = local_fd;
    local_ec = local_fc;
    local_e5 = local_fd;
    local_e4 = local_fc;
    local_dd = local_fd;
    local_dc = local_fc;
    local_d5 = local_fd;
    local_d4 = local_fc;
    local_cd = local_fd;
    local_cc = local_fc;
    local_c5 = local_fd;
    local_c4 = local_fc;
    local_bd = local_fd;
    local_bc = local_fc;
    local_b5 = local_fd;
    local_b4 = local_fc;
    local_ad = local_fd;
    local_ac = local_fc;
    local_a5 = local_fd;
    local_a4 = local_fc;
    local_9d = local_fd;
    local_9c = local_fc;
    local_95 = local_fd;
    local_94 = local_fc;
    local_8d = local_fd;
    local_8c = local_fc;
    local_85 = local_fd;
    local_84 = local_fc;
    local_7d = local_fd;
    local_7c = local_fc;
    local_75 = local_fd;
    local_74 = local_fc;
    local_70 = 0xffffffff;
    uStack_68 = 0xffffffff00000000;
    local_60 = 0xffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_40 = 0x244db4da;
    local_3c = 0;
    uStack_34 = 0;
    puVar7 = (undefined4 *)PTR_DAT_04bb3238;
    if (*(int *)(param_1 + 0xe0) != 0) {
      lVar6 = (long)*(int *)(param_1 + 0xe0) << 3;
      puVar7 = local_138;
      plVar3 = *(long **)(param_1 + 0xe8);
      do {
        if ((*(ushort *)(*plVar3 + 0x114) & 1) != 0) {
          FUN_0373b290(&local_140);
          goto LAB_037385a0;
        }
        plVar3 = plVar3 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
      puVar7 = (undefined4 *)PTR_DAT_04bb3238;
    }
LAB_037385a0:
    return *puVar7;
  }
  bVar2 = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x03738500:
    uVar4 = (ulong)bVar2;
    if (bVar2 < 8) goto LAB_03738570;
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    uVar4 = (ulong)*pbVar5;
    if (*pbVar5 < 8) goto LAB_03738570;
    if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      bVar2 = *(byte *)(DAT_054f5738 + 0x11a5);
      goto joined_r0x03738500;
    }
  }
  if (DAT_0537d558 != (long *)0x0) {
    lVar6 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar6 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x471);
      }
    }
    uVar4 = (ulong)*pbVar5;
    if (*pbVar5 < 8) goto LAB_03738570;
  }
  uVar4 = (ulong)DAT_0548e168;
  if (7 < DAT_0548e168) {
    return DAT_04c9a0c8;
  }
LAB_03738570:
  if (DAT_054f5738 == 0) {
    return DAT_04c9a0c8;
  }
  return *(undefined4 *)(DAT_054f5738 + uVar4 * 4 + 0xde8);
}

