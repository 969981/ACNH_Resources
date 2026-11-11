
void FUN_003dff98(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd00d8;
  param_1[2] = (long)(param_1 + 1);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  FUN_003d0be8(param_1 + 3);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *param_1 = (long)&PTR_FUN_0484f778;
  param_1[3] = (long)&PTR_LAB_0484f7b8;
  return;
}

