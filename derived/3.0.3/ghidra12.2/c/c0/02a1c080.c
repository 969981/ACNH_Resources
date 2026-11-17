
void FUN_02a1c080(void *param_1)

{
  long *plVar1;
  
  FUN_029dd1ec((long)param_1 + 0xfef0);
  FUN_029ae1e4((long)param_1 + 0xd0e0);
  FUN_029c29fc((long)param_1 + 0xa2d0);
  FUN_029f0a60((long)param_1 + 0x8b90);
  FUN_029e55d0((long)param_1 + 0x7448);
  FUN_0298c954((long)param_1 + 8);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02a1c104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

