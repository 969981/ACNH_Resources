
void FUN_03c9f330(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1[4] != 0) {
    (**(code **)(**(long **)(*param_1 + 0x40) + 0x38))();
    param_1[4] = 0;
  }
  while ((int)param_1[3] != 0) {
    lVar2 = param_1[1];
    if ((int)param_1[3] < 1) {
      lVar2 = 0;
    }
    plVar3 = *(long **)(*param_1 + 0x40);
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar4 = lVar2 - *(int *)((long)param_1 + 0x1c);
    }
    plVar1 = (long *)(lVar4 + *(int *)((long)param_1 + 0x1c));
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(lVar4 + 0x10));
    (**(code **)(*plVar3 + 0x38))(plVar3,lVar4);
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)&DAT_05ae75e0);
  if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar2 + 0x90;
    nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
  }
  plVar3 = (long *)(*(int *)(lVar2 + 0x5c) + param_2);
  if (*plVar3 != 0) {
    *(long *)(*plVar3 + 8) = plVar3[1];
  }
  if ((long *)plVar3[1] != (long *)0x0) {
    *(long *)plVar3[1] = *plVar3;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(lVar2 + 0x58) = *(int *)(lVar2 + 0x58) + -1;
  if (lVar4 != 0) {
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05ae75e0);
  return;
}

