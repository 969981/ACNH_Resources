
void FUN_00157980(long *param_1)

{
  if (*param_1 != 0) {
    nnosFinalizeMutex();
    FUN_00143300(*param_1);
  }
  FUN_00143300(param_1[2]);
  if (param_1[4] != 0) {
    FUN_0014b378();
  }
  memset(param_1,0,0x78);
  return;
}

