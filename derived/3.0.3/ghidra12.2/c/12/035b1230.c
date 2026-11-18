
void FUN_035b1230(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)param_1[5];
  *param_1 = &PTR_FUN_04b3e850;
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = *(long **)PTR_DAT_04bdf328;
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar1);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x035b12c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

