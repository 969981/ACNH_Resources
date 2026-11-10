
void FUN_001b8504(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcc570 + 0x10);
  if (param_1[0xc] != 0) {
    FUN_00187e4c(param_1[0xc] + -4);
    param_1[0xc] = 0;
    *(undefined1 *)((long)param_1 + 0x69) = 0;
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  FUN_001dbfc8(param_1 + 9,param_1[10]);
  FUN_001dbfc8(param_1 + 6,param_1[7]);
  FUN_001dbbb8(param_1 + 3,param_1[4]);
  return;
}

