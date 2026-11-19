
void FUN_038c0534(long param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0x278) != 0) {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x278) + 0x20));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x288);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_1 + 0x200,param_2 & 1);
  }
  *(uint *)(param_1 + 0x284) = param_2 & 1;
  if (*(long *)(param_1 + 0x278) == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x278) + 0x20));
  return;
}

