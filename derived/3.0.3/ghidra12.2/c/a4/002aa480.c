
void FUN_002aa480(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_0022b910(param_2,param_3);
  *(undefined4 *)(lVar1 + (ulong)((param_3 >> 2) - 1) * 4) = 0;
  return;
}

