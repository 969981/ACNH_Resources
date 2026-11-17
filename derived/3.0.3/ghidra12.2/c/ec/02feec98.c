
void FUN_02feec98(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (param_3 == (long *)0x0) {
    return;
  }
  lVar1 = param_1 + 8;
  (**(code **)*param_3)(param_3,lVar1);
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x02feed00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 8))(param_3,lVar1);
  return;
}

