
void FUN_0044ebf0(long param_1,undefined8 param_2,int param_3)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar5 = DAT_04c6f8c8;
  pMVar1 = (MutexType *)(DAT_04c6f8c8 + 0xc0);
  nn::os::LockMutex(pMVar1);
  iVar3 = FUN_00450280(lVar5 + 0x38,param_2);
  iVar6 = *(int *)(*(long *)(lVar5 + 0x38) + (long)iVar3 * 0x18 + 0x10);
  iVar4 = FUN_00426fc0(param_2);
  iVar2 = -1;
  if (iVar6 != 0) {
    iVar2 = iVar3;
  }
  if ((-1 < iVar2) && (0 < param_3)) {
    lVar5 = *(long *)(lVar5 + 0x38) + (long)iVar2 * 0x18;
    iVar2 = *(int *)(lVar5 + 0x10);
    if (0 < iVar2) {
      lVar5 = *(long *)(lVar5 + 8);
      iVar6 = 0;
      do {
        puVar7 = (undefined8 *)(lVar5 + (long)iVar2 * 0x10 + -8);
        lVar8 = (long)iVar2;
        do {
          lVar8 = lVar8 + -1;
          (*(code *)*puVar7)(puVar7[-1] + param_1);
          puVar7 = puVar7 + -2;
        } while (0 < lVar8);
        iVar6 = iVar6 + 1;
        param_1 = param_1 + iVar4;
      } while (iVar6 != param_3);
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

