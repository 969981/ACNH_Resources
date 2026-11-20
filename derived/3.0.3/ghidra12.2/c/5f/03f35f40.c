
long FUN_03f35f40(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined ***pppuStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  char *pcStack_78;
  undefined **local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined *puStack_58;
  
  pMVar1 = (MutexType *)(param_1 + 0x4d8);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x4b0) < 1) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4ac);
    iVar4 = *(int *)(param_1 + 0x4a8);
    iVar2 = 0;
    if (iVar4 <= iVar3) {
      iVar2 = iVar4;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x4a0) + (long)(iVar3 - iVar2) * 8);
    *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) + -1;
    iVar2 = 0;
    if (iVar3 + 1 < iVar4) {
      iVar2 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x4ac) = iVar2;
    nn::os::UnlockMutex(pMVar1);
    if (lVar8 != 0) goto LAB_03f36284;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if ((long *)plVar7[3] != plVar7 + 2) {
    lVar6 = (long)*(int *)((long)plVar7 + 0x24);
    lVar9 = plVar7[3] - lVar6;
    lVar8 = lVar9 + lVar6;
    do {
      if (*(byte *)(lVar9 + 8) < 5) break;
      lVar8 = *(long *)(lVar8 + 8);
      if (*(long *)(lVar9 + 0x20) != 0) {
        FUN_03f42ca4(*(long *)(lVar9 + 0x20),lVar9,1);
      }
      FUN_03f44a6c(lVar9,*(undefined8 *)(param_1 + 0x140));
      lVar9 = lVar8 - lVar6;
    } while ((long)(plVar7 + 2) - lVar6 != lVar9);
  }
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x4b0) < 1) {
    lVar8 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4ac);
    iVar4 = *(int *)(param_1 + 0x4a8);
    iVar2 = 0;
    if (iVar4 <= iVar3) {
      iVar2 = iVar4;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x4a0) + (long)(iVar3 - iVar2) * 8);
    *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) + -1;
    iVar2 = 0;
    if (iVar3 + 1 < iVar4) {
      iVar2 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x4ac) = iVar2;
  }
  nn::os::UnlockMutex(pMVar1);
  (**(code **)(*plVar7 + 0x28))(plVar7);
  if (lVar8 == 0) {
    local_68 = 1;
    local_64 = 100;
    local_70 = &PTR_LAB_04ba8b98;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_c0 = PTR_DAT_04bb5070 + 0x10;
    puStack_58 = PTR_DAT_04bb2120;
    pppuStack_98 = &local_70;
    local_b6 = 8;
    local_b8 = 0x101;
    local_b0 = *(undefined8 *)(param_1 + 0x148);
    uStack_a8 = 0;
    local_a0 = param_1 + 0x3e0;
    pcStack_78 = "ClearCaches";
    local_60 = local_80;
    FUN_03f44830(*(undefined8 *)(param_1 + 0x1c8),&local_c0);
    nn::os::LockMutex(pMVar1);
    if (*(int *)(param_1 + 0x4b0) < 1) {
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4ac);
      iVar4 = *(int *)(param_1 + 0x4a8);
      iVar2 = 0;
      if (iVar4 <= iVar3) {
        iVar2 = iVar4;
      }
      lVar8 = *(long *)(*(long *)(param_1 + 0x4a0) + (long)(iVar3 - iVar2) * 8);
      *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) + -1;
      iVar2 = 0;
      if (iVar3 + 1 < iVar4) {
        iVar2 = iVar3 + 1;
      }
      *(int *)(param_1 + 0x4ac) = iVar2;
      nn::os::UnlockMutex(pMVar1);
      if (lVar8 != 0) goto LAB_03f36284;
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    if ((long *)plVar7[3] != plVar7 + 2) {
      lVar6 = (long)*(int *)((long)plVar7 + 0x24);
      lVar9 = plVar7[3] - lVar6;
      lVar8 = lVar9 + lVar6;
      do {
        if (*(byte *)(lVar9 + 8) < 5) break;
        lVar8 = *(long *)(lVar8 + 8);
        if (*(long *)(lVar9 + 0x20) != 0) {
          FUN_03f42ca4(*(long *)(lVar9 + 0x20),lVar9,1);
        }
        FUN_03f44a6c(lVar9,*(undefined8 *)(param_1 + 0x140));
        lVar9 = lVar8 - lVar6;
      } while ((long)(plVar7 + 2) - lVar6 != lVar9);
    }
    nn::os::LockMutex(pMVar1);
    if (*(int *)(param_1 + 0x4b0) < 1) {
      lVar8 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4ac);
      iVar4 = *(int *)(param_1 + 0x4a8);
      iVar2 = 0;
      if (iVar4 <= iVar3) {
        iVar2 = iVar4;
      }
      lVar8 = *(long *)(*(long *)(param_1 + 0x4a0) + (long)(iVar3 - iVar2) * 8);
      *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) + -1;
      iVar2 = 0;
      if (iVar3 + 1 < iVar4) {
        iVar2 = iVar3 + 1;
      }
      *(int *)(param_1 + 0x4ac) = iVar2;
    }
    nn::os::UnlockMutex(pMVar1);
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
LAB_03f36284:
  uVar5 = FUN_03f3d3a0(lVar8,*param_2);
  if ((uVar5 & 1) == 0) {
    lVar8 = 0;
  }
  return lVar8;
}

