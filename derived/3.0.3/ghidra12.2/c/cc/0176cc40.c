
void FUN_0176cc40(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04bbe440;
  *param_1 = (long)&PTR_FUN_049c2ef8;
  param_1[0x4f] = (long)(puVar2 + 0x10);
  if ((param_1[0x51] != 0 || param_1[0x50] != 0) && (lVar5 = *(long *)PTR_DAT_04bbe480, lVar5 != 0))
  {
    nn::os::LockMutex((MutexType *)(lVar5 + 0x28));
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x5c) + 0x278);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar5 + 0x58) = *(int *)(lVar5 + 0x58) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x28));
  }
  *param_1 = (long)(PTR_DAT_04bb2e88 + 0x10);
  if ((long *)param_1[0x16] != param_1 + 0x15) {
    lVar4 = (long)*(int *)((long)param_1 + 0xbc);
    plVar3 = (long *)(param_1[0x16] - lVar4);
    lVar5 = (long)plVar3 + lVar4;
    do {
      plVar1 = (long *)((long)plVar3 + (long)*(int *)((long)param_1 + 0xbc));
      lVar5 = *(long *)(lVar5 + 8);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      (**(code **)(*plVar3 + 0x28))();
      plVar3 = (long *)(lVar5 - lVar4);
    } while (plVar3 != (long *)((long)(param_1 + 0x15) - lVar4));
  }
  return;
}

