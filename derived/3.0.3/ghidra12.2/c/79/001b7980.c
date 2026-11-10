
void FUN_001b7980(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_0483aa58;
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  lVar1 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  for (; lVar1 != param_2; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_001b79e4(param_1,lVar1 + 0x10);
  }
  return;
}

