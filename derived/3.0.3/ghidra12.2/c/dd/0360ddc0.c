
void FUN_0360ddc0(long param_1,ulong param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0x1068);
    uVar3 = uVar2 - *(uint *)(param_1 + 0x514);
    if (uVar2 < *(uint *)(param_1 + 0x514)) {
      return;
    }
  }
  else {
    FUN_036117f0(param_1,1);
    *(undefined1 *)(param_1 + 0x106c) = 0;
    uVar2 = *(uint *)(param_1 + 0x1068);
    uVar3 = uVar2;
  }
  if (uVar3 == 0) {
    return;
  }
  if (uVar2 + *(int *)(*(long *)(param_1 + 0x14a8) + 0x200) * -2 < uVar3) {
    FUN_036117f0(param_1,1);
  }
  pMVar1 = (MutexType *)(param_1 + 0x14c0);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_1 + 0x14e0);
  if (uVar2 < uVar3) {
    do {
      nn::os::TimedWaitConditionVariable(param_1 + 0x14b4,pMVar1,1000000000);
      uVar2 = *(uint *)(param_1 + 0x14e0);
    } while (uVar2 < uVar3);
  }
  *(undefined4 *)(param_1 + 0x14e0) = 0;
  *(uint *)(param_1 + 0x1068) = *(int *)(param_1 + 0x1068) - uVar2;
  if (0x2000 < *(ulong *)(param_1 + 0x530)) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

