
undefined8 FUN_033269b0(long param_1)

{
  undefined8 *puVar1;
  MutexType *pMVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  FUN_032d1220(*(undefined8 *)(param_1 + 0x390));
  if (*(long *)(param_1 + 0x398) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x398);
    plVar5 = *(long **)PTR_DAT_04bc9410;
    pMVar2 = (MutexType *)(plVar5 + 5);
    nn::os::LockMutex(pMVar2);
    puVar3 = (undefined8 *)*plVar5;
    if ((undefined8 *)*plVar5 == (undefined8 *)0x0) {
      *plVar5 = (long)puVar1;
    }
    else {
      do {
        puVar4 = puVar3;
        puVar3 = (undefined8 *)puVar4[2];
      } while ((undefined8 *)puVar4[2] != (undefined8 *)0x0);
      puVar4[2] = puVar1;
      *(undefined8 **)(param_1 + 0x3a0) = puVar4;
      plVar5 = (long *)*puVar4;
    }
    *puVar1 = plVar5;
    nn::os::UnlockMutex(pMVar2);
  }
  if (((*(long *)(param_1 + 0x20) != 0) && (-1 < *(int *)(param_1 + 0x30))) &&
     (plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x80), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(long *)(param_1 + 0x28) = param_1 + 0xe0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return 1;
}

