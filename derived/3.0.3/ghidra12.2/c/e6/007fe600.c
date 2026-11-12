
/* WARNING: Type propagation algorithm not settling */

void FUN_007fe600(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ushort *puVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_1bea [2];
  undefined1 auStack_1be8 [2];
  undefined1 auStack_1be6 [2];
  undefined1 auStack_1be4 [2];
  undefined1 auStack_1be2 [2];
  undefined *local_1be0;
  undefined1 *puStack_1bd8;
  undefined *local_1bd0;
  char *pcStack_1bc8;
  undefined *local_1bc0;
  undefined1 *local_1bb8;
  undefined4 local_1bb0;
  undefined1 local_1bac [31];
  undefined1 local_1b8d;
  undefined1 auStack_1b86 [2];
  ushort local_1b84 [2];
  undefined8 local_1b80;
  long local_1b78;
  long lStack_1b70;
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
  undefined8 uStack_19c0;
  undefined *local_19b8;
  undefined4 local_1998;
  undefined8 local_1990;
  undefined8 uStack_1988;
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
  ushort local_1708 [4];
  long local_1700;
  long local_16f8;
  
  puVar8 = PTR_DAT_04bb3170;
  puVar7 = PTR_DAT_04bb3128;
  puVar6 = PTR_DAT_04bb3120;
  iVar10 = 0;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fe69c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007fe69c:
    local_1b80 = (undefined *)((ulong)local_1b80 & 0xffffffffffff0000);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1b80 = (undefined *)
                 CONCAT62(local_1b80._2_6_,
                          (ushort)iVar10 |
                          (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb));
    FUN_007ef010(auStack_1be6,&local_1b80);
    FUN_007e4920(local_1708,auStack_1be6);
    if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e80d0(local_1708);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 100);
  iVar10 = 0;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fe79c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007fe79c:
    local_1b80 = (undefined *)((ulong)local_1b80 & 0xffffffffffff0000);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1b80 = (undefined *)
                 (CONCAT62(local_1b80._2_6_,
                           (ushort)iVar10 |
                           (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb))
                 | 0x80);
    FUN_007ef010(auStack_1be8,&local_1b80);
    FUN_007e4920(local_1708,auStack_1be8);
    if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e80d0(local_1708);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 100);
  iVar10 = 0;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fe89c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007fe89c:
    local_1b80 = (undefined *)((ulong)local_1b80 & 0xffffffffffff0000);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1b80 = (undefined *)
                 (CONCAT62(local_1b80._2_6_,
                           (ushort)iVar10 |
                           (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb))
                 | 0x100);
    FUN_007ef010(auStack_1bea,&local_1b80);
    FUN_007e4920(local_1708,auStack_1bea);
    if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e80d0(local_1708);
    }
    puVar1 = PTR_DAT_04bb4cd0;
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0xc);
  iVar10 = 0;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fe99c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007fe99c:
    local_1708[0] = 0;
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1708[0] =
         (ushort)iVar10 | (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb);
    FUN_0080de00(local_1708,puVar1);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 100);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fea5c;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007fea5c:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb);
  FUN_0080de00(local_1708,PTR_DAT_04bb4ce0);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007feacc;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007feacc:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 1;
  FUN_0080de00(local_1708,PTR_DAT_04bb4ce8);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007feb40;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007feb40:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 2;
  FUN_0080de00(local_1708,PTR_DAT_04bb4cf0);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007febbc;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007febbc:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 3;
  FUN_0080de00(local_1708,PTR_DAT_04bb4cf8);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fec30;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007fec30:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 4;
  FUN_0080de00(local_1708,PTR_DAT_04bb4d00);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fecac;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007fecac:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 5;
  FUN_0080de00(local_1708,PTR_DAT_04bb4d08);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fed20;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007fed20:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 6;
  FUN_0080de00(local_1708,PTR_DAT_04bb4d10);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fed9c;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007fed9c:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 7;
  FUN_0080de00(local_1708,PTR_DAT_04bb4d18);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fee10;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007fee10:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 8;
  FUN_0080de00(local_1708,PTR_DAT_04bb4d20);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fee8c;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007fee8c:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 9;
  FUN_0080de00(local_1708,PTR_DAT_04bb4d28);
  puVar1 = PTR_DAT_04bb4d30;
  iVar10 = 0;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fef0c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007fef0c:
    local_1708[0] = 0;
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1708[0] =
         (ushort)iVar10 | (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) |
         0x80;
    FUN_0080e180(local_1708,puVar1);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 100);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007fefcc;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007fefcc:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x80;
  FUN_0080e180(local_1708,PTR_DAT_04bb4d38);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff040;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007ff040:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x81;
  FUN_0080e180(local_1708,PTR_DAT_04bb4d40);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff0bc;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007ff0bc:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x82;
  FUN_0080e180(local_1708,PTR_DAT_04bb4d48);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff130;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007ff130:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x83;
  FUN_0080e180(local_1708,PTR_DAT_04bb4d50);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff1ac;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007ff1ac:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x84;
  FUN_0080e180(local_1708,PTR_DAT_04bb4d58);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff220;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007ff220:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x85;
  FUN_0080e180(local_1708,PTR_DAT_04bb4d60);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff29c;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007ff29c:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x86;
  FUN_0080e180(local_1708,PTR_DAT_04bb4d68);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff310;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007ff310:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x87;
  FUN_0080e180(local_1708,PTR_DAT_04bb4d70);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff38c;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007ff38c:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x88;
  FUN_0080e180(local_1708,PTR_DAT_04bb4d78);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar6) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff400;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar6 != uVar14);
  }
  uVar14 = 0;
LAB_007ff400:
  local_1708[0] = 0;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar13 = (uint)uVar14;
  if (*(uint *)puVar6 <= uVar13) {
    uVar13 = 0;
  }
  local_1708[0] = (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x89;
  FUN_0080e180(local_1708,PTR_DAT_04bb4d80);
  puVar1 = PTR_DAT_04bb4cd0;
  iVar10 = 0;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff48c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007ff48c:
    local_1708[0] = 0;
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1708[0] =
         (ushort)iVar10 | (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) |
         0x100;
    FUN_0080de00(local_1708,puVar1);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0xc);
  local_1814 = 0;
  local_1820 = &local_1748;
  local_1818 = 0x20;
  local_17f0 = local_17e4;
  local_1810 = 0xffffffff;
  local_1808 = 0xffffffff00000000;
  local_1800 = 0xffffffff;
  local_17e8 = 0x40;
  local_17a5 = 0;
  local_17e4[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_1798 = local_178c;
  puVar4 = local_1708;
  if (local_1708 <= (ushort *)((long)&local_1748 + 2U)) {
    puVar4 = (ushort *)((long)&local_1748 + 2U);
  }
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
  local_17f8 = puVar1;
  local_17a0 = puVar1;
  memset(local_1820,0,(long)puVar4 + (-0xe0 - (long)&local_1828));
  local_1938 = 0x20;
  local_1910 = local_1904;
  local_1934 = 0;
  local_18b8 = local_18ac;
  local_1940 = local_1868;
  pppuVar5 = &local_1828;
  if (&local_1828 <= local_1868 + 2) {
    pppuVar5 = (undefined ***)(local_1868 + 2);
  }
  local_1930 = 0xffffffff;
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
  local_1918 = puVar1;
  local_18c0 = puVar1;
  memset(local_1940,0,(size_t)((long)pppuVar5 + (-0xe0 - (long)&local_1948)));
  memset(&local_1b78,0,0x1e0);
  local_1b48 = 0;
  uStack_1b40 = 0;
  local_1b18 = 0;
  uStack_1b10 = 0;
  iVar10 = 0;
  local_1b68 = PTR_DAT_04bb2d80 + 0x10;
  local_1ae8 = 0;
  uStack_1ae0 = 0;
  local_1998 = 0xffffffff;
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
  local_19c8 = 0;
  uStack_19c0 = 0;
  local_1990 = 0;
  uStack_1988 = 0;
  local_1b80 = PTR_DAT_04bb2d58 + 0x10;
  local_1980 = 0;
  local_197c = 0;
  local_1978 = PTR_DAT_04bb2e08 + 0x10;
  local_1970 = 0;
  local_1968 = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  local_1960 = 0;
  local_1958 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_1950 = 1;
  local_194c = 0;
  local_1b38 = local_1b68;
  local_1b08 = local_1b68;
  local_1ad8 = local_1b68;
  local_1aa8 = local_1b68;
  local_1a78 = local_1b68;
  local_1a48 = local_1b68;
  local_1a18 = local_1b68;
  local_19e8 = local_1b68;
  local_19b8 = local_1b68;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff7ac;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007ff7ac:
    local_1b84[0] = 0;
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1b84[0] =
         (ushort)iVar10 & 0x7f |
         (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb);
    FUN_007ef010(auStack_1b86,local_1b84);
    FUN_007e4920(local_1708,auStack_1b86);
    if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
      local_1b8d = 0;
      local_1bb0 = 0x20;
      local_1bac[0] = 0;
      local_1bc0 = puVar1;
      local_1bb8 = local_1bac;
      FUN_038d1270(&local_1bc0,&DAT_0405bf91,iVar10 + 1);
      pcStack_1bc8 = "STR_MydesignDefaultName";
      local_1bd0 = puVar2;
      (**(code **)(local_1bc0 + 0x18))(&local_1bc0);
      puStack_1bd8 = local_1bb8;
      local_1be0 = puVar2;
      FUN_006f50a0(&local_1828,&local_1bd0,&local_1be0,0);
      FUN_006f2100(&local_1b80,&local_1948,&local_1828);
      FUN_007e5fd0(local_1708,&local_1948);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 100);
  iVar10 = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ff95c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007ff95c:
    local_1b84[0] = 0;
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1b84[0] =
         (ushort)iVar10 | (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) |
         0x80;
    FUN_007ef010(auStack_1be2,local_1b84);
    FUN_007e4920(local_1708,auStack_1be2);
    if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
      local_1b8d = 0;
      local_1bb0 = 0x20;
      local_1bac[0] = 0;
      local_1bc0 = puVar1;
      local_1bb8 = local_1bac;
      FUN_038d1270(&local_1bc0,&DAT_0405bf91,iVar10 + 0x65);
      pcStack_1bc8 = "STR_MydesignDefaultName";
      local_1bd0 = puVar2;
      (**(code **)(local_1bc0 + 0x18))(&local_1bc0);
      puStack_1bd8 = local_1bb8;
      local_1be0 = puVar2;
      FUN_006f50a0(&local_1828,&local_1bd0,&local_1be0,0);
      FUN_006f2100(&local_1b80,&local_1948,&local_1828);
      FUN_007e5fd0(local_1708,&local_1948);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 100);
  iVar10 = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ffafc;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007ffafc:
    local_1b84[0] = 0;
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1b84[0] =
         (ushort)iVar10 | (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb) |
         0x100;
    FUN_007ef010(auStack_1be4,local_1b84);
    FUN_007e4920(local_1708,auStack_1be4);
    if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
      local_1b8d = 0;
      local_1bb0 = 0x20;
      local_1bac[0] = 0;
      local_1bc0 = puVar1;
      local_1bb8 = local_1bac;
      FUN_038d1270(&local_1bc0,&DAT_0405bf91,iVar10 + 10);
      pcStack_1bc8 = "STR_MydesignDefaultName";
      local_1bd0 = puVar2;
      (**(code **)(local_1bc0 + 0x18))(&local_1bc0);
      puStack_1bd8 = local_1bb8;
      local_1be0 = puVar2;
      FUN_006f50a0(&local_1828,&local_1bd0,&local_1be0,0);
      FUN_006f2100(&local_1b80,&local_1948,&local_1828);
      FUN_007e5fd0(local_1708,&local_1948);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0xc);
  iVar10 = 0;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ffc6c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007ffc6c:
    local_1b80 = (undefined *)((ulong)local_1b80 & 0xffffffffffff0000);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1b80 = (undefined *)
                 CONCAT62(local_1b80._2_6_,
                          (ushort)iVar10 |
                          (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb));
    FUN_007ef010(&local_1828,&local_1b80);
    FUN_007e4920(local_1708,&local_1828);
    if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e7b10(local_1708);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 100);
  iVar10 = 0;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ffd6c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007ffd6c:
    local_1b80 = (undefined *)((ulong)local_1b80 & 0xffffffffffff0000);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1b80 = (undefined *)
                 (CONCAT62(local_1b80._2_6_,
                           (ushort)iVar10 |
                           (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb))
                 | 0x80);
    FUN_007ef010(&local_1948,&local_1b80);
    FUN_007e4920(local_1708,&local_1948);
    if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e7b10(local_1708);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 100);
  iVar10 = 0;
  do {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    if (0 < (int)*(uint *)puVar6) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 8) + uVar14 * 4) == 0x1a) goto LAB_007ffe6c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar6 != uVar14);
    }
    uVar14 = 0;
LAB_007ffe6c:
    local_1b80 = (undefined *)((ulong)local_1b80 & 0xffffffffffff0000);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      FUN_00706e58(puVar6);
      __cxa_guard_release(puVar7);
    }
    uVar13 = (uint)uVar14;
    if (*(uint *)puVar6 <= uVar13) {
      uVar13 = 0;
    }
    local_1b80 = (undefined *)
                 (CONCAT62(local_1b80._2_6_,
                           (ushort)iVar10 |
                           (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) << 0xb))
                 | 0x100);
    FUN_007ef010(&local_1bc0,&local_1b80);
    FUN_007e4920(local_1708,&local_1bc0);
    if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
      FUN_007e7b10(local_1708);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0xc);
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 != 0) {
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
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)*puVar12)();
      uVar14 = uVar14 & 0xffffffff;
    }
    plVar3 = (long *)(*(long *)(lVar11 + 0xe7278) + *(long *)(lVar11 + 0xe7270));
    if (*(short *)((long)plVar3 + 4) != 0) {
      DAT_04ccaca0 = *plVar3;
      DAT_04ccaca8 = plVar3[1];
      iVar10 = 0;
      DAT_04ccacb0 = plVar3[2];
      DAT_04ccacb8 = (undefined4)plVar3[3];
      do {
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          FUN_00706e58(puVar6);
          __cxa_guard_release(puVar7);
        }
        if (0 < (int)*(uint *)puVar6) {
          uVar15 = 0;
          do {
            if (*(int *)(*(long *)(puVar6 + 8) + uVar15 * 4) == 0x1a) goto LAB_0080002c;
            uVar15 = uVar15 + 1;
          } while (*(uint *)puVar6 != uVar15);
        }
        uVar15 = 0;
LAB_0080002c:
        local_1948 = (undefined **)((ulong)local_1948 & 0xffffffffffff0000);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          FUN_00706e58(puVar6);
          __cxa_guard_release(puVar7);
        }
        uVar13 = (uint)uVar15;
        if (*(uint *)puVar6 <= uVar13) {
          uVar13 = 0;
        }
        local_1948 = (undefined **)
                     CONCAT62(local_1948._2_6_,
                              (ushort)iVar10 |
                              (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) <<
                                      0xb));
        FUN_007ef010(&local_1828,&local_1948);
        FUN_007e4920(local_1708,&local_1828);
        if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
          FUN_007e6230(&local_1b80,local_1708);
          if (((int)local_1b80 != 0) && (local_1b80._4_2_ == 0)) {
            local_1b80 = (undefined *)*plVar3;
            local_1b78 = plVar3[1];
            lStack_1b70 = plVar3[2];
            local_1b68 = (undefined *)CONCAT44(local_1b68._4_4_,(int)plVar3[3]);
            FUN_007e64e0(local_1708,&local_1b80);
            FUN_007e7b10(local_1708);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != 100);
      iVar10 = 0;
      do {
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          FUN_00706e58(puVar6);
          __cxa_guard_release(puVar7);
        }
        if (0 < (int)*(uint *)puVar6) {
          uVar15 = 0;
          do {
            if (*(int *)(*(long *)(puVar6 + 8) + uVar15 * 4) == 0x1a) goto LAB_0080016c;
            uVar15 = uVar15 + 1;
          } while (*(uint *)puVar6 != uVar15);
        }
        uVar15 = 0;
LAB_0080016c:
        local_1948 = (undefined **)((ulong)local_1948 & 0xffffffffffff0000);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          FUN_00706e58(puVar6);
          __cxa_guard_release(puVar7);
        }
        uVar13 = (uint)uVar15;
        if (*(uint *)puVar6 <= uVar13) {
          uVar13 = 0;
        }
        local_1948 = (undefined **)
                     (CONCAT62(local_1948._2_6_,
                               (ushort)iVar10 |
                               (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) <<
                                       0xb)) | 0x80);
        FUN_007ef010(&local_1828,&local_1948);
        FUN_007e4920(local_1708,&local_1828);
        if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
          FUN_007e6230(&local_1b80,local_1708);
          if (((int)local_1b80 != 0) && (local_1b80._4_2_ == 0)) {
            local_1b80 = (undefined *)*plVar3;
            local_1b78 = plVar3[1];
            lStack_1b70 = plVar3[2];
            local_1b68 = (undefined *)CONCAT44(local_1b68._4_4_,(int)plVar3[3]);
            FUN_007e64e0(local_1708,&local_1b80);
            FUN_007e7b10(local_1708);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != 100);
      iVar10 = 0;
      do {
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          FUN_00706e58(puVar6);
          __cxa_guard_release(puVar7);
        }
        if (0 < (int)*(uint *)puVar6) {
          uVar15 = 0;
          do {
            if (*(int *)(*(long *)(puVar6 + 8) + uVar15 * 4) == 0x1a) goto LAB_008002ac;
            uVar15 = uVar15 + 1;
          } while (*(uint *)puVar6 != uVar15);
        }
        uVar15 = 0;
LAB_008002ac:
        local_1948 = (undefined **)((ulong)local_1948 & 0xffffffffffff0000);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          FUN_00706e58(puVar6);
          __cxa_guard_release(puVar7);
        }
        uVar13 = (uint)uVar15;
        if (*(uint *)puVar6 <= uVar13) {
          uVar13 = 0;
        }
        local_1948 = (undefined **)
                     (CONCAT62(local_1948._2_6_,
                               (ushort)iVar10 |
                               (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 4) <<
                                       0xb)) | 0x100);
        FUN_007ef010(&local_1828,&local_1948);
        FUN_007e4920(local_1708,&local_1828);
        if ((local_1708[0] != *(ushort *)puVar8) && (local_16f8 != 0 || local_1700 != 0)) {
          FUN_007e6230(&local_1b80,local_1708);
          if (((int)local_1b80 != 0) && (local_1b80._4_2_ == 0)) {
            local_1b80 = (undefined *)*plVar3;
            local_1b78 = plVar3[1];
            lStack_1b70 = plVar3[2];
            local_1b68 = (undefined *)CONCAT44(local_1b68._4_4_,(int)plVar3[3]);
            FUN_007e64e0(local_1708,&local_1b80);
            FUN_007e7b10(local_1708);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != 0xc);
    }
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar11 + 0xe7290) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xe7290) + 8), puVar12 != (undefined8 *)0x0))
    {
      (**(code **)*puVar12)();
    }
  }
  return;
}

