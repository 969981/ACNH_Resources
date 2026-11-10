
void FUN_00279f24(long *param_1)

{
  (**(code **)(*param_1 + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x00279f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}

