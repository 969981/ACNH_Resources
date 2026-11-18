
void FUN_0375ecb0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_04bb27c8;
  lVar4 = *(long *)PTR_DAT_04bb27c8;
  lVar5 = 0;
  if (lVar4 != 0) {
    plVar1 = (long *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x78) != 0 || *(long *)(param_1 + 0x70) != 0) {
      nn::os::LockMutex((MutexType *)(lVar4 + 0x50));
      plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar1);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x50));
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar5 = *(long *)puVar3;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  lVar4 = 0;
  if (lVar5 != 0) {
    plVar1 = (long *)(param_1 + 600);
    if (*(long *)(param_1 + 0x268) != 0 || *(long *)(param_1 + 0x260) != 0) {
      nn::os::LockMutex((MutexType *)(lVar5 + 0x50));
      plVar2 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar1);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x50));
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar4 = *(long *)puVar3;
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  lVar5 = 0;
  if (lVar4 != 0) {
    plVar1 = (long *)(param_1 + 0x448);
    if (*(long *)(param_1 + 0x458) != 0 || *(long *)(param_1 + 0x450) != 0) {
      nn::os::LockMutex((MutexType *)(lVar4 + 0x50));
      plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar1);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x50));
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar5 = *(long *)puVar3;
  }
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  lVar4 = 0;
  if (lVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x638);
    if (*(long *)(param_1 + 0x648) != 0 || *(long *)(param_1 + 0x640) != 0) {
      nn::os::LockMutex((MutexType *)(lVar5 + 0x50));
      plVar2 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar1);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x50));
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar4 = *(long *)puVar3;
  }
  *(undefined4 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x660) = 0;
  *(undefined8 *)(param_1 + 0x668) = 0;
  *(undefined8 *)(param_1 + 0x670) = 0;
  *(undefined8 *)(param_1 + 0x678) = 0;
  *(undefined4 *)(param_1 + 0x680) = 0;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x828);
    if (*(long *)(param_1 + 0x838) != 0 || *(long *)(param_1 + 0x830) != 0) {
      nn::os::LockMutex((MutexType *)(lVar4 + 0x50));
      plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar1);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x50));
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar5 = *(long *)puVar3;
  }
  *(undefined4 *)(param_1 + 0x880) = 0;
  *(undefined8 *)(param_1 + 0x850) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x870) = 0;
  if (lVar5 != 0) {
    plVar1 = (long *)(param_1 + 0xa18);
    if (*(long *)(param_1 + 0xa28) != 0 || *(long *)(param_1 + 0xa20) != 0) {
      nn::os::LockMutex((MutexType *)(lVar5 + 0x50));
      plVar2 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar1);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x50));
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  *(undefined4 *)(param_1 + 0xa70) = 0;
  *(undefined8 *)(param_1 + 0xa40) = 0;
  *(undefined8 *)(param_1 + 0xa48) = 0;
  *(undefined8 *)(param_1 + 0xa50) = 0;
  *(undefined8 *)(param_1 + 0xa58) = 0;
  *(undefined4 *)(param_1 + 0xa60) = 0;
  return;
}

