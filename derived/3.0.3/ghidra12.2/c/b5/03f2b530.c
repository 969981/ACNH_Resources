
bool FUN_03f2b530(long param_1,ulong param_2)

{
  MutexType *pMVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  puVar4 = PTR_DAT_04bdf140;
  puVar3 = PTR_DAT_04bb49b8;
  pMVar1 = (MutexType *)(PTR_DAT_04bdf140 + 0x20);
  do {
    while( true ) {
      if (*(int *)(param_1 + 0x68) < 1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = *(long **)(param_1 + 0x60);
        if (*plVar7 != 0) {
          *(long *)(*plVar7 + 8) = plVar7[1];
        }
        if ((long *)plVar7[1] != (long *)0x0) {
          *(long *)plVar7[1] = *plVar7;
        }
        *plVar7 = 0;
        plVar7[1] = 0;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
      }
      lVar2 = 0;
      if (plVar7 != (long *)0x0) {
        lVar2 = (long)plVar7 - (long)*(int *)(param_1 + 0x6c);
      }
      local_68 = lVar2;
      if (lVar2 == 0) goto LAB_03f2b6dc;
      nn::os::LockMutex(pMVar1);
      lVar5 = local_68;
      if (*(char *)(local_68 + 0xd) < '\0') break;
      nn::os::UnlockMutex((MutexType *)(puVar4 + 0x20));
    }
    lVar8 = *(long *)(local_68 + 0x80);
    if (lVar8 != 0) {
      nn::os::LockMutex((MutexType *)(puVar4 + 0x20));
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        plVar7 = (long *)(lVar8 + 0x10);
        lVar8 = FUN_03f3be90(plVar7,*plVar7,lVar5 + 0x2b0);
        *plVar7 = lVar8;
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x18) = 1;
        }
        *(byte *)(lVar5 + 8) = *(byte *)(lVar5 + 8) & 0xfe;
      }
      nn::os::UnlockMutex((MutexType *)(puVar4 + 0x20));
    }
    nn::os::UnlockMutex((MutexType *)(puVar4 + 0x20));
    lVar5 = local_68;
    lVar8 = *(long *)puVar3;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x518));
    if (*(long *)(lVar5 + 0xc0) != 0 || *(long *)(lVar5 + 0xb8) != 0) {
      plVar7 = (long *)(*(int *)(lVar8 + 0x54c) + lVar5);
      if (*plVar7 != 0) {
        *(long *)(*plVar7 + 8) = plVar7[1];
      }
      if ((long *)plVar7[1] != (long *)0x0) {
        *(long *)plVar7[1] = *plVar7;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      *(int *)(lVar8 + 0x548) = *(int *)(lVar8 + 0x548) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x518));
    uVar6 = *(undefined8 *)puVar3;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_03f354cc(uVar6,&local_68,1,0);
  } while (*(ulong *)(param_1 + 0xb0) < param_2);
LAB_03f2b6dc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return lVar2 != 0;
}

