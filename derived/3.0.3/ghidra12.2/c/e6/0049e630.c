
long FUN_0049e630(long *param_1)

{
  long lVar1;
  
  if ((long *)param_1[7] == (long *)0x0) {
    return param_1[1] - *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0049e644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(long *)param_1[7] + 0x28))();
  return lVar1;
}

