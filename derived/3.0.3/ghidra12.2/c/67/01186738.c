
uint FUN_01186738(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 local_38;
  long lStack_30;
  undefined4 local_28;
  byte local_24;
  
  (**(code **)(*param_1 + 0x18))();
  local_38 = (ulong)local_38._5_3_ << 0x28;
  uVar1 = FUN_03ea9450(&DAT_050cc5d0,&local_38,param_1[1]);
  if ((uVar1 & 1) != 0) {
    if (local_38._4_1_ - 0xc0 < 2) {
      lStack_30 = DAT_050cc5d0 + (local_38 & 0xffffffff);
    }
    else {
      if (local_38._4_1_ != 0xff) {
        return 0;
      }
      lStack_30 = 0;
    }
    if (DAT_050cc5d0 != 0) {
      local_38 = DAT_050cc5d0;
      (**(code **)(*param_2 + 0x18))(param_2);
      local_28 = 0;
      local_24 = 0;
      uVar1 = FUN_03ea9450(&local_38,&local_28,param_2[1]);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (0xbf < local_24) {
        return (uint)(0x8000000000000003 >> ((ulong)(local_24 + 0x40) & 0x3f)) & 1;
      }
    }
  }
  return 0;
}

