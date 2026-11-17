
void FUN_0310964c(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = (void *)param_1[0x4d];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  param_1[0x4d] = 0;
  if ((long *)param_1[0x4e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4e] + 0x18))();
  }
  pvVar4 = (void *)param_1[0x5e];
  param_1[0x4e] = 0;
  if (pvVar4 != (void *)0x0) {
    __ptr = *(void **)((long)pvVar4 + 0xa0);
    if (__ptr != (void *)0x0) {
      lVar3 = *(long *)puVar1;
      if (lVar3 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(lVar3,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
      *(undefined8 *)((long)pvVar4 + 0x98) = 0;
      *(undefined8 *)((long)pvVar4 + 0xa0) = 0;
    }
    lVar3 = *(long *)puVar1;
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
  param_1[0x5e] = 0;
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

