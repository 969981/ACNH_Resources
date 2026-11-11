
void FUN_00444520(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  uVar1 = nn::os::GetCurrentThread();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = uVar1;
  param_1[3] = 0;
  return;
}

