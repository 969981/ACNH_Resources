
void FUN_00693a7c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(*param_1 + (long)(int)param_1[2] * 0x30) = 0xd;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 8) = param_2;
  *(undefined8 **)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x10) = param_3 + 2;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x18) = uVar1;
  *(undefined8 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x20) = uVar2;
  *(undefined1 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x28) = 0;
  *(undefined1 *)(*param_1 + (long)(int)param_1[2] * 0x30 + 0x29) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}

