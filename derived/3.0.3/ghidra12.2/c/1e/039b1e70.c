
void FUN_039b1e70(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  
  *param_1 = &PTR_FUN_04b6a550;
  puVar1 = PTR_DAT_04bb2698;
  piVar5 = (int *)(param_1 + 4);
  if (*piVar5 != 0) {
    plVar4 = (long *)param_1[5];
    lVar6 = (long)*piVar5 << 3;
    do {
      plVar2 = (long *)*plVar4;
      pvVar3 = (void *)plVar2[10];
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
        plVar2 = (long *)*plVar4;
      }
      (**(code **)(*plVar2 + 8))();
      plVar4 = plVar4 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  piVar7 = (int *)(param_1 + 2);
  plVar4 = (long *)param_1[3];
  if (*piVar7 != 0) {
    lVar6 = (long)*piVar7 << 3;
    do {
      plVar2 = (long *)*plVar4;
      pvVar3 = (void *)plVar2[10];
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
        plVar2 = (long *)*plVar4;
      }
      (**(code **)(*plVar2 + 8))();
      plVar4 = plVar4 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    plVar4 = (long *)param_1[3];
  }
  if (plVar4 != (long *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(plVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,plVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
      }
    }
    piVar7[0] = 0;
    piVar7[1] = 0;
    param_1[3] = 0;
  }
  pvVar3 = (void *)param_1[5];
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
    piVar5[0] = 0;
    piVar5[1] = 0;
    param_1[5] = 0;
  }
  return;
}

