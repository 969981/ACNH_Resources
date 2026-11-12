
void FUN_008a1ab8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
    uVar1 = *(ulong *)(param_1 + 0x18) & 1;
    if (uVar1 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar1 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x008a1ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

