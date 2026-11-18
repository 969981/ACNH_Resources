
void FUN_0329d8e4(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b18c60;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  __ptr = (void *)param_1[3];
  param_1[4] = 0;
  param_1[5] = 0;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      return;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0329d96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      return;
    }
  }
  return;
}

