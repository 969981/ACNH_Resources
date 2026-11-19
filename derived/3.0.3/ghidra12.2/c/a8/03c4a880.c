
void FUN_03c4a880(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  while (0 < *(int *)(param_1 + 0x20)) {
    plVar1 = *(long **)(param_1 + 0x18);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    if ((plVar1 == (long *)0x0) ||
       (lVar4 = (long)plVar1 - (long)*(int *)(param_1 + 0x24), lVar4 == 0)) break;
    lVar3 = *(long *)(param_1 + 8);
    nn::os::LockMutex((MutexType *)(lVar3 + 0xf0));
    plVar1 = (long *)(lVar4 + *(int *)(lVar3 + 0x6c));
    plVar2 = (long *)(lVar3 + 0x58);
    lVar4 = *plVar2;
    *plVar2 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar2;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar3 + 0xf0));
  }
  do {
    if (*(int *)(param_1 + 0x38) < 1) break;
    plVar1 = *(long **)(param_1 + 0x30);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    if ((plVar1 == (long *)0x0) ||
       (lVar4 = (long)plVar1 - (long)*(int *)(param_1 + 0x3c), lVar4 == 0)) break;
    lVar3 = *(long *)(param_1 + 8);
    nn::os::LockMutex((MutexType *)(lVar3 + 0xf0));
    plVar1 = (long *)(lVar4 + *(int *)(lVar3 + 0x6c));
    plVar2 = (long *)(lVar3 + 0x58);
    lVar4 = *plVar2;
    *plVar2 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar2;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar3 + 0xf0));
  } while( true );
LAB_03c4aa14:
  if (*(int *)(param_1 + 0x50) < 1) goto LAB_03c4aac4;
  plVar1 = *(long **)(param_1 + 0x48);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  if ((plVar1 == (long *)0x0) || (lVar4 = (long)plVar1 - (long)*(int *)(param_1 + 0x54), lVar4 == 0)
     ) goto LAB_03c4aac4;
  lVar3 = *(long *)(param_1 + 8);
  nn::os::LockMutex((MutexType *)(lVar3 + 0xf0));
  plVar1 = (long *)(lVar4 + *(int *)(lVar3 + 0x6c));
  plVar2 = (long *)(lVar3 + 0x58);
  lVar4 = *plVar2;
  *plVar2 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar2;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0xf0));
  goto LAB_03c4aa14;
LAB_03c4aac4:
  if (*(int *)(param_1 + 0x68) < 1) goto LAB_03c4ab74;
  plVar1 = *(long **)(param_1 + 0x60);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  if ((plVar1 == (long *)0x0) || (lVar4 = (long)plVar1 - (long)*(int *)(param_1 + 0x6c), lVar4 == 0)
     ) goto LAB_03c4ab74;
  lVar3 = *(long *)(param_1 + 8);
  nn::os::LockMutex((MutexType *)(lVar3 + 0xf0));
  plVar1 = (long *)(lVar4 + *(int *)(lVar3 + 0x6c));
  plVar2 = (long *)(lVar3 + 0x58);
  lVar4 = *plVar2;
  *plVar2 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar2;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0xf0));
  goto LAB_03c4aac4;
LAB_03c4ab74:
  if (*(int *)(param_1 + 0x80) < 1) goto LAB_03c4ac24;
  plVar1 = *(long **)(param_1 + 0x78);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
  if ((plVar1 == (long *)0x0) || (lVar4 = (long)plVar1 - (long)*(int *)(param_1 + 0x84), lVar4 == 0)
     ) goto LAB_03c4ac24;
  lVar3 = *(long *)(param_1 + 8);
  nn::os::LockMutex((MutexType *)(lVar3 + 0xf0));
  plVar1 = (long *)(lVar4 + *(int *)(lVar3 + 0x6c));
  plVar2 = (long *)(lVar3 + 0x58);
  lVar4 = *plVar2;
  *plVar2 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar2;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0xf0));
  goto LAB_03c4ab74;
LAB_03c4ac24:
  if (*(int *)(param_1 + 0x98) < 1) goto LAB_03c4acd4;
  plVar1 = *(long **)(param_1 + 0x90);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
  if ((plVar1 == (long *)0x0) || (lVar4 = (long)plVar1 - (long)*(int *)(param_1 + 0x9c), lVar4 == 0)
     ) goto LAB_03c4acd4;
  lVar3 = *(long *)(param_1 + 8);
  nn::os::LockMutex((MutexType *)(lVar3 + 0xf0));
  plVar1 = (long *)(lVar4 + *(int *)(lVar3 + 0x6c));
  plVar2 = (long *)(lVar3 + 0x58);
  lVar4 = *plVar2;
  *plVar2 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar2;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0xf0));
  goto LAB_03c4ac24;
LAB_03c4acd4:
  if (*(int *)(param_1 + 0xb0) < 1) {
LAB_03c4ad84:
    while( true ) {
      if (*(int *)(param_1 + 200) < 1) {
        return;
      }
      plVar1 = *(long **)(param_1 + 0xc0);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
      if (plVar1 == (long *)0x0) break;
      lVar4 = (long)plVar1 - (long)*(int *)(param_1 + 0xcc);
      if (lVar4 == 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 8);
      nn::os::LockMutex((MutexType *)(lVar3 + 0xf0));
      plVar1 = (long *)(lVar4 + *(int *)(lVar3 + 0x6c));
      plVar2 = (long *)(lVar3 + 0x58);
      lVar4 = *plVar2;
      *plVar2 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar2;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0xf0));
    }
    return;
  }
  plVar1 = *(long **)(param_1 + 0xa8);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
  if ((plVar1 == (long *)0x0) || (lVar4 = (long)plVar1 - (long)*(int *)(param_1 + 0xb4), lVar4 == 0)
     ) goto LAB_03c4ad84;
  lVar3 = *(long *)(param_1 + 8);
  nn::os::LockMutex((MutexType *)(lVar3 + 0xf0));
  plVar1 = (long *)(lVar4 + *(int *)(lVar3 + 0x6c));
  plVar2 = (long *)(lVar3 + 0x58);
  lVar4 = *plVar2;
  *plVar2 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar2;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0xf0));
  goto LAB_03c4acd4;
}

