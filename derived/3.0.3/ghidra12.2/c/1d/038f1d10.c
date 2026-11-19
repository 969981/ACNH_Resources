
void FUN_038f1d10(long param_1,void *param_2,undefined4 param_3,byte param_4)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x80);
  if (__ptr != param_2) {
    if ((__ptr != (void *)0x0) && (*(char *)(param_1 + 0x8c) != '\0')) {
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
    *(byte *)(param_1 + 0x8c) = param_4 & 1;
    *(void **)(param_1 + 0x80) = param_2;
    *(undefined4 *)(param_1 + 0x88) = param_3;
  }
  return;
}

