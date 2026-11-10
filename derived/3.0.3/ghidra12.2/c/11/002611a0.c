
void FUN_002611a0(undefined8 param_1,long *param_2,long param_3)

{
  if (param_3 != 0) {
    param_2[0xb] = param_3;
    FUN_00220f78(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x002611d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_1,param_2);
  return;
}

