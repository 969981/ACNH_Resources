
long FUN_03f2b40c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,long param_5
                 )

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  lVar2 = FUN_038c6d48(param_2,param_3,*(undefined8 *)(param_1 + 0x20),8,param_4,0);
  if (lVar2 == 0) {
    uVar3 = FUN_03f2b530(param_1,param_2);
    if (((uVar3 & 1) == 0) && ((*(byte *)(param_1 + 0x18) >> 4 & 1) == 0)) {
      lVar2 = 0;
      goto LAB_03f2b508;
    }
    lVar2 = FUN_038c6d48(param_2,param_3,*(undefined8 *)(param_1 + 0x20),8,param_4,0);
    if (lVar2 == 0) goto LAB_03f2b508;
  }
  if ((param_5 != 0) && ((*(byte *)(param_5 + 9) & 1) == 0)) {
    plVar5 = (long *)(param_1 + 0x40);
    lVar4 = *plVar5;
    plVar1 = (long *)(*(int *)(param_1 + 0x54) + param_5);
    *plVar5 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar5;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  }
LAB_03f2b508:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return lVar2;
}

