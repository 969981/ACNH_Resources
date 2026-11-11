
void FUN_00470bd0(undefined8 *param_1,undefined8 param_2,int param_3,char param_4)

{
  FUN_0046fbf0();
  param_1[3] = 0;
  param_1[4] = param_2;
  *param_1 = &PTR_LAB_04864d28;
  *(undefined4 *)(param_1 + 5) = 0;
  *(uint *)((long)param_1 + 0x2c) = param_3 - (uint)(param_4 != '\0');
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 == '\0') {
    return;
  }
  FUN_0043a4d0(param_2,0,param_3);
  return;
}

