
void FUN_001b8358(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[3] = param_1 + 4;
  param_1[5] = 0;
  param_1[6] = param_1 + 7;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  *param_1 = &PTR_FUN_0483aa78;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar1 = FUN_00185a6c(0x90);
  if (lVar1 != 0) {
    FUN_001e1500(lVar1);
  }
  param_1[1] = lVar1;
  FUN_001b83dc(param_1,param_2);
  return;
}

