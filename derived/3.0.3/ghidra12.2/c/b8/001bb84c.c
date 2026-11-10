
void FUN_001bb84c(long *param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  long local_28;
  
  *param_1 = (long)(PTR_DAT_04bcc3f8 + 0x10);
  FUN_001b8358(param_1 + 1);
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = param_4;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = param_5;
  FUN_00187810(&local_28);
  uVar1 = (ulong)param_3;
  if ((int)param_3 < 0) {
    uVar1 = -(ulong)-param_3;
  }
  param_1[0xf] = local_28 + uVar1;
  return;
}

