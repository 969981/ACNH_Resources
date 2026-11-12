
uint FUN_00714920(long param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x230) == *param_2) {
    uVar1 = 1;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x2c0));
    if (*(long *)(param_1 + 0x290) == param_1 + 0x288) {
      uVar1 = 0;
    }
    else {
      lVar3 = (long)*(int *)(param_1 + 0x29c);
      lVar2 = *(long *)(param_1 + 0x290) - lVar3;
      do {
        uVar1 = FUN_00714920(lVar2,param_2);
        if ((uVar1 & 1) != 0) break;
        lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
      } while (lVar2 != (param_1 + 0x288) - lVar3);
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x2c0));
  }
  return uVar1 & 1;
}

