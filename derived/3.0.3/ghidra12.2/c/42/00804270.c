
void FUN_00804270(ushort *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  ushort uVar15;
  long lVar16;
  byte *pbVar17;
  uint local_17c0;
  undefined1 auStack_17bc [2];
  undefined1 auStack_17ba [2];
  byte local_17b8 [4];
  undefined1 auStack_17b4 [2];
  undefined1 auStack_17b2 [2];
  byte local_17b0 [2];
  undefined1 auStack_17ae [2];
  undefined1 auStack_17ac [2];
  undefined1 auStack_17aa [2];
  byte local_17a8 [2];
  undefined1 auStack_17a6 [2];
  byte local_17a4 [2];
  undefined1 auStack_17a2 [2];
  undefined1 auStack_17a0 [2];
  undefined1 auStack_179e [2];
  byte local_179c [2];
  undefined1 auStack_179a [2];
  undefined1 auStack_1798 [2];
  undefined1 auStack_1796 [2];
  byte local_1794 [2];
  undefined1 auStack_1792 [2];
  undefined1 auStack_1790 [2];
  undefined1 auStack_178e [2];
  byte local_178c [2];
  undefined1 auStack_178a [2];
  undefined1 auStack_1788 [2];
  undefined1 auStack_1786 [2];
  byte local_1784 [2];
  undefined1 auStack_1782 [2];
  byte local_1780 [2];
  undefined1 auStack_177e [2];
  undefined1 auStack_177c [2];
  undefined1 auStack_177a [2];
  byte local_1778 [2];
  undefined1 auStack_1776 [2];
  undefined1 auStack_1774 [2];
  undefined1 auStack_1772 [2];
  undefined1 auStack_1770 [5796];
  ushort local_cc [2];
  byte local_c8 [2];
  undefined1 auStack_c6 [2];
  byte local_c4 [2];
  undefined1 auStack_c2 [2];
  byte local_c0 [4];
  undefined8 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  uint local_6c;
  
  puVar4 = PTR_DAT_04bb3968;
  pbVar17 = PTR_DAT_04bb3128;
  uVar15 = *param_1;
  if ((uVar15 == *(ushort *)PTR_DAT_04bb3170) || (7 < *param_2)) goto LAB_00804ea8;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar3 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar12 = 0;
    do {
      if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar12 * 4) == (uint)(uVar15 >> 0xb))
      goto LAB_0080431c;
      uVar12 = uVar12 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar12);
  }
  uVar12 = 0;
LAB_0080431c:
  local_6c = (uint)uVar12;
  if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar5 = local_6c;
  if (*(uint *)puVar3 <= local_6c) {
    uVar5 = 0;
  }
  if (*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar5 * 4) != 0) {
    if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar5 = local_6c;
    if (*(uint *)puVar3 <= local_6c) {
      uVar5 = 0;
    }
    if (*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar5 * 4) != 1) {
      if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar5 = local_6c;
      if (*(uint *)puVar3 <= local_6c) {
        uVar5 = 0;
      }
      if (*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar5 * 4) != 4) {
        if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        uVar5 = local_6c;
        if (*(uint *)puVar3 <= local_6c) {
          uVar5 = 0;
        }
        if (*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar5 * 4) != 5) {
          if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0))
          {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          uVar5 = local_6c;
          if (*(uint *)puVar3 <= local_6c) {
            uVar5 = 0;
          }
          if (*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar5 * 4) != 0x1a) goto LAB_00804ea8;
        }
      }
    }
  }
  local_ac = *(undefined2 *)PTR_DAT_04bb37e0;
  local_aa = PTR_DAT_04bb37e0[2];
  local_a9 = PTR_DAT_04bb37e0[3];
  local_9c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_b4 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_b0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_bc = 0xfffe;
  local_a8 = local_b0;
  local_a4 = local_ac;
  local_a2 = local_aa;
  local_a1 = local_a9;
  local_a0 = local_b0;
  local_98 = local_b0;
  local_94 = local_ac;
  local_92 = local_aa;
  local_91 = local_a9;
  local_90 = local_b0;
  local_8c = local_ac;
  local_8a = local_aa;
  local_89 = local_a9;
  local_88 = local_b0;
  local_84 = local_ac;
  local_82 = local_aa;
  local_81 = local_a9;
  local_80 = local_b0;
  local_7c = local_ac;
  local_7a = local_aa;
  local_79 = local_a9;
  local_78 = local_b0;
  local_74 = local_ac;
  local_72 = local_aa;
  local_71 = local_a9;
  local_70 = local_b0;
  FUN_0277d4ac(&local_bc);
  local_c0[0] = *param_2;
  if (7 < local_c0[0]) {
    local_c0[0] = 0xff;
  }
  lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_c0,1);
  if (lVar7 != 0) {
    if ((*(long **)(lVar7 + 0x178) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x178), puVar8 == (undefined8 *)0x0)) {
      local_17c0 = 0;
    }
    else {
      local_17c0 = (**(code **)*puVar8)();
    }
    puVar9 = (undefined4 *)FUN_026e85f0(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
    local_b4 = *puVar9;
    local_b0 = puVar9[1];
    puVar10 = (undefined2 *)FUN_026e88f0(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
    local_ac = *puVar10;
    local_aa = *(undefined1 *)(puVar10 + 1);
    local_a9 = *(undefined1 *)((long)puVar10 + 3);
    local_a8 = *(undefined4 *)(puVar10 + 2);
    puVar10 = (undefined2 *)FUN_026e8b00(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
    local_a4 = *puVar10;
    local_a2 = *(undefined1 *)(puVar10 + 1);
    local_a1 = *(undefined1 *)((long)puVar10 + 3);
    local_a0 = *(undefined4 *)(puVar10 + 2);
    FUN_02814c00(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
    puVar2 = PTR_DAT_04bb43c0;
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4();
    if (*(long *)puVar2 == 0) {
LAB_00804644:
      lVar11 = *(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158);
LAB_0080464c:
      puVar9 = (undefined4 *)FUN_02815540(lVar11);
      local_9c = *puVar9;
      local_98 = puVar9[1];
      puVar10 = (undefined2 *)FUN_028159b0(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (*(uint *)(lVar16 + 0x1d8) <= uVar5) goto LAB_00804644;
      lVar11 = *(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158);
      if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8) == 0) goto LAB_0080464c;
      puVar10 = (undefined2 *)FUN_02814c00();
      local_74 = *puVar10;
      local_72 = *(undefined1 *)(puVar10 + 1);
      local_71 = *(undefined1 *)((long)puVar10 + 3);
      local_70 = *(undefined4 *)(puVar10 + 2);
      puVar9 = (undefined4 *)FUN_026e8d10(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
      local_9c = *puVar9;
      local_98 = puVar9[1];
      puVar10 = (undefined2 *)FUN_026e9010(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
    }
    local_94 = *puVar10;
    local_92 = *(undefined1 *)(puVar10 + 1);
    local_91 = *(undefined1 *)((long)puVar10 + 3);
    local_90 = *(undefined4 *)(puVar10 + 2);
    puVar10 = (undefined2 *)FUN_026e9240(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
    local_8c = *puVar10;
    local_8a = *(undefined1 *)(puVar10 + 1);
    local_89 = *(undefined1 *)((long)puVar10 + 3);
    local_88 = *(undefined4 *)(puVar10 + 2);
    puVar10 = (undefined2 *)FUN_026e9470(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
    local_84 = *puVar10;
    local_82 = *(undefined1 *)(puVar10 + 1);
    local_81 = *(undefined1 *)((long)puVar10 + 3);
    local_80 = *(undefined4 *)(puVar10 + 2);
    puVar10 = (undefined2 *)FUN_026e96a0(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
    local_7c = *puVar10;
    local_7a = *(undefined1 *)(puVar10 + 1);
    local_79 = *(undefined1 *)((long)puVar10 + 3);
    local_78 = *(undefined4 *)(puVar10 + 2);
    if ((*(long **)(lVar7 + 0x1ad8) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1ad8), puVar8 == (undefined8 *)0x0)) {
      uVar12 = 0;
    }
    else {
      uVar12 = (**(code **)*puVar8)();
      uVar12 = uVar12 & 0xffffffff;
    }
    puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x1ac0) + *(long *)(lVar7 + 0x1ab8));
    lVar16 = *(long *)puVar2;
    uVar5 = FUN_0277d6c4(puVar8);
    pbVar17 = PTR_DAT_04bb3128;
    puVar13 = (undefined8 *)PTR_DAT_04bb37e0;
    if (*(long *)puVar2 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (uVar5 < *(uint *)(lVar16 + 0x1d8)) {
        if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
          puVar13 = puVar8;
        }
      }
    }
    local_bc = *puVar13;
    if ((((uVar12 & 1) != 0) && (*(long *)(lVar7 + 0x1ad8) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1ad8) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if ((((local_17c0 & 1) != 0) && (*(long *)(lVar7 + 0x178) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x178) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  FUN_007ef010(auStack_c2,param_1);
  local_c4[0] = *param_2;
  if (7 < local_c4[0]) {
    local_c4[0] = 0xff;
  }
  uVar12 = FUN_008026f0(auStack_c2,local_c4);
  if ((uVar12 & 1) == 0) {
    FUN_007ef010(auStack_c6,param_1);
    local_c8[0] = *param_2;
    if (7 < local_c8[0]) {
      local_c8[0] = 0xff;
    }
    uVar12 = FUN_00800cc0(auStack_c6,local_c8);
    puVar8 = (undefined8 *)PTR_DAT_04bb37e0;
    if ((uVar12 & 1) != 0) {
      if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      if (0 < (int)*(uint *)puVar3) {
        uVar12 = 0;
        do {
          if (*(int *)(*(long *)(puVar3 + 8) + uVar12 * 4) == 8) goto LAB_008048dc;
          uVar12 = uVar12 + 1;
        } while (*(uint *)puVar3 != uVar12);
      }
      uVar12 = 0;
LAB_008048dc:
      local_cc[0] = 0;
      bVar1 = *param_2;
      if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar5 = (uint)uVar12;
      if (*(uint *)puVar3 <= uVar5) {
        uVar5 = 0;
      }
      uVar15 = (ushort)bVar1;
      if (7 < bVar1) {
        uVar15 = 0x7f;
      }
      local_cc[0] = uVar15 | (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar5 * 4) << 0xb)
                    | 0x780;
      FUN_007ef010(auStack_1772,local_cc);
      FUN_007e4920(auStack_1770,auStack_1772);
      FUN_007ef010(auStack_1774,param_1);
      FUN_007e90a0(auStack_1770,auStack_1774);
      FUN_007e7b10(auStack_1770);
      local_1778[0] = *param_2;
      if (7 < local_1778[0]) {
        local_1778[0] = 0xff;
      }
      FUN_007ef010(auStack_177a,param_1);
      FUN_007ef010(auStack_177c,param_1);
      FUN_02655ed0(auStack_1776,local_1778,auStack_177a,auStack_177c);
    }
  }
  else {
    local_b4 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_b0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    puVar8 = (undefined8 *)PTR_DAT_04bb37e0;
  }
  FUN_007ef010(auStack_177e,param_1);
  local_1780[0] = *param_2;
  if (7 < local_1780[0]) {
    local_1780[0] = 0xff;
  }
  uVar12 = FUN_00802b10(auStack_177e,local_1780);
  if ((uVar12 & 1) == 0) {
    FUN_007ef010(auStack_1782,param_1);
    local_1784[0] = *param_2;
    if (7 < local_1784[0]) {
      local_1784[0] = 0xff;
    }
    uVar12 = FUN_00801770(auStack_1782,local_1784);
    if ((uVar12 & 1) != 0) {
      if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      if (0 < (int)*(uint *)puVar3) {
        uVar12 = 0;
        do {
          if (*(int *)(*(long *)(puVar3 + 8) + uVar12 * 4) == 10) goto LAB_00804a30;
          uVar12 = uVar12 + 1;
        } while (*(uint *)puVar3 != uVar12);
      }
      uVar12 = 0;
LAB_00804a30:
      local_cc[0] = 0;
      bVar1 = *param_2;
      if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar5 = (uint)uVar12;
      if (*(uint *)puVar3 <= uVar5) {
        uVar5 = 0;
      }
      uVar15 = (ushort)bVar1;
      if (7 < bVar1) {
        uVar15 = 0x7f;
      }
      local_cc[0] = uVar15 | (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar5 * 4) << 0xb)
                    | 0x780;
      FUN_007ef010(auStack_1786,local_cc);
      FUN_007e4920(auStack_1770,auStack_1786);
      FUN_007ef010(auStack_1788,param_1);
      FUN_007e90a0(auStack_1770,auStack_1788);
      FUN_007e7b10(auStack_1770);
      local_178c[0] = *param_2;
      if (7 < local_178c[0]) {
        local_178c[0] = 0xff;
      }
      FUN_007ef010(auStack_178e,param_1);
      FUN_007ef010(auStack_1790,param_1);
      FUN_02655db0(auStack_178a,local_178c,auStack_178e,auStack_1790);
    }
  }
  else {
    local_9c = *(undefined4 *)puVar8;
    local_98 = *(undefined4 *)((long)puVar8 + 4);
  }
  FUN_007ef010(auStack_1792,param_1);
  local_1794[0] = *param_2;
  if (7 < local_1794[0]) {
    local_1794[0] = 0xff;
  }
  uVar12 = FUN_00801330(auStack_1792,local_1794);
  if ((uVar12 & 1) != 0) {
    if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar12 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar12 * 4) == 9) goto LAB_00804b4c;
        uVar12 = uVar12 + 1;
      } while (*(uint *)puVar3 != uVar12);
    }
    uVar12 = 0;
LAB_00804b4c:
    bVar1 = *param_2;
    local_cc[0] = 0;
    uVar15 = bVar1 & 0x7f;
    if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar5 = (uint)uVar12;
    if (*(uint *)puVar3 <= uVar5) {
      uVar5 = 0;
    }
    if (7 < bVar1) {
      uVar15 = 0x7f;
    }
    local_cc[0] = uVar15 | (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar5 * 4) << 0xb);
    FUN_007ef010(auStack_1796,local_cc);
    FUN_007e4920(auStack_1770,auStack_1796);
    FUN_007ef010(auStack_1798,param_1);
    FUN_007e90a0(auStack_1770,auStack_1798);
    FUN_007e7b10(auStack_1770);
    local_179c[0] = *param_2;
    if (7 < local_179c[0]) {
      local_179c[0] = 0xff;
    }
    FUN_007ef010(auStack_179e,param_1);
    FUN_007ef010(auStack_17a0,param_1);
    FUN_02655b80(auStack_179a,local_179c,auStack_179e,auStack_17a0);
  }
  FUN_007ef010(auStack_17a2,param_1);
  local_17a4[0] = *param_2;
  if (7 < local_17a4[0]) {
    local_17a4[0] = 0xff;
  }
  uVar12 = FUN_00803040(auStack_17a2,local_17a4);
  puVar2 = PTR_DAT_04bb27d0;
  if ((uVar12 & 1) == 0) {
    FUN_007ef010(auStack_17a6,param_1);
    local_17a8[0] = *param_2;
    if (7 < local_17a8[0]) {
      local_17a8[0] = 0xff;
    }
    uVar12 = FUN_00802070(auStack_17a6,local_17a8);
    if ((uVar12 & 1) != 0) {
      if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      if (0 < (int)*(uint *)puVar3) {
        uVar12 = 0;
        do {
          if (*(int *)(*(long *)(puVar3 + 8) + uVar12 * 4) == 0xb) goto LAB_00804cb0;
          uVar12 = uVar12 + 1;
        } while (*(uint *)puVar3 != uVar12);
      }
      uVar12 = 0;
LAB_00804cb0:
      bVar1 = *param_2;
      local_cc[0] = 0;
      uVar15 = bVar1 & 0x7f;
      if (((*pbVar17 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar5 = (uint)uVar12;
      if (*(uint *)puVar3 <= uVar5) {
        uVar5 = 0;
      }
      if (7 < bVar1) {
        uVar15 = 0x7f;
      }
      local_cc[0] = uVar15 | (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar5 * 4) << 0xb)
      ;
      FUN_007ef010(auStack_17aa,local_cc);
      FUN_007e4920(auStack_1770,auStack_17aa);
      FUN_007ef010(auStack_17ac,param_1);
      FUN_007e90a0(auStack_1770,auStack_17ac);
      FUN_007e7b10(auStack_1770);
      local_17b0[0] = *param_2;
      if (7 < local_17b0[0]) {
        local_17b0[0] = 0xff;
      }
      FUN_007ef010(auStack_17b2,param_1);
      FUN_007ef010(auStack_17b4,param_1);
      FUN_02655ff0(auStack_17ae,local_17b0,auStack_17b2,auStack_17b4);
      lVar7 = *(long *)puVar2;
      goto joined_r0x00804d68;
    }
  }
  else {
    local_bc = *puVar8;
    lVar7 = *(long *)PTR_DAT_04bb27d0;
joined_r0x00804d68:
    if (((lVar7 == 0) || (*(int *)(lVar7 + 0x80) != 3)) ||
       ((*param_2 < 8 &&
        (((uVar5 = FUN_02582d8c(param_2,1), uVar5 < 8 &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')))))) {
      FUN_02536850(param_2,&local_bc,*(undefined4 *)PTR_DAT_04bb4e20,0,1);
    }
  }
  lVar7 = *(long *)puVar2;
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x80) != 3)) ||
     (((*param_2 < 8 &&
       ((uVar5 = FUN_02582d8c(param_2,1), uVar5 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')))) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')))) {
    FUN_0253f870(param_2,&local_b4,0,1);
  }
  lVar7 = *(long *)puVar4;
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x175a0), lVar7 != 0)) {
    local_17b8[0] = *param_2;
    if (7 < local_17b8[0]) {
      local_17b8[0] = 0xff;
    }
    FUN_0211afb4(lVar7,local_17b8,&local_b4);
  }
LAB_00804ea8:
  lVar7 = *(long *)puVar4;
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x175a0), lVar7 != 0)) {
    FUN_007ef010(auStack_17ba,param_1);
    FUN_007ef010(auStack_1770,auStack_17ba);
    FUN_00805230(auStack_1770,lVar7 + 0x100,*(undefined4 *)(lVar7 + 0xf8));
    if (*(int *)(lVar7 + 0x1e8) != 0) {
      lVar16 = (long)*(int *)(lVar7 + 0x1e8) << 3;
      plVar14 = *(long **)(lVar7 + 0x1f0);
      do {
        lVar7 = *plVar14;
        FUN_007ef010(&local_b4,auStack_17ba);
        FUN_00805230(&local_b4,lVar7 + 0xf8,*(undefined4 *)(lVar7 + 0xf0));
        lVar16 = lVar16 + -8;
        plVar14 = plVar14 + 1;
      } while (lVar16 != 0);
    }
  }
  lVar7 = *(long *)PTR_DAT_04bb4e28;
  if (lVar7 != 0) {
    FUN_007ef010(auStack_17bc,param_1);
    puVar4 = PTR_DAT_04bc3a48;
    if (*(int *)(lVar7 + 0xe0) != 0) {
      plVar14 = *(long **)(lVar7 + 0xe8);
      lVar7 = (long)*(int *)(lVar7 + 0xe0) << 3;
      do {
        lVar16 = *plVar14;
        if ((((*(ushort *)(lVar16 + 0x114) & 1) != 0) || (*(ushort **)puVar4 == (ushort *)0x0)) ||
           ((**(ushort **)puVar4 & 1) == 0)) {
          FUN_007ef010(auStack_1770,auStack_17bc);
          FUN_00806a90(auStack_1770,lVar16 + 0x10);
        }
        plVar14 = plVar14 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
  }
  return;
}

