
void FUN_038bf420(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x280) != 0) {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x280) + 0x20));
  }
  FUN_038bbef0(param_1 + 0x208);
  if (*(long *)(param_1 + 0x280) != 0) {
    nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x280) + 0x20));
  }
  pMVar1 = (MutexType *)(param_1 + 0x20);
  uVar3 = nn::os::TryLockMutex(pMVar1);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x90) != param_1 + 0x88) {
    lVar4 = *(long *)(param_1 + 0x90);
    do {
      lVar2 = *(long *)(lVar4 + 8);
      plVar5 = *(long **)(lVar4 + 0x10);
      if (((*(byte *)(plVar5 + 0xc) >> 1 & 1) != 0) &&
         (uVar3 = FUN_038bf070(param_1,plVar5), (uVar3 & 1) != 0)) {
        nn::os::LockMutex(pMVar1);
        if ((int)plVar5[0x17] == 4) {
          *(undefined4 *)(plVar5 + 0x17) = 6;
          (**(code **)(*plVar5 + 0x88))(plVar5);
          (**(code **)(*plVar5 + 0x90))(plVar5);
          FUN_038beda0(param_1,param_1 + 0xd0,plVar5);
        }
        nn::os::UnlockMutex(pMVar1);
      }
      lVar4 = lVar2;
    } while (lVar2 != param_1 + 0x88);
  }
  do {
    if (*(long *)(param_1 + 0xd8) == param_1 + 0xd0) {
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0xd8) + 0x10);
    (**(code **)(*plVar5 + 0x88))(plVar5);
    (**(code **)(*plVar5 + 0x90))(plVar5);
    plVar6 = plVar5 + 4;
    lVar4 = *plVar6;
    if ((lVar4 == 0) || (*(long **)(lVar4 + 8) != plVar6)) {
      if (plVar5[7] != 0) {
        *(long *)(plVar5[7] + 0x10) = plVar5[6];
      }
      lVar4 = plVar5[6];
      if (lVar4 == 0) {
        if (*plVar6 != 0) {
          *(long *)(*(long *)(*plVar6 + 8) + 0x18) = plVar5[7];
        }
      }
      else {
LAB_038bf540:
        *(long *)(lVar4 + 0x18) = plVar5[7];
        plVar5[6] = 0;
      }
    }
    else {
      *(long *)(lVar4 + 8) = plVar5[6];
      lVar4 = plVar5[6];
      if (lVar4 != 0) goto LAB_038bf540;
    }
    plVar5[7] = 0;
    plVar5[4] = 0;
    FUN_038aae00(plVar6);
    plVar5[6] = 0;
    plVar5[7] = 0;
    *plVar6 = 0;
    plVar5[5] = 0;
    FUN_038beec0(param_1,plVar5);
  } while( true );
}

