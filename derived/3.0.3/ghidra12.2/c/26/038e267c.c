
void FUN_038e267c(long *param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_FUN_04b651f0;
  lVar5 = DAT_05ae7790;
  puVar2 = PTR_DAT_04bb2698;
  if (DAT_05ae7790 == 0) goto LAB_038e2814;
  if (*(long **)(DAT_05ae7790 + 0x60) != param_1) {
    pMVar1 = (MutexType *)(DAT_05ae7790 + 0x40);
    nn::os::LockMutex(pMVar1);
    if (param_1[0x14] != 0) {
      plVar3 = param_1 + 0x11;
      param_1[0x14] = 0;
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = param_1[0x12];
      }
      if ((long *)param_1[0x12] != (long *)0x0) {
        *(long *)param_1[0x12] = *plVar3;
      }
      *plVar3 = 0;
      param_1[0x12] = 0;
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + -1;
    }
    nn::os::UnlockMutex(pMVar1);
    if (*(int *)((long)param_1 + 0xcc) - 2U < 2) {
      (**(code **)(*param_1 + 0x40))(param_1);
    }
    else if (*(int *)((long)param_1 + 0xcc) == 1) {
      (**(code **)(*param_1 + 0x50))(param_1,0);
    }
    nn::os::DestroyThread((ThreadType *)param_1[0x1d]);
    pvVar4 = (void *)param_1[0x1d];
    if (pvVar4 == (void *)0x0) {
LAB_038e2784:
      pvVar4 = (void *)param_1[0x1e];
    }
    else {
      if (*(long *)puVar2 != 0) {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
        goto LAB_038e2784;
      }
      free(pvVar4);
      pvVar4 = (void *)param_1[0x1e];
    }
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
    }
  }
  nn::os::FinalizeMessageQueue((MessageQueueType *)(param_1 + 6));
  pvVar4 = (void *)param_1[0xf];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0xf] = 0;
  }
LAB_038e2814:
  lVar5 = param_1[1];
  *param_1 = (long)&PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

