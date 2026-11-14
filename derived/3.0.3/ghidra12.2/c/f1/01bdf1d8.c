
void FUN_01bdf1d8(long param_1)

{
  long *plVar1;
  void *pvVar2;
  
  *(undefined4 *)(param_1 + 0x98) = **(undefined4 **)PTR_DAT_04bb3448;
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_01ba6eac();
    pvVar2 = *(void **)(param_1 + 0x90);
    if (pvVar2 != (void *)0x0) {
      FUN_01ba6df4(pvVar2);
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_01ba6eac();
    pvVar2 = *(void **)(param_1 + 0x88);
    if (pvVar2 != (void *)0x0) {
      FUN_01ba6df4(pvVar2);
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}

