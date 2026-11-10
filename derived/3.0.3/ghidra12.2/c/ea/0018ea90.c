
void FUN_0018ea90(long *param_1)

{
  undefined8 *__ptr;
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  nn::os::BroadcastConditionVariable((ConditionVariableType *)*param_1);
  if (0 < (int)param_1[1]) {
    nn::os::SleepThread(1000000);
  }
  iVar1 = (int)param_1[1];
  while (0 < iVar1) {
    do {
      if (*(char *)((long)param_1 + 0xc) == '\0') {
        nn::os::SignalConditionVariable((ConditionVariableType *)*param_1);
      }
      else {
        nn::os::BroadcastConditionVariable((ConditionVariableType *)*param_1);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (0 < (int)param_1[1]) {
      nn::os::SleepThread(1000000);
    }
    iVar1 = (int)param_1[1];
  }
  nn::os::FinalizeConditionVariable((ConditionVariableType *)*param_1);
  if (*param_1 == 0) {
    return;
  }
  __ptr = (undefined8 *)(*param_1 + -0x10);
  UNRECOVERED_JUMPTABLE = (code *)*__ptr;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0018eb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

