
void FUN_00290a04(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcddc8 + 0x10);
  if (DAT_04c60f28 == param_1) {
    DAT_04c60f28 = (long *)0x0;
    (**(code **)*DAT_04c60f30)();
    DAT_04c60f30 = (undefined8 *)0x0;
    FUN_0028a004(param_1);
    return;
  }
  FUN_0028a004(param_1);
  return;
}

