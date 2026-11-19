
void FUN_03af47e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  short *psVar17;
  long lVar18;
  
  lVar14 = param_1[2];
  iVar5 = *(int *)(param_1 + 1);
  *param_1 = &PTR_FUN_04b727b8;
  if (iVar5 != 0) {
    uVar10 = 0;
    uVar12 = 0;
    do {
      FUN_03af4c6c(param_1,uVar10);
      plVar8 = *(long **)(lVar14 + (long)(int)uVar12 * 0x23c0 + 0x1fa8);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      uVar10 = uVar12 + 1;
      uVar12 = uVar10 & 0xffffffff;
    } while (iVar5 != (int)uVar10);
    lVar14 = param_1[2];
  }
  if (lVar14 != 0) {
    plVar8 = (long *)(lVar14 + -8);
    if (*plVar8 != 0) {
      lVar18 = *plVar8 * 0x23c0;
      lVar15 = 0;
      puVar1 = PTR_DAT_04bbd508 + 0x10;
      puVar2 = PTR_DAT_04bd11b8 + 0x10;
      do {
        lVar11 = lVar14 + lVar18;
        if (*(short *)(lVar11 + -0xe) != -1) {
          lVar13 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar13 + 0x580));
          uVar7 = (int)*(short *)(lVar11 + -0xe) - (uint)*(ushort *)(lVar13 + 0x5c0);
          if (*(uint *)(lVar13 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar16 = *(long *)(lVar13 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar16 + 0x76) + -1;
          *(short *)(lVar16 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar13 + 0x5c4) = *(short *)(lVar13 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar13 + 0x580));
          *(undefined2 *)(lVar11 + -0xe) = 0xffff;
        }
        lVar13 = lVar14 + lVar18 + -0x18f8;
        FUN_038fd0e0(lVar11 + -0x98);
        *(undefined **)(lVar13 + 0x1730) = puVar1;
        FUN_038fd0e0(lVar11 + -0x170);
        psVar17 = (short *)(lVar11 + -0x1d6);
        if (*psVar17 != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar7 = (int)*psVar17 - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar4 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *psVar17 = -1;
        }
        FUN_038fd0e0(lVar11 + -0x260);
        puVar3 = PTR_DAT_04bbd508 + 0x10;
        *(undefined **)(lVar13 + 0x1568) = puVar3;
        FUN_038fd0e0(lVar11 + -0x338);
        *(undefined **)(lVar13 + 0x14e8) = puVar2;
        FUN_0390d560(lVar11 + -0x410);
        FUN_038fd0e0(lVar11 + -0x470);
        psVar17 = (short *)(lVar11 + -0x4f6);
        if (*psVar17 != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar7 = (int)*psVar17 - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar4 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *psVar17 = -1;
        }
        FUN_038fd0e0(lVar11 + -0x580);
        *(undefined **)(lVar13 + 0x1240) = puVar3;
        FUN_038fd0e0(lVar11 + -0x660);
        psVar17 = (short *)(lVar11 + -0x74e);
        if (*psVar17 != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar7 = (int)*psVar17 - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar4 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *psVar17 = -1;
        }
        FUN_038fd0e0(lVar11 + -0x7d8);
        puVar3 = PTR_DAT_04bbd508 + 0x10;
        *(undefined **)(lVar13 + 0xfe8) = puVar3;
        FUN_038fd0e0(lVar11 + -0x8b8);
        FUN_03afb154(lVar13 + 0x7c0);
        FUN_03afb154(lVar13);
        FUN_03afb154(lVar13 + -0x7c0);
        psVar17 = (short *)(lVar13 + -0x7ce);
        if (*psVar17 != -1) {
          lVar11 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar11 + 0x580));
          uVar7 = (int)*psVar17 - (uint)*(ushort *)(lVar11 + 0x5c0);
          if (*(uint *)(lVar11 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar16 = *(long *)(lVar11 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar16 + 0x76) + -1;
          *(short *)(lVar16 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar11 + 0x5c4) = *(short *)(lVar11 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar11 + 0x580));
          *psVar17 = -1;
        }
        FUN_038fd0e0(lVar13 + -0x858);
        FUN_038fd0e0(lVar13 + -0x8f8);
        *(undefined **)(lVar13 + -0xa28) = puVar3;
        FUN_038fd0e0(lVar13 + -0x9d0);
        lVar14 = lVar14 + -0x23c0;
        lVar15 = lVar15 + 0x23c0;
      } while (lVar18 != lVar15);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar8);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar8);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  FUN_038e1a84(param_1 + 9);
  return;
}

