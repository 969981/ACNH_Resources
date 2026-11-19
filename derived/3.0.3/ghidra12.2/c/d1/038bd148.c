
void FUN_038bd148(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_1 + 0x1f0) != 0) {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x1f0) + 0x20));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x200);
  uVar2 = 3;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_1 + 0x178,uVar2);
  }
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x1f0) + 0x20));
  return;
}

