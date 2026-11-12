
void FUN_00961cfc(long *param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = (void *)param_1[10];
  *param_1 = (long)&PTR_FUN_0492a868;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
  }
  pvVar5 = (void *)param_1[0xe];
  if (pvVar5 != (void *)0x0) {
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  pvVar5 = (void *)param_1[0xc];
  if (pvVar5 != (void *)0x0) {
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  *param_1 = (long)&PTR_FUN_0492a700;
  lVar4 = DAT_04cfae30;
  if ((param_1[2] == 0 && param_1[1] == 0) || (DAT_04cfae30 == 0)) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_04cfae30 + 0x50);
  nn::os::LockMutex(pMVar1);
  plVar3 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
  if (*plVar3 != 0) {
    *(long *)(*plVar3 + 8) = plVar3[1];
  }
  if ((long *)plVar3[1] != (long *)0x0) {
    *(long *)plVar3[1] = *plVar3;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
  nn::os::UnlockMutex(pMVar1);
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}

