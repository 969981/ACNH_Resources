
void FUN_00144228(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    (**(code **)(PTR_DAT_04be2008 + 0x88))();
    param_1[3] = 0;
    param_1[5] = 0;
    FUN_00143e94(param_1 + 7);
    FUN_00143300(*param_1);
    *param_1 = 0;
    FUN_00143300(param_1[1]);
    param_1[1] = 0;
  }
  return;
}

