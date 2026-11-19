
void FUN_038bd01c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0xc0) + 0x20));
  }
  puVar1 = *(undefined8 **)(param_1 + 0xd0);
  if ((param_2 & 1) == 0) {
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,param_1 + 0x48,0);
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
    if (*(long *)(param_1 + 0xc0) != 0) {
      nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0xc0) + 0x20));
    }
    if (*(long *)(param_1 + 0x288) != 0) {
      nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x288) + 0x20));
    }
    puVar1 = *(undefined8 **)(param_1 + 0x298);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,param_1 + 0x210,0);
    }
    uVar2 = 0;
  }
  else {
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,param_1 + 0x48,3);
    }
    *(undefined4 *)(param_1 + 0xcc) = 3;
    if (*(long *)(param_1 + 0xc0) != 0) {
      nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0xc0) + 0x20));
    }
    if (*(long *)(param_1 + 0x288) != 0) {
      nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x288) + 0x20));
    }
    puVar1 = *(undefined8 **)(param_1 + 0x298);
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 3;
      (**(code **)*puVar1)(puVar1,param_1 + 0x210,3);
    }
  }
  *(undefined4 *)(param_1 + 0x294) = uVar2;
  if (*(long *)(param_1 + 0x288) == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x288) + 0x20));
  return;
}

