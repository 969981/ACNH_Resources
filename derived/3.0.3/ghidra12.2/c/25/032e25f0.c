
void FUN_032e25f0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04b1c300;
  if (param_1[0xe] != 0) {
    FUN_032e28a0(param_1[0xe],param_1);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  if ((long *)param_1[9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[9] + 8))();
    param_1[9] = 0;
  }
  if (*(int *)((long)param_1 + 0x34) - 1U < 2) {
    lVar2 = *(long *)PTR_DAT_04bb29d0;
    do {
      nn::os::ConvertToTimeSpan(lVar2 / 1000);
      nn::os::SleepThread();
    } while (*(int *)((long)param_1 + 0x34) - 1U < 2);
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 6) = 0xdead;
    if ((long *)param_1[9] != (long *)0x0) {
      (**(code **)(*(long *)param_1[9] + 8))();
    }
  }
  else {
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 6) = 0xdead;
  }
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return;
    }
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

