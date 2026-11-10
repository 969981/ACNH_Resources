
void FUN_0036ada8(long param_1,long param_2,long param_3,undefined8 param_4,float *param_5)

{
  FUN_0036ad94(param_1,param_3);
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(float *)(param_1 + 0x28) = (*(float *)(param_2 + 0x50) / *param_5) * *(float *)(param_3 + 0x58);
  *(float *)(param_1 + 0x2c) =
       (*(float *)(param_2 + 0x54) / param_5[1]) * *(float *)(param_3 + 0x5c);
  return;
}

