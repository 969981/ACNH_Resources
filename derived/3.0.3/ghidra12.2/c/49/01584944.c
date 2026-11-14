
long FUN_01584944(long param_1,undefined4 param_2)

{
  MutexType *pMVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  
  pMVar1 = (MutexType *)(param_1 + 0x628);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x600) < 1) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x5f8);
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(param_1 + 0x600) = *(int *)(param_1 + 0x600) + -1;
  }
  lVar10 = (long)plVar7 - (long)*(int *)(param_1 + 0x604);
  lVar9 = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = lVar10;
  }
  nn::os::UnlockMutex(pMVar1);
  local_45 = 0;
  local_88 = 0x40;
  puStack_90 = local_84;
  local_84[0] = 0;
  local_98 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_038d13f0(&local_98,"Layout_CmnProc_%03d",*(undefined4 *)(lVar9 + 0x5c));
  puVar3 = PTR_DAT_04bb2110;
  *(undefined4 *)(lVar9 + 0x48) = param_2;
  plVar7 = (long *)**(undefined8 **)(*(long *)puVar3 + 0x10);
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_a0 = "HotelRoomPhotographMgr";
  nn::os::LockMutex((MutexType *)(plVar7 + 0x4d));
  (**(code **)(*plVar7 + 0x30))(plVar7,lVar9,&local_98,&local_a8);
  nn::os::UnlockMutex((MutexType *)(plVar7 + 0x4d));
  if ((*(int *)(lVar9 + 0x48) == -1) || ((*(byte *)(lVar9 + 0x18) >> 1 & 1) == 0)) {
LAB_01584ae8:
    nn::os::LockMutex(pMVar1);
    plVar7 = (long *)(*(int *)(param_1 + 0x604) + lVar9);
    lVar9 = *(long *)(param_1 + 0x5f0);
    *(long **)(param_1 + 0x5f0) = plVar7;
    *plVar7 = lVar9;
    plVar7[1] = param_1 + 0x5f0;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar7;
    }
    *(int *)(param_1 + 0x600) = *(int *)(param_1 + 0x600) + 1;
    nn::os::UnlockMutex(pMVar1);
    return 0;
  }
  lVar2 = lVar9 + 0x10;
  uVar5 = FUN_03f2d924(lVar2);
  if ((uVar5 & 1) == 0) goto LAB_01584ae8;
  if (((*(byte *)(lVar9 + 0x18) >> 1 & 1) != 0) && (uVar5 = FUN_03f2d924(lVar2), (uVar5 & 1) != 0))
  {
    puVar6 = (undefined8 *)FUN_03f2d7f0(lVar2);
    if (((*PTR_DAT_04bb4440 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4440), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4438 = PTR_DAT_04bb4448 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4440);
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb4438), (uVar5 & 1) != 0)) {
      uVar8 = puVar6[5];
      goto LAB_01584b48;
    }
  }
  uVar8 = 0;
LAB_01584b48:
  *(undefined8 *)(lVar9 + 0x50) = uVar8;
  *(undefined4 *)(lVar9 + 0x58) = 0;
  return lVar10;
}

