
void FUN_038c049c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  FUN_038bbab4(*(long *)(param_1 + 0xb0) + 0x208,param_1 + 0x298);
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x40) + 0x40);
  (**(code **)(*plVar1 + 0x20))(plVar1,1,param_1 + 0x200);
  if (*(long *)(param_1 + 0x278) != 0) {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x278) + 0x20));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x288);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,param_1 + 0x200,0);
  }
  *(undefined4 *)(param_1 + 0x284) = 0;
  if (*(long *)(param_1 + 0x278) == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x278) + 0x20));
  return;
}

