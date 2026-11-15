
void FUN_02127af0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_173e [2];
  undefined1 auStack_173c [2];
  undefined1 auStack_173a [2];
  undefined **local_1738;
  long local_1730;
  undefined1 local_1728;
  byte local_1727;
  undefined1 auStack_1720 [2];
  undefined1 auStack_171e [2];
  undefined1 auStack_171c [2];
  undefined1 auStack_171a [2];
  undefined8 local_1718;
  long local_1710;
  undefined1 local_1708;
  byte local_1707;
  ushort local_78 [2];
  undefined2 local_74 [2];
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  uint local_54;
  
  local_54 = 0;
  *(undefined2 *)param_2 = *(undefined2 *)param_1;
  *(undefined1 *)((long)param_2 + 2) = *(undefined1 *)((long)param_1 + 2);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)param_1 + 3);
  param_2[1] = param_1[1];
  if (param_1[5] == 2) {
    if (((DAT_04c8c100 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04c8c100), iVar7 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar10 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar10 * 4) == 0xf) {
          uVar10 = uVar10 & 0xffffffff;
          goto LAB_02127bec;
        }
        uVar10 = uVar10 + 1;
      } while (DAT_04c8c0f0 != uVar10);
    }
  }
  else {
    if (param_1[5] != 1) {
      return;
    }
    if (((DAT_04c8c100 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04c8c100), iVar7 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar10 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar10 * 4) == 0xe) goto LAB_02127bec;
        uVar10 = uVar10 + 1;
      } while (DAT_04c8c0f0 != uVar10);
    }
  }
  uVar10 = 0;
LAB_02127bec:
  puVar3 = PTR_DAT_04bb43c0;
  local_54 = (uint)uVar10;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_1);
  lVar14 = *(long *)puVar3;
  if (lVar14 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  local_60 = (uint *)0x0;
  local_68 = *param_1;
  uStack_64 = param_1[1];
  local_70 = &PTR_FUN_04a36b50;
  uVar6 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 == 0) {
LAB_02127d88:
    local_1718 = (undefined **)CONCAT44(local_1718._4_4_,0xac);
    uVar6 = 0xbc;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02127d88;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_1);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar6) ||
       (puVar12 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8),
       puVar12 == (uint *)0x0)) goto LAB_02127d88;
    local_1718 = (undefined **)CONCAT44(local_1718._4_4_,0xac);
    uVar6 = 0;
    uVar1 = *puVar12;
    local_60 = puVar12;
    if ((uVar1 != 0) && (puVar12 != (uint *)(ulong)uVar1)) {
      puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar1);
      uVar6 = 0;
      if (*puVar13 != 0) {
        uVar6 = puVar13[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar14 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar12 - lVar14) / (ulong)uVar6);
            }
            if (*puVar13 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_02127d8c;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_02127d8c:
  local_1738 = (undefined **)CONCAT44(local_1738._4_4_,uVar6);
  if (uVar6 != (uint)local_1718) {
    return;
  }
  if (((DAT_04c8c100 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04c8c100), iVar7 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  puVar3 = PTR_DAT_04bb3120;
  uVar6 = local_54;
  if (*(uint *)PTR_DAT_04bb3120 <= local_54) {
    uVar6 = 0;
  }
  iVar7 = *(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar6 * 4);
  FUN_01b086f4(&local_1738,&local_70);
  uVar4 = (ushort)local_1738;
  if (((DAT_04c8c100 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04c8c100), iVar8 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)*(uint *)puVar3) {
    uVar10 = 0;
    do {
      if (*(uint *)(*(long *)(puVar3 + 8) + uVar10 * 4) == (uint)(uVar4 >> 0xb)) goto LAB_02127e1c;
      uVar10 = uVar10 + 1;
    } while (*(uint *)puVar3 != uVar10);
  }
  uVar10 = 0;
LAB_02127e1c:
  local_1718 = (undefined **)CONCAT44(local_1718._4_4_,(int)uVar10);
  if (((DAT_04c8c100 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04c8c100), iVar8 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar1 = local_54;
  uVar6 = (uint)local_1718;
  if (*(uint *)puVar3 <= (uint)local_1718) {
    uVar6 = 0;
  }
  if (iVar7 == *(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar6 * 4)) {
    return;
  }
  if (DAT_04ccbb68 == 0) {
    return;
  }
  uVar6 = param_1[2];
  uVar10 = (ulong)uVar6;
  if (10 < uVar6) {
    uVar10 = 0;
  }
  lVar14 = *(long *)(DAT_04ccbb68 + uVar10 * 8);
  if (lVar14 == 0) {
    return;
  }
  local_78[0] = 0;
  local_74[0] = DAT_04cb6038;
  if (((DAT_04c8c100 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04c8c100), iVar7 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (*(uint *)puVar3 <= uVar1) {
    uVar1 = 0;
  }
  local_78[0] = (ushort)uVar6 & 0x7f |
                (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar1 * 4) << 0xb);
  FUN_007ef010(auStack_171a,local_78);
  FUN_007e4920(&local_1718,auStack_171a);
  FUN_007e8e30(local_74,&local_1718);
  if ((*(char *)(param_1 + 4) == '\0') || (*(char *)((long)param_1 + 0x11) != '\0')) {
    if (param_1[5] == 1) {
      uVar2 = param_1[2];
      FUN_01b086f4(auStack_171c,&local_70);
      FUN_02656c40(&local_1718,uVar2,auStack_171c);
    }
    else {
      uVar2 = param_1[2];
      FUN_01b086f4(auStack_171e,&local_70);
      FUN_02656ad0(&local_1718,uVar2,auStack_171e);
    }
    local_78[0] = (ushort)local_1718;
    FUN_007ef010(auStack_1720,local_78);
    lVar15 = FUN_0264e8e0(auStack_1720);
LAB_0212803c:
    if (lVar15 == 0) goto LAB_021281bc;
  }
  else {
    bVar5 = FUN_0266b7c0(param_1[3]);
    if (((DAT_04c8c100 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04c8c100), iVar7 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar6 = local_54;
    if (*(uint *)puVar3 <= local_54) {
      uVar6 = 0;
    }
    iVar7 = *(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar6 * 4);
    FUN_01b086f4(&local_1738,&local_70);
    FUN_007ef580(&local_1718,&local_1738);
    if (((DAT_04c8c100 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04c8c100), iVar8 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar6 = (uint)local_1718;
    if (*(uint *)puVar3 <= (uint)local_1718) {
      uVar6 = 0;
    }
    uVar2 = param_1[3];
    if ((bVar5 & iVar7 != *(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar6 * 4)) != 0) {
      if (param_1[5] == 1) {
        FUN_01b086f4(&local_1718,&local_70);
        lVar15 = FUN_0264f4c0(uVar2,(ushort)local_1718 >> 7 & 0xf);
      }
      else {
        FUN_01b086f4(&local_1718,&local_70);
        lVar15 = FUN_0264f530(uVar2,(ushort)local_1718 >> 7 & 0xf);
      }
      goto LAB_0212803c;
    }
    lVar15 = *(long *)PTR_DAT_04bb46b0;
    if (param_1[5] == 1) {
      if ((lVar15 == 0) || (lVar15 = FUN_026eec4c(lVar15,uVar2), lVar15 == 0)) goto LAB_021281bc;
      lVar15 = lVar15 + 0x230;
    }
    else {
      if ((lVar15 == 0) || (lVar15 = FUN_026eec4c(lVar15,uVar2), lVar15 == 0)) goto LAB_021281bc;
      lVar15 = lVar15 + 0xe38;
    }
  }
  local_1710 = lVar15;
  if (param_1[5] == 1) {
    local_1708 = 1;
    if (*(long **)(lVar15 + 0x28) == (long *)0x0) {
      local_1707 = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar15 + 0x28);
      local_1707 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        local_1707 = (**(code **)*puVar9)();
      }
    }
    local_1707 = local_1707 & 1;
    local_1728 = 0;
    lVar15 = *(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8);
    local_1718 = &PTR_FUN_049170d0;
    local_1730 = lVar14;
    if (*(long *)(lVar14 + 0x28) == 0) {
      local_1727 = 0;
    }
    else {
      puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 0x10);
      local_1727 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        local_1727 = (**(code **)*puVar9)();
      }
    }
    local_1727 = local_1727 & 1;
    local_1738 = &PTR_FUN_049170d0;
    FUN_02640280(lVar14,0x8a8);
    lVar11 = *(long *)(lVar14 + 8);
    lVar14 = *(long *)(lVar14 + 0x10);
  }
  else {
    local_1708 = 1;
    if (*(long **)(lVar15 + 0x28) == (long *)0x0) {
      local_1707 = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar15 + 0x28);
      local_1707 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        local_1707 = (**(code **)*puVar9)();
      }
    }
    local_1707 = local_1707 & 1;
    lVar11 = lVar14 + 0xb28;
    local_1728 = 0;
    lVar15 = *(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8);
    local_1718 = &PTR_FUN_049170d0;
    local_1730 = lVar11;
    if (*(long *)(lVar14 + 0xb50) == 0) {
      local_1727 = 0;
    }
    else {
      puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0xb50) + 0x10);
      local_1727 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        local_1727 = (**(code **)*puVar9)();
      }
    }
    local_1727 = local_1727 & 1;
    local_1738 = &PTR_FUN_049170d0;
    FUN_02640280(lVar11,0x8a8);
    lVar11 = *(long *)(lVar14 + 0xb30);
    lVar14 = *(long *)(lVar14 + 0xb38);
  }
  FUN_027c1db4(lVar14 + lVar11,lVar15);
  FUN_02640184(&local_1738);
  FUN_02640184(&local_1718);
LAB_021281bc:
  FUN_007ef010(auStack_173a,local_78);
  FUN_007e4920(&local_1718,auStack_173a);
  FUN_007ef010(auStack_173c,local_74);
  FUN_007e90a0(&local_1718,auStack_173c);
  FUN_007ef010(auStack_173e,local_78);
  FUN_00805ba8(&local_1718,auStack_173e);
  *param_2 = (uint)local_1718;
  param_2[1] = local_1718._4_4_;
  return;
}

