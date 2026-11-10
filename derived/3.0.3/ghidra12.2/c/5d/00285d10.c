
void FUN_00285d10(undefined8 param_1,long *param_2)

{
  if ((param_2 == (long *)0x0) &&
     (param_2 = (long *)FUN_0028a47c(DAT_04c60848), param_2 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00285d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1,4);
  return;
}

