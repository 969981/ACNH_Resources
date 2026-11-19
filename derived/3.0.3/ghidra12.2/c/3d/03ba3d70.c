
void FUN_03ba3d70(long param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((*(long *)PTR_DAT_04bc3ee8 != 0) &&
     (lVar9 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 8), lVar9 != 0)) {
    pMVar1 = (MutexType *)(lVar9 + 200);
    nn::os::LockMutex(pMVar1);
    lVar4 = lVar9 + 0x40;
    if (*(long *)(lVar9 + 0x48) != lVar4) {
      lVar6 = (long)*(int *)(lVar9 + 0x54);
      lVar8 = *(long *)(lVar9 + 0x48) - lVar6;
      lVar10 = lVar8 + lVar6;
      do {
        lVar10 = *(long *)(lVar10 + 8);
        if (*(long *)(lVar8 + 0x108) != 0) {
          FUN_03ba63a0(*(long *)(lVar8 + 0x108),lVar8);
          *(undefined8 *)(lVar8 + 0x108) = 0;
        }
        lVar8 = lVar10 - lVar6;
      } while (lVar8 != lVar4 - lVar6);
    }
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex(pMVar1);
    if (*(long *)(lVar9 + 0x48) != lVar4) {
      lVar6 = (long)*(int *)(lVar9 + 0x54);
      lVar8 = *(long *)(lVar9 + 0x48) - lVar6;
      lVar10 = lVar8 + lVar6;
      do {
        lVar10 = *(long *)(lVar10 + 8);
        nn::os::LockMutex((MutexType *)(lVar9 + 0x108));
        FUN_03b45ec0(0xbf800000,0,lVar8);
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x108));
        lVar8 = lVar10 - lVar6;
      } while (lVar8 != lVar4 - lVar6);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  if (puVar5 != puVar2) {
    lVar10 = (long)*(int *)(param_1 + 0x34);
    lVar4 = (long)puVar5 - lVar10;
    lVar9 = lVar4 + lVar10;
    do {
      plVar3 = (long *)(lVar4 + *(int *)(param_1 + 0x34));
      lVar9 = *(long *)(lVar9 + 8);
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
      lVar4 = lVar9 - lVar10;
    } while (lVar4 != (long)puVar2 - lVar10);
    puVar5 = *(undefined8 **)(param_1 + 0x28);
  }
  while (puVar5 != puVar2) {
    puVar7 = (undefined8 *)puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = puVar7;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(long *)(param_1 + 0x20) = param_1 + 0x20;
  *(undefined8 **)(param_1 + 0x28) = puVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

