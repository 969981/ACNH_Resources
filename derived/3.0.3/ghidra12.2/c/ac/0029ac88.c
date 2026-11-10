
void FUN_0029ac88(int *param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
                 ,uint param_6)

{
  ulong uVar1;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if (*(int *)(param_2 + 0xd0) == 1) {
    uVar1 = FUN_002212e4(*(undefined8 *)(param_2 + 0x78));
    if (((uVar1 & 1) == 0) && (*(long *)(param_2 + 0x78) != 0)) {
      FUN_002a448c(param_1,*(long *)(param_2 + 0x78),param_2 + 0x110,param_3,param_4,param_5,
                   param_6 & 1);
      if (*param_1 == 0) {
        FUN_002211bc(*(undefined8 *)(param_2 + 0x78),0);
        return;
      }
      return;
    }
  }
  local_34 = 0;
  local_50 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

