
void FUN_03bdd1c0(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b7b7d0;
  if (param_1[0x135] != 0) {
    __ptr = (void *)(param_1[0x135] + -8);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0x135] = 0;
  }
  if (*(char *)((long)param_1 + 0x989) != '\0') {
    if (DAT_05aec218 != (long *)0x0) {
      (**(code **)(*DAT_05aec218 + 8))();
    }
    DAT_05aec218 = (long *)0x0;
  }
  FUN_03beb51c(param_1);
  return;
}

