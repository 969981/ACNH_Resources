
void FUN_03b7f8d4(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b78308;
  if (*(char *)(param_1 + 0x1a) != '\0') {
    FUN_03bcafb0(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x78),param_1 + 0x10);
  }
  __ptr = (void *)param_1[0xe];
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
    param_1[0xe] = 0;
  }
  return;
}

