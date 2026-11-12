
long FUN_009048dc(long param_1)

{
  long lVar1;
  long local_30;
  char local_28;
  char local_26;
  
  FUN_0071cb58(&local_30,param_1 + 0x34,param_1 + 0x38,0);
  if ((((local_30 == 0) || (local_28 == '\0')) || (local_26 == '\0')) ||
     (*(long **)(local_30 + 0x68) == (long *)0x0)) {
    return param_1 + 0x3c;
  }
                    /* WARNING: Could not recover jumptable at 0x00904938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(**(long **)(local_30 + 0x68) + 0x120))();
  return lVar1;
}

