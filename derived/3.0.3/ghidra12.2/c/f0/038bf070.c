
bool FUN_038bf070(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  if ((((*(uint *)(param_2 + 0x60) ^ 0xffffffff) & 6) == 0) && (*(int *)(param_2 + 0xb8) == 4)) {
    do {
      lVar3 = *(long *)(param_2 + 0x28);
      bVar1 = lVar3 == 0;
      if (lVar3 == 0) break;
      uVar2 = FUN_038bf070(param_1,*(undefined8 *)(lVar3 + 0x20));
    } while ((uVar2 & 1) != 0);
  }
  else {
    bVar1 = false;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return bVar1;
}

