
undefined8 FUN_0087ce40(long param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40;
  long local_38;
  
  if ((short)*param_3 != 0x7e4) {
    return 0xffffffff;
  }
  local_40 = *param_3;
  if ((char)(local_40 >> 0x20) < '\x05') {
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = local_38 + -0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
  }
  uVar1 = local_40;
  uVar3 = local_40 >> 0x30;
  local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
  local_40 = CONCAT26((short)uVar3,(undefined6)local_40) & 0xff00ffffffffffff;
  uVar3 = FUN_00879dd0(param_1,param_2,uVar1,uVar1 >> 0x10,uVar1 >> 0x18,0);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar2 = FUN_006bd550(param_2[1],0);
    local_38 = CONCAT44(local_38._4_4_,uVar2);
    lVar4 = FUN_0088c0d0(param_1 + 8,&local_38);
    if (lVar4 != 0) {
      local_44[0] = 1;
      local_48[0] = 1;
      uVar3 = FUN_00874dd0(lVar4,lVar4,local_44,local_48,0x7e4);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_40 >> 0x20;
        local_50 = *param_3;
        local_40._0_4_ = CONCAT13(local_48[0],CONCAT12(local_44[0],0x7e4));
        local_40 = CONCAT44((int)uVar3,(undefined4)local_40) & 0xff000000ffffffff;
        if ((char)(local_50 >> 0x20) < '\x05') {
          local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
          local_38 = local_38 + -0x15180;
          local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        }
        uVar3 = local_50;
        local_50._7_1_ = SUB81(uVar3,7);
        local_50._0_7_ = (uint7)CONCAT24(5,(undefined4)local_50);
        uVar5 = FUN_00a82474(&local_50,&local_40);
        return uVar5;
      }
    }
  }
  return 0xffffffff;
}

