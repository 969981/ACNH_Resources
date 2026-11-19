
void FUN_0386d660(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  puVar4 = PTR_DAT_04bb49e0;
  lVar9 = *(long *)PTR_DAT_04bb49e0;
  pMVar1 = (MutexType *)(lVar9 + 0x540);
  nn::os::LockMutex(pMVar1);
  plVar6 = (long *)FUN_0386a210(lVar9 + 0x4f0,uVar5);
  nn::os::UnlockMutex(pMVar1);
  if (plVar6 != (long *)0x0) {
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
    lVar9 = *(long *)puVar4;
    pMVar1 = (MutexType *)(lVar9 + 0x540);
    nn::os::LockMutex(pMVar1);
    lVar9 = FUN_0386a210(lVar9 + 0x4f0,uVar5);
    nn::os::UnlockMutex(pMVar1);
    if (lVar9 != 0) {
      lVar10 = *(long *)puVar4;
      pMVar1 = (MutexType *)(lVar10 + 0x540);
      nn::os::LockMutex(pMVar1);
      lVar8 = *(long *)(lVar10 + 0x510);
      if (lVar8 != lVar10 + 0x508) {
        do {
          if (lVar8 == *(int *)(lVar10 + 0x51c) + lVar9) {
            nn::os::UnlockMutex(pMVar1);
            iVar3 = *(int *)(lVar9 + 0xc0);
            lVar8 = *(long *)puVar4;
            uVar7 = 5;
            if ((iVar3 != 6) && (iVar3 != 4)) {
              if (iVar3 != 3) goto LAB_0386d7d8;
              nn::os::LockMutex((MutexType *)(lVar8 + 0x540));
              plVar2 = (long *)(*(int *)(lVar8 + 0x51c) + lVar9);
              if (*plVar2 != 0) {
                *(long *)(*plVar2 + 8) = plVar2[1];
              }
              if ((long *)plVar2[1] != (long *)0x0) {
                *(long *)plVar2[1] = *plVar2;
              }
              *plVar2 = 0;
              plVar2[1] = 0;
              *(int *)(lVar8 + 0x518) = *(int *)(lVar8 + 0x518) + -1;
              nn::os::UnlockMutex((MutexType *)(lVar8 + 0x540));
              uVar7 = 2;
            }
            *(undefined4 *)(lVar9 + 0xc0) = uVar7;
            goto LAB_0386d7d8;
          }
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != lVar10 + 0x508);
      }
      nn::os::UnlockMutex(pMVar1);
    }
LAB_0386d7d8:
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

