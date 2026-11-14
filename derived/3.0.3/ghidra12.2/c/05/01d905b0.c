
void FUN_01d905b0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  *(undefined1 *)(param_1 + 0x261) = 0;
  pvVar6 = *(void **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar6 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x90);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 8))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 8))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0xe8);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x1f8);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    if (0 < *(int *)(param_1 + 0x200)) {
      lVar3 = 0;
      puVar4 = *(undefined8 **)(param_1 + 0x210);
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x208) + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *puVar5 = puVar4;
        *(undefined8 **)(param_1 + 0x210) = puVar5;
        puVar4 = puVar5;
      } while (lVar3 < *(int *)(param_1 + 0x200));
    }
    pvVar6 = *(void **)(param_1 + 0x218);
    *(undefined4 *)(param_1 + 0x200) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x21c) = 0;
    *(undefined8 *)(param_1 + 0x214) = 0;
    *(undefined8 *)(param_1 + 0x20c) = 0;
    *(undefined8 *)(param_1 + 0x204) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x68);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x70);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_0082c640();
    pvVar6 = *(void **)(param_1 + 0x58);
    if (pvVar6 != (void *)0x0) {
      FUN_0082c640(pvVar6);
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x80);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return;
}

