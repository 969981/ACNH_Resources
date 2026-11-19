
void FUN_03a81a40(undefined8 *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  void *__ptr;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = param_1[6];
  *param_1 = &PTR_FUN_04b70a30;
  puVar5 = PTR_DAT_04bb2698;
  iVar2 = *(int *)(param_1 + 5);
  if (iVar2 != 0) {
    iVar10 = 0;
    do {
      lVar11 = lVar9 + (long)iVar10 * 0x1d80;
      __ptr = *(void **)(lVar11 + 0x1690);
      if (__ptr != (void *)0x0) {
        if (*(long *)puVar5 == 0) {
          free(__ptr);
        }
        else {
          plVar6 = (long *)FUN_038cb610(*(long *)puVar5,__ptr);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
          }
        }
        *(undefined8 *)(lVar11 + 0x1690) = 0;
        *(undefined4 *)(lVar9 + (long)iVar10 * 0x1d80 + 0x1688) = 0;
      }
      lVar12 = lVar9 + (long)iVar10 * 0x1d80;
      lVar11 = *(long *)(lVar12 + 0x16a0);
      if (lVar11 != 0) {
        plVar6 = (long *)(lVar11 + -8);
        if (*plVar6 != 0) {
          lVar8 = *plVar6 * 0x350;
          do {
            FUN_03a814b8(lVar11 + -0x350 + lVar8);
            lVar8 = lVar8 + -0x350;
          } while (lVar8 != 0);
        }
        if (*(long *)puVar5 == 0) {
          free(plVar6);
        }
        else {
          plVar7 = (long *)FUN_038cb610(*(long *)puVar5,plVar6);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
          }
        }
        *(undefined8 *)(lVar12 + 0x16a0) = 0;
        *(undefined4 *)(lVar12 + 0x1698) = 0;
      }
      lVar12 = lVar9 + (long)iVar10 * 0x1d80;
      lVar11 = *(long *)(lVar12 + 0x16b0);
      if (lVar11 != 0) {
        plVar6 = (long *)(lVar11 + -8);
        if (*plVar6 != 0) {
          lVar8 = *plVar6 * 0x350;
          do {
            FUN_03a814b8(lVar11 + -0x350 + lVar8);
            lVar8 = lVar8 + -0x350;
          } while (lVar8 != 0);
        }
        if (*(long *)puVar5 == 0) {
          free(plVar6);
        }
        else {
          plVar7 = (long *)FUN_038cb610(*(long *)puVar5,plVar6);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
          }
        }
        *(undefined8 *)(lVar12 + 0x16b0) = 0;
        *(undefined4 *)(lVar12 + 0x16a8) = 0;
      }
      lVar12 = lVar9 + (long)iVar10 * 0x1d80;
      lVar11 = *(long *)(lVar12 + 0x16c0);
      if (lVar11 != 0) {
        plVar6 = (long *)(lVar11 + -8);
        if (*plVar6 != 0) {
          lVar8 = *plVar6 * 0x350;
          do {
            FUN_03a814b8(lVar11 + -0x350 + lVar8);
            lVar8 = lVar8 + -0x350;
          } while (lVar8 != 0);
        }
        if (*(long *)puVar5 == 0) {
          free(plVar6);
        }
        else {
          plVar7 = (long *)FUN_038cb610(*(long *)puVar5,plVar6);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
          }
        }
        *(undefined8 *)(lVar12 + 0x16c0) = 0;
        *(undefined4 *)(lVar12 + 0x16b8) = 0;
      }
      iVar10 = iVar10 + 1;
    } while (iVar2 != iVar10);
    lVar9 = param_1[6];
  }
  if (lVar9 != 0) {
    plVar6 = (long *)(lVar9 + -8);
    if (*plVar6 != 0) {
      lVar11 = 0;
      lVar12 = *plVar6 * 0x1d80;
      do {
        lVar8 = lVar9 + lVar12;
        FUN_03a814b8(lVar8 + -0x368);
        FUN_03a814b8(lVar8 + -0x6b8);
        FUN_03a814b8(lVar8 + -0xa48);
        FUN_03a814b8(lVar8 + -0xd98);
        lVar8 = lVar9 + lVar12 + -0x1438;
        FUN_03a814b8(lVar8 + 0x350);
        FUN_03a814b8(lVar8);
        FUN_03a814b8(lVar8 + -0x350);
        FUN_03a814b8(lVar8 + -0x6a0);
        lVar11 = lVar11 + 0x1d80;
        lVar9 = lVar9 + -0x1d80;
      } while (lVar12 != lVar11);
    }
    if (*(long *)puVar5 == 0) {
      free(plVar6);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar5,plVar6);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
      }
    }
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  lVar9 = param_1[0x9f];
  param_1[0x9e] = &PTR_FUN_04b64428;
  if (lVar9 != 0) {
    if (lVar9 == 1) goto LAB_03a81df4;
    if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar9 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
    }
    plVar6 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x84) + 0x4f0);
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + -1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
  }
  param_1[0x9f] = 1;
LAB_03a81df4:
  lVar9 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x4ea) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)((long)param_1 + 0x4ea) - (uint)*(ushort *)(lVar9 + 0x5c0);
    if (*(uint *)(lVar9 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar11 = *(long *)(lVar9 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar11 + 0x76) + -1;
    *(short *)(lVar11 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar9 + 0x5c4) = *(short *)(lVar9 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar1);
    *(undefined2 *)((long)param_1 + 0x4ea) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x8c);
  FUN_038fd0e0(param_1 + 0x78);
  lVar9 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar9 != 0) {
    if (lVar9 == 1) {
      return;
    }
    if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar9 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
    }
    plVar6 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)param_1);
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + -1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

