
void FUN_03f35694(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x70) != 0) {
      *(undefined8 *)(lVar4 + 0x70) = 0;
      FUN_03f2d620(lVar4 + 0x38);
      lVar4 = *param_2;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x4d8));
    iVar2 = *(int *)(param_1 + 0x4b0);
    iVar3 = *(int *)(param_1 + 0x4a8);
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x4b0) = iVar2 + 1;
      iVar2 = *(int *)(param_1 + 0x4ac) + iVar2;
      iVar1 = 0;
      if (iVar3 <= iVar2) {
        iVar1 = iVar3;
      }
      *(long *)(*(long *)(param_1 + 0x4a0) + (long)(iVar2 - iVar1) * 8) = lVar4;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x4d8));
    *param_2 = 0;
  }
  return;
}

