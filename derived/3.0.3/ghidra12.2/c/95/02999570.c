
long FUN_02999570(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  pMVar1 = (MutexType *)(param_1 + 0x28);
  nn::os::LockMutex(pMVar1);
  uVar4 = FUN_0299a690(param_1,param_2,param_3,param_4);
  if ((int)uVar4 < 0) {
LAB_02999674:
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x70);
    uVar7 = uVar4 - iVar2;
    if ((int)uVar4 < iVar2) {
      lVar9 = *(long *)(param_1 + 0x78) + (ulong)uVar4 * 0xf8;
    }
    else {
      if ((int)(*(uint *)(param_1 + 0xb0) + iVar2) <= (int)uVar4) goto LAB_02999674;
      if (*(uint *)(param_1 + 0xb0) <= uVar7) {
        uVar7 = 0;
      }
      lVar9 = *(long *)(param_1 + 0xb8) + (long)(int)uVar7 * 0xf8;
    }
    nn::os::UnlockMutex(pMVar1);
    if ((lVar9 != 0) && (iVar2 = *(int *)(lVar9 + 0x10), -1 < iVar2)) {
      iVar3 = *(int *)(param_1 + 0x188);
      uVar4 = iVar2 - iVar3;
      if (iVar3 <= iVar2) {
        iVar3 = *(uint *)(param_1 + 0x198) + iVar3;
        uVar7 = iVar2 - iVar3;
        if (iVar2 < iVar3) {
          lVar9 = *(long *)(param_1 + 0x1a0);
          if (*(uint *)(param_1 + 0x198) <= uVar4) {
            uVar4 = 0;
          }
          uVar7 = uVar4;
        }
        else {
          if ((int)(iVar3 + *(uint *)(param_1 + 0x1a8)) <= iVar2) {
            return 0;
          }
          lVar9 = *(long *)(param_1 + 0x1b0);
          if (*(uint *)(param_1 + 0x1a8) <= uVar7) {
            uVar7 = 0;
          }
        }
        return lVar9 + (long)(int)uVar7 * 0x50;
      }
      lVar8 = *(long *)(param_1 + 0x160);
      cVar6 = '\x01';
      if (*(int *)(lVar9 + 0x18) == 4) {
        cVar6 = '\x02';
      }
      if (lVar8 != param_1 + 0x158) {
        do {
          lVar5 = *(long *)(lVar8 + -8);
          if ((*(char *)(lVar5 + 8) == cVar6) && (*(int *)(lVar5 + 0xc) == *(int *)(lVar9 + 0xc))) {
            return lVar5;
          }
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 + -8 != param_1 + 0x150);
      }
    }
  }
  return 0;
}

