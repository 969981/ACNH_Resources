
void FUN_00285d60(undefined8 param_1,long *param_2,undefined4 param_3)

{
  if ((param_2 == (long *)0x0) &&
     (param_2 = (long *)FUN_0028a47c(DAT_04c60848), param_2 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00285da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1,param_3);
  return;
}

