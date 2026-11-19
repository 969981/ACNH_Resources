
void FUN_03b23a60(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x40))();
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x03b23aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,param_2);
  return;
}

