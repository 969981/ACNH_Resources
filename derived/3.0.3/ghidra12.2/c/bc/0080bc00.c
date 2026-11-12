
void FUN_0080bc00(byte *param_1,uint param_2)

{
  undefined *puVar1;
  short *psVar2;
  undefined ***pppuVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ushort uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
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
  undefined1 auStack_1b78 [16];
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
  undefined *local_1978;
  undefined8 local_1970;
  undefined8 local_1968;
  undefined8 local_1960;
  undefined8 local_1958;
  undefined1 local_1950;
  undefined4 local_194c;
  byte *local_1948;
  undefined **local_1940;
  undefined1 *local_1938;
  undefined4 local_1930;
  undefined1 local_192c;
  undefined8 local_1928;
  undefined8 local_1920;
  undefined4 local_1918;
  undefined *local_1910;
  undefined1 *local_1908;
  undefined4 local_1900;
  undefined1 local_18fc [63];
  undefined1 local_18bd;
  undefined *local_18b8;
  undefined1 *local_18b0;
  undefined4 local_18a8;
  undefined1 local_18a4 [63];
  undefined1 local_1865;
  undefined1 local_1860 [8];
  undefined8 local_1858;
  undefined8 local_1850;
  undefined8 local_1848;
  undefined8 local_1840;
  undefined8 local_1838;
  undefined8 local_1830;
  undefined8 local_1828;
  undefined **local_1820;
  undefined8 *local_1818;
  undefined4 local_1810;
  undefined1 local_180c;
  undefined8 local_1808;
  undefined8 local_1800;
  undefined4 local_17f8;
  undefined *local_17f0;
  undefined1 *local_17e8;
  undefined4 local_17e0;
  undefined1 local_17dc [63];
  undefined1 local_179d;
  undefined *local_1798;
  undefined1 *local_1790;
  undefined4 local_1788;
  undefined1 local_1784 [63];
  undefined1 local_1745;
  undefined8 local_1740;
  undefined8 local_1738;
  undefined8 local_1730;
  undefined8 local_1728;
  undefined8 local_1720;
  undefined8 local_1718;
  undefined8 local_1710;
  undefined8 local_1708;
  short local_1700 [4];
  long local_16f8;
  long local_16f0;
  ushort local_48;
  undefined1 auStack_46 [2];
  uint local_44;
  
  puVar1 = PTR_DAT_04bb3128;
  local_44 = param_2;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar5 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar13 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar13 * 4) == 9) goto LAB_0080bc7c;
      uVar13 = uVar13 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar13);
  }
  uVar13 = 0;
LAB_0080bc7c:
  bVar4 = *param_1;
  local_48 = 0;
  uVar9 = bVar4 & 0x7f;
  if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar12 = (uint)uVar13;
  if (*(uint *)puVar5 <= uVar12) {
    uVar12 = 0;
  }
  if (7 < bVar4) {
    uVar9 = 0x7f;
  }
  local_48 = uVar9 | (ushort)(*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar12 * 4) << 0xb);
  FUN_007ef010(auStack_46,&local_48);
  FUN_007e4920(local_1700,auStack_46);
  if ((local_1700[0] != *(short *)PTR_DAT_04bb3170) && (local_16f0 != 0 || local_16f8 != 0)) {
    FUN_007e80d0(local_1700);
    if (local_44 < 4) {
      local_180c = 0;
      local_1810 = 0x20;
      local_1808 = 0xffffffff;
      local_1800 = 0xffffffff00000000;
      local_17f8 = 0xffffffff;
      local_17e0 = 0x40;
      puVar14 = (&PTR_DAT_04917490)[(int)local_44];
      local_179d = 0;
      local_17e8 = local_17dc;
      local_1790 = local_1784;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      psVar2 = local_1700;
      if (local_1700 <= (short *)((long)&local_1740 + 2U)) {
        psVar2 = (short *)((long)&local_1740 + 2U);
      }
      local_1818 = &local_1740;
      local_17dc[0] = 0;
      local_1788 = 0x40;
      local_1745 = 0;
      local_1784[0] = 0;
      local_1820 = &PTR_LAB_049173e0;
      local_1708 = 0;
      local_1710 = 0;
      local_1718 = 0;
      local_1720 = 0;
      local_1728 = 0;
      local_1730 = 0;
      local_1738 = 0;
      local_1740 = 0;
      local_17f0 = puVar1;
      local_1798 = puVar1;
      memset(local_1818,0,(long)psVar2 + (-0xe0 - (long)&local_1820));
      local_1930 = 0x20;
      local_1908 = local_18fc;
      local_192c = 0;
      local_18b0 = local_18a4;
      local_1938 = local_1860;
      local_1928 = 0xffffffff;
      pppuVar3 = &local_1820;
      if (&local_1820 <= local_1860 + 2) {
        pppuVar3 = (undefined ***)(local_1860 + 2);
      }
      local_1920 = 0xffffffff00000000;
      local_1918 = 0xffffffff;
      local_1900 = 0x40;
      local_18bd = 0;
      local_18fc[0] = 0;
      local_18a8 = 0x40;
      local_1865 = 0;
      local_18a4[0] = 0;
      local_1940 = &PTR_LAB_049173e0;
      local_1828 = 0;
      local_1830 = 0;
      local_1838 = 0;
      local_1840 = 0;
      local_1848 = 0;
      local_1850 = 0;
      local_1858 = 0;
      local_1860 = (undefined1  [8])0x0;
      local_1910 = puVar1;
      local_18b8 = puVar1;
      memset(local_1938,0,(size_t)((long)pppuVar3 + (-0xe0 - (long)&local_1940)));
      memset(auStack_1b78,0,0x1e0);
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
      local_1b80 = PTR_DAT_04bc0820 + 0x10;
      local_1970 = 0;
      local_1968 = 0;
      local_1960 = 0;
      local_1958 = 0;
      local_1950 = 1;
      local_194c = 0;
      local_1978 = PTR_DAT_04bc0cd8 + 0x10;
      iVar6 = local_44 + 400;
      if (2 < local_44 - 1) {
        iVar6 = 400;
      }
      local_1bb0 = local_1ba4;
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
      local_1948 = param_1;
      FUN_038d1270(&local_1bb8,&DAT_0405bf91,iVar6);
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_1bc0 = "STR_MydesignDefaultName";
      local_1bc8 = puVar1;
      (**(code **)(local_1bb8 + 0x18))(&local_1bb8);
      puStack_1bd0 = local_1bb0;
      local_1bd8 = puVar1;
      FUN_006f50a0(&local_1820,&local_1bc8,&local_1bd8,0);
      FUN_01ba56a8(&local_1b80,&local_1940,&local_1820);
      FUN_007e5fd0(local_1700,&local_1940);
      iVar6 = FUN_007e6aa0(local_1700);
      if (iVar6 != 0) {
        uVar13 = 0;
        puVar15 = puVar14 + 0x2d;
        do {
          iVar6 = FUN_007e6760(local_1700);
          if (iVar6 != 0) {
            uVar11 = 0;
            do {
              FUN_007e70d0(local_1700,uVar11 & 0xffffffff,uVar13 & 0xffffffff,puVar15[uVar11]);
              uVar11 = uVar11 + 1;
              uVar7 = FUN_007e6760(local_1700);
            } while (uVar11 < (uVar7 & 0xffffffff));
          }
          uVar13 = uVar13 + 1;
          uVar11 = FUN_007e6aa0(local_1700);
          puVar15 = puVar15 + 0x20;
        } while (uVar13 < (uVar11 & 0xffffffff));
      }
      puVar1 = local_1b80;
      local_1b80._0_2_ = CONCAT11(puVar14[2],0xff);
      local_1b80._4_4_ = SUB84(puVar1,4);
      local_1b80._0_4_ = CONCAT13(*puVar14,CONCAT12(puVar14[1],(undefined2)local_1b80));
      FUN_007e7690(local_1700,0,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[5],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[3],CONCAT12(puVar14[4],(undefined2)local_1b80));
      FUN_007e7690(local_1700,1,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[8],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[6],CONCAT12(puVar14[7],(undefined2)local_1b80));
      FUN_007e7690(local_1700,2,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0xb],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[9],CONCAT12(puVar14[10],(undefined2)local_1b80));
      FUN_007e7690(local_1700,3,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0xe],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0xc],CONCAT12(puVar14[0xd],(undefined2)local_1b80));
      FUN_007e7690(local_1700,4,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0x11],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0xf],CONCAT12(puVar14[0x10],(undefined2)local_1b80));
      FUN_007e7690(local_1700,5,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0x14],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0x12],CONCAT12(puVar14[0x13],(undefined2)local_1b80));
      FUN_007e7690(local_1700,6,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0x17],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0x15],CONCAT12(puVar14[0x16],(undefined2)local_1b80));
      FUN_007e7690(local_1700,7,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0x1a],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0x18],CONCAT12(puVar14[0x19],(undefined2)local_1b80));
      FUN_007e7690(local_1700,8,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0x1d],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0x1b],CONCAT12(puVar14[0x1c],(undefined2)local_1b80));
      FUN_007e7690(local_1700,9,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0x20],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0x1e],CONCAT12(puVar14[0x1f],(undefined2)local_1b80));
      FUN_007e7690(local_1700,10,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0x23],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0x21],CONCAT12(puVar14[0x22],(undefined2)local_1b80));
      FUN_007e7690(local_1700,0xb,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0x26],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0x24],CONCAT12(puVar14[0x25],(undefined2)local_1b80));
      FUN_007e7690(local_1700,0xc,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0x29],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0x27],CONCAT12(puVar14[0x28],(undefined2)local_1b80));
      FUN_007e7690(local_1700,0xd,&local_1b80);
      local_1b80._0_2_ = CONCAT11(puVar14[0x2c],0xff);
      local_1b80._0_4_ = CONCAT13(puVar14[0x2a],CONCAT12(puVar14[0x2b],(undefined2)local_1b80));
      FUN_007e7690(local_1700,0xe,&local_1b80);
    }
    FUN_007e7b10(local_1700);
    if (1 < *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80)) {
      uVar10 = *(undefined8 *)PTR_DAT_04bb3708;
      uVar8 = FUN_02582a24(param_1,1);
      FUN_007f11c4(uVar10,uVar8,&local_48,1);
    }
  }
  return;
}

