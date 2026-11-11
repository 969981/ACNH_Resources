
bool FUN_003dde98(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar3 = *(ulong *)(param_1 + 0x20);
    lVar2 = FUN_03b38a74();
    if (uVar3 < *(ulong *)(lVar2 + 200)) {
      lVar2 = FUN_03b38a74();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x960));
      uVar3 = nn::audio::IsAuxRemovable((AuxType *)(param_1 + 0x18));
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        uVar3 = *(ulong *)(param_1 + 0x20);
        lVar2 = FUN_03b38a74();
        bVar1 = uVar3 < *(ulong *)(lVar2 + 200);
      }
      lVar2 = FUN_03b38a74();
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x960));
      return bVar1;
    }
  }
  return false;
}

