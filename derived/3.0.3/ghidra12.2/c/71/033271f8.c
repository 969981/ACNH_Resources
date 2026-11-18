
void FUN_033271f8(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_1[9];
  if (pvVar3 == (void *)0x0) {
LAB_0332725c:
    pvVar3 = (void *)param_1[8];
  }
  else {
    if (*(long **)((long)pvVar3 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x5a0) + 8))();
    }
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_0332725c;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[8];
  }
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x5a0) + 8))();
    }
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
  pvVar3 = (void *)param_1[7];
  if (pvVar3 == (void *)0x0) {
LAB_0332730c:
    pvVar3 = (void *)param_1[6];
  }
  else {
    if (*(long **)((long)pvVar3 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x5a0) + 8))();
    }
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_0332730c;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[6];
  }
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x5a0) + 8))();
    }
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
  pvVar3 = (void *)param_1[5];
  if (pvVar3 == (void *)0x0) {
LAB_033273bc:
    pvVar3 = (void *)param_1[4];
  }
  else {
    if (*(long **)((long)pvVar3 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x5a0) + 8))();
    }
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_033273bc;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[4];
  }
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x5a0) + 8))();
    }
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
  pvVar3 = (void *)param_1[3];
  if (pvVar3 == (void *)0x0) {
LAB_0332746c:
    pvVar3 = (void *)param_1[2];
  }
  else {
    if (*(long **)((long)pvVar3 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x5a0) + 8))();
    }
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_0332746c;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[2];
  }
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x5a0) + 8))();
    }
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
  pvVar3 = (void *)param_1[1];
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x5a0) + 8))();
    }
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      pvVar3 = (void *)*param_1;
      goto joined_r0x0332757c;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
  pvVar3 = (void *)*param_1;
joined_r0x0332757c:
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x5a0) + 8))();
    }
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      return;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0332756c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      return;
    }
  }
  return;
}

