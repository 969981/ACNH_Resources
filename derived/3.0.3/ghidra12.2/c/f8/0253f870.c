
undefined8 FUN_0253f870(byte *param_1,short *param_2,uint param_3,ulong param_4)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ushort uVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  undefined8 local_12c;
  undefined4 local_124;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  undefined4 uStack_11d;
  undefined1 uStack_119;
  undefined4 uStack_118;
  long local_114;
  long local_10c;
  long local_104;
  long local_fc;
  long local_f4;
  long local_ec;
  byte local_e4;
  undefined5 uStack_e3;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  ushort uStack_d8;
  byte local_d4 [4];
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
  long *local_88;
  char local_80;
  char local_7f;
  char local_7e;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar10 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar10 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_74 = *puVar10;
  local_70 = param_3;
  FUN_0071c8d0(&local_88,&local_74,PTR_DAT_04bb3238,0);
  plVar5 = local_88;
  if (local_88 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar9 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3770);
    if ((uVar9 & 1) == 0) {
      local_7f = '\0';
    }
  }
  if (local_88 == (long *)0x0) {
    return 0;
  }
  if (local_80 == '\0') {
    return 0;
  }
  if (local_7f == '\0') {
    return 0;
  }
  if (local_7e == '\0') {
    return 0;
  }
  bVar14 = *param_1;
  local_124 = *(undefined4 *)puVar3;
  uStack_119 = 0;
  uStack_11d = 0;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_12c._0_4_ = CONCAT31(local_12c._1_3_,bVar14);
  local_12c._4_4_ = 1;
  uStack_120 = 1;
  uStack_11e = 1;
  uVar9 = FUN_02530cec(&local_12c);
  puVar3 = PTR_DAT_04bb37e0;
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  local_d0 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_ce = PTR_DAT_04bb37e0[2];
  local_cd = PTR_DAT_04bb37e0[3];
  local_cc = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_d4[0] = *param_1;
  if (7 < local_d4[0]) {
    local_d4[0] = 0xff;
  }
  local_c8 = local_d0;
  local_c6 = local_ce;
  local_c5 = local_cd;
  local_c4 = local_cc;
  local_c0 = local_d0;
  local_be = local_ce;
  local_bd = local_cd;
  local_bc = local_cc;
  local_b8 = local_d0;
  local_b6 = local_ce;
  local_b5 = local_cd;
  local_b4 = local_cc;
  local_b0 = local_d0;
  local_ae = local_ce;
  local_ad = local_cd;
  local_ac = local_cc;
  local_a8 = local_d0;
  local_a6 = local_ce;
  local_a5 = local_cd;
  local_a4 = local_cc;
  local_a0 = local_d0;
  local_9e = local_ce;
  local_9d = local_cd;
  local_9c = local_cc;
  local_98 = local_d0;
  local_96 = local_ce;
  local_95 = local_cd;
  local_94 = local_cc;
  local_90 = local_d0;
  local_8e = local_ce;
  local_8d = local_cd;
  local_8c = local_cc;
  FUN_02665c20(local_d4,&local_d0,0);
  local_e4 = 0;
  uStack_d8 = uStack_d8 & 0xfc00;
  uVar9 = FUN_0277d7b4(&local_d0,param_2);
  puVar4 = PTR_DAT_04bb43c0;
  if (((uVar9 & 1) == 0) && (local_e4 < 8)) {
    if (*param_2 == -2) {
LAB_0253faac:
      puVar2 = (undefined8 *)((long)&local_12c + (ulong)local_e4 * 9);
      if (7 < local_e4) {
        puVar2 = &local_12c;
      }
      *puVar2 = *(undefined8 *)param_2;
      puVar10 = (undefined4 *)((long)&local_124 + (ulong)local_e4 * 9);
      if (7 < local_e4) {
        puVar10 = &local_124;
      }
      local_6c = 1;
      *(undefined1 *)puVar10 = 1;
      local_e4 = local_e4 + 1;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(param_2);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) goto LAB_0253faac;
      }
    }
  }
  psVar1 = param_2 + 4;
  uVar9 = FUN_0277d7b4(&local_c8,psVar1);
  puVar4 = PTR_DAT_04bb43c0;
  if (((uVar9 & 1) == 0) && (local_e4 < 8)) {
    if (*psVar1 == -2) {
LAB_0253fb84:
      puVar2 = (undefined8 *)((long)&local_12c + (ulong)local_e4 * 9);
      if (7 < local_e4) {
        puVar2 = &local_12c;
      }
      *puVar2 = *(undefined8 *)psVar1;
      uVar9 = (ulong)local_e4;
      bVar6 = 7 < local_e4;
      local_e4 = local_e4 + 1;
      puVar10 = (undefined4 *)((long)&local_124 + uVar9 * 9);
      if (bVar6) {
        puVar10 = &local_124;
      }
      local_6c = 2;
      *(undefined1 *)puVar10 = 2;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(psVar1);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) goto LAB_0253fb84;
      }
    }
  }
  psVar1 = param_2 + 8;
  uVar9 = FUN_0277d7b4(&local_c0,psVar1);
  puVar4 = PTR_DAT_04bb43c0;
  if (((uVar9 & 1) == 0) && (local_e4 < 8)) {
    if (*psVar1 == -2) {
LAB_0253fc5c:
      puVar2 = (undefined8 *)((long)&local_12c + (ulong)local_e4 * 9);
      if (7 < local_e4) {
        puVar2 = &local_12c;
      }
      *puVar2 = *(undefined8 *)psVar1;
      uVar9 = (ulong)local_e4;
      bVar6 = 7 < local_e4;
      local_e4 = local_e4 + 1;
      puVar10 = (undefined4 *)((long)&local_124 + uVar9 * 9);
      if (bVar6) {
        puVar10 = &local_124;
      }
      local_6c = 3;
      *(undefined1 *)puVar10 = 3;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(psVar1);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) goto LAB_0253fc5c;
      }
    }
  }
  psVar1 = param_2 + 0x20;
  uVar9 = FUN_0277d7b4(&local_90,psVar1);
  puVar4 = PTR_DAT_04bb43c0;
  if (((uVar9 & 1) == 0) && (local_e4 < 8)) {
    if (*psVar1 == -2) {
LAB_0253fd34:
      puVar2 = (undefined8 *)((long)&local_12c + (ulong)local_e4 * 9);
      if (7 < local_e4) {
        puVar2 = &local_12c;
      }
      *puVar2 = *(undefined8 *)psVar1;
      uVar9 = (ulong)local_e4;
      bVar6 = 7 < local_e4;
      local_e4 = local_e4 + 1;
      puVar10 = (undefined4 *)((long)&local_124 + uVar9 * 9);
      if (bVar6) {
        puVar10 = &local_124;
      }
      local_6c = 4;
      *(undefined1 *)puVar10 = 4;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(psVar1);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) goto LAB_0253fd34;
      }
    }
  }
  psVar1 = param_2 + 0xc;
  uVar9 = FUN_0277d7b4(&local_b8,psVar1);
  puVar4 = PTR_DAT_04bb43c0;
  if (((uVar9 & 1) == 0) && (local_e4 < 8)) {
    if (*psVar1 == -2) {
LAB_0253fe0c:
      puVar2 = (undefined8 *)((long)&local_12c + (ulong)local_e4 * 9);
      if (7 < local_e4) {
        puVar2 = &local_12c;
      }
      *puVar2 = *(undefined8 *)psVar1;
      uVar9 = (ulong)local_e4;
      bVar6 = 7 < local_e4;
      local_e4 = local_e4 + 1;
      puVar10 = (undefined4 *)((long)&local_124 + uVar9 * 9);
      if (bVar6) {
        puVar10 = &local_124;
      }
      local_6c = 5;
      *(undefined1 *)puVar10 = 5;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(psVar1);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) goto LAB_0253fe0c;
      }
    }
  }
  psVar1 = param_2 + 0x10;
  uVar9 = FUN_0277d7b4(&local_b0,psVar1);
  puVar4 = PTR_DAT_04bb43c0;
  if (((uVar9 & 1) == 0) && (local_e4 < 8)) {
    if (*psVar1 == -2) {
LAB_0253fee4:
      puVar2 = (undefined8 *)((long)&local_12c + (ulong)local_e4 * 9);
      if (7 < local_e4) {
        puVar2 = &local_12c;
      }
      *puVar2 = *(undefined8 *)psVar1;
      uVar9 = (ulong)local_e4;
      bVar6 = 7 < local_e4;
      local_e4 = local_e4 + 1;
      puVar10 = (undefined4 *)((long)&local_124 + uVar9 * 9);
      if (bVar6) {
        puVar10 = &local_124;
      }
      local_6c = 6;
      *(undefined1 *)puVar10 = 6;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(psVar1);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) goto LAB_0253fee4;
      }
    }
  }
  psVar1 = param_2 + 0x14;
  uVar9 = FUN_0277d7b4(&local_a8,psVar1);
  puVar4 = PTR_DAT_04bb43c0;
  if (((uVar9 & 1) == 0) && (local_e4 < 8)) {
    if (*psVar1 == -2) {
LAB_0253ffbc:
      puVar2 = (undefined8 *)((long)&local_12c + (ulong)local_e4 * 9);
      if (7 < local_e4) {
        puVar2 = &local_12c;
      }
      *puVar2 = *(undefined8 *)psVar1;
      uVar9 = (ulong)local_e4;
      bVar6 = 7 < local_e4;
      local_e4 = local_e4 + 1;
      puVar10 = (undefined4 *)((long)&local_124 + uVar9 * 9);
      if (bVar6) {
        puVar10 = &local_124;
      }
      local_6c = 7;
      *(undefined1 *)puVar10 = 7;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(psVar1);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) goto LAB_0253ffbc;
      }
    }
  }
  psVar1 = param_2 + 0x18;
  uVar9 = FUN_0277d7b4(&local_a0,psVar1);
  puVar4 = PTR_DAT_04bb43c0;
  if (((uVar9 & 1) == 0) && (local_e4 < 8)) {
    if (*psVar1 == -2) {
LAB_02540090:
      puVar2 = (undefined8 *)((long)&local_12c + (ulong)local_e4 * 9);
      if (7 < local_e4) {
        puVar2 = &local_12c;
      }
      *puVar2 = *(undefined8 *)psVar1;
      uVar9 = (ulong)local_e4;
      bVar6 = 7 < local_e4;
      local_e4 = local_e4 + 1;
      puVar10 = (undefined4 *)((long)&local_124 + uVar9 * 9);
      if (bVar6) {
        puVar10 = &local_124;
      }
      local_6c = 8;
      *(undefined1 *)puVar10 = 8;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(psVar1);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) goto LAB_02540090;
      }
    }
  }
  param_2 = param_2 + 0x1c;
  uVar9 = FUN_0277d7b4(&local_98,param_2);
  puVar4 = PTR_DAT_04bb43c0;
  if (((uVar9 & 1) != 0) || (7 < local_e4)) goto LAB_0254020c;
  if (*param_2 != -2) {
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(param_2);
    if (*(long *)puVar4 == 0) goto LAB_0254020c;
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0254020c;
  }
  puVar2 = (undefined8 *)((long)&local_12c + (ulong)local_e4 * 9);
  if (7 < local_e4) {
    puVar2 = &local_12c;
  }
  *puVar2 = *(undefined8 *)param_2;
  uVar9 = (ulong)local_e4;
  bVar6 = 7 < local_e4;
  local_e4 = local_e4 + 1;
  puVar10 = (undefined4 *)((long)&local_124 + uVar9 * 9);
  if (bVar6) {
    puVar10 = &local_124;
  }
  *(undefined1 *)puVar10 = 10;
LAB_0254020c:
  uVar11 = 0x200;
  if ((param_4 & 1) == 0) {
    uVar11 = 2;
  }
  uVar12 = *(undefined8 *)puVar3;
  uStack_e3 = (undefined5)uVar12;
  uStack_de = (undefined2)((ulong)uVar12 >> 0x28);
  uStack_dc._0_1_ = (undefined1)((ulong)uVar12 >> 0x38);
  uStack_d8 = uStack_d8 & 0xfdc0 | uVar11 & 0xfff0 | uVar11 & 0xf | (ushort)((local_70 & 3) << 2);
  local_88[0x32c] = local_88[0x31c];
  local_88[0x32f] = local_88[799];
  local_88[0x32d] = local_88[0x31d];
  local_88[0x32e] = local_88[0x31e];
  *(undefined4 *)((long)local_88 + 0x19d6) = 0;
  local_88[0x332] = CONCAT44(uStack_118,CONCAT13(uStack_119,uStack_11d._1_3_));
  local_88[0x331] =
       CONCAT17((undefined1)uStack_11d,CONCAT16(uStack_11e,CONCAT24(uStack_120,local_124)));
  local_88[0x333] = local_114;
  local_88[0x335] = local_104;
  local_88[0x330] = CONCAT44(local_12c._4_4_,(undefined4)local_12c);
  local_88[0x337] = local_f4;
  local_88[0x336] = local_fc;
  local_88[0x334] = local_10c;
  *(ulong *)((long)local_88 + 0x19ce) = CONCAT26(uStack_d8,CONCAT42(uStack_dc,uStack_de));
  local_88[0x339] = CONCAT26(uStack_de,CONCAT51(uStack_e3,local_e4));
  local_88[0x338] = local_ec;
  if ((*(uint *)(local_88 + 0x302) & 0xfffffff7) != 1) {
    *(ushort *)((long)local_88 + 0x19d4) = *(ushort *)((long)local_88 + 0x19d4) & 0xfffd;
  }
  local_6c = 0x26;
  local_88[0x318] = local_88[0x338];
  local_88[0x319] = local_88[0x339];
  local_88[0x31a] = local_88[0x33a];
  *(short *)(local_88 + 0x31b) = (short)local_88[0x33b];
  local_88[0x314] = local_88[0x334];
  local_88[0x315] = local_88[0x335];
  local_88[0x316] = local_88[0x336];
  local_88[0x317] = local_88[0x337];
  local_88[0x310] = local_88[0x330];
  local_88[0x311] = local_88[0x331];
  local_88[0x312] = local_88[0x332];
  local_88[0x313] = local_88[0x333];
  local_88[0x30c] = local_88[0x32c];
  local_88[0x30d] = local_88[0x32d];
  local_88[0x30e] = local_88[0x32e];
  local_88[0x30f] = local_88[0x32f];
  lVar13 = 0;
  if (local_88[0xe] != 0) {
    lVar13 = local_88[0xe] + 0x278;
  }
  FUN_03ebb160(lVar13,0x26);
  return 1;
}

