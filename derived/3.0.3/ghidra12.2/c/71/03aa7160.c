
void FUN_03aa7160(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  void *__ptr;
  long lVar17;
  long lVar18;
  long lVar19;
  short *psVar20;
  long lVar21;
  
  lVar17 = param_1[0x36];
  *param_1 = (long)&PTR_LAB_04b70dc0;
  param_1[6] = (long)&PTR_LAB_04b70df0;
  plVar8 = (long *)PTR_DAT_04bb2698;
  if (lVar17 != 0) {
    plVar10 = (long *)(lVar17 + -8);
    if (*plVar10 != 0) {
      lVar21 = *plVar10 * 0x1330;
      lVar14 = 0;
      lVar9 = lVar17 + -0x1090;
      lVar16 = lVar17 + -0x1006;
      lVar19 = lVar17 + -0x10f0;
      puVar1 = PTR_DAT_04bbd500 + 0x10;
      puVar2 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar15 = lVar19 + lVar21;
        lVar3 = lVar17 + lVar21;
        *(undefined ***)(lVar15 + 0xd90) = &PTR_LAB_04b70e10;
        if (*(char *)(lVar3 + -8) != '\0') {
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar15 + 0xd98));
        }
        *(undefined8 *)(lVar15 + 0xd98) = 0;
        *(undefined1 *)(lVar3 + -8) = 0;
        *(undefined1 *)(lVar3 + -6) = 0;
        *(undefined **)(lVar15 + 0xfc8) = puVar1;
        FUN_038fd0e0(lVar3 + -0xd0);
        *(undefined **)(lVar15 + 0xee8) = puVar2;
        FUN_038fd0e0(lVar3 + -0x1b0);
        psVar20 = (short *)(lVar3 + -0x276);
        if (*psVar20 != -1) {
          lVar18 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
          uVar6 = (int)*psVar20 - (uint)*(ushort *)(lVar18 + 0x5c0);
          if (*(uint *)(lVar18 + 0x5a0) <= uVar6) {
            uVar6 = 0;
          }
          lVar4 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar6 * 0x80;
          sVar5 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar5;
          if (sVar5 == 0) {
            *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
          *psVar20 = -1;
        }
        FUN_038fd0e0(lVar3 + -0x300);
        *(undefined ***)(lVar15 + 0xa30) = &PTR_LAB_04b70e10;
        if (*(char *)(lVar3 + -0x368) != '\0') {
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar15 + 0xa38));
        }
        *(undefined8 *)(lVar15 + 0xa38) = 0;
        *(char *)(lVar3 + -0x368) = '\0';
        *(undefined1 *)(lVar3 + -0x366) = 0;
        *(undefined **)(lVar15 + 0xc68) = PTR_DAT_04bbd500 + 0x10;
        FUN_038fd0e0(lVar3 + -0x430);
        *(undefined **)(lVar15 + 0xb88) = PTR_DAT_04bbd508 + 0x10;
        FUN_038fd0e0(lVar3 + -0x510);
        psVar20 = (short *)(lVar3 + -0x5d6);
        if (*psVar20 != -1) {
          lVar18 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
          uVar6 = (int)*psVar20 - (uint)*(ushort *)(lVar18 + 0x5c0);
          if (*(uint *)(lVar18 + 0x5a0) <= uVar6) {
            uVar6 = 0;
          }
          lVar4 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar6 * 0x80;
          sVar5 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar5;
          if (sVar5 == 0) {
            *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
          *psVar20 = -1;
        }
        FUN_038fd0e0(lVar3 + -0x660);
        *(undefined ***)(lVar15 + 0x6d0) = &PTR_LAB_04b70e10;
        if (*(char *)(lVar3 + -0x6c8) != '\0') {
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar15 + 0x6d8));
        }
        *(undefined8 *)(lVar15 + 0x6d8) = 0;
        *(char *)(lVar3 + -0x6c8) = '\0';
        *(undefined1 *)(lVar3 + -0x6c6) = 0;
        *(undefined **)(lVar15 + 0x908) = PTR_DAT_04bbd500 + 0x10;
        FUN_038fd0e0(lVar3 + -0x790);
        *(undefined **)(lVar15 + 0x828) = PTR_DAT_04bbd508 + 0x10;
        FUN_038fd0e0(lVar3 + -0x870);
        psVar20 = (short *)(lVar3 + -0x936);
        if (*psVar20 != -1) {
          lVar18 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
          uVar6 = (int)*psVar20 - (uint)*(ushort *)(lVar18 + 0x5c0);
          if (*(uint *)(lVar18 + 0x5a0) <= uVar6) {
            uVar6 = 0;
          }
          lVar4 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar6 * 0x80;
          sVar5 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar5;
          if (sVar5 == 0) {
            *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
          *psVar20 = -1;
        }
        FUN_038fd0e0(lVar3 + -0x9c0);
        *(undefined ***)(lVar15 + 0x360) = &PTR_LAB_04b70e10;
        if (*(char *)(lVar3 + -0xa38) != '\0') {
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar15 + 0x368));
        }
        *(undefined8 *)(lVar15 + 0x368) = 0;
        *(char *)(lVar3 + -0xa38) = '\0';
        *(undefined1 *)(lVar3 + -0xa36) = 0;
        *(undefined **)(lVar15 + 0x598) = PTR_DAT_04bbd500 + 0x10;
        FUN_038fd0e0(lVar3 + -0xb00);
        *(undefined **)(lVar15 + 0x4b8) = PTR_DAT_04bbd508 + 0x10;
        FUN_038fd0e0(lVar3 + -0xbe0);
        psVar20 = (short *)(lVar3 + -0xca6);
        if (*psVar20 != -1) {
          lVar18 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar18 + 0x580));
          uVar6 = (int)*psVar20 - (uint)*(ushort *)(lVar18 + 0x5c0);
          if (*(uint *)(lVar18 + 0x5a0) <= uVar6) {
            uVar6 = 0;
          }
          lVar4 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar6 * 0x80;
          sVar5 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar5;
          if (sVar5 == 0) {
            *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar18 + 0x580));
          *psVar20 = -1;
        }
        FUN_038fd0e0(lVar3 + -0xd30);
        *(undefined ***)(lVar19 + lVar21) = &PTR_LAB_04b70e10;
        if (*(char *)(lVar3 + -0xd98) != '\0') {
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar15 + 8));
        }
        *(undefined8 *)(lVar15 + 8) = 0;
        *(char *)(lVar3 + -0xd98) = '\0';
        *(undefined1 *)(lVar3 + -0xd96) = 0;
        *(undefined **)(lVar15 + 0x238) = PTR_DAT_04bbd500 + 0x10;
        FUN_038fd0e0(lVar3 + -0xe60);
        *(undefined **)(lVar15 + 0x158) = PTR_DAT_04bbd508 + 0x10;
        FUN_038fd0e0(lVar3 + -0xf40);
        if (*(short *)(lVar16 + lVar21) != -1) {
          lVar15 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar15 + 0x580));
          uVar6 = (int)*(short *)(lVar16 + lVar21) - (uint)*(ushort *)(lVar15 + 0x5c0);
          if (*(uint *)(lVar15 + 0x5a0) <= uVar6) {
            uVar6 = 0;
          }
          lVar3 = *(long *)(lVar15 + 0x5a8) + (long)(int)uVar6 * 0x80;
          sVar5 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar5;
          if (sVar5 == 0) {
            *(short *)(lVar15 + 0x5c4) = *(short *)(lVar15 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar15 + 0x580));
          *(undefined2 *)(lVar16 + lVar21) = 0xffff;
        }
        FUN_038fd0e0(lVar9 + lVar21);
        lVar9 = lVar9 + -0x1330;
        lVar16 = lVar16 + -0x1330;
        lVar17 = lVar17 + -0x1330;
        lVar19 = lVar19 + -0x1330;
        lVar14 = lVar14 + 0x1330;
      } while (lVar21 != lVar14);
    }
    plVar8 = (long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar10);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar10);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar10);
      }
    }
    param_1[0x36] = 0;
    *(undefined4 *)(param_1 + 0x35) = 0;
  }
  __ptr = (void *)param_1[0x38];
  if (__ptr != (void *)0x0) {
    if (*plVar8 == 0) {
      free(__ptr);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*plVar8,__ptr);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,__ptr);
      }
    }
    param_1[0x38] = 0;
    *(undefined4 *)(param_1 + 0x37) = 0;
  }
  puVar1 = PTR_DAT_04bbd578;
  lVar17 = param_1[0x3a];
  if (lVar17 != 0) {
    plVar10 = (long *)(lVar17 + -8);
    if (*plVar10 != 0) {
      lVar9 = *plVar10 * 0x178;
      puVar2 = PTR_DAT_04bbd578 + 0x10;
      do {
        plVar7 = (long *)(lVar17 + -0xb0 + lVar9);
        lVar9 = lVar9 + -0x178;
        plVar7[0x11] = (long)puVar2;
        plVar7[0xd] = (long)puVar2;
        plVar7[8] = (long)puVar2;
        plVar7[4] = (long)puVar2;
        *plVar7 = (long)puVar2;
        plVar7[-4] = (long)puVar2;
        plVar7[-8] = (long)puVar2;
        plVar7[-0xc] = (long)puVar2;
        plVar7[-0x10] = (long)puVar2;
        plVar7[-0x14] = (long)puVar2;
        plVar7[-0x19] = (long)&PTR_LAB_04b70cd8;
        plVar7[-0x18] = (long)puVar2;
      } while (lVar9 != 0);
    }
    if (*plVar8 == 0) {
      free(plVar10);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*plVar8,plVar10);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar10);
      }
    }
    param_1[0x3a] = 0;
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  puVar1 = puVar1 + 0x10;
  param_1[0x30] = (long)puVar1;
  param_1[0x2c] = (long)puVar1;
  param_1[0x27] = (long)puVar1;
  param_1[0x23] = (long)puVar1;
  param_1[0x1f] = (long)puVar1;
  param_1[0x1b] = (long)puVar1;
  param_1[0x17] = (long)puVar1;
  param_1[0x13] = (long)puVar1;
  param_1[0xf] = (long)puVar1;
  param_1[0xb] = (long)puVar1;
  param_1[6] = (long)&PTR_LAB_04b70cd8;
  param_1[7] = (long)puVar1;
  plVar10 = (long *)param_1[5];
  *param_1 = (long)(PTR_DAT_04bd12a0 + 0x10);
  puVar1 = PTR_DAT_04bd1068;
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + -1;
    lVar17 = *plVar7;
    if (lVar17 != 0) {
      plVar11 = plVar10 + lVar17 * 6;
      uVar13 = lVar17 * 0x30 - 0x30;
      uVar6 = ((uint)(uVar13 / 0x30) & 0x7ffffff) + 1;
      if ((uVar6 & 7) != 0) {
        puVar2 = PTR_DAT_04bd1068 + 0x10;
        lVar17 = ((ulong)uVar6 & 7) * 0x30;
        do {
          lVar17 = lVar17 + -0x30;
          plVar11 = plVar11 + -6;
          *plVar11 = (long)puVar2;
        } while (lVar17 != 0);
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
    if (*plVar8 == 0) {
      free(plVar7);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*plVar8,plVar7);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar7);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

