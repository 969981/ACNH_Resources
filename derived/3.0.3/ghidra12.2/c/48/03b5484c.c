
void FUN_03b5484c(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  __ptr = (void *)param_1[0x2c];
  *param_1 = &PTR_LAB_04b767b0;
  param_1[0x2b] = &PTR_LAB_04b76910;
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
    param_1[0x2c] = 0;
  }
  param_1[0x2d] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = &PTR_LAB_04b769b0;
  param_1[0x14] = 0;
  *param_1 = &PTR___cxa_pure_virtual_04b769d0;
  param_1[5] = &PTR_LAB_04b76950;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 10));
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = &PTR_LAB_04b76a38;
  param_1[1] = &PTR_LAB_04b76a38;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

