
void FUN_02047720(long param_1)

{
  MutexType *pMVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_1 + 0x88);
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x298) < 1)) {
    return;
  }
  pMVar1 = (MutexType *)(lVar10 + 0x2c0);
  lVar9 = *(long *)PTR_DAT_04bb3968;
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(lVar10 + 0x298) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar10 + 0x290);
  }
  iVar4 = *(int *)(lVar10 + 0x29c);
  nn::os::UnlockMutex(pMVar1);
  puVar5 = PTR_DAT_04bb27c0;
  if ((lVar11 != 0) && (lVar11 = lVar11 - iVar4, lVar11 != 0)) {
    uVar6 = 0;
    puVar7 = (undefined4 *)(lVar9 + 0xa20);
    do {
      puVar2 = puVar7;
      if (0x11 < uVar6) {
        puVar2 = (undefined4 *)(lVar9 + 0xa20);
      }
      *puVar2 = *(undefined4 *)(*(long *)(lVar11 + 0x48) + 0x230);
      uVar3 = *(uint *)(*(long *)(lVar11 + 0x48) + 0x234);
      if ((((*(long *)puVar5 == 0 || uVar3 == 0) ||
           (lVar10 = *(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x1c0) + 8) +
                              ((ulong)(uVar3 >> 0x11) & 0x7ff8)), lVar10 == 0)) ||
          (*(uint *)(lVar10 + 0x230) != uVar3)) || (lVar10 = *(long *)(lVar10 + 0x88), lVar10 == 0))
      break;
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 1;
      lVar8 = *(long *)(lVar11 + *(int *)(lVar10 + 0x29c) + 8);
      lVar11 = lVar8 - *(int *)(lVar10 + 0x29c);
    } while (lVar8 != lVar10 + 0x288 && lVar11 != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

