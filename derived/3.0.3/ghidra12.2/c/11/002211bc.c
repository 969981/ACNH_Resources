
void FUN_002211bc(long param_1,uint param_2)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_DAT_04bcb8c0;
  pMVar1 = (MutexType *)(*(long *)PTR_DAT_04bcb8c0 + 0x60);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 8) != 0) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  uVar3 = 5;
  if ((param_2 & 1) == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  FUN_002282f0(param_1 + 0x10);
  FUN_002234f0(*(undefined8 *)puVar2,param_1,param_2 & 1);
  nn::os::UnlockMutex(pMVar1);
  return;
}

