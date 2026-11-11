
void FUN_003cfbb0(long *param_1,uint param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  param_1[(ulong)param_2 + 0x38] = param_3;
  lVar1 = (**(code **)(*param_1 + 0x40))();
  *(undefined8 *)(lVar1 + 0xb0) = param_4;
  return;
}

