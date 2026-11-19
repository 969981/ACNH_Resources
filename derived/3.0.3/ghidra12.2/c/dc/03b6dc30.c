
undefined8 * FUN_03b6dc30(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *__ptr;
  void *pvVar4;
  
  *param_1 = &PTR_FUN_04b77dc0;
  param_1[0xd] = &PTR_LAB_04b77e30;
  if (*(char *)((long)param_1 + 0x74) != '\0') {
    if ((param_1[0x11] != 0) && (0 < *(int *)(param_1 + 0xe))) {
      lVar3 = *(long *)PTR_DAT_04bb29d0;
      do {
        nn::os::ConvertToTimeSpan(lVar3 / 10000);
        nn::os::SleepThread();
      } while (0 < *(int *)(param_1 + 0xe));
    }
    param_1[0x19] = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    param_1[0x1b] = 0;
    *(undefined8 *)(param_1[0x34] + 8) = 0;
    *(undefined8 *)(param_1[0x34] + 0x20) = 0;
    *(undefined8 *)(param_1[0x34] + 0x38) = 0;
    *(undefined1 *)((long)param_1 + 0x74) = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (undefined8 *)param_1[0x12];
  if (__ptr == (undefined8 *)0x0) goto LAB_03b6de98;
  pvVar4 = (void *)*__ptr;
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
    __ptr = (undefined8 *)param_1[0x12];
  }
  pvVar4 = (void *)__ptr[1];
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
    __ptr = (undefined8 *)param_1[0x12];
  }
  pvVar4 = (void *)__ptr[2];
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
    __ptr = (undefined8 *)param_1[0x12];
  }
  pvVar4 = (void *)__ptr[3];
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
    __ptr = (undefined8 *)param_1[0x12];
  }
  pvVar4 = (void *)__ptr[4];
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
    __ptr = (undefined8 *)param_1[0x12];
  }
  pvVar4 = (void *)__ptr[5];
  if (pvVar4 == (void *)0x0) {
LAB_03b6de64:
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
  else {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
      __ptr = (undefined8 *)param_1[0x12];
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
      __ptr = (undefined8 *)param_1[0x12];
    }
    if (__ptr != (undefined8 *)0x0) goto LAB_03b6de64;
  }
  param_1[0x12] = 0;
LAB_03b6de98:
  pvVar4 = (void *)param_1[0x34];
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
    param_1[0x34] = 0;
  }
  pvVar4 = (void *)param_1[0x25];
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
    param_1[0x25] = 0;
  }
  FUN_038e1e68(param_1 + 0x1c);
  return param_1;
}

