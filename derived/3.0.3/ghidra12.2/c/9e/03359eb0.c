
undefined8 FUN_03359eb0(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *local_60;
  long *local_58;
  
  FUN_032d1220(*(undefined8 *)(param_1 + 0x10));
  puVar5 = DAT_0572e5c8;
  plVar4 = (long *)(param_1 + 0x18);
  if (*plVar4 == 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    plVar2 = (long *)*puVar5;
    if ((long *)*puVar5 == (long *)0x0) {
      *puVar5 = plVar4;
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)plVar3[2];
      } while ((long *)plVar3[2] != (long *)0x0);
      plVar3[2] = (long)plVar4;
      *(long **)(param_1 + 0x20) = plVar3;
      puVar5 = (undefined8 *)*plVar3;
    }
    *plVar4 = (long)puVar5;
    nn::os::UnlockMutex(pMVar1);
  }
  local_60 = PTR_DAT_04bc8e60 + 0x10;
  local_58 = (long *)0x0;
  FUN_032c7c30(plVar4,0,0,&local_60,0,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  return 1;
}

