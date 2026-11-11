
undefined8 FUN_00466cd0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_00428440(*(undefined8 *)(param_3 + 8));
  uVar2 = FUN_00428440(*(undefined8 *)(param_2 + 8));
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (uVar2 & 0x1f) * 0x48 + (uVar1 & 0x1f) * 8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00466d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
  return uVar3;
}

