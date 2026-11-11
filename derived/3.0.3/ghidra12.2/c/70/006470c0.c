
void FUN_006470c0(undefined8 *param_1)

{
  long lVar1;
  MutexType *pMVar2;
  int iVar3;
  long lVar4;
  
  *param_1 = &PTR_LAB_048e1f00;
  if (*(int *)(param_1 + 5) != 0) {
    lVar4 = (long)*(int *)(param_1 + 5) << 6;
    lVar1 = param_1[4] + 0x20;
    do {
      FUN_00440b30(lVar1,3,1);
      lVar4 = lVar4 + -0x40;
      lVar1 = lVar1 + 0x40;
    } while (lVar4 != 0);
  }
  pMVar2 = (MutexType *)param_1[6];
  if (pMVar2 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar2);
    FUN_00438870(pMVar2,0x20);
  }
  iVar3 = *(int *)(param_1 + 5);
  if (0 < iVar3) {
    lVar1 = param_1[4] + (long)iVar3 * 0x40;
    do {
      if ((*(ulong *)(lVar1 + -0x10) & 1) != 0) {
        FUN_0043dd50(*(ulong *)(lVar1 + -0x10) & 0xfffffffffffffffe);
      }
      FUN_0043be10(lVar1 + -0x40);
      iVar3 = iVar3 + -1;
      lVar1 = lVar1 + -0x40;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[4],0x40,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

