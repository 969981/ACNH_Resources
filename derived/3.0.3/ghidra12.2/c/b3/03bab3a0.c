
void FUN_03bab3a0(undefined8 *param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04b7a318;
  pMVar1 = (MutexType *)(param_1 + 9);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = param_1 + 2;
    nn::os::LockMutex(pMVar1);
    puVar3 = (undefined8 *)param_1[3];
    if (puVar3 != puVar2) {
      lVar6 = (long)*(int *)((long)param_1 + 0x24);
      plVar5 = (long *)((long)puVar3 - lVar6);
      do {
        (**(code **)(*plVar5 + 0x30))(plVar5);
        plVar5 = (long *)(*(long *)((long)plVar5 + lVar6 + 8) - lVar6);
      } while (plVar5 != (long *)((long)puVar2 - lVar6));
      puVar3 = (undefined8 *)param_1[3];
    }
    while (puVar3 != puVar2) {
      puVar4 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar4;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[2] = param_1 + 2;
    param_1[3] = puVar2;
    if ((DAT_05aebb78 != 0) && (*(long **)(DAT_05aebb78 + 0x48) != (long *)0x0)) {
      lVar6 = **(long **)(DAT_05aebb78 + 0x48);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + (long)*(int *)(param_1 + 1) * 8) = 0;
      }
    }
    nn::os::UnlockMutex(pMVar1);
  }
  nn::os::UnlockMutex(pMVar1);
  FUN_038e1a84(param_1 + 5);
  return;
}

