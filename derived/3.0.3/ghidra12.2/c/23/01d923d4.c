
undefined8 FUN_01d923d4(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_740;
  undefined8 *puStack_738;
  undefined *local_730;
  undefined8 *puStack_728;
  undefined4 local_720;
  undefined1 local_71c;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined4 local_708;
  undefined *local_700;
  undefined1 *puStack_6f8;
  undefined4 local_6f0;
  undefined1 local_6ec [63];
  undefined1 local_6ad;
  undefined *local_6a8;
  undefined1 *puStack_6a0;
  undefined4 local_698;
  undefined1 local_694 [63];
  undefined1 local_655;
  undefined8 local_650;
  undefined6 uStack_648;
  undefined2 local_642;
  undefined6 uStack_640;
  undefined1 auStack_63a [2];
  undefined1 auStack_638 [8];
  undefined8 local_630;
  undefined8 local_628;
  undefined7 uStack_620;
  undefined1 local_619;
  undefined7 uStack_618;
  undefined1 local_611;
  undefined8 local_60e;
  undefined8 local_606;
  undefined7 local_5fe;
  undefined1 uStack_5f7;
  undefined7 uStack_5f6;
  undefined8 local_5ee;
  undefined8 local_5e6;
  undefined7 local_5de;
  undefined1 uStack_5d7;
  undefined7 uStack_5d6;
  undefined8 local_5ce;
  undefined8 local_5c6;
  undefined7 local_5be;
  undefined1 uStack_5b7;
  undefined7 uStack_5b6;
  undefined8 local_5ae;
  undefined8 local_5a6;
  undefined7 uStack_59e;
  undefined1 local_597;
  undefined7 uStack_596;
  undefined8 local_58e;
  undefined8 local_586;
  undefined7 uStack_57e;
  undefined1 local_577;
  undefined7 uStack_576;
  undefined8 local_56e;
  undefined8 local_566;
  undefined7 uStack_55e;
  undefined1 local_557;
  undefined7 uStack_556;
  undefined8 local_54e;
  undefined8 local_546;
  undefined7 uStack_53e;
  undefined1 local_537;
  undefined7 uStack_536;
  undefined8 local_52e;
  undefined8 local_526;
  undefined7 uStack_51e;
  undefined1 local_517;
  undefined7 uStack_516;
  undefined8 local_50e;
  undefined8 uStack_506;
  undefined8 local_4fe;
  undefined8 uStack_4f6;
  undefined8 local_4ee;
  undefined8 uStack_4e6;
  undefined8 local_4de;
  undefined8 uStack_4d6;
  undefined8 local_4ce;
  undefined8 uStack_4c6;
  undefined8 local_4be;
  undefined8 uStack_4b6;
  undefined4 local_4ae;
  undefined1 auStack_48e [1038];
  undefined *local_80;
  undefined2 *puStack_78;
  undefined4 local_70;
  undefined2 local_6c [10];
  undefined2 local_58;
  
  (**(code **)(*param_2 + 0x38))(param_2);
  uStack_618 = 0;
  uStack_536 = 0;
  uStack_516 = 0;
  local_52e = 0;
  local_630 = 0;
  local_60e = 0;
  local_606 = 0;
  local_5fe = 0;
  uStack_5f7 = 0;
  uStack_5f6 = 0;
  local_5ee = 0;
  local_5e6 = 0;
  local_5de = 0;
  uStack_5d7 = 0;
  uStack_5d6 = 0;
  local_5ce = 0;
  local_5c6 = 0;
  local_5be = 0;
  uStack_5b7 = 0;
  uStack_5b6 = 0;
  uStack_596 = 0;
  uStack_59e = 0;
  local_597 = 0;
  local_5a6 = 0;
  local_5ae = 0;
  uStack_576 = 0;
  uStack_57e = 0;
  local_577 = 0;
  local_586 = 0;
  local_58e = 0;
  uStack_556 = 0;
  uStack_55e = 0;
  local_557 = 0;
  local_566 = 0;
  local_56e = 0;
  uStack_53e = 0;
  local_537 = 0;
  local_546 = 0;
  local_54e = 0;
  local_526 = 0;
  uStack_51e = 0;
  local_517 = 0;
  local_4ae = 0;
  local_628 = 0;
  uStack_620 = 0;
  local_619 = 0;
  local_4be = 0;
  uStack_4b6 = 0;
  local_4ce = 0;
  uStack_4c6 = 0;
  local_4de = 0;
  uStack_4d6 = 0;
  local_4ee = 0;
  uStack_4e6 = 0;
  local_4fe = 0;
  uStack_4f6 = 0;
  local_50e = 0;
  uStack_506 = 0;
  memset(auStack_48e,0,0x408);
  if (*(long *)(*(long *)(param_1 + 0x98) + 0x18) != 0) {
    FUN_00699eb4(&local_730,*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10));
    uVar3 = FUN_0069aa28(&local_730);
    if ((uVar3 & 1) != 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puStack_78 = (undefined2 *)&DAT_0409f795;
      local_80 = puVar1;
      uVar3 = FUN_01cd4580(&local_80,auStack_638,&local_730);
      if ((uVar3 & 1) != 0) {
        local_71c = 0;
        local_720 = 0xb;
        local_718 = 0xffffffff;
        uStack_710 = 0xffffffff00000000;
        puStack_728 = &local_650;
        local_708 = 0xffffffff;
        puStack_6f8 = local_6ec;
        local_6f0 = 0x40;
        local_6ad = 0;
        local_6ec[0] = 0;
        local_700 = PTR_DAT_04bb2bc0 + 0x10;
        local_698 = 0x40;
        local_655 = 0;
        local_694[0] = 0;
        puStack_6a0 = local_694;
        uStack_640 = 0;
        local_730 = PTR_DAT_04bb5128 + 0x10;
        local_650 = 0;
        uStack_648 = 0;
        local_642 = 0;
        puVar2 = auStack_63a;
        if (auStack_63a <= (undefined1 *)((long)&local_650 + 2U)) {
          puVar2 = (undefined1 *)((long)&local_650 + 2U);
        }
        local_6a8 = local_700;
        memset(puStack_728,0,(ulong)(puVar2 + (-0xe1 - (long)&local_730)) & 0xfffffffffffffffc | 2);
        local_740 = puVar1;
        puStack_738 = &local_630;
        uVar4 = FUN_00a7f6d4(&local_630);
        local_70 = 0xb;
        local_58 = 0;
        puStack_78 = local_6c;
        local_6c[0] = 0;
        local_80 = PTR_DAT_04bc0d30 + 0x10;
        uVar3 = FUN_01df33d0(&local_80,&local_740,uVar4);
        if (((uVar3 & 1) == 0) || (uVar3 = FUN_006f5580(&local_730,&local_80), (uVar3 & 1) == 0)) {
          (**(code **)(local_730 + 0x38))(&local_730);
        }
        else {
          uVar4 = (**(code **)(local_730 + 0x18))(&local_730);
          uVar3 = FUN_01c13f00(param_2,uVar4,0xb,local_611);
          if ((uVar3 & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

