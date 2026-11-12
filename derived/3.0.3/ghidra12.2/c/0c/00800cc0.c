
undefined8 FUN_00800cc0(ushort *param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  ushort uVar17;
  long lVar18;
  ushort local_1754;
  undefined1 auStack_1752 [2];
  undefined4 local_1750 [1448];
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  uint *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined **local_90;
  long local_88;
  char local_80;
  byte local_7f;
  byte local_74 [4];
  uint local_70;
  undefined4 local_6c;
  
  puVar7 = PTR_DAT_04bb3128;
  uVar17 = *param_1;
  if (uVar17 == *(ushort *)PTR_DAT_04bb3170) {
    return 0;
  }
  if (7 < *param_2) {
    return 0;
  }
  if (((*PTR_DAT_04bb3128 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar6 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar14 = 0;
    do {
      if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar14 * 4) == (uint)(uVar17 >> 0xb))
      goto LAB_00800d5c;
      uVar14 = uVar14 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar14);
  }
  uVar14 = 0;
LAB_00800d5c:
  local_70 = (uint)uVar14;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar9 = local_70;
  if (*(uint *)puVar6 <= local_70) {
    uVar9 = 0;
  }
  if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar9 * 4) != 0) {
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar9 = local_70;
    if (*(uint *)puVar6 <= local_70) {
      uVar9 = 0;
    }
    if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar9 * 4) != 1) {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar9 = local_70;
      if (*(uint *)puVar6 <= local_70) {
        uVar9 = 0;
      }
      if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar9 * 4) != 4) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        uVar9 = local_70;
        if (*(uint *)puVar6 <= local_70) {
          uVar9 = 0;
        }
        if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar9 * 4) != 5) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0))
          {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          uVar9 = local_70;
          if (*(uint *)puVar6 <= local_70) {
            uVar9 = 0;
          }
          if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar9 * 4) != 0x1a) {
            return 0;
          }
        }
      }
    }
  }
  local_74[0] = *param_2;
  if (7 < local_74[0]) {
    local_74[0] = 0xff;
  }
  lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_74,1);
  if (lVar11 == 0) {
    return 0;
  }
  local_88 = lVar11 + 0x150;
  local_80 = '\x01';
  if (*(long **)(lVar11 + 0x178) == (long *)0x0) {
    bVar8 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar11 + 0x178);
    bVar8 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      bVar8 = (**(code **)*puVar12)();
    }
  }
  bVar8 = bVar8 & 1;
  local_90 = &PTR_FUN_04917460;
  local_7f = bVar8;
  puVar13 = (undefined2 *)FUN_026e85f0(*(long *)(lVar11 + 0x160) + *(long *)(lVar11 + 0x158));
  puVar7 = PTR_DAT_04bb43c0;
  uVar5 = *puVar13;
  uVar3 = *(undefined1 *)(puVar13 + 1);
  uVar4 = *(undefined1 *)((long)puVar13 + 3);
  uVar2 = *(undefined4 *)(puVar13 + 2);
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_98 = uVar5;
  local_96 = uVar3;
  local_95 = uVar4;
  local_94 = uVar2;
  uVar9 = FUN_0277d6c4(&local_98);
  lVar18 = *(long *)puVar7;
  if (lVar18 == 0) goto LAB_00801074;
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((*(uint *)(lVar11 + 0x1d8) <= uVar9) ||
     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_00801074;
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = (uint *)0x0;
  local_a8 = uVar5;
  local_a6 = uVar3;
  local_a5 = uVar4;
  local_a4 = uVar2;
  uVar9 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar7 == 0) {
LAB_008010d8:
    local_6c = 0xbc;
  }
  else {
    lVar11 = *(long *)(lVar18 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_008010d8;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar9 = FUN_0277d6c4(&local_98);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar9) ||
       (puVar15 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8),
       puVar15 == (uint *)0x0)) goto LAB_008010d8;
    local_6c = 0;
    uVar9 = *puVar15;
    local_a0 = puVar15;
    if ((uVar9 != 0) && (puVar15 != (uint *)(ulong)uVar9)) {
      puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
      local_6c = 0;
      if (*puVar16 != 0) {
        uVar9 = puVar16[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar16 + lVar11 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar11 != 0) {
            uVar1 = 0;
            if ((ulong)uVar9 != 0) {
              uVar1 = (uint)((ulong)((long)puVar15 - lVar11) / (ulong)uVar9);
            }
            if (*puVar16 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_6c = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
               , local_6c < 0xbd)) goto LAB_008010f4;
          }
        }
        local_6c = 0;
      }
    }
  }
LAB_008010f4:
  puVar6 = PTR_DAT_04bb3128;
  puVar7 = PTR_DAT_04bb3120;
  local_1750[0] = 0xac;
  if (local_6c == 0xac) {
    if (((*PTR_DAT_04bb3128 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    if (0 < (int)*(uint *)puVar7) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar7 + 8) + uVar14 * 4) == 8) goto LAB_00801140;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar7 != uVar14);
    }
    uVar14 = 0;
LAB_00801140:
    local_6c = local_6c & 0xffff0000;
    bVar8 = *param_2;
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar9 = (uint)uVar14;
    if (*(uint *)puVar7 <= uVar9) {
      uVar9 = 0;
    }
    uVar17 = (ushort)bVar8;
    if (7 < bVar8) {
      uVar17 = 0x7f;
    }
    local_6c = CONCAT22(local_6c._2_2_,
                        uVar17 | (ushort)(*(int *)(*(long *)(puVar7 + 8) + (long)(int)uVar9 * 4) <<
                                         0xb)) | 0x780;
    FUN_007ef010(auStack_1752,&local_6c);
    FUN_007e4920(local_1750,auStack_1752);
    FUN_007e8e30(&local_1754,local_1750);
    if (*param_1 == local_1754) {
      FUN_02640184(&local_90);
      return 1;
    }
    bVar8 = local_7f;
  }
LAB_00801074:
  if (bVar8 != 0) {
    lVar11 = *(long *)(local_88 + 0x28);
    if (local_80 == '\0') {
      if (lVar11 == 0) {
        return 0;
      }
      puVar12 = *(undefined8 **)(lVar11 + 0x18);
    }
    else {
      if (lVar11 == 0) {
        return 0;
      }
      puVar12 = *(undefined8 **)(lVar11 + 8);
    }
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)();
    }
  }
  return 0;
}

