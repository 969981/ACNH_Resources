
void FUN_015f0030(long param_1,long *param_2)

{
  uint *puVar1;
  MutexType *pMVar2;
  uint *puVar3;
  undefined8 *__dest;
  int iVar4;
  ulong uVar5;
  size_t __n;
  long lVar6;
  uint uVar7;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  puVar1 = (uint *)(&LAB_007a6498 + param_1);
  pMVar2 = (MutexType *)(param_1 + 0x7a6478);
  puVar3 = (uint *)(&LAB_007a5448 + param_1);
  nn::os::LockMutex(pMVar2);
  if (0 < (int)*puVar1) {
    uVar7 = 0;
    do {
      nn::os::LockMutex(pMVar2);
      if (uVar7 < *puVar1) {
        lVar6 = *(long *)(*(long *)(&LAB_007a64a0 + param_1) + (long)(int)uVar7 * 8);
      }
      else {
        lVar6 = 0;
      }
      nn::os::UnlockMutex(pMVar2);
      if (*(long **)(lVar6 + 0x20) == param_2) {
        FUN_015efc70(param_1,lVar6);
      }
      else {
        uVar7 = uVar7 + 1;
      }
    } while ((int)uVar7 < (int)*puVar1);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x7a5428));
  uVar7 = *puVar3;
  if (0 < (int)uVar7) {
    __dest = *(undefined8 **)(&LAB_007a5450 + param_1);
    uVar5 = 0;
    __n = (long)(int)uVar7 * 8;
    do {
      __n = __n - 8;
      if ((long *)*__dest == param_2) {
        iVar4 = (int)uVar5;
        if ((-1 < iVar4) && (iVar4 < (int)uVar7)) {
          if (iVar4 + 1 < (int)uVar7) {
            memmove(__dest,__dest + 1,__n);
            uVar7 = *puVar3;
          }
          *puVar3 = uVar7 - 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      __dest = __dest + 1;
    } while (uVar7 != uVar5);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a5428));
  (**(code **)(*param_2 + 0x18))(param_2);
  nn::os::UnlockMutex(pMVar2);
  return;
}

