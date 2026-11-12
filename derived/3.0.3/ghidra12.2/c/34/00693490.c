
void FUN_00693490(long *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined4 *)(*param_1 + (long)(int)param_1[2] * 0x30) = 0;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 8) = param_2;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x10) = 0;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x18) = param_3;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x20) = 1;
  *(undefined1 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x28) = 0;
  *(undefined1 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x29) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}

