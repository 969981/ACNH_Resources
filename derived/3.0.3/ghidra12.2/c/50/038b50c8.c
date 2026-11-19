
void FUN_038b50c8(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04b63420;
  lVar2 = DAT_05ae71f0;
  if (DAT_05ae71e8 == param_1) {
    DAT_05ae71e8 = (undefined8 *)0x0;
    if (*(long **)(DAT_05ae71f0 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(DAT_05ae71f0 + 0x20) + 8))();
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
    nn::fs::Unmount("content");
    __ptr = *(void **)(lVar2 + 0x28);
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
        }
      }
    }
    DAT_05ae71f0 = 0;
  }
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return;
    }
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

