
undefined8 FUN_00802070(ushort *param_1,byte *param_2)

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
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined2 *puVar16;
  ushort uVar17;
  uint *puVar18;
  uint *puVar19;
  long lVar20;
  long lVar21;
  ushort local_173c;
  undefined1 auStack_173a [2];
  undefined4 local_1738 [1448];
  undefined *local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  uint *local_88;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  byte local_74 [4];
  uint local_70;
  uint local_6c [3];
  
  puVar9 = PTR_DAT_04bb3128;
  uVar17 = *param_1;
  if (uVar17 == *(ushort *)PTR_DAT_04bb3170) {
    return 0;
  }
  if (7 < *param_2) {
    return 0;
  }
  if (((*PTR_DAT_04bb3128 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar8 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar15 = 0;
    do {
      if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar15 * 4) == (uint)(uVar17 >> 0xb))
      goto LAB_0080210c;
      uVar15 = uVar15 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar15);
  }
  uVar15 = 0;
LAB_0080210c:
  local_70 = (uint)uVar15;
  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar11 = local_70;
  if (*(uint *)puVar8 <= local_70) {
    uVar11 = 0;
  }
  if (*(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar11 * 4) != 1) {
    if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar11 = local_70;
    if (*(uint *)puVar8 <= local_70) {
      uVar11 = 0;
    }
    if (*(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar11 * 4) != 5) {
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar11 = local_70;
      if (*(uint *)puVar8 <= local_70) {
        uVar11 = 0;
      }
      if (*(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar11 * 4) != 0x1a) {
        return 0;
      }
    }
  }
  local_74[0] = *param_2;
  if (7 < local_74[0]) {
    local_74[0] = 0xff;
  }
  lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_74,1);
  if (lVar13 == 0) {
    return 0;
  }
  if ((*(long **)(lVar13 + 0x1ad8) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x1ad8), puVar14 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar14)();
    uVar15 = uVar15 & 0xffffffff;
  }
  puVar9 = PTR_DAT_04bb43c0;
  puVar1 = (undefined2 *)(*(long *)(lVar13 + 0x1ac0) + *(long *)(lVar13 + 0x1ab8));
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(puVar1);
  lVar21 = *(long *)puVar9;
  puVar16 = (undefined2 *)PTR_DAT_04bb37e0;
  if (lVar21 != 0) {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if (uVar11 < *(uint *)(lVar20 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar11 * 8) != 0) {
        puVar16 = puVar1;
      }
    }
  }
  uVar4 = *(undefined1 *)(puVar16 + 1);
  uVar5 = *(undefined1 *)((long)puVar16 + 3);
  uVar7 = *puVar16;
  uVar3 = *(undefined4 *)(puVar16 + 2);
  local_7c = uVar7;
  local_7a = uVar4;
  local_79 = uVar5;
  local_78 = uVar3;
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar13 + 0x1ad8) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x1ad8) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
    lVar21 = *(long *)puVar9;
  }
  uVar11 = FUN_0277d6c4(&local_7c);
  lVar13 = *(long *)puVar9;
  if (lVar13 == 0) {
    return 0;
  }
  lVar20 = *(long *)(lVar21 + 0x57e58);
  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
  if (*(uint *)(lVar20 + 0x1d8) <= uVar11) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar11 * 8) == 0) {
    return 0;
  }
  local_98 = PTR_DAT_04bc0510 + 0x10;
  local_88 = (uint *)0x0;
  local_90 = uVar7;
  local_8e = uVar4;
  local_8d = uVar5;
  local_8c = uVar3;
  uVar11 = FUN_0277d6c4(&local_90);
  puVar10 = PTR_DAT_04bb3128;
  puVar8 = PTR_DAT_04bb3120;
  if (*(long *)puVar9 == 0) {
    local_6c[0] = 0xbc;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar11 = FUN_0277d6c4(&local_7c);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar13 + 0x1d8)) &&
         (puVar18 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar11 * 8),
         puVar18 != (uint *)0x0)) {
        local_6c[0] = 0;
        uVar11 = *puVar18;
        local_88 = puVar18;
        if ((uVar11 != 0) && (puVar18 != (uint *)(ulong)uVar11)) {
          puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar11);
          local_6c[0] = 0;
          if (*puVar19 != 0) {
            uVar11 = puVar19[1];
            if ((uVar11 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar19 + lVar13 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar13 != 0) {
                uVar2 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar18 - lVar13) / (ulong)uVar11);
                }
                if (*puVar19 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_6c[0] = (uint)*(ushort *)
                                         (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                   local_6c[0] < 0xbd)) goto LAB_0080245c;
              }
            }
            local_6c[0] = 0;
          }
        }
        goto LAB_0080245c;
      }
    }
    local_6c[0] = 0xbc;
  }
LAB_0080245c:
  local_1738[0] = 0xac;
  if ((local_6c[0] == 0xac) || (uVar15 = FUN_01ae89e0(&local_98), (uVar15 & 1) != 0)) {
    if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    if (0 < (int)*(uint *)puVar8) {
      uVar15 = 0;
      do {
        if (*(int *)(*(long *)(puVar8 + 8) + uVar15 * 4) == 0xb) goto LAB_008024bc;
        uVar15 = uVar15 + 1;
      } while (*(uint *)puVar8 != uVar15);
    }
    uVar15 = 0;
LAB_008024bc:
    bVar6 = *param_2;
    local_6c[0] = local_6c[0] & 0xffff0000;
    uVar17 = bVar6 & 0x7f;
    if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar12 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar11 = (uint)uVar15;
    if (*(uint *)puVar8 <= uVar11) {
      uVar11 = 0;
    }
    if (7 < bVar6) {
      uVar17 = 0x7f;
    }
    local_6c[0] = CONCAT22(local_6c[0]._2_2_,
                           uVar17 | (ushort)(*(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar11 * 4)
                                            << 0xb));
    FUN_007ef010(auStack_173a,local_6c);
    FUN_007e4920(local_1738,auStack_173a);
    FUN_007e8e30(&local_173c,local_1738);
    if (*param_1 == local_173c) {
      return 1;
    }
  }
  return 0;
}

