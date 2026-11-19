
void FUN_03a3afe0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  short sVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  short *psVar17;
  
  *param_1 = (long)&PTR_FUN_04b6d930;
  if ((param_1[0x1b0] != 0 || param_1[0x1b3] != 0) && (param_1[0x1a9] != 0 || param_1[0x1ac] != 0))
  {
    FUN_038f4ad0(param_1 + 0x1af);
    FUN_038f4ad0(param_1 + 0x1a8);
  }
  uVar10 = *(uint *)(param_1 + 0x146);
  if (0 < (int)uVar10) {
    uVar13 = 0;
    do {
      lVar15 = param_1[0x147];
      uVar7 = uVar13;
      if (uVar10 <= uVar13) {
        uVar7 = 0;
      }
      lVar11 = lVar15 + (ulong)uVar7 * 0xab8;
      if (*(long *)(lVar11 + 0x578) != 0 || *(long *)(lVar11 + 0x590) != 0) {
        FUN_038f4ad0(lVar11 + 0x570);
      }
      if (*(long *)(lVar11 + 0x738) != 0 || *(long *)(lVar11 + 0x750) != 0) {
        FUN_038f4ad0(lVar11 + 0x730);
      }
      uVar13 = uVar13 + 1;
      *(undefined8 *)(lVar15 + (ulong)uVar7 * 0xab8 + 0x770) = 0;
      uVar10 = *(uint *)(param_1 + 0x146);
    } while ((int)uVar13 < (int)uVar10);
  }
  lVar15 = param_1[0x147];
  if (lVar15 != 0) {
    plVar12 = (long *)(lVar15 + -8);
    if (*plVar12 != 0) {
      lVar14 = *plVar12 * 0xab8;
      lVar11 = 0;
      puVar1 = PTR_DAT_04bb2cd0 + 0x10;
      puVar2 = PTR_DAT_04bd11b8 + 0x10;
      puVar3 = PTR_DAT_04bbd500 + 0x10;
      puVar4 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar5 = lVar15 + lVar14;
        *(undefined **)(lVar5 + -0x80) = puVar2;
        FUN_0390d560();
        *(long *)(lVar5 + -0xf8) = (long)puVar2;
        FUN_0390d560((long *)(lVar5 + -0xf8));
        *(undefined **)(lVar5 + -0x130) = puVar1;
        FUN_038f4940(lVar5 + -0x130);
        FUN_038fd0e0(lVar5 + -0x180);
        *(undefined **)(lVar5 + -0x388) = puVar1;
        FUN_038f4940();
        FUN_038fd0e0(lVar5 + -0x3d8);
        psVar17 = (short *)(lVar5 + -0x42e);
        if (*psVar17 != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar10 = (int)*psVar17 - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar10) {
            uVar10 = 0;
          }
          lVar6 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar10 * 0x80;
          sVar8 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar8;
          if (sVar8 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *psVar17 = -1;
        }
        FUN_038fd0e0(lVar5 + -0x4b8);
        *(undefined **)(lVar5 + -0x548) = PTR_DAT_04bb2cd0 + 0x10;
        FUN_038f4940();
        FUN_038fd0e0(lVar5 + -0x598);
        psVar17 = (short *)(lVar5 + -0x5ee);
        if (*psVar17 != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar10 = (int)*psVar17 - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar10) {
            uVar10 = 0;
          }
          lVar6 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar10 * 0x80;
          sVar8 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar8;
          if (sVar8 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *psVar17 = -1;
        }
        FUN_038fd0e0(lVar5 + -0x678);
        psVar17 = (short *)(lVar5 + -0x6ce);
        if (*psVar17 != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar10 = (int)*psVar17 - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar10) {
            uVar10 = 0;
          }
          lVar6 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar10 * 0x80;
          sVar8 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar8;
          if (sVar8 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *psVar17 = -1;
        }
        FUN_038fd0e0(lVar5 + -0x758);
        psVar17 = (short *)(lVar5 + -0x7ae);
        if (*psVar17 != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar10 = (int)*psVar17 - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar10) {
            uVar10 = 0;
          }
          lVar6 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar10 * 0x80;
          sVar8 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar8;
          if (sVar8 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *psVar17 = -1;
        }
        FUN_038fd0e0(lVar5 + -0x838);
        *(undefined **)(lVar5 + -0x968) = puVar3;
        FUN_038fd0e0(lVar5 + -0x910);
        *(undefined **)(lVar5 + -0xa48) = puVar4;
        FUN_038fd0e0(lVar5 + -0x9f0);
        lVar11 = lVar11 + 0xab8;
        lVar15 = lVar15 + -0xab8;
      } while (lVar14 != lVar11);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar12);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar12);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar12);
      }
    }
    param_1[0x147] = 0;
    *(undefined4 *)(param_1 + 0x146) = 0;
  }
  lVar15 = param_1[0x1b7];
  param_1[0x1b6] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar15 != 0) {
    if (lVar15 == 1) goto LAB_03a3b4a4;
    if ((*(uint *)(lVar15 + 0xd0) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar15 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar15 + 0xb0));
    }
    plVar12 = (long *)((long)param_1 + (long)*(int *)(lVar15 + 0x84) + 0xdb0);
    if (*plVar12 != 0) {
      *(long *)(*plVar12 + 8) = plVar12[1];
    }
    if ((long *)plVar12[1] != (long *)0x0) {
      *(long *)plVar12[1] = *plVar12;
    }
    *plVar12 = 0;
    plVar12[1] = 0;
    *(int *)(lVar15 + 0x80) = *(int *)(lVar15 + 0x80) + -1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
  }
  param_1[0x1b7] = 1;
LAB_03a3b4a4:
  puVar1 = PTR_DAT_04bb2cd0 + 0x10;
  param_1[0x1af] = (long)puVar1;
  FUN_038f4940(param_1 + 0x1af);
  param_1[0x1a8] = (long)puVar1;
  FUN_038f4940(param_1 + 0x1a8);
  if (*(short *)((long)param_1 + 0xd3a) != -1) {
    lVar15 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar15 + 0x580));
    uVar10 = (int)*(short *)((long)param_1 + 0xd3a) - (uint)*(ushort *)(lVar15 + 0x5c0);
    if (*(uint *)(lVar15 + 0x5a0) <= uVar10) {
      uVar10 = 0;
    }
    lVar11 = *(long *)(lVar15 + 0x5a8) + (long)(int)uVar10 * 0x80;
    sVar8 = *(short *)(lVar11 + 0x76) + -1;
    *(short *)(lVar11 + 0x76) = sVar8;
    if (sVar8 == 0) {
      *(short *)(lVar15 + 0x5c4) = *(short *)(lVar15 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar15 + 0x580));
    *(undefined2 *)((long)param_1 + 0xd3a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x196);
  if (*(short *)((long)param_1 + 0xc5a) != -1) {
    lVar15 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar15 + 0x580));
    uVar10 = (int)*(short *)((long)param_1 + 0xc5a) - (uint)*(ushort *)(lVar15 + 0x5c0);
    if (*(uint *)(lVar15 + 0x5a0) <= uVar10) {
      uVar10 = 0;
    }
    lVar11 = *(long *)(lVar15 + 0x5a8) + (long)(int)uVar10 * 0x80;
    sVar8 = *(short *)(lVar11 + 0x76) + -1;
    *(short *)(lVar11 + 0x76) = sVar8;
    if (sVar8 == 0) {
      *(short *)(lVar15 + 0x5c4) = *(short *)(lVar15 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar15 + 0x580));
    *(undefined2 *)((long)param_1 + 0xc5a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x17a);
  FUN_038fd0e0(param_1 + 0x166);
  FUN_038fd0e0(param_1 + 0x152);
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[299] = (long)puVar1;
  param_1[0x127] = (long)puVar1;
  param_1[0x123] = (long)puVar1;
  param_1[0x11f] = (long)puVar1;
  param_1[0x11b] = (long)puVar1;
  param_1[0x117] = (long)puVar1;
  param_1[0x113] = (long)puVar1;
  param_1[0x10f] = (long)puVar1;
  param_1[0x10b] = (long)puVar1;
  param_1[0x107] = (long)puVar1;
  param_1[0x103] = (long)puVar1;
  param_1[0xff] = (long)puVar1;
  param_1[0xfb] = (long)puVar1;
  param_1[0xf7] = (long)puVar1;
  param_1[0xf3] = (long)puVar1;
  param_1[0xef] = (long)puVar1;
  param_1[0xeb] = (long)puVar1;
  param_1[0xe7] = (long)puVar1;
  param_1[0xe3] = (long)puVar1;
  puVar1 = PTR_DAT_04bd1070;
  param_1[0xdd] = (long)(PTR_DAT_04bd1068 + 0x10);
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

