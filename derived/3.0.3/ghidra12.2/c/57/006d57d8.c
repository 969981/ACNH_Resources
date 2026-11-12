
void FUN_006d57d8(long param_1)

{
  long *plVar1;
  long lVar2;
  void *__ptr;
  
  if (*(long *)(param_1 + 200) != 0) {
    lVar2 = *(long *)(param_1 + 0xd0);
    nn::os::LockMutex((MutexType *)(lVar2 + 0x68));
    FUN_006d3a70(lVar2);
    FUN_006d3ba0(lVar2);
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x68));
    *(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x88) = 0;
    FUN_006d48dc(*(undefined8 *)(param_1 + 200));
    __ptr = *(void **)(param_1 + 200);
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
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}

