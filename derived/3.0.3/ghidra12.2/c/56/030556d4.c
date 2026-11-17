
void FUN_030556d4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x4e] != 0) {
    FUN_0343ff0c();
    pvVar4 = (void *)param_1[0x4e];
    if (pvVar4 != (void *)0x0) {
      FUN_0343fd20(pvVar4);
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
    }
    param_1[0x4e] = 0;
  }
  if (param_1[0x4f] != 0) {
    FUN_0343ff0c();
    pvVar4 = (void *)param_1[0x4f];
    if (pvVar4 != (void *)0x0) {
      FUN_0343fd20(pvVar4);
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
    }
    param_1[0x4f] = 0;
  }
  pvVar4 = (void *)param_1[0x50];
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
  }
  pvVar4 = (void *)param_1[0x43];
  param_1[0x50] = 0;
  if (pvVar4 != (void *)0x0) {
    if (*(long **)((long)pvVar4 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 0x18) + 8))();
    }
    *(undefined8 *)((long)pvVar4 + 0x18) = 0;
    if (*(long **)((long)pvVar4 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 0x20) + 8))();
    }
    *(undefined8 *)((long)pvVar4 + 0x20) = 0;
    if (*(long **)((long)pvVar4 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 0x28) + 8))();
    }
    *(undefined8 *)((long)pvVar4 + 0x28) = 0;
    if (*(long **)((long)pvVar4 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 0x30) + 8))();
    }
    lVar3 = *(long *)puVar1;
    *(undefined8 *)((long)pvVar4 + 0x30) = 0;
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  param_1[0x43] = 0;
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

