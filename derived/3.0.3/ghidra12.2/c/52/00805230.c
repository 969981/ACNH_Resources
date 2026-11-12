
void FUN_00805230(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  long lVar7;
  uint uVar8;
  ushort uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 auStack_1812 [2];
  undefined1 auStack_1810 [2];
  undefined1 auStack_180e [2];
  undefined1 auStack_180c [2];
  undefined1 auStack_180a [2];
  undefined1 auStack_1808 [2];
  undefined1 auStack_1806 [2];
  undefined1 auStack_1804 [2];
  undefined1 auStack_1802 [2];
  undefined1 auStack_1800 [2];
  undefined1 auStack_17fe [2];
  undefined1 auStack_17fc [2];
  undefined1 auStack_17fa [2];
  undefined1 auStack_17f8 [2];
  undefined1 auStack_17f6 [2];
  undefined1 auStack_17f4 [2];
  undefined1 auStack_17f2 [2];
  undefined4 local_17f0;
  undefined4 local_17ec;
  undefined2 local_17e8;
  undefined1 local_17e6;
  undefined1 local_17e5;
  undefined4 local_17e4;
  undefined2 local_17e0;
  undefined1 local_17de;
  undefined1 local_17dd;
  undefined4 local_17dc;
  undefined2 local_17d8;
  undefined1 local_17d6;
  undefined1 local_17d5;
  undefined4 local_17d4;
  undefined2 local_17d0;
  undefined1 local_17ce;
  undefined1 local_17cd;
  undefined4 local_17cc;
  undefined2 local_17c8;
  undefined1 local_17c6;
  undefined1 local_17c5;
  undefined4 local_17c4;
  undefined2 local_17c0;
  undefined1 local_17be;
  undefined1 local_17bd;
  undefined4 local_17bc;
  undefined2 local_17b8;
  undefined1 local_17b6;
  undefined1 local_17b5;
  undefined4 local_17b4;
  undefined2 local_17b0;
  undefined1 local_17ae;
  undefined1 local_17ad;
  undefined4 local_17ac;
  undefined4 local_17a8;
  undefined4 local_17a4;
  undefined2 local_17a0;
  undefined1 local_179e;
  undefined1 local_179d;
  undefined4 local_179c;
  undefined2 local_1798;
  undefined1 local_1796;
  undefined1 local_1795;
  undefined4 local_1794;
  undefined4 local_1790;
  undefined4 local_178c;
  undefined2 local_1788;
  undefined1 local_1786;
  undefined1 local_1785;
  undefined4 local_1784;
  undefined2 local_1780;
  undefined1 local_177e;
  undefined1 local_177d;
  undefined4 local_177c;
  undefined2 local_1778;
  undefined1 local_1776;
  undefined1 local_1775;
  undefined4 local_1774;
  undefined2 local_1770;
  undefined1 local_176e;
  undefined1 local_176d;
  undefined4 local_176c;
  undefined2 local_1768;
  undefined1 local_1766;
  undefined1 local_1765;
  undefined4 local_1764;
  ushort local_1760;
  undefined1 auStack_175e [2];
  undefined4 local_175c;
  undefined4 local_1758;
  undefined2 local_1754;
  undefined1 local_1752;
  undefined1 local_1751;
  undefined4 local_1750;
  undefined2 local_174c;
  undefined1 local_174a;
  undefined1 local_1749;
  undefined4 local_1748;
  undefined2 local_1744;
  undefined1 local_1742;
  undefined1 local_1741;
  undefined4 local_1740;
  undefined2 local_173c;
  undefined1 local_173a;
  undefined1 local_1739;
  undefined4 local_1738;
  undefined2 local_1734;
  undefined1 local_1732;
  undefined1 local_1731;
  undefined4 local_1730;
  undefined2 local_172c;
  undefined1 local_172a;
  undefined1 local_1729;
  undefined4 local_1728;
  undefined2 local_1724;
  undefined1 local_1722;
  undefined1 local_1721;
  undefined4 local_1720;
  undefined2 local_171c;
  undefined1 local_171a;
  undefined1 local_1719;
  undefined4 local_1718;
  undefined1 auStack_1712 [2];
  undefined4 local_1710;
  undefined4 uStack_170c;
  undefined1 auStack_6a [10];
  
  puVar1 = PTR_DAT_04bb37e0;
  if (DAT_053e0208 == 0) {
    return;
  }
  lVar7 = *(long *)(DAT_053e0208 + 0x175a0);
  if (lVar7 == 0) {
    return;
  }
  local_17e8 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_17e6 = PTR_DAT_04bb37e0[2];
  local_17e5 = PTR_DAT_04bb37e0[3];
  local_17f0 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_1790 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_17a8 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_17ec = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_17e4 = local_17ec;
  local_17e0 = local_17e8;
  local_17de = local_17e6;
  local_17dd = local_17e5;
  local_17dc = local_17ec;
  local_17d8 = local_17e8;
  local_17d6 = local_17e6;
  local_17d5 = local_17e5;
  local_17d4 = local_17ec;
  local_17d0 = local_17e8;
  local_17ce = local_17e6;
  local_17cd = local_17e5;
  local_17cc = local_17ec;
  local_17c8 = local_17e8;
  local_17c6 = local_17e6;
  local_17c5 = local_17e5;
  local_17c4 = local_17ec;
  local_17c0 = local_17e8;
  local_17be = local_17e6;
  local_17bd = local_17e5;
  local_17bc = local_17ec;
  local_17b8 = local_17e8;
  local_17b6 = local_17e6;
  local_17b5 = local_17e5;
  local_17b4 = local_17ec;
  local_17b0 = local_17e8;
  local_17ae = local_17e6;
  local_17ad = local_17e5;
  local_17ac = local_17ec;
  local_17a4 = local_17ec;
  local_17a0 = local_17e8;
  local_179e = local_17e6;
  local_179d = local_17e5;
  local_179c = local_17ec;
  local_1798 = local_17e8;
  local_1796 = local_17e6;
  local_1795 = local_17e5;
  local_1794 = local_17ec;
  local_178c = local_17ec;
  local_1788 = local_17e8;
  local_1786 = local_17e6;
  local_1785 = local_17e5;
  local_1784 = local_17ec;
  local_1780 = local_17e8;
  local_177e = local_17e6;
  local_177d = local_17e5;
  local_177c = local_17ec;
  local_1778 = local_17e8;
  local_1776 = local_17e6;
  local_1775 = local_17e5;
  local_1774 = local_17ec;
  local_1770 = local_17e8;
  local_176e = local_17e6;
  local_176d = local_17e5;
  local_176c = local_17ec;
  local_1768 = local_17e8;
  local_1766 = local_17e6;
  local_1765 = local_17e5;
  local_1764 = local_17ec;
  uVar2 = FUN_0211b8d0(lVar7);
  uVar4 = FUN_0211a6bc(lVar7,&local_17a8,uVar2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar2 = FUN_0211b8d0(lVar7,param_2,param_3);
  uVar4 = FUN_0211bd58(lVar7,&local_17f0,uVar2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  iVar3 = FUN_0211b8d0(lVar7,param_2,param_3);
  if (iVar3 == -1) {
    uVar8 = 0;
  }
  else {
    if (iVar3 == -2) {
      puVar5 = (uint *)(lVar7 + 0x1cc);
    }
    else {
      puVar5 = (uint *)(*(long *)(*(long *)(lVar7 + 0x1f0) + (long)iVar3 * 8) + 0x1c4);
    }
    uVar8 = *puVar5;
  }
  if (DAT_04ccbb68 == 0) {
    return;
  }
  uVar12 = (ulong)uVar8;
  uVar4 = uVar12;
  if (10 < uVar8) {
    uVar4 = 0;
  }
  if (*(long *)(DAT_04ccbb68 + uVar4 * 8) == 0) {
    return;
  }
  FUN_007ef010(auStack_17f2,param_1);
  FUN_007ef010(auStack_6a,auStack_17f2);
  uVar4 = FUN_00803770(auStack_6a,param_2,param_3);
  if ((((uVar4 & 1) == 0) || (DAT_053e0208 == 0)) ||
     (lVar10 = *(long *)(DAT_053e0208 + 0x175a0), lVar10 == 0)) {
LAB_008056b4:
    FUN_007ef010(auStack_17f4,param_1);
    uVar4 = FUN_00803770(auStack_17f4,param_2,param_3);
    if ((uVar4 & 1) != 0) {
      FUN_007ef010(auStack_17f6,param_1);
      FUN_02656c40(auStack_6a,uVar8,auStack_17f6);
      FUN_007ef010(auStack_17f8,auStack_6a);
      FUN_007e4920(&local_1710,auStack_17f8);
      FUN_007ef010(auStack_17fa,param_1);
      FUN_007e90a0(&local_1710,auStack_17fa);
      FUN_007ef010(auStack_17fc,auStack_6a);
      FUN_00805ba8(&local_175c,auStack_17fc);
      local_17a8 = local_175c;
      local_17a4 = local_1758;
    }
  }
  else {
    FUN_007ef010(auStack_1712,auStack_17f2);
    FUN_007e4920(&local_1710,auStack_1712);
    local_1754 = *(undefined2 *)puVar1;
    local_1752 = puVar1[2];
    local_1751 = puVar1[3];
    local_175c = *(undefined4 *)puVar1;
    local_1758 = *(undefined4 *)(puVar1 + 4);
    local_1750 = local_1758;
    local_174c = local_1754;
    local_174a = local_1752;
    local_1749 = local_1751;
    local_1748 = local_1758;
    local_1744 = local_1754;
    local_1742 = local_1752;
    local_1741 = local_1751;
    local_1740 = local_1758;
    local_173c = local_1754;
    local_173a = local_1752;
    local_1739 = local_1751;
    local_1738 = local_1758;
    local_1734 = local_1754;
    local_1732 = local_1752;
    local_1731 = local_1751;
    local_1730 = local_1758;
    local_172c = local_1754;
    local_172a = local_1752;
    local_1729 = local_1751;
    local_1728 = local_1758;
    local_1724 = local_1754;
    local_1722 = local_1752;
    local_1721 = local_1751;
    local_1720 = local_1758;
    local_171c = local_1754;
    local_171a = local_1752;
    local_1719 = local_1751;
    local_1718 = local_1758;
    uVar2 = FUN_0211b8d0(lVar10,param_2,param_3);
    uVar4 = FUN_0211a6bc(lVar10,&local_175c,uVar2);
    if ((uVar4 & 1) == 0) goto LAB_008056b4;
    FUN_007ef010(auStack_175e,auStack_17f2);
    if (((DAT_04c8c100 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c8c100), iVar3 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar4 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar4 * 4) == 0xe) goto LAB_008055d8;
        uVar4 = uVar4 + 1;
      } while (DAT_04c8c0f0 != uVar4);
    }
    uVar4 = 0;
LAB_008055d8:
    iVar3 = FUN_0211b8d0(lVar10,param_2,param_3);
    if (iVar3 == -1) {
      uVar9 = 0;
    }
    else {
      if (iVar3 == -2) {
        puVar6 = (undefined4 *)(lVar10 + 0x1cc);
      }
      else {
        puVar6 = (undefined4 *)(*(long *)(*(long *)(lVar10 + 0x1f0) + (long)iVar3 * 8) + 0x1c4);
      }
      uVar9 = (ushort)*puVar6 & 0x7f;
    }
    local_1760 = 0;
    if (((DAT_04c8c100 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c8c100), iVar3 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar11 = (uint)uVar4;
    if (*(uint *)PTR_DAT_04bb3120 <= uVar11) {
      uVar11 = 0;
    }
    local_1760 = uVar9 | (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar11 * 4)
                                 << 0xb);
    uVar4 = FUN_00804000(auStack_175e,&local_175c,&local_1760);
    lVar10 = DAT_053f9928;
    if ((uVar4 & 1) == 0) goto LAB_008056b4;
    if (DAT_053f9928 == 0) {
LAB_00805af0:
      local_17a8 = *(undefined4 *)puVar1;
      local_17a4 = *(undefined4 *)(puVar1 + 4);
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      local_1710 = FUN_006bd550(param_2[1],0);
      lVar10 = FUN_0079e4d0(lVar10,&local_1710);
      if (lVar10 == 0) goto LAB_00805af0;
      local_17a8 = local_17f0;
      local_17a4 = local_17ec;
    }
  }
  FUN_007ef010(auStack_17fe,param_1);
  FUN_007ef010(auStack_6a,auStack_17fe);
  uVar4 = FUN_008039d0(auStack_6a,param_2,param_3);
  if ((((uVar4 & 1) == 0) || (DAT_053e0208 == 0)) ||
     (lVar10 = *(long *)(DAT_053e0208 + 0x175a0), lVar10 == 0)) {
LAB_00805970:
    FUN_007ef010(auStack_1800,param_1);
    uVar4 = FUN_008039d0(auStack_1800,param_2,param_3);
    if ((uVar4 & 1) == 0) goto LAB_008059fc;
    FUN_007ef010(auStack_1802,param_1);
    FUN_02656ad0(auStack_6a,uVar8,auStack_1802);
    FUN_007ef010(auStack_1804,auStack_6a);
    FUN_007e4920(&local_1710,auStack_1804);
    FUN_007ef010(auStack_1806,param_1);
    FUN_007e90a0(&local_1710,auStack_1806);
    FUN_007ef010(auStack_1808,auStack_6a);
    FUN_00805ba8(&local_175c,auStack_1808);
    local_1790 = local_175c;
    uStack_170c = local_1758;
  }
  else {
    FUN_007ef010(auStack_1712,auStack_17fe);
    FUN_007e4920(&local_1710,auStack_1712);
    local_1754 = *(undefined2 *)puVar1;
    local_1752 = puVar1[2];
    local_1751 = puVar1[3];
    local_175c = *(undefined4 *)puVar1;
    local_1758 = *(undefined4 *)(puVar1 + 4);
    local_1750 = local_1758;
    local_174c = local_1754;
    local_174a = local_1752;
    local_1749 = local_1751;
    local_1748 = local_1758;
    local_1744 = local_1754;
    local_1742 = local_1752;
    local_1741 = local_1751;
    local_1740 = local_1758;
    local_173c = local_1754;
    local_173a = local_1752;
    local_1739 = local_1751;
    local_1738 = local_1758;
    local_1734 = local_1754;
    local_1732 = local_1752;
    local_1731 = local_1751;
    local_1730 = local_1758;
    local_172c = local_1754;
    local_172a = local_1752;
    local_1729 = local_1751;
    local_1728 = local_1758;
    local_1724 = local_1754;
    local_1722 = local_1752;
    local_1721 = local_1751;
    local_1720 = local_1758;
    local_171c = local_1754;
    local_171a = local_1752;
    local_1719 = local_1751;
    local_1718 = local_1758;
    uVar2 = FUN_0211b8d0(lVar10,param_2,param_3);
    uVar4 = FUN_0211a6bc(lVar10,&local_175c,uVar2);
    if ((uVar4 & 1) == 0) goto LAB_00805970;
    FUN_007ef010(auStack_175e,auStack_17fe);
    if (((DAT_04c8c100 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c8c100), iVar3 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar4 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar4 * 4) == 0xf) goto LAB_008058b4;
        uVar4 = uVar4 + 1;
      } while (DAT_04c8c0f0 != uVar4);
    }
    uVar4 = 0;
LAB_008058b4:
    iVar3 = FUN_0211b8d0(lVar10,param_2,param_3);
    if (iVar3 == -1) {
      uVar9 = 0;
    }
    else {
      if (iVar3 == -2) {
        puVar6 = (undefined4 *)(lVar10 + 0x1cc);
      }
      else {
        puVar6 = (undefined4 *)(*(long *)(*(long *)(lVar10 + 0x1f0) + (long)iVar3 * 8) + 0x1c4);
      }
      uVar9 = (ushort)*puVar6 & 0x7f;
    }
    local_1760 = 0;
    if (((DAT_04c8c100 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c8c100), iVar3 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar11 = (uint)uVar4;
    if (DAT_04c8c0f0 <= uVar11) {
      uVar11 = 0;
    }
    local_1760 = uVar9 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar11 * 4) << 0xb);
    uVar4 = FUN_00804000(auStack_175e,&local_1744,&local_1760);
    if ((uVar4 & 1) == 0) goto LAB_00805970;
    uVar2 = FUN_0211b8d0(lVar7,param_2,param_3);
    FUN_0211a934(&local_1710,lVar7,uVar2);
    local_1790 = local_1710;
  }
  local_178c = uStack_170c;
LAB_008059fc:
  FUN_007ef010(auStack_180a,param_1);
  uVar4 = FUN_00803c34(auStack_180a,param_2,param_3);
  if ((uVar4 & 1) != 0) {
    if (DAT_04ccbb68 == 0) {
      return;
    }
    if (10 < uVar8) {
      uVar12 = 0;
    }
    if (*(long *)(DAT_04ccbb68 + uVar12 * 8) == 0) {
      return;
    }
    FUN_007ef010(auStack_180c,param_1);
    FUN_02656960(&local_175c,uVar8,auStack_180c);
    FUN_007ef010(auStack_180e,&local_175c);
    FUN_007e4920(&local_1710,auStack_180e);
    FUN_007ef010(auStack_1810,param_1);
    FUN_007e90a0(&local_1710,auStack_1810);
    FUN_007ef010(auStack_1812,&local_175c);
    FUN_0211bb00(lVar7,auStack_1812,param_2,param_3);
  }
  uVar2 = FUN_0211b8d0(lVar7,param_2,param_3);
  FUN_02119efc(lVar7,uVar2,&local_17a8,1);
  return;
}

