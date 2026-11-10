
void FUN_001fc350(long *param_1,undefined4 param_2,long param_3)

{
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = param_2;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = param_3;
  *param_1 = (long)&PTR_FUN_0483df90;
  FUN_001a59a0();
  FUN_001fc400(param_1);
  if (0.0 < DAT_04c5ec28) {
    (**(code **)(*(long *)(param_1[8] + 200) + 0x10))();
    FUN_001a6d04(DAT_04c5ec28,param_1[8] + 200);
    return;
  }
  return;
}

