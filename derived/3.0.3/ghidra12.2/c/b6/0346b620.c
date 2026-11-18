
void FUN_0346b620(long *param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bb49e0;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar7 = *(long *)PTR_DAT_04bb49e0;
    pMVar1 = (MutexType *)(lVar7 + 0x540);
    nn::os::LockMutex(pMVar1);
    lVar4 = *(long *)(lVar7 + 0x510);
    if (lVar4 != lVar7 + 0x508) {
      do {
        if (lVar4 == *(int *)(lVar7 + 0x51c) + lVar5) {
          nn::os::UnlockMutex(pMVar1);
          return;
        }
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != lVar7 + 0x508);
    }
    nn::os::UnlockMutex(pMVar1);
    *(undefined4 *)(*param_1 + 200) = 2;
    FUN_0386c560(*(undefined8 *)puVar3,*param_1);
    lVar5 = param_1[1];
    if ((int)lVar5 != 0) {
      lVar4 = param_1[2];
      uVar6 = 0;
      do {
        if (*(long *)(lVar4 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) != 0) {
          FUN_0386b090(*param_1);
        }
        uVar2 = uVar6 + 1;
        uVar6 = uVar2 & 0xffffffff;
      } while ((int)lVar5 != (int)uVar2);
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}

