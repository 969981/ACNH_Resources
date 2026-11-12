
void FUN_007422e4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 *__ptr;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x518) != 0) {
    FUN_03f45838();
  }
  if (*(long *)(param_1 + 0x470) != 0) {
    FUN_0082c640();
  }
  puVar2 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0x518);
  if (pvVar3 == (void *)0x0) {
LAB_00742398:
    pvVar3 = *(void **)(param_1 + 0x470);
  }
  else {
    FUN_03f45838(pvVar3);
    plVar4 = *(long **)((long)pvVar3 + 0x18);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
      iVar1 = *(int *)((long)pvVar3 + 0xc) + -1;
      if (((*(int *)((long)pvVar3 + 0xc) < 1) || (*(int *)((long)pvVar3 + 0xc) = iVar1, iVar1 == 0))
         && (*(long *)((long)pvVar3 + 0x10) != 0)) {
        FUN_03f44508();
        *(undefined8 *)((long)pvVar3 + 0x10) = 0;
      }
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    if (*(long *)puVar2 != 0) {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
      }
      goto LAB_00742398;
    }
    free(pvVar3);
    pvVar3 = *(void **)(param_1 + 0x470);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_0082c640(pvVar3);
    if (*(long *)puVar2 == 0) {
      free(pvVar3);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
      }
    }
  }
  pvVar3 = *(void **)(param_1 + 600);
  if (pvVar3 != (void *)0x0) {
    FUN_0082c640(pvVar3);
    if (*(long *)puVar2 == 0) {
      free(pvVar3);
      pvVar3 = *(void **)(param_1 + 0x260);
      goto joined_r0x00742424;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar3);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
    }
  }
  pvVar3 = *(void **)(param_1 + 0x260);
joined_r0x00742424:
  if (pvVar3 != (void *)0x0) {
    FUN_0082c640(pvVar3);
    if (*(long *)puVar2 == 0) {
      free(pvVar3);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
      }
    }
  }
  __ptr = *(undefined4 **)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x5e8) = 5;
  if (__ptr != (undefined4 *)0x0) {
    pvVar3 = *(void **)(__ptr + 2);
    if (pvVar3 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar3);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar3);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar3);
        }
      }
      *(undefined8 *)(__ptr + 2) = 0;
      *__ptr = 0;
    }
    if (*(long *)puVar2 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return;
}

