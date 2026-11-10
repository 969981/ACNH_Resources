
void FUN_00258064(long param_1)

{
  if (*(long **)(param_1 + 0x318) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x318) + 0x10))();
  }
  if (*(long **)(param_1 + 0x310) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x310) + 0x10))();
  }
  if (*(long **)(param_1 + 0x308) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002580a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x308) + 0x10))();
  return;
}

