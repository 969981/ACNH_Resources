
void FUN_00462660(long *param_1,long *param_2)

{
  if (param_1 == param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00462684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_1,0,0);
  return;
}

