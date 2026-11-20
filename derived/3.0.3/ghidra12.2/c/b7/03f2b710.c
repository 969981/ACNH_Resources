
void FUN_03f2b710(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  if (param_3 != 0) {
    plVar1 = (long *)(*(int *)(param_1 + 0x54) + param_3);
    lVar2 = *plVar1;
    plVar4 = (long *)plVar1[1];
    if (plVar4 != (long *)0x0 || lVar2 != 0) {
      if (lVar2 != 0) {
        *(long **)(lVar2 + 8) = plVar4;
        plVar4 = (long *)plVar1[1];
      }
      if (plVar4 != (long *)0x0) {
        *plVar4 = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    }
    plVar1 = (long *)(*(int *)(param_1 + 0x6c) + param_3);
    lVar2 = *plVar1;
    plVar4 = (long *)plVar1[1];
    if (plVar4 != (long *)0x0 || lVar2 != 0) {
      if (lVar2 != 0) {
        *(long **)(lVar2 + 8) = plVar4;
        plVar4 = (long *)plVar1[1];
      }
      if (plVar4 != (long *)0x0) {
        *plVar4 = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    }
  }
  uVar3 = (**(code **)(*(long *)*param_2 + 0xd8))((long *)*param_2,8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *param_2 = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return;
}

