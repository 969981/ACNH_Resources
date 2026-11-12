
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b423b0(long param_1,undefined4 *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined4 uVar16;
  undefined1 auStack_1972 [2];
  undefined *local_1970;
  undefined8 *local_1968;
  undefined8 local_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined4 local_1948;
  undefined4 local_1944;
  undefined *local_1940;
  undefined1 *puStack_1938;
  undefined4 local_1930;
  undefined1 local_192c [63];
  undefined1 local_18ed;
  undefined *local_18e8;
  undefined1 *puStack_18e0;
  undefined4 local_18d8;
  undefined1 local_18d4 [63];
  undefined1 local_1895;
  undefined8 local_1890;
  undefined6 uStack_1888;
  undefined2 local_1882;
  undefined6 uStack_1880;
  undefined1 auStack_187a [5550];
  short local_2cc [2];
  undefined *local_2c8;
  undefined8 *local_2c0;
  undefined4 local_2b8;
  undefined1 local_2b4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined *local_298;
  undefined1 *puStack_290;
  undefined4 local_288;
  undefined1 local_284 [63];
  undefined1 local_245;
  undefined *local_240;
  undefined1 *puStack_238;
  undefined4 local_230;
  undefined1 local_22c [63];
  undefined1 local_1ed;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined2 local_1c0;
  undefined1 auStack_1be [6];
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint *local_1a8;
  undefined *local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined *local_170;
  undefined1 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined8 local_c0;
  undefined6 uStack_b8;
  undefined2 local_b2;
  undefined6 uStack_b0;
  undefined1 auStack_aa [2];
  undefined4 local_a8 [2];
  long local_a0;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_1a8 = (uint *)0x0;
  local_1b8 = PTR_DAT_04bc0510 + 0x10;
  local_1b0 = *param_2;
  local_1ac = param_2[1];
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_1b0);
  if (*(long *)puVar5 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  lVar15 = *(long *)PTR_DAT_04bc0428;
  uVar6 = FUN_0277d6c4(param_2);
  puVar5 = PTR_DAT_04bb2bc0;
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar6) {
    return;
  }
  local_1a8 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8);
  if (local_1a8 == (uint *)0x0) {
    return;
  }
  uVar6 = *local_1a8;
  if (uVar6 == 0 || local_1a8 == (uint *)(ulong)uVar6) {
    return;
  }
  puVar12 = (uint *)((long)local_1a8 - (long)(ulong)uVar6);
  if (*puVar12 == 0) {
    return;
  }
  uVar6 = puVar12[1];
  if (uVar6 == 0) {
    return;
  }
  if ((ulong)(ushort)puVar12[2] == 0) {
    return;
  }
  lVar15 = 0xc;
  if (*(char *)((long)puVar12 + 10) != '\0') {
    lVar15 = 0x1c;
  }
  lVar15 = (long)puVar12 + lVar15 + (ulong)(ushort)puVar12[2] * 8;
  if (lVar15 == 0) {
    return;
  }
  uVar4 = 0;
  if ((ulong)uVar6 != 0) {
    uVar4 = (uint)((ulong)((long)local_1a8 - lVar15) / (ulong)uVar6);
  }
  if (*puVar12 <= uVar4) {
    uVar4 = 0xffffffff;
  }
  if (*(uint *)PTR_DAT_04bc00c8 <= uVar4) {
    return;
  }
  if (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2) != 0xac) {
    return;
  }
  local_2b4 = 0;
  local_2b8 = 0x15;
  local_2a0 = 0xffffffff;
  local_2c0 = &local_1e8;
  local_288 = 0x40;
  local_2b0 = 0xffffffff;
  uStack_2a8 = 0xffffffff00000000;
  puStack_290 = local_284;
  local_245 = 0;
  local_284[0] = 0;
  local_298 = PTR_DAT_04bb2bc0 + 0x10;
  local_230 = 0x40;
  local_1ed = 0;
  local_22c[0] = 0;
  puStack_238 = local_22c;
  local_2c8 = PTR_DAT_04bc0ce8 + 0x10;
  local_1c0 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e8 = 0;
  puVar3 = auStack_1be;
  if (auStack_1be <= (undefined1 *)((long)&local_1e8 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_1e8 + 2U);
  }
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_240 = local_298;
  memset(local_2c0,0,(ulong)(puVar3 + (-0xe1 - (long)&local_2c8)) & 0xfffffffffffffff8 | 2);
  lVar15 = *(long *)(param_1 + 8);
  if (lVar15 == 0) {
    uVar13 = *(undefined8 *)(*_SUB_00000020 + 8);
    if ((param_3 & 1) != 0) {
      plVar14 = (long *)0x0;
      goto LAB_00b4260c;
    }
  }
  else {
    uVar13 = *(undefined8 *)(**(long **)(*(long *)(lVar15 + 0x290) + 0x20) + 8);
    if ((param_3 & 1) != 0) {
      plVar14 = *(long **)(lVar15 + 0x48);
LAB_00b4260c:
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      if (plVar14 == (long *)0x0) {
        return;
      }
      uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      lVar15 = FUN_0265c2a0((int)plVar14[0xa1]);
      if (lVar15 == 0) {
        return;
      }
      if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
         (puVar9 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar9 == (undefined8 *)0x0)) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)*puVar9)();
        uVar6 = uVar6 ^ 1;
      }
      lVar2 = *(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8);
      local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,0x14);
      local_198 = (undefined8 *)(lVar2 + 0x128b8);
      (**(code **)(local_2c8 + 0x38))(&local_2c8);
      local_1958 = 0;
      uStack_1950 = 0;
      local_1960 = (undefined8 *)0x0;
      local_1948 = CONCAT31(local_1948._1_3_,1);
      local_1944 = 0;
      puVar1 = PTR_DAT_04bc0cd8 + 0x10;
      local_1968 = (undefined8 *)0x0;
      local_1970 = puVar1;
      FUN_02906b00(&local_1970,&local_2c8,&local_1a0);
      uVar8 = (ulong)local_1960 >> 0x20;
      local_1960 = (undefined8 *)CONCAT44((uint)uVar8 & 0xffffff00,0xb);
      local_1958 = 0xffffffff;
      uStack_1950 = 0xffffffff00000000;
      puStack_1938 = local_192c;
      local_1940 = puVar5 + 0x10;
      local_1948 = 0xffffffff;
      local_1968 = &local_1890;
      local_1930 = 0x40;
      local_18ed = 0;
      local_192c[0] = 0;
      local_18d8 = 0x40;
      local_1895 = 0;
      local_18d4[0] = 0;
      puStack_18e0 = local_18d4;
      uStack_1880 = 0;
      local_1970 = PTR_DAT_04bb5128 + 0x10;
      puVar3 = auStack_187a;
      if (auStack_187a <= (undefined1 *)((long)&local_1890 + 2U)) {
        puVar3 = (undefined1 *)((long)&local_1890 + 2U);
      }
      local_1890 = 0;
      uStack_1888 = 0;
      local_1882 = 0;
      local_18e8 = local_1940;
      memset(local_1968,0,(ulong)(puVar3 + (-0xe1 - (long)&local_1970)) & 0xfffffffffffffffc | 2);
      local_98 = (undefined *)CONCAT44(local_98._4_4_,10);
      local_90 = lVar2 + 0x12900;
      FUN_0082b014(&local_1970);
      local_174 = 0;
      local_178 = CONCAT31(local_178._1_3_,1);
      local_188 = 0;
      uStack_180 = 0;
      local_198 = (undefined8 *)0x0;
      local_190 = 0;
      local_1a0 = puVar1;
      FUN_02906b00(&local_1a0,&local_1970,&local_98);
      iVar7 = *(int *)(lVar2 + 0x12914);
      puVar11 = (undefined4 *)(**(code **)(local_1970 + 0x40))(&local_1970);
      uVar16 = 1;
      if (iVar7 == 1) {
        uVar16 = 2;
      }
      *puVar11 = uVar16;
      puVar5 = PTR_DAT_04bc0a88;
      if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0)) {
        FUN_01bb25c8(PTR_DAT_04bc0a80);
        __cxa_guard_release(PTR_DAT_04bc0a88);
      }
      puVar1 = PTR_DAT_04bc0a80;
      if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
        uVar8 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar8 * 4) == 0x73) goto LAB_00b4290c;
          uVar8 = uVar8 + 1;
        } while (*(uint *)PTR_DAT_04bc0a80 != uVar8);
      }
      uVar8 = 0;
LAB_00b4290c:
      local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,(int)uVar8);
      FUN_01bae480(uVar13,&local_1970,2,&local_1a0,0);
      FUN_01bae870(uVar13,lVar2 + 76000,0);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0)) {
        FUN_01bb25c8(PTR_DAT_04bc0a80);
        __cxa_guard_release(PTR_DAT_04bc0a88);
      }
      uVar4 = *(uint *)puVar1;
      if (0 < (int)uVar4) {
        uVar8 = 0;
        do {
          if (*(int *)(*(long *)(puVar1 + 8) + uVar8 * 4) == 0x73) goto LAB_00b42974;
          uVar8 = uVar8 + 1;
        } while (uVar4 != uVar8);
      }
      uVar8 = 0;
LAB_00b42974:
      local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,(int)uVar8);
      FUN_01bae480(uVar13,&local_2c8,0,&local_1a0,3);
      if ((uVar6 & 1) != 0) {
        return;
      }
      lVar15 = *(long *)(lVar15 + 0x28);
      goto joined_r0x00b429a4;
    }
  }
  FUN_01b086f4(local_2cc,&local_1b8);
  if (local_2cc[0] == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  FUN_007ef010(auStack_1972,local_2cc);
  FUN_007e4920(&local_1970,auStack_1972);
  uVar8 = FUN_007ef180(local_2cc);
  puVar10 = local_1960;
  puVar9 = local_1968;
  if ((uVar8 & 1) == 0) {
    if (local_1968 == (undefined8 *)0x0) {
      return;
    }
    if (((long *)local_1968[5] == (long *)0x0) ||
       (puVar10 = *(undefined8 **)local_1968[5], puVar10 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar10)();
      uVar6 = uVar6 ^ 1;
    }
    lVar15 = puVar9[2] + puVar9[1];
    FUN_01c0cff4(&local_2c8,local_2cc);
    local_190._4_4_ = local_190._4_4_ & 0xffffff00;
    local_190 = CONCAT44(local_190._4_4_,0xb);
    local_188 = 0xffffffff;
    uStack_180 = 0xffffffff00000000;
    puStack_168 = local_15c;
    local_170 = puVar5 + 0x10;
    local_198 = &local_c0;
    local_178 = 0xffffffff;
    local_160 = 0x40;
    local_11d = 0;
    local_15c[0] = 0;
    local_108 = 0x40;
    local_c5 = 0;
    local_104[0] = 0;
    puStack_110 = local_104;
    uStack_b0 = 0;
    local_1a0 = PTR_DAT_04bb5128 + 0x10;
    puVar3 = auStack_aa;
    if (auStack_aa <= (undefined1 *)((long)&local_c0 + 2U)) {
      puVar3 = (undefined1 *)((long)&local_c0 + 2U);
    }
    local_c0 = 0;
    uStack_b8 = 0;
    local_b2 = 0;
    local_118 = local_170;
    memset(local_198,0,(ulong)(puVar3 + (-0xe1 - (long)&local_1a0)) & 0xfffffffffffffffc | 2);
    local_a8[0] = 10;
    local_a0 = lVar15 + 0x58;
    FUN_0082b014(&local_1a0);
    local_80 = 0;
    uStack_78 = 0;
    local_88 = 0;
    local_70 = 1;
    local_6c = 0;
    local_98 = PTR_DAT_04bc0cd8 + 0x10;
    local_90 = 0;
    FUN_02906b00(&local_98,&local_1a0,local_a8);
    iVar7 = *(int *)(lVar15 + 0x6c);
    puVar11 = (undefined4 *)(**(code **)(local_1a0 + 0x40))(&local_1a0);
    uVar16 = 1;
    if (iVar7 == 1) {
      uVar16 = 2;
    }
    *puVar11 = uVar16;
    puVar5 = PTR_DAT_04bc0a88;
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    puVar1 = PTR_DAT_04bc0a80;
    if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
      uVar8 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar8 * 4) == 0x73) goto LAB_00b42d24;
        uVar8 = uVar8 + 1;
      } while (*(uint *)PTR_DAT_04bc0a80 != uVar8);
    }
    uVar8 = 0;
LAB_00b42d24:
    local_98 = (undefined *)CONCAT44(local_98._4_4_,(int)uVar8);
    FUN_01bae480(uVar13,&local_1a0,2,&local_98,0);
    FUN_01bae870(uVar13,lVar15 + 0x38,0);
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    uVar4 = *(uint *)puVar1;
    if (0 < (int)uVar4) {
      uVar8 = 0;
      do {
        if (*(int *)(*(long *)(puVar1 + 8) + uVar8 * 4) == 0x73) goto LAB_00b42d8c;
        uVar8 = uVar8 + 1;
      } while (uVar4 != uVar8);
    }
    uVar8 = 0;
LAB_00b42d8c:
    local_98 = (undefined *)CONCAT44(local_98._4_4_,(int)uVar8);
    FUN_01bae480(uVar13,&local_2c8,0,&local_98,3);
  }
  else {
    if (local_1960 == (undefined8 *)0x0) {
      return;
    }
    if (((long *)local_1960[5] == (long *)0x0) ||
       (puVar9 = *(undefined8 **)local_1960[5], puVar9 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar9)();
      uVar6 = uVar6 ^ 1;
    }
    lVar15 = puVar10[2] + puVar10[1];
    FUN_01c0cff4(&local_2c8,local_2cc);
    local_190._4_4_ = local_190._4_4_ & 0xffffff00;
    local_190 = CONCAT44(local_190._4_4_,0xb);
    local_188 = 0xffffffff;
    uStack_180 = 0xffffffff00000000;
    puStack_168 = local_15c;
    local_170 = puVar5 + 0x10;
    local_198 = &local_c0;
    local_178 = 0xffffffff;
    local_160 = 0x40;
    local_11d = 0;
    local_15c[0] = 0;
    local_108 = 0x40;
    local_c5 = 0;
    local_104[0] = 0;
    puStack_110 = local_104;
    uStack_b0 = 0;
    local_1a0 = PTR_DAT_04bb5128 + 0x10;
    puVar3 = auStack_aa;
    if (auStack_aa <= (undefined1 *)((long)&local_c0 + 2U)) {
      puVar3 = (undefined1 *)((long)&local_c0 + 2U);
    }
    local_c0 = 0;
    uStack_b8 = 0;
    local_b2 = 0;
    local_118 = local_170;
    memset(local_198,0,(ulong)(puVar3 + (-0xe1 - (long)&local_1a0)) & 0xfffffffffffffffc | 2);
    local_a8[0] = 10;
    local_a0 = lVar15 + 0x58;
    FUN_0082b014(&local_1a0);
    local_80 = 0;
    uStack_78 = 0;
    local_88 = 0;
    local_70 = 1;
    local_6c = 0;
    local_98 = PTR_DAT_04bc0cd8 + 0x10;
    local_90 = 0;
    FUN_02906b00(&local_98,&local_1a0,local_a8);
    iVar7 = *(int *)(lVar15 + 0x6c);
    puVar11 = (undefined4 *)(**(code **)(local_1a0 + 0x40))(&local_1a0);
    uVar16 = 1;
    if (iVar7 == 1) {
      uVar16 = 2;
    }
    *puVar11 = uVar16;
    puVar5 = PTR_DAT_04bc0a88;
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    puVar1 = PTR_DAT_04bc0a80;
    if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
      uVar8 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar8 * 4) == 0x73) goto LAB_00b42b20;
        uVar8 = uVar8 + 1;
      } while (*(uint *)PTR_DAT_04bc0a80 != uVar8);
    }
    uVar8 = 0;
LAB_00b42b20:
    local_98 = (undefined *)CONCAT44(local_98._4_4_,(int)uVar8);
    FUN_01bae480(uVar13,&local_1a0,2,&local_98,0);
    FUN_01bae870(uVar13,lVar15 + 0x38,0);
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    uVar4 = *(uint *)puVar1;
    if (0 < (int)uVar4) {
      uVar8 = 0;
      do {
        if (*(int *)(*(long *)(puVar1 + 8) + uVar8 * 4) == 0x73) goto LAB_00b42b88;
        uVar8 = uVar8 + 1;
      } while (uVar4 != uVar8);
    }
    uVar8 = 0;
LAB_00b42b88:
    local_98 = (undefined *)CONCAT44(local_98._4_4_,(int)uVar8);
    FUN_01bae480(uVar13,&local_2c8,0,&local_98,3);
    puVar9 = puVar10;
  }
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar15 = puVar9[5];
joined_r0x00b429a4:
  if ((lVar15 != 0) && (*(undefined8 **)(lVar15 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar15 + 8))();
  }
  return;
}

