
void FUN_03593f10(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  pMVar1 = (MutexType *)(param_1 + 0x31);
  lVar7 = param_1[0x383d];
  nn::os::LockMutex(pMVar1);
  plVar5 = (long *)param_1[0xe];
  plVar2 = param_1 + 0xd;
  if (plVar5 != plVar2) {
    do {
      if (plVar5 == (long *)(*(int *)((long)param_1 + 0x7c) + lVar7)) {
        nn::os::UnlockMutex(pMVar1);
        FUN_03868c7c(param_1,param_1[0x383d]);
        goto LAB_03593f94;
      }
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != plVar2);
  }
  nn::os::UnlockMutex(pMVar1);
LAB_03593f94:
  lVar7 = param_1[0x383c];
  nn::os::LockMutex(pMVar1);
  plVar5 = (long *)param_1[0xe];
  if (plVar5 != plVar2) {
    do {
      if (plVar5 == (long *)(*(int *)((long)param_1 + 0x7c) + lVar7)) {
        nn::os::UnlockMutex(pMVar1);
        FUN_03868c7c(param_1,param_1[0x383c]);
        goto LAB_03593fe8;
      }
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != plVar2);
  }
  nn::os::UnlockMutex(pMVar1);
LAB_03593fe8:
  lVar7 = (**(code **)(*param_1 + 0x218))(param_1);
  if (lVar7 != 0) {
    iVar3 = *(int *)(lVar7 + 0x48);
    if (iVar3 == 6 || iVar3 == 4) {
      uVar4 = 5;
    }
    else {
      if (iVar3 != 3) {
        return;
      }
      lVar6 = *(long *)(lVar7 + 0x58);
      FUN_038e2f80(lVar6 + 0x110);
      plVar2 = (long *)(*(int *)(lVar6 + 0x74) + lVar7);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(lVar6 + 0x70) = *(int *)(lVar6 + 0x70) + -1;
      FUN_038e3040(lVar6 + 0x110);
      uVar4 = 2;
      *(undefined8 *)(lVar7 + 0x58) = 0;
    }
    *(undefined4 *)(lVar7 + 0x48) = uVar4;
  }
  return;
}

