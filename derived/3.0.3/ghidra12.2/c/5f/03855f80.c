
void FUN_03855f80(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  (**(code **)(*param_1 + 0x40))();
  param_1 = param_1 + 3;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03855fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_2);
  return;
}

