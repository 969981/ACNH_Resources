
undefined8 FUN_007b68fc(long param_1)

{
  char cVar1;
  long *plVar2;
  void *__ptr;
  
  cVar1 = *(char *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = 0;
  DataMemoryBarrier(2,3);
  if (cVar1 != '\0') {
    nn::fs::Unmount("DLC01");
  }
  __ptr = *(void **)(param_1 + 0x20);
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return 1;
}

