
bool FUN_00803040(ushort *param_1,byte *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  ushort uVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_2dea [2];
  undefined4 local_2de8 [1449];
  ushort local_1744 [2];
  undefined *local_1740;
  undefined2 local_1738;
  undefined1 local_1736;
  undefined1 local_1735;
  undefined4 local_1734;
  uint *local_1730;
  undefined2 local_1724;
  undefined1 local_1722;
  undefined1 local_1721;
  undefined4 local_1720;
  undefined1 auStack_171a [2];
  undefined1 auStack_1718 [5792];
  byte local_78 [4];
  uint local_74;
  byte local_70 [2];
  undefined1 auStack_6e [2];
  uint local_6c;
  
  FUN_007ef010(auStack_6e,param_1);
  local_70[0] = *param_2;
  if (7 < local_70[0]) {
    local_70[0] = 0xff;
  }
  uVar14 = FUN_00802070(auStack_6e,local_70);
  puVar9 = PTR_DAT_04bb3128;
  if ((uVar14 & 1) == 0) {
    return false;
  }
  uVar18 = *param_1;
  if (uVar18 == *(ushort *)PTR_DAT_04bb3170) {
    return false;
  }
  if (7 < *param_2) {
    return false;
  }
  if (((*PTR_DAT_04bb3128 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar8 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar14 = 0;
    do {
      if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar14 * 4) == (uint)(uVar18 >> 0xb))
      goto LAB_00803110;
      uVar14 = uVar14 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar14);
  }
  uVar14 = 0;
LAB_00803110:
  local_74 = (uint)uVar14;
  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar11 = local_74;
  if (*(uint *)puVar8 <= local_74) {
    uVar11 = 0;
  }
  if (*(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar11 * 4) != 1) {
    if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar11 = local_74;
    if (*(uint *)puVar8 <= local_74) {
      uVar11 = 0;
    }
    if (*(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar11 * 4) != 5) {
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar11 = local_74;
      if (*(uint *)puVar8 <= local_74) {
        uVar11 = 0;
      }
      if (*(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar11 * 4) != 0x1a) {
        return false;
      }
      if ((*param_1 & 0x780) != 0x80) {
        return false;
      }
    }
  }
  local_78[0] = *param_2;
  if (7 < local_78[0]) {
    local_78[0] = 0xff;
  }
  lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_78,1);
  if (lVar15 == 0) {
    return false;
  }
  FUN_007ef010(auStack_171a,param_1);
  FUN_007e4920(auStack_1718,auStack_171a);
  if ((*(long **)(lVar15 + 0x1ad8) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar15 + 0x1ad8), puVar16 == (undefined8 *)0x0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)*puVar16)();
    uVar14 = uVar14 & 0xffffffff;
  }
  puVar9 = PTR_DAT_04bb43c0;
  puVar1 = (undefined2 *)(*(long *)(lVar15 + 0x1ac0) + *(long *)(lVar15 + 0x1ab8));
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(puVar1);
  lVar22 = *(long *)puVar9;
  puVar17 = (undefined2 *)PTR_DAT_04bb37e0;
  if (lVar22 != 0) {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if (uVar11 < *(uint *)(lVar21 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0) {
        puVar17 = puVar1;
      }
    }
  }
  uVar7 = *puVar17;
  uVar4 = *(undefined1 *)(puVar17 + 1);
  uVar5 = *(undefined1 *)((long)puVar17 + 3);
  uVar3 = *(undefined4 *)(puVar17 + 2);
  local_1724 = uVar7;
  local_1722 = uVar4;
  local_1721 = uVar5;
  local_1720 = uVar3;
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x1ad8) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x1ad8) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
    lVar22 = *(long *)puVar9;
  }
  uVar11 = FUN_0277d6c4(&local_1724);
  lVar15 = *(long *)puVar9;
  if (lVar15 == 0) {
    return false;
  }
  lVar21 = *(long *)(lVar22 + 0x57e58);
  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
  if (*(uint *)(lVar21 + 0x1d8) <= uVar11) {
    return false;
  }
  if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) == 0) {
    return false;
  }
  local_1740 = PTR_DAT_04bc0510 + 0x10;
  local_1730 = (uint *)0x0;
  local_1738 = uVar7;
  local_1736 = uVar4;
  local_1735 = uVar5;
  local_1734 = uVar3;
  uVar11 = FUN_0277d6c4(&local_1738);
  puVar10 = PTR_DAT_04bb3128;
  puVar8 = PTR_DAT_04bb3120;
  if (*(long *)puVar9 == 0) {
    local_6c = 0xbc;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar11 = FUN_0277d6c4(&local_1724);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
         (puVar19 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8),
         puVar19 != (uint *)0x0)) {
        local_6c = 0;
        uVar11 = *puVar19;
        local_1730 = puVar19;
        if ((uVar11 != 0) && (puVar19 != (uint *)(ulong)uVar11)) {
          puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar11);
          local_6c = 0;
          if (*puVar20 != 0) {
            uVar11 = puVar20[1];
            if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar20 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar20 + lVar15 + (ulong)(ushort)puVar20[2] * 8;
              if (lVar15 != 0) {
                uVar2 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar19 - lVar15) / (ulong)uVar11);
                }
                if (*puVar20 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_6c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                   local_6c < 0xbd)) goto LAB_0080349c;
              }
            }
            local_6c = 0;
          }
        }
        goto LAB_0080349c;
      }
    }
    local_6c = 0xbc;
  }
LAB_0080349c:
  local_2de8[0] = 0xac;
  if ((local_6c != 0xac) && (uVar14 = FUN_01ae89e0(&local_1740), (uVar14 & 1) == 0)) {
    return false;
  }
  if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar8) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == 0xb) goto LAB_008034f8;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar8 != uVar14);
  }
  uVar14 = 0;
LAB_008034f8:
  bVar6 = *param_2;
  local_1744[0] = 0;
  uVar18 = bVar6 & 0x7f;
  if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar11 = (uint)uVar14;
  if (*(uint *)puVar8 <= uVar11) {
    uVar11 = 0;
  }
  if (7 < bVar6) {
    uVar18 = 0x7f;
  }
  local_1744[0] = uVar18 | (ushort)(*(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar11 * 4) << 0xb);
  FUN_007ef010(auStack_2dea,local_1744);
  FUN_007e4920(local_2de8,auStack_2dea);
  iVar12 = FUN_007e68d0(auStack_1718);
  local_6c = iVar12;
  iVar13 = FUN_007e68d0(local_2de8);
  return iVar12 != iVar13;
}

