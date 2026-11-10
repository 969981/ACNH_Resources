
void FUN_0029b370(long param_1)

{
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0029b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x58))();
  return;
}

