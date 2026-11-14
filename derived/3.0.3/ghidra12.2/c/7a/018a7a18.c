
undefined8 FUN_018a7a18(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x3b8) != 0) {
    uVar3 = *(ulong *)(param_1 + 0x3c8) & 1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x3c0);
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x3b8) + ((long)*(ulong *)(param_1 + 0x3c8) >> 1));
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x018a7a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x390);
      return uVar2;
    }
  }
  return 0;
}

