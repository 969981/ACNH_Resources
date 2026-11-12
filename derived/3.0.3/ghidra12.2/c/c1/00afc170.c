
undefined8 FUN_00afc170(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
    uVar2 = *(ulong *)(param_1 + 0x18) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00afc198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  return 0;
}

