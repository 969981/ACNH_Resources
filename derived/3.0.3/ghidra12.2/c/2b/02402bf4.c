
/* WARNING: Removing unreachable block (ram,0x02402d40) */

void FUN_02402bf4(long param_1)

{
  byte *pbVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  short *psVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  ushort uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined4 uStack_ac;
  undefined3 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  uint local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined7 uStack_70;
  undefined1 local_69;
  undefined7 uStack_68;
  short local_60;
  short sStack_5e;
  undefined4 uStack_5c;
  byte local_58 [4];
  undefined4 local_54;
  
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  local_a0._0_4_ = 0x25;
  if ((puVar14[0x227] == 0) || (uVar6 = FUN_03850890(puVar14[0x227],0x25,0,0), (uVar6 & 1) == 0)) {
LAB_02402cf4:
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    if (puVar14 == (undefined8 *)0x0) goto LAB_02402cfc;
  }
  else {
    plVar15 = *(long **)(param_1 + 0x60);
    if (plVar15 != (long *)0x0) {
      if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37a0);
      }
      uVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,PTR_DAT_04bb3798);
      if ((uVar6 & 1) != 0) {
        local_a0 = PTR_DAT_04bb2020 + 0x10;
        uStack_98 = 0xb0;
        uStack_97 = 0x6f;
        uStack_96 = 0x40a;
        local_94 = 0;
        FUN_0274bfe8(param_1 + 0x1ee8,&local_a0,0);
        *(undefined1 *)(plVar15 + 0x1841) = 0;
        local_a0._0_4_ =
             CONCAT31((int3)*(undefined4 *)((long)plVar15 + 0xc1a9),(char)plVar15[0x1835]);
        local_a0._5_3_ = (undefined3)*(undefined4 *)((long)plVar15 + 0xc1ad);
        local_a0._4_4_ =
             CONCAT31(local_a0._5_3_,(char)((uint)*(undefined4 *)((long)plVar15 + 0xc1a9) >> 0x18));
        uStack_98 = (undefined1)((uint)*(undefined4 *)((long)plVar15 + 0xc1ad) >> 0x18);
        uStack_96 = *(undefined2 *)((long)plVar15 + 0xc1b2);
        FUN_02346fe0(plVar15,&local_a0);
      }
      goto LAB_02402cf4;
    }
LAB_02402cfc:
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  uVar4 = 0;
  if (puVar14[0x227] != 0) {
    local_a0._0_4_ = 1;
    uVar4 = *(uint *)(puVar14 + 0x2d3) >> 1 & 1;
  }
  uVar6 = FUN_0170a6d0(puVar14,uVar4);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x298) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x298) + 0xc209) = 0;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  uVar6 = FUN_0253dfb0(pbVar1);
  uVar6 = uVar6 & 0xffffffff;
  uVar11 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  uVar4 = (uint)uVar11 >> 0x10 & 0xff;
  uVar12 = (uint)((ulong)uVar11 >> 0x18) & 0xff;
  if (uVar4 == 1) {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(undefined4)local_a0);
    if ((uVar12 == 1) &&
       (local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(undefined4)local_a0),
       (char)((ulong)uVar11 >> 0x20) < '\x02')) goto LAB_02402de0;
  }
  else {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(undefined4)local_a0);
    if ((uVar4 == 0xc) &&
       (((local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(undefined4)local_a0),
         '8' < (char)((ulong)uVar11 >> 0x28) &&
         (local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(undefined4)local_a0), uVar12 == 0x1f)) &&
        (local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(undefined4)local_a0),
        ((uint)((ulong)uVar11 >> 0x20) & 0xff) == 0x17)))) {
LAB_02402de0:
      puVar17 = PTR_DAT_04bb2020 + 0x10;
      uStack_98 = 0x76;
      uStack_97 = 0x32;
      uStack_96 = 0x406;
      local_94 = 0;
      local_a0 = puVar17;
      FUN_0274bfe8(pbVar1,&local_a0,0);
      uStack_98 = 0x6b;
      uStack_97 = 0xcb;
      uStack_96 = 0x409;
      local_94 = 0;
      local_a0 = puVar17;
      iVar5 = FUN_0274bce0(pbVar1,&local_a0);
      uVar6 = 0;
      if (iVar5 == 0) {
        uStack_98 = 0x89;
        uStack_97 = 0xda;
        uStack_96 = 0x406;
        local_94 = 0;
        local_a0 = puVar17;
        FUN_0274bfe8(pbVar1,&local_a0,0);
        uVar6 = 0;
      }
    }
  }
  local_58[0] = *pbVar1;
  if (7 < local_58[0]) {
    local_58[0] = 0xff;
  }
  lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_58,1);
  if (lVar7 == 0) {
LAB_02402fb4:
    FUN_02330400(param_1);
    if ((uVar6 & 1) == 0) {
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      uStack_98 = 0xf6;
      uStack_97 = 0x51;
      uStack_96 = 0x40e;
      local_94 = 0;
      iVar5 = FUN_02743000(&local_a0);
      if (((iVar5 == 0) || (DAT_0540762c < 0)) &&
         ((*(byte *)(*(long *)PTR_DAT_04bb3968 + 0xd60) >> 1 & 1) == 0)) {
        uStack_98 = 0;
        uStack_97 = 0;
        uStack_96 = 0;
        local_94 = local_94 & 0xffffff00;
        local_a0._0_4_ = 6;
        local_a0._4_4_ = 0x10000;
        FUN_02374564(param_1,&local_a0);
      }
      else {
        uVar6 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
        puVar17 = local_a0;
        if ((uVar6 & 1) == 0) {
          uStack_98 = 0;
          uStack_97 = 0;
          uStack_96 = 0;
          local_a0._0_4_ = 6;
          local_a0._5_3_ = SUB83(puVar17,5);
          local_a0._4_4_ = CONCAT31(local_a0._5_3_,1);
          FUN_02374e74(param_1,&local_a0);
        }
      }
    }
    else {
      FUN_0253dcc0(pbVar1);
    }
    return;
  }
  if ((*(long **)(lVar7 + 0xd0) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar7 + 0xd0), puVar14 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar14)();
    uVar8 = uVar8 & 0xffffffff;
  }
  lVar19 = *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0);
  if ((*(char *)(lVar19 + 0xaf89) == '\0') || (7 < *(byte *)(lVar19 + 0xaf88))) {
    lVar18 = lVar19;
    if (*(char *)(lVar19 + 0xaf8a) != '\0') {
      uVar9 = FUN_016e5e90();
      if (((uVar9 & 1) != 0) && (lVar18 = lVar19 + 0xaf90, (*(byte *)(lVar19 + 0xaf8b) & 0xfe) != 0)
         ) {
        lVar18 = lVar19;
      }
    }
  }
  else {
    lVar18 = lVar19 + (ulong)*(byte *)(lVar19 + 0xaf88) * 0x11f8 + 0x1fc8;
  }
  psVar10 = (short *)FUN_026e85f0(lVar18);
  sStack_5e = psVar10[1];
  sVar2 = *psVar10;
  uStack_5c = *(undefined4 *)(psVar10 + 2);
  local_60 = sVar2;
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0xd0) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar7 + 0xd0) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  puVar17 = PTR_DAT_04bb43c0;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_60);
  lVar7 = *(long *)puVar17;
  if (lVar7 == 0) goto LAB_02402fb4;
  lVar19 = *(long *)(lVar19 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
  if ((*(uint *)(lVar19 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02402fb4;
  if (sVar2 == -2) {
LAB_02402fa0:
    uVar13 = 1;
    puVar17 = (undefined *)CONCAT44(uStack_5c,CONCAT22(sStack_5e,local_60));
    lVar7 = 1;
  }
  else {
    uVar4 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar17 != 0) {
      lVar19 = *(long *)(lVar7 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) goto LAB_02402fa0;
    }
    uVar13 = 0;
  }
  uVar16 = 0x146;
  if ((uVar6 & 1) == 0) {
    uVar16 = 0x106;
  }
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  uStack_98 = 0xf6;
  uStack_97 = 0x51;
  uStack_96 = 0x40e;
  local_94 = 0;
  iVar5 = FUN_02743000(&local_a0);
  if ((iVar5 == 0) || (DAT_0540762c < 0)) {
    uVar3 = uVar16 | 0x80;
    if ((*(byte *)(*(long *)PTR_DAT_04bb3968 + 0xd60) & 2) != 0) {
      uVar3 = uVar16;
    }
    uVar16 = uVar3;
  }
  *(undefined4 *)(param_1 + 0x19d6) = 0;
  *(undefined **)(param_1 + 0x1980) = puVar17;
  *(char *)(param_1 + 0x1988) = (char)lVar7;
  *(undefined1 *)(param_1 + 0x19c8) = uVar13;
  *(ushort *)(param_1 + 0x19d4) = uVar16;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(ulong *)(param_1 + 0x19c0) = CONCAT71(uStack_68,local_69);
  *(undefined8 *)(param_1 + 0x19a9) = local_80;
  *(undefined8 *)(param_1 + 0x19b1) = uStack_78;
  *(ulong *)(param_1 + 0x19b9) = CONCAT17(local_69,uStack_70);
  *(undefined **)(param_1 + 0x1989) = local_a0;
  *(ulong *)(param_1 + 0x1991) =
       CONCAT44(local_94,CONCAT22(uStack_96,CONCAT11(uStack_97,uStack_98)));
  *(undefined8 *)(param_1 + 0x1999) = local_90;
  *(undefined8 *)(param_1 + 0x19a1) = uStack_88;
  *(uint *)(param_1 + 0x19d0) = CONCAT31(uStack_a8,uStack_ac._3_1_);
  *(ulong *)(param_1 + 0x19c9) = (ulong)uStack_ac << 0x20;
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) != 1) {
    *(ushort *)(param_1 + 0x19d4) = *(ushort *)(param_1 + 0x19d4) & 0xfffd;
  }
  local_54 = 0x26;
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar7 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar7 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar7,0x26);
  *(undefined8 *)(param_1 + 0x1fc0) = 0;
  *(undefined2 *)(param_1 + 0x1fcc) = 0x100;
  *(undefined4 *)(param_1 + 0x1fc8) = 0x3c;
  return;
}

