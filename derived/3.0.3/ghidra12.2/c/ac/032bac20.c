
void FUN_032bac20(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *__ptr;
  
  puVar3 = PTR_DAT_04bb2698;
  pvVar5 = *(void **)(param_1 + 0xa0);
  if (pvVar5 == (void *)0x0) {
LAB_032bac68:
    __ptr = *(undefined8 **)(param_1 + 0x98);
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
      goto LAB_032bac68;
    }
    free(pvVar5);
    __ptr = *(undefined8 **)(param_1 + 0x98);
  }
  if (__ptr != (undefined8 *)0x0) {
    plVar4 = (long *)*__ptr;
    __ptr[6] = 0;
    __ptr[7] = 0;
    __ptr[3] = 0;
    __ptr[4] = 0;
    __ptr[5] = 0;
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
  pvVar5 = *(void **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (pvVar5 == (void *)0x0) {
LAB_032bad24:
    pvVar5 = *(void **)(param_1 + 0x78);
  }
  else {
    if (*(long *)puVar3 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
      goto LAB_032bad24;
    }
    free(pvVar5);
    pvVar5 = *(void **)(param_1 + 0x78);
  }
  if (pvVar5 != (void *)0x0) {
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
  pvVar5 = *(void **)(param_1 + 0x70);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
      plVar4 = *(long **)(param_1 + 0x68);
      goto joined_r0x032bada0;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
    }
  }
  plVar4 = *(long **)(param_1 + 0x68);
joined_r0x032bada0:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 8))();
  }
  if (*(long **)(param_1 + 0x10) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032bade0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  return;
}

