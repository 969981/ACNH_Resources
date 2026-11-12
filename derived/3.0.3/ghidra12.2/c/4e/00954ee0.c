
void FUN_00954ee0(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  if (*(int *)(*(long *)PTR_DAT_04bb2110 + 8) == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)**(long **)(*(long *)PTR_DAT_04bb2110 + 0x10);
  }
  if ((param_2 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0x518);
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        lVar3 = *(long *)(param_1 + 0x520);
        uVar1 = uVar5;
        if (uVar2 <= uVar5) {
          uVar1 = 0;
        }
        nn::os::LockMutex((MutexType *)(plVar4 + 0x4d));
        (**(code **)(*plVar4 + 0x38))(plVar4,lVar3 + (ulong)uVar1 * 0xe8);
        nn::os::UnlockMutex((MutexType *)(plVar4 + 0x4d));
        uVar2 = uVar5;
        if (*(uint *)(param_1 + 0x518) <= uVar5) {
          uVar2 = 0;
        }
        uVar5 = uVar5 + 1;
        **(undefined1 **)(*(long *)(param_1 + 0x520) + (ulong)uVar2 * 0xe8 + 0x58) = 0;
        uVar2 = *(uint *)(param_1 + 0x518);
      } while ((int)uVar5 < (int)uVar2);
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x508);
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        lVar3 = *(long *)(param_1 + 0x510);
        uVar1 = uVar5;
        if (uVar2 <= uVar5) {
          uVar1 = 0;
        }
        nn::os::LockMutex((MutexType *)(plVar4 + 0x4d));
        (**(code **)(*plVar4 + 0x38))(plVar4,lVar3 + (ulong)uVar1 * 0xe8);
        nn::os::UnlockMutex((MutexType *)(plVar4 + 0x4d));
        uVar2 = uVar5;
        if (*(uint *)(param_1 + 0x508) <= uVar5) {
          uVar2 = 0;
        }
        uVar5 = uVar5 + 1;
        **(undefined1 **)(*(long *)(param_1 + 0x510) + (ulong)uVar2 * 0xe8 + 0x58) = 0;
        uVar2 = *(uint *)(param_1 + 0x508);
      } while ((int)uVar5 < (int)uVar2);
    }
  }
  return;
}

