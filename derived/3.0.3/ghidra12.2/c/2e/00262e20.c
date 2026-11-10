
void FUN_00262e20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = nn::os::LockMutex((MutexType *)(param_1 + 0x8d78));
  for (lVar2 = *(long *)(param_1 + 0x438); lVar2 != param_1 + 0x430; lVar2 = *(long *)(lVar2 + 8)) {
    *(undefined8 *)(lVar2 + 0x440) = 0;
    uVar1 = FUN_00261af8(uVar1,lVar2 + 0x10);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x8d78));
  return;
}

