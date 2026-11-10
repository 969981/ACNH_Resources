
void FUN_0018b1a0(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0 || lVar1 == param_1 + 8) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + -0x14);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    free((undefined8 *)(lVar1 + -0x14));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0018b1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

