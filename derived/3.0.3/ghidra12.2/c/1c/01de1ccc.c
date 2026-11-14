
void FUN_01de1ccc(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_1[0xb];
  if (pvVar3 != (void *)0x0) {
    if (*(long *)((long)pvVar3 + 0x4d0) != 0) {
      (**(code **)(*(long *)*param_1 + 0x38))();
      *(undefined8 *)(param_1[0xb] + 0x4d0) = 0;
      pvVar3 = (void *)param_1[0xb];
    }
    pvVar4 = *(void **)((long)pvVar3 + 0x4e0);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
      *(undefined8 *)(param_1[0xb] + 0x4e0) = 0;
      pvVar3 = (void *)param_1[0xb];
    }
    pvVar4 = *(void **)((long)pvVar3 + 0x4e8);
    if (pvVar4 == (void *)0x0) {
LAB_01de1da0:
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
    else {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
      *(undefined8 *)(param_1[0xb] + 0x4e8) = 0;
      pvVar3 = (void *)param_1[0xb];
      if (pvVar3 != (void *)0x0) goto LAB_01de1da0;
    }
    param_1[0xb] = 0;
  }
  pvVar3 = (void *)param_1[0xc];
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(long *)((long)pvVar3 + 0x4d8) != 0) {
    (**(code **)(*(long *)*param_1 + 0x38))();
    *(undefined8 *)(param_1[0xc] + 0x4d8) = 0;
    pvVar3 = (void *)param_1[0xc];
  }
  pvVar4 = *(void **)((long)pvVar3 + 0x4e8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined8 *)(param_1[0xc] + 0x4e8) = 0;
    pvVar3 = (void *)param_1[0xc];
    if (pvVar3 == (void *)0x0) goto LAB_01de1e78;
  }
  if (*(long *)puVar1 == 0) {
    free(pvVar3);
  }
  else {
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
LAB_01de1e78:
  param_1[0xc] = 0;
  return;
}

