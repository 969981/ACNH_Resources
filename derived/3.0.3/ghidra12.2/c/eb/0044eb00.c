
undefined8 FUN_0044eb00(long param_1,undefined8 param_2,int param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = DAT_04c6f8c8;
  pMVar1 = (MutexType *)(DAT_04c6f8c8 + 0xc0);
  nn::os::LockMutex(pMVar1);
  lVar3 = FUN_0044e590(lVar5 + 0x18,param_2);
  if ((-1 < (int)lVar3) && (0 < param_3)) {
    lVar5 = *(long *)(lVar5 + 0x18) + (long)(int)lVar3 * 0x18;
    iVar4 = 0;
    puVar6 = (uint *)(lVar5 + 0x10);
    uVar7 = (ulong)*puVar6;
    do {
      if (0 < (int)uVar7) {
        lVar8 = 0;
        lVar9 = 0;
        do {
          plVar2 = (long *)(*(long *)(lVar5 + 8) + lVar8);
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
          *(long *)(*plVar2 + param_1) = plVar2[1];
          uVar7 = (ulong)(int)*puVar6;
        } while (lVar9 < (long)uVar7);
      }
      iVar4 = iVar4 + 1;
      param_1 = (lVar3 >> 0x20) + param_1;
    } while (iVar4 != param_3);
  }
  nn::os::UnlockMutex(pMVar1);
  return 0;
}

