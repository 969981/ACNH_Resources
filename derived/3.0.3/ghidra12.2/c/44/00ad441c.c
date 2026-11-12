
undefined8 FUN_00ad441c(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_50 [6];
  undefined1 uStack_4a;
  undefined1 uStack_49;
  byte local_44 [4];
  
  lVar8 = *(long *)PTR_DAT_04bb3d80;
  iVar1 = FUN_0277d6c4(param_3);
  if ((((iVar1 != 0x8d8) && (iVar1 = FUN_0277d6c4(param_3), iVar1 != 0x8da)) &&
      (iVar1 = FUN_0277d6c4(param_3), iVar1 != 0x148)) &&
     (iVar1 = FUN_0277d6c4(param_3), iVar1 != 0x8ba)) {
    local_44[0] = *param_2;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    lVar4 = FUN_025830c0(DAT_055021a0,local_44,1);
    if (lVar4 == 0) {
      return 0;
    }
    lVar9 = lVar4 + 0x194b0;
    if (*(long *)(lVar4 + 0x194b8) == 0) {
      lVar9 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar9 + 0x1090) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar9 + 0x1090), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    uVar6 = FUN_0277a1f4(*(long *)(lVar9 + 0x1078) + *(long *)(lVar9 + 0x1070),param_3);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar9 + 0x1090) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0x1090) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  if (lVar8 != 0) {
    param_2 = param_2 + 0xe;
    uVar7 = *(undefined8 *)param_2;
    local_50._0_4_ = SUB84(uVar7,0);
    local_50._4_2_ = 0x3b04;
    uStack_49 = (undefined1)((ulong)uVar7 >> 0x38);
    if ((char)((ulong)uVar7 >> 0x20) < '\x05') {
      _local_50 = (uint7)(uint6)local_50;
    }
    else {
      _local_50 = CONCAT16(0x3b,local_50);
      local_60 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_50);
      local_60 = local_60 + 0x15180;
      _local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    }
    local_58 = 0;
    local_54 = 0;
    local_60 = CONCAT35(local_60._5_3_,0xfffe);
    uVar3 = FUN_0277d6c4(param_3);
    FUN_013fcda0(lVar8,&local_60,uVar3,param_2,local_50);
    uVar6 = FUN_013fdc6c(lVar8,&local_60,param_2,local_50);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

