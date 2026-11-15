
void FUN_02335234(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  void *pvVar13;
  long *plVar14;
  undefined8 *puVar15;
  byte bVar16;
  uint *puVar17;
  long lVar18;
  
  FUN_016fcf10();
  *param_1 = &PTR_LAB_04a7fa68;
  FUN_02350aa0(param_1 + 0xbe8,param_2);
  FUN_02815cfc(param_1 + 0xc0b);
  puVar2 = PTR_DAT_04bb3170;
  param_1[0xfab] = 0;
  *(undefined1 *)(param_1 + 0xfac) = 0;
  uVar8 = *(undefined2 *)puVar2;
  param_1[0xfad] = 0;
  *(undefined2 *)((long)param_1 + 0x7d62) = uVar8;
  FUN_027c0ee4(param_1 + 0xfae);
  memset(param_1 + 0xfbc,0,0x230);
  param_1[0x1002] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x1002);
  param_1[0x1003] = 0xfffe;
  FUN_0277d4ac();
  FUN_02350d60(param_1 + 0x1004);
  FUN_02350ed8(param_1 + 0xbe8);
  puVar9 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x208);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar18 + 8);
    if (lVar12 != 0) {
      puVar3 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar13,1,0);
  param_1[0x17ba] = pvVar13;
  lVar18 = *(long *)puVar2;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x208);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar18 + 8);
    if (lVar12 != 0) {
      puVar3 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar13,1,0);
  param_1[0x17bb] = pvVar13;
  lVar18 = *(long *)puVar2;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x208);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar18 + 8);
    if (lVar12 != 0) {
      puVar3 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar13,1,0);
  param_1[0x17bc] = pvVar13;
  lVar18 = *(long *)puVar2;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x208);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar18 + 8);
    if (lVar12 != 0) {
      puVar3 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar13,0,0);
  param_1[0x17bd] = pvVar13;
  lVar18 = *(long *)puVar2;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x208);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar18 + 8);
    if (lVar12 != 0) {
      puVar3 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar13,0,0);
  param_1[0x17be] = pvVar13;
  lVar18 = *(long *)puVar2;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x208);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar18 + 8);
    if (lVar12 != 0) {
      puVar3 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar13,1,0);
  param_1[0x17bf] = pvVar13;
  lVar18 = *(long *)puVar2;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x208);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar18 + 8);
    if (lVar12 != 0) {
      puVar3 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar13,0,0);
  param_1[0x17c0] = pvVar13;
  lVar18 = *(long *)puVar2;
  if (lVar18 == 0) {
    pvVar13 = malloc(0x208);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar18 + 8);
    if (lVar12 != 0) {
      puVar3 = (undefined8 *)(lVar12 + 0xa8);
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  puVar3 = param_1 + 0x1827;
  FUN_0173198c(pvVar13,0,0);
  param_1[0x17c1] = pvVar13;
  lVar18 = *(long *)puVar2;
  if (lVar18 == 0) {
    puVar15 = malloc(0x188);
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar12 != 0) {
      plVar14 = (long *)(lVar12 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0x188,8);
    }
  }
  memset(puVar15 + 2,0,0x178);
  *(undefined4 *)((long)puVar15 + 0x34) = 0;
  puVar15[8] = &PTR_LAB_04a80050;
  puVar15[0xc] = &PTR_LAB_04a80078;
  *puVar15 = &PTR_LAB_04a80010;
  puVar1 = (undefined8 *)((long)puVar15 + 0xec);
  puVar15[0x16] = 0;
  puVar15[0x17] = 0x3f80000000000000;
  *(undefined4 *)(puVar15 + 1) = 0xffffffff;
  *(undefined8 *)((long)puVar15 + 0xc) = 0;
  *(undefined8 *)((long)puVar15 + 0x11) = 0;
  *(undefined1 *)((long)puVar15 + 0x8c) = 0;
  *(undefined1 *)((long)puVar15 + 0x99) = 0;
  *(undefined4 *)((long)puVar15 + 0xa4) = 0;
  *(undefined4 *)((long)puVar15 + 0xac) = 0xffffffff;
  puVar15[0x1c] = puVar1;
  *(undefined4 *)(puVar15 + 0x1d) = 0x80;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar9 = PTR_DAT_04bb2d88;
  puVar15[0x2f] = 0;
  puVar10 = PTR_DAT_04bb3870;
  *(undefined2 *)((long)puVar15 + 0x174) = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined8 *)((long)puVar15 + 0xc4) = 0;
  *(undefined8 *)((long)puVar15 + 0xcc) = 0;
  *(undefined2 *)(puVar15 + 0x30) = 0;
  *(undefined4 *)(puVar15 + 0x2e) = 7;
  puVar15[0x1b] = puVar9 + 0x10;
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x17c3) = 0;
  param_1[0x17e5] = 0;
  param_1[0x17e6] = 0;
  param_1[0x17c4] = 0;
  *(undefined1 *)((long)param_1 + 0xbe64) = 0;
  *(undefined4 *)(param_1 + 0x17c5) = 0;
  param_1[0x17c6] = puVar10 + 0x10;
  *(undefined4 *)(param_1 + 0x17cc) = 0x40;
  *(undefined1 *)((long)param_1 + 0xbea3) = 0;
  param_1[0x17c2] = puVar15;
  param_1[0x17ef] = 0;
  *(undefined1 *)(param_1 + 0x17f0) = 0;
  *(undefined8 *)((long)param_1 + 0xbf84) = 0;
  param_1[0x17f2] = 0;
  *(undefined4 *)(param_1 + 0x17f3) = 0;
  param_1[0x17f4] = puVar10 + 0x10;
  *(undefined4 *)(param_1 + 0x17fa) = 0x40;
  *(undefined1 *)((long)param_1 + 0xc013) = 0;
  *(undefined1 *)((long)param_1 + 0xbfd4) = 0;
  param_1[0x181d] = 0;
  *(undefined1 *)(param_1 + 0x181e) = 0;
  *(undefined8 *)((long)param_1 + 0xc0f4) = 0;
  param_1[0x17e7] = 0;
  param_1[0x17e8] = 0;
  param_1[0x17e9] = 0;
  param_1[0x17ea] = 0;
  param_1[0x17eb] = 0;
  param_1[0x17ec] = 0;
  param_1[0x17ed] = 0;
  param_1[0x17ee] = 0;
  *(undefined4 *)(param_1 + 0x17e5) = 0x40;
  *(undefined1 *)((long)param_1 + 0xbf2c) = 0;
  *(undefined4 *)(param_1 + 0x17ee) = 0xffffffff;
  param_1[0x17e3] = 0;
  param_1[0x17e4] = 0;
  param_1[0x17e3] = puVar2;
  param_1[0x17e4] = (undefined1 *)((long)param_1 + 0xbf2c);
  param_1[0x17f8] = puVar2;
  param_1[0x17f9] = (long)param_1 + 0xbfd4;
  param_1[0x17ca] = puVar2;
  param_1[0x17cb] = (undefined1 *)((long)param_1 + 0xbe64);
  param_1[0x1807] = 0;
  param_1[0x1808] = 0;
  param_1[0x1809] = 0;
  param_1[0x180a] = 0;
  param_1[0x180b] = 0;
  param_1[0x180c] = 0;
  param_1[0x180d] = 0;
  param_1[0x180e] = 0;
  param_1[0x180f] = 0;
  param_1[0x1810] = 0;
  param_1[0x1811] = 0;
  param_1[0x1812] = 0;
  param_1[0x1813] = 0;
  param_1[0x1814] = 0;
  param_1[0x1815] = 0;
  param_1[0x1816] = 0;
  param_1[0x1817] = 0;
  param_1[0x1818] = 0;
  param_1[0x1819] = 0;
  param_1[0x181a] = 0;
  param_1[0x181b] = 0;
  param_1[0x181c] = 0;
  *(undefined1 *)((long)param_1 + 0xc09c) = 0;
  param_1[0x1812] = (undefined1 *)((long)param_1 + 0xc09c);
  *(undefined4 *)(param_1 + 0x1807) = 0x40;
  param_1[0x1811] = puVar2;
  *(undefined4 *)(param_1 + 0x1810) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1813) = 0x40;
  *(undefined4 *)(param_1 + 0x181c) = 0xffffffff;
  param_1[0x17d7] = puVar2;
  param_1[0x17d8] = (long)param_1 + 0xbecc;
  param_1[0x17d9] = 0;
  param_1[0x17da] = 0;
  param_1[0x17db] = 0;
  param_1[0x17dc] = 0;
  param_1[0x17dd] = 0;
  param_1[0x17de] = 0;
  param_1[0x17df] = 0;
  param_1[0x17e0] = 0;
  param_1[0x17e1] = 0;
  param_1[0x17e2] = 0;
  *(undefined4 *)(param_1 + 0x17d9) = 0x40;
  *(undefined4 *)(param_1 + 0x17e2) = 0xffffffff;
  param_1[0x17d5] = param_1 + 0x17d7;
  param_1[0x17d6] = param_1 + 0x17e3;
  param_1[0x1805] = puVar2;
  param_1[0x1806] = (long)param_1 + 0xc03c;
  param_1[0x1803] = param_1 + 0x1805;
  param_1[0x1804] = param_1 + 0x1811;
  param_1[0x1820] = PTR_DAT_04bb3700 + 0x10;
  uVar8 = *(undefined2 *)PTR_DAT_04bb3170;
  puVar15 = param_1 + 0x182d;
  *puVar15 = 0;
  *(undefined2 *)(param_1 + 0x1824) = uVar8;
  *(undefined2 *)((long)param_1 + 0xc122) = uVar8;
  param_1[0x1830] = 0;
  *(undefined4 *)((long)param_1 + 0xc19f) = 0;
  param_1[0x1833] = 0;
  *puVar3 = 0;
  param_1[0x1828] = 0;
  *(undefined2 *)(param_1 + 0x1828) = uVar8;
  *(undefined2 *)puVar3 = uVar8;
  param_1[0x1829] = 0;
  param_1[0x182a] = 0;
  param_1[0x182b] = 0;
  param_1[0x182c] = 0;
  param_1[0x182e] = 0;
  param_1[0x182f] = 0;
  *(undefined2 *)(param_1 + 0x182e) = uVar8;
  *(undefined2 *)puVar15 = uVar8;
  param_1[0x182b] = 0;
  param_1[0x182c] = 0;
  param_1[0x1831] = 0;
  param_1[0x1832] = 0;
  param_1[0x1825] = puVar3;
  param_1[0x1826] = puVar15;
  *(undefined1 *)(param_1 + 0x1835) = *(undefined1 *)(param_2 + 0xf8);
  *(undefined1 *)((long)param_1 + 0xc1a9) = *(undefined1 *)(param_2 + 0xf9);
  *(undefined1 *)((long)param_1 + 0xc1aa) = *(undefined1 *)(param_2 + 0xfa);
  *(undefined1 *)((long)param_1 + 0xc1ab) = *(undefined1 *)(param_2 + 0xfb);
  *(undefined1 *)((long)param_1 + 0xc1ac) = *(undefined1 *)(param_2 + 0xfc);
  *(undefined1 *)((long)param_1 + 0xc1ad) = *(undefined1 *)(param_2 + 0xfd);
  *(undefined1 *)((long)param_1 + 0xc1ae) = *(undefined1 *)(param_2 + 0xfe);
  *(undefined1 *)((long)param_1 + 0xc1af) = *(undefined1 *)(param_2 + 0xff);
  *(undefined1 *)(param_1 + 0x1836) = *(undefined1 *)(param_2 + 0x100);
  *(undefined2 *)((long)param_1 + 0xc1b2) = *(undefined2 *)(param_2 + 0x102);
  *(undefined8 *)((long)param_1 + 0xc1b4) = 0;
  *(undefined8 *)((long)param_1 + 0xc1bc) = 0;
  *(undefined8 *)((long)param_1 + 0xc1c4) = 0;
  *(undefined8 *)((long)param_1 + 0xc1cc) = 0;
  *(undefined1 *)((long)param_1 + 0xc1d4) = 1;
  puVar2 = PTR_DAT_04bb37e0;
  uVar8 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined2 *)((long)param_1 + 0xc204) = 0;
  *(undefined8 *)((long)param_1 + 0xc1fc) = 0;
  *(undefined2 *)(param_1 + 0x183b) = uVar8;
  uVar5 = puVar2[2];
  *(undefined1 *)((long)param_1 + 0xc1da) = uVar5;
  uVar6 = puVar2[3];
  *(undefined1 *)((long)param_1 + 0xc1db) = uVar6;
  uVar4 = *(undefined4 *)(puVar2 + 4);
  *(undefined2 *)(param_1 + 0x183c) = uVar8;
  *(undefined1 *)((long)param_1 + 0xc1e2) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc1e3) = uVar6;
  *(undefined1 *)(param_1 + 0x183f) = 0;
  *(undefined4 *)((long)param_1 + 0xc1dc) = uVar4;
  *(undefined4 *)((long)param_1 + 0xc1e4) = uVar4;
  param_1[0x183d] = 0xffffffffffffffff;
  param_1[0x183e] = 0;
  uVar7 = *(undefined1 *)(param_2 + 0x104);
  *(undefined2 *)((long)param_1 + 0xc20c) = uVar8;
  *(undefined1 *)((long)param_1 + 0xc20e) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc20f) = uVar6;
  *(undefined4 *)(param_1 + 0x1842) = uVar4;
  *(undefined2 *)((long)param_1 + 0xc214) = uVar8;
  *(undefined1 *)((long)param_1 + 0xc216) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc217) = uVar6;
  *(undefined4 *)(param_1 + 0x1843) = uVar4;
  *(undefined1 *)((long)param_1 + 0xc206) = uVar7;
  *(undefined4 *)((long)param_1 + 0xc207) = 0x1000000;
  param_1[0x1844] = &PTR_LAB_04a800a0;
  param_1[0x1848] = &PTR_LAB_04a800a0;
  param_1[0x184c] = &PTR_LAB_04a800a0;
  param_1[0x1850] = &PTR_LAB_04a800a0;
  param_1[0x1854] = &PTR_LAB_04a800a0;
  param_1[0x1858] = &PTR_LAB_04a800a0;
  param_1[0x185c] = &PTR_LAB_04a800a0;
  param_1[0x1860] = &PTR_LAB_04a800a0;
  param_1[0x1864] = &PTR_LAB_04a800a0;
  bVar16 = *PTR_DAT_04bb32e0;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  *(undefined2 *)((long)param_1 + 0xc344) = uVar8;
  *(undefined2 *)((long)param_1 + 0xc34c) = uVar8;
  *(undefined2 *)((long)param_1 + 0xc354) = uVar8;
  *(undefined2 *)((long)param_1 + 0xc35c) = uVar8;
  *(undefined2 *)((long)param_1 + 0xc364) = uVar8;
  *(undefined2 *)((long)param_1 + 0xc36c) = uVar8;
  *(undefined2 *)((long)param_1 + 0xc374) = uVar8;
  *(undefined2 *)((long)param_1 + 0xc37c) = uVar8;
  *(undefined2 *)((long)param_1 + 0xc384) = uVar8;
  *(undefined1 *)((long)param_1 + 0xc341) = 0;
  *(undefined1 *)((long)param_1 + 0xc346) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc347) = uVar6;
  *(undefined4 *)(param_1 + 0x1869) = uVar4;
  *(undefined1 *)((long)param_1 + 0xc34e) = uVar5;
  *(undefined1 *)((long)param_1 + 49999) = uVar6;
  *(undefined4 *)(param_1 + 0x186a) = uVar4;
  *(undefined1 *)((long)param_1 + 0xc356) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc357) = uVar6;
  *(undefined4 *)(param_1 + 0x186b) = uVar4;
  *(undefined1 *)((long)param_1 + 0xc35e) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc35f) = uVar6;
  *(undefined4 *)(param_1 + 0x186c) = uVar4;
  *(undefined1 *)((long)param_1 + 0xc366) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc367) = uVar6;
  *(undefined4 *)(param_1 + 0x186d) = uVar4;
  *(undefined1 *)((long)param_1 + 0xc36e) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc36f) = uVar6;
  *(undefined4 *)(param_1 + 0x186e) = uVar4;
  *(undefined1 *)((long)param_1 + 0xc376) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc377) = uVar6;
  *(undefined4 *)(param_1 + 0x186f) = uVar4;
  *(undefined1 *)((long)param_1 + 0xc37e) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc37f) = uVar6;
  *(undefined4 *)(param_1 + 0x1870) = uVar4;
  *(undefined1 *)((long)param_1 + 0xc386) = uVar5;
  *(undefined1 *)((long)param_1 + 0xc387) = uVar6;
  *(undefined4 *)(param_1 + 0x1871) = uVar4;
  *(undefined4 *)((long)param_1 + 0xc38c) = 0;
  *(undefined1 *)((long)param_1 + 0xc391) = 0;
  param_1[0x183e] = 0xffffffffffffffff;
  *(byte *)(param_1 + 0x1868) = bVar16;
  *(uint *)((long)param_1 + 0x15f4) = *(uint *)((long)param_1 + 0x15f4) | 0x40;
  *(bool *)(param_1 + 0x1872) = *(int *)PTR_DAT_04bc20e0 != 10;
  if ((*(long *)PTR_DAT_04bb27f8 == 0) ||
     ((*(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) >> 1 & 1) == 0)) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar17 = &DAT_054f08c0;
        if (iVar11 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar17 = &DAT_054f08c0;
      }
    }
    else {
      puVar17 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
    }
    *puVar17 = *puVar17 & 0xfffeffff;
  }
  return;
}

