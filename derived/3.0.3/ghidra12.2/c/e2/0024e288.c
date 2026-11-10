
undefined8 FUN_0024e288(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_002200e4(param_1 + 8,param_2 + 8);
  if (((uVar1 & 1) == 0) || (*(short *)(param_1 + 0x28) != *(short *)(param_2 + 0x28))) {
    return 0;
  }
  return 1;
}

