
void FUN_00484b80(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *param_1 = &PTR_LAB_0485b588;
  param_1[1] = 0xffffffff;
  param_1[4] = 0x8000000000000000;
  return;
}

