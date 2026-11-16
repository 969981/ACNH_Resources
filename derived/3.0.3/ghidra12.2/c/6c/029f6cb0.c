
void FUN_029f6cb0(long *param_1)

{
  long *plVar1;
  long lVar2;
  void *__ptr;
  
  if (*param_1 != 0) {
    FUN_029f61d4();
    __ptr = (void *)*param_1;
    if (__ptr != (void *)0x0) {
      lVar2 = (long)__ptr + 0x2018;
      do {
        lVar2 = *(long *)(lVar2 + 8);
      } while (lVar2 != (long)__ptr + 0x2018);
      lVar2 = (long)__ptr + 0x6a8;
      do {
        lVar2 = *(long *)(lVar2 + 8);
      } while (lVar2 != (long)__ptr + 0x6a8);
      FUN_038e1a84(__ptr);
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
    *param_1 = 0;
  }
  return;
}

