
void FUN_03a2d250(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  void *__ptr;
  long lVar13;
  undefined *puVar14;
  short *psVar15;
  long lVar16;
  long lVar17;
  
  *param_1 = (long)&PTR_LAB_04b6d590;
  param_1[0xbe] = (long)&PTR_LAB_04b6d5d8;
  lVar12 = param_1[0xfe];
  param_1[0xfd] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar12 != 0) {
    if (lVar12 == 1) goto LAB_03a2d314;
    if ((*(uint *)(lVar12 + 0xd0) & 1) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = lVar12 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar12 + 0xb0));
    }
    plVar7 = (long *)((long)param_1 + (long)*(int *)(lVar12 + 0x84) + 0x7e8);
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + -1;
    if (lVar13 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
    }
  }
  param_1[0xfe] = 1;
LAB_03a2d314:
  puVar1 = PTR_DAT_04bd1070;
  puVar14 = PTR_DAT_04bbd578;
  *param_1 = (long)&PTR_LAB_04b6d650;
  lVar12 = param_1[0xb9];
  param_1[0xf8] = (long)(puVar14 + 0x10);
  param_1[0xbe] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bc1010;
  plVar7 = (long *)PTR_DAT_04bb2698;
  if (lVar12 != 0) {
    plVar8 = (long *)(lVar12 + -8);
    if (*plVar8 != 0) {
      lVar13 = 0;
      lVar16 = *plVar8 * 0x808;
      puVar14 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar2 = lVar12 + lVar16;
        FUN_039a5e20(lVar2 + -0x30);
        *(undefined **)(lVar2 + -0x130) = puVar14;
        FUN_038fd0e0(lVar2 + -0xd8);
        psVar15 = (short *)(lVar2 + -0x136);
        if (*psVar15 != -1) {
          lVar17 = *(long *)puVar1;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar5 = (int)*psVar15 - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar3 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar4 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar4;
          if (sVar4 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *psVar15 = -1;
        }
        FUN_038fd0e0(lVar2 + -0x1c0);
        *(undefined **)(lVar2 + -0x318) = PTR_DAT_04bbd508 + 0x10;
        FUN_038fd0e0(lVar2 + -0x2c0);
        psVar15 = (short *)(lVar2 + -0x31e);
        if (*psVar15 != -1) {
          lVar17 = *(long *)puVar1;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar5 = (int)*psVar15 - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar3 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar4 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar4;
          if (sVar4 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *psVar15 = -1;
        }
        FUN_038fd0e0(lVar2 + -0x3a8);
        psVar15 = (short *)(lVar2 + -0x48e);
        if (*psVar15 != -1) {
          lVar17 = *(long *)puVar1;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar5 = (int)*psVar15 - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar3 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar4 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar4;
          if (sVar4 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *psVar15 = -1;
        }
        FUN_038fd0e0(lVar2 + -0x518);
        psVar15 = (short *)(lVar2 + -0x56e);
        if (*psVar15 != -1) {
          lVar17 = *(long *)puVar1;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar5 = (int)*psVar15 - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar3 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar4 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar4;
          if (sVar4 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *psVar15 = -1;
        }
        FUN_038fd0e0(lVar2 + -0x5f8);
        psVar15 = (short *)(lVar2 + -0x64e);
        if (*psVar15 != -1) {
          lVar17 = *(long *)puVar1;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar5 = (int)*psVar15 - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar3 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar4 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar4;
          if (sVar4 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *psVar15 = -1;
        }
        FUN_038fd0e0(lVar2 + -0x6d8);
        psVar15 = (short *)(lVar2 + -0x72e);
        if (*psVar15 != -1) {
          lVar17 = *(long *)puVar1;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar5 = (int)*psVar15 - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar3 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar4 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar4;
          if (sVar4 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *psVar15 = -1;
        }
        FUN_038fd0e0(lVar2 + -0x7b8);
        lVar13 = lVar13 + 0x808;
        lVar12 = lVar12 + -0x808;
      } while (lVar16 != lVar13);
    }
    plVar7 = (long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar8);
      puVar14 = PTR_DAT_04bbd578;
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar8);
      puVar14 = PTR_DAT_04bbd578;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar8);
      }
    }
    param_1[0xb9] = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  __ptr = (void *)param_1[0xbb];
  if (__ptr != (void *)0x0) {
    if (*plVar7 == 0) {
      free(__ptr);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*plVar7,__ptr);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,__ptr);
      }
    }
    param_1[0xbb] = 0;
    *(undefined4 *)(param_1 + 0xba) = 0;
  }
  lVar12 = param_1[0xbd];
  if (lVar12 != 0) {
    plVar8 = (long *)(lVar12 + -8);
    if (*plVar8 != 0) {
      lVar13 = *plVar8 * 0x590;
      puVar1 = puVar14 + 0x10;
      do {
        plVar6 = (long *)(lVar12 + -0x590 + lVar13);
        lVar13 = lVar13 + -0x590;
        plVar6[0xab] = (long)puVar1;
        plVar6[0xa7] = (long)puVar1;
        plVar6[0xa3] = (long)puVar1;
        plVar6[0x9f] = (long)puVar1;
        plVar6[0x9b] = (long)puVar1;
        plVar6[0x97] = (long)puVar1;
        plVar6[0x93] = (long)puVar1;
        plVar6[0x8f] = (long)puVar1;
        plVar6[0x8b] = (long)puVar1;
        plVar6[0x87] = (long)puVar1;
        plVar6[0x82] = (long)puVar1;
        plVar6[0x7e] = (long)puVar1;
        plVar6[0x7a] = (long)puVar1;
        plVar6[0x75] = (long)puVar1;
        plVar6[0x70] = (long)puVar1;
        plVar6[0x6b] = (long)puVar1;
        plVar6[0x66] = (long)puVar1;
        plVar6[0x62] = (long)puVar1;
        plVar6[0x5e] = (long)puVar1;
        plVar6[0x5a] = (long)puVar1;
        plVar6[0x56] = (long)puVar1;
        plVar6[0x52] = (long)puVar1;
        plVar6[0x4e] = (long)puVar1;
        plVar6[0x4a] = (long)puVar1;
        plVar6[0x46] = (long)puVar1;
        plVar6[0x42] = (long)puVar1;
        plVar6[0x3e] = (long)puVar1;
        plVar6[0x3a] = (long)puVar1;
        plVar6[0x36] = (long)puVar1;
        plVar6[0x32] = (long)puVar1;
        plVar6[0x2e] = (long)puVar1;
        plVar6[0x2a] = (long)puVar1;
        plVar6[0x26] = (long)puVar1;
        plVar6[0x21] = (long)puVar1;
        plVar6[0x1d] = (long)puVar1;
        plVar6[0x19] = (long)puVar1;
        plVar6[0x15] = (long)puVar1;
        plVar6[0x11] = (long)puVar1;
        plVar6[0xc] = (long)puVar1;
        plVar6[8] = (long)puVar1;
        plVar6[4] = (long)puVar1;
        *plVar6 = (long)puVar1;
      } while (lVar13 != 0);
    }
    if (*plVar7 == 0) {
      free(plVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*plVar7,plVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar8);
      }
    }
    param_1[0xbd] = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  puVar14 = puVar14 + 0x10;
  param_1[0xb1] = (long)puVar14;
  param_1[0xad] = (long)puVar14;
  param_1[0xa9] = (long)puVar14;
  param_1[0xa5] = (long)puVar14;
  param_1[0xa1] = (long)puVar14;
  param_1[0x9d] = (long)puVar14;
  param_1[0x99] = (long)puVar14;
  param_1[0x95] = (long)puVar14;
  param_1[0x91] = (long)puVar14;
  param_1[0x8d] = (long)puVar14;
  param_1[0x88] = (long)puVar14;
  param_1[0x84] = (long)puVar14;
  param_1[0x80] = (long)puVar14;
  param_1[0x7b] = (long)puVar14;
  param_1[0x76] = (long)puVar14;
  param_1[0x71] = (long)puVar14;
  param_1[0x6c] = (long)puVar14;
  param_1[0x68] = (long)puVar14;
  param_1[100] = (long)puVar14;
  param_1[0x60] = (long)puVar14;
  param_1[0x5c] = (long)puVar14;
  param_1[0x58] = (long)puVar14;
  param_1[0x54] = (long)puVar14;
  param_1[0x50] = (long)puVar14;
  param_1[0x4c] = (long)puVar14;
  param_1[0x48] = (long)puVar14;
  param_1[0x44] = (long)puVar14;
  param_1[0x40] = (long)puVar14;
  param_1[0x3c] = (long)puVar14;
  param_1[0x38] = (long)puVar14;
  param_1[0x34] = (long)puVar14;
  param_1[0x30] = (long)puVar14;
  param_1[0x2c] = (long)puVar14;
  param_1[0x27] = (long)puVar14;
  param_1[0x23] = (long)puVar14;
  param_1[0x1f] = (long)puVar14;
  param_1[0x1b] = (long)puVar14;
  param_1[0x17] = (long)puVar14;
  param_1[0x12] = (long)puVar14;
  param_1[0xe] = (long)puVar14;
  param_1[10] = (long)puVar14;
  param_1[6] = (long)puVar14;
  *param_1 = (long)(PTR_DAT_04bd12a0 + 0x10);
  puVar14 = PTR_DAT_04bd1068;
  plVar8 = (long *)param_1[5];
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + -1;
    lVar12 = *plVar6;
    if (lVar12 != 0) {
      plVar9 = plVar8 + lVar12 * 6;
      uVar11 = lVar12 * 0x30 - 0x30;
      uVar5 = ((uint)(uVar11 / 0x30) & 0x7ffffff) + 1;
      if ((uVar5 & 7) != 0) {
        puVar1 = PTR_DAT_04bd1068 + 0x10;
        lVar12 = ((ulong)uVar5 & 7) * 0x30;
        do {
          lVar12 = lVar12 + -0x30;
          plVar9 = plVar9 + -6;
          *plVar9 = (long)puVar1;
        } while (lVar12 != 0);
      }
      if (0x14f < uVar11) {
        puVar14 = puVar14 + 0x10;
        plVar9 = plVar9 + -0x18;
        do {
          plVar9[0x12] = (long)puVar14;
          plVar9[0xc] = (long)puVar14;
          plVar9[6] = (long)puVar14;
          *plVar9 = (long)puVar14;
          plVar9[-6] = (long)puVar14;
          plVar9[-0xc] = (long)puVar14;
          plVar9[-0x12] = (long)puVar14;
          plVar10 = plVar9 + -0x18;
          *plVar10 = (long)puVar14;
          plVar9 = plVar9 + -0x30;
        } while (plVar10 != plVar8);
      }
    }
    if (*plVar7 == 0) {
      free(plVar6);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*plVar7,plVar6);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

