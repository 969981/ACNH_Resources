
void FUN_007f6680(void)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 auStack_1c2c [2];
  undefined1 auStack_1c2a [2];
  undefined1 auStack_1c28 [2];
  undefined1 auStack_1c26 [2];
  undefined1 auStack_1c24 [2];
  undefined1 auStack_1c22 [2];
  undefined *local_1c20;
  undefined1 *puStack_1c18;
  undefined *local_1c10;
  char *pcStack_1c08;
  undefined *local_1c00;
  undefined1 *local_1bf8;
  undefined4 local_1bf0;
  undefined1 local_1bec [31];
  undefined1 local_1bcd;
  undefined1 auStack_1bc6 [2];
  ushort local_1bc4 [2];
  undefined8 local_1bc0;
  undefined1 auStack_1bb8 [16];
  undefined *local_1ba8;
  undefined8 local_1b88;
  undefined8 uStack_1b80;
  undefined *local_1b78;
  undefined8 local_1b58;
  undefined8 uStack_1b50;
  undefined *local_1b48;
  undefined8 local_1b28;
  undefined8 uStack_1b20;
  undefined *local_1b18;
  undefined8 local_1af8;
  undefined8 uStack_1af0;
  undefined *local_1ae8;
  undefined8 local_1ac8;
  undefined8 uStack_1ac0;
  undefined *local_1ab8;
  undefined8 local_1a98;
  undefined8 uStack_1a90;
  undefined *local_1a88;
  undefined8 local_1a68;
  undefined8 uStack_1a60;
  undefined *local_1a58;
  undefined8 local_1a38;
  undefined8 uStack_1a30;
  undefined *local_1a28;
  undefined8 local_1a08;
  undefined8 uStack_1a00;
  undefined *local_19f8;
  undefined4 local_19d8;
  undefined8 local_19d0;
  undefined8 uStack_19c8;
  undefined4 local_19c0;
  undefined2 local_19bc;
  undefined *local_19b8;
  undefined8 local_19b0;
  undefined8 local_19a8;
  undefined8 local_19a0;
  undefined8 local_1998;
  undefined1 local_1990;
  undefined4 local_198c;
  undefined **local_1988;
  undefined1 *local_1980;
  undefined4 local_1978;
  undefined1 local_1974;
  undefined8 local_1970;
  undefined8 local_1968;
  undefined4 local_1960;
  undefined *local_1958;
  undefined1 *local_1950;
  undefined4 local_1948;
  undefined1 local_1944 [63];
  undefined1 local_1905;
  undefined *local_1900;
  undefined1 *local_18f8;
  undefined4 local_18f0;
  undefined1 local_18ec [63];
  undefined1 local_18ad;
  undefined1 local_18a8 [8];
  undefined8 local_18a0;
  undefined8 local_1898;
  undefined8 local_1890;
  undefined8 local_1888;
  undefined8 local_1880;
  undefined8 local_1878;
  undefined8 local_1870;
  undefined **local_1868;
  undefined8 *local_1860;
  undefined4 local_1858;
  undefined1 local_1854;
  undefined8 local_1850;
  undefined8 local_1848;
  undefined4 local_1840;
  undefined *local_1838;
  undefined1 *local_1830;
  undefined4 local_1828;
  undefined1 local_1824 [63];
  undefined1 local_17e5;
  undefined *local_17e0;
  undefined1 *local_17d8;
  undefined4 local_17d0;
  undefined1 local_17cc [63];
  undefined1 local_178d;
  undefined8 local_1788;
  undefined8 local_1780;
  undefined8 local_1778;
  undefined8 local_1770;
  undefined8 local_1768;
  undefined8 local_1760;
  undefined8 local_1758;
  undefined8 local_1750;
  undefined1 auStack_1748 [2];
  undefined1 auStack_1746 [2];
  undefined1 auStack_1744 [2];
  undefined1 auStack_1742 [2];
  undefined1 auStack_1740 [2];
  undefined1 auStack_173e [2];
  undefined1 auStack_173c [2];
  undefined1 auStack_173a [2];
  undefined1 auStack_1738 [2];
  undefined1 auStack_1736 [2];
  undefined1 auStack_1734 [2];
  undefined1 auStack_1732 [2];
  undefined1 auStack_1730 [2];
  undefined1 auStack_172e [2];
  undefined1 auStack_172c [2];
  undefined1 auStack_172a [2];
  undefined1 auStack_1728 [2];
  undefined1 auStack_1726 [2];
  undefined1 auStack_1724 [2];
  undefined1 auStack_1722 [2];
  undefined1 auStack_1720 [2];
  undefined1 auStack_171e [2];
  undefined1 auStack_171c [2];
  undefined1 auStack_171a [2];
  undefined1 auStack_1718 [2];
  undefined1 auStack_1716 [2];
  undefined1 auStack_1714 [2];
  undefined1 auStack_1712 [2];
  undefined1 auStack_1710 [2];
  undefined1 auStack_170e [2];
  undefined1 auStack_170c [2];
  undefined1 auStack_170a [2];
  short local_1708 [4];
  long local_1700;
  long local_16f8;
  
  puVar5 = PTR_DAT_04bb3170;
  puVar4 = PTR_DAT_04bb3128;
  puVar3 = PTR_DAT_04bb3120;
  iVar7 = 0;
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f68bc;
        uVar11 = uVar11 + 1;
      } while (*(uint *)puVar3 != uVar11);
    }
    uVar11 = 0;
LAB_007f68bc:
    local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar9 = (uint)uVar11;
    if (*(uint *)puVar3 <= uVar9) {
      uVar9 = 0;
    }
    local_1868 = (undefined **)
                 CONCAT62(local_1868._2_6_,
                          (ushort)iVar7 |
                          (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
    FUN_007ef010(auStack_170a,&local_1868);
    FUN_007e4920(local_1708,auStack_170a);
    if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
      iVar6 = FUN_007e6aa0(local_1708);
      if (iVar6 != 0) {
        uVar11 = 0;
        puVar10 = PTR_DAT_04bb4cd0 + 0x2d;
        do {
          iVar6 = FUN_007e6760(local_1708);
          if (iVar6 != 0) {
            uVar13 = 0;
            do {
              FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
              uVar13 = uVar13 + 1;
              uVar8 = FUN_007e6760(local_1708);
            } while (uVar13 < (uVar8 & 0xffffffff));
          }
          uVar11 = uVar11 + 1;
          uVar13 = FUN_007e6aa0(local_1708);
          puVar10 = puVar10 + 0x20;
        } while (uVar11 < (uVar13 & 0xffffffff));
      }
      local_1bc0._0_4_ = 0xe52d2dff;
      FUN_007e7690(local_1708,0,&local_1bc0);
      local_1bc0._0_4_ = 0xe5772dff;
      FUN_007e7690(local_1708,1,&local_1bc0);
      local_1bc0._0_4_ = 0xe5e51eff;
      FUN_007e7690(local_1708,2,&local_1bc0);
      local_1bc0._0_4_ = 0x77e52dff;
      FUN_007e7690(local_1708,3,&local_1bc0);
      local_1bc0._0_4_ = 0x1b8b1bff;
      FUN_007e7690(local_1708,4,&local_1bc0);
      local_1bc0._0_4_ = 0x39b7d6ff;
      FUN_007e7690(local_1708,5,&local_1bc0);
      local_1bc0._0_4_ = 0x2a91d6ff;
      FUN_007e7690(local_1708,6,&local_1bc0);
      local_1bc0._0_4_ = 0x3d3de5ff;
      FUN_007e7690(local_1708,7,&local_1bc0);
      local_1bc0._0_4_ = 0x894ce5ff;
      FUN_007e7690(local_1708,8,&local_1bc0);
      local_1bc0._0_4_ = 0xe55bc9ff;
      FUN_007e7690(local_1708,9,&local_1bc0);
      local_1bc0._0_4_ = 0xe5a898ff;
      FUN_007e7690(local_1708,10,&local_1bc0);
      local_1bc0._0_4_ = 0x8b5041ff;
      FUN_007e7690(local_1708,0xb,&local_1bc0);
      local_1bc0._0_4_ = 0xe5e5e5ff;
      FUN_007e7690(local_1708,0xc,&local_1bc0);
      local_1bc0._0_4_ = 0x6e6e6eff;
      FUN_007e7690(local_1708,0xd,&local_1bc0);
      local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0x141414ff);
      FUN_007e7690(local_1708,0xe,&local_1bc0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 100);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f6a18;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f6a18:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               CONCAT62(local_1868._2_6_,
                        (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
  FUN_007ef010(auStack_170c,&local_1868);
  FUN_007e4920(local_1708,auStack_170c);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4ce0 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0xe52d2dff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0xe5772dff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e51eff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0x77e52dff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0x1b8b1bff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0x39b7d6ff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0x2a91d6ff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0x3d3de5ff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0x894ce5ff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0xe55bc9ff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0xe5a898ff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0x8b5041ff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e5e5ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0x6e6e6eff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0x141414ff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f6cd8;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f6cd8:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 1
               );
  FUN_007ef010(auStack_170e,&local_1868);
  FUN_007e4920(local_1708,auStack_170e);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4ce8 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0xc75d42ff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0xd6912aff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0xe5b46bff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0xa9734fff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0x6e443aff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0xa2c76aff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0x699a5cff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0x446e3aff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0x5b7c6fff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0x93b8b1ff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0x8787b8ff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0x5a5aa9ff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0xe5dcb7ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0x8b6e66ff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0x50392aff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f6f98;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f6f98:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 2
               );
  FUN_007ef010(auStack_1710,&local_1868);
  FUN_007e4920(local_1708,auStack_1710);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4cf0 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0x8b125bff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0xd647d6ff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0xae72d6ff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0x8047d6ff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0x4727c7ff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e50fff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0xe5ba0fff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0xe5951eff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0xe5772dff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0xc0e52dff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0x77c742ff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0x299a56ff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e5d6ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0x4e7c42ff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0xd410dff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f7258;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f7258:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 3
               );
  FUN_007ef010(auStack_1712,&local_1868);
  FUN_007e4920(local_1708,auStack_1712);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4cf8 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0xe5dcd6ff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0xe5c0a8ff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0xe5ae89ff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0xe59c6bff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0xc77f4fff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0xe58989ff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0xe56b6bff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0xc75d5dff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0xb86049ff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0x8b5041ff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0x8b5f41ff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0x6e4a33ff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0x503625ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0x322014ff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0x140e0aff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f7518;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f7518:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 4
               );
  FUN_007ef010(auStack_1714,&local_1868);
  FUN_007e4920(local_1708,auStack_1714);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4d00 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0xe57a7aff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0xe59c6bff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e57aff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0x9ce56bff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0x56b856ff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0x89d3e5ff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0x6bb4e5ff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0x7a7ae5ff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0x9c6be5ff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0xe589d3ff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0xe5c0b7ff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0xd69180ff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e5e5ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0xa9a9a9ff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0x7c7c7cff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f77d8;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f77d8:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 5
               );
  FUN_007ef010(auStack_1716,&local_1868);
  FUN_007e4920(local_1708,auStack_1716);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4d08 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0xe52d2dff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0xe5772dff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e51eff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0x77e52dff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0x1b8b1bff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0x39b7d6ff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0x2a91d6ff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0x3d3de5ff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0x894ce5ff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0xe55bc9ff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0xe5a898ff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0x8b5041ff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e5e5ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0x6e6e6eff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0x141414ff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f7a98;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f7a98:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 6
               );
  FUN_007ef010(auStack_1718,&local_1868);
  FUN_007e4920(local_1708,auStack_1718);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4d10 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0x4747d6ff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0x6b83e5ff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0x72d6aeff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0x3db887ff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0x297c6cff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0xe5b7dcff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0xe589c0ff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0xa93893ff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0xd64764ff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0xe5a23dff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e54cff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0xa9a92dff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0xd6dfe5ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0x71929aff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0xc3e5fff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f7d58;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f7d58:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 7
               );
  FUN_007ef010(auStack_171a,&local_1868);
  FUN_007e4920(local_1708,auStack_171a);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4d18 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0xc75d42ff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0xd6912aff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0xe5b46bff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0xa9734fff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0x6e443aff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0xa2c76aff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0x699a5cff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0x446e3aff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0x5b7c6fff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0x93b8b1ff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0x8787b8ff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0x5a5aa9ff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0xe5dcb7ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0x8b6e66ff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0x50392aff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f8018;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f8018:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 8
               );
  FUN_007ef010(auStack_171c,&local_1868);
  FUN_007e4920(local_1708,auStack_171c);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4d20 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0xc75d42ff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0xd6912aff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0xe5b46bff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0xa9734fff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0x6e443aff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0xa2c76aff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0x699a5cff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0x446e3aff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0x5b7c6fff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0x93b8b1ff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0x8787b8ff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0x5a5aa9ff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0xe5dcb7ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0x8b6e66ff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0x50392aff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007f82d8;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f82d8:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 9
               );
  FUN_007ef010(auStack_171e,&local_1868);
  FUN_007e4920(local_1708,auStack_171e);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4d28 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0xe5dcd6ff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0xe5c0a8ff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0xe5ae89ff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0xe59c6bff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0xc77f4fff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0xe58989ff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0xe56b6bff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0xc75d5dff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0xb86049ff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0x8b5041ff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0x8b5f41ff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0x6e4a33ff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0x503625ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0x322014ff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0x140e0aff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  puVar10 = PTR_DAT_04bb4d30;
  iVar7 = 0;
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007f885c;
        uVar11 = uVar11 + 1;
      } while (*(uint *)puVar3 != uVar11);
    }
    uVar11 = 0;
LAB_007f885c:
    local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar9 = (uint)uVar11;
    if (*(uint *)puVar3 <= uVar9) {
      uVar9 = 0;
    }
    local_1868 = (undefined **)
                 CONCAT62(local_1868._2_6_,
                          (ushort)iVar7 |
                          (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
    FUN_007ef010(auStack_1720,&local_1868);
    FUN_007e4920(local_1708,auStack_1720);
    if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e6c10(local_1708,*(undefined4 *)puVar10);
      iVar6 = FUN_007e6aa0(local_1708);
      if (iVar6 != 0) {
        uVar11 = 0;
        puVar12 = puVar10 + 0x31;
        do {
          iVar6 = FUN_007e6760(local_1708);
          if (iVar6 != 0) {
            uVar13 = 0;
            do {
              FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
              uVar13 = uVar13 + 1;
              uVar8 = FUN_007e6760(local_1708);
            } while (uVar13 < (uVar8 & 0xffffffff));
          }
          uVar11 = uVar11 + 1;
          uVar13 = FUN_007e6aa0(local_1708);
          puVar12 = puVar12 + 0x40;
        } while (uVar11 < (uVar13 & 0xffffffff));
      }
      uVar11 = (ulong)local_1bc0;
      local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
      local_1bc0._4_4_ = SUB84(uVar11,4);
      local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,0,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,1,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,2,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,3,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,4,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,5,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,6,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,7,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,8,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,9,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,10,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,0xb,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,0xc,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,0xd,&local_1bc0);
      local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
      local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
      FUN_007e7690(local_1708,0xe,&local_1bc0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 100);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007f89bc;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f89bc:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               CONCAT62(local_1868._2_6_,
                        (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
  FUN_007ef010(auStack_1722,&local_1868);
  FUN_007e4920(local_1708,auStack_1722);
  puVar10 = PTR_DAT_04bb4d38;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d38);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007f8d7c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f8d7c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 1
               );
  FUN_007ef010(auStack_1724,&local_1868);
  FUN_007e4920(local_1708,auStack_1724);
  puVar10 = PTR_DAT_04bb4d40;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d40);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007f913c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f913c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 2
               );
  FUN_007ef010(auStack_1726,&local_1868);
  FUN_007e4920(local_1708,auStack_1726);
  puVar10 = PTR_DAT_04bb4d48;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d48);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007f94fc;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f94fc:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 3
               );
  FUN_007ef010(auStack_1728,&local_1868);
  FUN_007e4920(local_1708,auStack_1728);
  puVar10 = PTR_DAT_04bb4d50;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d50);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007f98bc;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f98bc:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 4
               );
  FUN_007ef010(auStack_172a,&local_1868);
  FUN_007e4920(local_1708,auStack_172a);
  puVar10 = PTR_DAT_04bb4d58;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d58);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007f9c7c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007f9c7c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 5
               );
  FUN_007ef010(auStack_172c,&local_1868);
  FUN_007e4920(local_1708,auStack_172c);
  puVar10 = PTR_DAT_04bb4d60;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d60);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007fa03c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fa03c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 6
               );
  FUN_007ef010(auStack_172e,&local_1868);
  FUN_007e4920(local_1708,auStack_172e);
  puVar10 = PTR_DAT_04bb4d68;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d68);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007fa3fc;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fa3fc:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 7
               );
  FUN_007ef010(auStack_1730,&local_1868);
  FUN_007e4920(local_1708,auStack_1730);
  puVar10 = PTR_DAT_04bb4d70;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d70);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007fa7bc;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fa7bc:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 8
               );
  FUN_007ef010(auStack_1732,&local_1868);
  FUN_007e4920(local_1708,auStack_1732);
  puVar10 = PTR_DAT_04bb4d78;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d78);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007fab7c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fab7c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 9
               );
  FUN_007ef010(auStack_1734,&local_1868);
  FUN_007e4920(local_1708,auStack_1734);
  puVar10 = PTR_DAT_04bb4d80;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d80);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 2) goto LAB_007faf3c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007faf3c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               CONCAT62(local_1868._2_6_,
                        (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
  FUN_007ef010(auStack_1736,&local_1868);
  FUN_007e4920(local_1708,auStack_1736);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar10 = PTR_DAT_04bb4cd8 + 0x2d;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar10[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar10 = puVar10 + 0x20;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    local_1bc0._0_4_ = 0xe52d2dff;
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_4_ = 0xe5772dff;
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e51eff;
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_4_ = 0x77e52dff;
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_4_ = 0x1b8b1bff;
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_4_ = 0x39b7d6ff;
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_4_ = 0x2a91d6ff;
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_4_ = 0x3d3de5ff;
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_4_ = 0x894ce5ff;
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_4_ = 0xe55bc9ff;
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_4_ = 0xe5a898ff;
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_4_ = 0x8b5041ff;
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_4_ = 0xe5e5e5ff;
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_4_ = 0x6e6e6eff;
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0 = (undefined *)CONCAT44(local_1bc0._4_4_,0x141414ff);
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  iVar7 = 0;
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fb21c;
        uVar11 = uVar11 + 1;
      } while (*(uint *)puVar3 != uVar11);
    }
    uVar11 = 0;
LAB_007fb21c:
    local_1bc0 = (undefined *)((ulong)local_1bc0 & 0xffffffffffff0000);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar9 = (uint)uVar11;
    if (*(uint *)puVar3 <= uVar9) {
      uVar9 = 0;
    }
    local_1bc0 = (undefined *)
                 CONCAT62(local_1bc0._2_6_,
                          (ushort)iVar7 |
                          (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
    FUN_007ef010(auStack_1738,&local_1bc0);
    FUN_007e4920(local_1708,auStack_1738);
    if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e8cf0(local_1708,0,0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 8);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fb30c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fb30c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               CONCAT62(local_1868._2_6_,
                        (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
  FUN_007ef010(auStack_173a,&local_1868);
  FUN_007e4920(local_1708,auStack_173a);
  puVar10 = PTR_DAT_04bb4d88;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d88);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fb6cc;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fb6cc:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 1
               );
  FUN_007ef010(auStack_173c,&local_1868);
  FUN_007e4920(local_1708,auStack_173c);
  puVar10 = PTR_DAT_04bb4d90;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d90);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fba8c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fba8c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 2
               );
  FUN_007ef010(auStack_173e,&local_1868);
  FUN_007e4920(local_1708,auStack_173e);
  puVar10 = PTR_DAT_04bb4d98;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4d98);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fbe4c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fbe4c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 3
               );
  FUN_007ef010(auStack_1740,&local_1868);
  FUN_007e4920(local_1708,auStack_1740);
  puVar10 = PTR_DAT_04bb4da0;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4da0);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fc20c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fc20c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 4
               );
  FUN_007ef010(auStack_1742,&local_1868);
  FUN_007e4920(local_1708,auStack_1742);
  puVar10 = PTR_DAT_04bb4da8;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4da8);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fc5cc;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fc5cc:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 5
               );
  FUN_007ef010(auStack_1744,&local_1868);
  FUN_007e4920(local_1708,auStack_1744);
  puVar10 = PTR_DAT_04bb4db0;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4db0);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fc98c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fc98c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 6
               );
  FUN_007ef010(auStack_1746,&local_1868);
  FUN_007e4920(local_1708,auStack_1746);
  puVar10 = PTR_DAT_04bb4db8;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4db8);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fcd4c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fcd4c:
  local_1868 = (undefined **)((ulong)local_1868 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1868 = (undefined **)
               (CONCAT62(local_1868._2_6_,
                         (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb)) | 7
               );
  FUN_007ef010(auStack_1748,&local_1868);
  FUN_007e4920(local_1708,auStack_1748);
  puVar10 = PTR_DAT_04bb4dc0;
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e6c10(local_1708,*(undefined4 *)PTR_DAT_04bb4dc0);
    iVar7 = FUN_007e6aa0(local_1708);
    if (iVar7 != 0) {
      uVar11 = 0;
      puVar12 = puVar10 + 0x31;
      do {
        iVar7 = FUN_007e6760(local_1708);
        if (iVar7 != 0) {
          uVar13 = 0;
          do {
            FUN_007e70d0(local_1708,uVar13 & 0xffffffff,uVar11 & 0xffffffff,puVar12[uVar13]);
            uVar13 = uVar13 + 1;
            uVar8 = FUN_007e6760(local_1708);
          } while (uVar13 < (uVar8 & 0xffffffff));
        }
        uVar11 = uVar11 + 1;
        uVar13 = FUN_007e6aa0(local_1708);
        puVar12 = puVar12 + 0x40;
      } while (uVar11 < (uVar13 & 0xffffffff));
    }
    uVar11 = (ulong)local_1bc0;
    local_1bc0._0_2_ = CONCAT11(puVar10[6],0xff);
    local_1bc0._4_4_ = SUB84(uVar11,4);
    local_1bc0._0_4_ = CONCAT13(puVar10[4],CONCAT12(puVar10[5],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[9],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[7],CONCAT12(puVar10[8],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,1,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xc],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[10],CONCAT12(puVar10[0xb],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,2,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0xf],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0xd],CONCAT12(puVar10[0xe],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,3,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x12],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x10],CONCAT12(puVar10[0x11],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,4,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x15],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x13],CONCAT12(puVar10[0x14],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,5,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x18],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x16],CONCAT12(puVar10[0x17],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,6,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1b],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x19],CONCAT12(puVar10[0x1a],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,7,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x1e],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1c],CONCAT12(puVar10[0x1d],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,8,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x21],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x1f],CONCAT12(puVar10[0x20],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,9,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x24],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x22],CONCAT12(puVar10[0x23],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,10,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x27],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x25],CONCAT12(puVar10[0x26],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xb,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2a],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x28],CONCAT12(puVar10[0x29],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xc,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x2d],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2b],CONCAT12(puVar10[0x2c],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xd,&local_1bc0);
    local_1bc0._0_2_ = CONCAT11(puVar10[0x30],0xff);
    local_1bc0._0_4_ = CONCAT13(puVar10[0x2e],CONCAT12(puVar10[0x2f],(undefined2)local_1bc0));
    FUN_007e7690(local_1708,0xe,&local_1bc0);
  }
  local_1860 = &local_1788;
  local_1854 = 0;
  local_1858 = 0x20;
  local_1830 = local_1824;
  local_1850 = 0xffffffff;
  local_1848 = 0xffffffff00000000;
  local_1840 = 0xffffffff;
  local_1828 = 0x40;
  local_17e5 = 0;
  local_1824[0] = 0;
  puVar10 = PTR_DAT_04bb2bc0 + 0x10;
  local_17d8 = local_17cc;
  puVar1 = auStack_1748;
  if (auStack_1748 <= (undefined1 *)((long)&local_1788 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_1788 + 2U);
  }
  local_17d0 = 0x40;
  local_178d = 0;
  local_17cc[0] = 0;
  local_1868 = &PTR_LAB_049173e0;
  local_1750 = 0;
  local_1758 = 0;
  local_1760 = 0;
  local_1768 = 0;
  local_1770 = 0;
  local_1778 = 0;
  local_1780 = 0;
  local_1788 = 0;
  local_1838 = puVar10;
  local_17e0 = puVar10;
  memset(local_1860,0,(size_t)(puVar1 + (-0xe0 - (long)&local_1868)));
  local_1978 = 0x20;
  local_1950 = local_1944;
  local_1974 = 0;
  local_18f8 = local_18ec;
  local_1980 = local_18a8;
  pppuVar2 = &local_1868;
  if (&local_1868 <= local_18a8 + 2) {
    pppuVar2 = (undefined ***)(local_18a8 + 2);
  }
  local_1970 = 0xffffffff;
  local_1968 = 0xffffffff00000000;
  local_1960 = 0xffffffff;
  local_1948 = 0x40;
  local_1905 = 0;
  local_1944[0] = 0;
  local_18f0 = 0x40;
  local_18ad = 0;
  local_18ec[0] = 0;
  local_1988 = &PTR_LAB_049173e0;
  local_1870 = 0;
  local_1878 = 0;
  local_1880 = 0;
  local_1888 = 0;
  local_1890 = 0;
  local_1898 = 0;
  local_18a0 = 0;
  local_18a8 = (undefined1  [8])0x0;
  local_1958 = puVar10;
  local_1900 = puVar10;
  memset(local_1980,0,(size_t)((long)pppuVar2 + (-0xe0 - (long)&local_1988)));
  memset(auStack_1bb8,0,0x1e0);
  local_1b88 = 0;
  uStack_1b80 = 0;
  local_1b58 = 0;
  uStack_1b50 = 0;
  iVar7 = 0;
  local_1ba8 = PTR_DAT_04bb2d80 + 0x10;
  local_1b28 = 0;
  uStack_1b20 = 0;
  local_19d8 = 0xffffffff;
  local_1af8 = 0;
  uStack_1af0 = 0;
  local_1ac8 = 0;
  uStack_1ac0 = 0;
  local_1a98 = 0;
  uStack_1a90 = 0;
  local_1a68 = 0;
  uStack_1a60 = 0;
  local_1a38 = 0;
  uStack_1a30 = 0;
  local_1a08 = 0;
  uStack_1a00 = 0;
  local_19d0 = 0;
  uStack_19c8 = 0;
  local_1bc0 = PTR_DAT_04bb2d58 + 0x10;
  local_19c0 = 0;
  local_19bc = 0;
  local_19b8 = PTR_DAT_04bb2e08 + 0x10;
  local_19b0 = 0;
  local_19a8 = 0;
  puVar10 = PTR_DAT_04bb2028 + 0x10;
  local_19a0 = 0;
  local_1998 = 0;
  puVar12 = PTR_DAT_04bb2020 + 0x10;
  local_1990 = 1;
  local_198c = 0;
  local_1b78 = local_1ba8;
  local_1b48 = local_1ba8;
  local_1b18 = local_1ba8;
  local_1ae8 = local_1ba8;
  local_1ab8 = local_1ba8;
  local_1a88 = local_1ba8;
  local_1a58 = local_1ba8;
  local_1a28 = local_1ba8;
  local_19f8 = local_1ba8;
LAB_007fd32c:
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007fd368;
        uVar11 = uVar11 + 1;
      } while (*(uint *)puVar3 != uVar11);
    }
    uVar11 = 0;
LAB_007fd368:
    local_1bc4[0] = 0;
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar9 = (uint)uVar11;
    if (*(uint *)puVar3 <= uVar9) {
      uVar9 = 0;
    }
    local_1bc4[0] =
         (ushort)iVar7 & 0x7f |
         (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb);
    FUN_007ef010(auStack_1bc6,local_1bc4);
    FUN_007e4920(local_1708,auStack_1bc6);
    if ((local_1708[0] == *(short *)puVar5) || (local_16f8 == 0 && local_1700 == 0)) {
      iVar7 = iVar7 + 1;
      if (iVar7 == 100) break;
      goto LAB_007fd32c;
    }
    iVar7 = iVar7 + 1;
    local_1bf0 = 0x20;
    local_1bcd = 0;
    local_1bec[0] = 0;
    local_1c00 = puVar10;
    local_1bf8 = local_1bec;
    FUN_038d1270(&local_1c00,&DAT_0405bf91,iVar7);
    pcStack_1c08 = "STR_MydesignDefaultName";
    local_1c10 = puVar12;
    (**(code **)(local_1c00 + 0x18))(&local_1c00);
    puStack_1c18 = local_1bf8;
    local_1c20 = puVar12;
    FUN_006f50a0(&local_1868,&local_1c10,&local_1c20,0);
    FUN_006f2100(&local_1bc0,&local_1988,&local_1868);
    FUN_007e5fd0(local_1708,&local_1988);
  } while (iVar7 != 100);
  iVar7 = 0;
  puVar10 = PTR_DAT_04bb2028 + 0x10;
  puVar12 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007fd51c;
        uVar11 = uVar11 + 1;
      } while (*(uint *)puVar3 != uVar11);
    }
    uVar11 = 0;
LAB_007fd51c:
    local_1bc4[0] = 0;
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar9 = (uint)uVar11;
    if (*(uint *)puVar3 <= uVar9) {
      uVar9 = 0;
    }
    local_1bc4[0] =
         (ushort)iVar7 | (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb);
    FUN_007ef010(auStack_1c22,local_1bc4);
    FUN_007e4920(local_1708,auStack_1c22);
    if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
      local_1bf0 = 0x20;
      local_1bcd = 0;
      local_1bec[0] = 0;
      local_1c00 = puVar10;
      local_1bf8 = local_1bec;
      FUN_038d1270(&local_1c00,&DAT_0405bf91,iVar7 + 0x65);
      pcStack_1c08 = "STR_MydesignDefaultName";
      local_1c10 = puVar12;
      (**(code **)(local_1c00 + 0x18))(&local_1c00);
      puStack_1c18 = local_1bf8;
      local_1c20 = puVar12;
      FUN_006f50a0(&local_1868,&local_1c10,&local_1c20,0);
      FUN_006f2100(&local_1bc0,&local_1988,&local_1868);
      FUN_007e5fd0(local_1708,&local_1988);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 100);
  iVar7 = 0;
  puVar10 = PTR_DAT_04bb2028 + 0x10;
  puVar12 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fd6bc;
        uVar11 = uVar11 + 1;
      } while (*(uint *)puVar3 != uVar11);
    }
    uVar11 = 0;
LAB_007fd6bc:
    local_1bc4[0] = 0;
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar9 = (uint)uVar11;
    if (*(uint *)puVar3 <= uVar9) {
      uVar9 = 0;
    }
    local_1bc4[0] =
         (ushort)iVar7 | (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb);
    FUN_007ef010(auStack_1c24,local_1bc4);
    FUN_007e4920(local_1708,auStack_1c24);
    if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
      local_1bf0 = 0x20;
      local_1bcd = 0;
      local_1bec[0] = 0;
      local_1c00 = puVar10;
      local_1bf8 = local_1bec;
      FUN_038d1270(&local_1c00,&DAT_0405bf91,iVar7 + 0xc9);
      pcStack_1c08 = "STR_MydesignDefaultName";
      local_1c10 = puVar12;
      (**(code **)(local_1c00 + 0x18))(&local_1c00);
      puStack_1c18 = local_1bf8;
      local_1c20 = puVar12;
      FUN_006f50a0(&local_1868,&local_1c10,&local_1c20,0);
      FUN_006f2100(&local_1bc0,&local_1988,&local_1868);
      FUN_007e5fd0(local_1708,&local_1988);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 8);
  iVar7 = 0;
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 0) goto LAB_007fd838;
        uVar11 = uVar11 + 1;
      } while (*(uint *)puVar3 != uVar11);
    }
    uVar11 = 0;
LAB_007fd838:
    local_1bc0 = (undefined *)((ulong)local_1bc0 & 0xffffffffffff0000);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar9 = (uint)uVar11;
    if (*(uint *)puVar3 <= uVar9) {
      uVar9 = 0;
    }
    local_1bc0 = (undefined *)
                 CONCAT62(local_1bc0._2_6_,
                          (ushort)iVar7 |
                          (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
    FUN_007ef010(auStack_1c26,&local_1bc0);
    FUN_007e4920(local_1708,auStack_1c26);
    if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e7b10(local_1708);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 100);
  iVar7 = 0;
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 1) goto LAB_007fd93c;
        uVar11 = uVar11 + 1;
      } while (*(uint *)puVar3 != uVar11);
    }
    uVar11 = 0;
LAB_007fd93c:
    local_1bc0 = (undefined *)((ulong)local_1bc0 & 0xffffffffffff0000);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar9 = (uint)uVar11;
    if (*(uint *)puVar3 <= uVar9) {
      uVar9 = 0;
    }
    local_1bc0 = (undefined *)
                 CONCAT62(local_1bc0._2_6_,
                          (ushort)iVar7 |
                          (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
    FUN_007ef010(auStack_1c28,&local_1bc0);
    FUN_007e4920(local_1708,auStack_1c28);
    if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e7b10(local_1708);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 100);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 2) goto LAB_007fda20;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar3 != uVar11);
  }
  uVar11 = 0;
LAB_007fda20:
  local_1bc0 = (undefined *)((ulong)local_1bc0 & 0xffffffffffff0000);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = (uint)uVar11;
  if (*(uint *)puVar3 <= uVar9) {
    uVar9 = 0;
  }
  local_1bc0 = (undefined *)
               CONCAT62(local_1bc0._2_6_,
                        (short)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
  FUN_007ef010(auStack_1c2a,&local_1bc0);
  FUN_007e4920(local_1708,auStack_1c2a);
  if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
    FUN_007e7b10(local_1708);
  }
  iVar7 = 0;
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar11 * 4) == 3) goto LAB_007fdadc;
        uVar11 = uVar11 + 1;
      } while (*(uint *)puVar3 != uVar11);
    }
    uVar11 = 0;
LAB_007fdadc:
    local_1bc0 = (undefined *)((ulong)local_1bc0 & 0xffffffffffff0000);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar9 = (uint)uVar11;
    if (*(uint *)puVar3 <= uVar9) {
      uVar9 = 0;
    }
    local_1bc0 = (undefined *)
                 CONCAT62(local_1bc0._2_6_,
                          (ushort)iVar7 |
                          (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar9 * 4) << 0xb));
    FUN_007ef010(auStack_1c2c,&local_1bc0);
    FUN_007e4920(local_1708,auStack_1c2c);
    if ((local_1708[0] != *(short *)puVar5) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e7b10(local_1708);
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 8) {
      return;
    }
  } while( true );
}

