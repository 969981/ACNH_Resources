
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_006bb7d0(undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar23 = param_2._8_8_;
  uVar15 = param_2._0_8_;
  uVar16 = param_1._8_8_;
  uVar13 = param_1._0_8_;
  uVar14 = uVar16 & 0x7fffffffffffffff;
  uVar12 = uVar23 & 0x7fffffffffffffff;
  if ((uVar14 + 0x8001000000000000 < 0x8001000000000001 && !CARRY8(uVar14 - 1,(ulong)(uVar13 != 0)))
     || (0x7ffeffffffffffff < ~(uVar12 + 0x8001000000000000) ||
         CARRY8(~(uVar12 + 0x8001000000000000) + 0x8001000000000000,(ulong)(uVar15 == 0)))) {
    if (0x7fff000000000000 < uVar14 || CARRY8(uVar14 + 0x8000ffffffffffff,(ulong)(uVar13 != 0))) {
      uVar11 = uVar13;
      uVar21 = uVar16 | 0x800000000000;
LAB_006bb918:
      auVar24._8_8_ = uVar21;
      auVar24._0_8_ = uVar11;
      return auVar24;
    }
    if (0x7fff000000000000 < uVar12 || CARRY8(uVar12 + 0x8000ffffffffffff,(ulong)(uVar15 != 0))) {
      auVar3._8_8_ = uVar23 | 0x800000000000;
      auVar3._0_8_ = uVar15;
      return auVar3;
    }
    if (uVar13 == 0 && uVar14 == 0x7fff000000000000) {
      if (uVar15 == uVar13 && (uVar23 ^ uVar16) == 0x8000000000000000) {
        uVar13 = _DAT_04102a10;
        uVar16 = _UNK_04102a18;
      }
      auVar26._8_8_ = uVar16;
      auVar26._0_8_ = uVar13;
      return auVar26;
    }
    uVar11 = uVar15;
    uVar21 = uVar23;
    if (uVar15 == 0 && uVar12 == 0x7fff000000000000) goto LAB_006bb918;
    if (uVar13 == 0 && uVar14 == 0) {
      if (uVar15 == 0 && uVar12 == 0) {
        auVar4._8_8_ = uVar23 & uVar16;
        auVar4._0_8_ = uVar15 & uVar13;
        return auVar4;
      }
      goto LAB_006bb918;
    }
    uVar11 = uVar13;
    uVar21 = uVar16;
    if (uVar15 == 0 && uVar12 == 0) goto LAB_006bb918;
  }
  uVar11 = uVar16;
  uVar21 = uVar15;
  if (CARRY8(uVar14,~uVar12) || CARRY8(uVar14 + ~uVar12,(ulong)(uVar15 <= uVar13))) {
    uVar11 = uVar23;
    uVar23 = uVar16;
    uVar21 = uVar13;
    uVar13 = uVar15;
  }
  uVar16 = uVar23 & 0xffffffffffff;
  uVar12 = uVar23 >> 0x30 & 0x7fff;
  uVar17 = (ushort)(uVar11 >> 0x30) & 0x7fff;
  if ((int)uVar12 == 0) {
    uVar14 = uVar21 >> 1;
    uVar12 = uVar21;
    if (uVar16 != 0) {
      uVar12 = uVar16;
    }
    iVar9 = (int)LZCOUNT(uVar12) + (uint)(uVar16 == 0) * 0x40;
    uVar1 = iVar9 - 0xf;
    uVar15 = uVar16 << ((ulong)uVar1 & 0x3f);
    uVar12 = uVar21 << ((ulong)uVar1 & 0x3f);
    uVar16 = uVar12;
    uVar21 = 0;
    if ((uVar1 & 0x40) == 0) {
      uVar16 = uVar15 | uVar14 >> ((ulong)~uVar1 & 0x3f);
      uVar21 = uVar12;
    }
    uVar12 = (ulong)(0x10 - iVar9);
  }
  uVar14 = uVar11 & 0xffffffffffff;
  if ((uVar11 & 0x7fff000000000000) == 0) {
    uVar15 = uVar11 & 0xffffffffffff;
    uVar18 = uVar13 >> 1;
    uVar14 = uVar13;
    if (uVar15 != 0) {
      uVar14 = uVar15;
    }
    iVar9 = (int)LZCOUNT(uVar14) + (uint)(uVar15 == 0) * 0x40;
    uVar17 = iVar9 - 0xf;
    uVar20 = uVar13 << ((ulong)uVar17 & 0x3f);
    uVar14 = uVar20;
    uVar13 = 0;
    if ((uVar17 & 0x40) == 0) {
      uVar14 = uVar15 << ((ulong)uVar17 & 0x3f) | uVar18 >> ((ulong)~uVar17 & 0x3f);
      uVar13 = uVar20;
    }
    uVar17 = 0x10 - iVar9;
  }
  uVar20 = uVar21 >> 0x3d | uVar16 << 3;
  iVar9 = (int)uVar12;
  uVar17 = iVar9 - uVar17;
  uVar18 = (ulong)uVar17;
  uVar15 = uVar13 << 3;
  uVar16 = uVar13 >> 0x3d | uVar14 << 3 | 0x8000000000000;
  if (uVar17 == 0) {
LAB_006bb8cc:
    if (-1 < (long)(uVar23 ^ uVar11)) goto LAB_006bb8d8;
LAB_006bba10:
    uVar21 = uVar21 * 8;
    uVar20 = uVar20 | 0x8000000000000;
    uVar13 = uVar21 - uVar15;
    uVar14 = uVar20 - (uVar16 + (uVar21 < uVar15));
    if (uVar20 == uVar16 && uVar21 == uVar15) {
      auVar25._8_8_ = _UNK_041027b8;
      auVar25._0_8_ = _DAT_041027b0;
      return auVar25;
    }
    if (uVar14 >> 0x33 == 0) {
      uVar15 = uVar13 >> 1;
      uVar16 = uVar13;
      if (uVar14 != 0) {
        uVar16 = uVar14;
      }
      uVar17 = ((int)LZCOUNT(uVar16) + (uint)(uVar14 == 0) * 0x40) - 0xc;
      bVar8 = (uVar17 & 0x40) == 0;
      uVar12 = (ulong)(iVar9 - uVar17);
      uVar16 = uVar14 << ((ulong)uVar17 & 0x3f);
      uVar14 = uVar13 << ((ulong)uVar17 & 0x3f);
      uVar13 = 0;
      if (bVar8) {
        uVar13 = uVar14;
      }
      if (bVar8) {
        uVar14 = uVar16 | uVar15 >> ((ulong)~uVar17 & 0x3f);
      }
    }
  }
  else {
    if (uVar17 < 0x80) {
      uVar22 = 0x80 - uVar18;
      uVar10 = uVar15 << (uVar22 & 0x3f);
      uVar14 = uVar10;
      uVar2 = 0;
      if ((uVar22 & 0x40) == 0) {
        uVar14 = uVar16 << (uVar22 & 0x3f) |
                 ((uVar13 & 0x1fffffffffffffff) << 2) >> ((ulong)~(uint)uVar22 & 0x3f);
        uVar2 = uVar10;
      }
      bVar8 = (uVar17 & 0x40) == 0;
      uVar10 = uVar16 >> (uVar18 & 0x3f);
      uVar13 = uVar10;
      if (bVar8) {
        uVar13 = (uVar16 << 1) << ((ulong)~uVar17 & 0x3f) | uVar15 >> (uVar18 & 0x3f);
      }
      uVar16 = 0;
      if (bVar8) {
        uVar16 = uVar10;
      }
      uVar15 = uVar13 | (uVar2 != 0 || uVar14 != 0);
      goto LAB_006bb8cc;
    }
    uVar16 = 0;
    uVar15 = 1;
    if ((long)(uVar23 ^ uVar11) < 0) goto LAB_006bba10;
LAB_006bb8d8:
    uVar13 = uVar15 + uVar21 * 8;
    uVar14 = uVar16 + (uVar20 | 0x8000000000000) + (ulong)CARRY8(uVar15,uVar21 * 8);
    if ((uVar14 >> 0x34 & 1) != 0) {
      uVar16 = uVar14 << 0x3f;
      uVar12 = (ulong)(iVar9 + 1);
      uVar14 = uVar14 >> 1;
      uVar13 = uVar13 >> 1 | uVar16 | uVar15 & 1;
    }
  }
  uVar23 = uVar23 & 0x8000000000000000;
  iVar9 = (int)uVar12;
  if (0x7ffe < iVar9) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar23 | 0x7fff000000000000;
    return auVar6 << 0x40;
  }
  if (iVar9 < 1) {
    uVar17 = 1 - iVar9;
    uVar15 = (ulong)uVar17;
    lVar19 = uVar14 << 1;
    uVar11 = 0x80 - uVar15;
    uVar21 = uVar13 << (uVar11 & 0x3f);
    uVar16 = uVar21;
    uVar12 = 0;
    if ((uVar11 & 0x40) == 0) {
      uVar16 = uVar14 << (uVar11 & 0x3f) | (uVar13 >> 1) >> ((ulong)~(uint)uVar11 & 0x3f);
      uVar12 = uVar21;
    }
    uVar21 = uVar14 >> (uVar15 & 0x3f);
    uVar11 = uVar21;
    uVar14 = 0;
    if ((uVar17 & 0x40) == 0) {
      uVar11 = lVar19 << ((ulong)~uVar17 & 0x3f) | uVar13 >> (uVar15 & 0x3f);
      uVar14 = uVar21;
    }
    uVar13 = uVar11 | (uVar12 != 0 || uVar16 != 0);
    uVar12 = 0;
  }
  uVar17 = (uint)uVar13 & 7;
  uVar16 = uVar13 >> 3 | uVar14 << 0x3d;
  uVar12 = uVar14 >> 3 & 0xffffffffffff | uVar12 << 0x30 | uVar23;
  iVar9 = FUN_006bbc80();
  if (iVar9 == 2) {
    bVar8 = uVar23 != 0 || (uVar13 & 7) == 0;
LAB_006bbc10:
    bVar7 = CARRY8(uVar16,(ulong)!bVar8);
    uVar16 = uVar16 + !bVar8;
    if (bVar7) {
      uVar12 = uVar12 + 1;
    }
LAB_006bbc1c:
    if ((uVar13 & 7) == 0) goto LAB_006bbc24;
  }
  else {
    if (iVar9 == 1) {
      bVar8 = true;
      if (uVar23 != 0) {
        bVar8 = (uVar13 & 7) == 0;
      }
      goto LAB_006bbc10;
    }
    if (iVar9 != 0) goto LAB_006bbc1c;
    uVar23 = (ulong)(4 < uVar17);
    bVar8 = CARRY8(uVar16,uVar23);
    uVar16 = uVar16 + uVar23;
    if (bVar8) {
      uVar12 = uVar12 + 1;
    }
    if (uVar17 != 4) goto LAB_006bbc1c;
    bVar8 = CARRY8(uVar16 & 1,uVar16);
    uVar16 = (uVar16 & 1) + uVar16;
    if (bVar8) {
      uVar12 = uVar12 + 1;
    }
  }
  FUN_006bbcb0();
LAB_006bbc24:
  auVar5._8_8_ = uVar12;
  auVar5._0_8_ = uVar16;
  return auVar5;
}

