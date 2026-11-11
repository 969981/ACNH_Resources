
void FUN_003cfd60(long *param_1,undefined4 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003cfd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1[3],param_2);
  return;
}

