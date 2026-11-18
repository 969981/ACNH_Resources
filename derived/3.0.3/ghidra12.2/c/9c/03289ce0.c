
void FUN_03289ce0(long param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_04bc9410;
  plVar7 = *(long **)PTR_DAT_04bc9410;
  if (*(long *)(param_1 + 0x430) == 0) {
    pMVar1 = (MutexType *)(plVar7 + 5);
    puVar2 = (undefined8 *)(param_1 + 0x430);
    nn::os::LockMutex(pMVar1);
    puVar4 = (undefined8 *)*plVar7;
    if ((undefined8 *)*plVar7 == (undefined8 *)0x0) {
      *plVar7 = (long)puVar2;
    }
    else {
      do {
        puVar6 = puVar4;
        puVar4 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = puVar2;
      *(undefined8 **)(param_1 + 0x438) = puVar6;
      plVar7 = (long *)*puVar6;
    }
    *puVar2 = plVar7;
    nn::os::UnlockMutex(pMVar1);
    plVar7 = *(long **)puVar3;
    lVar5 = *(long *)(param_1 + 0x488);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x488);
  }
  if (lVar5 == 0) {
    pMVar1 = (MutexType *)(plVar7 + 5);
    puVar2 = (undefined8 *)(param_1 + 0x488);
    nn::os::LockMutex(pMVar1);
    puVar4 = (undefined8 *)*plVar7;
    if ((undefined8 *)*plVar7 == (undefined8 *)0x0) {
      *plVar7 = (long)puVar2;
    }
    else {
      do {
        puVar6 = puVar4;
        puVar4 = (undefined8 *)puVar6[2];
      } while ((undefined8 *)puVar6[2] != (undefined8 *)0x0);
      puVar6[2] = puVar2;
      *(undefined8 **)(param_1 + 0x490) = puVar6;
      plVar7 = (long *)*puVar6;
    }
    *puVar2 = plVar7;
    nn::os::UnlockMutex(pMVar1);
  }
  FUN_032883c0(param_1,1);
  return;
}

