
void FUN_00294990(long *param_1)

{
  long *plVar1;
  undefined4 local_a0;
  ErrorResultVariant aEStack_9c [124];
  undefined4 local_14;
  
  (**(code **)(*param_1 + 0x68))();
  if ((int *)param_1[0xb] != (int *)0x0) {
    if (*(int *)param_1[0xb] == 1) {
      FUN_00221064();
    }
    param_1[0xb] = 0;
  }
  plVar1 = param_1 + 0xc;
  if ((int)*plVar1 == 1) {
    FUN_00221064(plVar1);
  }
  FUN_00220f24(plVar1);
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((long)param_1 + 0x11b) = 0;
  *(undefined2 *)((long)param_1 + 0x119) = 0;
  param_1[0x22] = 0;
  local_a0 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_9c,(Result *)&local_14);
  FUN_00229780(param_1 + 0x24,&local_a0);
  FUN_002b3fa8(&local_a0);
  FUN_002b40ac(param_1 + 0x12,&local_a0);
  FUN_002b4104(&local_a0);
  return;
}

