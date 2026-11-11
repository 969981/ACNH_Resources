
void FUN_003dc2bc(long *param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = PTR_DAT_04bd0568 + 0x10;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  FUN_003dca08(param_1 + 5);
  param_1[0xf] = 0;
  param_1[0xd] = (long)&PTR_LAB_0484f568;
  param_1[0xe] = (long)param_1;
  return;
}

