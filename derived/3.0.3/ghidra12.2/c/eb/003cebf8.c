
void FUN_003cebf8(long *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1f) = param_2;
  if (param_1[4] != 0) {
    FUN_003ce200(param_1[4],param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x003cec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

