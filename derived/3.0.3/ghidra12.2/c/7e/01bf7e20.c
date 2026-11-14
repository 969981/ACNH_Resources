
void FUN_01bf7e20(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[7];
  if (pvVar5 == (void *)0x0) {
LAB_01bf7e94:
    plVar3 = (long *)param_1[6];
  }
  else {
    __ptr = *(void **)((long)pvVar5 + 0x10);
    if (__ptr == (void *)0x0) {
LAB_01bf7e70:
      lVar4 = *(long *)puVar1;
    }
    else {
      if (*(long *)PTR_DAT_04bb2698 != 0) {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
        goto LAB_01bf7e70;
      }
      free(__ptr);
      lVar4 = *(long *)puVar1;
    }
    if (lVar4 != 0) {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
      goto LAB_01bf7e94;
    }
    free(pvVar5);
    plVar3 = (long *)param_1[6];
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  pvVar5 = (void *)param_1[4];
  if (pvVar5 != (void *)0x0) {
    FUN_01c03ae4(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
      pvVar5 = (void *)param_1[3];
      goto joined_r0x01bf7ef4;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
    }
  }
  pvVar5 = (void *)param_1[3];
joined_r0x01bf7ef4:
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x10))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  pvVar5 = (void *)*param_1;
  if (pvVar5 != (void *)0x0) {
    FUN_01c023b4(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  puVar1 = PTR_DAT_04bb2df8 + 0x10;
  param_1[0x264] = puVar1;
  puVar2 = PTR_DAT_04bc0cb0;
  param_1[0x48] = puVar1;
  param_1[0x2e] = puVar2 + 0x10;
  return;
}

