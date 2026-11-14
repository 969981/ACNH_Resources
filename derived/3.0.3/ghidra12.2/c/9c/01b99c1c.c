
void FUN_01b99c1c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04a397c8;
  if (*(char *)((long)param_1 + 0x1c) != '\0') {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 3);
  }
  param_1[2] = &PTR___cxa_pure_virtual_04a3ac58;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01b99c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

