
undefined8 FUN_0029b7b0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long **)(param_1 + 8) == (long *)0x0) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0xb0))(), (uVar1 & 1) == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0029b7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
  return uVar2;
}

