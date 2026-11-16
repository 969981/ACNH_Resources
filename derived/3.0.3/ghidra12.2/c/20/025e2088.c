
/* WARNING: Removing unreachable block (ram,0x025e20b8) */
/* WARNING: Removing unreachable block (ram,0x025e20c0) */

void FUN_025e2088(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04a86650;
  FUN_02601530(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x025e2100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

