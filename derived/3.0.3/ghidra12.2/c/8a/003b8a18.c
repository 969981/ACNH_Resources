
undefined8
FUN_003b8a18(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_50;
  long local_48;
  
  local_50 = 0xffffffffffffffff;
  local_48 = 0;
  uVar1 = FUN_003b9d24(param_1[1],param_2,&local_50,0);
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    plVar3 = (long *)param_1[2];
    if ((plVar3 != (long *)0x0) && ((char)plVar3[1] != '\0')) {
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2 & 0xffffffff,&local_50,0);
    }
    if (local_48 == 0) {
      uVar2 = 0;
      if (((int)local_50 != -1) && (local_50._4_4_ != -1)) {
        uVar2 = (**(code **)(*param_1 + 0x38))
                          (param_1,param_3,param_4,(int)param_1[0x53] + local_50._4_4_);
        return uVar2;
      }
    }
    else {
      uVar2 = FUN_003b8b20(param_1,param_3,param_4,local_48,param_5,param_6);
    }
  }
  return uVar2;
}

