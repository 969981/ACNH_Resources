
void FUN_0205d4f0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  byte *pbVar28;
  ushort uVar29;
  byte bVar30;
  uint uVar31;
  long *plVar32;
  undefined *puVar33;
  long lVar34;
  ulong uVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  uint local_78;
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  lVar37 = **(long **)PTR_DAT_04bb27d0;
  bVar30 = *(byte *)(lVar37 + 0x473);
  if ((long)(char)bVar30 != 0xffffffffffffffff) {
    pbVar28 = (byte *)(lVar37 + 0x48) + ((long)(char)bVar30 & 0xffffffffU) * 0x80;
    if (7 < bVar30) {
      pbVar28 = (byte *)(lVar37 + 0x48);
    }
    if (((*pbVar28 >> 3 & 1) != 0) && (*(byte *)(lVar37 + 0x472) != bVar30)) {
      return;
    }
  }
  FUN_02507c6c(local_6c,7,1,0,0);
  puVar33 = PTR_DAT_04bb5038;
  uVar39 = 0;
  uVar36 = (uint)local_6c[0];
  local_74 = local_68;
  bVar30 = 0xff;
  if (local_6c[0] < 8) {
    bVar30 = local_6c[0];
  }
  local_78 = CONCAT31(local_78._1_3_,bVar30);
  local_70 = local_64;
  if (local_6c[0] < 8) {
    uVar39 = 0;
    while( true ) {
      uVar38 = (ulong)uVar36;
      uVar39 = uVar39 | 1 << (ulong)(uVar36 & 0x1f) & 0xffffU;
      do {
        if (uVar38 == 7) goto LAB_0205d5a0;
        uVar38 = uVar38 + 1;
        uVar35 = FUN_02507924(&local_78,puVar33 + uVar38);
      } while ((uVar35 & 1) == 0);
      bVar30 = puVar33[uVar38];
      uVar36 = (uint)bVar30;
      if (7 < uVar36) break;
      local_78 = CONCAT31(local_78._1_3_,bVar30);
    }
  }
LAB_0205d5a0:
  lVar37 = 0;
  uVar38 = 0;
  do {
    lVar1 = param_1 + lVar37;
    if (*(int *)(lVar1 + 0x90) - 4U < 3) {
      uVar29 = *(ushort *)(lVar1 + 0xc0);
      uVar31 = uVar29 | uVar39;
      uVar36 = (uint)uVar29 | (uint)((uVar31 & 1) == 0);
      if ((uVar31 & 2) == 0) {
        uVar36 = uVar36 | 2;
      }
      uVar2 = (uVar36 | uVar39) & 4;
      uVar16 = uVar36;
      if (uVar2 == 0) {
        uVar16 = uVar36 | 4;
      }
      uVar3 = (uVar16 | uVar39) & 8;
      uVar17 = uVar16;
      if (uVar3 == 0) {
        uVar17 = uVar16 | 8;
      }
      uVar4 = (uVar17 | uVar39) & 0x10;
      uVar18 = uVar17;
      if (uVar4 == 0) {
        uVar18 = uVar17 | 0x10;
      }
      uVar5 = (uVar18 | uVar39) & 0x20;
      uVar19 = uVar18;
      if (uVar5 == 0) {
        uVar19 = uVar18 | 0x20;
      }
      uVar6 = (uVar19 | uVar39) & 0x40;
      uVar20 = uVar19;
      if (uVar6 == 0) {
        uVar20 = uVar19 | 0x40;
      }
      uVar7 = (uVar20 | uVar39) & 0x80;
      uVar21 = uVar20;
      if (uVar7 == 0) {
        uVar21 = uVar20 | 0x80;
      }
      uVar8 = (uVar21 | uVar39) & 0x100;
      uVar22 = uVar21;
      if (uVar8 == 0) {
        uVar22 = uVar21 | 0x100;
      }
      uVar9 = (uVar22 | uVar39) & 0x200;
      uVar23 = uVar22;
      if (uVar9 == 0) {
        uVar23 = uVar22 | 0x200;
      }
      uVar10 = (uVar23 | uVar39) & 0x400;
      uVar24 = uVar23;
      if (uVar10 == 0) {
        uVar24 = uVar23 | 0x400;
      }
      uVar11 = (uVar24 | uVar39) & 0x800;
      uVar25 = uVar24;
      if (uVar11 == 0) {
        uVar25 = uVar24 | 0x800;
      }
      uVar12 = (uVar25 | uVar39) & 0x1000;
      uVar26 = uVar25;
      if (uVar12 == 0) {
        uVar26 = uVar25 | 0x1000;
      }
      uVar13 = (uVar26 | uVar39) & 0x2000;
      uVar27 = uVar26;
      if (uVar13 == 0) {
        uVar27 = uVar26 | 0x2000;
      }
      uVar14 = (uVar27 | uVar39) & 0x4000;
      uVar15 = (ushort)uVar27;
      if (uVar14 == 0) {
        uVar15 = (ushort)uVar27 | 0x4000;
      }
      if ((((((uVar31 & 1) == 0) || ((uVar31 & 2) == 0)) || (uVar2 == 0)) ||
          (((uVar3 == 0 || (uVar4 == 0)) || ((uVar5 == 0 || ((uVar6 == 0 || (uVar7 == 0)))))))) ||
         ((uVar8 == 0 ||
          (((((uVar9 == 0 || (uVar10 == 0)) || (uVar11 == 0)) || ((uVar12 == 0 || (uVar13 == 0))))
           || (uVar14 == 0)))))) {
        *(ushort *)(lVar1 + 0xc0) = uVar15;
      }
      plVar32 = (long *)PTR_DAT_04bb4760;
      if (-1 < (short)uVar15) {
        if (uVar39 >> 0xf != 0) goto LAB_0205d6f0;
        *(ushort *)(lVar1 + 0xc0) = uVar15 | 0x8000;
        plVar32 = (long *)PTR_DAT_04bb4760;
      }
      PTR_DAT_04bb4760 = (undefined *)plVar32;
      if ((((uint)((uVar39 & 0x4000) == 0) | uVar27 >> 0xe) &
           ((uint)((uVar39 & 0x2000) == 0) | (uVar26 & 0x2000) >> 0xd) &
           ((uint)((uVar39 & 0x1000) == 0) | uVar25 >> 0xc) &
           ((uint)((uVar39 & 0x800) == 0) | uVar24 >> 0xb) &
          ((uint)((uVar39 & 0x400) == 0) | (uVar23 & 0x400) >> 10) &
          ((uint)((uVar39 & 0x200) == 0) | uVar22 >> 9) &
          ((uint)((uVar39 & 0x100) == 0) | uVar21 >> 8) &
          ((uint)((uVar39 & 0x80) == 0) | (uVar20 & 0x80) >> 7) &
          ((uint)((uVar39 & 0x40) == 0) | uVar19 >> 6) &
          ((uint)((uVar39 & 0x20) == 0) | uVar18 >> 5) &
          ((uint)((uVar39 & 0x10) == 0) | (uVar17 & 0x10) >> 4) &
          ((uint)((uVar39 & 8) == 0) | uVar16 >> 3) & ((uint)((uVar39 & 4) == 0) | uVar36 >> 2) &
          ((uint)((uVar39 & 2) == 0) | (uVar29 & 2) >> 1) &
          ((uint)((uVar39 & 1) == 0) | (uint)uVar29)) != 0) {
        uVar35 = uVar38 + 0x62;
        uVar29 = *(ushort *)(lVar1 + 0x94);
        local_78 = (uint)uVar35;
        bVar30 = *PTR_DAT_04bb5018;
        lVar1 = *plVar32 + (uVar35 & 0xffffffff) * 0x15;
        if (0x6c < local_78) {
          lVar1 = *plVar32;
        }
        *(undefined1 *)(lVar1 + 4) = 0xff;
        *(byte *)(lVar1 + 7) = bVar30 >> 6 | 4;
        *(byte *)(lVar1 + 6) = bVar30 >> 6 | bVar30 << 2;
        *(byte *)(lVar1 + 5) = bVar30 << 2 | 3;
        lVar34 = *plVar32;
        *(byte *)(lVar1 + 0xb) = *(byte *)(lVar1 + 0xb) & 0x3f;
        *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) & 0xc0;
        *(byte *)(lVar1 + 0xc) = *(byte *)(lVar1 + 0xc) & 0xfc;
        FUN_020ea498(lVar34,uVar35,0,0);
        FUN_020f27f0(4,uVar29 >> 8 | uVar29 << 8,0,0,uVar38 & 0xffffffff);
      }
    }
LAB_0205d6f0:
    lVar37 = lVar37 + 0x38;
    uVar38 = uVar38 + 1;
    if (lVar37 == 0x230) {
      return;
    }
  } while( true );
}

