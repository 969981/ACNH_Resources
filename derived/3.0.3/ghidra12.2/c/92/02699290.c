
void FUN_02699290(long param_1)

{
  char *pcVar1;
  long lVar2;
  undefined2 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  ushort *puVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined2 uVar20;
  undefined8 *puVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  char cVar24;
  uint *puVar25;
  int *piVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined1 *puVar31;
  long lVar32;
  undefined1 *puVar33;
  long lVar34;
  long *plVar35;
  undefined1 *local_99c;
  undefined8 local_994;
  undefined4 local_98c;
  undefined4 uStack_988;
  undefined1 auStack_984 [8];
  undefined4 local_97c;
  undefined4 uStack_978;
  uint local_974;
  undefined4 local_970;
  undefined4 uStack_96c;
  long local_850;
  uint local_838;
  undefined1 auStack_298 [152];
  undefined *local_200;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec [31];
  undefined1 local_1cd;
  undefined *local_1c8;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4 [7];
  undefined1 local_1ad;
  uint local_1a4;
  char *local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined8 local_184;
  char *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  char *local_160;
  undefined8 uStack_158;
  undefined1 local_8d;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  
  local_1a4 = (uint)*(char *)(param_1 + 0x12678);
  if ((local_1a4 | 4) != 4) {
    return;
  }
  local_1ad = 0;
  local_1b8 = 8;
  local_1f0 = 0x20;
  local_1c0 = local_1b4;
  local_1f8 = local_1ec;
  local_1b4[0] = 0;
  local_1cd = 0;
  local_1c8 = PTR_DAT_04bb3768 + 0x10;
  local_1ec[0] = 0;
  local_200 = PTR_DAT_04bb2028 + 0x10;
  iVar10 = FUN_021fdf60(&local_1c8,&local_200,param_1);
  if (iVar10 < 0) {
    return;
  }
  puVar21 = (undefined8 *)(param_1 + 0x12880);
  uVar27 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_1c8 + 0x18))(&local_1c8);
  local_970 = FUN_006bd550(local_1c0,0);
  puVar14 = (uint *)FUN_0079e770(uVar27,&local_970);
  puVar8 = PTR_DAT_04bb40b8;
  puVar7 = PTR_DAT_04bb40b0;
  if ((puVar14 != (uint *)0x0) && (*puVar14 != 0)) {
    cVar24 = *PTR_DAT_04bb40b0;
    do {
      if (cVar24 == '\0') {
        cVar24 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined4 *)(puVar8 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar8 + 0x7c);
        if (-1 < (int)uVar13) {
          if ((byte *)((ulong)uVar13 + (long)puVar14) != (byte *)0x0) {
            uVar13 = (uint)*(byte *)((ulong)uVar13 + (long)puVar14);
            goto LAB_02699490;
          }
          break;
        }
        if (uVar13 != 0xffffffff) break;
      }
      puVar25 = (uint *)(ulong)*puVar14;
      uVar13 = 0;
      if ((*puVar14 == 0) || (puVar14 == puVar25)) goto LAB_02699490;
      lVar30 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar25)) != '\0') {
        lVar30 = 0x1c;
      }
      lVar30 = (long)puVar14 + (lVar30 - (long)puVar25);
      if (lVar30 == 0) break;
      uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar25));
      *(undefined4 *)(puVar8 + 0x7c) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar26 = (int *)(lVar30 + 4);
      while (piVar26[-1] != 0x566f1d31) {
        piVar26 = piVar26 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_0269948c;
      }
      iVar10 = 0;
      if (*piVar26 != -1) {
        iVar10 = *piVar26;
      }
      *(int *)(puVar8 + 0x7c) = iVar10;
      if (*puVar14 == 0) break;
    } while( true );
  }
LAB_0269948c:
  uVar13 = 0;
LAB_02699490:
  *puVar21 = 0x134b;
  *(undefined4 *)(param_1 + 0x128a0) = 0;
  *(undefined8 *)(param_1 + 0x12890) = 0;
  *(undefined8 *)(param_1 + 0x12898) = 0;
  *(undefined8 *)(param_1 + 0x12888) = 0;
  FUN_0277d4ac(puVar21);
  puVar28 = (undefined8 *)(param_1 + 0x12888);
  *puVar28 = 0x134b;
  FUN_0277d4ac(puVar28);
  puVar29 = (undefined8 *)(param_1 + 0x12890);
  *puVar29 = 0x139b;
  FUN_0277d4ac(puVar29);
  puVar7 = PTR_DAT_04bb3170;
  uVar20 = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined2 *)(param_1 + 0x12898) = uVar20;
  *(undefined2 *)(param_1 + 0x1289a) = uVar20;
  *(undefined2 *)(param_1 + 0x1289c) = uVar20;
  *(undefined2 *)(param_1 + 0x1289e) = 0x4000;
  *(undefined1 *)(param_1 + 0x128a0) = 0x10;
  (**(code **)(local_200 + 0x18))(&local_200);
  FUN_0074fda4(auStack_298,"Param/NpcRoom/%s.byml",local_1f8);
  uVar15 = FUN_03eba3a0(auStack_298);
  if ((uVar15 & 1) == 0) {
    return;
  }
  lVar30 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x17598);
  if (lVar30 == 0) {
    return;
  }
  lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar34 = *(long *)(lVar16 + 0xa8);
  *(long *)(lVar16 + 0xa8) = lVar30;
  pcVar1 = PTR_DAT_04bb2020 + 0x10;
  local_198 = "NpcRoom";
  local_1a0 = pcVar1;
  (**(code **)(local_200 + 0x18))(&local_200);
  local_78 = local_1f8;
  local_80 = pcVar1;
  FUN_00b62c50(&local_970,&local_1a0,&local_80,0);
  local_198 = (char *)((long)&local_190 + 4);
  local_8d = 0;
  local_190 = CONCAT35(local_190._5_3_,0x100);
  local_1a0 = PTR_DAT_04bb21f8 + 0x10;
  uVar15 = (**(code **)(CONCAT44(uStack_96c,local_970) + 0xf0))(&local_970,&local_1a0,1);
  if ((uVar15 & 1) != 0) {
    FUN_03c27e60(&local_970,&local_1a0,lVar30);
  }
  *puVar21 = 0x134b;
  *(undefined4 *)(param_1 + 0x128a0) = 0;
  *(undefined8 *)(param_1 + 0x12890) = 0;
  *(undefined8 *)(param_1 + 0x12898) = 0;
  *(undefined8 *)(param_1 + 0x12888) = 0;
  FUN_0277d4ac(puVar21);
  *(undefined8 *)(param_1 + 0x12888) = 0x134b;
  FUN_0277d4ac(puVar28);
  *(undefined8 *)(param_1 + 0x12890) = 0x139b;
  FUN_0277d4ac(puVar29);
  uVar20 = *(undefined2 *)puVar7;
  *(undefined2 *)(param_1 + 0x1289e) = 0x4000;
  *(undefined2 *)(param_1 + 0x12898) = uVar20;
  *(undefined2 *)(param_1 + 0x1289a) = uVar20;
  *(undefined2 *)(param_1 + 0x1289c) = uVar20;
  *(undefined1 *)(param_1 + 0x128a0) = 0x10;
  local_974 = FUN_020fd7d8(param_1);
  plVar35 = (long *)PTR_DAT_04bb43c0;
  local_974 = local_974 & 0xff;
  if (local_1a4 == 0) {
    local_1a0 = (char *)0xfffe;
    FUN_0277d4ac(&local_1a0);
    local_190 = 0;
    local_184 = 0xfffe;
    pcVar1 = PTR_DAT_04bb2010 + 0x10;
    local_198 = pcVar1;
    FUN_0277d4ac(&local_184);
    uStack_170 = 0;
    local_168 = 0xfffe;
    local_178 = pcVar1;
    FUN_0277d4ac(&local_168);
    local_88 = (undefined1 *)0x598;
    uStack_158 = 0;
    local_160 = pcVar1;
    FUN_0277d4ac(&local_88);
    puVar7 = PTR_DAT_04bc0510;
    lVar30 = *plVar35;
    local_70 = 0;
    local_80 = PTR_DAT_04bc0510 + 0x10;
    local_78 = local_88;
    uVar12 = FUN_0277d6c4(&local_78);
    if (*plVar35 != 0) {
      lVar30 = *(long *)(lVar30 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        lVar30 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_88);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
           (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8), lVar30 != 0)) {
          local_70 = lVar30;
        }
      }
    }
    bVar9 = FUN_020fd7d8(param_1);
    iVar10 = *(int *)(&DAT_04058160 + (ulong)bVar9 * 4);
    iVar11 = FUN_01ad7260(&local_80);
    if ((iVar11 != 0) &&
       (((bVar9 == 2 || (iVar11 = FUN_01ad7260(&local_80), iVar10 < iVar11)) &&
        (puVar17 = (ushort *)FUN_01afd600(&local_80), puVar17 != (ushort *)0x0)))) {
      *puVar17 = *puVar17 & 0xfff8 | (ushort)iVar10 & 7;
    }
    local_97c = (undefined4)local_78;
    uStack_978 = local_78._4_4_;
    FUN_0268b680(auStack_984,param_1);
    local_88 = (undefined1 *)0xe71;
    FUN_0277d4ac(&local_88);
    lVar30 = *plVar35;
    local_80 = puVar7 + 0x10;
    local_70 = 0;
    local_78 = local_88;
    uVar12 = FUN_0277d6c4(&local_78);
    if (*plVar35 != 0) {
      lVar30 = *(long *)(lVar30 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        lVar30 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_88);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
           (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8), lVar30 != 0)) {
          local_70 = lVar30;
        }
      }
    }
    bVar9 = FUN_020fd7d8(param_1);
    iVar10 = *(int *)(&DAT_04057fa0 + (ulong)bVar9 * 4);
    iVar11 = FUN_01ad7260(&local_80);
    if (((iVar11 != 0) && ((bVar9 == 3 || (iVar11 = FUN_01ad7260(&local_80), iVar10 < iVar11)))) &&
       (puVar17 = (ushort *)FUN_01afd600(&local_80), puVar17 != (ushort *)0x0)) {
      *puVar17 = *puVar17 & 0xfff8 | (ushort)iVar10 & 7;
    }
    local_88 = (char *)0xfffe;
    local_98c = (undefined4)local_78;
    uStack_988 = local_78._4_4_;
    FUN_0277d4ac(&local_88);
    local_994 = 0xfffe;
    FUN_0277d4ac(&local_994);
    if (local_974 == 1) {
      local_99c = (undefined1 *)0xfc5;
      FUN_0277d4ac(&local_99c);
      if (uVar13 < 8) {
        iVar10 = (&DAT_04058320)[uVar13];
      }
      else {
        iVar10 = 0;
      }
      lVar30 = *plVar35;
      local_80 = puVar7 + 0x10;
      local_70 = 0;
      local_78 = local_99c;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*plVar35 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          lVar30 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(&local_99c);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
             (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8), lVar30 != 0)) {
            local_70 = lVar30;
          }
        }
      }
      iVar11 = FUN_01ad7260(&local_80);
      if (iVar10 < iVar11) {
        puVar31 = (undefined1 *)((long)&local_78 + 2);
        puVar33 = (undefined1 *)((long)&local_78 + 3);
        ppuVar6 = (undefined1 **)&local_78;
        FUN_01af1f00(&local_80,iVar10);
        local_99c._0_2_ = (undefined2)local_78;
      }
      else {
        puVar31 = (undefined1 *)((ulong)&local_99c | 2);
        puVar33 = (undefined1 *)((ulong)&local_99c | 3);
        ppuVar6 = &local_99c;
      }
      local_88 = (char *)CONCAT62(local_88._2_6_,local_99c._0_2_);
      local_88 = (char *)CONCAT44(*(undefined4 *)((long)ppuVar6 + 4),(undefined4)local_88);
      local_88._0_3_ = CONCAT12(*puVar31,local_99c._0_2_);
      local_88._0_4_ = CONCAT13(*puVar33,(undefined3)local_88);
      local_88 = (char *)CONCAT44(*(undefined4 *)((long)ppuVar6 + 4),(undefined4)local_88);
      local_99c = (undefined1 *)0xf98;
      FUN_0277d4ac(&local_99c);
      if (uVar13 < 8) {
        iVar10 = (&DAT_040578a0)[uVar13];
      }
      else {
        iVar10 = 0;
      }
      local_80 = puVar7 + 0x10;
      lVar30 = *plVar35;
      local_70 = 0;
      local_78 = local_99c;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*plVar35 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          lVar30 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(&local_99c);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
             (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8), lVar30 != 0)) {
            local_70 = lVar30;
          }
        }
      }
      iVar11 = FUN_01ad7260(&local_80);
      if (iVar10 < iVar11) {
        puVar31 = (undefined1 *)((long)&local_78 + 2);
        puVar33 = (undefined1 *)((long)&local_78 + 3);
        ppuVar6 = (undefined1 **)&local_78;
        FUN_01af1f00(&local_80,iVar10);
        uVar20 = (undefined2)local_78;
      }
      else {
        puVar31 = (undefined1 *)((ulong)&local_99c | 2);
        puVar33 = (undefined1 *)((ulong)&local_99c | 3);
        ppuVar6 = &local_99c;
        uVar20 = local_99c._0_2_;
      }
      uVar22 = *puVar31;
      uVar23 = *puVar33;
    }
    else {
      local_99c = (undefined1 *)0x6f7;
      FUN_0277d4ac(&local_99c);
      if (uVar13 < 5) {
        iVar10 = (&DAT_0417b3d0)[uVar13];
      }
      else {
        iVar10 = 0;
      }
      lVar30 = *plVar35;
      local_80 = puVar7 + 0x10;
      local_70 = 0;
      local_78 = local_99c;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*plVar35 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          lVar30 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(&local_99c);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
             (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8), lVar30 != 0)) {
            local_70 = lVar30;
          }
        }
      }
      iVar11 = FUN_01ad7260(&local_80);
      if (iVar10 < iVar11) {
        puVar31 = (undefined1 *)((long)&local_78 + 2);
        puVar33 = (undefined1 *)((long)&local_78 + 3);
        ppuVar6 = (undefined1 **)&local_78;
        FUN_01af1f00(&local_80,iVar10);
        local_99c._0_2_ = (undefined2)local_78;
      }
      else {
        puVar31 = (undefined1 *)((ulong)&local_99c | 2);
        puVar33 = (undefined1 *)((ulong)&local_99c | 3);
        ppuVar6 = &local_99c;
      }
      local_88 = (char *)CONCAT62(local_88._2_6_,local_99c._0_2_);
      local_88 = (char *)CONCAT44(*(undefined4 *)((long)ppuVar6 + 4),(undefined4)local_88);
      local_88._0_3_ = CONCAT12(*puVar31,local_99c._0_2_);
      local_88._0_4_ = CONCAT13(*puVar33,(undefined3)local_88);
      local_88 = (char *)CONCAT44(*(undefined4 *)((long)ppuVar6 + 4),(undefined4)local_88);
      local_99c = (undefined1 *)0xc88;
      FUN_0277d4ac(&local_99c);
      local_80 = puVar7 + 0x10;
      lVar30 = *plVar35;
      local_70 = 0;
      local_78 = local_99c;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*plVar35 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          lVar30 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(&local_99c);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
             (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8), lVar30 != 0)) {
            local_70 = lVar30;
          }
        }
      }
      iVar10 = FUN_01ad7260(&local_80);
      if ((int)uVar13 < iVar10) {
        puVar31 = (undefined1 *)((long)&local_78 + 2);
        puVar33 = (undefined1 *)((long)&local_78 + 3);
        ppuVar6 = (undefined1 **)&local_78;
        FUN_01af1f00(&local_80,uVar13);
        uVar20 = (undefined2)local_78;
      }
      else {
        puVar31 = (undefined1 *)((ulong)&local_99c | 2);
        puVar33 = (undefined1 *)((ulong)&local_99c | 3);
        ppuVar6 = &local_99c;
        uVar20 = local_99c._0_2_;
      }
      uVar22 = *puVar31;
      uVar23 = *puVar33;
    }
    local_994 = CONCAT62(local_994._2_6_,uVar20);
    local_994 = CONCAT44(*(undefined4 *)((long)ppuVar6 + 4),CONCAT13(uVar23,CONCAT12(uVar22,uVar20))
                        );
    FUN_0268bf20(&local_1a0,&local_970,uVar13,&local_974);
    lVar30 = -0x580;
    do {
      lVar16 = param_1 + 0x10d8c + lVar30;
      if (*(int *)(lVar16 + 0x584) == 7) {
        puVar3 = (undefined2 *)(lVar16 + 0x560);
        uVar15 = FUN_0277d7b4(puVar3,&local_97c);
        if ((((((uVar15 & 1) != 0) || (uVar15 = FUN_0277d7b4(puVar3,auStack_984), (uVar15 & 1) != 0)
              ) || (uVar15 = FUN_0277d7b4(puVar3,&local_98c), (uVar15 & 1) != 0)) ||
            ((uVar15 = FUN_0277d7b4(puVar3,&local_88), (uVar15 & 1) != 0 ||
             (uVar15 = FUN_0277d7b4(puVar3,&local_994), (uVar15 & 1) != 0)))) ||
           ((uVar15 = FUN_0277d7b4(puVar3,&local_1a0), (uVar15 & 1) != 0 ||
            (uVar15 = FUN_0277d7b4(puVar3,&local_168), (uVar15 & 1) != 0)))) {
          *(undefined4 *)(lVar16 + 0x588) = 0;
          *(undefined8 *)(lVar16 + 0x580) = 0;
          *(undefined8 *)(lVar16 + 0x578) = 0;
          *(undefined8 *)(lVar16 + 0x570) = 0;
          *(undefined8 *)(lVar16 + 0x568) = 0;
          *puVar3 = 0xfffe;
          *(undefined2 *)(lVar16 + 0x562) = 0;
          *(undefined4 *)(lVar16 + 0x564) = 0;
          FUN_0277d4ac(puVar3);
          *(undefined8 *)(lVar16 + 0x578) = 0;
          *(undefined8 *)(lVar16 + 0x570) = 0;
          *(undefined8 *)(lVar16 + 0x568) = 0;
          *(undefined4 *)(lVar16 + 0x580) = 0;
          *(undefined4 *)(lVar16 + 0x57c) = 0;
          *(undefined8 *)(lVar16 + 0x584) = 0;
          *(undefined8 *)(lVar16 + 0x56c) = 0;
          *(undefined8 *)(lVar16 + 0x574) = 0;
          plVar35 = (long *)PTR_DAT_04bb43c0;
        }
      }
      lVar30 = lVar30 + 0x2c;
    } while (lVar30 != 0);
  }
  else {
    uVar12 = 0;
    if (local_974 != 0) {
      if (local_974 == 5) {
        uVar12 = 1;
      }
      else {
        if (local_974 != 4) {
          FUN_00b634e0(&local_970);
          if (lVar34 == 1) {
            return;
          }
          lVar30 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          *(long *)(lVar30 + 0xa8) = lVar34;
          return;
        }
        uVar12 = 2;
      }
    }
    lVar30 = *(long *)PTR_DAT_04bb46b0;
    if (lVar30 != 0) {
      puVar21 = *(undefined8 **)(lVar30 + 0x10);
      if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
        lVar30 = (**(code **)(*(long *)*puVar21 + 0x38))();
        if (lVar30 != 0) {
          lVar30 = lVar30 + 0x70;
LAB_02699a54:
          if ((*(long **)(&LAB_00205730 + lVar30) == (long *)0x0) ||
             (puVar21 = (undefined8 *)**(long **)(&LAB_00205730 + lVar30),
             puVar21 == (undefined8 *)0x0)) {
            uVar15 = 0;
          }
          else {
            uVar15 = (**(code **)*puVar21)();
            uVar15 = uVar15 & 0xffffffff;
          }
          local_1a0 = (char *)CONCAT44(local_1a0._4_4_,uVar12);
          lVar32 = -0x580;
          lVar16 = param_1 + 0x10d6c;
          lVar5 = *(long *)(&LAB_00205718 + lVar30) + *(long *)(&LAB_00205710 + lVar30) +
                  (ulong)uVar12 * 0x3c;
          if (2 < uVar12) {
            lVar5 = *(long *)(&LAB_00205718 + lVar30) + *(long *)(&LAB_00205710 + lVar30);
          }
          do {
            if (*(int *)(param_1 + lVar32 + 0x11310) == 7) {
              lVar2 = lVar16 + lVar32 + 0x580;
              uVar18 = FUN_0277d7b4(lVar2,lVar5 + 0x24);
              if ((uVar18 & 1) != 0) {
                lVar4 = param_1 + lVar32;
                *(undefined2 *)(lVar16 + lVar32 + 0x580) = 0xfffe;
                *(undefined4 *)(lVar4 + 0x11314) = 0;
                *(undefined8 *)(lVar4 + 0x1130c) = 0;
                *(undefined8 *)(lVar4 + 0x11304) = 0;
                *(undefined8 *)(lVar4 + 0x112fc) = 0;
                *(undefined8 *)(lVar4 + 0x112f4) = 0;
                *(undefined2 *)(lVar4 + 0x112ee) = 0;
                *(undefined4 *)(lVar4 + 0x112f0) = 0;
                FUN_0277d4ac(lVar2);
                *(undefined4 *)(lVar4 + 0x11314) = 0;
                *(undefined8 *)(lVar4 + 0x1130c) = 0;
                *(undefined8 *)(lVar4 + 0x11304) = 0;
                *(undefined8 *)(lVar4 + 0x112fc) = 0;
                *(undefined8 *)(lVar4 + 0x112f4) = 0;
                break;
              }
            }
            lVar32 = lVar32 + 0x2c;
          } while (lVar32 != 0);
          lVar32 = -0x580;
          do {
            if (*(int *)(param_1 + lVar32 + 0x11310) == 7) {
              lVar2 = lVar16 + lVar32 + 0x580;
              uVar18 = FUN_0277d7b4(lVar2,lVar5 + 0x2c);
              if ((uVar18 & 1) != 0) {
                lVar4 = param_1 + lVar32;
                *(undefined2 *)(lVar16 + lVar32 + 0x580) = 0xfffe;
                *(undefined4 *)(lVar4 + 0x11314) = 0;
                *(undefined8 *)(lVar4 + 0x1130c) = 0;
                *(undefined8 *)(lVar4 + 0x11304) = 0;
                *(undefined8 *)(lVar4 + 0x112fc) = 0;
                *(undefined8 *)(lVar4 + 0x112f4) = 0;
                *(undefined2 *)(lVar4 + 0x112ee) = 0;
                *(undefined4 *)(lVar4 + 0x112f0) = 0;
                FUN_0277d4ac(lVar2);
                *(undefined4 *)(lVar4 + 0x11314) = 0;
                *(undefined8 *)(lVar4 + 0x1130c) = 0;
                *(undefined8 *)(lVar4 + 0x11304) = 0;
                *(undefined8 *)(lVar4 + 0x112fc) = 0;
                *(undefined8 *)(lVar4 + 0x112f4) = 0;
                break;
              }
            }
            lVar32 = lVar32 + 0x2c;
          } while (lVar32 != 0);
          lVar32 = -0x580;
          do {
            if (*(int *)(param_1 + lVar32 + 0x11310) == 7) {
              lVar2 = lVar16 + lVar32 + 0x580;
              uVar18 = FUN_0277d7b4(lVar2,lVar5 + 0x34);
              if ((uVar18 & 1) != 0) {
                lVar5 = param_1 + lVar32;
                *(undefined2 *)(lVar16 + lVar32 + 0x580) = 0xfffe;
                *(undefined4 *)(lVar5 + 0x11314) = 0;
                *(undefined8 *)(lVar5 + 0x1130c) = 0;
                *(undefined8 *)(lVar5 + 0x11304) = 0;
                *(undefined8 *)(lVar5 + 0x112fc) = 0;
                *(undefined2 *)(lVar5 + 0x112ee) = 0;
                *(undefined8 *)(lVar5 + 0x112f4) = 0;
                *(undefined4 *)(lVar5 + 0x112f0) = 0;
                FUN_0277d4ac(lVar2);
                *(undefined4 *)(lVar5 + 0x11314) = 0;
                *(undefined8 *)(lVar5 + 0x1130c) = 0;
                *(undefined8 *)(lVar5 + 0x11304) = 0;
                *(undefined8 *)(lVar5 + 0x112fc) = 0;
                *(undefined8 *)(lVar5 + 0x112f4) = 0;
                break;
              }
            }
            lVar32 = lVar32 + 0x2c;
          } while (lVar32 != 0);
          plVar35 = (long *)PTR_DAT_04bb43c0;
          if ((((uVar15 & 1) != 0) && (*(long *)(&LAB_00205730 + lVar30) != 0)) &&
             (puVar21 = *(undefined8 **)(*(long *)(&LAB_00205730 + lVar30) + 8),
             puVar21 != (undefined8 *)0x0)) {
            (**(code **)*puVar21)();
          }
        }
      }
      else if (((puVar21 != (undefined8 *)0x0) && ((long *)puVar21[0x26] != (long *)0x0)) &&
              (lVar30 = (**(code **)(*(long *)puVar21[0x26] + 0x38))(), lVar30 != 0))
      goto LAB_02699a54;
    }
  }
  if (0 < (int)local_838) {
    uVar15 = 0;
    pcVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar19 = (ulong *)(**(code **)(*(long *)(*(long *)(local_850 + uVar15 * 8) + 0x60) + 0xf0))()
      ;
      uVar18 = *puVar19;
      local_80 = (char *)(uVar18 & 0xffff);
      FUN_0277d4ac(&local_80);
      lVar16 = *plVar35;
      local_80 = (char *)CONCAT44((int)(uVar18 >> 0x20),
                                  CONCAT13((char)(uVar18 >> 0x18),
                                           CONCAT12((char)(uVar18 >> 0x10),(undefined2)local_80)));
      uVar12 = FUN_0277d6c4(&local_80);
      lVar30 = *plVar35;
      if (lVar30 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          local_190 = 0;
          local_198 = local_80;
          local_1a0 = pcVar1;
          uVar12 = FUN_0277d6c4(&local_198);
          if (*plVar35 != 0) {
            lVar30 = *(long *)(lVar30 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
              lVar30 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_80);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
                 (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8), lVar30 != 0
                 )) {
                local_190 = lVar30;
              }
            }
          }
          if (local_1a4 == 0) {
            FUN_0268bd40(&local_88,&local_80,uVar13);
            local_80 = local_88;
          }
          lVar30 = -0x420;
          do {
            lVar16 = param_1 + 0x1096c + lVar30;
            if (*(int *)(lVar16 + 0x424) == 7) {
              puVar3 = (undefined2 *)(lVar16 + 0x400);
              uVar18 = FUN_0277d7b4(puVar3,&local_80);
              if ((uVar18 & 1) != 0) {
                *(undefined4 *)(lVar16 + 0x428) = 0;
                *(undefined8 *)(lVar16 + 0x420) = 0;
                *(undefined8 *)(lVar16 + 0x418) = 0;
                *(undefined8 *)(lVar16 + 0x410) = 0;
                *(undefined8 *)(lVar16 + 0x408) = 0;
                *puVar3 = 0xfffe;
                *(undefined2 *)(lVar16 + 0x402) = 0;
                *(undefined4 *)(lVar16 + 0x404) = 0;
                FUN_0277d4ac(puVar3);
                *(undefined8 *)(lVar16 + 0x418) = 0;
                *(undefined8 *)(lVar16 + 0x410) = 0;
                *(undefined8 *)(lVar16 + 0x408) = 0;
                *(undefined4 *)(lVar16 + 0x420) = 0;
                *(undefined4 *)(lVar16 + 0x41c) = 0;
                *(undefined8 *)(lVar16 + 0x424) = 0;
                *(undefined8 *)(lVar16 + 0x40c) = 0;
                *(undefined8 *)(lVar16 + 0x414) = 0;
              }
            }
            lVar30 = lVar30 + 0x2c;
          } while (lVar30 != 0);
          lVar30 = -0x580;
          do {
            lVar16 = param_1 + 0x10d8c + lVar30;
            if (*(int *)(lVar16 + 0x584) == 7) {
              puVar3 = (undefined2 *)(lVar16 + 0x560);
              uVar18 = FUN_0277d7b4(puVar3,&local_80);
              if ((uVar18 & 1) != 0) {
                *(undefined4 *)(lVar16 + 0x588) = 0;
                *(undefined8 *)(lVar16 + 0x580) = 0;
                *(undefined8 *)(lVar16 + 0x578) = 0;
                *(undefined8 *)(lVar16 + 0x570) = 0;
                *(undefined8 *)(lVar16 + 0x568) = 0;
                *puVar3 = 0xfffe;
                *(undefined2 *)(lVar16 + 0x562) = 0;
                *(undefined4 *)(lVar16 + 0x564) = 0;
                FUN_0277d4ac(puVar3);
                *(undefined8 *)(lVar16 + 0x578) = 0;
                *(undefined8 *)(lVar16 + 0x570) = 0;
                *(undefined8 *)(lVar16 + 0x568) = 0;
                *(undefined4 *)(lVar16 + 0x580) = 0;
                *(undefined4 *)(lVar16 + 0x57c) = 0;
                *(undefined8 *)(lVar16 + 0x584) = 0;
                *(undefined8 *)(lVar16 + 0x56c) = 0;
                *(undefined8 *)(lVar16 + 0x574) = 0;
              }
            }
            lVar30 = lVar30 + 0x2c;
          } while (lVar30 != 0);
          plVar35 = (long *)PTR_DAT_04bb43c0;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != local_838);
  }
  lVar16 = *plVar35;
  uVar13 = FUN_0277d6c4(param_1 + 0x1094c);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269a50c:
    FUN_02691c50(param_1,0,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a50c;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10978);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269a564:
    FUN_02691c50(param_1,1,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a564;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x109a4);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269a5bc:
    FUN_02691c50(param_1,2,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a5bc;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x109d0);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269a618:
    FUN_02691c50(param_1,3,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a618;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x109fc);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269a670:
    FUN_02691c50(param_1,4,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a670;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10a28);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269a6c8:
    FUN_02691c50(param_1,5,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a6c8;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10a54);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269a720:
    FUN_02691c50(param_1,6,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a720;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10a80);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269a778:
    FUN_02691c50(param_1,7,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a778;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10aac);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269a7d0:
    FUN_02691c50(param_1,8,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a7d0;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10ad8);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269a828:
    FUN_02691c50(param_1,9,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a828;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10b04);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269a880:
    FUN_02691c50(param_1,10,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a880;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10b30);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269a8d8:
    FUN_02691c50(param_1,0xb,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a8d8;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10b5c);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269a930:
    FUN_02691c50(param_1,0xc,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a930;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10b88);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269a988:
    FUN_02691c50(param_1,0xd,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a988;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10bb4);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269a9e0:
    FUN_02691c50(param_1,0xe,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269a9e0;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10be0);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269aa38:
    FUN_02691c50(param_1,0xf,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269aa38;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10c0c);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269aa90:
    FUN_02691c50(param_1,0x10,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269aa90;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10c38);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269aae8:
    FUN_02691c50(param_1,0x11,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269aae8;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10c64);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269ab40:
    FUN_02691c50(param_1,0x12,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269ab40;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10c90);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269ab98:
    FUN_02691c50(param_1,0x13,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269ab98;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10cbc);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269abf0:
    FUN_02691c50(param_1,0x14,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269abf0;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10ce8);
  lVar16 = *plVar35;
  if (lVar16 == 0) {
LAB_0269ac48:
    FUN_02691c50(param_1,0x15,1);
    lVar16 = *plVar35;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269ac48;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10d14);
  lVar30 = *plVar35;
  if (lVar30 == 0) {
LAB_0269aca0:
    FUN_02691c50(param_1,0x16,1);
    lVar30 = *plVar35;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269aca0;
  }
  uVar13 = FUN_0277d6c4(param_1 + 0x10d40);
  lVar16 = *plVar35;
  if (lVar16 != 0) {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar30 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) goto LAB_0269ad0c;
  }
  FUN_02691c50(param_1,0x17,1);
  lVar16 = *plVar35;
LAB_0269ad0c:
  uVar15 = 0;
  lVar30 = param_1 + 0x10d6c;
  do {
    uVar13 = FUN_0277d6c4(lVar30);
    lVar32 = *plVar35;
    if (lVar32 == 0) {
LAB_0269ad24:
      FUN_02691c50(param_1,uVar15 & 0xffffffff,0);
      lVar32 = *plVar35;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar13) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0269ad24;
    }
    uVar15 = uVar15 + 1;
    lVar30 = lVar30 + 0x2c;
    lVar16 = lVar32;
    if (uVar15 == 0x20) {
      FUN_00b634e0(&local_970);
      if (lVar34 != 1) {
        lVar30 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        *(long *)(lVar30 + 0xa8) = lVar34;
      }
      return;
    }
  } while( true );
}

