
void FUN_00ba91e0(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  void *__s;
  uint *puVar13;
  long *plVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined8 local_848;
  long local_840;
  undefined1 local_838;
  byte local_837;
  undefined2 local_830;
  undefined1 local_82e;
  undefined1 local_82d;
  undefined4 local_82c;
  undefined2 local_828;
  undefined1 local_826;
  undefined1 local_825;
  undefined4 local_824;
  char local_820 [4];
  uint local_81c;
  uint uStack_818;
  uint local_814;
  int iStack_810;
  byte local_80c [4];
  undefined *local_808;
  undefined1 auStack_800 [1876];
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  undefined4 local_98;
  byte local_94 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  
  local_90 = 0xfffe;
  uStack_8c = 0;
  FUN_0277d4ac(&local_90);
  lVar18 = *(long *)(param_2 + 8);
  if (lVar18 == 0) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = *(long **)(lVar18 + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if (plVar14 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
    if ((uVar9 & 1) == 0) {
      plVar14 = (long *)0x0;
    }
    if (((lVar18 == 0) || ((uVar9 & 1) == 0)) || ((int)plVar14[0xa0] != 0)) goto LAB_00baaa24;
    lVar10 = FUN_0265c2a0((int)plVar14[0xa1]);
    local_94[0] = *(byte *)(lVar18 + 0x2a8);
    bVar4 = true;
    if (7 < local_94[0]) {
      local_94[0] = 0xff;
    }
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_94,1);
    bVar3 = true;
    if ((lVar10 != 0) && (lVar11 != 0)) {
      if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar12 == (undefined8 *)0x0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)*puVar12)();
        uVar9 = uVar9 & 0xffffffff;
      }
      bVar5 = FUN_020fd7d8(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
      }
      bVar3 = bVar5 < 4;
      if (*(long **)(lVar11 + 0x17bb0) == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar11 + 0x17bb0);
        uVar9 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar9 = (**(code **)*puVar12)();
        }
      }
      bVar4 = *(int *)(*(long *)(lVar11 + 0x17b98) + *(long *)(lVar11 + 0x17b90) + 0x34) != 1;
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar11 + 0x17bb0) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x17bb0) + 8), puVar12 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar12)();
      }
    }
    local_98 = *(undefined4 *)(param_2 + 0x110);
    local_808 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_800,0,0x754);
    uVar6 = nn::os::GetSystemTick();
    local_ac = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
    local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)(**(code **)(local_808 + 0x18))(&local_808);
    memset(__s,0,0x754);
    local_80c[0] = 0;
    FUN_01b02920(local_80c,0,0);
    local_80c[0] = local_80c[0] & 0xfe;
    switch(local_98) {
    case 0:
      local_848 = (undefined *)((ulong)local_848 & 0xffffffff00000000);
      local_80 = (uint *)&local_848;
      local_88 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_808,&local_88);
      puVar2 = PTR_DAT_04bb43c0;
      local_81c = 8;
      local_80 = &local_81c;
      local_88 = &PTR_FUN_049ff4e8;
      uVar6 = 0;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00ba94f0;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00ba94f0:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_80 = (uint *)local_80c;
      local_88 = &PTR_FUN_049ff6a0;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00baa094;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00baa094:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      local_848._0_4_ = 2;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848._0_4_ = 5;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848 = (undefined *)CONCAT44(local_848._4_4_,7);
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      uVar6 = 0;
      local_88 = &PTR_FUN_049ff740;
      local_80 = (uint *)CONCAT44(local_80._4_4_,1999);
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00baa3a0;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00baa3a0:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_80 = &local_81c;
      local_81c = 0;
      local_88 = &PTR_FUN_049ff448;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00baa700;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00baa700:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_88 = &PTR_FUN_0493bc18;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00baa8c0;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00baa8c0:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      break;
    case 1:
      local_848 = (undefined *)((ulong)local_848._4_4_ << 0x20);
      local_80 = (uint *)&local_848;
      local_88 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_808,&local_88);
      puVar2 = PTR_DAT_04bb43c0;
      local_81c = 8;
      local_80 = &local_81c;
      local_88 = &PTR_FUN_049ff4e8;
      uVar6 = 0;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00ba9e94;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00ba9e94:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_80 = (uint *)local_80c;
      local_88 = &PTR_FUN_049ff6a0;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00baa180;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00baa180:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      local_848._0_4_ = 2;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848._0_4_ = 5;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848 = (undefined *)CONCAT44(local_848._4_4_,7);
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      uVar6 = 0;
      local_88 = &PTR_FUN_0493bc40;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00baa4d4;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00baa4d4:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      break;
    case 2:
      local_848 = (undefined *)((ulong)local_848._4_4_ << 0x20);
      local_80 = (uint *)&local_848;
      local_88 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_808,&local_88);
      puVar2 = PTR_DAT_04bb43c0;
      local_81c = 8;
      local_80 = &local_81c;
      local_88 = &PTR_FUN_049ff4e8;
      uVar6 = 0;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00ba9610;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00ba9610:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_80 = (uint *)local_80c;
      local_88 = &PTR_FUN_049ff6a0;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00ba9820;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00ba9820:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      local_848._0_4_ = 2;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848._0_4_ = 5;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848 = (undefined *)CONCAT44(local_848._4_4_,7);
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      uVar6 = 0;
      local_88 = &PTR_FUN_0493bc68;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00ba9a40;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00ba9a40:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      break;
    case 3:
      local_848 = (undefined *)((ulong)local_848._4_4_ << 0x20);
      local_80 = (uint *)&local_848;
      local_88 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_808,&local_88);
      puVar2 = PTR_DAT_04bb43c0;
      local_81c = 8;
      local_80 = &local_81c;
      local_88 = &PTR_FUN_049ff4e8;
      uVar6 = 0;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00ba9fb0;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00ba9fb0:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_80 = (uint *)local_80c;
      local_88 = &PTR_FUN_049ff6a0;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00baa264;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00baa264:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      local_848._0_4_ = 2;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848._0_4_ = 5;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848 = (undefined *)CONCAT44(local_848._4_4_,7);
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      uVar6 = 0;
      local_88 = &PTR_FUN_049ff740;
      local_80 = (uint *)CONCAT44(local_80._4_4_,1999);
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00baa610;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00baa610:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_88 = &PTR_FUN_0493bc90;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar18 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar18 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00baa7e0;
          }
          lVar18 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar10 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar18 + lVar10) = *(uint *)(lVar18 + lVar10) & (uVar1 ^ 0xffffffff);
        }
LAB_00baa7e0:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      break;
    case 4:
      local_80 = (uint *)&local_848;
      local_848 = (undefined *)((ulong)local_848._4_4_ << 0x20);
      local_88 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_808,&local_88);
      puVar2 = PTR_DAT_04bb43c0;
      local_81c = 8;
      local_80 = &local_81c;
      local_88 = &PTR_FUN_049ff4e8;
      uVar6 = 0;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar10 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar10 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar10 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00ba9734;
          }
          lVar10 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar11 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) & (uVar1 ^ 0xffffffff);
        }
LAB_00ba9734:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_80 = (uint *)local_80c;
      local_88 = &PTR_FUN_049ff6a0;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar10 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar10 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar10 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00ba9904;
          }
          lVar10 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar11 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) & (uVar1 ^ 0xffffffff);
        }
LAB_00ba9904:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      local_848._0_4_ = 2;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848._0_4_ = 5;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848._0_4_ = 7;
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      local_848 = (undefined *)CONCAT44(local_848._4_4_,3);
      local_88 = &PTR_FUN_049ff4e8;
      local_80 = (uint *)&local_848;
      FUN_008a1ba0(&local_808,&local_88);
      uVar6 = 0;
      local_88 = &PTR_FUN_049ff718;
      local_80 = (uint *)CONCAT44(local_80._4_4_,2000);
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar10 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar10 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar10 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00ba9b94;
          }
          lVar10 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar11 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) & (uVar1 ^ 0xffffffff);
        }
LAB_00ba9b94:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      uVar6 = 0;
      local_88 = &PTR_FUN_0493bcb8;
      do {
        (**(code **)(local_808 + 0x10))(&local_848,&local_808,uVar6);
        lVar10 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar1 = 1 << (ulong)(uVar6 & 0x1f);
        if ((*(uint *)(lVar10 + (ulong)(uVar6 >> 5) * 4) & uVar1) != 0) {
          lVar10 = *(long *)puVar2;
          uVar7 = FUN_0277d6c4(&local_848);
          if (*(long *)puVar2 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if (((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
               (uVar9 = (*(code *)*local_88)(&local_88,&local_848), (uVar9 & 1) != 0))
            goto LAB_00ba9c74;
          }
          lVar10 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar11 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar10 + lVar11) = *(uint *)(lVar10 + lVar11) & (uVar1 ^ 0xffffffff);
        }
LAB_00ba9c74:
        uVar6 = uVar6 + 1;
      } while (uVar6 != 15000);
      FUN_00b92ba0(&local_808,bVar3,bVar4);
      puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar6 = *puVar13 ^ *puVar13 << 0xb;
      uVar7 = puVar13[3];
      *puVar13 = puVar13[1];
      puVar13[1] = puVar13[2];
      local_820[0] = '\0';
      uVar1 = uVar6 ^ uVar7;
      uVar6 = uVar6 >> 8 ^ uVar7 >> 0x13 ^ uVar1;
      puVar13[2] = uVar7;
      puVar13[3] = uVar6;
      local_81c = (uVar6 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
      uStack_818 = (local_81c ^ local_81c >> 0x1e) * 0x6c078965 + 2;
      local_814 = (uStack_818 ^ uStack_818 >> 0x1e) * 0x6c078965 + 3;
      iStack_810 = (local_814 ^ local_814 >> 0x1e) * 0x6c078965 + 4;
      lVar18 = FUN_0264a320(lVar18 + 0x2a8);
      local_828 = *(undefined2 *)PTR_DAT_04bb37e0;
      local_826 = PTR_DAT_04bb37e0[2];
      local_825 = PTR_DAT_04bb37e0[3];
      local_824 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      uVar15 = local_828;
      uVar16 = local_826;
      uVar17 = local_825;
      uVar19 = local_824;
      if (lVar18 != 0) {
        local_838 = 1;
        local_840 = lVar18;
        if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
          local_837 = 0;
        }
        else {
          puVar12 = (undefined8 *)**(long **)(lVar18 + 0x28);
          local_837 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            local_837 = (**(code **)*puVar12)();
          }
        }
        local_837 = local_837 & 1;
        local_848 = PTR_DAT_04bb64c8 + 0x10;
        FUN_01a4d290(&local_830,&local_81c,&local_808,
                     *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8),0,local_820,PTR_FUN_04bb67e0,0
                    );
        local_828 = local_830;
        local_826 = local_82e;
        local_825 = local_82d;
        local_824 = local_82c;
        FUN_02640184(&local_848);
        uVar15 = local_830;
        uVar16 = local_82e;
        uVar17 = local_82d;
        uVar19 = local_82c;
        if (local_820[0] != '\0') goto LAB_00baaae4;
      }
      uVar9 = FUN_0277d9a8(&local_828);
      if ((uVar9 & 1) != 0) {
        *(undefined2 *)param_1 = uVar15;
        *(undefined1 *)((long)param_1 + 2) = uVar16;
        *(undefined1 *)((long)param_1 + 3) = uVar17;
        param_1[1] = uVar19;
        return;
      }
LAB_00baaae4:
      *(undefined4 *)(param_2 + 0x110) = 3;
      FUN_00ba91e0(param_1,param_2);
      return;
    default:
      local_88 = (undefined **)0x508;
      FUN_0277d4ac(&local_88);
      FUN_01a45058(&local_808,&local_88);
    }
    FUN_00b92ba0(&local_808,bVar3,bVar4);
    FUN_00ba8400(&local_808);
    puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar7 = puVar13[3];
    uVar6 = *puVar13 ^ *puVar13 << 0xb;
    *puVar13 = puVar13[1];
    puVar13[1] = puVar13[2];
    uVar1 = uVar6 ^ uVar7;
    uVar6 = uVar6 >> 8 ^ uVar7 >> 0x13 ^ uVar1;
    puVar13[2] = uVar7;
    puVar13[3] = uVar6;
    uVar6 = (uVar6 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
    uVar1 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    local_88 = (undefined **)CONCAT44(uVar1,uVar6);
    uVar6 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    local_80 = (uint *)CONCAT44((uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4,uVar6);
    FUN_01a4ca70(&local_81c,&local_88,&local_808,0,PTR_FUN_04bb67e0,0);
    FUN_00ba8f40(&local_848,&local_81c,1);
    local_90 = SUB84(local_848,0);
    uStack_8c = local_848._4_4_;
  }
LAB_00baaa24:
  *param_1 = local_90;
  param_1[1] = uStack_8c;
  return;
}

