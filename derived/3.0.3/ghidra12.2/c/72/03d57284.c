
void FUN_03d57284(long *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  (**(code **)(*param_1 + 0xa8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x03d572c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}

