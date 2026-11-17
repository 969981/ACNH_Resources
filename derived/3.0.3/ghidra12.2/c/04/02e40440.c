
void FUN_02e40440(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  *param_1 = (long)(PTR_DAT_04bc6c78 + 0x10);
  FUN_03ebae78(param_1 + 1);
  plVar1 = param_1 + 0xb;
  puVar2 = (undefined8 *)*plVar1;
  if ((puVar2 != (undefined8 *)0x0) && ((long *)*puVar2 != (long *)0x0 && (long *)*puVar2 == plVar1)
     ) {
    *plVar1 = 0;
    *puVar2 = 0;
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e404b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

