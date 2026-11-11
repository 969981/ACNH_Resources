
void FUN_003dd550(undefined8 *param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  
  if (param_4 != 0) {
    FUN_003b8218(param_2,param_3);
    *param_1 = param_2;
    param_1[1] = param_3;
    uVar1 = 0;
    if ((long)param_4 != 0) {
      uVar1 = param_3 / (ulong)(long)param_4;
    }
    *(int *)(param_1 + 3) = param_4;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    param_1[2] = uVar1 & 0xffffffffffffffc0;
  }
  return;
}

