
undefined8 FUN_0029d9f8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0029da08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x80))();
  return uVar1;
}

