
void FUN_03bf6220(long *param_1)

{
  param_1[8] = 0;
                    /* WARNING: Could not recover jumptable at 0x03bf622c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))();
  return;
}

