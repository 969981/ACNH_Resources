
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032a6140(long param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined **local_60 [4];
  
  plVar4 = (long *)(param_1 + 8);
  if (*plVar4 == 0) {
    plVar3 = *(long **)(DAT_0572b8d8 + 0x120);
    if (*(long **)(DAT_0572b8d8 + 0x120) == (long *)0x0) {
      puVar6 = (undefined8 *)(DAT_0572b8d8 + 0x120);
      *puVar6 = plVar4;
    }
    else {
      do {
        plVar5 = plVar3;
        plVar3 = (long *)plVar5[2];
      } while ((long *)plVar5[2] != (long *)0x0);
      plVar5[2] = (long)plVar4;
      *(long **)(param_1 + 0x10) = plVar5;
      puVar6 = (undefined8 *)*plVar5;
    }
    *plVar4 = (long)puVar6;
  }
  FUN_032d1220(*(undefined8 *)(param_1 + 0x20));
  puVar6 = DAT_0572e5c8;
  plVar4 = *(long **)(param_1 + 0x40);
  if (*plVar4 == 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    puVar2 = (undefined8 *)*puVar6;
    if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
      *puVar6 = plVar4;
    }
    else {
      do {
        puVar6 = puVar2;
        puVar2 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = plVar4;
      plVar4[1] = (long)puVar6;
      puVar6 = (undefined8 *)*puVar6;
    }
    *plVar4 = (long)puVar6;
    nn::os::UnlockMutex(pMVar1);
  }
  puVar6 = DAT_0572e5c8;
  plVar4 = *(long **)(param_1 + 0x48);
  if (*plVar4 == 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    puVar2 = (undefined8 *)*puVar6;
    if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
      *puVar6 = plVar4;
    }
    else {
      do {
        puVar6 = puVar2;
        puVar2 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = plVar4;
      plVar4[1] = (long)puVar6;
      puVar6 = (undefined8 *)*puVar6;
    }
    *plVar4 = (long)puVar6;
    nn::os::UnlockMutex(pMVar1);
  }
  puVar6 = DAT_0572e5c8;
  plVar4 = *(long **)(param_1 + 0x50);
  if (*plVar4 == 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    puVar2 = (undefined8 *)*puVar6;
    if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
      *puVar6 = plVar4;
    }
    else {
      do {
        puVar6 = puVar2;
        puVar2 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = plVar4;
      plVar4[1] = (long)puVar6;
      puVar6 = (undefined8 *)*puVar6;
    }
    *plVar4 = (long)puVar6;
    nn::os::UnlockMutex(pMVar1);
  }
  puVar6 = DAT_0572e5c8;
  plVar4 = *(long **)(param_1 + 0x68);
  if (*plVar4 == 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    puVar2 = (undefined8 *)*puVar6;
    if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
      *puVar6 = plVar4;
    }
    else {
      do {
        puVar6 = puVar2;
        puVar2 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = plVar4;
      plVar4[1] = (long)puVar6;
      puVar6 = (undefined8 *)*puVar6;
    }
    *plVar4 = (long)puVar6;
    nn::os::UnlockMutex(pMVar1);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  local_60[0] = &PTR_LAB_04b19a48;
  FUN_032aad20(uVar7);
  FUN_032aafb0(uVar7);
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

