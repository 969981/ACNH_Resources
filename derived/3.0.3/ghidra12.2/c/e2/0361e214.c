
long FUN_0361e214(long param_1,undefined8 param_2,uint *param_3,long param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1024);
  *param_3 = (uint)*(byte *)(param_1 + 0x242);
  param_3[1] = uVar1;
  memset(param_3 + 2,0,param_4 - 8);
  return param_4;
}

