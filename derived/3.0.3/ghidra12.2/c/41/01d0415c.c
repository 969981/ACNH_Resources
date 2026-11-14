
uint FUN_01d0415c(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long local_158;
  undefined8 local_150;
  
  (**(code **)(*param_1 + 0x18))();
  FUN_006e9528(&local_158,"%s[%d]",param_1[1],0);
  (**(code **)(local_158 + 0x18))(&local_158);
  uVar2 = FUN_0069a460(param_3,param_2,local_150);
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_006e9528(&local_158,"%s[%d]",param_1[1],1);
    (**(code **)(local_158 + 0x18))(&local_158);
    uVar2 = FUN_0069a460(param_3,param_2 + 2,local_150);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      FUN_006e9528(&local_158,"%s[%d]",param_1[1],2);
      (**(code **)(local_158 + 0x18))(&local_158);
      uVar2 = FUN_0069a460(param_3,param_2 + 4,local_150);
      if ((uVar2 & 1) != 0) {
        (**(code **)(*param_1 + 0x18))(param_1);
        FUN_006e9528(&local_158,"%s[%d]",param_1[1],3);
        (**(code **)(local_158 + 0x18))(&local_158);
        uVar1 = FUN_0069a460(param_3,param_2 + 6,local_150);
        goto LAB_01d042c4;
      }
    }
    uVar1 = 0;
  }
LAB_01d042c4:
  return uVar1 & 1;
}

