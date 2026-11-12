
void FUN_007f2e80(void)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ushort uVar9;
  ushort uVar10;
  long lVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined1 auStack_175c [2];
  undefined1 auStack_175a [2];
  undefined1 auStack_1758 [2];
  undefined1 auStack_1756 [2];
  undefined1 auStack_1754 [2];
  undefined1 auStack_1752 [2];
  undefined8 local_1750;
  undefined8 local_1748;
  undefined8 uStack_1740;
  undefined4 local_1738;
  undefined1 auStack_1712 [2];
  short local_1710 [4];
  long local_1708;
  long lStack_1700;
  ushort local_6c [6];
  
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) {
    return;
  }
  puVar12 = *(undefined8 **)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
    lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
    if (lVar11 == 0) {
      return;
    }
    lVar11 = lVar11 + 0x70;
  }
  else {
    if (puVar12 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar12[0x26] == (long *)0x0) {
      return;
    }
    lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
    if (lVar11 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar11 + 0xe7290) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xe7290), puVar12 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar12)();
    uVar8 = uVar8 & 0xffffffff;
  }
  puVar5 = PTR_DAT_04bb3170;
  puVar4 = PTR_DAT_04bb3128;
  puVar3 = PTR_DAT_04bb3120;
  puVar12 = (undefined8 *)(*(long *)(lVar11 + 0xe7278) + *(long *)(lVar11 + 0xe7270));
  if (*(short *)((long)puVar12 + 4) == 0) goto LAB_007f3acc;
  DAT_04ccaca0 = *puVar12;
  DAT_04ccaca8 = puVar12[1];
  DAT_04ccacb0 = puVar12[2];
  DAT_04ccacb8 = *(undefined4 *)(puVar12 + 3);
  iVar7 = 0;
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar16 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar16 * 4) == 0) goto LAB_007f2fc8;
        uVar16 = uVar16 + 1;
      } while (*(uint *)puVar3 != uVar16);
    }
    uVar16 = 0;
LAB_007f2fc8:
    local_6c[0] = 0;
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar15 = (uint)uVar16;
    if (*(uint *)puVar3 <= uVar15) {
      uVar15 = 0;
    }
    local_6c[0] = (ushort)iVar7 |
                  (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar15 * 4) << 0xb);
    FUN_007ef010(auStack_1712,local_6c);
    FUN_007e4920(local_1710,auStack_1712);
    if ((local_1710[0] != *(short *)puVar5) && (lStack_1700 != 0 || local_1708 != 0)) {
      FUN_007e6230(&local_1750,local_1710);
      if (((int)local_1750 != 0) && (local_1750._4_2_ == 0)) {
        local_1750 = *puVar12;
        local_1748 = puVar12[1];
        uStack_1740 = puVar12[2];
        local_1738 = *(undefined4 *)(puVar12 + 3);
        FUN_007e64e0(local_1710,&local_1750);
        FUN_007e7b10(local_1710);
      }
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
      uVar16 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar16 * 4) == 1) goto LAB_007f310c;
        uVar16 = uVar16 + 1;
      } while (*(uint *)puVar3 != uVar16);
    }
    uVar16 = 0;
LAB_007f310c:
    local_6c[0] = 0;
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar15 = (uint)uVar16;
    if (*(uint *)puVar3 <= uVar15) {
      uVar15 = 0;
    }
    local_6c[0] = (ushort)iVar7 |
                  (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar15 * 4) << 0xb);
    FUN_007ef010(auStack_1752,local_6c);
    FUN_007e4920(local_1710,auStack_1752);
    if ((local_1710[0] != *(short *)puVar5) && (lStack_1700 != 0 || local_1708 != 0)) {
      FUN_007e6230(&local_1750,local_1710);
      if (((int)local_1750 != 0) && (local_1750._4_2_ == 0)) {
        local_1750 = *puVar12;
        local_1748 = puVar12[1];
        uStack_1740 = puVar12[2];
        local_1738 = *(undefined4 *)(puVar12 + 3);
        FUN_007e64e0(local_1710,&local_1750);
        FUN_007e7b10(local_1710);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 100);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar16 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar16 * 4) == 2) goto LAB_007f322c;
      uVar16 = uVar16 + 1;
    } while (*(uint *)puVar3 != uVar16);
  }
  uVar16 = 0;
LAB_007f322c:
  local_6c[0] = 0;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar15 = (uint)uVar16;
  if (*(uint *)puVar3 <= uVar15) {
    uVar15 = 0;
  }
  local_6c[0] = (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar15 * 4) << 0xb);
  FUN_007ef010(auStack_1754,local_6c);
  FUN_007e4920(local_1710,auStack_1754);
  if ((local_1710[0] != *(short *)puVar5) && (lStack_1700 != 0 || local_1708 != 0)) {
    FUN_007e6230(&local_1750,local_1710);
    if (((int)local_1750 != 0) && (local_1750._4_2_ == 0)) {
      local_1750 = *puVar12;
      local_1748 = puVar12[1];
      uStack_1740 = puVar12[2];
      local_1738 = *(undefined4 *)(puVar12 + 3);
      FUN_007e64e0(local_1710,&local_1750);
      FUN_007e7b10(local_1710);
    }
  }
  pbVar17 = PTR_DAT_04bb32e0;
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_007f3344;
LAB_007f33a4:
    uVar10 = (ushort)*pbVar13;
    if (7 < uVar10) {
      uVar10 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar14 + 0x158);
    }
    if ((*pbVar13 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar13 < 8)))) goto LAB_007f33a4;
LAB_007f3344:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_007f339c:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_007f33a4;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar14 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar13 = (byte *)(lVar14 + 0x471);
      }
    }
    uVar10 = (ushort)*pbVar13;
    if (7 < *pbVar13) goto LAB_007f339c;
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar16 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar16 * 4) == 8) goto LAB_007f33f0;
      uVar16 = uVar16 + 1;
    } while (*(uint *)puVar3 != uVar16);
  }
  uVar16 = 0;
LAB_007f33f0:
  local_6c[0] = 0;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar15 = (uint)uVar16;
  if (*(uint *)puVar3 <= uVar15) {
    uVar15 = 0;
  }
  if (7 < uVar10) {
    uVar10 = 0x7f;
  }
  local_6c[0] = uVar10 | (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar15 * 4) << 0xb) |
                0x780;
  FUN_007ef010(auStack_1756,local_6c);
  FUN_007e4920(local_1710,auStack_1756);
  if ((local_1710[0] != *(short *)puVar5) && (lStack_1700 != 0 || local_1708 != 0)) {
    FUN_007e6230(&local_1750,local_1710);
    if (((int)local_1750 != 0) && (local_1750._4_2_ == 0)) {
      local_1750 = *puVar12;
      local_1748 = puVar12[1];
      uStack_1740 = puVar12[2];
      local_1738 = *(undefined4 *)(puVar12 + 3);
      FUN_007e64e0(local_1710,&local_1750);
      FUN_007e7b10(local_1710);
    }
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = pbVar17;
  if (lVar14 == 0) {
    if (7 < *pbVar17) goto LAB_007f3510;
LAB_007f3570:
    uVar10 = (ushort)*pbVar13;
    if (7 < uVar10) {
      uVar10 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar14 + 0x158);
    }
    if ((*pbVar13 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar13 < 8)))) goto LAB_007f3570;
LAB_007f3510:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_007f3568:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_007f3570;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar14 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar13 = (byte *)(lVar14 + 0x471);
      }
    }
    uVar10 = (ushort)*pbVar13;
    if (7 < *pbVar13) goto LAB_007f3568;
  }
  uVar9 = uVar10 & 0x7f;
  iVar7 = 0;
  if (7 < uVar10) {
    uVar9 = 0x7f;
  }
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar16 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar16 * 4) == 8) goto LAB_007f35ec;
        uVar16 = uVar16 + 1;
      } while (*(uint *)puVar3 != uVar16);
    }
    uVar16 = 0;
LAB_007f35ec:
    local_6c[0] = 0;
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar15 = (uint)uVar16;
    if (*(uint *)puVar3 <= uVar15) {
      uVar15 = 0;
    }
    local_6c[0] = (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar15 * 4) << 0xb) |
                  (ushort)(iVar7 << 7) | uVar9;
    FUN_007ef010(auStack_1758,local_6c);
    FUN_007e4920(local_1710,auStack_1758);
    if ((local_1710[0] != *(short *)puVar5) && (lStack_1700 != 0 || local_1708 != 0)) {
      FUN_007e6230(&local_1750,local_1710);
      if (((int)local_1750 != 0) && (local_1750._4_2_ == 0)) {
        local_1750 = *puVar12;
        local_1748 = puVar12[1];
        uStack_1740 = puVar12[2];
        local_1738 = *(undefined4 *)(puVar12 + 3);
        FUN_007e64e0(local_1710,&local_1750);
        FUN_007e7b10(local_1710);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 8);
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = pbVar17;
  if (lVar14 == 0) {
    if (7 < *pbVar17) goto LAB_007f3748;
LAB_007f37a8:
    uVar10 = (ushort)*pbVar13;
    if (7 < uVar10) {
      uVar10 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar14 + 0x158);
    }
    if ((*pbVar13 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar13 < 8)))) goto LAB_007f37a8;
LAB_007f3748:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_007f37a0:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_007f37a8;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar14 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar13 = (byte *)(lVar14 + 0x471);
      }
    }
    uVar10 = (ushort)*pbVar13;
    if (7 < *pbVar13) goto LAB_007f37a0;
  }
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar16 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 8) + uVar16 * 4) == 10) goto LAB_007f37f0;
      uVar16 = uVar16 + 1;
    } while (*(uint *)puVar3 != uVar16);
  }
  uVar16 = 0;
LAB_007f37f0:
  local_6c[0] = 0;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar15 = (uint)uVar16;
  if (*(uint *)puVar3 <= uVar15) {
    uVar15 = 0;
  }
  if (7 < uVar10) {
    uVar10 = 0x7f;
  }
  local_6c[0] = uVar10 | (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar15 * 4) << 0xb) |
                0x780;
  FUN_007ef010(auStack_175a,local_6c);
  FUN_007e4920(local_1710,auStack_175a);
  if ((local_1710[0] != *(short *)puVar5) && (lStack_1700 != 0 || local_1708 != 0)) {
    FUN_007e6230(&local_1750,local_1710);
    if (((int)local_1750 != 0) && (local_1750._4_2_ == 0)) {
      local_1750 = *puVar12;
      local_1748 = puVar12[1];
      uStack_1740 = puVar12[2];
      local_1738 = *(undefined4 *)(puVar12 + 3);
      FUN_007e64e0(local_1710,&local_1750);
      FUN_007e7b10(local_1710);
    }
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  if (lVar14 == 0) {
LAB_007f38f4:
    if (*pbVar17 < 8) goto LAB_007f3960;
LAB_007f3900:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_007f3958:
      pbVar17 = PTR_DAT_04bb5038;
      goto LAB_007f3960;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar14 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar13 = (byte *)(lVar14 + 0x471);
      }
    }
    uVar10 = (ushort)*pbVar13;
    if (7 < *pbVar13) goto LAB_007f3958;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar17) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_007f38f4;
      }
      goto LAB_007f3900;
    }
LAB_007f3960:
    uVar10 = (ushort)*pbVar17;
    if (7 < uVar10) {
      uVar10 = 0xff;
    }
  }
  uVar9 = uVar10 & 0x7f;
  iVar7 = 0;
  if (7 < uVar10) {
    uVar9 = 0x7f;
  }
  do {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    if (0 < (int)*(uint *)puVar3) {
      uVar16 = 0;
      do {
        if (*(int *)(*(long *)(puVar3 + 8) + uVar16 * 4) == 10) goto LAB_007f39dc;
        uVar16 = uVar16 + 1;
      } while (*(uint *)puVar3 != uVar16);
    }
    uVar16 = 0;
LAB_007f39dc:
    local_6c[0] = 0;
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_00706e58(puVar3);
      __cxa_guard_release(puVar4);
    }
    uVar15 = (uint)uVar16;
    if (*(uint *)puVar3 <= uVar15) {
      uVar15 = 0;
    }
    local_6c[0] = (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar15 * 4) << 0xb) |
                  (ushort)(iVar7 << 7) | uVar9;
    FUN_007ef010(auStack_175c,local_6c);
    FUN_007e4920(local_1710,auStack_175c);
    if ((local_1710[0] != *(short *)puVar5) && (lStack_1700 != 0 || local_1708 != 0)) {
      FUN_007e6230(&local_1750,local_1710);
      if (((int)local_1750 != 0) && (local_1750._4_2_ == 0)) {
        local_1750 = *puVar12;
        local_1748 = puVar12[1];
        uStack_1740 = puVar12[2];
        local_1738 = *(undefined4 *)(puVar12 + 3);
        FUN_007e64e0(local_1710,&local_1750);
        FUN_007e7b10(local_1710);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 8);
LAB_007f3acc:
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0xe7290) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xe7290) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  return;
}

