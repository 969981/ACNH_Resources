
void FUN_03f2ad90(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_58;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x90));
    puVar2 = PTR_DAT_04bb49b8;
    if (*(long *)(param_1 + 0x48) != param_1 + 0x40) {
      lVar3 = (long)*(int *)(param_1 + 0x54);
      lVar5 = *(long *)(param_1 + 0x48) - lVar3;
      lVar4 = lVar5 + lVar3;
      do {
        lVar6 = *(long *)puVar2;
        lVar4 = *(long *)(lVar4 + 8);
        local_58 = lVar5;
        nn::os::LockMutex((MutexType *)(lVar6 + 0x518));
        if (*(long *)(lVar5 + 0xc0) != 0 || *(long *)(lVar5 + 0xb8) != 0) {
          plVar1 = (long *)(*(int *)(lVar6 + 0x54c) + lVar5);
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(lVar6 + 0x548) = *(int *)(lVar6 + 0x548) + -1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x518));
        FUN_03f354cc(*(undefined8 *)puVar2,&local_58,1,0);
        lVar5 = lVar4 - lVar3;
      } while ((param_1 + 0x40) - lVar3 != lVar5);
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  }
  return;
}

