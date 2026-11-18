
void FUN_032b6ac4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *__ptr;
  void *pvVar5;
  
  puVar3 = PTR_DAT_04bb2698;
  if (param_1[3] != 0) {
    FUN_032c6840();
    __ptr = (undefined8 *)param_1[3];
    param_1[3] = 0;
    if (__ptr != (undefined8 *)0x0) {
      FUN_032c6840(__ptr);
      plVar4 = (long *)*__ptr;
      __ptr[4] = 0;
      __ptr[5] = 0;
      __ptr[3] = 0;
      if (plVar4 != (long *)0x0) {
        lVar1 = __ptr[1];
        lVar2 = __ptr[2];
        __ptr[2] = 0;
        *__ptr = 0;
        __ptr[1] = 0;
        if ((undefined8 *)*plVar4 == __ptr) {
          *plVar4 = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x10) = lVar2;
        }
      }
      __ptr[1] = 0;
      __ptr[2] = 0;
      *__ptr = 0;
      if (*(long *)puVar3 == 0) {
        free(__ptr);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar3,__ptr);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        }
      }
    }
  }
  FUN_03286f10(*param_1);
  pvVar5 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar5 != (void *)0x0) {
    FUN_03286c9c(pvVar5);
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
  }
  FUN_032d1384(param_1[2]);
  pvVar5 = (void *)param_1[2];
  param_1[2] = 0;
  if (pvVar5 != (void *)0x0) {
    FUN_032d0688(pvVar5);
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
  }
  FUN_032d1384(param_1[1]);
  pvVar5 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar5 != (void *)0x0) {
    FUN_032d0688(pvVar5);
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
      return;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032b6c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      return;
    }
  }
  return;
}

