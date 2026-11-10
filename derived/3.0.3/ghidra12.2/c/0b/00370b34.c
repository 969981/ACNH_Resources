
void FUN_00370b34(long *param_1,long param_2)

{
  FUN_0037bb50();
  *param_1 = (long)(PTR_DAT_04bd0890 + 0x10);
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  FUN_0037ca20(param_1,param_2,0,0,0);
  *param_1 = (long)&PTR_FUN_0484ce40;
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined1 *)((long)param_1 + 0xdc) = *(undefined1 *)(param_2 + 0xdc);
  *(undefined1 *)((long)param_1 + 0xdd) = *(undefined1 *)(param_2 + 0xdd);
  return;
}

