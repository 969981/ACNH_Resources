
void FUN_03aabd30(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  short sVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  short *psVar14;
  long lVar15;
  void *__ptr;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar16 = param_1[0x3d];
  *param_1 = (long)&PTR_LAB_04b70f18;
  param_1[6] = (long)&PTR_LAB_04b70f48;
  plVar9 = (long *)PTR_DAT_04bb2698;
  if (lVar16 != 0) {
    plVar10 = (long *)(lVar16 + -8);
    if (*plVar10 != 0) {
      lVar19 = *plVar10 * 0x15e8;
      lVar17 = 0;
      puVar1 = PTR_DAT_04bbd500 + 0x10;
      puVar2 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar15 = lVar16 + lVar19;
        *(undefined **)(lVar15 + -0x118) = puVar1;
        FUN_038fd0e0(lVar15 + -0xc0);
        *(undefined **)(lVar15 + -0x1f8) = puVar2;
        FUN_038fd0e0(lVar15 + -0x1a0);
        psVar14 = (short *)(lVar15 + -0x266);
        if (*psVar14 != -1) {
          lVar18 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
          uVar7 = (int)*psVar14 - (uint)*(ushort *)(lVar18 + 0x5c0);
          if (*(uint *)(lVar18 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar15 + -0x2f0);
        puVar3 = PTR_DAT_04bbd500 + 0x10;
        *(undefined **)(lVar15 + -0x460) = puVar3;
        FUN_038fd0e0(lVar15 + -0x408);
        puVar4 = PTR_DAT_04bbd508 + 0x10;
        *(undefined **)(lVar15 + -0x540) = puVar4;
        FUN_038fd0e0(lVar15 + -0x4e8);
        psVar14 = (short *)(lVar15 + -0x5ae);
        if (*psVar14 != -1) {
          lVar18 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
          uVar7 = (int)*psVar14 - (uint)*(ushort *)(lVar18 + 0x5c0);
          if (*(uint *)(lVar18 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar15 + -0x638);
        *(undefined **)(lVar15 + -0x7a8) = puVar3;
        FUN_038fd0e0(lVar15 + -0x750);
        *(undefined **)(lVar15 + -0x888) = puVar4;
        FUN_038fd0e0(lVar15 + -0x830);
        psVar14 = (short *)(lVar15 + -0x8f6);
        if (*psVar14 != -1) {
          lVar18 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
          uVar7 = (int)*psVar14 - (uint)*(ushort *)(lVar18 + 0x5c0);
          if (*(uint *)(lVar18 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar15 + -0x980);
        puVar3 = PTR_DAT_04bbd500 + 0x10;
        *(undefined **)(lVar15 + -0xaf0) = puVar3;
        FUN_038fd0e0(lVar15 + -0xa98);
        puVar4 = PTR_DAT_04bbd508 + 0x10;
        *(undefined **)(lVar15 + -0xbd0) = puVar4;
        FUN_038fd0e0(lVar15 + -0xb78);
        psVar14 = (short *)(lVar15 + -0xc3e);
        if (*psVar14 != -1) {
          lVar18 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
          uVar7 = (int)*psVar14 - (uint)*(ushort *)(lVar18 + 0x5c0);
          if (*(uint *)(lVar18 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar15 + -0xcc8);
        *(undefined **)(lVar15 + -0xe38) = puVar3;
        FUN_038fd0e0(lVar15 + -0xde0);
        *(undefined **)(lVar15 + -0xf18) = puVar4;
        FUN_038fd0e0(lVar15 + -0xec0);
        psVar14 = (short *)(lVar15 + -0xf86);
        if (*psVar14 != -1) {
          lVar15 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar15 + 0x580));
          uVar7 = (int)*psVar14 - (uint)*(ushort *)(lVar15 + 0x5c0);
          if (*(uint *)(lVar15 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar18 = *(long *)(lVar15 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar18 + 0x76) + -1;
          *(short *)(lVar18 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar15 + 0x5c4) = *(short *)(lVar15 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar15 + 0x580));
          *psVar14 = -1;
        }
        plVar9 = (long *)(lVar16 + lVar19 + -0x1180);
        FUN_038fd0e0(plVar9 + 0x2e);
        *plVar9 = (long)(PTR_DAT_04bbd500 + 0x10);
        FUN_038fd0e0(plVar9 + 0xb);
        plVar9[-0x1c] = (long)(PTR_DAT_04bbd508 + 0x10);
        FUN_038fd0e0(plVar9 + -0x11);
        psVar14 = (short *)((long)plVar9 + -0x14e);
        if (*psVar14 != -1) {
          lVar15 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar15 + 0x580));
          uVar7 = (int)*psVar14 - (uint)*(ushort *)(lVar15 + 0x5c0);
          if (*(uint *)(lVar15 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar18 = *(long *)(lVar15 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar18 + 0x76) + -1;
          *(short *)(lVar18 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar15 + 0x5c4) = *(short *)(lVar15 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar15 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(plVar9 + -0x3b);
        lVar16 = lVar16 + -0x15e8;
        lVar17 = lVar17 + 0x15e8;
      } while (lVar19 != lVar17);
    }
    plVar9 = (long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar10);
      }
    }
    param_1[0x3d] = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  __ptr = (void *)param_1[0x3f];
  if (__ptr != (void *)0x0) {
    if (*plVar9 == 0) {
      free(__ptr);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*plVar9,__ptr);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,__ptr);
      }
    }
    param_1[0x3f] = 0;
    *(undefined4 *)(param_1 + 0x3e) = 0;
  }
  puVar1 = PTR_DAT_04bbd578;
  lVar16 = param_1[0x41];
  if (lVar16 != 0) {
    plVar10 = (long *)(lVar16 + -8);
    if (*plVar10 != 0) {
      lVar17 = *plVar10 * 0x1b0;
      puVar2 = PTR_DAT_04bbd578 + 0x10;
      do {
        plVar8 = (long *)(lVar16 + -0xd0 + lVar17);
        lVar17 = lVar17 + -0x1b0;
        plVar8[0x16] = (long)puVar2;
        plVar8[0x11] = (long)puVar2;
        plVar8[0xd] = (long)puVar2;
        plVar8[8] = (long)puVar2;
        plVar8[4] = (long)puVar2;
        *plVar8 = (long)puVar2;
        plVar8[-6] = (long)puVar2;
        plVar8[-10] = (long)puVar2;
        plVar8[-0xe] = (long)puVar2;
        plVar8[-0x12] = (long)puVar2;
        plVar8[-0x16] = (long)puVar2;
        plVar8[-0x1c] = (long)&PTR_LAB_04b70e30;
        plVar8[-0x1b] = (long)puVar2;
      } while (lVar17 != 0);
    }
    if (*plVar9 == 0) {
      free(plVar10);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*plVar9,plVar10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar10);
      }
    }
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  puVar1 = puVar1 + 0x10;
  param_1[0x38] = (long)puVar1;
  param_1[0x33] = (long)puVar1;
  param_1[0x2f] = (long)puVar1;
  param_1[0x2a] = (long)puVar1;
  param_1[0x26] = (long)puVar1;
  param_1[0x22] = (long)puVar1;
  param_1[0x1c] = (long)puVar1;
  param_1[0x18] = (long)puVar1;
  param_1[0x14] = (long)puVar1;
  param_1[0x10] = (long)puVar1;
  param_1[0xc] = (long)puVar1;
  param_1[6] = (long)&PTR_LAB_04b70e30;
  param_1[7] = (long)puVar1;
  plVar10 = (long *)param_1[5];
  *param_1 = (long)(PTR_DAT_04bd12a0 + 0x10);
  puVar1 = PTR_DAT_04bd1068;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + -1;
    lVar16 = *plVar8;
    if (lVar16 != 0) {
      plVar11 = plVar10 + lVar16 * 6;
      uVar13 = lVar16 * 0x30 - 0x30;
      uVar7 = ((uint)(uVar13 / 0x30) & 0x7ffffff) + 1;
      if ((uVar7 & 7) != 0) {
        puVar2 = PTR_DAT_04bd1068 + 0x10;
        lVar16 = ((ulong)uVar7 & 7) * 0x30;
        do {
          lVar16 = lVar16 + -0x30;
          plVar11 = plVar11 + -6;
          *plVar11 = (long)puVar2;
        } while (lVar16 != 0);
      }
      if (0x14f < uVar13) {
        puVar1 = puVar1 + 0x10;
        plVar11 = plVar11 + -0x18;
        do {
          plVar11[0x12] = (long)puVar1;
          plVar11[0xc] = (long)puVar1;
          plVar11[6] = (long)puVar1;
          *plVar11 = (long)puVar1;
          plVar11[-6] = (long)puVar1;
          plVar11[-0xc] = (long)puVar1;
          plVar11[-0x12] = (long)puVar1;
          plVar12 = plVar11 + -0x18;
          *plVar12 = (long)puVar1;
          plVar11 = plVar11 + -0x30;
        } while (plVar12 != plVar10);
      }
    }
    if (*plVar9 == 0) {
      free(plVar8);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*plVar9,plVar8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar8);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

