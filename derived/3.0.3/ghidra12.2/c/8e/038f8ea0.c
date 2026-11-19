
undefined8 FUN_038f8ea0(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar4 = 0;
    iVar3 = *(int *)(param_1 + 0x48) + -1;
    do {
      iVar1 = iVar4 + iVar3;
      if (iVar1 < 0 != SCARRY4(iVar4,iVar3)) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = iVar1 >> 1;
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x50) + (ulong)uVar2 * 8);
      if ((long *)puVar6[1] == param_2) {
        if ((*(uint *)(param_2 + 0x1a) & 1) != 0) {
          nn::os::LockMutex((MutexType *)(puVar6 + 0xb));
        }
        if (puVar6[5] != 0) {
          if ((*(uint *)(puVar6[1] + 0xd0) & 1) != 0) {
            nn::os::UnlockMutex((MutexType *)(puVar6 + 0xb));
          }
          uVar5 = 0;
          goto LAB_038f8f74;
        }
        (**(code **)*puVar6)(puVar6);
        (**(code **)(*param_2 + 0x38))(param_2,puVar6);
        break;
      }
      iVar1 = uVar2 - 1;
      if ((long)puVar6[1] < (long)param_2) {
        iVar4 = uVar2 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
    } while (iVar4 <= iVar1);
  }
  uVar5 = 1;
LAB_038f8f74:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return uVar5;
}

