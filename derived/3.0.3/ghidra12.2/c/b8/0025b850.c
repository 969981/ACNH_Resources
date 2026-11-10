
void FUN_0025b850(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x310);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
  }
  plVar1 = *(long **)(param_1 + 0x318);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0025b894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
  return;
}

