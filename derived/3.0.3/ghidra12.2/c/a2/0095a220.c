
void FUN_0095a220(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  
  puVar3 = PTR_DAT_04bb2110;
  if (*(int *)(*(long *)PTR_DAT_04bb2110 + 8) == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bb2110 + 0x10);
  }
  pMVar1 = (MutexType *)(plVar7 + 0x4d);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xa8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xf8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x148);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x198);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x1e8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x238);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x288);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x2d8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x328);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x378);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x3c8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x418);
  nn::os::UnlockMutex(pMVar1);
  uVar4 = *(uint *)(param_1 + 0x4c0);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x4c8);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex(pMVar1);
      (**(code **)(*plVar7 + 0x38))(plVar7,lVar6 + (ulong)uVar2 * 0x50);
      nn::os::UnlockMutex(pMVar1);
      uVar4 = *(uint *)(param_1 + 0x4c0);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x4d0);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x4d8);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex(pMVar1);
      (**(code **)(*plVar7 + 0x38))(plVar7,lVar6 + (ulong)uVar2 * 0x50);
      nn::os::UnlockMutex(pMVar1);
      uVar4 = *(uint *)(param_1 + 0x4d0);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x4e8);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x4f0);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex(pMVar1);
      (**(code **)(*plVar7 + 0x38))(plVar7,lVar6 + (ulong)uVar2 * 0x50);
      nn::os::UnlockMutex(pMVar1);
      uVar4 = *(uint *)(param_1 + 0x4e8);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x4f8);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x500);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex(pMVar1);
      (**(code **)(*plVar7 + 0x38))(plVar7,lVar6 + (ulong)uVar2 * 0x50);
      nn::os::UnlockMutex(pMVar1);
      uVar4 = *(uint *)(param_1 + 0x4f8);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  lVar6 = *(long *)puVar3;
  iVar5 = *(int *)(lVar6 + 8);
  if (iVar5 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)**(undefined8 **)(lVar6 + 0x10);
  }
  uVar4 = *(uint *)(param_1 + 0x508);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x510);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex((MutexType *)(plVar8 + 0x4d));
      (**(code **)(*plVar8 + 0x38))(plVar8,lVar6 + (ulong)uVar2 * 0xe8);
      nn::os::UnlockMutex((MutexType *)(plVar8 + 0x4d));
      uVar4 = uVar9;
      if (*(uint *)(param_1 + 0x508) <= uVar9) {
        uVar4 = 0;
      }
      uVar9 = uVar9 + 1;
      **(undefined1 **)(*(long *)(param_1 + 0x510) + (ulong)uVar4 * 0xe8 + 0x58) = 0;
      uVar4 = *(uint *)(param_1 + 0x508);
    } while ((int)uVar9 < (int)uVar4);
    lVar6 = *(long *)puVar3;
    iVar5 = *(int *)(lVar6 + 8);
  }
  if (iVar5 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)**(undefined8 **)(lVar6 + 0x10);
  }
  uVar4 = *(uint *)(param_1 + 0x518);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x520);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex((MutexType *)(plVar8 + 0x4d));
      (**(code **)(*plVar8 + 0x38))(plVar8,lVar6 + (ulong)uVar2 * 0xe8);
      nn::os::UnlockMutex((MutexType *)(plVar8 + 0x4d));
      uVar4 = uVar9;
      if (*(uint *)(param_1 + 0x518) <= uVar9) {
        uVar4 = 0;
      }
      uVar9 = uVar9 + 1;
      **(undefined1 **)(*(long *)(param_1 + 0x520) + (ulong)uVar4 * 0xe8 + 0x58) = 0;
      uVar4 = *(uint *)(param_1 + 0x518);
    } while ((int)uVar9 < (int)uVar4);
  }
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x548);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x598);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x5e8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x638);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x688);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x6d8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x728);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x778);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x7c8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x818);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x868);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x8b8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x908);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x958);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x9a8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0x9f8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xa48);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xa98);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xae8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xb38);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xb88);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xbd8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xc28);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xc78);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xcc8);
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xd18);
  nn::os::UnlockMutex(pMVar1);
  uVar4 = *(uint *)(param_1 + 0xd68);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0xd70);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex(pMVar1);
      (**(code **)(*plVar7 + 0x38))(plVar7,lVar6 + (ulong)uVar2 * 0x50);
      nn::os::UnlockMutex(pMVar1);
      uVar4 = *(uint *)(param_1 + 0xd68);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0xd78);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0xd80);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex(pMVar1);
      (**(code **)(*plVar7 + 0x38))(plVar7,lVar6 + (ulong)uVar2 * 0x50);
      nn::os::UnlockMutex(pMVar1);
      uVar4 = *(uint *)(param_1 + 0xd78);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0xd88);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0xd90);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex(pMVar1);
      (**(code **)(*plVar7 + 0x38))(plVar7,lVar6 + (ulong)uVar2 * 0x50);
      nn::os::UnlockMutex(pMVar1);
      uVar4 = *(uint *)(param_1 + 0xd88);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0xd98);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0xda0);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex(pMVar1);
      (**(code **)(*plVar7 + 0x38))(plVar7,lVar6 + (ulong)uVar2 * 0x50);
      nn::os::UnlockMutex(pMVar1);
      uVar4 = *(uint *)(param_1 + 0xd98);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0xda8);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0xdb0);
      uVar2 = uVar9;
      if (uVar4 <= uVar9) {
        uVar2 = 0;
      }
      nn::os::LockMutex(pMVar1);
      (**(code **)(*plVar7 + 0x38))(plVar7,lVar6 + (ulong)uVar2 * 0x50);
      nn::os::UnlockMutex(pMVar1);
      uVar4 = *(uint *)(param_1 + 0xda8);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar4);
  }
  return;
}

