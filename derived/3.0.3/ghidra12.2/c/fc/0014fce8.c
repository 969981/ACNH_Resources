
undefined8 FUN_0014fce8(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x440) + 0x40);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 600);
    return 0x10001;
  }
                    /* WARNING: Could not recover jumptable at 0x0014fcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

