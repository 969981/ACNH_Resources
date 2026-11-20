
void FUN_03f59758(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_LAB_04baa620;
  puVar1 = PTR_DAT_04bdf328;
  if (param_1[3] != 0) {
    (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(**(long **)puVar1 + 0x18))();
    param_1[4] = 0;
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03f597e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

