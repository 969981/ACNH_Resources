
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032a63e0(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined **local_60 [4];
  
  lVar4 = DAT_0572b8d8;
  plVar5 = (long *)(param_1 + 8);
  if (*plVar5 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *plVar5 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(long **)(lVar4 + 0x120) == plVar5) {
      *(long *)(lVar4 + 0x120) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    lVar3 = *(long *)(lVar4 + 0x120);
    if (*(long *)(lVar4 + 0x120) != 0) {
      do {
        lVar4 = lVar3;
        lVar3 = *(long *)(lVar4 + 0x10);
      } while (lVar3 != 0);
      *(undefined1 *)(lVar4 + 0x10a) = 1;
    }
  }
  lVar4 = DAT_05688e68;
  plVar5 = *(long **)(param_1 + 0x20);
  if (*plVar5 != 0) {
    lVar3 = plVar5[1];
    lVar2 = plVar5[2];
    plVar5[2] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    if (*(long **)(lVar4 + 0x560) == plVar5) {
      *(long *)(lVar4 + 0x560) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
  }
  plVar5 = DAT_0572e5c8;
  plVar6 = *(long **)(param_1 + 0x40);
  if (*plVar6 != 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    lVar4 = plVar6[1];
    lVar3 = plVar6[2];
    plVar6[2] = 0;
    *plVar6 = 0;
    plVar6[1] = 0;
    if ((long *)*plVar5 == plVar6) {
      *plVar5 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
    }
    nn::os::UnlockMutex(pMVar1);
  }
  plVar5 = DAT_0572e5c8;
  plVar6 = *(long **)(param_1 + 0x48);
  if (*plVar6 != 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    lVar4 = plVar6[1];
    lVar3 = plVar6[2];
    plVar6[2] = 0;
    *plVar6 = 0;
    plVar6[1] = 0;
    if ((long *)*plVar5 == plVar6) {
      *plVar5 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
    }
    nn::os::UnlockMutex(pMVar1);
  }
  plVar5 = DAT_0572e5c8;
  plVar6 = *(long **)(param_1 + 0x50);
  if (*plVar6 != 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    lVar4 = plVar6[1];
    lVar3 = plVar6[2];
    plVar6[2] = 0;
    *plVar6 = 0;
    plVar6[1] = 0;
    if ((long *)*plVar5 == plVar6) {
      *plVar5 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
    }
    nn::os::UnlockMutex(pMVar1);
  }
  plVar5 = DAT_0572e5c8;
  plVar6 = *(long **)(param_1 + 0x68);
  if (*plVar6 != 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    lVar4 = plVar6[1];
    lVar3 = plVar6[2];
    plVar6[2] = 0;
    *plVar6 = 0;
    plVar6[1] = 0;
    if ((long *)*plVar5 == plVar6) {
      *plVar5 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
    }
    nn::os::UnlockMutex(pMVar1);
  }
  plVar5 = *(long **)(param_1 + 0x70);
  local_60[0] = &PTR_LAB_04b19ac0;
  FUN_032aae60(plVar5);
  lVar4 = *(long *)(*(long *)(*plVar5 + 0x20) + 0x18);
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  FUN_032883c0(*plVar5,0);
  (*(code *)local_60[0][4])(local_60,*(undefined8 *)(param_1 + 0x78));
  (*(code *)local_60[0][4])(local_60,*(undefined8 *)(param_1 + 0x80));
  (*(code *)local_60[0][4])(local_60,*(undefined8 *)(param_1 + 0x88));
  (*(code *)local_60[0][4])(local_60,*(undefined8 *)(param_1 + 0x90));
  (*(code *)local_60[0][4])(local_60,*(undefined8 *)(param_1 + 0x98));
  (*(code *)local_60[0][4])(local_60,*(undefined8 *)(param_1 + 0xa0));
  if (local_60 != (undefined ***)0x0) {
    (*(code *)local_60[0][1])();
  }
  return;
}

