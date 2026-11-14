
void FUN_01badff0(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_4c;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb28f8;
  lVar5 = *(long *)PTR_DAT_04bb28f8;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x29b0));
  iVar2 = *(int *)(lVar5 + 0x29ec);
  lVar6 = lVar5 + 0x29d8;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar5 + 0x29d8) {
      lVar6 = 0;
      break;
    }
  } while (*(int *)(lVar6 + -(long)iVar2 + 0x10) != *(int *)(param_1 + 8));
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x29b0));
  if ((lVar6 != 0) && (lVar6 = lVar6 + -(long)iVar2, lVar6 != 0)) {
    local_44 = 0;
    local_4c = 0x30000006e;
    while (plVar4 = (long *)FUN_01bc0860(lVar6,&local_4c,1), plVar4 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar6 + 0x2c) + (long)plVar4);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + -1;
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  lVar5 = *(long *)puVar3;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x29b0));
  iVar2 = *(int *)(lVar5 + 0x29ec);
  lVar6 = lVar5 + 0x29d8;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar5 + 0x29d8) {
      lVar6 = 0;
      break;
    }
  } while (*(int *)(lVar6 + -(long)iVar2 + 0x10) != *(int *)(param_1 + 8));
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x29b0));
  if ((lVar6 != 0) && (lVar6 = lVar6 + -(long)iVar2, lVar6 != 0)) {
    local_44 = 0;
    local_4c = 0x50000006e;
    while (plVar4 = (long *)FUN_01bc0860(lVar6,&local_4c,1), plVar4 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar6 + 0x2c) + (long)plVar4);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + -1;
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  lVar5 = *(long *)puVar3;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x29b0));
  iVar2 = *(int *)(lVar5 + 0x29ec);
  lVar6 = lVar5 + 0x29d8;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar5 + 0x29d8) {
      lVar6 = 0;
      break;
    }
  } while (*(int *)(lVar6 + -(long)iVar2 + 0x10) != *(int *)(param_1 + 8));
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x29b0));
  if ((lVar6 != 0) && (lVar6 = lVar6 + -(long)iVar2, lVar6 != 0)) {
    local_44 = 0;
    local_4c = 0x60000006e;
    while (plVar4 = (long *)FUN_01bc0860(lVar6,&local_4c,1), plVar4 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar6 + 0x2c) + (long)plVar4);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + -1;
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  lVar5 = *(long *)puVar3;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x29b0));
  iVar2 = *(int *)(lVar5 + 0x29ec);
  lVar6 = lVar5 + 0x29d8;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar5 + 0x29d8) {
      lVar6 = 0;
      break;
    }
  } while (*(int *)(lVar6 + -(long)iVar2 + 0x10) != *(int *)(param_1 + 8));
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x29b0));
  if ((lVar6 != 0) && (lVar6 = lVar6 + -(long)iVar2, lVar6 != 0)) {
    local_4c = 0xf0000006e;
    local_44 = 1;
    while (plVar4 = (long *)FUN_01bc0860(lVar6,&local_4c,1), plVar4 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar6 + 0x2c) + (long)plVar4);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + -1;
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  return;
}

