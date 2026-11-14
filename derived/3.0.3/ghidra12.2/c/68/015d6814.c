
long FUN_015d6814(long param_1,uint param_2,undefined4 param_3)

{
  MutexType *pMVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  
  pMVar1 = (MutexType *)(param_1 + 0x638);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x610) < 1) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x608);
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(param_1 + 0x610) = *(int *)(param_1 + 0x610) + -1;
  }
  lVar9 = (long)plVar6 - (long)*(int *)(param_1 + 0x614);
  lVar8 = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = lVar9;
  }
  nn::os::UnlockMutex(pMVar1);
  local_55 = 0;
  local_98 = 0x40;
  puStack_a0 = local_94;
  local_94[0] = 0;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_038d13f0(&local_a8,"Layout_CmnProc_%03d",*(undefined4 *)(lVar8 + 0x5c));
  *(undefined4 *)(lVar8 + 0x48) = param_3;
  plVar6 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb2110 + 0x10) + (ulong)param_2 * 8);
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b0 = "WherearenPhotographMgr";
  nn::os::LockMutex((MutexType *)(plVar6 + 0x4d));
  (**(code **)(*plVar6 + 0x30))(plVar6,lVar8,&local_a8,&local_b8);
  nn::os::UnlockMutex((MutexType *)(plVar6 + 0x4d));
  if ((*(int *)(lVar8 + 0x48) == -1) || ((*(byte *)(lVar8 + 0x18) >> 1 & 1) == 0)) {
LAB_015d69c0:
    nn::os::LockMutex(pMVar1);
    plVar6 = (long *)(*(int *)(param_1 + 0x614) + lVar8);
    lVar8 = *(long *)(param_1 + 0x600);
    *(long **)(param_1 + 0x600) = plVar6;
    *plVar6 = lVar8;
    plVar6[1] = param_1 + 0x600;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = plVar6;
    }
    *(int *)(param_1 + 0x610) = *(int *)(param_1 + 0x610) + 1;
    nn::os::UnlockMutex(pMVar1);
    return 0;
  }
  lVar2 = lVar8 + 0x10;
  uVar4 = FUN_03f2d924(lVar2);
  if ((uVar4 & 1) == 0) goto LAB_015d69c0;
  if (((*(byte *)(lVar8 + 0x18) >> 1 & 1) != 0) && (uVar4 = FUN_03f2d924(lVar2), (uVar4 & 1) != 0))
  {
    puVar5 = (undefined8 *)FUN_03f2d7f0(lVar2);
    if (((*PTR_DAT_04bb4440 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4440), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb4438 = PTR_DAT_04bb4448 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4440);
    }
    if ((puVar5 != (undefined8 *)0x0) &&
       (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bb4438), (uVar4 & 1) != 0)) {
      uVar7 = puVar5[5];
      goto LAB_015d6a24;
    }
  }
  uVar7 = 0;
LAB_015d6a24:
  *(undefined8 *)(lVar8 + 0x50) = uVar7;
  *(uint *)(lVar8 + 0x58) = param_2;
  return lVar9;
}

