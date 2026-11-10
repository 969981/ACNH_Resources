
void FUN_00382afc(long *param_1,undefined8 param_2)

{
  FUN_0037bb50();
  *param_1 = (long)(PTR_DAT_04bd0890 + 0x10);
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  FUN_0037ca20(param_1,param_2,0,0,0);
  param_1[0x1d] = 0;
  *param_1 = (long)&PTR_thunk_FUN_0037bb6c_0484d310;
  param_1[0x1b] = (long)(param_1 + 0x1b);
  param_1[0x1c] = (long)(param_1 + 0x1b);
  return;
}

