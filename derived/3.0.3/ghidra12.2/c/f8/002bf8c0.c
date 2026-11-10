
void FUN_002bf8c0(long param_1)

{
  if (*(long **)(param_1 + 0x50) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002bf8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))();
  return;
}

