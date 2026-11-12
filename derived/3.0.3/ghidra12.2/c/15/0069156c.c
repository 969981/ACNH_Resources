
void FUN_0069156c(long param_1)

{
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00691574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))();
  return;
}

