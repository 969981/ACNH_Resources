
void FUN_03af1560(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = *(uint **)(*(long *)(param_1 + 0x358) + 0x31b8);
  nn::os::LockMutex((MutexType *)(puVar3 + 0x22));
  uVar2 = *puVar3;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar1 = uVar4;
      if (puVar3[4] <= uVar4) {
        uVar1 = 0;
      }
      if ((*(uint *)(*(long *)(puVar3 + 6) + (long)(int)uVar1 * 0x50 + 0x38) & 3) == 1) {
        FUN_03af0290(*(long *)(puVar3 + 6) + (long)(int)uVar1 * 0x50,puVar3);
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  nn::os::UnlockMutex((MutexType *)(puVar3 + 0x22));
  if (*(long *)(*(long *)(param_1 + 0x358) + 0x31c0) == 0) {
    return;
  }
  FUN_03b0c070();
  return;
}

