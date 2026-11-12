
void FUN_00747c10(undefined8 param_1,long *param_2)

{
  if (param_2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00747c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x140))(param_2,param_1);
  return;
}

