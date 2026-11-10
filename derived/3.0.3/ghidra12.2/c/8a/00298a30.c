
void FUN_00298a30(long *param_1)

{
  undefined4 local_a0;
  ErrorResultVariant aEStack_9c [124];
  undefined4 local_14;
  
  (**(code **)(*param_1 + 0x58))();
  if ((int *)param_1[0xb] != (int *)0x0) {
    if (*(int *)param_1[0xb] == 1) {
      FUN_00221064();
    }
    param_1[0xb] = 0;
  }
  if ((int)param_1[0x22] == 1) {
    FUN_00221064(param_1 + 0x22);
  }
  FUN_00220f24(param_1 + 0x22);
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  local_a0 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_9c,(Result *)&local_14);
  FUN_00229780((long)param_1 + 0x6c,&local_a0);
  *(undefined4 *)((long)param_1 + 0x7e) = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  FUN_002b3fa8(&local_a0);
  FUN_002b40ac(param_1 + 0x12,&local_a0);
  FUN_002b4104(&local_a0);
  return;
}

