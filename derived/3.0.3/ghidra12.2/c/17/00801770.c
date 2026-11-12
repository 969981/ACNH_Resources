
undefined8 FUN_00801770(ushort *param_1,byte *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  ushort uVar17;
  long lVar18;
  long lVar19;
  ushort local_1764;
  undefined1 auStack_1762 [2];
  undefined1 auStack_1760 [4];
  undefined4 local_175c;
  uint local_1758;
  undefined1 auStack_1752 [2];
  undefined4 local_1750 [1448];
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  uint local_a4;
  uint *local_a0;
  undefined4 local_98;
  uint local_94;
  undefined **local_90;
  long local_88;
  char local_80;
  byte local_7f;
  byte local_74 [4];
  uint local_70;
  uint local_6c [3];
  
  puVar6 = PTR_DAT_04bb3128;
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
  puVar5 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar14 = 0;
    do {
      if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar14 * 4) == (uint)(uVar17 >> 0xb))
      goto LAB_0080180c;
      uVar14 = uVar14 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar14);
  }
  uVar14 = 0;
LAB_0080180c:
  local_70 = (uint)uVar14;
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar8 = local_70;
  if (*(uint *)puVar5 <= local_70) {
    uVar8 = 0;
  }
  if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar8 * 4) != 0) {
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar8 = local_70;
    if (*(uint *)puVar5 <= local_70) {
      uVar8 = 0;
    }
    if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar8 * 4) != 1) {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar8 = local_70;
      if (*(uint *)puVar5 <= local_70) {
        uVar8 = 0;
      }
      if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar8 * 4) != 4) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        uVar8 = local_70;
        if (*(uint *)puVar5 <= local_70) {
          uVar8 = 0;
        }
        if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar8 * 4) != 5) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0))
          {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          uVar8 = local_70;
          if (*(uint *)puVar5 <= local_70) {
            uVar8 = 0;
          }
          if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar8 * 4) != 0x1a) {
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
  lVar18 = lVar11 + 0x150;
  local_80 = '\x01';
  local_88 = lVar18;
  if (*(long **)(lVar11 + 0x178) == (long *)0x0) {
    local_7f = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar11 + 0x178);
    local_7f = 0;
    if (puVar12 != (undefined8 *)0x0) {
      local_7f = (**(code **)*puVar12)();
    }
  }
  local_7f = local_7f & 1;
  local_90 = &PTR_FUN_04917460;
  puVar13 = (undefined4 *)FUN_02815540(*(long *)(lVar11 + 0x160) + *(long *)(lVar11 + 0x158));
  puVar6 = PTR_DAT_04bb43c0;
  uVar4 = *(undefined2 *)puVar13;
  uVar1 = *(undefined1 *)((long)puVar13 + 2);
  uVar2 = *(undefined1 *)((long)puVar13 + 3);
  local_98 = *puVar13;
  uVar8 = puVar13[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_94 = uVar8;
  uVar7 = FUN_0277d6c4(&local_98);
  lVar19 = *(long *)puVar6;
  if (lVar19 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_b0 = PTR_DAT_04bc0510 + 0x10;
      local_a0 = (uint *)0x0;
      local_a8 = uVar4;
      local_a6 = uVar1;
      local_a5 = uVar2;
      local_a4 = uVar8;
      uVar8 = FUN_0277d6c4(&local_a8);
      if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_00801d34:
        local_175c = 0xbc;
      }
      else {
        lVar11 = *(long *)(lVar19 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_00801d34;
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(&local_98);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
           (puVar15 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
           puVar15 == (uint *)0x0)) goto LAB_00801d34;
        local_175c = 0;
        uVar8 = *puVar15;
        local_a0 = puVar15;
        if ((uVar8 != 0) && (puVar15 != (uint *)(ulong)uVar8)) {
          puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar8);
          local_175c = 0;
          if (*puVar16 != 0) {
            uVar8 = puVar16[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar16 + lVar11 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar11 != 0) {
                uVar7 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar15 - lVar11) / (ulong)uVar8);
                }
                if (*puVar16 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_175c = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar7 * 2),
                   local_175c < 0xbd)) goto LAB_00801d44;
              }
            }
            local_175c = 0;
          }
        }
      }
LAB_00801d44:
      puVar6 = PTR_DAT_04bb3128;
      local_1750[0] = 0xac;
      if (local_175c == 0xac) {
        if (((*PTR_DAT_04bb3128 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        if (0 < (int)*(uint *)puVar5) {
          uVar14 = 0;
          do {
            if (*(int *)(*(long *)(puVar5 + 8) + uVar14 * 4) == 10) goto LAB_00801d90;
            uVar14 = uVar14 + 1;
          } while (*(uint *)puVar5 != uVar14);
        }
        uVar14 = 0;
LAB_00801d90:
        local_175c = local_175c & 0xffff0000;
        bVar3 = *param_2;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar10 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        uVar8 = (uint)uVar14;
        if (*(uint *)puVar5 <= uVar8) {
          uVar8 = 0;
        }
        uVar17 = (ushort)bVar3;
        if (7 < bVar3) {
          uVar17 = 0x7f;
        }
        local_175c = CONCAT22(local_175c._2_2_,
                              uVar17 | (ushort)(*(int *)(*(long *)(puVar5 + 8) +
                                                        (long)(int)uVar8 * 4) << 0xb)) | 0x780;
        FUN_007ef010(auStack_1752,&local_175c);
        FUN_007e4920(local_1750,auStack_1752);
        FUN_007e8e30(local_6c,local_1750);
        if (*param_1 == (ushort)local_6c[0]) goto LAB_00801e00;
        lVar18 = local_88;
      }
    }
  }
  puVar13 = (undefined4 *)FUN_02814c00(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8));
  puVar6 = PTR_DAT_04bb43c0;
  local_98 = *puVar13;
  local_94 = puVar13[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar6 == 0) goto LAB_00801e98;
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_00801e98;
  puVar15 = (uint *)FUN_026e8d10(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8));
  uVar7 = *puVar15;
  uVar1 = *(undefined1 *)((long)puVar15 + 2);
  uVar2 = *(undefined1 *)((long)puVar15 + 3);
  local_175c = *puVar15;
  uVar8 = puVar15[1];
  lVar11 = *(long *)puVar6;
  local_1758 = uVar8;
  uVar9 = FUN_0277d6c4(&local_175c);
  lVar19 = *(long *)puVar6;
  if (lVar19 == 0) goto LAB_00801e98;
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((*(uint *)(lVar11 + 0x1d8) <= uVar9) ||
     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_00801e98;
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = (uint *)0x0;
  local_a8 = (short)uVar7;
  local_a6 = uVar1;
  local_a5 = uVar2;
  local_a4 = uVar8;
  uVar8 = FUN_0277d6c4(&local_a8);
  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_00801e18:
    local_6c[0] = 0xbc;
  }
  else {
    lVar11 = *(long *)(lVar19 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_00801e18;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(&local_175c);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
       (puVar15 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar15 == (uint *)0x0)) goto LAB_00801e18;
    local_6c[0] = 0;
    uVar8 = *puVar15;
    if ((uVar8 != 0) && (puVar15 != (uint *)(ulong)uVar8)) {
      puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar8);
      local_6c[0] = 0;
      if (*puVar16 != 0) {
        uVar8 = puVar16[1];
        if (uVar8 == 0) {
LAB_00801d2c:
          local_6c[0] = 0;
        }
        else {
          if ((ulong)(ushort)puVar16[2] != 0) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar16 + lVar11 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar11 != 0) {
              uVar7 = 0;
              if ((ulong)uVar8 != 0) {
                uVar7 = (uint)((ulong)((long)puVar15 - lVar11) / (ulong)uVar8);
              }
              if (*puVar16 <= uVar7) {
                uVar7 = 0xffffffff;
              }
              if (uVar7 < *(uint *)PTR_DAT_04bc00c8) {
                local_6c[0] = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar7 * 2);
                if (local_6c[0] < 0xbd) goto LAB_00801e24;
                goto LAB_00801d2c;
              }
            }
          }
          local_6c[0] = 0;
        }
      }
    }
  }
LAB_00801e24:
  local_1750[0] = 0xac;
  if (local_6c[0] == 0xac) {
    FUN_007f3c20(auStack_1760,10);
    bVar3 = *param_2;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    FUN_007eef5c(local_6c,auStack_1760,0xffffffff,(int)(char)bVar3);
    FUN_007ef010(auStack_1762,local_6c);
    FUN_007e4920(local_1750,auStack_1762);
    FUN_007e8e30(&local_1764,local_1750);
    if (*param_1 == local_1764) {
LAB_00801e00:
      FUN_02640184(&local_90);
      return 1;
    }
  }
LAB_00801e98:
  if (local_7f != 0) {
    lVar11 = *(long *)(lVar18 + 0x28);
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

