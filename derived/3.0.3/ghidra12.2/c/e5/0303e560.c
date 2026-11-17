
void FUN_0303e560(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *__ptr;
  undefined **local_60;
  long *plStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[0x69];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    param_1[0x69] = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  pvVar5 = (void *)param_1[0x3856];
  if (pvVar5 != (void *)0x0) {
    lVar3 = (long)pvVar5 + 0x1a648;
    do {
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != (long)pvVar5 + 0x1a648);
    plStack_58 = (long *)((long)pvVar5 + 0x48);
    local_50 = &LAB_03046158;
    uStack_48 = 0;
    local_60 = &PTR_LAB_04af59f8;
    if (*plStack_58 != 0) {
      FUN_03046160(*plStack_58,&local_60);
    }
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
      __ptr = (undefined8 *)param_1[0x3855];
      goto joined_r0x0303e640;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
    }
  }
  __ptr = (undefined8 *)param_1[0x3855];
joined_r0x0303e640:
  if (__ptr != (undefined8 *)0x0) {
    puVar4 = __ptr + 0x19;
    do {
      puVar4 = (undefined8 *)puVar4[1];
    } while (puVar4 != __ptr + 0x19);
    pvVar5 = (void *)__ptr[5];
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
      __ptr[4] = 0;
      __ptr[5] = 0;
    }
    pvVar5 = (void *)__ptr[1];
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
      *__ptr = 0;
      __ptr[1] = 0;
    }
    if (*(long *)puVar1 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  FUN_034129e0(param_1 + 0x6a);
  FUN_031356e0(param_1 + 0x44);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

