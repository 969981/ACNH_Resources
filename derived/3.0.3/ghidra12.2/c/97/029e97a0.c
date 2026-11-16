
void FUN_029e97a0(void *param_1)

{
  long *plVar1;
  
  FUN_03838610((long)param_1 + 0x100);
  FUN_03838610((long)param_1 + 0xd0);
  FUN_03838610((long)param_1 + 0xa0);
  FUN_03838610((long)param_1 + 0x70);
  FUN_03838610((long)param_1 + 0x40);
  FUN_03838610((long)param_1 + 0x10);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x029e9814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

