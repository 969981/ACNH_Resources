
void FUN_00b365f4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_LAB_04937800;
  FUN_03f45838(param_1 + 0x44);
  FUN_03f45838(param_1 + 0x44);
  plVar2 = (long *)param_1[0x47];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    iVar1 = *(int *)((long)param_1 + 0x22c) + -1;
    if (((*(int *)((long)param_1 + 0x22c) < 1) ||
        (*(int *)((long)param_1 + 0x22c) = iVar1, iVar1 == 0)) && (param_1[0x46] != 0)) {
      FUN_03f44508();
      param_1[0x46] = 0;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  param_1[0x17] = &PTR_LAB_048fc7e8;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b366b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

