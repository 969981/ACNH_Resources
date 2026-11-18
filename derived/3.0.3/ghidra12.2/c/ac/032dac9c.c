
void FUN_032dac9c(undefined8 param_1,long *param_2,long *param_3)

{
  if (param_2 == (long *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x032dacdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x38))(param_3,param_2);
  return;
}

