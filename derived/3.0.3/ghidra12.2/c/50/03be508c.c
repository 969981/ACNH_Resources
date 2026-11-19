
void FUN_03be508c(undefined8 param_1,void *param_2)

{
  long *plVar1;
  
  if (param_2 != (void *)0x0) {
    FUN_03bf5fd4();
    if (DAT_05ae7600 == 0) {
      free(param_2);
      return;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_2);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03be50d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      return;
    }
  }
  return;
}

