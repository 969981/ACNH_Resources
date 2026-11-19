
void FUN_0388fba0(long *param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x43));
  if ((char)param_1[0x12] != '\0') {
    pMVar1 = (MutexType *)(*(long *)(DAT_05ae6a60 + 0x90) + 0x40);
    nn::os::LockMutex(pMVar1);
    lVar6 = (**(code **)(**(long **)(DAT_05ae6a60 + 0x90) + 0x60))();
    uVar2 = *(int *)(lVar6 + 0x50) + 1U & 1;
    uVar3 = -uVar2;
    if (-2 < *(int *)(lVar6 + 0x50)) {
      uVar3 = uVar2;
    }
    puVar7 = *(uint **)(*(long *)(lVar6 + 0x38) + (ulong)uVar3 * 8);
    uVar2 = *puVar7;
    while (uVar2 != 0) {
      uVar2 = uVar2 - 1;
      *puVar7 = uVar2;
      lVar6 = *(long *)(*(long *)(*(long *)(puVar7 + 2) + (ulong)uVar2 * 8) + 8);
      iVar5 = *(int *)(lVar6 + 0x20);
      uVar3 = iVar5 + 1U & 1;
      uVar4 = -uVar3;
      if (-2 < iVar5) {
        uVar4 = uVar3;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 8) + (ulong)uVar4 * 8);
      if (*(int *)(lVar6 + 0xc) != 0 && (int)param_1[0x13] != 0) {
        puVar8 = (undefined8 *)param_1[0x14];
        do {
          puVar9 = puVar8 + 1;
          (**(code **)(*param_1 + 0x20))(param_1,*puVar8,lVar6);
          puVar8 = puVar9;
        } while (puVar9 != (undefined8 *)(param_1[0x14] + (long)(int)param_1[0x13] * 8));
        uVar2 = *puVar7;
      }
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    nn::os::UnlockMutex(pMVar1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x43));
  return;
}

