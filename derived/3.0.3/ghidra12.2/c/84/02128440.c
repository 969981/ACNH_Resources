
void FUN_02128440(undefined2 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  undefined4 uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_1734 [2];
  undefined1 auStack_1732 [2];
  undefined1 auStack_1730 [2];
  undefined1 auStack_172e [2];
  undefined1 auStack_172c [2];
  undefined1 auStack_172a [2];
  undefined4 local_1728 [1448];
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint *local_78;
  ushort local_6c [2];
  uint local_68;
  uint local_64;
  
  puVar6 = PTR_DAT_04bc2a38;
  puVar8 = PTR_DAT_04bc2a30;
  uVar4 = *(undefined2 *)param_2;
  uVar2 = *(undefined1 *)((long)param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 3);
  uVar1 = param_2[1];
  if (param_2[2] == 1) {
    bVar5 = false;
  }
  else {
    if (param_2[2] != 2) goto LAB_02128994;
    bVar5 = true;
  }
  local_68 = 0;
  if (*(char *)(param_2 + 3) == '\0') {
    iVar10 = 0xb;
    if (bVar5) {
      iVar10 = 0xc;
    }
    if (((*PTR_DAT_04bc2a38 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc2a38), iVar11 != 0)) {
      FUN_02129270(PTR_DAT_04bc2a30);
      __cxa_guard_release(PTR_DAT_04bc2a38);
    }
    if (0 < (int)*(uint *)puVar8) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == iVar10) goto LAB_0212855c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar8 != uVar14);
    }
    uVar14 = 0;
LAB_0212855c:
    uVar12 = (ushort)param_2[4];
    local_68 = (uint)uVar14;
  }
  else {
    uVar12 = *(ushort *)((long)param_2 + 0xe);
    if (uVar12 < 100) {
      iVar10 = 6;
      if (!bVar5) {
        iVar10 = 1;
      }
      if (((*PTR_DAT_04bc2a38 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc2a38), iVar11 != 0)) {
        FUN_02129270(PTR_DAT_04bc2a30);
        __cxa_guard_release(PTR_DAT_04bc2a38);
      }
      if (0 < (int)*(uint *)puVar8) {
        uVar14 = 0;
        do {
          if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == iVar10) goto LAB_0212850c;
          uVar14 = uVar14 + 1;
        } while (*(uint *)puVar8 != uVar14);
      }
      uVar14 = 0;
LAB_0212850c:
      uVar12 = *(ushort *)((long)param_2 + 0xe);
      local_68 = (uint)uVar14;
    }
    else if (uVar12 < 200) {
      iVar10 = 7;
      if (!bVar5) {
        iVar10 = 2;
      }
      if (((*PTR_DAT_04bc2a38 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc2a38), iVar11 != 0)) {
        FUN_02129270(PTR_DAT_04bc2a30);
        __cxa_guard_release(PTR_DAT_04bc2a38);
      }
      if (0 < (int)*(uint *)puVar8) {
        uVar14 = 0;
        do {
          if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == iVar10) goto LAB_021285bc;
          uVar14 = uVar14 + 1;
        } while (*(uint *)puVar8 != uVar14);
      }
      uVar14 = 0;
LAB_021285bc:
      local_68 = (uint)uVar14;
      uVar12 = *(short *)((long)param_2 + 0xe) - 100;
    }
    else if (uVar12 < 300) {
      iVar10 = 8;
      if (!bVar5) {
        iVar10 = 3;
      }
      if (((*PTR_DAT_04bc2a38 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc2a38), iVar11 != 0)) {
        FUN_02129270(PTR_DAT_04bc2a30);
        __cxa_guard_release(PTR_DAT_04bc2a38);
      }
      if (0 < (int)*(uint *)puVar8) {
        uVar14 = 0;
        do {
          if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == iVar10) goto LAB_0212861c;
          uVar14 = uVar14 + 1;
        } while (*(uint *)puVar8 != uVar14);
      }
      uVar14 = 0;
LAB_0212861c:
      local_68 = (uint)uVar14;
      uVar12 = *(short *)((long)param_2 + 0xe) - 200;
    }
    else if (uVar12 < 400) {
      iVar10 = 9;
      if (!bVar5) {
        iVar10 = 4;
      }
      if (((*PTR_DAT_04bc2a38 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc2a38), iVar11 != 0)) {
        FUN_02129270(PTR_DAT_04bc2a30);
        __cxa_guard_release(PTR_DAT_04bc2a38);
      }
      if (0 < (int)*(uint *)puVar8) {
        uVar14 = 0;
        do {
          if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == iVar10) goto LAB_0212867c;
          uVar14 = uVar14 + 1;
        } while (*(uint *)puVar8 != uVar14);
      }
      uVar14 = 0;
LAB_0212867c:
      local_68 = (uint)uVar14;
      uVar12 = *(short *)((long)param_2 + 0xe) - 300;
    }
    else {
      if (499 < uVar12) goto LAB_02128994;
      uVar13 = 10;
      if (!bVar5) {
        uVar13 = 5;
      }
      FUN_02128be0(&local_68,uVar13);
      uVar12 = *(short *)((long)param_2 + 0xe) - 400;
    }
  }
  if (((*PTR_DAT_04bb3128 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar7 = PTR_DAT_04bb3128;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar14 * 4) == 0x16) goto LAB_021286fc;
      uVar14 = uVar14 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar14);
  }
  uVar14 = 0;
LAB_021286fc:
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc2a38), iVar10 != 0)) {
    FUN_02129270(PTR_DAT_04bc2a30);
    __cxa_guard_release(PTR_DAT_04bc2a38);
  }
  puVar6 = PTR_DAT_04bb3120;
  uVar17 = (uint)uVar14;
  local_6c[0] = 0;
  uVar9 = local_68;
  if (*(uint *)puVar8 <= local_68) {
    uVar9 = 0;
  }
  uVar9 = *(uint *)(*(long *)(puVar8 + 8) + (long)(int)uVar9 * 4);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar8 = PTR_DAT_04bb43c0;
  if (*(uint *)puVar6 <= uVar17) {
    uVar17 = 0;
  }
  local_6c[0] = (ushort)((uVar9 & 0xf) << 7) |
                (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar17 * 4) << 0xb) |
                uVar12 & 0x7f;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(param_2);
  lVar19 = *(long *)puVar8;
  if (lVar19 == 0) goto LAB_02128994;
  lVar18 = *(long *)(lVar18 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
  if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
     (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02128994;
  local_80 = *param_2;
  uStack_7c = param_2[1];
  local_78 = (uint *)0x0;
  local_88 = PTR_DAT_04bc0510 + 0x10;
  uVar9 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar8 == 0) {
LAB_021288d0:
    uVar12 = 0xbc;
  }
  else {
    lVar18 = *(long *)(lVar19 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_021288d0;
    lVar18 = *(long *)PTR_DAT_04bc0428;
    uVar9 = FUN_0277d6c4(param_2);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
       (puVar15 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8),
       puVar15 == (uint *)0x0)) goto LAB_021288d0;
    uVar12 = 0;
    uVar9 = *puVar15;
    local_78 = puVar15;
    if ((uVar9 != 0) && (puVar15 != (uint *)(ulong)uVar9)) {
      puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
      uVar12 = 0;
      if (*puVar16 != 0) {
        uVar9 = puVar16[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar18 != 0) {
            uVar17 = 0;
            if ((ulong)uVar9 != 0) {
              uVar17 = (uint)((ulong)((long)puVar15 - lVar18) / (ulong)uVar9);
            }
            if (*puVar16 <= uVar17) {
              uVar17 = 0xffffffff;
            }
            if ((uVar17 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar17 * 2),
               uVar12 < 0xbd)) goto LAB_021288dc;
          }
        }
        uVar12 = 0;
      }
    }
  }
LAB_021288dc:
  local_1728[0] = 0xac;
  if (uVar12 == 0xac) {
    local_64 = (uint)*(ushort *)PTR_DAT_04bb3170;
    FUN_007ef010(auStack_172a,local_6c);
    FUN_007e4920(local_1728,auStack_172a);
    FUN_007e8e30(&local_64,local_1728);
    FUN_01b086f4(auStack_172c,&local_88);
    FUN_007ef010(auStack_172e,local_6c);
    FUN_02652f70(auStack_172c,auStack_172e);
    FUN_007ef010(auStack_1730,local_6c);
    FUN_007e4920(local_1728,auStack_1730);
    FUN_007ef010(auStack_1732,&local_64);
    FUN_007e90a0(local_1728,auStack_1732);
    FUN_007ef010(auStack_1734,local_6c);
    FUN_00805ba8(param_1,auStack_1734);
    return;
  }
LAB_02128994:
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(undefined1 *)((long)param_1 + 3) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar1;
  return;
}

