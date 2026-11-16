
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff838 : 0x028a0894 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0289fa20(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  char local_2d0c [4];
  ulong local_2d08;
  undefined8 local_2d00;
  undefined8 *apuStack_2cf8 [234];
  uint local_25a4;
  uint local_25a0;
  uint local_259c;
  int local_2598;
  undefined8 local_2590;
  undefined8 *apuStack_2588 [234];
  uint local_1e34;
  uint local_1e30;
  uint local_1e2c;
  int local_1e28;
  undefined8 local_1e20;
  undefined8 *local_1e18 [234];
  uint local_16c4;
  uint local_16c0;
  uint local_16bc;
  int local_16b8;
  undefined8 local_16b0;
  undefined8 *local_16a8 [234];
  uint local_f54;
  uint local_f50;
  uint local_f4c;
  int local_f48;
  undefined *local_f40;
  undefined1 auStack_f38 [1876];
  uint local_7e4;
  uint local_7e0;
  uint local_7dc;
  int local_7d8;
  undefined1 local_7cc [4];
  undefined8 local_7c8;
  char *local_7c0;
  undefined8 local_70;
  
  local_7cc[0] = 0;
  FUN_01b02920(local_7cc,(undefined8 *)(param_2 + 0x10),0);
  local_f40 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_f38,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_7e4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 2;
  local_7dc = (local_7e0 ^ local_7e0 >> 0x1e) * 0x6c078965 + 3;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)FUN_01a451fc(&local_f40);
  memset(pvVar6,0,0x754);
  local_1e20 = (undefined **)((ulong)local_1e20 & 0xffffffff00000000);
  local_16b0 = &PTR_FUN_049ff448;
  local_16a8[0] = &local_1e20;
  FUN_008a1ba0(&local_f40,&local_16b0);
  local_16b0 = &PTR_FUN_049ff448;
  local_1e20._0_4_ = 0x77;
  local_16a8[0] = &local_1e20;
  FUN_008a1ba0(&local_f40,&local_16b0);
  local_16b0._0_4_ = 0x49ff448;
  local_16b0._4_4_ = 0;
  local_1e20._0_4_ = 0x29;
  local_16a8[0] = &local_1e20;
  FUN_008a1ba0(&local_f40,&local_16b0);
  uVar8 = (ulong)local_70 >> 8;
  local_1e20 = (undefined **)CONCAT44(local_1e20._4_4_,6);
  local_70 = CONCAT71((uint7)uVar8 & 0xffffffff000000,0x41);
  local_16b0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_16a8,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_f54 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
  local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)((long)local_16b0 + 0x18))(&local_16b0);
  memset(pvVar6,0,0x754);
  local_2590._0_4_ = 7;
  local_1e20 = &PTR_FUN_049ff538;
  local_1e18[0] = &local_2590;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  local_1e20 = &PTR_FUN_049ff538;
  local_2590 = (undefined **)CONCAT44(local_2590._4_4_,5);
  local_1e18[0] = &local_2590;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  pvVar6 = (void *)(**(code **)((long)local_16b0 + 0x18))(&local_16b0);
  lVar7 = (**(code **)(local_f40 + 0x20))(&local_f40);
  for (lVar9 = 0;
      *(uint *)((long)local_1e18 + lVar9 + -8) =
           *(uint *)(lVar7 + lVar9) & *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
      lVar9 = lVar9 + 8) {
    *(uint *)((long)local_1e18 + lVar9 + -4) =
         *(uint *)(lVar7 + lVar9 + 4) & *(uint *)((long)pvVar6 + lVar9 + 4);
  }
  memcpy(pvVar6,&local_1e20,0x754);
  local_1e18[0] = &local_2d00;
  local_2d00 = (undefined **)CONCAT44(local_2d00._4_4_,1);
  local_1e20 = &PTR_FUN_049ff4e8;
  uVar4 = 0;
  *(uint *)((long)pvVar6 + 0x750) = *(uint *)((long)pvVar6 + 0x750) & 0xffffff;
  puVar3 = PTR_DAT_04bb43c0;
  do {
    (**(code **)((long)local_16b0 + 0x10))(&local_2590,&local_16b0,uVar4);
    lVar9 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2590);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_1e20)(&local_1e20,&local_2590), (uVar8 & 1) != 0))
        goto LAB_0289fdf8;
      }
      lVar9 = (**(code **)((long)local_16b0 + 0x18))(&local_16b0);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_0289fdf8:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  uVar4 = 0;
  local_1e18[0] = &local_70;
  local_1e20 = &PTR_FUN_049ff420;
  do {
    (**(code **)((long)local_16b0 + 0x10))(&local_2590,&local_16b0,uVar4);
    lVar9 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2590);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_1e20)(&local_1e20,&local_2590), (uVar8 & 1) != 0))
        goto LAB_0289fef4;
      }
      lVar9 = (**(code **)((long)local_16b0 + 0x18))(&local_16b0);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_0289fef4:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  local_1e20 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_1e18,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_16c4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_16c0 = (local_16c4 ^ local_16c4 >> 0x1e) * 0x6c078965 + 2;
  local_16bc = (local_16c0 ^ local_16c0 >> 0x1e) * 0x6c078965 + 3;
  local_16b8 = (local_16bc ^ local_16bc >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)((long)local_1e20 + 0x18))(&local_1e20);
  memset(pvVar6,0,0x754);
  local_2d00._0_4_ = 7;
  local_2590 = &PTR_FUN_049ff538;
  apuStack_2588[0] = &local_2d00;
  FUN_008a1ba0(&local_1e20,&local_2590);
  local_2d00 = (undefined **)CONCAT44(local_2d00._4_4_,5);
  local_2590 = &PTR_FUN_049ff538;
  apuStack_2588[0] = &local_2d00;
  FUN_008a1ba0(&local_1e20,&local_2590);
  pvVar6 = (void *)(**(code **)((long)local_1e20 + 0x18))(&local_1e20);
  lVar7 = (**(code **)(local_f40 + 0x20))(&local_f40);
  for (lVar9 = 0;
      *(uint *)((long)apuStack_2588 + lVar9 + -8) =
           *(uint *)(lVar7 + lVar9) & *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
      lVar9 = lVar9 + 8) {
    *(uint *)((long)apuStack_2588 + lVar9 + -4) =
         *(uint *)(lVar7 + lVar9 + 4) & *(uint *)((long)pvVar6 + lVar9 + 4);
  }
  memcpy(pvVar6,&local_2590,0x754);
  uVar4 = 0;
  local_7c8 = (undefined **)CONCAT44((int)((ulong)local_7c8 >> 0x20),2);
  *(uint *)((long)pvVar6 + 0x750) = *(uint *)((long)pvVar6 + 0x750) & 0xffffff;
  apuStack_2588[0] = &local_7c8;
  local_2590 = &PTR_FUN_049ff4e8;
  do {
    (**(code **)((long)local_1e20 + 0x10))(&local_2d00,&local_1e20,uVar4);
    lVar9 = (**(code **)((long)local_1e20 + 0x20))(&local_1e20);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2d00);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_2590)(&local_2590,&local_2d00), (uVar8 & 1) != 0))
        goto LAB_028a0140;
      }
      lVar9 = (**(code **)((long)local_1e20 + 0x18))(&local_1e20);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a0140:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  uVar4 = 0;
  apuStack_2588[0] = &local_70;
  local_2590 = &PTR_FUN_049ff420;
  do {
    (**(code **)((long)local_1e20 + 0x10))(&local_2d00,&local_1e20,uVar4);
    lVar9 = (**(code **)((long)local_1e20 + 0x20))(&local_1e20);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2d00);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_2590)(&local_2590,&local_2d00), (uVar8 & 1) != 0))
        goto LAB_028a0224;
      }
      lVar9 = (**(code **)((long)local_1e20 + 0x18))(&local_1e20);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a0224:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  local_2590 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(apuStack_2588,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_1e34 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_1e30 = (local_1e34 ^ local_1e34 >> 0x1e) * 0x6c078965 + 2;
  local_1e2c = (local_1e30 ^ local_1e30 >> 0x1e) * 0x6c078965 + 3;
  local_1e28 = (local_1e2c ^ local_1e2c >> 0x1e) * 0x6c078965 + 4;
  memcpy(apuStack_2588,local_16a8,0x754);
  pvVar6 = (void *)(**(code **)((long)local_2590 + 0x18))(&local_2590);
  lVar7 = (**(code **)((long)local_1e20 + 0x20))(&local_1e20);
  for (lVar9 = 0;
      *(uint *)((long)apuStack_2cf8 + lVar9 + -8) =
           *(uint *)(lVar7 + lVar9) | *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
      lVar9 = lVar9 + 8) {
    *(uint *)((long)apuStack_2cf8 + lVar9 + -4) =
         *(uint *)(lVar7 + lVar9 + 4) | *(uint *)((long)pvVar6 + lVar9 + 4);
  }
  memcpy(pvVar6,&local_2d00,0x754);
  uVar4 = 0;
  *(uint *)((long)pvVar6 + 0x750) = *(uint *)((long)pvVar6 + 0x750) & 0xffffff;
  apuStack_2cf8[0] = (undefined8 *)local_7cc;
  local_2d00 = &PTR_FUN_049ff6a0;
  do {
    (**(code **)((long)local_2590 + 0x10))(&local_7c8,&local_2590,uVar4);
    lVar9 = (**(code **)((long)local_2590 + 0x20))(&local_2590);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_7c8);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_2d00)(&local_2d00,&local_7c8), (uVar8 & 1) != 0))
        goto LAB_028a0410;
      }
      lVar9 = (**(code **)((long)local_2590 + 0x18))(&local_2590);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a0410:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  FUN_0289f0d0(param_1,&local_2590,2,0xffffffff);
  local_16b0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_16a8,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_f54 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
  local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)((long)local_16b0 + 0x18))(&local_16b0);
  memset(pvVar6,0,0x754);
  local_2590 = (undefined **)((ulong)local_2590 & 0xffffffff00000000);
  local_1e20 = &PTR_FUN_049ff538;
  local_1e18[0] = &local_2590;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  FUN_0289ed30(&local_16b0);
  local_1e20 = &PTR_FUN_049ff4e8;
  uVar4 = 0;
  local_2d00 = (undefined **)CONCAT44(local_2d00._4_4_,1);
  local_1e18[0] = &local_2d00;
  do {
    (**(code **)((long)local_16b0 + 0x10))(&local_2590,&local_16b0,uVar4);
    lVar9 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2590);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_1e20)(&local_1e20,&local_2590), (uVar8 & 1) != 0))
        goto LAB_028a05e8;
      }
      lVar9 = (**(code **)((long)local_16b0 + 0x18))(&local_16b0);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a05e8:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  local_1e20 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_1e18,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_16c4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_16c0 = (local_16c4 ^ local_16c4 >> 0x1e) * 0x6c078965 + 2;
  local_16bc = (local_16c0 ^ local_16c0 >> 0x1e) * 0x6c078965 + 3;
  local_16b8 = (local_16bc ^ local_16bc >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)((long)local_1e20 + 0x18))(&local_1e20);
  memset(pvVar6,0,0x754);
  local_2d00._0_4_ = 7;
  local_2590 = &PTR_FUN_049ff538;
  apuStack_2588[0] = &local_2d00;
  FUN_008a1ba0(&local_1e20,&local_2590);
  local_2d00 = (undefined **)CONCAT44(local_2d00._4_4_,5);
  local_2590 = &PTR_FUN_049ff538;
  apuStack_2588[0] = &local_2d00;
  FUN_008a1ba0(&local_1e20,&local_2590);
  uVar4 = 0;
  apuStack_2588[0] = &local_7c8;
  local_7c8 = (undefined **)CONCAT44(local_7c8._4_4_,1);
  local_2590 = &PTR_FUN_049ff4e8;
  do {
    (**(code **)((long)local_1e20 + 0x10))(&local_2d00,&local_1e20,uVar4);
    lVar9 = (**(code **)((long)local_1e20 + 0x20))(&local_1e20);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2d00);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_2590)(&local_2590,&local_2d00), (uVar8 & 1) != 0))
        goto LAB_028a07a0;
      }
      lVar9 = (**(code **)((long)local_1e20 + 0x18))(&local_1e20);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a07a0:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  uVar8 = (ulong)local_7c8 >> 8;
  local_2d00 = (undefined **)CONCAT44(local_2d00._4_4_,1);
  local_7c8 = (undefined **)CONCAT71((uint7)uVar8 & 0xffffffff000000,2);
  uVar4 = 0;
  apuStack_2588[0] = &local_7c8;
  local_2590 = &PTR_FUN_049ff420;
  do {
    (**(code **)((long)local_1e20 + 0x10))(&local_2d00,&local_1e20,uVar4);
    lVar9 = (**(code **)((long)local_1e20 + 0x20))(&local_1e20);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2d00);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_2590)(&local_2590,&local_2d00), (uVar8 & 1) != 0))
        goto LAB_028a08e4;
      }
      lVar9 = (**(code **)((long)local_1e20 + 0x18))(&local_1e20);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a08e4:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  puVar1 = PTR_DAT_04bbfe60 + 0x10;
  local_2590 = (undefined **)puVar1;
  memset(apuStack_2588,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_1e34 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_1e30 = (local_1e34 ^ local_1e34 >> 0x1e) * 0x6c078965 + 2;
  local_1e2c = (local_1e30 ^ local_1e30 >> 0x1e) * 0x6c078965 + 3;
  local_1e28 = (local_1e2c ^ local_1e2c >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)((long)local_2590 + 0x18))(&local_2590);
  memset(pvVar6,0,0x754);
  local_7c8 = (undefined **)CONCAT44(local_7c8._4_4_,5);
  local_2d00 = &PTR_FUN_049ff4e8;
  apuStack_2cf8[0] = &local_7c8;
  FUN_008a1ba0(&local_2590,&local_2d00);
  local_2d00 = (undefined **)puVar1;
  uVar4 = nn::os::GetSystemTick();
  local_25a4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_25a0 = (local_25a4 ^ local_25a4 >> 0x1e) * 0x6c078965 + 2;
  local_259c = (local_25a0 ^ local_25a0 >> 0x1e) * 0x6c078965 + 3;
  local_2598 = (local_259c ^ local_259c >> 0x1e) * 0x6c078965 + 4;
  memcpy(apuStack_2cf8,local_16a8,0x754);
  pvVar6 = (void *)(**(code **)((long)local_2d00 + 0x18))(&local_2d00);
  lVar7 = (**(code **)((long)local_1e20 + 0x20))(&local_1e20);
  for (lVar9 = 0;
      *(uint *)((long)&local_7c8 + lVar9) =
           *(uint *)(lVar7 + lVar9) | *(uint *)((long)pvVar6 + lVar9), lVar9 != 0x750;
      lVar9 = lVar9 + 8) {
    *(uint *)(local_7cc + lVar9 + 8) =
         *(uint *)(lVar7 + lVar9 + 4) | *(uint *)((long)pvVar6 + lVar9 + 4);
  }
  memcpy(pvVar6,&local_7c8,0x754);
  *(uint *)((long)pvVar6 + 0x750) = *(uint *)((long)pvVar6 + 0x750) & 0xffffff;
  pvVar6 = (void *)(**(code **)((long)local_2d00 + 0x18))(&local_2d00);
  lVar7 = (**(code **)((long)local_2590 + 0x20))(&local_2590);
  for (lVar9 = 0;
      *(uint *)(local_7cc + lVar9 + 4) = *(uint *)(lVar7 + lVar9) | *(uint *)((long)pvVar6 + lVar9),
      lVar9 != 0x750; lVar9 = lVar9 + 8) {
    *(uint *)(local_7cc + lVar9 + 8) =
         *(uint *)(lVar7 + lVar9 + 4) | *(uint *)((long)pvVar6 + lVar9 + 4);
  }
  memcpy(pvVar6,&local_7c8,0x754);
  *(uint *)((long)pvVar6 + 0x750) = *(uint *)((long)pvVar6 + 0x750) & 0xffffff;
  pvVar6 = (void *)(**(code **)((long)local_2d00 + 0x18))(&local_2d00);
  lVar7 = (**(code **)(local_f40 + 0x20))(&local_f40);
  for (lVar9 = 0;
      *(uint *)(local_7cc + lVar9 + 4) = *(uint *)(lVar7 + lVar9) & *(uint *)((long)pvVar6 + lVar9),
      lVar9 != 0x750; lVar9 = lVar9 + 8) {
    *(uint *)(local_7cc + lVar9 + 8) =
         *(uint *)(lVar7 + lVar9 + 4) & *(uint *)((long)pvVar6 + lVar9 + 4);
  }
  memcpy(pvVar6,&local_7c8,0x754);
  uVar4 = 0;
  local_7c0 = local_7cc;
  local_7c8 = &PTR_FUN_049ff6a0;
  *(uint *)((long)pvVar6 + 0x750) = *(uint *)((long)pvVar6 + 0x750) & 0xffffff;
  do {
    (**(code **)((long)local_2d00 + 0x10))(&local_70,&local_2d00,uVar4);
    lVar9 = (**(code **)((long)local_2d00 + 0x20))(&local_2d00);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_7c8)(&local_7c8,&local_70), (uVar8 & 1) != 0))
        goto LAB_028a0c80;
      }
      lVar9 = (**(code **)((long)local_2d00 + 0x18))(&local_2d00);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a0c80:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  local_7c8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_7c0 = "ShopSocksFlag";
  uVar8 = FUN_0273f0a0(&local_7c8);
  if ((uVar8 & 1) != 0) {
    local_70 = *(undefined8 *)(param_2 + 0x10);
    FUN_00a81090(&local_70);
    local_2d08 = local_70;
    lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2d08);
    local_7c8 = (undefined **)(lVar9 + 0xa8c00);
    local_2d08 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7c8);
    if ((local_70._2_1_ == '\f') && ((local_2d08 & 0xff0000) == 0xc0000)) {
      local_2d0c[0] = '\x06';
      local_2d0c[1] = '\0';
      local_2d0c[2] = '\0';
      local_2d0c[3] = '\0';
      local_7c8 = &PTR_FUN_049ff4e8;
      local_7c0 = local_2d0c;
      FUN_008a1ba0(&local_2d00,&local_7c8);
    }
  }
  FUN_0289f0d0(param_1,&local_2d00,2,1);
  FUN_0289e220(param_1,param_2,2);
  local_16b0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_16a8,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_f54 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
  local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)((long)local_16b0 + 0x18))(&local_16b0);
  memset(pvVar6,0,0x754);
  FUN_01a44940(&local_16b0,0,0xffffffffffffffff);
  uVar4 = 0;
  local_2d00 = (undefined **)CONCAT44(local_2d00._4_4_,4);
  local_1e20 = &PTR_FUN_049ff448;
  local_1e18[0] = &local_2d00;
  do {
    (**(code **)((long)local_16b0 + 0x10))(&local_2590,&local_16b0,uVar4);
    lVar9 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2590);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_1e20)(&local_1e20,&local_2590), (uVar8 & 1) != 0))
        goto LAB_028a0f14;
      }
      lVar9 = (**(code **)((long)local_16b0 + 0x18))(&local_16b0);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a0f14:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  uVar4 = 0;
  local_1e20 = &PTR_FUN_049ff6a0;
  local_1e18[0] = (undefined8 *)local_7cc;
  do {
    (**(code **)((long)local_16b0 + 0x10))(&local_2590,&local_16b0,uVar4);
    lVar9 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2590);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_1e20)(&local_1e20,&local_2590), (uVar8 & 1) != 0))
        goto LAB_028a1004;
      }
      lVar9 = (**(code **)((long)local_16b0 + 0x18))(&local_16b0);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a1004:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  FUN_0289e6c0(param_1,&local_16b0,4,0);
  local_16b0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_16a8,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_f54 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
  local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)(**(code **)((long)local_16b0 + 0x18))(&local_16b0);
  memset(pvVar6,0,0x754);
  FUN_01a44940(&local_16b0,0,0xffffffffffffffff);
  uVar4 = 0;
  local_2d00 = (undefined **)CONCAT44(local_2d00._4_4_,5);
  local_1e20 = &PTR_FUN_049ff448;
  local_1e18[0] = &local_2d00;
  do {
    (**(code **)((long)local_16b0 + 0x10))(&local_2590,&local_16b0,uVar4);
    lVar9 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2590);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_1e20)(&local_1e20,&local_2590), (uVar8 & 1) != 0))
        goto LAB_028a11c4;
      }
      lVar9 = (**(code **)((long)local_16b0 + 0x18))(&local_16b0);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a11c4:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  uVar4 = 0;
  local_1e20 = &PTR_FUN_049ff6a0;
  local_1e18[0] = (undefined8 *)local_7cc;
  do {
    (**(code **)((long)local_16b0 + 0x10))(&local_2590,&local_16b0,uVar4);
    lVar9 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2590);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_1e20)(&local_1e20,&local_2590), (uVar8 & 1) != 0))
        goto LAB_028a12b4;
      }
      lVar9 = (**(code **)((long)local_16b0 + 0x18))(&local_16b0);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a12b4:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  FUN_0289e6c0(param_1,&local_16b0,4,0);
  local_16b0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_16a8,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_f54 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
  local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)FUN_01a451fc(&local_16b0);
  memset(pvVar6,0,0x754);
  local_2590 = (undefined **)CONCAT44(local_2590._4_4_,0xf);
  local_1e20 = &PTR_FUN_049ff4e8;
  local_1e18[0] = &local_2590;
  FUN_008a1ba0(&local_16b0,&local_1e20);
  local_1e20 = &PTR_FUN_049ff448;
  uVar4 = 0;
  local_2d00 = (undefined **)CONCAT44(local_2d00._4_4_,0x14);
  local_1e18[0] = &local_2d00;
  do {
    (**(code **)((long)local_16b0 + 0x10))(&local_2590,&local_16b0,uVar4);
    lVar9 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2590);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_1e20)(&local_1e20,&local_2590), (uVar8 & 1) != 0))
        goto LAB_028a1484;
      }
      lVar9 = (**(code **)((long)local_16b0 + 0x18))(&local_16b0);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a1484:
    uVar4 = uVar4 + 1;
  } while (uVar4 != 15000);
  uVar4 = 0;
  local_1e20 = &PTR_FUN_049ff6a0;
  local_1e18[0] = (undefined8 *)local_7cc;
  do {
    (**(code **)((long)local_16b0 + 0x10))(&local_2590,&local_16b0,uVar4);
    lVar9 = (**(code **)((long)local_16b0 + 0x20))(&local_16b0);
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if ((*(uint *)(lVar9 + (ulong)(uVar4 >> 5) * 4) & uVar2) != 0) {
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_2590);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_1e20)(&local_1e20,&local_2590), (uVar8 & 1) != 0))
        goto LAB_028a1574;
      }
      lVar9 = (**(code **)((long)local_16b0 + 0x18))(&local_16b0);
      lVar7 = (ulong)(uVar4 >> 5) * 4;
      *(uint *)(lVar9 + lVar7) = *(uint *)(lVar9 + lVar7) & (uVar2 ^ 0xffffffff);
    }
LAB_028a1574:
    uVar4 = uVar4 + 1;
    if (uVar4 == 15000) {
      FUN_0289e6c0(param_1,&local_16b0,1,0);
      local_16b0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(local_16a8,0,0x754);
      uVar4 = nn::os::GetSystemTick();
      local_f54 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
      local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
      local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
      local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
      pvVar6 = (void *)FUN_01a451fc(&local_16b0);
      memset(pvVar6,0,0x754);
      local_2590 = (undefined **)CONCAT44(local_2590._4_4_,0x11);
      local_1e20 = &PTR_FUN_049ff4e8;
      local_1e18[0] = &local_2590;
      FUN_008a1ba0(&local_16b0,&local_1e20);
      FUN_0289e6c0(param_1,&local_16b0,1,0);
      return;
    }
  } while( true );
}

