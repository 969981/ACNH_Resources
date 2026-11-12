
void FUN_006939f4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  *(undefined4 *)(*param_1 + (long)(int)param_1[2] * 0x30) = 0xd;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 8) = param_2;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x10) = param_3;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x18) = param_4;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x20) = param_5;
  *(undefined1 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x28) = 0;
  *(undefined1 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x29) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}

