
void FUN_01da58d4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *__ptr;
  void *__ptr_00;
  
  *param_1 = &PTR_FUN_04a5afe0;
  FUN_038e1a84(param_1 + 0x39);
  __ptr = (undefined8 *)param_1[4];
  param_1[3] = &PTR_FUN_04a5b000;
  if (__ptr != (undefined8 *)0x0) {
    __ptr_00 = (void *)__ptr[1];
    if (__ptr_00 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr_00);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr_00);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,__ptr_00);
        }
      }
      *__ptr = 0;
      __ptr[1] = 0;
      __ptr = (undefined8 *)param_1[4];
      if (__ptr == (undefined8 *)0x0) goto joined_r0x01da59cc;
    }
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
joined_r0x01da59cc:
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01da59ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

