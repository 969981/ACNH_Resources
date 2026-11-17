
void FUN_02a8b51c(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined4 uVar3;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
      if (*(char *)(param_1 + 0x2a4) != '\0') {
        uVar3 = FUN_02a8b5d0(param_1 + 0x284);
        *(undefined4 *)(param_1 + 0x2cc) = uVar3;
      }
      if (*(char *)(param_1 + 0x2c8) != '\0') {
        uVar3 = FUN_02a8b5d0(param_1 + 0x2a8);
        *(undefined4 *)(param_1 + 0x2d0) = uVar3;
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
    }
  }
  FUN_02a8b7c0(param_1);
  return;
}

