
void FUN_038f1ad0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_1[4];
  if (pvVar3 == (void *)0x0) {
    return;
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 != param_1) {
    do {
      plVar5 = (long *)plVar4[1];
      plVar2 = plVar5;
      if (*plVar4 != 0) {
        *(long **)(*plVar4 + 8) = plVar5;
        plVar2 = (long *)plVar4[1];
      }
      if (plVar2 != (long *)0x0) {
        *plVar2 = *plVar4;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      plVar4[-3] = (long)&PTR_FUN_04b1af70;
      pvVar3 = (void *)plVar4[-2];
      if (pvVar3 != (void *)0x0) {
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
      plVar2 = plVar4 + -6;
      *plVar2 = (long)&PTR_FUN_04b1af70;
      pvVar3 = (void *)plVar4[-5];
      if (pvVar3 != (void *)0x0) {
        if (*(long *)puVar1 == 0) {
          free(pvVar3);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
          }
        }
      }
      *plVar2 = param_1[3];
      param_1[3] = (long)plVar2;
      plVar4 = plVar5;
    } while (plVar5 != param_1);
    pvVar3 = (void *)param_1[4];
    if (pvVar3 == (void *)0x0) goto LAB_038f1c28;
  }
  if (*(long *)puVar1 == 0) {
    free(pvVar3);
  }
  else {
    plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
    }
  }
LAB_038f1c28:
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

