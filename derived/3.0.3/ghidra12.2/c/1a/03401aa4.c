
undefined8 FUN_03401aa4(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  if ((uVar1 & 1) == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03401ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)*param_1)(param_1);
  return uVar2;
}

