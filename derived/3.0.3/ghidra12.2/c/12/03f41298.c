
void FUN_03f41298(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar2 < iVar3) {
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    iVar2 = *(int *)(param_1 + 0x24) + iVar2;
    iVar1 = 0;
    if (iVar3 <= iVar2) {
      iVar1 = iVar3;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(iVar2 - iVar1) * 8) = param_2;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  return;
}

