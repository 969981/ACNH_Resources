
undefined8 FUN_022c33e0(undefined4 *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  undefined **ppuVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  uint local_1f8 [2];
  undefined8 local_1f0;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  byte local_1d0;
  undefined1 local_1cf;
  undefined2 local_1cc;
  undefined1 local_1ca;
  undefined1 local_1c9;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  byte local_170;
  undefined1 local_16f;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  undefined4 local_144;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_124;
  uint local_120 [4];
  undefined **local_110 [3];
  uint local_f4;
  undefined8 local_f0;
  undefined *puStack_e8;
  int local_e0;
  int iStack_dc;
  ulong local_d8;
  undefined *local_d0;
  uint local_c8;
  undefined4 local_c4;
  byte local_c0;
  undefined1 local_bf;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  
  if ((*(byte *)((long)param_1 + 0x1a) >> 2 & 1) != 0) {
    return 0;
  }
  local_d8 = 0xfffe;
  pbVar5 = PTR_DAT_04bb5038 + (uint)(int)*(char *)((long)param_1 + 0x17);
  if (7 < (uint)(int)*(char *)((long)param_1 + 0x17)) {
    pbVar5 = PTR_DAT_04bb32e0;
  }
  FUN_0277d4ac(&local_d8);
  puVar3 = PTR_DAT_04bb2010;
  local_d8 = *(ulong *)(param_1 + 1);
  local_e0 = (int)*(short *)(param_1 + 3);
  iStack_dc = (int)*(short *)((long)param_1 + 0xe);
  puStack_e8 = PTR_DAT_04bb2010 + 0x10;
  local_f0 = 0xfffe;
  FUN_0277d4ac(&local_f0);
  local_f4 = 0;
  local_f0 = 0xfffe;
  FUN_0277d4ac(&local_f0);
  if (((local_d8 & 0x18000000000000) != 0) ||
     (uVar8 = FUN_0123b020(&local_d8,&local_f0,&local_f4,0), (uVar8 & 1) == 0)) goto LAB_022c3a14;
  if (3 < (int)local_f4) {
    return 0;
  }
  local_120[2] = 0;
  local_120[0] = 0;
  local_120[1] = 0;
  if (0 < (int)local_f4) {
    uVar8 = 0;
    puVar2 = PTR_DAT_04bc2e90 + 0x10;
LAB_022c3508:
    if (DAT_0547b490 < (int)DAT_0547b48c) {
      return 0;
    }
    uVar17 = uVar8 & 0xffffffff;
    uVar14 = DAT_0547b48c;
    do {
      local_c4 = 0;
      local_bf = 0;
      local_c0 = *PTR_DAT_04bb32e0;
      local_b4 = 0xfffe;
      local_bc = *(undefined4 *)PTR_DAT_04bb37e0;
      uStack_b8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      if (7 < local_c0) {
        local_c0 = 0xff;
      }
      local_d0 = puVar2;
      local_c8 = uVar14;
      FUN_0277d4ac(&local_b4);
      local_ac = 0xfffe;
      FUN_0277d4ac(&local_ac);
      local_a4 = 0;
      local_9c = 0;
      local_80 = 0x2400000000;
      local_94 = 0;
      uStack_88 = 0;
      uVar9 = (uint)*pbVar5;
      local_78 = 0;
      local_74 = 0;
      if (7 < uVar9) {
        uVar9 = 0xffffffff;
      }
      local_180 = (undefined *)CONCAT44(local_180._4_4_,local_c8);
      lVar10 = *(long *)(*(long *)PTR_DAT_04bbc218 + 0x18);
      if (*(uint *)(*(long *)PTR_DAT_04bbc218 + 0x10) <= local_c8) {
        local_c8 = 0;
      }
      puVar12 = *(uint **)(lVar10 + (long)(int)local_c8 * 0x18 + 0x10);
      iVar16 = (int)uVar17;
      local_90 = puVar3 + 0x10;
      if ((0 < (int)*puVar12) && (uVar9 < *(uint *)(lVar10 + (long)(int)local_c8 * 0x18 + 8))) {
        uVar17 = 0;
        lVar10 = 0x2c;
        do {
          if (((uVar17 < puVar12[(long)(int)uVar9 * 4]) &&
              (*(long *)(puVar12 + (long)(int)uVar9 * 4 + 2) != 0)) &&
             (*(int *)(*(long *)(puVar12 + (long)(int)uVar9 * 4 + 2) + lVar10) == 0)) {
            uVar9 = (uint)(uVar17 >> 0x1f) & 1;
            uVar11 = (uint)(0 < iVar16);
            if (((int)uVar17 < 0) || (0 < iVar16)) goto LAB_022c3680;
            local_120[uVar8] = uVar14;
            if (uVar14 == 0) {
              return 0;
            }
            uVar8 = uVar8 + 1;
            if ((long)uVar8 < (long)(int)local_f4) goto LAB_022c3508;
            local_c8 = local_120[0];
            uVar14 = local_120[1];
            goto LAB_022c36e4;
          }
          uVar17 = uVar17 + 1;
          lVar10 = lVar10 + 0x518;
        } while (*puVar12 != uVar17);
      }
      uVar9 = 1;
      uVar11 = (uint)(0 < iVar16);
LAB_022c3680:
      uVar17 = (ulong)(iVar16 - (uVar11 & (uVar9 ^ 0xffffffff)));
      bVar1 = DAT_0547b490 <= (int)uVar14;
      uVar14 = uVar14 + 1;
      if (bVar1) {
        return 0;
      }
    } while( true );
  }
  uVar14 = 0;
  local_c8 = 0;
LAB_022c36e4:
  uVar9 = local_120[2];
  puVar2 = PTR_DAT_04bb37e0;
  local_c4 = 0;
  local_bf = 0;
  puVar3 = PTR_DAT_04bc2e90 + 0x10;
  local_c0 = *PTR_DAT_04bb32e0;
  local_b4 = 0xfffe;
  local_bc = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_b8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  if (7 < local_c0) {
    local_c0 = 0xff;
  }
  local_d0 = puVar3;
  FUN_0277d4ac(&local_b4);
  local_ac = 0xfffe;
  FUN_0277d4ac(&local_ac);
  puVar7 = PTR_DAT_04bb32e0;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  local_80 = 0x2400000000;
  local_78 = 0;
  local_74 = 0;
  uStack_174 = 0;
  uStack_88 = 0;
  local_170 = *PTR_DAT_04bb32e0;
  local_16f = 0;
  local_164 = 0xfffe;
  if (7 < local_170) {
    local_170 = 0xff;
  }
  local_16c = *(undefined2 *)puVar2;
  local_16a = *(undefined2 *)(puVar2 + 2);
  local_168 = *(undefined4 *)(puVar2 + 4);
  local_180 = puVar3;
  local_178 = uVar14;
  local_110[0] = &local_d0;
  local_90 = puVar4;
  FUN_0277d4ac(&local_164);
  local_15c = 0xfffe;
  FUN_0277d4ac(&local_15c);
  local_154 = 0;
  local_14c = 0;
  local_144 = 0;
  local_130 = 0x2400000000;
  local_128 = 0;
  local_124 = 0;
  local_1cf = 0;
  local_1c4 = 0xfffe;
  uStack_1d4 = 0;
  local_1d0 = *puVar7;
  if (7 < local_1d0) {
    local_1d0 = 0xff;
  }
  local_1cc = *(undefined2 *)puVar2;
  local_1ca = puVar2[2];
  uStack_138 = 0;
  local_1c9 = puVar2[3];
  local_1c8 = *(undefined4 *)(puVar2 + 4);
  local_1e0 = puVar3;
  local_1d8 = uVar9;
  local_140 = puVar4;
  FUN_0277d4ac(&local_1c4);
  local_1bc = 0xfffe;
  FUN_0277d4ac(&local_1bc);
  local_1b4 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  local_190 = 0x2400000000;
  uStack_198 = 0;
  local_188 = 0;
  local_184 = 0;
  if ((int)local_f4 < 2) {
    if (local_f4 == 1) goto LAB_022c388c;
  }
  else {
    local_110[1] = &local_180;
    if (local_f4 != 2) {
      local_110[2] = &local_1e0;
    }
LAB_022c388c:
    uVar8 = 0;
    lVar10 = *(long *)PTR_DAT_04bbc218;
    do {
      ppuVar13 = local_110[uVar8];
      bVar6 = *pbVar5;
      uVar14 = (uint)bVar6;
      if (7 < uVar14) {
        uVar14 = 0xffffffff;
      }
      *(uint *)((long)ppuVar13 + 0xc) = uVar14;
      if (bVar6 < 8) {
        *(byte *)(ppuVar13 + 2) = bVar6;
      }
      *(undefined1 *)((long)ppuVar13 + 0x11) = 1;
      local_1f8[0] = *(uint *)(ppuVar13 + 1);
      lVar15 = *(long *)(lVar10 + 0x18);
      uVar9 = local_1f8[0];
      if (*(uint *)(lVar10 + 0x10) <= local_1f8[0]) {
        uVar9 = 0;
      }
      puVar12 = *(uint **)(lVar15 + (long)(int)uVar9 * 0x18 + 0x10);
      if ((int)*puVar12 < 1) {
        return 0;
      }
      if (*(uint *)(lVar15 + (long)(int)uVar9 * 0x18 + 8) <= uVar14) {
        return 0;
      }
      uVar17 = 0;
      lVar15 = 0x2c;
      while (((puVar12[(long)(int)uVar14 * 4] <= uVar17 ||
              (*(long *)(puVar12 + (long)(int)uVar14 * 4 + 2) == 0)) ||
             (*(int *)(*(long *)(puVar12 + (long)(int)uVar14 * 4 + 2) + lVar15) != 0))) {
        uVar17 = uVar17 + 1;
        lVar15 = lVar15 + 0x518;
        if (*puVar12 == uVar17) {
          return 0;
        }
      }
      if ((int)uVar17 < 0) {
        return 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != local_f4);
  }
  local_1a0 = puVar4;
  uVar8 = FUN_022b6bb0(param_1[4],local_110,local_120,pbVar5,&local_f0,*(undefined2 *)(param_1 + 5),
                       &puStack_e8,(ulong)local_f4,*param_1,*(char *)((long)param_1 + 0x16) == '\b')
  ;
  if ((uVar8 & 1) != 0) {
    FUN_0124c030(local_1f8,&local_d8);
    FUN_0124e4d0(local_1f8);
    *(byte *)((long)param_1 + 0x19) = *(byte *)((long)param_1 + 0x19) & 0x1f | 0x20;
    *(undefined8 *)(param_1 + 1) = local_1f0;
    *(char *)(param_1 + 8) = (char)local_120[0];
    *(char *)((long)param_1 + 0x21) = (char)local_120[1];
    *(char *)((long)param_1 + 0x22) = (char)local_120[2];
    return 1;
  }
LAB_022c3a14:
  *(byte *)((long)param_1 + 0x19) = *(byte *)((long)param_1 + 0x19) & 0x1f;
  return 0;
}

