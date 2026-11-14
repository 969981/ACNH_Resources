
void FUN_015e7f84(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bbdcd0 + 0x10);
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

