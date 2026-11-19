
void FUN_03868660(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  *param_1 = &PTR_LAB_04b5fc00;
  FUN_03868800();
  puVar2 = PTR_DAT_04bb2698;
  pvVar4 = (void *)param_1[2];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x31));
  iVar1 = *(int *)(param_1 + 0xc);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar3 = (long *)param_1[10];
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      iVar1 = *(int *)(param_1 + 0xc) + -1;
      *(int *)(param_1 + 0xc) = iVar1;
      if ((plVar3 != (long *)0x0) &&
         (plVar3 = (long *)((long)plVar3 - (long)*(int *)((long)param_1 + 100)),
         plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x18))();
        iVar1 = *(int *)(param_1 + 0xc);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x31));
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 8))();
    param_1[0x14] = 0;
  }
  FUN_038e1a84(param_1 + 0x2d);
  if (*(char *)((long)param_1 + 0x96) != '\0') {
    (**(code **)(param_1[0x10] + 0x18))(param_1 + 0x10);
    pvVar4 = (void *)param_1[0x11];
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
    *(undefined1 *)((long)param_1 + 0x96) = 0;
  }
  return;
}

