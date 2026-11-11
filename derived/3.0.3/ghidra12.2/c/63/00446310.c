
size_t FUN_00446310(long *param_1,long param_2,void *param_3)

{
  size_t sVar1;
  
  if ((long *)param_1[6] == (long *)0x0) {
    sVar1 = param_1[1] - (*param_1 + param_2);
    memcpy((void *)(*param_1 + param_2),param_3,sVar1);
    return sVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00446330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (**(code **)(*(long *)param_1[6] + 0x38))();
  return sVar1;
}

