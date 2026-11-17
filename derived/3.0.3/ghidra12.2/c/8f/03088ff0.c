
void FUN_03088ff0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined **ppuVar11;
  long lVar12;
  uint uVar13;
  undefined *local_2ee0;
  undefined8 *puStack_2ed8;
  undefined4 local_2ed0;
  undefined1 local_2ecc;
  undefined8 local_2ec8;
  undefined8 uStack_2ec0;
  undefined4 local_2eb8;
  undefined *local_2eb0;
  undefined1 *puStack_2ea8;
  undefined4 local_2ea0;
  undefined1 local_2e9c [63];
  undefined1 local_2e5d;
  undefined *local_2e58;
  undefined1 *puStack_2e50;
  undefined4 local_2e48;
  undefined1 local_2e44 [63];
  undefined1 local_2e05;
  undefined8 local_2e00;
  undefined6 uStack_2df8;
  undefined2 local_2df2;
  undefined6 uStack_2df0;
  undefined1 auStack_2dea [8];
  undefined1 auStack_2de2 [2];
  undefined1 auStack_2de0 [5792];
  undefined *local_1740;
  undefined8 *local_1738;
  undefined4 local_1730;
  undefined1 local_172c;
  undefined8 local_1728;
  undefined8 local_1720;
  undefined4 local_1718;
  undefined8 local_1710;
  undefined1 *local_1708;
  undefined4 local_1700;
  undefined1 local_16fc [63];
  undefined1 local_16bd;
  undefined *local_16b8;
  undefined1 *local_16b0;
  undefined4 local_16a8;
  undefined1 local_16a4 [63];
  undefined1 local_1665;
  undefined8 local_1660;
  undefined8 local_1658;
  undefined8 local_1650;
  undefined8 local_1648;
  undefined8 local_1640;
  undefined2 local_1638;
  undefined1 auStack_1636 [5526];
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  
  lVar5 = DAT_05690d38;
  ppuVar11 = &local_2ee0;
  if (DAT_05690d38 == 0) {
    return;
  }
  FUN_007ef010(auStack_2de2);
  FUN_007e4920(auStack_2de0,auStack_2de2);
  lVar1 = param_1 + 0x1f8;
  lVar12 = *(long *)PTR_DAT_04bb27d0;
  if (((((*(long *)(lVar12 + 0x10) == 0) || ((*(uint *)(lVar12 + 0x80) & 0xfffffffe) != 2)) ||
       (*(int *)(*(long *)(lVar12 + 0x10) + 0x3e4) == 1)) &&
      ((*(long *)(lVar12 + 0x28) == 0 || (*(int *)(lVar12 + 0x80) != 1)))) &&
     ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) {
    FUN_007ef010(&local_2ee0,param_2);
    FUN_007e4920(&local_1740,&local_2ee0);
    iVar6 = FUN_007e4d10(&local_1740);
    if (iVar6 == -1) goto LAB_0308916c;
    FUN_007ef010(&local_2ee0,param_2);
    FUN_007e4920(&local_1740,&local_2ee0);
    FUN_02582a24(lVar1);
    uVar7 = FUN_02582d8c(lVar1,1);
    uVar13 = 0xffffffff;
    if (uVar7 < 8) {
      lVar12 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0;
      if ((*(char *)(lVar12 + 0x13d4) == '\0') || (*(int *)(lVar12 + 0x13d0) != 0)) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = (uint)*(byte *)(lVar12 + 0x13d5);
      }
    }
    uVar7 = FUN_007e4d10(&local_1740);
    if (uVar13 == uVar7) goto LAB_0308916c;
    uVar8 = 6;
    if ((param_3 & 1) == 0) {
      uVar8 = 2;
    }
    *(undefined4 *)(param_1 + 0x2444) = uVar8;
    uVar8 = FUN_007e4d10(auStack_2de0);
    puVar3 = PTR_DAT_04bb2bc0;
    local_2ecc = 0;
    local_2ec8 = 0xffffffff;
    uStack_2ec0 = 0xffffffff00000000;
    local_1740 = (undefined *)CONCAT44(local_1740._4_4_,uVar8);
    puStack_2ed8 = &local_2e00;
    local_2ed0 = 0xb;
    puStack_2ea8 = local_2e9c;
    local_2eb8 = 0xffffffff;
    local_2ea0 = 0x40;
    local_2e5d = 0;
    local_2e9c[0] = 0;
    local_2eb0 = PTR_DAT_04bb2bc0 + 0x10;
    local_2e48 = 0x40;
    local_2e05 = 0;
    local_2e44[0] = 0;
    puStack_2e50 = local_2e44;
    local_2ee0 = PTR_DAT_04bb5128 + 0x10;
    local_2e00 = 0;
    uStack_2df8 = 0;
    local_2df2 = 0;
    uStack_2df0 = 0;
    puVar2 = auStack_2dea;
    if (auStack_2dea <= (undefined1 *)((long)&local_2e00 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_2e00 + 2U);
    }
    local_2e58 = local_2eb0;
    memset(puStack_2ed8,0,(ulong)(puVar2 + (-0xe1 - (long)&local_2ee0)) & 0xfffffffffffffffc | 2);
    FUN_01c11a38(&local_2ee0,&local_1740);
    if (((DAT_0533a3c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0533a3c0), iVar6 != 0)) {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
    if (0 < (int)DAT_0533a3b0) {
      uVar9 = 0;
      do {
        if (*(int *)(DAT_0533a3b8 + uVar9 * 4) == 0x73) goto LAB_0308941c;
        uVar9 = uVar9 + 1;
      } while (DAT_0533a3b0 != uVar9);
    }
    uVar9 = 0;
LAB_0308941c:
    local_1740 = (undefined *)CONCAT44(local_1740._4_4_,(int)uVar9);
    FUN_01bae480(lVar5 + 0x260,&local_2ee0,0,&local_1740,0);
    local_172c = 0;
    local_1730 = 0x15;
    local_1710 = puVar3 + 0x10;
    local_1728 = 0xffffffff;
    local_1720 = 0xffffffff00000000;
    local_1708 = local_16fc;
    local_1738 = &local_1660;
    local_1718 = 0xffffffff;
    local_1700 = 0x40;
    local_16bd = 0;
    local_16fc[0] = 0;
    local_16b0 = local_16a4;
    local_16a8 = 0x40;
    local_1665 = 0;
    local_16a4[0] = 0;
    local_1740 = PTR_DAT_04bc0ce8 + 0x10;
    puVar2 = auStack_1636;
    if (auStack_1636 <= (undefined1 *)((long)&local_1660 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_1660 + 2U);
    }
    local_1638 = 0;
    local_1640 = 0;
    local_1648 = 0;
    local_1650 = 0;
    local_1658 = 0;
    local_1660 = 0;
    local_16b8 = local_1710;
    memset(local_1738,0,(ulong)(puVar2 + (-0xe1 - (long)&local_1740)) & 0xfffffffffffffff8 | 2);
    FUN_01c0cff4(&local_1740,param_1 + 0x1668);
    if (((DAT_0533a3c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0533a3c0), iVar6 != 0)) {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
    if (0 < (int)DAT_0533a3b0) {
      uVar9 = 0;
      do {
        if (*(int *)(DAT_0533a3b8 + uVar9 * 4) == 0x73) goto LAB_030897e0;
        uVar9 = uVar9 + 1;
      } while (DAT_0533a3b0 != uVar9);
    }
  }
  else {
LAB_0308916c:
    FUN_007ef010(&local_2ee0,param_2);
    FUN_007e4920(&local_1740,&local_2ee0);
    uVar9 = FUN_007e85b0(&local_1740);
    if ((((uVar9 & 1) != 0) || (uVar9 = FUN_0308b800(param_2), (uVar9 & 1) != 0)) ||
       (uVar9 = FUN_0308b8e0(lVar1,param_2), (uVar9 & 1) != 0)) {
      local_172c = 0;
      local_1730 = 0x15;
      uVar8 = 4;
      if ((param_3 & 1) == 0) {
        uVar8 = 0;
      }
      *(undefined4 *)(param_1 + 0x2444) = uVar8;
      local_1720 = 0xffffffff00000000;
      local_1728 = 0xffffffff;
      local_1718 = 0xffffffff;
      local_1708 = local_16fc;
      local_1738 = &local_1660;
      local_1700 = 0x40;
      local_16bd = 0;
      local_16fc[0] = 0;
      local_1710 = PTR_DAT_04bb2bc0 + 0x10;
      local_16b0 = local_16a4;
      local_16a8 = 0x40;
      local_1665 = 0;
      local_16a4[0] = 0;
      local_1740 = PTR_DAT_04bc0ce8 + 0x10;
      local_1638 = 0;
      local_1640 = 0;
      local_1648 = 0;
      local_1650 = 0;
      local_1658 = 0;
      local_1660 = 0;
      puVar2 = auStack_1636;
      if (auStack_1636 <= (undefined1 *)((long)&local_1660 + 2U)) {
        puVar2 = (undefined1 *)((long)&local_1660 + 2U);
      }
      local_16b8 = local_1710;
      memset(local_1738,0,(ulong)(puVar2 + (-0xe1 - (long)&local_1740)) & 0xfffffffffffffff8 | 2);
      FUN_01c0cff4(&local_1740,param_1 + 0x1668);
      if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0533a3c0), iVar6 != 0)
         ) {
        FUN_01bb25c8(&DAT_0533a3b0);
        __cxa_guard_release(&DAT_0533a3c0);
      }
      if (0 < (int)DAT_0533a3b0) {
        uVar9 = 0;
        do {
          if (*(int *)(DAT_0533a3b8 + uVar9 * 4) == 0x73) goto LAB_030892ec;
          uVar9 = uVar9 + 1;
        } while (DAT_0533a3b0 != uVar9);
      }
      uVar9 = 0;
LAB_030892ec:
      local_2ee0 = (undefined *)CONCAT44(local_2ee0._4_4_,(int)uVar9);
      goto LAB_030897f4;
    }
    uVar8 = 5;
    if ((param_3 & 1) == 0) {
      uVar8 = 1;
    }
    *(undefined4 *)(param_1 + 0x2444) = uVar8;
    FUN_007e6230(&local_1740,auStack_2de0);
    puVar3 = PTR_DAT_04bb2bc0;
    local_2ecc = 0;
    local_2ed0 = 0xb;
    local_2ec8 = 0xffffffff;
    uStack_2ec0 = 0xffffffff00000000;
    puStack_2ea8 = local_2e9c;
    puStack_2ed8 = &local_2e00;
    local_2eb8 = 0xffffffff;
    local_2ea0 = 0x40;
    local_2e5d = 0;
    local_2e9c[0] = 0;
    local_2eb0 = PTR_DAT_04bb2bc0 + 0x10;
    local_2e48 = 0x40;
    local_2e05 = 0;
    local_2e44[0] = 0;
    puStack_2e50 = local_2e44;
    uStack_2df0 = 0;
    local_2ee0 = PTR_DAT_04bb5128 + 0x10;
    local_2e00 = 0;
    uStack_2df8 = 0;
    local_2df2 = 0;
    puVar2 = auStack_2dea;
    if (auStack_2dea <= (undefined1 *)((long)&local_2e00 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_2e00 + 2U);
    }
    local_2e58 = local_2eb0;
    memset(puStack_2ed8,0,(ulong)(puVar2 + (-0xe1 - (long)&local_2ee0)) & 0xfffffffffffffffc | 2);
    local_a0[0] = 10;
    local_98 = &local_1720;
    FUN_0082b014(&local_2ee0);
    local_78 = 0;
    uStack_70 = 0;
    local_80 = 0;
    local_68 = 1;
    local_64 = 0;
    local_90 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_88 = 0;
    FUN_02906b00(&local_90,&local_2ee0,local_a0);
    puVar10 = (undefined4 *)(**(code **)(local_2ee0 + 0x40))(&local_2ee0);
    uVar8 = 1;
    if (local_1710._4_4_ == 1) {
      uVar8 = 2;
    }
    *puVar10 = uVar8;
    puVar4 = PTR_DAT_04bc0a88;
    if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0533a3c0), iVar6 != 0))
    {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
    if (0 < (int)DAT_0533a3b0) {
      uVar9 = 0;
      do {
        if (*(int *)(DAT_0533a3b8 + uVar9 * 4) == 0x73) goto LAB_030896bc;
        uVar9 = uVar9 + 1;
      } while (DAT_0533a3b0 != uVar9);
    }
    uVar9 = 0;
LAB_030896bc:
    local_1740 = (undefined *)CONCAT44(local_1740._4_4_,(int)uVar9);
    FUN_01bae480(lVar5 + 0x260,&local_2ee0,0,&local_1740,0);
    local_172c = 0;
    local_1730 = 0x15;
    local_1710 = puVar3 + 0x10;
    local_1728 = 0xffffffff;
    local_1720 = 0xffffffff00000000;
    local_1708 = local_16fc;
    local_1738 = &local_1660;
    local_1718 = 0xffffffff;
    local_1700 = 0x40;
    local_16bd = 0;
    local_16fc[0] = 0;
    local_16b0 = local_16a4;
    local_16a8 = 0x40;
    local_1665 = 0;
    local_16a4[0] = 0;
    local_1740 = PTR_DAT_04bc0ce8 + 0x10;
    puVar2 = auStack_1636;
    if (auStack_1636 <= (undefined1 *)((long)&local_1660 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_1660 + 2U);
    }
    local_1638 = 0;
    local_1640 = 0;
    local_1648 = 0;
    local_1650 = 0;
    local_1658 = 0;
    local_1660 = 0;
    local_16b8 = local_1710;
    memset(local_1738,0,(ulong)(puVar2 + (-0xe1 - (long)&local_1740)) & 0xfffffffffffffff8 | 2);
    FUN_01c0cff4(&local_1740,param_1 + 0x1668);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0533a3c0), iVar6 != 0)) {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
    if (0 < (int)DAT_0533a3b0) {
      uVar9 = 0;
      do {
        if (*(int *)(DAT_0533a3b8 + uVar9 * 4) == 0x73) goto LAB_030897e0;
        uVar9 = uVar9 + 1;
      } while (DAT_0533a3b0 != uVar9);
    }
  }
  uVar9 = 0;
LAB_030897e0:
  local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)uVar9);
  ppuVar11 = &local_90;
LAB_030897f4:
  FUN_01bae480(lVar5 + 0x260,&local_1740,0,ppuVar11,3);
  return;
}

