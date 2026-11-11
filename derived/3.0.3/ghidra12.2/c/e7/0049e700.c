
size_t FUN_0049e700(undefined8 *param_1,void *param_2,undefined8 param_3)

{
  long *plVar1;
  size_t sVar2;
  
  plVar1 = (long *)param_1[7];
  if (plVar1 == (long *)0x0) {
    sVar2 = param_1[1] - (long)*param_1;
    memcpy(param_2,(void *)*param_1,sVar2);
    *param_1 = param_1[1];
    return sVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0049e734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2,param_3);
  return sVar2;
}

