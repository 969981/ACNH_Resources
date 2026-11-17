
undefined8 FUN_02d6c150(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
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
  
  uVar10 = 0xffffffff;
  lVar11 = *(long *)PTR_DAT_04bb6538;
  if (lVar11 != 0) {
    FUN_007ef010(auStack_2de2);
    FUN_007e4920(auStack_2de0,auStack_2de2);
    FUN_007ef010(&local_2ee0,param_2);
    FUN_007e4920(&local_1740,&local_2ee0);
    iVar4 = FUN_007e4d10(&local_1740);
    if (iVar4 != -1) {
      FUN_007ef010(&local_2ee0,param_2);
      FUN_007e4920(&local_1740,&local_2ee0);
      FUN_02582a24(param_1);
      uVar5 = FUN_02582d8c(param_1,1);
      uVar12 = 0xffffffff;
      if (uVar5 < 8) {
        lVar9 = *(long *)PTR_DAT_04bb4fb8;
        if ((*(char *)(lVar9 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0') ||
           (*(int *)(lVar9 + (ulong)uVar5 * 0x13f0 + 0x13d0) != 0)) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = (uint)*(byte *)(lVar9 + (ulong)uVar5 * 0x13f0 + 0x13d5);
        }
      }
      uVar5 = FUN_007e4d10(&local_1740);
      if (uVar12 != uVar5) {
        uVar6 = FUN_007e4d10(auStack_2de0);
        puVar2 = PTR_DAT_04bb2bc0;
        local_2ecc = 0;
        local_2ec8 = 0xffffffff;
        uStack_2ec0 = 0xffffffff00000000;
        local_1740 = (undefined *)CONCAT44(local_1740._4_4_,uVar6);
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
        puVar1 = auStack_2dea;
        if (auStack_2dea <= (undefined1 *)((long)&local_2e00 + 2U)) {
          puVar1 = (undefined1 *)((long)&local_2e00 + 2U);
        }
        local_2e58 = local_2eb0;
        memset(puStack_2ed8,0,(ulong)(puVar1 + (-0xe1 - (long)&local_2ee0)) & 0xfffffffffffffffc | 2
              );
        FUN_01c11a38(&local_2ee0,&local_1740);
        if (((DAT_0533a3c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0533a3c0), iVar4 != 0)) {
          FUN_01bb25c8(&DAT_0533a3b0);
          __cxa_guard_release(&DAT_0533a3c0);
        }
        if (0 < (int)DAT_0533a3b0) {
          uVar7 = 0;
          do {
            if (*(int *)(DAT_0533a3b8 + uVar7 * 4) == 0x73) goto LAB_02d6c50c;
            uVar7 = uVar7 + 1;
          } while (DAT_0533a3b0 != uVar7);
        }
        uVar7 = 0;
LAB_02d6c50c:
        local_1740 = (undefined *)CONCAT44(local_1740._4_4_,(int)uVar7);
        FUN_01bae480(lVar11 + 0x260,&local_2ee0,0,&local_1740,0);
        local_172c = 0;
        local_1730 = 0x15;
        local_1710 = puVar2 + 0x10;
        local_1720 = 0xffffffff00000000;
        local_1708 = local_16fc;
        local_1738 = &local_1660;
        local_1728 = 0xffffffff;
        local_1718 = 0xffffffff;
        local_1700 = 0x40;
        local_16bd = 0;
        local_16fc[0] = 0;
        local_16b0 = local_16a4;
        local_16a8 = 0x40;
        local_1665 = 0;
        local_16a4[0] = 0;
        local_1740 = PTR_DAT_04bc0ce8 + 0x10;
        puVar1 = auStack_1636;
        if (auStack_1636 <= (undefined1 *)((long)&local_1660 + 2U)) {
          puVar1 = (undefined1 *)((long)&local_1660 + 2U);
        }
        local_1638 = 0;
        local_1640 = 0;
        local_1648 = 0;
        local_1650 = 0;
        local_1658 = 0;
        local_1660 = 0;
        local_16b8 = local_1710;
        memset(local_1738,0,(ulong)(puVar1 + (-0xe1 - (long)&local_1740)) & 0xfffffffffffffff8 | 2);
        FUN_01c0cff4(&local_1740,param_2);
        if (((DAT_0533a3c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0533a3c0), iVar4 != 0)) {
          FUN_01bb25c8(&DAT_0533a3b0);
          __cxa_guard_release(&DAT_0533a3c0);
        }
        if (0 < (int)DAT_0533a3b0) {
          uVar7 = 0;
          do {
            if (*(int *)(DAT_0533a3b8 + uVar7 * 4) == 0x73) goto LAB_02d6c62c;
            uVar7 = uVar7 + 1;
          } while (DAT_0533a3b0 != uVar7);
        }
        uVar7 = 0;
LAB_02d6c62c:
        local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)uVar7);
        FUN_01bae480(lVar11 + 0x260,&local_1740,0,&local_90,3);
        return 2;
      }
    }
    FUN_007ef010(&local_2ee0,param_2);
    FUN_007e4920(&local_1740,&local_2ee0);
    uVar7 = FUN_007e85b0(&local_1740);
    if ((((uVar7 & 1) == 0) && (uVar7 = FUN_0308b800(param_2), (uVar7 & 1) == 0)) &&
       (uVar7 = FUN_02d6f0e0(param_1,param_2), (uVar7 & 1) == 0)) {
      FUN_007e6230(&local_1740,auStack_2de0);
      puVar2 = PTR_DAT_04bb2bc0;
      local_2ecc = 0;
      local_2ec8 = 0xffffffff;
      uStack_2ec0 = 0xffffffff00000000;
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
      uStack_2df0 = 0;
      local_2ee0 = PTR_DAT_04bb5128 + 0x10;
      local_2e00 = 0;
      uStack_2df8 = 0;
      local_2df2 = 0;
      puVar1 = auStack_2dea;
      if (auStack_2dea <= (undefined1 *)((long)&local_2e00 + 2U)) {
        puVar1 = (undefined1 *)((long)&local_2e00 + 2U);
      }
      local_2e58 = local_2eb0;
      memset(puStack_2ed8,0,(ulong)(puVar1 + (-0xe1 - (long)&local_2ee0)) & 0xfffffffffffffffc | 2);
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
      puVar8 = (undefined4 *)(**(code **)(local_2ee0 + 0x40))(&local_2ee0);
      uVar6 = 1;
      if (local_1710._4_4_ == 1) {
        uVar6 = 2;
      }
      *puVar8 = uVar6;
      puVar3 = PTR_DAT_04bc0a88;
      if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0533a3c0), iVar4 != 0)
         ) {
        FUN_01bb25c8(&DAT_0533a3b0);
        __cxa_guard_release(&DAT_0533a3c0);
      }
      if (0 < (int)DAT_0533a3b0) {
        uVar7 = 0;
        do {
          if (*(int *)(DAT_0533a3b8 + uVar7 * 4) == 0x73) goto LAB_02d6c7bc;
          uVar7 = uVar7 + 1;
        } while (DAT_0533a3b0 != uVar7);
      }
      uVar7 = 0;
LAB_02d6c7bc:
      local_1740 = (undefined *)CONCAT44(local_1740._4_4_,(int)uVar7);
      FUN_01bae480(lVar11 + 0x260,&local_2ee0,0,&local_1740,0);
      local_172c = 0;
      local_1730 = 0x15;
      local_1710 = puVar2 + 0x10;
      local_1720 = 0xffffffff00000000;
      local_1708 = local_16fc;
      local_1738 = &local_1660;
      local_1728 = 0xffffffff;
      local_1718 = 0xffffffff;
      local_1700 = 0x40;
      local_16bd = 0;
      local_16fc[0] = 0;
      local_16b0 = local_16a4;
      local_16a8 = 0x40;
      local_1665 = 0;
      local_16a4[0] = 0;
      local_1740 = PTR_DAT_04bc0ce8 + 0x10;
      puVar1 = auStack_1636;
      if (auStack_1636 <= (undefined1 *)((long)&local_1660 + 2U)) {
        puVar1 = (undefined1 *)((long)&local_1660 + 2U);
      }
      local_1638 = 0;
      local_1640 = 0;
      local_1648 = 0;
      local_1650 = 0;
      local_1658 = 0;
      local_1660 = 0;
      local_16b8 = local_1710;
      memset(local_1738,0,(ulong)(puVar1 + (-0xe1 - (long)&local_1740)) & 0xfffffffffffffff8 | 2);
      FUN_01c0cff4(&local_1740,param_2);
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0533a3c0), iVar4 != 0)) {
        FUN_01bb25c8(&DAT_0533a3b0);
        __cxa_guard_release(&DAT_0533a3c0);
      }
      if (0 < (int)DAT_0533a3b0) {
        uVar7 = 0;
        do {
          if (*(int *)(DAT_0533a3b8 + uVar7 * 4) == 0x73) goto LAB_02d6c8dc;
          uVar7 = uVar7 + 1;
        } while (DAT_0533a3b0 != uVar7);
      }
      uVar7 = 0;
LAB_02d6c8dc:
      local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)uVar7);
      FUN_01bae480(lVar11 + 0x260,&local_1740,0,&local_90,3);
      uVar10 = 1;
    }
    else {
      local_172c = 0;
      local_1720 = 0xffffffff00000000;
      local_1730 = 0x15;
      local_1708 = local_16fc;
      local_1738 = &local_1660;
      local_1728 = 0xffffffff;
      local_1718 = 0xffffffff;
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
      puVar1 = auStack_1636;
      if (auStack_1636 <= (undefined1 *)((long)&local_1660 + 2U)) {
        puVar1 = (undefined1 *)((long)&local_1660 + 2U);
      }
      local_16b8 = local_1710;
      memset(local_1738,0,(ulong)(puVar1 + (-0xe1 - (long)&local_1740)) & 0xfffffffffffffff8 | 2);
      FUN_01c0cff4(&local_1740,param_2);
      if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0533a3c0), iVar4 != 0)
         ) {
        FUN_01bb25c8(&DAT_0533a3b0);
        __cxa_guard_release(&DAT_0533a3c0);
      }
      if (0 < (int)DAT_0533a3b0) {
        uVar7 = 0;
        do {
          if (*(int *)(DAT_0533a3b8 + uVar7 * 4) == 0x73) goto LAB_02d6c3e0;
          uVar7 = uVar7 + 1;
        } while (DAT_0533a3b0 != uVar7);
      }
      uVar7 = 0;
LAB_02d6c3e0:
      local_2ee0 = (undefined *)CONCAT44(local_2ee0._4_4_,(int)uVar7);
      FUN_01bae480(lVar11 + 0x260,&local_1740,0,&local_2ee0,3);
      uVar10 = 0;
    }
  }
  return uVar10;
}

