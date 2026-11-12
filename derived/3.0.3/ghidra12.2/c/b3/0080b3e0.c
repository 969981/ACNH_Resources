
void FUN_0080b3e0(ushort *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined *local_1bd8;
  undefined1 *puStack_1bd0;
  undefined *local_1bc8;
  char *pcStack_1bc0;
  undefined *local_1bb8;
  undefined1 *local_1bb0;
  undefined4 local_1ba8;
  undefined1 local_1ba4 [31];
  undefined1 local_1b85;
  undefined8 local_1b80;
  undefined8 uStack_1b78;
  undefined8 local_1b70;
  undefined *local_1b68;
  undefined8 local_1b48;
  undefined8 uStack_1b40;
  undefined *local_1b38;
  undefined8 local_1b18;
  undefined8 uStack_1b10;
  undefined *local_1b08;
  undefined8 local_1ae8;
  undefined8 uStack_1ae0;
  undefined *local_1ad8;
  undefined8 local_1ab8;
  undefined8 uStack_1ab0;
  undefined *local_1aa8;
  undefined8 local_1a88;
  undefined8 uStack_1a80;
  undefined *local_1a78;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined *local_1a48;
  undefined8 local_1a28;
  undefined8 uStack_1a20;
  undefined *local_1a18;
  undefined8 local_19f8;
  undefined8 uStack_19f0;
  undefined *local_19e8;
  undefined8 local_19c8;
  undefined8 local_19c0;
  undefined *local_19b8;
  undefined4 local_1998;
  undefined8 local_1990;
  undefined8 local_1988;
  undefined4 local_1980;
  undefined2 local_197c;
  undefined *local_1978;
  undefined8 local_1970;
  undefined8 local_1968;
  undefined8 local_1960;
  undefined8 local_1958;
  undefined1 local_1950;
  undefined4 local_194c;
  undefined **local_1948;
  undefined1 *local_1940;
  undefined4 local_1938;
  undefined1 local_1934;
  undefined8 local_1930;
  undefined8 local_1928;
  undefined4 local_1920;
  undefined *local_1918;
  undefined1 *local_1910;
  undefined4 local_1908;
  undefined1 local_1904 [63];
  undefined1 local_18c5;
  undefined *local_18c0;
  undefined1 *local_18b8;
  undefined4 local_18b0;
  undefined1 local_18ac [63];
  undefined1 local_186d;
  undefined1 local_1868 [8];
  undefined8 local_1860;
  undefined8 local_1858;
  undefined8 local_1850;
  undefined8 local_1848;
  undefined8 local_1840;
  undefined8 local_1838;
  undefined8 local_1830;
  undefined **local_1828;
  undefined8 *local_1820;
  undefined4 local_1818;
  undefined1 local_1814;
  undefined8 local_1810;
  undefined8 local_1808;
  undefined4 local_1800;
  undefined *local_17f8;
  undefined1 *local_17f0;
  undefined4 local_17e8;
  undefined1 local_17e4 [63];
  undefined1 local_17a5;
  undefined *local_17a0;
  undefined1 *local_1798;
  undefined4 local_1790;
  undefined1 local_178c [63];
  undefined1 local_174d;
  undefined8 local_1748;
  undefined8 local_1740;
  undefined8 local_1738;
  undefined8 local_1730;
  undefined8 local_1728;
  undefined8 local_1720;
  undefined8 local_1718;
  undefined8 local_1710;
  undefined1 auStack_1708 [6];
  undefined1 auStack_1702 [2];
  uint local_1700 [2];
  long local_16f8;
  long local_16f0;
  
  puVar1 = PTR_DAT_04bb3128;
  uVar5 = *param_1;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar6 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar12 = 0;
    do {
      if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar12 * 4) == (uint)(uVar5 >> 0xb))
      goto LAB_0080b45c;
      uVar12 = uVar12 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar12);
  }
  uVar12 = 0;
LAB_0080b45c:
  local_1700[0] = (uint)uVar12;
  if (((*puVar1 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar2 = local_1700[0];
  if (*(uint *)puVar6 <= local_1700[0]) {
    uVar2 = 0;
  }
  if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar2 * 4) != 3) {
    return;
  }
  if ((*param_1 & 0x78) != 0) {
    return;
  }
  FUN_007ef010(auStack_1702,param_1);
  FUN_007e4920(local_1700,auStack_1702);
  if ((short)local_1700[0] == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  if (local_16f0 == 0 && local_16f8 == 0) {
    return;
  }
  if (local_16f0 == 0) goto LAB_0080b56c;
  lVar13 = *(long *)(local_16f0 + 0x28);
  if (lVar13 == 0) {
    FUN_027c1eb0(*(long *)(local_16f0 + 0x10) + *(long *)(local_16f0 + 8));
    goto LAB_0080b56c;
  }
  if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
    uVar12 = 0;
LAB_0080b518:
    plVar9 = *(long **)(lVar13 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_1b80 = *(undefined **)(local_16f0 + 8);
      uStack_1b78 = *(undefined8 *)(local_16f0 + 0x10);
      local_1b70 = 0x8a8;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_1b80);
    }
  }
  else {
    uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
    lVar13 = *(long *)(local_16f0 + 0x28);
    uVar12 = uVar12 & 0xffffffff;
    if (lVar13 != 0) goto LAB_0080b518;
  }
  FUN_027c1eb0(*(long *)(local_16f0 + 0x10) + *(long *)(local_16f0 + 8));
  if ((((uVar12 & 1) != 0) && (*(long *)(local_16f0 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(local_16f0 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar10)();
  }
LAB_0080b56c:
  FUN_007e8cf0(local_1700,0,0);
  puVar15 = (undefined4 *)(&PTR_DAT_04917390)[(ulong)*param_1 & 0x7f];
  FUN_007e6c10(local_1700,*puVar15);
  FUN_007e64e0(local_1700,&DAT_04ccacd8);
  iVar8 = FUN_007e6aa0(local_1700);
  if (iVar8 != 0) {
    uVar12 = 0;
    lVar13 = (long)puVar15 + 0x31;
    do {
      iVar8 = FUN_007e6760(local_1700);
      if (iVar8 != 0) {
        uVar14 = 0;
        do {
          FUN_007e70d0(local_1700,uVar14 & 0xffffffff,uVar12 & 0xffffffff,
                       *(undefined1 *)(lVar13 + uVar14));
          uVar14 = uVar14 + 1;
          uVar11 = FUN_007e6760(local_1700);
        } while (uVar14 < (uVar11 & 0xffffffff));
      }
      uVar12 = uVar12 + 1;
      uVar14 = FUN_007e6aa0(local_1700);
      lVar13 = lVar13 + 0x40;
    } while (uVar12 < (uVar14 & 0xffffffff));
  }
  uVar7 = local_1b80;
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 6),0xff);
  local_1b80._4_4_ = SUB84(uVar7,4);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)(puVar15 + 1),
                CONCAT12(*(undefined1 *)((long)puVar15 + 5),(undefined2)local_1b80));
  FUN_007e7690(local_1700,0,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 9),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 7),
                CONCAT12(*(undefined1 *)(puVar15 + 2),(undefined2)local_1b80));
  FUN_007e7690(local_1700,1,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)(puVar15 + 3),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 10),
                CONCAT12(*(undefined1 *)((long)puVar15 + 0xb),(undefined2)local_1b80));
  FUN_007e7690(local_1700,2,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 0xf),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 0xd),
                CONCAT12(*(undefined1 *)((long)puVar15 + 0xe),(undefined2)local_1b80));
  FUN_007e7690(local_1700,3,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 0x12),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)(puVar15 + 4),
                CONCAT12(*(undefined1 *)((long)puVar15 + 0x11),(undefined2)local_1b80));
  FUN_007e7690(local_1700,4,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 0x15),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 0x13),
                CONCAT12(*(undefined1 *)(puVar15 + 5),(undefined2)local_1b80));
  FUN_007e7690(local_1700,5,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)(puVar15 + 6),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 0x16),
                CONCAT12(*(undefined1 *)((long)puVar15 + 0x17),(undefined2)local_1b80));
  FUN_007e7690(local_1700,6,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 0x1b),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 0x19),
                CONCAT12(*(undefined1 *)((long)puVar15 + 0x1a),(undefined2)local_1b80));
  FUN_007e7690(local_1700,7,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 0x1e),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)(puVar15 + 7),
                CONCAT12(*(undefined1 *)((long)puVar15 + 0x1d),(undefined2)local_1b80));
  FUN_007e7690(local_1700,8,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 0x21),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 0x1f),
                CONCAT12(*(undefined1 *)(puVar15 + 8),(undefined2)local_1b80));
  FUN_007e7690(local_1700,9,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)(puVar15 + 9),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 0x22),
                CONCAT12(*(undefined1 *)((long)puVar15 + 0x23),(undefined2)local_1b80));
  FUN_007e7690(local_1700,10,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 0x27),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 0x25),
                CONCAT12(*(undefined1 *)((long)puVar15 + 0x26),(undefined2)local_1b80));
  FUN_007e7690(local_1700,0xb,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 0x2a),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)(puVar15 + 10),
                CONCAT12(*(undefined1 *)((long)puVar15 + 0x29),(undefined2)local_1b80));
  FUN_007e7690(local_1700,0xc,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)((long)puVar15 + 0x2d),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 0x2b),
                CONCAT12(*(undefined1 *)(puVar15 + 0xb),(undefined2)local_1b80));
  FUN_007e7690(local_1700,0xd,&local_1b80);
  local_1b80._0_2_ = CONCAT11(*(undefined1 *)(puVar15 + 0xc),0xff);
  local_1b80._0_4_ =
       CONCAT13(*(undefined1 *)((long)puVar15 + 0x2e),
                CONCAT12(*(undefined1 *)((long)puVar15 + 0x2f),(undefined2)local_1b80));
  FUN_007e7690(local_1700,0xe,&local_1b80);
  local_1814 = 0;
  local_1818 = 0x20;
  local_1810 = 0xffffffff;
  local_1808 = 0xffffffff00000000;
  local_17f0 = local_17e4;
  local_1820 = &local_1748;
  local_1800 = 0xffffffff;
  local_17e8 = 0x40;
  local_17a5 = 0;
  local_1918 = PTR_DAT_04bb2bc0 + 0x10;
  local_1798 = local_178c;
  puVar3 = auStack_1708;
  if (auStack_1708 <= (undefined1 *)((long)&local_1748 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_1748 + 2U);
  }
  local_17e4[0] = 0;
  local_1790 = 0x40;
  local_174d = 0;
  local_178c[0] = 0;
  local_1828 = &PTR_LAB_049173e0;
  local_1710 = 0;
  local_1718 = 0;
  local_1720 = 0;
  local_1728 = 0;
  local_1730 = 0;
  local_1738 = 0;
  local_1740 = 0;
  local_1748 = 0;
  local_17f8 = local_1918;
  local_17a0 = local_1918;
  memset(local_1820,0,(size_t)(puVar3 + (-0xe0 - (long)&local_1828)));
  local_1938 = 0x20;
  local_1910 = local_1904;
  local_1934 = 0;
  local_18b8 = local_18ac;
  local_1940 = local_1868;
  local_1930 = 0xffffffff;
  pppuVar4 = &local_1828;
  if (&local_1828 <= local_1868 + 2) {
    pppuVar4 = (undefined ***)(local_1868 + 2);
  }
  local_1928 = 0xffffffff00000000;
  local_1920 = 0xffffffff;
  local_1908 = 0x40;
  local_18c5 = 0;
  local_1904[0] = 0;
  local_18b0 = 0x40;
  local_186d = 0;
  local_18ac[0] = 0;
  local_1948 = &PTR_LAB_049173e0;
  local_1830 = 0;
  local_1838 = 0;
  local_1840 = 0;
  local_1848 = 0;
  local_1850 = 0;
  local_1858 = 0;
  local_1860 = 0;
  local_1868 = (undefined1  [8])0x0;
  local_18c0 = local_1918;
  memset(local_1940,0,(size_t)((long)pppuVar4 + (-0xe0 - (long)&local_1948)));
  memset(&uStack_1b78,0,0x1e0);
  local_1b48 = 0;
  uStack_1b40 = 0;
  local_1b18 = 0;
  uStack_1b10 = 0;
  local_1b68 = PTR_DAT_04bb2d80 + 0x10;
  local_19c8 = 0;
  local_1ae8 = 0;
  uStack_1ae0 = 0;
  local_19c0 = 0;
  local_1998 = 0xffffffff;
  local_1990 = 0;
  local_1988 = 0;
  local_1980 = 0;
  local_1ab8 = 0;
  uStack_1ab0 = 0;
  local_1a88 = 0;
  uStack_1a80 = 0;
  local_1a58 = 0;
  uStack_1a50 = 0;
  local_1a28 = 0;
  uStack_1a20 = 0;
  local_19f8 = 0;
  uStack_19f0 = 0;
  local_1b80 = PTR_DAT_04bb2d58 + 0x10;
  local_197c = 0;
  local_1978 = PTR_DAT_04bb2e08 + 0x10;
  local_1970 = 0;
  local_1968 = 0;
  local_1960 = 0;
  local_1958 = 0;
  local_1bb0 = local_1ba4;
  local_1950 = 1;
  local_194c = 0;
  local_1ba8 = 0x20;
  local_1b85 = 0;
  local_1ba4[0] = 0;
  local_1bb8 = PTR_DAT_04bb2028 + 0x10;
  local_1b38 = local_1b68;
  local_1b08 = local_1b68;
  local_1ad8 = local_1b68;
  local_1aa8 = local_1b68;
  local_1a78 = local_1b68;
  local_1a48 = local_1b68;
  local_1a18 = local_1b68;
  local_19e8 = local_1b68;
  local_19b8 = local_1b68;
  FUN_038d1270(&local_1bb8,&DAT_0405bf91,(*param_1 & 0x7f) + 0xc9);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_1bc0 = "STR_MydesignDefaultName";
  local_1bc8 = puVar1;
  (**(code **)(local_1bb8 + 0x18))(&local_1bb8);
  puStack_1bd0 = local_1bb0;
  local_1bd8 = puVar1;
  FUN_006f50a0(&local_1828,&local_1bc8,&local_1bd8,0);
  FUN_006f2100(&local_1b80,&local_1948,&local_1828);
  FUN_007e5fd0(local_1700,&local_1948);
  FUN_007e7b10(local_1700);
  return;
}

