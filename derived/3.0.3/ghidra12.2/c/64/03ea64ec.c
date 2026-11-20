
/* WARNING: Type propagation algorithm not settling */

void FUN_03ea64ec(undefined8 *param_1)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *__ptr;
  void *pvVar4;
  
  __ptr = (undefined8 *)param_1[10];
  *param_1 = &PTR_FUN_04ba4180;
  puVar2 = PTR_DAT_04bb2698;
  pvVar4 = (void *)*__ptr;
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
      __ptr = (undefined8 *)param_1[10];
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
      __ptr = (undefined8 *)param_1[10];
    }
    if (__ptr == (undefined8 *)0x0) {
      pvVar4 = (void *)param_1[0xc];
      goto joined_r0x03ea65b4;
    }
  }
  if (*(long *)puVar2 == 0) {
    free(__ptr);
  }
  else {
    plVar3 = (long *)FUN_038cb610(*(long *)puVar2,__ptr);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
    }
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  pvVar4 = (void *)param_1[0xc];
joined_r0x03ea65b4:
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)param_1[0xe];
  }
  else {
    if (*(long *)puVar2 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    pvVar4 = (void *)param_1[0xe];
  }
  if (pvVar4 == (void *)0x0) {
    cVar1 = *(char *)((long)param_1 + 0x46);
  }
  else {
    if (*(long *)puVar2 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    cVar1 = *(char *)((long)param_1 + 0x46);
  }
  if (cVar1 != '\0') {
    (**(code **)(param_1[6] + 0x18))(param_1 + 6);
    pvVar4 = (void *)param_1[7];
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x46) = 0;
  }
  return;
}

