
void FUN_0275dc54(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04a90ce0;
  if (param_1[6] != 0) {
    (**(code **)(*(long *)param_1[5] + 0x38))();
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)param_1[1] + 0x38))();
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0275dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

