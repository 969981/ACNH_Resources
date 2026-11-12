
void FUN_00baab34(uint *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_828 [16];
  undefined4 local_818;
  uint local_814;
  undefined1 auStack_800 [16];
  uint local_7f0 [3];
  uint local_7e4;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined1 local_7d0;
  byte local_7cf;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  byte local_5f;
  undefined4 uStack_34;
  
  param_1[0] = 0xfffe;
  param_1[1] = 0;
  FUN_0277d4ac(param_1);
  lVar9 = *(long *)(param_2 + 8);
  if (lVar9 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(lVar9 + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
  uVar1 = DAT_05405fa4;
  if ((uVar4 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  if (lVar9 == 0) {
    return;
  }
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((int)plVar8[0xa0] != 0) {
    return;
  }
  uVar2 = (undefined4)plVar8[0xa1];
  uStack_34 = uVar2;
  switch(*(undefined4 *)(param_2 + 0x110)) {
  case 0:
    *param_1 = DAT_05405f9c._4_4_;
    param_1[1] = uVar1;
    lVar9 = FUN_0265c2a0(uVar2);
    DAT_05453f5c = 0xffffffff;
    if (lVar9 == 0) {
      DAT_05453f5c = 0xffffffff;
      return;
    }
    local_7d0 = 1;
    local_7d8 = lVar9;
    if (*(long **)(lVar9 + 0x28) == (long *)0x0) {
      local_7cf = 0;
    }
    else {
      puVar5 = (undefined8 *)**(long **)(lVar9 + 0x28);
      local_7cf = 0;
      if (puVar5 != (undefined8 *)0x0) {
        local_7cf = (**(code **)*puVar5)();
      }
    }
    local_7cf = local_7cf & 1;
    local_7e0 = PTR_DAT_04bb67a0 + 0x10;
    uVar2 = FUN_026a6580(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),param_1,0);
    FUN_02640184(&local_7e0);
    DAT_05453f5c = uVar2;
    return;
  case 1:
    lVar9 = FUN_0265b1c0();
    if (lVar9 == 0) {
      return;
    }
    local_7d0 = 1;
    local_7d8 = lVar9;
    if (*(long **)(lVar9 + 0x28) == (long *)0x0) {
      local_7cf = 0;
    }
    else {
      puVar5 = (undefined8 *)**(long **)(lVar9 + 0x28);
      local_7cf = 0;
      if (puVar5 != (undefined8 *)0x0) {
        local_7cf = (**(code **)*puVar5)();
      }
    }
    local_7cf = local_7cf & 1;
    local_7e0 = PTR_DAT_04bb6a28 + 0x10;
    FUN_02845810(&local_70,*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),1);
    break;
  case 2:
    FUN_01a44770(&local_7e0);
    local_70 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_68 = "Friendship";
    uVar1 = FUN_02746c30(uVar2,lVar9 + 0x2a8,&local_70);
    if (uVar1 < 0x1e) {
      uVar7 = 1;
    }
    else if (uVar1 < 0x3c) {
      uVar7 = 2;
    }
    else if (uVar1 < 100) {
      uVar7 = 3;
    }
    else if (uVar1 < 0x96) {
      uVar7 = 4;
    }
    else {
      uVar7 = 5;
      if (199 < uVar1) {
        uVar7 = 6;
      }
    }
    local_70._0_4_ = uVar7;
    if (4 < uVar7) {
      FUN_038e7ea0(&local_70);
      uVar7 = (uint)local_70 ^ (uint)local_70 << 0xb;
      local_70._0_4_ = local_70._4_4_;
      local_70._4_4_ = (uint)local_68;
      if ((uint)((int)((ulong)(uVar7 >> 8 ^ local_68._4_4_ >> 0x13 ^ uVar7 ^ local_68._4_4_) * 100
                      >> 0x20) * 100) < uVar1 << 2) {
        FUN_021f5c40(&local_818,&uStack_34);
        *(undefined2 *)((long)param_1 + 2) = local_818._2_2_;
        *(short *)param_1 = (short)local_818;
        param_1[1] = local_814;
        if ((short)local_818 != -2) {
          FUN_01a45058(&local_7e0,param_1);
          iVar3 = FUN_00bab1f0(&local_7e0);
          if (iVar3 != 0) {
            return;
          }
          uVar1 = *(uint *)(PTR_DAT_04bb37e0 + 4);
          *param_1 = *(uint *)PTR_DAT_04bb37e0;
          param_1[1] = uVar1;
        }
      }
    }
    FUN_038e7ea0(local_7f0);
    local_7f0[0] = local_7f0[0] ^ local_7f0[0] << 0xb;
    if ((uint)((ulong)(local_7f0[0] >> 8 ^ local_7e4 >> 0x13 ^ local_7f0[0] ^ local_7e4) * 100 >>
              0x20) < 0x5a) {
      local_818 = 2;
      local_70 = &PTR_FUN_049ff4e8;
      local_68 = (char *)&local_818;
      FUN_008a1ba0(&local_7e0,&local_70);
      local_818 = 3;
      local_70 = &PTR_FUN_049ff4e8;
      local_68 = (char *)&local_818;
      FUN_008a1ba0(&local_7e0,&local_70);
      local_818 = 5;
      local_70 = &PTR_FUN_049ff4e8;
      local_68 = (char *)&local_818;
      FUN_008a1ba0(&local_7e0,&local_70);
      local_818 = 7;
      local_70 = &PTR_FUN_049ff4e8;
      local_68 = (char *)&local_818;
      FUN_008a1ba0(&local_7e0,&local_70);
      local_818 = 0x4f;
      local_70 = &PTR_FUN_049ff4e8;
      local_68 = (char *)&local_818;
      FUN_008a1ba0(&local_7e0,&local_70);
      lVar6 = FUN_0264d510();
      if (lVar6 != 0) {
        local_68 = (char *)(lVar6 + 0x1a0d78);
        local_60 = 1;
        if (*(long **)(lVar6 + 0x1a0da0) == (long *)0x0) {
          local_5f = 0;
        }
        else {
          puVar5 = (undefined8 *)**(long **)(lVar6 + 0x1a0da0);
          local_5f = 0;
          if (puVar5 != (undefined8 *)0x0) {
            local_5f = (**(code **)*puVar5)();
          }
        }
        local_5f = local_5f & 1;
        local_70 = (undefined **)(PTR_DAT_04bb6eb0 + 0x10);
        uVar1 = *(uint *)(*(long *)(lVar6 + 0x1a0d88) + *(long *)(lVar6 + 0x1a0d80));
        if (2 < uVar1) {
          uVar1 = 0;
        }
        local_818 = uVar1;
        FUN_02640184(&local_70);
        if (1 < (int)uVar1) {
          local_818 = 0x50;
          local_68 = (char *)&local_818;
          local_70 = &PTR_FUN_049ff4e8;
          FUN_008a1ba0(&local_7e0,&local_70);
        }
      }
      local_70 = &PTR_FUN_0493bce0;
      FUN_00ba8e10(&local_7e0,&local_70);
      FUN_02845944(&local_7e0,uVar2,lVar9 + 0x2a8);
      FUN_00ba8400(&local_7e0);
      FUN_00ba914c(auStack_800);
      FUN_01a4ca70(&local_818,auStack_800,&local_7e0,0,PTR_FUN_04bb67e0,0);
      *param_1 = local_818;
      param_1[1] = local_814;
      uVar4 = FUN_0277d9a8(param_1);
      if ((uVar4 & 1) == 0) {
        return;
      }
      FUN_01ad5d04(&local_818,param_1);
      iVar3 = FUN_01ad7260(&local_818);
      if (iVar3 < 2) {
        return;
      }
      FUN_00ba914c(auStack_828);
      FUN_01a4d6e0(auStack_828,param_1,0,PTR_FUN_04bb67e0,0);
      return;
    }
    *(undefined4 *)(param_2 + 0x110) = 3;
    FUN_00baab34(&local_70,param_2);
    local_7d8._0_4_ = (uint)local_70;
    local_7d8._4_4_ = local_70._4_4_;
    goto LAB_00bab09c;
  case 3:
    lVar9 = FUN_0264d510();
    if (lVar9 == 0) {
      local_7e0 = (undefined *)0x8a5;
      FUN_0277d4ac(&local_7e0);
      local_7d8._0_4_ = (uint)local_7e0;
      local_7d8._4_4_ = local_7e0._4_4_;
      goto LAB_00bab09c;
    }
    local_7d8 = lVar9 + 0x1c24c0;
    local_7d0 = 1;
    if (*(long **)(lVar9 + 0x1c24e8) == (long *)0x0) {
      local_7cf = 0;
    }
    else {
      puVar5 = (undefined8 *)**(long **)(lVar9 + 0x1c24e8);
      local_7cf = 0;
      if (puVar5 != (undefined8 *)0x0) {
        local_7cf = (**(code **)*puVar5)();
      }
    }
    local_7cf = local_7cf & 1;
    local_7e0 = PTR_DAT_04bb4bf8 + 0x10;
    local_70 = (undefined **)
               (ulong)*(ushort *)(*(long *)(lVar9 + 0x1c24d0) + *(long *)(lVar9 + 0x1c24c8) + 0x902)
    ;
    FUN_0277d4ac(&local_70);
    break;
  case 4:
    lVar9 = FUN_0265b1c0();
    if (lVar9 == 0) {
      return;
    }
    local_7d0 = 1;
    local_7d8 = lVar9;
    if (*(long **)(lVar9 + 0x28) == (long *)0x0) {
      local_7cf = 0;
    }
    else {
      puVar5 = (undefined8 *)**(long **)(lVar9 + 0x28);
      local_7cf = 0;
      if (puVar5 != (undefined8 *)0x0) {
        local_7cf = (**(code **)*puVar5)();
      }
    }
    local_7cf = local_7cf & 1;
    local_7e0 = PTR_DAT_04bb6a28 + 0x10;
    FUN_02845810(&local_70,*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),1);
    *param_1 = (uint)local_70;
    param_1[1] = local_70._4_4_;
    FUN_02640184(&local_7e0);
    FUN_01ad5d04(&local_7e0,param_1);
    FUN_01b0d950(&local_7e0);
LAB_00bab09c:
    *param_1 = (uint)local_7d8;
    param_1[1] = local_7d8._4_4_;
  default:
    goto switchD_00baac08_default;
  }
  *param_1 = (uint)local_70;
  param_1[1] = local_70._4_4_;
  FUN_02640184(&local_7e0);
switchD_00baac08_default:
  return;
}

