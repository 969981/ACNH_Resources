
/* WARNING: Removing unreachable block (ram,0x01e06640) */

long FUN_01e064f0(undefined8 *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined2 *puVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint local_2058;
  uint local_2054;
  short local_2044 [2];
  short local_2040 [2];
  ushort local_203c [2];
  undefined4 local_2038;
  undefined4 local_2034;
  undefined4 uStack_2030;
  undefined4 local_202c;
  undefined8 local_2028;
  undefined8 uStack_2020;
  undefined8 local_2018;
  undefined8 local_2010;
  undefined8 uStack_2008;
  undefined8 local_2000;
  undefined8 uStack_1ff8;
  undefined8 local_1ff0;
  undefined8 uStack_1fe8;
  undefined1 local_1fe0;
  undefined8 local_1fdc;
  undefined8 local_1fd4;
  undefined8 local_1fcc;
  uint local_1fc4;
  undefined1 local_1fc0;
  undefined1 local_1fbf;
  undefined2 local_1fbe;
  undefined8 local_1fb8;
  undefined8 uStack_1fb0;
  undefined8 local_1fa8;
  undefined8 local_1fa0;
  undefined5 uStack_1f98;
  undefined3 local_1f93;
  undefined5 uStack_1f90;
  undefined1 auStack_1f8b [2048];
  undefined1 local_178b;
  undefined2 local_178a;
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
  undefined4 local_1770;
  undefined4 local_176c;
  undefined8 local_1768;
  undefined8 local_1760;
  undefined8 local_1758;
  undefined8 local_1750;
  undefined8 local_1748;
  undefined8 local_1740;
  undefined8 local_1738;
  undefined8 local_1730;
  undefined8 local_1728;
  undefined1 local_1720;
  undefined8 local_171c;
  undefined8 local_1714;
  undefined8 local_170c;
  uint local_1704;
  undefined1 local_1700;
  undefined1 local_16ff;
  undefined2 local_16fe;
  undefined8 local_16f8;
  undefined8 local_16f0;
  undefined8 local_16e8;
  undefined8 local_16e0;
  undefined5 uStack_16d8;
  undefined3 local_16d3;
  undefined5 uStack_16d0;
  undefined1 auStack_16cb [2048];
  undefined1 local_ecb;
  undefined2 local_eca;
  undefined2 local_ec8;
  undefined1 local_ec6;
  undefined1 local_ec5;
  undefined4 local_ec4;
  undefined2 local_ec0;
  undefined1 local_ebe;
  undefined1 local_ebd;
  undefined4 local_ebc;
  undefined2 local_eb8;
  undefined1 local_eb6;
  undefined1 local_eb5;
  undefined4 local_eb4;
  undefined2 local_eb0;
  undefined1 local_eae;
  undefined1 local_ead;
  undefined4 local_eac;
  undefined2 local_ea0;
  undefined1 local_e9e;
  undefined1 local_e9d;
  undefined4 local_e9c;
  undefined4 local_e98;
  undefined4 local_e94;
  undefined8 local_e90;
  undefined8 local_e88;
  undefined8 local_e80;
  undefined8 local_e78;
  undefined8 local_e70;
  undefined8 local_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 local_e50;
  undefined1 local_e48;
  undefined8 local_e44;
  undefined8 local_e3c;
  undefined8 local_e34;
  uint local_e2c;
  undefined1 local_e28;
  undefined1 local_e27;
  undefined2 local_e26;
  undefined8 local_e20;
  undefined8 local_e18;
  undefined8 local_e10;
  undefined8 local_e08;
  undefined5 uStack_e00;
  undefined3 local_dfb;
  undefined5 uStack_df8;
  undefined1 auStack_df3 [2048];
  undefined1 local_5f3;
  undefined2 local_5f2;
  undefined2 local_5f0;
  undefined8 local_338;
  undefined1 local_330;
  short local_32e;
  ulong local_328;
  undefined1 auStack_320 [104];
  byte local_2b8;
  short local_2b6;
  undefined1 auStack_2b0 [45];
  byte abStack_283 [515];
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  byte local_6c [12];
  
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = &DAT_0548e140;
  if (lVar17 == 0) {
LAB_01e0656c:
    if (7 < *pbVar16) {
LAB_01e06578:
      if (DAT_0537d558 != (long *)0x0) {
        lVar17 = *DAT_0537d558;
        bVar7 = *(byte *)(lVar17 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar2 = (uint *)(lVar17 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar16 = (byte *)(lVar17 + 0x471);
          }
        }
        local_6c[0] = *pbVar16;
        if (local_6c[0] < 8) goto LAB_01e065f8;
      }
      pbVar16 = &DAT_0548e168;
    }
  }
  else {
    pbVar16 = &DAT_0548e140;
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar17 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar17 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar16 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01e0656c;
      }
      goto LAB_01e06578;
    }
  }
  local_6c[0] = *pbVar16;
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
LAB_01e065f8:
  lVar17 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1);
  if ((((lVar17 == 0) || (DAT_05574040 == 0)) ||
      (local_2038 = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
     (lVar12 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
     lVar12 == 0)) {
    lVar17 = 0;
  }
  else {
    if (*(long **)(lVar17 + 0x17bb0) == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar17 + 0x17bb0);
      uVar14 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar14 = (**(code **)*puVar13)();
      }
    }
    lVar3 = *(long *)(lVar17 + 0x17b90);
    lVar4 = *(long *)(lVar17 + 0x17b98);
    *param_1 = 0x400000038;
    puVar13 = (undefined8 *)(lVar4 + lVar3);
    uVar18 = puVar13[2];
    uVar5 = puVar13[1];
    param_1[1] = *puVar13;
    param_1[2] = uVar5;
    param_1[3] = uVar18;
    uVar5 = puVar13[3];
    uVar18 = puVar13[4];
    uVar6 = puVar13[6];
    param_1[6] = puVar13[5];
    param_1[7] = uVar6;
    param_1[4] = uVar5;
    param_1[5] = uVar18;
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar17 + 0x17bb0) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x17bb0) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    if ((*(long **)(lVar17 + 0x108) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x108), puVar13 == (undefined8 *)0x0)) {
      local_2054 = 0;
    }
    else {
      local_2054 = (**(code **)*puVar13)();
    }
    if ((*(long **)(lVar12 + 0x5d7890) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x5d7890), puVar13 == (undefined8 *)0x0)) {
      local_2058 = 0;
    }
    else {
      local_2058 = (**(code **)*puVar13)();
    }
    FUN_02815cfc(&local_2038);
    puVar8 = PTR_DAT_04bb3170;
    local_330 = 0;
    local_338 = 0;
    local_328 = 0;
    local_32e = *(short *)PTR_DAT_04bb3170;
    FUN_027c0ee4(auStack_320);
    memset(auStack_2b0,0,0x230);
    local_7e = 0;
    local_80 = 0xfffe;
    local_7c = 0;
    FUN_0277d4ac(&local_80);
    local_78 = 0xfffe;
    local_76 = 0;
    local_74 = 0;
    FUN_0277d4ac(&local_78);
    lVar3 = *(long *)(lVar17 + 0xf0) + *(long *)(lVar17 + 0xe8);
    local_338 = *(undefined8 *)(lVar3 + 0x1d00);
    local_330 = *(undefined1 *)(lVar3 + 0x1d08);
    local_32e = *(short *)(lVar3 + 0x1d0a);
    FUN_027c1640(&local_328,lVar3 + 0x1d10);
    if (local_32e != *(short *)puVar8) {
      if (((DAT_04c8c100 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04c8c100), iVar11 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar14 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar14 * 4) == 0x18) goto LAB_01e068d0;
          uVar14 = uVar14 + 1;
        } while (DAT_04c8c0f0 != uVar14);
      }
      uVar14 = 0;
LAB_01e068d0:
      local_203c[0] = 0;
      if (((DAT_04c8c100 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04c8c100), iVar11 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      uVar10 = (uint)uVar14;
      if (DAT_04c8c0f0 <= uVar10) {
        uVar10 = 0;
      }
      local_203c[0] = (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar10 * 4) << 0xb) | 0x80;
      FUN_007ef010(local_2040,local_203c);
      local_2b6 = local_2040[0] + 1;
      FUN_007ef010(local_2044,local_203c);
      uVar14 = 0;
      uVar10 = 0;
      local_32e = local_2044[0];
      bVar9 = true;
      do {
        iVar11 = 0x20;
        uVar19 = uVar14;
        do {
          if ((((abStack_283[uVar19] ^ 0xff) & 0xf) == 0) || (0xef < abStack_283[uVar19]))
          goto LAB_01e0698c;
          uVar19 = (ulong)((int)uVar19 + 1);
          iVar11 = iVar11 + -2;
        } while (iVar11 != 0);
        bVar9 = uVar10 < 0x1f;
        uVar10 = uVar10 + 1;
        uVar14 = (ulong)((int)uVar14 + 0x10);
      } while (uVar10 != 0x20);
LAB_01e0698c:
      uVar14 = local_328 >> 0x20;
      local_328 = local_328 & 0xffffffff00000000;
      bVar7 = 2;
      if (!bVar9) {
        bVar7 = 0;
      }
      uVar19 = 0;
      local_2b8 = bVar7 | local_2b8 & 0xfc;
      uVar10 = 0;
      do {
        iVar11 = *(int *)((long)&local_328 + uVar19);
        uVar19 = uVar19 + 4;
        uVar10 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar10;
        uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
      } while (uVar19 < 0x2a5);
      uVar10 = (uVar10 ^ uVar10 >> 0x10 ^ 0x2a8) * -0x7a143595;
      uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
      local_328 = CONCAT44((int)uVar14,uVar10 ^ uVar10 >> 0x10);
    }
    puVar15 = (undefined2 *)FUN_02806c1c(*(long *)(lVar17 + 0xf0) + *(long *)(lVar17 + 0xe8));
    local_80 = *puVar15;
    local_7e = puVar15[1];
    local_7c = *(undefined4 *)(puVar15 + 2);
    puVar15 = (undefined2 *)FUN_02806e34(*(long *)(lVar17 + 0xf0) + *(long *)(lVar17 + 0xe8));
    local_78 = *puVar15;
    local_76 = puVar15[1];
    local_74 = *(undefined4 *)(puVar15 + 2);
    lVar3 = *(long *)(lVar17 + 0xf0) + *(long *)(lVar17 + 0xe8);
    local_e88 = *(undefined8 *)(lVar3 + 0x11b0);
    local_ea0 = *(undefined2 *)(lVar3 + 0x1198);
    local_e9c = *(undefined4 *)(lVar3 + 0x119c);
    local_e98 = *(undefined4 *)(lVar3 + 0x11a0);
    local_e94 = *(undefined4 *)(lVar3 + 0x11a4);
    local_e90 = *(undefined8 *)(lVar3 + 0x11a8);
    local_e58 = *(undefined8 *)(lVar3 + 0x11e0);
    local_e50 = *(undefined8 *)(lVar3 + 0x11e8);
    local_e08 = *(undefined8 *)(&DAT_00001230 + lVar3);
    local_e48 = *(undefined1 *)(lVar3 + 0x11f0);
    local_e9e = *(undefined1 *)(lVar3 + 0x119a);
    local_e9d = *(undefined1 *)(lVar3 + 0x119b);
    local_e3c = *(undefined8 *)(lVar3 + 0x11fc);
    local_e34 = *(undefined8 *)(lVar3 + 0x1204);
    local_e28 = *(undefined1 *)(lVar3 + 0x1210);
    local_e27 = *(undefined1 *)(lVar3 + 0x1211);
    local_e60 = *(undefined8 *)(lVar3 + 0x11d8);
    local_e78 = *(undefined8 *)(lVar3 + 0x11c0);
    local_e70 = *(undefined8 *)(lVar3 + 0x11c8);
    local_e68 = *(undefined8 *)(lVar3 + 0x11d0);
    local_e80 = *(undefined8 *)(lVar3 + 0x11b8);
    local_e44 = *(undefined8 *)(lVar3 + 0x11f4);
    local_e26 = *(undefined2 *)(lVar3 + 0x1212);
    local_e10 = *(undefined8 *)(lVar3 + 0x1228);
    local_e2c = *(uint *)(lVar3 + 0x120c);
    uStack_df8 = (undefined5)((ulong)*(undefined8 *)(lVar3 + 0x123d) >> 0x18);
    local_e18 = *(undefined8 *)(lVar3 + 0x1220);
    if (1 < local_e2c) {
      local_e2c = 0;
    }
    local_e20 = *(undefined8 *)(lVar3 + 0x1218);
    uStack_e00 = (undefined5)*(undefined8 *)(lVar3 + 0x1238);
    local_dfb = (undefined3)((ulong)*(undefined8 *)(lVar3 + 0x1238) >> 0x28);
    memcpy(auStack_df3,(void *)(lVar3 + 0x1245),0x800);
    local_5f3 = *(undefined1 *)(lVar3 + 0x1a45);
    local_5f2 = 0;
    FUN_027c1b80(&local_e98);
    local_5f0 = *(undefined2 *)(lVar3 + 0x1a48);
    puVar1 = (undefined4 *)(*(long *)(lVar12 + 0x5d7878) + *(long *)(lVar12 + 0x5d7870));
    uStack_1fe8 = *(undefined8 *)(puVar1 + 0x14);
    local_1fe0 = *(undefined1 *)(puVar1 + 0x16);
    local_2038 = *puVar1;
    local_2034 = puVar1[1];
    uStack_2030 = puVar1[2];
    local_202c = puVar1[3];
    local_2028 = *(undefined8 *)(puVar1 + 4);
    uStack_2020 = *(undefined8 *)(puVar1 + 6);
    uStack_1ff8 = *(undefined8 *)(puVar1 + 0x10);
    local_1ff0 = *(undefined8 *)(puVar1 + 0x12);
    uStack_2008 = *(undefined8 *)(puVar1 + 0xc);
    local_2000 = *(undefined8 *)(puVar1 + 0xe);
    local_2018 = *(undefined8 *)(puVar1 + 8);
    local_2010 = *(undefined8 *)(puVar1 + 10);
    local_1fd4 = *(undefined8 *)(puVar1 + 0x19);
    local_1fcc = *(undefined8 *)(puVar1 + 0x1b);
    local_1fdc = *(undefined8 *)(puVar1 + 0x17);
    local_1fc4 = puVar1[0x1d];
    if (1 < local_1fc4) {
      local_1fc4 = 0;
    }
    local_1fc0 = *(undefined1 *)(puVar1 + 0x1e);
    local_1fbf = *(undefined1 *)((long)puVar1 + 0x79);
    local_1fbe = *(undefined2 *)((long)puVar1 + 0x7a);
    local_1fb8 = *(undefined8 *)(puVar1 + 0x20);
    uStack_1fb0 = *(undefined8 *)(puVar1 + 0x22);
    local_1fa8 = *(undefined8 *)(puVar1 + 0x24);
    local_1fa0 = *(undefined8 *)(puVar1 + 0x26);
    uStack_1f90 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0xa5) >> 0x18);
    uStack_1f98 = (undefined5)*(undefined8 *)(puVar1 + 0x28);
    local_1f93 = (undefined3)((ulong)*(undefined8 *)(puVar1 + 0x28) >> 0x28);
    memcpy(auStack_1f8b,(void *)((long)puVar1 + 0xad),0x800);
    local_178b = *(undefined1 *)((long)puVar1 + 0x8ad);
    local_178a = 0;
    FUN_027c1b80(&uStack_2030);
    local_1788 = *(undefined2 *)(puVar1 + 0x22c);
    local_1786 = *(undefined1 *)((long)puVar1 + 0x8b2);
    local_1785 = *(undefined1 *)((long)puVar1 + 0x8b3);
    local_1784 = puVar1[0x22d];
    local_1780 = *(undefined2 *)(puVar1 + 0x22e);
    local_177e = *(undefined1 *)((long)puVar1 + 0x8ba);
    local_177d = *(undefined1 *)((long)puVar1 + 0x8bb);
    local_177c = puVar1[0x22f];
    local_1778 = *(undefined2 *)(puVar1 + 0x230);
    local_1776 = *(undefined1 *)((long)puVar1 + 0x8c2);
    local_1775 = *(undefined1 *)((long)puVar1 + 0x8c3);
    local_1774 = puVar1[0x231];
    local_1770 = puVar1[0x232];
    local_176c = puVar1[0x233];
    local_1768 = *(undefined8 *)(puVar1 + 0x234);
    local_1760 = *(undefined8 *)(puVar1 + 0x236);
    local_1750 = *(undefined8 *)(puVar1 + 0x23a);
    local_1758 = *(undefined8 *)(puVar1 + 0x238);
    local_1748 = *(undefined8 *)(puVar1 + 0x23c);
    local_1740 = *(undefined8 *)(puVar1 + 0x23e);
    local_1730 = *(undefined8 *)(puVar1 + 0x242);
    local_1738 = *(undefined8 *)(puVar1 + 0x240);
    local_1728 = *(undefined8 *)(puVar1 + 0x244);
    local_1720 = *(undefined1 *)(puVar1 + 0x246);
    local_171c = *(undefined8 *)(puVar1 + 0x247);
    local_1714 = *(undefined8 *)(puVar1 + 0x249);
    local_170c = *(undefined8 *)(puVar1 + 0x24b);
    local_1704 = puVar1[0x24d];
    local_16e0 = *(undefined8 *)(puVar1 + 0x256);
    if (1 < local_1704) {
      local_1704 = 0;
    }
    local_1700 = *(undefined1 *)(puVar1 + 0x24e);
    local_16ff = *(undefined1 *)((long)puVar1 + 0x939);
    local_16fe = *(undefined2 *)((long)puVar1 + 0x93a);
    local_16e8 = *(undefined8 *)(puVar1 + 0x254);
    uStack_16d0 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x965) >> 0x18);
    local_16f8 = *(undefined8 *)(puVar1 + 0x250);
    local_16f0 = *(undefined8 *)(puVar1 + 0x252);
    uStack_16d8 = (undefined5)*(undefined8 *)(puVar1 + 600);
    local_16d3 = (undefined3)((ulong)*(undefined8 *)(puVar1 + 600) >> 0x28);
    memcpy(auStack_16cb,(void *)((long)puVar1 + 0x96d),0x800);
    local_ecb = *(undefined1 *)((long)puVar1 + 0x116d);
    local_eca = 0;
    FUN_027c1b80(&local_1770);
    local_ec8 = *(undefined2 *)(puVar1 + 0x45c);
    local_ec4 = puVar1[0x45d];
    local_ec6 = *(undefined1 *)((long)puVar1 + 0x1172);
    local_ec5 = *(undefined1 *)((long)puVar1 + 0x1173);
    local_ec0 = *(undefined2 *)(puVar1 + 0x45e);
    local_ebe = *(undefined1 *)((long)puVar1 + 0x117a);
    local_ebd = *(undefined1 *)((long)puVar1 + 0x117b);
    local_ebc = puVar1[0x45f];
    local_eb8 = *(undefined2 *)(puVar1 + 0x460);
    local_eb6 = *(undefined1 *)((long)puVar1 + 0x1182);
    local_eb5 = *(undefined1 *)((long)puVar1 + 0x1183);
    local_eb4 = puVar1[0x461];
    local_eb0 = *(undefined2 *)(puVar1 + 0x462);
    local_eae = *(undefined1 *)((long)puVar1 + 0x118a);
    local_ead = *(undefined1 *)((long)puVar1 + 0x118b);
    local_eac = puVar1[0x463];
    FUN_026eb0a0(&local_2038);
    param_1[8] = 0x800001fc8;
    memcpy(param_1 + 9,&local_2038,0x1fc8);
    if ((((local_2058 & 1) != 0) && (*(long *)(lVar12 + 0x5d7890) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x5d7890) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    if ((((local_2054 & 1) != 0) && (*(long *)(lVar17 + 0x108) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x108) + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
    if ((*(long **)(lVar12 + 0x5d3db8) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x5d3db8), puVar13 == (undefined8 *)0x0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = (**(code **)*puVar13)();
      uVar10 = uVar10 ^ 1;
    }
    lVar17 = *(long *)(lVar12 + 0x5d3d98);
    lVar3 = *(long *)(lVar12 + 0x5d3da0);
    param_1[0x402] = 0x400000754;
    memcpy(param_1 + 0x403,(void *)(lVar3 + lVar17),0x754);
    lVar17 = (long)param_1 + 0x276c;
    if ((((uVar10 & 1) == 0) && (*(long *)(lVar12 + 0x5d3db8) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x5d3db8) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
  }
  return lVar17;
}

