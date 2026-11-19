
void FUN_03b3cf2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_03b3d0d0();
    if (DAT_05aebb78 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(DAT_05aebb78 + 8);
    }
    nn::os::LockMutex((MutexType *)(lVar5 + 0x88));
    plVar3 = (long *)(*(int *)(lVar5 + 0x14) + param_1);
    lVar1 = *plVar3;
    plVar4 = (long *)plVar3[1];
    if (plVar4 != (long *)0x0 || lVar1 != 0) {
      if (lVar1 != 0) {
        *(long **)(lVar1 + 8) = plVar4;
        plVar4 = (long *)plVar3[1];
      }
      if (plVar4 != (long *)0x0) {
        *plVar4 = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x88));
    nn::os::LockMutex((MutexType *)(param_1 + 0x88));
    puVar2 = PTR_DAT_04bb2698;
    pvVar6 = *(void **)(param_1 + 0x60);
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
    pvVar6 = *(void **)(param_1 + 0xa8);
    if (pvVar6 != (void *)0x0) {
      lVar5 = *(long *)puVar2;
      if (lVar5 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(lVar5,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    plVar3 = *(long **)(param_1 + 0x150);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      pvVar6 = (void *)plVar3[1];
      if (*(long **)(param_1 + 0x150) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x150) + 8))();
      }
      *(undefined8 *)(param_1 + 0x150) = 0;
      if (pvVar6 != (void *)0x0) {
        lVar5 = *(long *)puVar2;
        if (lVar5 == 0) {
          free(pvVar6);
        }
        else {
          plVar3 = (long *)FUN_038cb610(lVar5,pvVar6);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}

