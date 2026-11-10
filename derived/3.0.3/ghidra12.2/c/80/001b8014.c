
void FUN_001b8014(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_0483aa78;
  *(undefined2 *)(param_1 + 0xd) = 1;
  *(undefined1 *)((long)param_1 + 0x6a) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar1 = FUN_00185a6c(0x90);
  if (lVar1 != 0) {
    FUN_001e1500(lVar1);
  }
  param_1[1] = lVar1;
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_001b8590(param_1);
    *(undefined1 *)((long)param_1 + 0x69) = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    return;
  }
  *(undefined1 *)((long)param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  return;
}

