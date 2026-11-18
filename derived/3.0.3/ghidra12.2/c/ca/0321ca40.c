
void FUN_0321ca40(long param_1,int *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
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
  uint local_f8;
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
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  
  puVar6 = PTR_DAT_04bb43c0;
  puVar5 = PTR_DAT_04bb37e0;
  if ((param_3 & 1) == 0) {
    lVar11 = param_1 + 0x1c36c;
    uVar7 = 0;
    do {
      local_b0 = DAT_05586008;
      local_ae = DAT_0558600a;
      local_ad = DAT_0558600b;
      local_ac = DAT_0558600c;
      lVar13 = lVar11 + (ulong)uVar7 * 0xc;
      if (9 < uVar7) {
        lVar13 = lVar11;
      }
      if (-1 < *(int *)(lVar13 + 4)) {
        lVar13 = lVar11 + (ulong)uVar7 * 0xc;
        if (9 < uVar7) {
          lVar13 = lVar11;
        }
        puVar10 = *(undefined2 **)(*(long *)(param_1 + 0x1c340) + (long)*(int *)(lVar13 + 4) * 8);
        local_b0 = *puVar10;
        local_ae = *(undefined1 *)(puVar10 + 1);
        local_ad = *(undefined1 *)((long)puVar10 + 3);
        local_ac = *(undefined4 *)(puVar10 + 2);
      }
      uVar1 = local_ac;
      uVar3 = local_ad;
      uVar2 = local_ae;
      uVar4 = local_b0;
      lVar13 = *(long *)puVar6;
      local_f8 = uVar7;
      uVar8 = FUN_0277d6c4(&local_b0);
      if (*(long *)puVar6 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          puVar12 = *(undefined8 **)(param_2 + 4);
          if (puVar12 != (undefined8 *)0x0) {
            *(undefined8 *)(param_2 + 4) = *puVar12;
          }
          *puVar12 = 0xfffe;
          FUN_0277d4ac(puVar12);
          if (*param_2 < param_2[1]) {
            *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar12;
            *param_2 = *param_2 + 1;
          }
          *(undefined2 *)puVar12 = uVar4;
          *(undefined1 *)((long)puVar12 + 2) = uVar2;
          *(undefined1 *)((long)puVar12 + 3) = uVar3;
          *(undefined4 *)((long)puVar12 + 4) = uVar1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 10);
  }
  else {
    local_b0 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_ae = PTR_DAT_04bb37e0[2];
    local_ad = PTR_DAT_04bb37e0[3];
    local_ac = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_a8 = local_b0;
    local_a6 = local_ae;
    local_a5 = local_ad;
    local_a4 = local_ac;
    local_a0 = local_b0;
    local_9e = local_ae;
    local_9d = local_ad;
    local_9c = local_ac;
    local_98 = local_b0;
    local_96 = local_ae;
    local_95 = local_ad;
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
    FUN_02ce0720(param_1 + 0x1c3e8,&local_b0);
    uVar4 = *(undefined2 *)puVar5;
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    local_f8 = *(uint *)puVar5;
    uVar1 = *(undefined4 *)(puVar5 + 4);
    local_f4 = uVar1;
    local_f0 = uVar4;
    local_ee = uVar2;
    local_ed = uVar3;
    local_ec = uVar1;
    local_e8 = uVar4;
    local_e6 = uVar2;
    local_e5 = uVar3;
    local_e4 = uVar1;
    local_e0 = uVar4;
    local_de = uVar2;
    local_dd = uVar3;
    local_dc = uVar1;
    local_d8 = uVar4;
    local_d6 = uVar2;
    local_d5 = uVar3;
    local_d4 = uVar1;
    local_d0 = uVar4;
    local_ce = uVar2;
    local_cd = uVar3;
    local_cc = uVar1;
    local_c8 = uVar4;
    local_c6 = uVar2;
    local_c5 = uVar3;
    local_c4 = uVar1;
    local_c0 = uVar4;
    local_be = uVar2;
    local_bd = uVar3;
    local_bc = uVar1;
    local_b8 = uVar4;
    local_b6 = uVar2;
    local_b5 = uVar3;
    local_b4 = uVar1;
    FUN_0321c348(param_1 + 0x1c330,&local_f8);
    local_140 = uVar4;
    local_13e = uVar2;
    local_13d = uVar3;
    local_13c = uVar1;
    local_138 = uVar4;
    local_136 = uVar2;
    local_135 = uVar3;
    local_134 = uVar1;
    local_130 = uVar4;
    local_12e = uVar2;
    local_12d = uVar3;
    local_12c = uVar1;
    local_128 = uVar4;
    local_126 = uVar2;
    local_125 = uVar3;
    local_124 = uVar1;
    local_120 = uVar4;
    local_11e = uVar2;
    local_11d = uVar3;
    local_11c = uVar1;
    local_118 = uVar4;
    local_116 = uVar2;
    local_115 = uVar3;
    local_114 = uVar1;
    local_110 = uVar4;
    local_10e = uVar2;
    local_10d = uVar3;
    local_10c = uVar1;
    local_108 = uVar4;
    local_106 = uVar2;
    local_105 = uVar3;
    local_104 = uVar1;
    local_100 = uVar4;
    local_fe = uVar2;
    local_fd = uVar3;
    local_fc = uVar1;
    FUN_025403d0(&local_140,&local_b0,&local_f8);
    puVar5 = PTR_DAT_04bb43c0;
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_138);
    lVar13 = *(long *)puVar5;
    if (lVar13 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        puVar12 = *(undefined8 **)(param_2 + 4);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar12;
        }
        *puVar12 = 0xfffe;
        FUN_0277d4ac(puVar12);
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar12;
          *param_2 = *param_2 + 1;
        }
        *(undefined2 *)puVar12 = local_138;
        *(undefined1 *)((long)puVar12 + 2) = local_136;
        *(undefined1 *)((long)puVar12 + 3) = local_135;
        *(undefined4 *)((long)puVar12 + 4) = local_134;
        lVar13 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(&local_130);
    lVar11 = *(long *)puVar5;
    if (lVar11 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        puVar12 = *(undefined8 **)(param_2 + 4);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar12;
        }
        *puVar12 = 0xfffe;
        FUN_0277d4ac(puVar12);
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar12;
          *param_2 = *param_2 + 1;
        }
        *(undefined2 *)puVar12 = local_130;
        *(undefined1 *)((long)puVar12 + 2) = local_12e;
        *(undefined1 *)((long)puVar12 + 3) = local_12d;
        *(undefined4 *)((long)puVar12 + 4) = local_12c;
        lVar11 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(&local_140);
    if (*(long *)puVar5 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
         (uVar9 = FUN_02cd8d70(&local_140), (uVar9 & 1) != 0)) {
        puVar12 = *(undefined8 **)(param_2 + 4);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar12;
        }
        *puVar12 = 0xfffe;
        FUN_0277d4ac(puVar12);
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar12;
          *param_2 = *param_2 + 1;
        }
        *(undefined2 *)puVar12 = local_140;
        *(undefined1 *)((long)puVar12 + 2) = local_13e;
        *(undefined1 *)((long)puVar12 + 3) = local_13d;
        *(undefined4 *)((long)puVar12 + 4) = local_13c;
      }
    }
    lVar11 = *(long *)puVar5;
    uVar7 = FUN_0277d6c4(&local_128);
    if (*(long *)puVar5 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
         (uVar9 = FUN_02cd8d70(&local_128), (uVar9 & 1) != 0)) {
        puVar12 = *(undefined8 **)(param_2 + 4);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar12;
        }
        *puVar12 = 0xfffe;
        FUN_0277d4ac(puVar12);
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar12;
          *param_2 = *param_2 + 1;
        }
        *(undefined2 *)puVar12 = local_128;
        *(undefined1 *)((long)puVar12 + 2) = local_126;
        *(undefined1 *)((long)puVar12 + 3) = local_125;
        *(undefined4 *)((long)puVar12 + 4) = local_124;
      }
    }
    lVar13 = *(long *)puVar5;
    uVar7 = FUN_0277d6c4(&local_120);
    lVar11 = *(long *)puVar5;
    if (lVar11 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        puVar12 = *(undefined8 **)(param_2 + 4);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar12;
        }
        *puVar12 = 0xfffe;
        FUN_0277d4ac(puVar12);
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar12;
          *param_2 = *param_2 + 1;
        }
        *(undefined2 *)puVar12 = local_120;
        *(undefined1 *)((long)puVar12 + 2) = local_11e;
        *(undefined1 *)((long)puVar12 + 3) = local_11d;
        *(undefined4 *)((long)puVar12 + 4) = local_11c;
        lVar11 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(&local_118);
    lVar13 = *(long *)puVar5;
    if (lVar13 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        puVar12 = *(undefined8 **)(param_2 + 4);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar12;
        }
        *puVar12 = 0xfffe;
        FUN_0277d4ac(puVar12);
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar12;
          *param_2 = *param_2 + 1;
        }
        *(undefined2 *)puVar12 = local_118;
        *(undefined1 *)((long)puVar12 + 2) = local_116;
        *(undefined1 *)((long)puVar12 + 3) = local_115;
        *(undefined4 *)((long)puVar12 + 4) = local_114;
        lVar13 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(&local_110);
    lVar11 = *(long *)puVar5;
    if (lVar11 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        puVar12 = *(undefined8 **)(param_2 + 4);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar12;
        }
        *puVar12 = 0xfffe;
        FUN_0277d4ac(puVar12);
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar12;
          *param_2 = *param_2 + 1;
        }
        *(undefined2 *)puVar12 = local_110;
        *(undefined1 *)((long)puVar12 + 2) = local_10e;
        *(undefined1 *)((long)puVar12 + 3) = local_10d;
        *(undefined4 *)((long)puVar12 + 4) = local_10c;
        lVar11 = *(long *)puVar5;
      }
    }
    uVar7 = FUN_0277d6c4(&local_108);
    if (*(long *)puVar5 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        puVar12 = *(undefined8 **)(param_2 + 4);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar12;
        }
        *puVar12 = 0xfffe;
        FUN_0277d4ac(puVar12);
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar12;
          *param_2 = *param_2 + 1;
        }
        *(undefined2 *)puVar12 = local_108;
        *(undefined1 *)((long)puVar12 + 2) = local_106;
        *(undefined1 *)((long)puVar12 + 3) = local_105;
        *(undefined4 *)((long)puVar12 + 4) = local_104;
      }
    }
  }
  return;
}

