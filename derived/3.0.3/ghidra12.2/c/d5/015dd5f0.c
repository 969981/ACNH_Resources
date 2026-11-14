
void FUN_015dd5f0(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Buffer aBStack_70 [64];
  
  movie::Buffer::Buffer(aBStack_70);
  pMVar1 = (MutexType *)(param_1 + 0x8d8);
  nn::os::LockMutex(pMVar1);
  iVar6 = *(int *)(param_1 + 0x830);
  nn::os::UnlockMutex(pMVar1);
  if (0 < iVar6) {
    do {
      nn::os::LockMutex(pMVar1);
      if (*(int *)(param_1 + 0x830) < 1) {
        nn::os::UnlockMutex(pMVar1);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x82c);
        iVar4 = *(int *)(param_1 + 0x828);
        iVar2 = 0;
        if (iVar4 <= iVar3) {
          iVar2 = iVar4;
        }
        iVar5 = *(int *)(*(long *)(param_1 + 0x820) + (long)(iVar3 - iVar2) * 4);
        *(int *)(param_1 + 0x830) = *(int *)(param_1 + 0x830) + -1;
        iVar2 = 0;
        if (iVar3 + 1 < iVar4) {
          iVar2 = iVar3 + 1;
        }
        *(int *)(param_1 + 0x82c) = iVar2;
        nn::os::UnlockMutex(pMVar1);
        if (iVar5 != -1) {
          (**(code **)(**(long **)(param_1 + 0x18) + 0x50))
                    (*(long **)(param_1 + 0x18),iVar5,aBStack_70);
          (**(code **)(**(long **)(param_1 + 0x18) + 0x58))
                    (*(long **)(param_1 + 0x18),iVar5,0,0,0,4);
        }
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  movie::Buffer::~Buffer(aBStack_70);
  return;
}

