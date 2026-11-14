
undefined8 FUN_01d9266c(long param_1)

{
  ulong uVar1;
  undefined1 auStack_5f8 [8];
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined7 uStack_5e0;
  undefined1 local_5d9;
  undefined7 uStack_5d8;
  undefined8 local_5ce;
  undefined8 local_5c6;
  undefined7 local_5be;
  undefined1 uStack_5b7;
  undefined7 uStack_5b6;
  undefined8 local_5ae;
  undefined8 local_5a6;
  undefined7 local_59e;
  undefined1 uStack_597;
  undefined7 uStack_596;
  undefined8 local_58e;
  undefined8 local_586;
  undefined7 local_57e;
  undefined1 uStack_577;
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
  undefined8 local_506;
  undefined7 uStack_4fe;
  undefined1 local_4f7;
  undefined7 uStack_4f6;
  undefined8 local_4ee;
  undefined8 local_4e6;
  undefined7 uStack_4de;
  undefined1 local_4d7;
  undefined7 uStack_4d6;
  undefined8 local_4ce;
  undefined8 uStack_4c6;
  undefined8 local_4be;
  undefined8 uStack_4b6;
  undefined8 local_4ae;
  undefined8 uStack_4a6;
  undefined8 local_49e;
  undefined8 uStack_496;
  undefined8 local_48e;
  undefined8 uStack_486;
  undefined8 local_47e;
  undefined8 uStack_476;
  undefined4 local_46e;
  undefined8 local_458;
  undefined1 auStack_44e [1038];
  undefined *local_40;
  undefined *puStack_38;
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 0x261) == '\0') {
    return 0;
  }
  uStack_5d8 = 0;
  local_5f0 = 0;
  uStack_4f6 = 0;
  uStack_4d6 = 0;
  local_4ee = 0;
  local_5ce = 0;
  local_5c6 = 0;
  local_5be = 0;
  uStack_5b7 = 0;
  uStack_5b6 = 0;
  local_5ae = 0;
  local_5a6 = 0;
  local_59e = 0;
  uStack_597 = 0;
  uStack_596 = 0;
  local_58e = 0;
  local_586 = 0;
  local_57e = 0;
  uStack_577 = 0;
  uStack_576 = 0;
  uStack_556 = 0;
  uStack_55e = 0;
  local_557 = 0;
  local_566 = 0;
  local_56e = 0;
  uStack_536 = 0;
  uStack_53e = 0;
  local_537 = 0;
  local_546 = 0;
  local_54e = 0;
  uStack_516 = 0;
  uStack_51e = 0;
  local_517 = 0;
  local_526 = 0;
  local_52e = 0;
  uStack_4fe = 0;
  local_4f7 = 0;
  local_506 = 0;
  local_50e = 0;
  local_4e6 = 0;
  uStack_4de = 0;
  local_4d7 = 0;
  local_46e = 0;
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_5d9 = 0;
  local_47e = 0;
  uStack_476 = 0;
  local_48e = 0;
  uStack_486 = 0;
  local_49e = 0;
  uStack_496 = 0;
  local_4ae = 0;
  uStack_4a6 = 0;
  local_4be = 0;
  uStack_4b6 = 0;
  local_4ce = 0;
  uStack_4c6 = 0;
  memset(auStack_44e,0,0x408);
  if (*(long *)(*(long *)(param_1 + 0x98) + 0x18) != 0) {
    FUN_00699eb4(auStack_30,*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10));
    uVar1 = FUN_0069aa28(auStack_30);
    if ((uVar1 & 1) != 0) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      puStack_38 = &DAT_0409f795;
      uVar1 = FUN_01cd4580(&local_40,auStack_5f8,auStack_30);
      if ((uVar1 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x238) = local_458;
        return 1;
      }
    }
  }
  return 0;
}

