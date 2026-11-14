
long FUN_015a26c0(long param_1,uint param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  pMVar1 = (MutexType *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x14);
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 8);
  lVar6 = *(long *)(param_1 + 8) - (long)iVar3;
  nn::os::LockMutex(pMVar1);
  lVar5 = param_1 - *(int *)(param_1 + 0x14);
  if (lVar6 != lVar5) {
    do {
      if ((*(int *)(lVar6 + 0x3c0) < 1) &&
         (((param_2 ^ (*(ushort *)(lVar6 + 0x4b0) & 2) >> 1) & 1) == 0)) {
        nn::os::LockMutex(pMVar1);
        plVar2 = (long *)(lVar6 + *(int *)(param_1 + 0x14));
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        nn::os::UnlockMutex(pMVar1);
        puVar4 = PTR_DAT_04bb3170;
        *(undefined8 *)(lVar6 + 0x3c8) = 0;
        *(undefined8 **)(lVar6 + 0x3a8) = &DAT_0407ebb1;
        *(undefined2 *)(lVar6 + 0x3c4) = *(undefined2 *)puVar4;
        *(ushort *)(lVar6 + 0x4b0) = *(ushort *)(lVar6 + 0x4b0) & 0xfffe;
        *(undefined4 *)(lVar6 + 0x3c0) = 0;
        goto LAB_015a27bc;
      }
      lVar6 = lVar7 - iVar3;
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar6 != lVar5);
  }
  lVar6 = 0;
LAB_015a27bc:
  nn::os::UnlockMutex(pMVar1);
  return lVar6;
}

