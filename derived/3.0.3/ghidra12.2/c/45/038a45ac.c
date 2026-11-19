
void FUN_038a45ac(long param_1)

{
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038a45bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}

