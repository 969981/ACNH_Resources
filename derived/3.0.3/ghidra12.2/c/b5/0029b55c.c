
void FUN_0029b55c(long param_1)

{
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0029b56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x50))();
  return;
}

