
void FUN_0029a5b0(long param_1)

{
  if (*(long **)(param_1 + 0x68) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0029a5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x18))();
  return;
}

