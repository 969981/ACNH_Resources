
void FUN_039745e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  short *psVar14;
  int iVar15;
  long lVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar18 = param_1[4];
  iVar7 = *(int *)(param_1 + 3);
  *param_1 = &PTR_FUN_04b685a0;
  if (iVar7 != 0) {
    iVar15 = 0;
    do {
      FUN_0390d560(lVar18 + (long)iVar15 * 0x970 + 0x238);
      iVar15 = iVar15 + 1;
    } while (iVar7 != iVar15);
    lVar18 = param_1[4];
  }
  plVar11 = (long *)PTR_DAT_04bb2698;
  if (lVar18 != 0) {
    plVar12 = (long *)(lVar18 + -8);
    if (*plVar12 != 0) {
      lVar20 = *plVar12 * 0x970;
      lVar19 = 0;
      puVar1 = PTR_DAT_04bbd500 + 0x10;
      puVar2 = PTR_DAT_04bbd508 + 0x10;
      puVar3 = PTR_DAT_04bd11b8 + 0x10;
      do {
        lVar5 = lVar18 + lVar20;
        *(undefined **)(lVar5 + -0x1f0) = puVar1;
        FUN_038fd0e0(lVar5 + -0x198);
        *(undefined **)(lVar5 + -0x2d0) = puVar2;
        FUN_038fd0e0(lVar5 + -0x278);
        *(undefined **)(lVar5 + -0x3b0) = puVar2;
        FUN_038fd0e0(lVar5 + -0x358);
        psVar14 = (short *)(lVar5 + -0x426);
        if (*psVar14 != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar9 = (int)*psVar14 - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar9) {
            uVar9 = 0;
          }
          lVar6 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar9 * 0x80;
          sVar8 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar8;
          if (sVar8 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar5 + -0x4b0);
        psVar14 = (short *)(lVar5 + -0x506);
        if (*psVar14 != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar9 = (int)*psVar14 - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar9) {
            uVar9 = 0;
          }
          lVar6 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar9 * 0x80;
          sVar8 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar8;
          if (sVar8 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar5 + -0x590);
        psVar14 = (short *)(lVar5 + -0x5e6);
        if (*psVar14 != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar9 = (int)*psVar14 - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar9) {
            uVar9 = 0;
          }
          lVar6 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar9 * 0x80;
          sVar8 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar8;
          if (sVar8 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar5 + -0x670);
        *(undefined **)(lVar5 + -0x738) = puVar3;
        FUN_0390d560();
        lVar19 = lVar19 + 0x970;
        lVar18 = lVar18 + -0x970;
      } while (lVar20 != lVar19);
    }
    plVar11 = (long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar12);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar12);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,plVar12);
      }
    }
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  (**(code **)(*(long *)param_1[5] + 0x18))();
  pvVar17 = (void *)param_1[5];
  if (pvVar17 != (void *)0x0) {
    if (*plVar11 == 0) {
      free(pvVar17);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*plVar11,pvVar17);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar17);
      }
    }
  }
  (**(code **)(*(long *)param_1[6] + 0x18))();
  pvVar17 = (void *)param_1[6];
  if (pvVar17 != (void *)0x0) {
    if (*plVar11 == 0) {
      free(pvVar17);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*plVar11,pvVar17);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar17);
      }
    }
  }
  (**(code **)(*(long *)param_1[7] + 0x18))();
  pvVar17 = (void *)param_1[7];
  if (pvVar17 != (void *)0x0) {
    if (*plVar11 == 0) {
      free(pvVar17);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*plVar11,pvVar17);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar17);
      }
    }
  }
  pvVar17 = (void *)param_1[9];
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 != 0) {
    uVar13 = 0;
    do {
      if (*(long *)((long)pvVar17 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3)) != 0) {
        *(undefined8 *)((long)pvVar17 + (long)(int)uVar13 * 8) = 0;
      }
      uVar4 = uVar13 + 1;
      uVar13 = uVar4 & 0xffffffff;
    } while (iVar7 != (int)uVar4);
    pvVar17 = (void *)param_1[9];
  }
  if (pvVar17 != (void *)0x0) {
    if (*plVar11 == 0) {
      free(pvVar17);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*plVar11,pvVar17);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar17);
      }
    }
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((long *)param_1[0x8f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8f] + 8))();
  }
  pvVar17 = (void *)param_1[0xc1];
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  if (pvVar17 != (void *)0x0) {
    if (*plVar11 == 0) {
      free(pvVar17);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*plVar11,pvVar17);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar17);
      }
    }
  }
  param_1[0xc2] = PTR_DAT_04bbd578 + 0x10;
  if (*(short *)((long)param_1 + 0x602) != -1) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
    uVar9 = (int)*(short *)((long)param_1 + 0x602) - (uint)*(ushort *)(lVar18 + 0x5c0);
    if (*(uint *)(lVar18 + 0x5a0) <= uVar9) {
      uVar9 = 0;
    }
    lVar19 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar9 * 0x80;
    sVar8 = *(short *)(lVar19 + 0x76) + -1;
    *(short *)(lVar19 + 0x76) = sVar8;
    if (sVar8 == 0) {
      *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
    *(undefined2 *)((long)param_1 + 0x602) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xaf);
  FUN_038fd0e0(param_1 + 0x9b);
  lVar18 = param_1[0x46];
  param_1[0x45] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar18 != 0) {
    if (lVar18 == 1) {
      return;
    }
    if ((*(uint *)(lVar18 + 0xd0) & 1) == 0) {
      lVar19 = 0;
    }
    else {
      lVar19 = lVar18 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar18 + 0xb0));
    }
    plVar11 = (long *)((long)param_1 + (long)*(int *)(lVar18 + 0x84) + 0x228);
    if (*plVar11 != 0) {
      *(long *)(*plVar11 + 8) = plVar11[1];
    }
    if ((long *)plVar11[1] != (long *)0x0) {
      *(long *)plVar11[1] = *plVar11;
    }
    *plVar11 = 0;
    plVar11[1] = 0;
    *(int *)(lVar18 + 0x80) = *(int *)(lVar18 + 0x80) + -1;
    if (lVar19 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar19 + 0x20));
    }
  }
  param_1[0x46] = 1;
  return;
}

