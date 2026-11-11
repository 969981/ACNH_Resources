
size_t FUN_004462a0(undefined8 *param_1,void *param_2,undefined8 param_3)

{
  long *plVar1;
  size_t sVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == (long *)0x0) {
    sVar2 = param_1[1] - (long)*param_1;
    memcpy((void *)*param_1,param_2,sVar2);
    *param_1 = param_1[1];
    return sVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x004462d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_1,param_2,param_3);
  return sVar2;
}

