
void FUN_032aad20(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  plVar4 = DAT_0572baa0;
  plVar2 = (long *)*param_1;
  plVar3 = plVar2 + 1;
  if (*plVar3 == 0) {
    puVar6 = (undefined8 *)*DAT_0572baa0;
    if ((undefined8 *)*DAT_0572baa0 == (undefined8 *)0x0) {
      *DAT_0572baa0 = (long)plVar3;
    }
    else {
      do {
        puVar5 = puVar6;
        puVar6 = (undefined8 *)puVar5[2];
      } while ((undefined8 *)puVar5[2] != (undefined8 *)0x0);
      puVar5[2] = plVar3;
      plVar2[2] = (long)puVar5;
      plVar4 = (long *)*puVar5;
    }
    *plVar3 = (long)plVar4;
  }
  (**(code **)(*plVar2 + 0x28))();
  puVar6 = DAT_0572e5c8;
  plVar4 = (long *)param_1[1];
  if (*plVar4 == 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    plVar2 = (long *)*puVar6;
    if ((long *)*puVar6 == (long *)0x0) {
      *puVar6 = plVar4;
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)plVar3[2];
      } while ((long *)plVar3[2] != (long *)0x0);
      plVar3[2] = (long)plVar4;
      plVar4[1] = (long)plVar3;
      puVar6 = (undefined8 *)*plVar3;
    }
    *plVar4 = (long)puVar6;
    nn::os::UnlockMutex(pMVar1);
  }
  puVar6 = DAT_0572e5c8;
  plVar4 = (long *)param_1[2];
  if (*plVar4 != 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)*puVar6;
  if ((long *)*puVar6 == (long *)0x0) {
    *puVar6 = plVar4;
  }
  else {
    do {
      plVar3 = plVar2;
      plVar2 = (long *)plVar3[2];
    } while ((long *)plVar3[2] != (long *)0x0);
    plVar3[2] = (long)plVar4;
    plVar4[1] = (long)plVar3;
    puVar6 = (undefined8 *)*plVar3;
  }
  *plVar4 = (long)puVar6;
  nn::os::UnlockMutex(pMVar1);
  return;
}

