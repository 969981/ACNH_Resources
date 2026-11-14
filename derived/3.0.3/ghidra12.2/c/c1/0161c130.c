
void FUN_0161c130(long param_1)

{
  undefined8 *puVar1;
  MutexType *pMVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar6) {
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      if (uVar6 <= uVar9) {
        uVar4 = 0;
      }
      lVar10 = *(long *)(param_1 + 0x18) + (ulong)uVar4 * 0x78;
      puVar1 = (undefined8 *)(lVar10 + 0x20);
      nn::os::LockMutex((MutexType *)(lVar10 + 0x58));
      puVar5 = *(undefined8 **)(lVar10 + 0x28);
      while (puVar5 != puVar1) {
        puVar7 = (undefined8 *)puVar5[1];
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = puVar7;
      }
      *(undefined4 *)(lVar10 + 0x30) = 0;
      *puVar1 = puVar1;
      *(undefined8 **)(lVar10 + 0x28) = puVar1;
      nn::os::UnlockMutex((MutexType *)(lVar10 + 0x58));
      uVar6 = uVar9;
      if (*(uint *)(param_1 + 0x10) <= uVar9) {
        uVar6 = 0;
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar6 * 0x78 + 0x18) + 0xa4) = 0;
      uVar6 = *(uint *)(param_1 + 0x10);
    } while ((int)uVar9 < (int)uVar6);
  }
  pMVar2 = (MutexType *)(param_1 + 0x88);
  nn::os::LockMutex(pMVar2);
  uVar6 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar6) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x28);
      uVar4 = uVar9;
      if (uVar6 <= uVar9) {
        uVar4 = 0;
      }
      lVar8 = lVar10 + (ulong)uVar4 * 0x30;
      if (*(long *)(lVar8 + 0x10) == 0 && *(long *)(lVar8 + 8) == 0) {
        nn::os::LockMutex(pMVar2);
        plVar3 = (long *)((long)*(int *)(param_1 + 100) + lVar10 + (ulong)uVar4 * 0x30);
        lVar10 = *(long *)(param_1 + 0x50);
        *(long **)(param_1 + 0x50) = plVar3;
        *plVar3 = lVar10;
        plVar3[1] = param_1 + 0x50;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 8) = plVar3;
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        nn::os::UnlockMutex(pMVar2);
        uVar6 = *(uint *)(param_1 + 0x20);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar6);
  }
  nn::os::UnlockMutex(pMVar2);
  return;
}

