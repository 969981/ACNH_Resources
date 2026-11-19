
void FUN_03868eb8(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  (**(code **)(*param_1 + 0x80))();
  (**(code **)(*param_1 + 0x88))(param_1);
  iVar2 = (int)param_1[0x15];
  if (iVar2 == 7) {
    lVar4 = param_1[9];
    if (lVar4 == 0) {
      lVar4 = param_1[0x13];
      if (lVar4 != 0) {
        nn::os::LockMutex((MutexType *)(lVar4 + 0xf0));
        plVar1 = (long *)((long)*(int *)(lVar4 + 0x6c) + (long)param_1);
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(lVar4 + 0x68) = *(int *)(lVar4 + 0x68) + -1;
        nn::os::UnlockMutex((MutexType *)(lVar4 + 0xf0));
        FUN_0386af30(lVar4,param_1);
      }
    }
    else {
      FUN_03869930(lVar4,param_1);
      nn::os::LockMutex((MutexType *)(lVar4 + 0x188));
      plVar1 = (long *)((long)*(int *)(lVar4 + 0x7c) + (long)param_1);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + -1;
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x188));
    }
    uVar3 = 8;
  }
  else if (iVar2 == 6) {
    uVar3 = 3;
  }
  else {
    if (iVar2 != 5) goto LAB_038690a8;
    lVar4 = param_1[9];
    if (lVar4 == 0) {
      lVar4 = param_1[0x13];
      if (lVar4 == 0) {
        uVar3 = 2;
      }
      else {
        nn::os::LockMutex((MutexType *)(lVar4 + 0xf0));
        plVar1 = (long *)((long)*(int *)(lVar4 + 0x6c) + (long)param_1);
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(lVar4 + 0x68) = *(int *)(lVar4 + 0x68) + -1;
        nn::os::UnlockMutex((MutexType *)(lVar4 + 0xf0));
        FUN_0386af30(lVar4,param_1);
        uVar3 = 2;
      }
    }
    else {
      FUN_03869930(lVar4,param_1);
      nn::os::LockMutex((MutexType *)(lVar4 + 0x188));
      plVar1 = (long *)((long)*(int *)(lVar4 + 0x7c) + (long)param_1);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + -1;
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x188));
      uVar3 = 2;
    }
  }
  *(undefined4 *)(param_1 + 0x15) = uVar3;
LAB_038690a8:
  *(undefined1 *)((long)param_1 + 0x164) = 0;
  return;
}

