
void FUN_00455390(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00426fc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x004553c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x18))(param_3,param_1,(long)iVar1);
  return;
}

