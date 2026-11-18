
void FUN_0330833c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_1[4];
  if (pvVar3 == (void *)0x0) {
LAB_0330838c:
    pvVar3 = (void *)param_1[3];
  }
  else {
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_0330838c;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[3];
  }
  if (pvVar3 != (void *)0x0) {
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
  }
  pvVar3 = (void *)param_1[2];
  if (pvVar3 == (void *)0x0) {
LAB_03308414:
    pvVar3 = (void *)param_1[1];
  }
  else {
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_03308414;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[1];
  }
  if (pvVar3 != (void *)0x0) {
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      pvVar3 = (void *)*param_1;
      goto joined_r0x0330844c;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      pvVar3 = (void *)*param_1;
      goto joined_r0x0330844c;
    }
  }
  pvVar3 = (void *)*param_1;
joined_r0x0330844c:
  if (pvVar3 != (void *)0x0) {
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      return;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033084a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      return;
    }
  }
  return;
}

