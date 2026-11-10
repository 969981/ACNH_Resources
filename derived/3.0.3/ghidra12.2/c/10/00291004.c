
void FUN_00291004(long *param_1)

{
  (**(code **)(*param_1 + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x00291028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}

