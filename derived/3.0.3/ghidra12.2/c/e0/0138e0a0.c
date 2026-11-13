
void FUN_0138e0a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb27c8;
  if ((*(byte *)(param_1 + 0x18) >> 2 & 1) == 0) {
    if (lVar3 != 0) {
      plVar1 = (long *)(param_1 + 0x58);
      if (*(long *)(param_1 + 0x68) != 0 || *(long *)(param_1 + 0x60) != 0) {
        nn::os::LockMutex((MutexType *)(lVar3 + 0x50));
        plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar1);
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
        nn::os::UnlockMutex((MutexType *)(lVar3 + 0x50));
      }
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    if (lVar3 != 0) {
      plVar1 = (long *)(param_1 + 0x248);
      if (*(long *)(param_1 + 600) != 0 || *(long *)(param_1 + 0x250) != 0) {
        nn::os::LockMutex((MutexType *)(lVar3 + 0x50));
        plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar1);
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
        nn::os::UnlockMutex((MutexType *)(lVar3 + 0x50));
      }
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    *(undefined4 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  return;
}

