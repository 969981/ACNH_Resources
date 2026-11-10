
long FUN_0025b4e8(long *param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x69));
  nn::os::LockMutex((MutexType *)(param_1 + 100));
  lVar4 = param_1[0x68];
  uVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x1e0))(param_1,lVar4,uVar1,param_2);
  uVar3 = (**(code **)(*param_1 + 0x98))(param_1);
  lVar4 = param_1[0x6d];
  lVar5 = param_1[0x68];
  if (uVar3 <= uVar2) {
    uVar2 = (**(code **)(*param_1 + 0x98))(param_1);
  }
  FUN_00256710(lVar4,lVar5,uVar2);
  lVar4 = param_1[0x6d];
  nn::os::UnlockMutex((MutexType *)(param_1 + 100));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x69));
  return lVar4;
}

