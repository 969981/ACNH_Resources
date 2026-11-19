
void FUN_0386a3a0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  MutexType *pMVar6;
  long lVar7;
  
  param_1[1] = 0;
  puVar2 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
      *plVar5 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  *param_1 = (long)&PTR_FUN_04b5fda0;
  param_1[8] = (long)(param_1 + 8);
  param_1[9] = (long)(param_1 + 8);
  param_1[0xc] = (long)(param_1 + 0xb);
  param_1[0xd] = 0x3800000000;
  param_1[10] = 0x1800000000;
  param_1[0xb] = (long)(param_1 + 0xb);
  param_1[0xe] = (long)(param_1 + 0xe);
  param_1[0xf] = (long)(param_1 + 0xe);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x12] = (long)(param_1 + 0x11);
  param_1[0x13] = 0;
  puVar2 = PTR_DAT_04bb2020;
  param_1[0x10] = 0;
  param_1[0x11] = (long)(param_1 + 0x11);
  param_1[0x14] = (long)(puVar2 + 0x10);
  *(undefined1 *)((long)param_1 + 0xb6) = 0;
  param_1[0x15] = (long)&DAT_0419b684;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_03c5a110(param_1 + 0x14,param_2,0xffffffff,0);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)((long)param_1 + 0xc4) = DAT_05ae6258;
  DAT_05ae6258 = DAT_05ae6258 + 1;
  *(undefined4 *)(param_1 + 0x19) = 1;
  FUN_038e18e4(param_1 + 0x1a);
  lVar3 = DAT_05ae62d0;
  pMVar6 = (MutexType *)(DAT_05ae62d0 + 0x540);
  nn::os::LockMutex(pMVar6);
  lVar7 = *(long *)(lVar3 + 0x4f8);
  if (lVar7 != lVar3 + 0x4f0) {
    do {
      if (lVar7 == (long)*(int *)(lVar3 + 0x504) + (long)param_1) goto LAB_0386a578;
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != lVar3 + 0x4f0);
  }
  nn::os::UnlockMutex(pMVar6);
  lVar3 = DAT_05ae62d0;
  pMVar6 = (MutexType *)(DAT_05ae62d0 + 0x540);
  nn::os::LockMutex(pMVar6);
  param_1 = (long *)((long)*(int *)(lVar3 + 0x504) + (long)param_1);
  lVar7 = *(long *)(lVar3 + 0x4f0);
  *(long **)(lVar3 + 0x4f0) = param_1;
  *param_1 = lVar7;
  param_1[1] = lVar3 + 0x4f0;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = param_1;
  }
  *(int *)(lVar3 + 0x500) = *(int *)(lVar3 + 0x500) + 1;
LAB_0386a578:
  nn::os::UnlockMutex(pMVar6);
  return;
}

