
void FUN_03ac10d0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  short sVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  short *psVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar16 = param_1[0x3b];
  *param_1 = (long)&PTR_FUN_04b71290;
  puVar5 = PTR_DAT_04bc1010;
  if (lVar16 != 0) {
    plVar10 = (long *)(lVar16 + -8);
    if (*plVar10 != 0) {
      lVar18 = *plVar10 * 0x1340;
      lVar17 = 0;
      puVar1 = PTR_DAT_04bbd500 + 0x10;
      puVar2 = PTR_DAT_04bd11b8 + 0x10;
      puVar3 = PTR_DAT_04bbd508 + 0x10;
      lVar15 = lVar18 + -0x102e;
      do {
        lVar12 = lVar16 + lVar18;
        psVar11 = (short *)(lVar12 + -0x366);
        if (*psVar11 != -1) {
          lVar13 = *(long *)puVar5;
          nn::os::LockMutex((MutexType *)(lVar13 + 0x580));
          uVar8 = (int)*psVar11 - (uint)*(ushort *)(lVar13 + 0x5c0);
          if (*(uint *)(lVar13 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar14 = *(long *)(lVar13 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar14 + 0x76) + -1;
          *(short *)(lVar14 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar13 + 0x5c4) = *(short *)(lVar13 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar13 + 0x580));
          *psVar11 = -1;
        }
        lVar13 = lVar16 + lVar15;
        FUN_038fd0e0(lVar12 + -0x3f0);
        *(undefined **)(lVar13 + 0xaee) = puVar1;
        FUN_038fd0e0(lVar12 + -0x4e8);
        *(undefined **)(lVar13 + 0xa0e) = puVar3;
        FUN_038fd0e0(lVar12 + -0x5c8);
        *(undefined **)(lVar13 + 0x8c6) = puVar3;
        FUN_038fd0e0(lVar12 + -0x710);
        *(undefined **)(lVar13 + 0x7e6) = puVar3;
        FUN_038fd0e0(lVar12 + -0x7f0);
        psVar11 = (short *)(lVar12 + -0x92e);
        if (*psVar11 != -1) {
          lVar14 = *(long *)puVar5;
          nn::os::LockMutex((MutexType *)(lVar14 + 0x580));
          uVar8 = (int)*psVar11 - (uint)*(ushort *)(lVar14 + 0x5c0);
          if (*(uint *)(lVar14 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar6 = *(long *)(lVar14 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar14 + 0x5c4) = *(short *)(lVar14 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar14 + 0x580));
          *psVar11 = -1;
        }
        FUN_038fd0e0(lVar12 + -0x9b8);
        psVar11 = (short *)(lVar12 + -0xa0e);
        if (*psVar11 != -1) {
          lVar14 = *(long *)puVar5;
          nn::os::LockMutex((MutexType *)(lVar14 + 0x580));
          uVar8 = (int)*psVar11 - (uint)*(ushort *)(lVar14 + 0x5c0);
          if (*(uint *)(lVar14 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar6 = *(long *)(lVar14 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar14 + 0x5c4) = *(short *)(lVar14 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar14 + 0x580));
          *psVar11 = -1;
        }
        FUN_038fd0e0(lVar12 + -0xa98);
        *(undefined **)(lVar13 + 0x466) = PTR_DAT_04bbd500 + 0x10;
        FUN_038fd0e0(lVar12 + -0xb70);
        puVar4 = PTR_DAT_04bbd508 + 0x10;
        *(undefined **)(lVar13 + 0x386) = puVar4;
        FUN_038fd0e0(lVar12 + -0xc50);
        psVar11 = (short *)(lVar12 + -0xd1e);
        if (*psVar11 != -1) {
          lVar14 = *(long *)puVar5;
          nn::os::LockMutex((MutexType *)(lVar14 + 0x580));
          uVar8 = (int)*psVar11 - (uint)*(ushort *)(lVar14 + 0x5c0);
          if (*(uint *)(lVar14 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar6 = *(long *)(lVar14 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar14 + 0x5c4) = *(short *)(lVar14 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar14 + 0x580));
          *psVar11 = -1;
        }
        FUN_038fd0e0(lVar12 + -0xda8);
        *(undefined **)(lVar13 + 0x156) = puVar4;
        FUN_038fd0e0(lVar12 + -0xe80);
        psVar11 = (short *)(lVar12 + -0xf4e);
        if (*psVar11 != -1) {
          lVar14 = *(long *)puVar5;
          nn::os::LockMutex((MutexType *)(lVar14 + 0x580));
          uVar8 = (int)*psVar11 - (uint)*(ushort *)(lVar14 + 0x5c0);
          if (*(uint *)(lVar14 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar6 = *(long *)(lVar14 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar6 + 0x76) + -1;
          *(short *)(lVar6 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar14 + 0x5c4) = *(short *)(lVar14 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar14 + 0x580));
          *psVar11 = -1;
        }
        FUN_038fd0e0(lVar12 + -0xfd8);
        if (*(short *)(lVar16 + lVar15) != -1) {
          lVar12 = *(long *)puVar5;
          nn::os::LockMutex((MutexType *)(lVar12 + 0x580));
          uVar8 = (int)*(short *)(lVar16 + lVar15) - (uint)*(ushort *)(lVar12 + 0x5c0);
          if (*(uint *)(lVar12 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar14 = *(long *)(lVar12 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar14 + 0x76) + -1;
          *(short *)(lVar14 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar12 + 0x5c4) = *(short *)(lVar12 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar12 + 0x580));
          *(undefined2 *)(lVar16 + lVar15) = 0xffff;
        }
        FUN_038fd0e0(lVar13 + -0x8a);
        if (*(short *)(lVar13 + -0xe0) != -1) {
          lVar12 = *(long *)puVar5;
          nn::os::LockMutex((MutexType *)(lVar12 + 0x580));
          uVar8 = (int)*(short *)(lVar13 + -0xe0) - (uint)*(ushort *)(lVar12 + 0x5c0);
          if (*(uint *)(lVar12 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar14 = *(long *)(lVar12 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar14 + 0x76) + -1;
          *(short *)(lVar14 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar12 + 0x5c4) = *(short *)(lVar12 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar12 + 0x580));
          *(undefined2 *)(lVar13 + -0xe0) = 0xffff;
        }
        FUN_038fd0e0(lVar13 + -0x16a);
        psVar11 = (short *)(lVar13 + -0x1c0);
        if (*psVar11 != -1) {
          lVar12 = *(long *)puVar5;
          nn::os::LockMutex((MutexType *)(lVar12 + 0x580));
          uVar8 = (int)*psVar11 - (uint)*(ushort *)(lVar12 + 0x5c0);
          if (*(uint *)(lVar12 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar14 = *(long *)(lVar12 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar14 + 0x76) + -1;
          *(short *)(lVar14 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar12 + 0x5c4) = *(short *)(lVar12 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar12 + 0x580));
          *psVar11 = -1;
        }
        FUN_038fd0e0(lVar16 + lVar18 + -0x1278);
        *(long *)(lVar13 + -0x312) = (long)puVar2;
        FUN_0390d560((long *)(lVar13 + -0x312));
        lVar16 = lVar16 + -0x1340;
        lVar17 = lVar17 + 0x1340;
      } while (lVar18 != lVar17);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar10);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar10);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar10);
      }
    }
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  puVar5 = PTR_DAT_04bbd578 + 0x10;
  param_1[0xfe] = (long)puVar5;
  param_1[0xfa] = (long)puVar5;
  param_1[0xf6] = (long)puVar5;
  param_1[0xf2] = (long)puVar5;
  param_1[0xee] = (long)puVar5;
  param_1[0xea] = (long)puVar5;
  param_1[0xe6] = (long)puVar5;
  param_1[0xe2] = (long)puVar5;
  param_1[0xde] = (long)puVar5;
  param_1[0xda] = (long)puVar5;
  param_1[0xd6] = (long)puVar5;
  param_1[0xd2] = (long)puVar5;
  param_1[0xce] = (long)puVar5;
  param_1[0xca] = (long)puVar5;
  param_1[0xc6] = (long)puVar5;
  param_1[0xc2] = (long)puVar5;
  param_1[0xbe] = (long)puVar5;
  param_1[0xba] = (long)puVar5;
  param_1[0xb6] = (long)puVar5;
  param_1[0xb2] = (long)puVar5;
  param_1[0xae] = (long)puVar5;
  param_1[0xaa] = (long)puVar5;
  param_1[0xa6] = (long)puVar5;
  param_1[0xa2] = (long)puVar5;
  param_1[0x9e] = (long)puVar5;
  param_1[0x9a] = (long)puVar5;
  param_1[0x96] = (long)puVar5;
  param_1[0x92] = (long)puVar5;
  param_1[0x8e] = (long)puVar5;
  param_1[0x8a] = (long)puVar5;
  param_1[0x84] = (long)(PTR_DAT_04bd1068 + 0x10);
  lVar16 = param_1[0x3e];
  param_1[0x3d] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar16 != 0) {
    if (lVar16 == 1) goto LAB_03ac17a8;
    if ((*(uint *)(lVar16 + 0xd0) & 1) == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = lVar16 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar16 + 0xb0));
    }
    plVar10 = (long *)((long)param_1 + (long)*(int *)(lVar16 + 0x84) + 0x1e8);
    if (*plVar10 != 0) {
      *(long *)(*plVar10 + 8) = plVar10[1];
    }
    if ((long *)plVar10[1] != (long *)0x0) {
      *(long *)plVar10[1] = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(lVar16 + 0x80) = *(int *)(lVar16 + 0x80) + -1;
    if (lVar15 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
    }
  }
  param_1[0x3e] = 1;
LAB_03ac17a8:
  *param_1 = (long)(PTR_DAT_04bd1070 + 0x10);
  return;
}

