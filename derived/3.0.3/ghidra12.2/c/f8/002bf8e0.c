
undefined8 FUN_002bf8e0(long param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0xb2) == '\0') || (*(long **)(param_1 + 0x88) == (long *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x002bf8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 0x88) + 0x60))();
  return uVar1;
}

