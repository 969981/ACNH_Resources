
void FUN_03359de4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  void *__ptr;
  
  FUN_032d1384(param_1[2]);
  __ptr = (void *)param_1[2];
  param_1[2] = 0;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  FUN_032c6840(param_1 + 3);
  plVar2 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if ((plVar1 == (long *)0x0) || (plVar1 == plVar2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03359e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

