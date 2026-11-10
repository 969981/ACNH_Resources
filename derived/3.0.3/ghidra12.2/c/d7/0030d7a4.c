
void FUN_0030d7a4(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_002141f8(param_1,3);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0030d7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))();
  return;
}

