
void FUN_00361570(long *param_1,long param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x58))();
  param_1[9] = param_2;
                    /* WARNING: Could not recover jumptable at 0x003615b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_3);
  return;
}

