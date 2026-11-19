
void FUN_0387d738(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0387d774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}

