
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02822400(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  ushort uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  undefined2 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined4 uVar25;
  undefined4 local_2588;
  undefined4 local_2584;
  undefined8 local_2580;
  undefined8 local_2578;
  uint local_1e24;
  uint local_1e20;
  uint local_1e1c;
  int local_1e18;
  undefined8 local_1e10;
  undefined8 local_1e08;
  undefined8 local_1e00;
  uint local_16b4;
  uint local_16b0;
  uint local_16ac;
  int local_16a8;
  undefined8 local_16a0;
  undefined8 local_1698;
  long local_1690;
  uint local_f44;
  uint local_f40;
  uint local_f3c;
  int local_f38;
  undefined **local_f30;
  undefined1 auStack_f28 [1876];
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  int local_7c8;
  undefined8 local_7c0;
  undefined4 local_7b8;
  undefined4 local_7b4;
  uint *local_7b0;
  
  local_f30 = &PTR_LAB_049ff3a8;
  memset(auStack_f28,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_7d4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
  local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
  local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)FUN_01a451fc(&local_f30);
  memset(pvVar11,0,0x754);
  FUN_0264a620(&local_16a0,param_2);
  pvVar11 = (void *)(**(code **)((long)local_16a0 + 0x18))(&local_16a0);
  for (lVar16 = 0; *(uint *)((long)&local_1e10 + lVar16) = ~*(uint *)((long)pvVar11 + lVar16),
      lVar16 != 0x750; lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_1e10 + lVar16 + 4) = ~*(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_1e10,0x754);
  uVar5 = 0;
  local_1e10 = &PTR_FUN_049ff4e8;
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  puVar4 = PTR_DAT_04bb43c0;
  local_1e08 = (undefined8 *)param_3;
  do {
    (**(code **)((long)local_16a0 + 0x10))(&local_2580,&local_16a0,uVar5);
    lVar16 = (**(code **)((long)local_16a0 + 0x20))(&local_16a0);
    uVar8 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar16 + (ulong)(uVar5 >> 5) * 4) & uVar8) != 0) {
      lVar16 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_2580);
      if (*(long *)puVar4 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_1e10)(&local_1e10,&local_2580), (uVar12 & 1) != 0))
        goto LAB_028225a0;
      }
      lVar16 = (**(code **)((long)local_16a0 + 0x18))(&local_16a0);
      lVar13 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & (uVar8 ^ 0xffffffff);
    }
LAB_028225a0:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  uVar5 = 0;
  local_1e10 = &PTR_FUN_049ff8d0;
  local_1e08 = (undefined8 *)param_2;
  do {
    (**(code **)((long)local_16a0 + 0x10))(&local_2580,&local_16a0,uVar5);
    lVar16 = (**(code **)((long)local_16a0 + 0x20))(&local_16a0);
    uVar8 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar16 + (ulong)(uVar5 >> 5) * 4) & uVar8) != 0) {
      lVar16 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_2580);
      if (*(long *)puVar4 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_1e10)(&local_1e10,&local_2580), (uVar12 & 1) != 0))
        goto LAB_02822684;
      }
      lVar16 = (**(code **)((long)local_16a0 + 0x18))(&local_16a0);
      lVar13 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & (uVar8 ^ 0xffffffff);
    }
LAB_02822684:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  uVar5 = 0;
  local_7c0 = (undefined *)((ulong)local_7c0 & 0xffffffff00000000);
  local_1e08 = &local_7c0;
  local_1e10 = &PTR_FUN_049ff858;
  do {
    (**(code **)((long)local_16a0 + 0x10))(&local_2580,&local_16a0,uVar5);
    lVar16 = (**(code **)((long)local_16a0 + 0x20))(&local_16a0);
    uVar8 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar16 + (ulong)(uVar5 >> 5) * 4) & uVar8) != 0) {
      lVar16 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_2580);
      if (*(long *)puVar4 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_1e10)(&local_1e10,&local_2580), (uVar12 & 1) != 0))
        goto LAB_02822770;
      }
      lVar16 = (**(code **)((long)local_16a0 + 0x18))(&local_16a0);
      lVar13 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & (uVar8 ^ 0xffffffff);
    }
LAB_02822770:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  pvVar11 = (void *)(*(code *)local_f30[3])(&local_f30);
  lVar13 = (**(code **)((long)local_16a0 + 0x20))(&local_16a0);
  for (lVar16 = 0;
      *(uint *)((long)&local_1e10 + lVar16) =
           *(uint *)(lVar13 + lVar16) | *(uint *)((long)pvVar11 + lVar16), lVar16 != 0x750;
      lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_1e10 + lVar16 + 4) =
         *(uint *)(lVar13 + lVar16 + 4) | *(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_1e10,0x754);
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  FUN_0264a620(&local_16a0,param_2);
  pvVar11 = (void *)(**(code **)((long)local_16a0 + 0x18))(&local_16a0);
  for (lVar16 = 0; *(uint *)((long)&local_1e10 + lVar16) = ~*(uint *)((long)pvVar11 + lVar16),
      lVar16 != 0x750; lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_1e10 + lVar16 + 4) = ~*(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_1e10,0x754);
  uVar5 = 0;
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  local_1e10 = &PTR_FUN_049ff4e8;
  local_1e08 = (undefined8 *)param_3;
  do {
    (**(code **)((long)local_16a0 + 0x10))(&local_2580,&local_16a0,uVar5);
    lVar16 = (**(code **)((long)local_16a0 + 0x20))(&local_16a0);
    uVar8 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar16 + (ulong)(uVar5 >> 5) * 4) & uVar8) != 0) {
      lVar16 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_2580);
      if (*(long *)puVar4 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_1e10)(&local_1e10,&local_2580), (uVar12 & 1) != 0))
        goto LAB_02822950;
      }
      lVar16 = (**(code **)((long)local_16a0 + 0x18))(&local_16a0);
      lVar13 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & (uVar8 ^ 0xffffffff);
    }
LAB_02822950:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  uVar5 = 0;
  local_7c0 = (undefined *)((ulong)local_7c0 & 0xffffffff00000000);
  local_1e08 = &local_7c0;
  local_1e10 = &PTR_FUN_049ff858;
  do {
    (**(code **)((long)local_16a0 + 0x10))(&local_2580,&local_16a0,uVar5);
    lVar16 = (**(code **)((long)local_16a0 + 0x20))(&local_16a0);
    uVar8 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar16 + (ulong)(uVar5 >> 5) * 4) & uVar8) != 0) {
      lVar16 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_2580);
      if (*(long *)puVar4 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_1e10)(&local_1e10,&local_2580), (uVar12 & 1) != 0))
        goto LAB_02822a34;
      }
      lVar16 = (**(code **)((long)local_16a0 + 0x18))(&local_16a0);
      lVar13 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & (uVar8 ^ 0xffffffff);
    }
LAB_02822a34:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  local_1e10 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_1e08,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_16b4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_16b0 = (local_16b4 ^ local_16b4 >> 0x1e) * 0x6c078965 + 2;
  local_16ac = (local_16b0 ^ local_16b0 >> 0x1e) * 0x6c078965 + 3;
  local_16a8 = (local_16ac ^ local_16ac >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)((long)local_1e10 + 0x18))(&local_1e10);
  memset(pvVar11,0,0x754);
  local_2580 = &PTR_LAB_049ff7b8;
  FUN_008a1ba0(&local_1e10,&local_2580);
  pvVar11 = (void *)(**(code **)((long)local_1e10 + 0x18))(&local_1e10);
  for (lVar16 = 0; *(uint *)((long)&local_2580 + lVar16) = ~*(uint *)((long)pvVar11 + lVar16),
      lVar16 != 0x750; lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_2580 + lVar16 + 4) = ~*(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_2580,0x754);
  uVar5 = 0;
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  local_2580 = &PTR_FUN_049ff4e8;
  local_2578 = param_3;
  do {
    (**(code **)((long)local_1e10 + 0x10))(&local_7c0,&local_1e10,uVar5);
    lVar16 = (**(code **)((long)local_1e10 + 0x20))(&local_1e10);
    uVar8 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar16 + (ulong)(uVar5 >> 5) * 4) & uVar8) != 0) {
      lVar16 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_7c0);
      if (*(long *)puVar4 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_2580)(&local_2580,&local_7c0), (uVar12 & 1) != 0))
        goto LAB_02822c30;
      }
      lVar16 = (**(code **)((long)local_1e10 + 0x18))(&local_1e10);
      lVar13 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & (uVar8 ^ 0xffffffff);
    }
LAB_02822c30:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  pvVar11 = (void *)(**(code **)((long)local_16a0 + 0x18))(&local_16a0);
  lVar13 = (**(code **)((long)local_1e10 + 0x20))(&local_1e10);
  for (lVar16 = 0;
      *(uint *)((long)&local_2580 + lVar16) =
           *(uint *)(lVar13 + lVar16) & *(uint *)((long)pvVar11 + lVar16), lVar16 != 0x750;
      lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_2580 + lVar16 + 4) =
         *(uint *)(lVar13 + lVar16 + 4) & *(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_2580,0x754);
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  pvVar11 = (void *)(*(code *)local_f30[3])(&local_f30);
  lVar13 = (**(code **)((long)local_16a0 + 0x20))(&local_16a0);
  for (lVar16 = 0;
      *(uint *)((long)&local_2580 + lVar16) =
           *(uint *)(lVar13 + lVar16) | *(uint *)((long)pvVar11 + lVar16), lVar16 != 0x750;
      lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_2580 + lVar16 + 4) =
         *(uint *)(lVar13 + lVar16 + 4) | *(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_2580,0x754);
  puVar1 = PTR_DAT_04bbfe60;
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  local_16a0 = (undefined **)(puVar1 + 0x10);
  memset(&local_1698,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_f44 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 2;
  local_f3c = (local_f40 ^ local_f40 >> 0x1e) * 0x6c078965 + 3;
  local_f38 = (local_f3c ^ local_f3c >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)((long)local_16a0 + 0x18))(&local_16a0);
  memset(pvVar11,0,0x754);
  local_2580 = (undefined **)((ulong)local_2580 & 0xffffffff00000000);
  local_1e10 = &PTR_FUN_049ff858;
  local_1e08 = &local_2580;
  FUN_008a1ba0(&local_16a0,&local_1e10);
  pvVar11 = (void *)(**(code **)((long)local_16a0 + 0x18))(&local_16a0);
  for (lVar16 = 0; *(uint *)((long)&local_1e10 + lVar16) = ~*(uint *)((long)pvVar11 + lVar16),
      lVar16 != 0x750; lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_1e10 + lVar16 + 4) = ~*(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_1e10,0x754);
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  if (DAT_05574040 == 0) {
LAB_02822f64:
    lVar16 = 0;
  }
  else {
    puVar17 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar17 + 0x38))();
      lVar16 = 0;
      if (lVar13 != 0) {
        lVar16 = lVar13 + 0x70;
      }
    }
    else {
      if (puVar17 == (undefined8 *)0x0) goto LAB_02822f64;
      lVar16 = 0;
      if ((long *)puVar17[0x26] != (long *)0x0) {
        lVar16 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar16 + 0xe7290) == (long *)0x0) ||
     (puVar17 = (undefined8 *)**(long **)(lVar16 + 0xe7290), puVar17 == (undefined8 *)0x0)) {
    uVar5 = *(uint *)(*(long *)(lVar16 + 0xe7278) + *(long *)(lVar16 + 0xe7270));
  }
  else {
    uVar12 = (**(code **)*puVar17)();
    uVar5 = *(uint *)(*(long *)(lVar16 + 0xe7278) + *(long *)(lVar16 + 0xe7270));
    if ((((uVar12 & 1) != 0) && (*(long *)(lVar16 + 0xe7290) != 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0xe7290) + 8), puVar17 != (undefined8 *)0x0))
    {
      (**(code **)*puVar17)();
    }
  }
  FUN_0264a620(&local_1e10,param_2);
  pvVar11 = (void *)(*(code *)local_1e10[3])(&local_1e10);
  for (lVar16 = 0; *(uint *)((long)&local_2580 + lVar16) = ~*(uint *)((long)pvVar11 + lVar16),
      lVar16 != 0x750; lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_2580 + lVar16 + 4) = ~*(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_2580,0x754);
  uVar8 = 0;
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  local_2580 = &PTR_FUN_049ff4e8;
  local_2578 = param_3;
  do {
    (*(code *)local_1e10[2])(&local_7c0,&local_1e10,uVar8);
    lVar16 = (*(code *)local_1e10[4])(&local_1e10);
    uVar6 = 1 << (ulong)(uVar8 & 0x1f);
    if ((*(uint *)(lVar16 + (ulong)(uVar8 >> 5) * 4) & uVar6) != 0) {
      lVar16 = *(long *)puVar4;
      uVar7 = FUN_0277d6c4(&local_7c0);
      if (*(long *)puVar4 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_2580)(&local_2580,&local_7c0), (uVar12 & 1) != 0))
        goto LAB_02823080;
      }
      lVar16 = (*(code *)local_1e10[3])(&local_1e10);
      lVar13 = (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & (uVar6 ^ 0xffffffff);
    }
LAB_02823080:
    uVar8 = uVar8 + 1;
  } while (uVar8 != 15000);
  pvVar11 = (void *)(*(code *)local_1e10[3])(&local_1e10);
  lVar13 = (**(code **)((long)local_16a0 + 0x20))(&local_16a0);
  for (lVar16 = 0;
      *(uint *)((long)&local_2580 + lVar16) =
           *(uint *)(lVar13 + lVar16) & *(uint *)((long)pvVar11 + lVar16), lVar16 != 0x750;
      lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_2580 + lVar16 + 4) =
         *(uint *)(lVar13 + lVar16 + 4) & *(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_2580,0x754);
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  local_2580 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_2578,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_1e24 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_1e20 = (local_1e24 ^ local_1e24 >> 0x1e) * 0x6c078965 + 2;
  local_1e1c = (local_1e20 ^ local_1e20 >> 0x1e) * 0x6c078965 + 3;
  local_1e18 = (local_1e1c ^ local_1e1c >> 0x1e) * 0x6c078965 + 4;
  memcpy(&local_2578,&local_1e08,0x754);
  lVar13 = (*(code *)local_1e10[4])(&local_1e10);
  lVar16 = 0;
  iVar10 = 0;
  do {
    iVar21 = iVar10;
    puVar19 = (uint *)(lVar13 + lVar16);
    lVar16 = lVar16 + 4;
    uVar8 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
    uVar8 = uVar8 + (uVar8 >> 8);
    uVar8 = uVar8 + (uVar8 >> 0x10);
    iVar10 = (uVar8 & 0x3f) + iVar21;
  } while (lVar16 != 0x754);
  if (iVar10 != 0) {
    iVar10 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      FUN_00889f80(&local_2588,&local_1e10,iVar10 + 1);
      lVar16 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_2588);
      lVar13 = *(long *)puVar4;
      if (lVar13 == 0) {
LAB_02823490:
        lVar16 = (**(code **)((long)local_2580 + 0x18))(&local_2580);
        uVar6 = FUN_0277d6c4(&local_2588);
        if ((uVar6 >> 3 & 0x1fff) < 0x753) {
          lVar13 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
          *(uint *)(lVar16 + lVar13) =
               *(uint *)(lVar16 + lVar13) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
        }
      }
      else {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02823490;
        local_7b0 = (uint *)0x0;
        local_7b8 = local_2588;
        local_7b4 = local_2584;
        local_7c0 = puVar1;
        uVar6 = FUN_0277d6c4(&local_7b8);
        uVar14 = 0;
        if (*(long *)puVar4 == 0) goto LAB_0282345c;
        lVar16 = *(long *)(lVar13 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar16 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_2588);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if (*(uint *)(lVar16 + 0x1d8) <= uVar6) goto LAB_02823458;
          puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8);
          if (puVar19 == (uint *)0x0) goto LAB_02823458;
          uVar14 = 0;
          uVar6 = *puVar19;
          local_7b0 = puVar19;
          if ((uVar6 != 0) && (puVar19 != (uint *)(ulong)uVar6)) {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar6);
            uVar14 = 0;
            if (*puVar20 != 0) {
              uVar6 = puVar20[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar16 != 0) {
                  uVar7 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar7 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar6);
                  }
                  if (*puVar20 <= uVar7) {
                    uVar7 = 0xffffffff;
                  }
                  if ((uVar7 < *(uint *)PTR_DAT_04bc0020) &&
                     (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar7 * 2),
                     uVar14 < 0x5b6)) goto LAB_0282345c;
                }
              }
              goto LAB_02823458;
            }
          }
        }
        else {
LAB_02823458:
          uVar14 = 0;
        }
LAB_0282345c:
        if (uVar14 == 0) goto LAB_02823490;
        uVar7 = FUN_02825270(&local_2588);
        iVar9 = FUN_02824fb0(&local_2588);
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar5 / uVar7;
        }
        if (uVar5 - uVar6 * uVar7 != iVar9) goto LAB_02823490;
      }
      iVar10 = iVar10 + 1;
    } while (iVar21 + (uVar8 & 0x3f) != iVar10);
  }
  pvVar11 = (void *)(*(code *)local_f30[3])(&local_f30);
  lVar13 = (**(code **)((long)local_2580 + 0x20))(&local_2580);
  for (lVar16 = 0;
      *(uint *)((long)&local_7c0 + lVar16) =
           *(uint *)(lVar13 + lVar16) | *(uint *)((long)pvVar11 + lVar16), lVar16 != 0x750;
      lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_7c0 + lVar16 + 4) =
         *(uint *)(lVar13 + lVar16 + 4) | *(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_7c0,0x754);
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  lVar13 = (*(code *)local_f30[4])(&local_f30);
  lVar16 = 0;
  iVar10 = 0;
  do {
    puVar19 = (uint *)(lVar13 + lVar16);
    lVar16 = lVar16 + 4;
    uVar5 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    iVar10 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + iVar10;
  } while (lVar16 != 0x754);
  if (iVar10 != 0) {
    puVar19 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar5 = *puVar19 ^ *puVar19 << 0xb;
    uVar6 = puVar19[3];
    *puVar19 = puVar19[1];
    puVar19[1] = puVar19[2];
    uVar8 = uVar5 ^ uVar6;
    uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar8;
    puVar19[2] = uVar6;
    puVar19[3] = uVar5;
    uVar5 = (uVar5 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    uVar8 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
    uVar6 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
    uVar7 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
    lVar13 = (*(code *)local_f30[4])(&local_f30);
    uVar25 = DAT_0558600c;
    lVar16 = 0;
    iVar10 = 0;
    do {
      puVar19 = (uint *)(lVar13 + lVar16);
      lVar16 = lVar16 + 4;
      uVar15 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
      uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      iVar10 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar10;
    } while (lVar16 != 0x754);
    if (iVar10 == 0) {
      *param_1 = _DAT_05586008;
      param_1[1] = uVar25;
      return;
    }
    lVar13 = (*(code *)local_f30[4])(&local_f30);
    lVar16 = 0;
    uVar15 = 0;
    do {
      puVar19 = (uint *)(lVar13 + lVar16);
      lVar16 = lVar16 + 4;
      uVar3 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      uVar15 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar15;
    } while (lVar16 != 0x754);
    uVar5 = uVar5 ^ uVar5 * 0x800;
    local_16a0 = (undefined **)CONCAT44(uVar6,uVar8);
    uVar5 = uVar5 >> 8 ^ uVar7 >> 0x13 ^ uVar5 ^ uVar7;
    local_1698 = CONCAT44(uVar5,uVar7);
    FUN_00889f80(param_1,&local_f30,(int)((ulong)uVar5 * (ulong)uVar15 >> 0x20) + 1);
    FUN_01a4c66c(&local_16a0,param_1);
    return;
  }
  ppuVar2 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_f30 = ppuVar2;
  memset(auStack_f28,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_7d4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
  local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
  local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(*(code *)local_f30[3])(&local_f30);
  memset(pvVar11,0,0x754);
  local_16a0 = ppuVar2;
  memset(&local_1698,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_f44 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 2;
  local_f3c = (local_f40 ^ local_f40 >> 0x1e) * 0x6c078965 + 3;
  local_f38 = (local_f3c ^ local_f3c >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(*(code *)local_16a0[3])(&local_16a0);
  memset(pvVar11,0,0x754);
  local_1e10 = &PTR_FUN_049ff920;
  local_1e08 = (undefined8 *)param_2;
  FUN_008a1ba0(&local_16a0,&local_1e10);
  uVar5 = 0;
  local_1e10 = &PTR_FUN_049ff4e8;
  local_1e08 = (undefined8 *)param_3;
  do {
    (*(code *)local_16a0[2])(&local_2580,&local_16a0,uVar5);
    lVar16 = (*(code *)local_16a0[4])(&local_16a0);
    uVar8 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar16 + (ulong)(uVar5 >> 5) * 4) & uVar8) != 0) {
      lVar16 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_2580);
      if (*(long *)puVar4 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_1e10)(&local_1e10,&local_2580), (uVar12 & 1) != 0))
        goto LAB_028238b0;
      }
      lVar16 = (*(code *)local_16a0[3])(&local_16a0);
      lVar13 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & (uVar8 ^ 0xffffffff);
    }
LAB_028238b0:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  uVar5 = 0;
  local_7c0 = (undefined *)((ulong)local_7c0 & 0xffffffff00000000);
  local_1e08 = &local_7c0;
  local_1e10 = &PTR_FUN_049ff858;
  do {
    (*(code *)local_16a0[2])(&local_2580,&local_16a0,uVar5);
    lVar16 = (*(code *)local_16a0[4])(&local_16a0);
    uVar8 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar16 + (ulong)(uVar5 >> 5) * 4) & uVar8) != 0) {
      lVar16 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_2580);
      if (*(long *)puVar4 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_1e10)(&local_1e10,&local_2580), (uVar12 & 1) != 0))
        goto LAB_028239a0;
      }
      lVar16 = (*(code *)local_16a0[3])(&local_16a0);
      lVar13 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & (uVar8 ^ 0xffffffff);
    }
LAB_028239a0:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  pvVar11 = (void *)(*(code *)local_f30[3])(&local_f30);
  lVar13 = (*(code *)local_16a0[4])(&local_16a0);
  for (lVar16 = 0;
      *(uint *)((long)&local_1e10 + lVar16) =
           *(uint *)(lVar13 + lVar16) | *(uint *)((long)pvVar11 + lVar16), lVar16 != 0x750;
      lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_1e10 + lVar16 + 4) =
         *(uint *)(lVar13 + lVar16 + 4) | *(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_1e10,0x754);
  puVar1 = PTR_DAT_04bbfe60;
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  local_16a0 = (undefined **)(puVar1 + 0x10);
  memset(&local_1698,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_f44 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 2;
  local_f3c = (local_f40 ^ local_f40 >> 0x1e) * 0x6c078965 + 3;
  local_f38 = (local_f3c ^ local_f3c >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)((long)local_16a0 + 0x18))(&local_16a0);
  memset(pvVar11,0,0x754);
  local_1e08 = &local_2580;
  local_2580 = (undefined **)((ulong)local_2580 & 0xffffffff00000000);
  local_1e10 = &PTR_FUN_049ff858;
  FUN_008a1ba0(&local_16a0,&local_1e10);
  pvVar11 = (void *)(**(code **)((long)local_16a0 + 0x18))(&local_16a0);
  for (lVar16 = 0; *(uint *)((long)&local_1e10 + lVar16) = ~*(uint *)((long)pvVar11 + lVar16),
      lVar16 != 0x750; lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_1e10 + lVar16 + 4) = ~*(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_1e10,0x754);
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar13 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
    lVar16 = 0;
    if (lVar13 != 0) {
      lVar16 = lVar13 + 0x70;
    }
  }
  else {
    lVar16 = (**(code **)(*(long *)(*(undefined8 **)(DAT_05574040 + 0x10))[0x26] + 0x38))();
  }
  plVar18 = *(long **)(lVar16 + 0xe7290);
  if (((plVar18 != (long *)0x0) && (puVar17 = (undefined8 *)*plVar18, puVar17 != (undefined8 *)0x0))
     && ((uVar12 = (**(code **)*puVar17)(), (uVar12 & 1) != 0 &&
         ((lVar16 = *(long *)(lVar16 + 0xe7290), lVar16 != 0 &&
          (puVar17 = *(undefined8 **)(lVar16 + 8), puVar17 != (undefined8 *)0x0)))))) {
    (**(code **)*puVar17)();
  }
  FUN_0264a620(&local_1e10,param_2);
  pvVar11 = (void *)(*(code *)local_1e10[3])(&local_1e10);
  for (lVar16 = 0; *(uint *)((long)&local_2580 + lVar16) = ~*(uint *)((long)pvVar11 + lVar16),
      lVar16 != 0x750; lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_2580 + lVar16 + 4) = ~*(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_2580,0x754);
  uVar5 = 0;
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  local_2580 = &PTR_FUN_049ff4e8;
  local_2578 = param_3;
  do {
    (*(code *)local_1e10[2])(&local_7c0,&local_1e10,uVar5);
    lVar16 = (*(code *)local_1e10[4])(&local_1e10);
    uVar8 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar16 + (ulong)(uVar5 >> 5) * 4) & uVar8) != 0) {
      lVar16 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_7c0);
      if (*(long *)puVar4 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar12 = (*(code *)*local_2580)(&local_2580,&local_7c0), (uVar12 & 1) != 0))
        goto LAB_02823d50;
      }
      lVar16 = (*(code *)local_1e10[3])(&local_1e10);
      lVar13 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & (uVar8 ^ 0xffffffff);
    }
LAB_02823d50:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  pvVar11 = (void *)(*(code *)local_1e10[3])(&local_1e10);
  lVar13 = (**(code **)((long)local_16a0 + 0x20))(&local_16a0);
  for (lVar16 = 0;
      *(uint *)((long)&local_2580 + lVar16) =
           *(uint *)(lVar13 + lVar16) & *(uint *)((long)pvVar11 + lVar16), lVar16 != 0x750;
      lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_2580 + lVar16 + 4) =
         *(uint *)(lVar13 + lVar16 + 4) & *(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_2580,0x754);
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  local_2580 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_2578,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_1e24 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_1e20 = (local_1e24 ^ local_1e24 >> 0x1e) * 0x6c078965 + 2;
  local_1e1c = (local_1e20 ^ local_1e20 >> 0x1e) * 0x6c078965 + 3;
  local_1e18 = (local_1e1c ^ local_1e1c >> 0x1e) * 0x6c078965 + 4;
  memcpy(&local_2578,&local_1e08,0x754);
  lVar13 = (*(code *)local_1e10[4])(&local_1e10);
  lVar16 = 0;
  iVar10 = 0;
  do {
    iVar21 = iVar10;
    puVar19 = (uint *)(lVar13 + lVar16);
    lVar16 = lVar16 + 4;
    uVar5 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    uVar5 = uVar5 + (uVar5 >> 0x10);
    iVar10 = (uVar5 & 0x3f) + iVar21;
  } while (lVar16 != 0x754);
  if (iVar10 != 0) {
    iVar10 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      FUN_00889f80(&local_2588,&local_1e10,iVar10 + 1);
      lVar13 = *(long *)puVar4;
      uVar8 = FUN_0277d6c4(&local_2588);
      lVar16 = *(long *)puVar4;
      if (lVar16 == 0) {
LAB_02824130:
        lVar16 = (**(code **)((long)local_2580 + 0x18))(&local_2580);
        uVar8 = FUN_0277d6c4(&local_2588);
        if ((uVar8 >> 3 & 0x1fff) < 0x753) {
          lVar13 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
          *(uint *)(lVar16 + lVar13) =
               *(uint *)(lVar16 + lVar13) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
        }
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_02824130;
        local_7b0 = (uint *)0x0;
        local_7b8 = local_2588;
        local_7b4 = local_2584;
        local_7c0 = puVar1;
        uVar8 = FUN_0277d6c4(&local_7b8);
        uVar14 = 0;
        if (*(long *)puVar4 == 0) goto LAB_0282411c;
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar16 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_2588);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if (*(uint *)(lVar16 + 0x1d8) <= uVar8) goto LAB_02824118;
          puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8);
          if (puVar19 == (uint *)0x0) goto LAB_02824118;
          uVar14 = 0;
          uVar8 = *puVar19;
          local_7b0 = puVar19;
          if ((uVar8 != 0) && (puVar19 != (uint *)(ulong)uVar8)) {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar8);
            uVar14 = 0;
            if (*puVar20 != 0) {
              uVar8 = puVar20[1];
              if ((uVar8 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar16 != 0) {
                  uVar6 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar6 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar8);
                  }
                  if (*puVar20 <= uVar6) {
                    uVar6 = 0xffffffff;
                  }
                  if ((uVar6 < *(uint *)PTR_DAT_04bc0020) &&
                     (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar6 * 2),
                     uVar14 < 0x5b6)) goto LAB_0282411c;
                }
              }
              goto LAB_02824118;
            }
          }
        }
        else {
LAB_02824118:
          uVar14 = 0;
        }
LAB_0282411c:
        if (uVar14 == 0) goto LAB_02824130;
      }
      iVar10 = iVar10 + 1;
    } while (iVar21 + (uVar5 & 0x3f) != iVar10);
  }
  pvVar11 = (void *)(*(code *)local_f30[3])(&local_f30);
  lVar13 = (**(code **)((long)local_2580 + 0x20))(&local_2580);
  for (lVar16 = 0;
      *(uint *)((long)&local_7c0 + lVar16) =
           *(uint *)(lVar13 + lVar16) | *(uint *)((long)pvVar11 + lVar16), lVar16 != 0x750;
      lVar16 = lVar16 + 8) {
    *(uint *)((long)&local_7c0 + lVar16 + 4) =
         *(uint *)(lVar13 + lVar16 + 4) | *(uint *)((long)pvVar11 + lVar16 + 4);
  }
  memcpy(pvVar11,&local_7c0,0x754);
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  lVar13 = (*(code *)local_f30[4])(&local_f30);
  lVar16 = 0;
  iVar10 = 0;
  do {
    puVar19 = (uint *)(lVar13 + lVar16);
    lVar16 = lVar16 + 4;
    uVar5 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    iVar10 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + iVar10;
  } while (lVar16 != 0x754);
  if (iVar10 == 0) {
    local_f30 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(auStack_f28,0,0x754);
    uVar5 = nn::os::GetSystemTick();
    local_7d4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
    local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
    local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
    local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
    pvVar11 = (void *)FUN_01a451fc(&local_f30);
    memset(pvVar11,0,0x754);
    puVar19 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar6 = puVar19[3];
    uVar5 = *puVar19 ^ *puVar19 << 0xb;
    *puVar19 = puVar19[1];
    puVar19[1] = puVar19[2];
    uVar8 = uVar5 ^ uVar6;
    uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar8;
    puVar19[2] = uVar6;
    puVar19[3] = uVar5;
    uVar5 = (uVar5 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    uVar8 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
    uVar6 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
    uVar7 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
    local_16a0 = &PTR_FUN_049ff4e8;
    local_1698 = param_3;
    local_2580._0_4_ = uVar5;
    local_2580._4_4_ = uVar8;
    local_2578._0_4_ = uVar6;
    local_2578._4_4_ = uVar7;
    FUN_008a1ba0(&local_f30,&local_16a0);
    lVar13 = (*(code *)local_f30[4])(&local_f30);
    uVar25 = DAT_0558600c;
    lVar16 = 0;
    iVar10 = 0;
    do {
      puVar19 = (uint *)(lVar13 + lVar16);
      lVar16 = lVar16 + 4;
      uVar15 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
      uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      iVar10 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar10;
    } while (lVar16 != 0x754);
    if (iVar10 == 0) {
      uVar22 = DAT_05586008;
      uVar23 = DAT_0558600a;
      uVar24 = DAT_0558600b;
      *(undefined2 *)param_1 = DAT_05586008;
      *(undefined1 *)((long)param_1 + 2) = uVar23;
      *(undefined1 *)((long)param_1 + 3) = uVar24;
      param_1[1] = uVar25;
    }
    else {
      lVar13 = (*(code *)local_f30[4])(&local_f30);
      lVar16 = 0;
      uVar15 = 0;
      do {
        puVar19 = (uint *)(lVar13 + lVar16);
        lVar16 = lVar16 + 4;
        uVar3 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        uVar15 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar15;
      } while (lVar16 != 0x754);
      uVar5 = uVar5 ^ uVar5 * 0x800;
      local_2578._4_4_ = uVar5 >> 8 ^ uVar7 >> 0x13 ^ uVar5 ^ uVar7;
      local_2580._0_4_ = uVar8;
      local_2580._4_4_ = uVar6;
      local_2578._0_4_ = uVar7;
      FUN_00889f80(param_1,&local_f30,(int)((ulong)local_2578._4_4_ * (ulong)uVar15 >> 0x20) + 1);
      FUN_01a4c66c(&local_2580,param_1);
      uVar22 = *(undefined2 *)param_1;
      uVar23 = *(undefined1 *)((long)param_1 + 2);
      uVar24 = *(undefined1 *)((long)param_1 + 3);
      uVar25 = param_1[1];
    }
    puVar1 = PTR_DAT_04bc0510;
    lVar13 = *(long *)puVar4;
    local_1698._0_3_ = CONCAT12(uVar23,uVar22);
    local_1698._0_4_ = CONCAT13(uVar24,(undefined3)local_1698);
    local_16a0 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_1698 = CONCAT44(uVar25,(undefined4)local_1698);
    local_1690 = 0;
    uVar5 = FUN_0277d6c4(&local_1698);
    lVar16 = DAT_0532a768;
    if (*(long *)puVar4 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        uVar5 = FUN_0277d6c4(param_1);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (uVar5 < *(uint *)(lVar16 + 0x1d8)) {
          lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar16 != 0) {
            local_1690 = lVar16;
          }
        }
      }
    }
    iVar10 = FUN_01ad7260(&local_16a0);
    if ((iVar10 == 0) && (iVar10 = FUN_01afcfa0(&local_16a0), iVar10 == 0)) {
      local_1e10._0_2_ = *(undefined2 *)param_1;
      local_1e10._2_1_ = *(undefined1 *)((long)param_1 + 2);
      local_1e10._3_1_ = *(undefined1 *)((long)param_1 + 3);
      local_1e10._4_4_ = param_1[1];
    }
    else {
      puVar19 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar5 = *puVar19 ^ *puVar19 << 0xb;
      uVar6 = puVar19[3];
      *puVar19 = puVar19[1];
      puVar19[1] = puVar19[2];
      uVar8 = uVar5 ^ uVar6;
      puVar19[2] = uVar6;
      puVar19[3] = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar8;
      FUN_02780fe0(&local_1e10,param_1,uVar8 >> 0x18);
      *(undefined2 *)param_1 = (undefined2)local_1e10;
      *(undefined1 *)((long)param_1 + 2) = local_1e10._2_1_;
      *(undefined1 *)((long)param_1 + 3) = local_1e10._3_1_;
      param_1[1] = local_1e10._4_4_;
    }
    lVar16 = *(long *)puVar4;
    puVar17 = &local_1e08;
    local_1e08._0_3_ = CONCAT12(local_1e10._2_1_,(undefined2)local_1e10);
    local_1e08._0_4_ = CONCAT13(local_1e10._3_1_,(undefined3)local_1e08);
    local_1e08 = (undefined8 *)CONCAT44(local_1e10._4_4_,(undefined4)local_1e08);
    local_1e00 = 0;
    local_1e10 = (undefined **)(puVar1 + 0x10);
    goto LAB_02824a4c;
  }
  puVar19 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar5 = *puVar19 ^ *puVar19 << 0xb;
  uVar6 = puVar19[3];
  *puVar19 = puVar19[1];
  puVar19[1] = puVar19[2];
  uVar8 = uVar5 ^ uVar6;
  uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar8;
  puVar19[2] = uVar6;
  puVar19[3] = uVar5;
  local_2580._0_4_ = (uVar5 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_2580._4_4_ = ((uint)local_2580 ^ (uint)local_2580 >> 0x1e) * 0x6c078965 + 2;
  local_2578._0_4_ = (local_2580._4_4_ ^ local_2580._4_4_ >> 0x1e) * 0x6c078965 + 3;
  local_2578._4_4_ = ((uint)local_2578 ^ (uint)local_2578 >> 0x1e) * 0x6c078965 + 4;
  lVar13 = (*(code *)local_f30[4])(&local_f30);
  lVar16 = 0;
  iVar10 = 0;
  do {
    puVar19 = (uint *)(lVar13 + lVar16);
    lVar16 = lVar16 + 4;
    uVar5 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    iVar10 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + iVar10;
  } while (lVar16 != 0x754);
  if (iVar10 == 0) {
    uVar22 = *(undefined2 *)PTR_DAT_04bb37e0;
    uVar23 = PTR_DAT_04bb37e0[2];
    uVar24 = PTR_DAT_04bb37e0[3];
    uVar25 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_7c0 = *(undefined **)PTR_DAT_04bb37e0;
  }
  else {
    lVar13 = (*(code *)local_f30[4])(&local_f30);
    lVar16 = 0;
    uVar5 = 0;
    do {
      puVar19 = (uint *)(lVar13 + lVar16);
      lVar16 = lVar16 + 4;
      uVar8 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      uVar5 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + uVar5;
    } while (lVar16 != 0x754);
    uVar8 = (uint)local_2580 ^ (uint)local_2580 << 0xb;
    local_2580._0_4_ = local_2580._4_4_;
    local_2580._4_4_ = (uint)local_2578;
    uVar8 = uVar8 >> 8 ^ local_2578._4_4_ >> 0x13 ^ uVar8 ^ local_2578._4_4_;
    local_2578._0_4_ = local_2578._4_4_;
    local_2578._4_4_ = uVar8;
    FUN_00889f80(&local_7c0,&local_f30,(int)((ulong)uVar8 * (ulong)uVar5 >> 0x20) + 1);
    FUN_01a4c66c(&local_2580,&local_7c0);
    uVar22 = (undefined2)local_7c0;
    uVar25 = local_7c0._4_4_;
    uVar23 = local_7c0._2_1_;
    uVar24 = local_7c0._3_1_;
  }
  *(undefined2 *)param_1 = uVar22;
  puVar1 = PTR_DAT_04bc0510;
  lVar16 = *(long *)puVar4;
  *(undefined1 *)((long)param_1 + 2) = uVar23;
  *(undefined1 *)((long)param_1 + 3) = uVar24;
  param_1[1] = uVar25;
  local_1e08._0_3_ = CONCAT12(uVar23,uVar22);
  local_1e08._0_4_ = CONCAT13(uVar24,(undefined3)local_1e08);
  local_1e10 = (undefined **)(puVar1 + 0x10);
  local_1e08 = (undefined8 *)CONCAT44(uVar25,(undefined4)local_1e08);
  local_1e00 = 0;
  uVar5 = FUN_0277d6c4(&local_1e08);
  if (*(long *)puVar4 == 0) {
LAB_028247a0:
    if (DAT_05574040 != 0) {
      lVar16 = FUN_026eec4c(DAT_05574040,*param_2);
      if (lVar16 != 0) {
        lVar13 = lVar16 + 0x194b0;
        if (*(long *)(lVar16 + 0x194b8) == 0) {
          lVar13 = *(long *)(DAT_05574040 + 0x20);
        }
        lVar16 = *(long *)(lVar13 + 0x1100);
        if (lVar16 == 0) {
          uVar12 = 0;
        }
        else {
          if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
            lVar16 = *(long *)(lVar13 + 0x1100);
            uVar12 = uVar12 & 0xffffffff;
            if (lVar16 == 0) goto LAB_028249c0;
          }
          plVar18 = *(long **)(lVar16 + 0x20);
          if (plVar18 != (long *)0x0) {
            local_16a0 = *(undefined ***)(lVar13 + 0x10e0);
            local_1698 = *(undefined8 *)(lVar13 + 0x10e8);
            local_1690 = 2000;
            (**(code **)(*plVar18 + 0x20))(plVar18,&local_16a0);
          }
        }
LAB_028249c0:
        FUN_02780c00(&local_2588,*(long *)(lVar13 + 0x10e8) + *(long *)(lVar13 + 0x10e0),&local_7c0,
                     0);
        *(undefined2 *)param_1 = (undefined2)local_2588;
        *(undefined1 *)((long)param_1 + 2) = local_2588._2_1_;
        *(undefined1 *)((long)param_1 + 3) = local_2588._3_1_;
        param_1[1] = local_2584;
        uVar22 = (undefined2)local_2588;
        uVar25 = local_2584;
        uVar23 = local_2588._2_1_;
        uVar24 = local_2588._3_1_;
        if ((((uVar12 & 1) != 0) && (*(long *)(lVar13 + 0x1100) != 0)) &&
           (puVar17 = *(undefined8 **)(*(long *)(lVar13 + 0x1100) + 0x18),
           puVar17 != (undefined8 *)0x0)) {
          (**(code **)*puVar17)();
        }
      }
    }
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_028247a0;
    lVar16 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(&local_7c0);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar5) ||
       (((puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar19 == (uint *)0x0 || (uVar5 = *puVar19, uVar5 == 0)) ||
        (puVar19 == (uint *)(ulong)uVar5)))) goto LAB_028247a0;
    puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar5);
    if (((*puVar20 == 0) || (uVar5 = puVar20[1], uVar5 == 0)) || ((ulong)(ushort)puVar20[2] == 0))
    goto LAB_028247a0;
    lVar16 = 0xc;
    if (*(char *)((long)puVar20 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
    if (lVar16 == 0) goto LAB_028247a0;
    uVar8 = 0;
    if ((ulong)uVar5 != 0) {
      uVar8 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar5);
    }
    if (*puVar20 <= uVar8) {
      uVar8 = 0xffffffff;
    }
    if (DAT_05326ce8 <= uVar8) goto LAB_028247a0;
    if ((ushort)(*(short *)(DAT_05326cf0 + (long)(int)uVar8 * 2) - 0x5b6U) < 0xfa4b)
    goto LAB_028247a0;
  }
  local_16a0 = (undefined **)(puVar1 + 0x10);
  lVar16 = *(long *)puVar4;
  puVar17 = &local_1698;
  local_1698._0_3_ = CONCAT12(uVar23,uVar22);
  local_1698._0_4_ = CONCAT13(uVar24,(undefined3)local_1698);
  local_1698 = CONCAT44(uVar25,(undefined4)local_1698);
  local_1690 = 0;
LAB_02824a4c:
  uVar5 = FUN_0277d6c4(puVar17);
  if (*(long *)puVar4 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0277d6c4(param_1);
    }
  }
  return;
}

