
void FUN_03a73060(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  short *psVar14;
  long *plVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  
  plVar11 = (long *)PTR_DAT_04bb2698;
  *param_1 = (long)&PTR_FUN_04b70700;
  lVar9 = param_1[0xac];
  if (lVar9 != 0) {
    plVar15 = (long *)(lVar9 + -8);
    if (*plVar15 != 0) {
      lVar10 = *plVar15 * 0x1b8;
      puVar1 = PTR_DAT_04bbd578 + 0x10;
      puVar2 = PTR_DAT_04bd1068 + 0x10;
      do {
        plVar7 = (long *)(lVar9 + -200 + lVar10);
        lVar10 = lVar10 + -0x1b8;
        plVar7[0x14] = (long)puVar1;
        plVar7[0x10] = (long)puVar1;
        plVar7[0xc] = (long)puVar1;
        plVar7[8] = (long)puVar1;
        plVar7[4] = (long)puVar1;
        *plVar7 = (long)puVar1;
        plVar7[-4] = (long)puVar1;
        plVar7[-8] = (long)puVar1;
        plVar7[-0xc] = (long)puVar1;
        plVar7[-0x10] = (long)puVar1;
        plVar7[-0x14] = (long)puVar1;
        plVar7[-0x18] = (long)puVar1;
        plVar7[-0x1e] = (long)puVar2;
      } while (lVar10 != 0);
    }
    if (*plVar11 == 0) {
      free(plVar15);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*plVar11,plVar15);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar15);
      }
    }
    param_1[0xac] = 0;
    *(undefined4 *)(param_1 + 0xab) = 0;
  }
  pvVar16 = (void *)param_1[0x45];
  if (pvVar16 != (void *)0x0) {
    if (*plVar11 == 0) {
      free(pvVar16);
    }
    else {
      plVar15 = (long *)FUN_038cb610(*plVar11,pvVar16);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15,pvVar16);
      }
    }
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  uVar5 = *(uint *)(param_1 + 0x46);
  if (0 < (int)uVar5) {
    uVar20 = 0;
    do {
      lVar9 = param_1[0x47];
      uVar4 = uVar20;
      if (uVar5 <= uVar20) {
        uVar4 = 0;
      }
      uVar18 = (ulong)uVar4;
      lVar19 = lVar9 + uVar18 * 0x6d0;
      plVar15 = (long *)(lVar19 + 0x10);
      lVar10 = *plVar15;
      if (lVar10 != 0) {
        plVar7 = (long *)(lVar10 + -8);
        if (*plVar7 != 0) {
          lVar21 = *plVar7 * 0xe0;
          do {
            lVar13 = lVar10 + lVar21;
            if (*(short *)(lVar13 + -6) != -1) {
              lVar17 = *(long *)PTR_DAT_04bc1010;
              nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
              uVar5 = (int)*(short *)(lVar13 + -6) - (uint)*(ushort *)(lVar17 + 0x5c0);
              if (*(uint *)(lVar17 + 0x5a0) <= uVar5) {
                uVar5 = 0;
              }
              lVar3 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar5 * 0x80;
              sVar6 = *(short *)(lVar3 + 0x76) + -1;
              *(short *)(lVar3 + 0x76) = sVar6;
              if (sVar6 == 0) {
                *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
              }
              nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
              *(undefined2 *)(lVar13 + -6) = 0xffff;
            }
            FUN_038fd0e0(lVar13 + -0x90);
            lVar21 = lVar21 + -0xe0;
          } while (lVar21 != 0);
        }
        plVar11 = (long *)PTR_DAT_04bb2698;
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(plVar7);
        }
        else {
          plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar7);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x38))(plVar8,plVar7);
          }
        }
        *plVar15 = 0;
        *(undefined4 *)(lVar19 + 8) = 0;
      }
      puVar12 = (undefined8 *)(lVar9 + uVar18 * 0x6d0 + 0x20);
      pvVar16 = (void *)*puVar12;
      if (pvVar16 != (void *)0x0) {
        if (*plVar11 == 0) {
          free(pvVar16);
        }
        else {
          plVar15 = (long *)FUN_038cb610(*plVar11,pvVar16);
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x38))(plVar15,pvVar16);
          }
        }
        *puVar12 = 0;
        *(undefined4 *)(lVar9 + uVar18 * 0x6d0 + 0x18) = 0;
      }
      lVar19 = lVar9 + uVar18 * 0x6d0;
      lVar10 = *(long *)(lVar19 + 0x208);
      if (lVar10 != 0) {
        plVar15 = (long *)(lVar10 + -8);
        if (*plVar15 != 0) {
          lVar21 = *plVar15 * 0xe0;
          do {
            lVar13 = lVar10 + lVar21;
            if (*(short *)(lVar13 + -6) != -1) {
              lVar17 = *(long *)PTR_DAT_04bc1010;
              nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
              uVar5 = (int)*(short *)(lVar13 + -6) - (uint)*(ushort *)(lVar17 + 0x5c0);
              if (*(uint *)(lVar17 + 0x5a0) <= uVar5) {
                uVar5 = 0;
              }
              lVar3 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar5 * 0x80;
              sVar6 = *(short *)(lVar3 + 0x76) + -1;
              *(short *)(lVar3 + 0x76) = sVar6;
              if (sVar6 == 0) {
                *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
              }
              nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
              *(undefined2 *)(lVar13 + -6) = 0xffff;
            }
            FUN_038fd0e0(lVar13 + -0x90);
            lVar21 = lVar21 + -0xe0;
          } while (lVar21 != 0);
        }
        plVar11 = (long *)PTR_DAT_04bb2698;
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(plVar15);
        }
        else {
          plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar15);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,plVar15);
          }
        }
        *(undefined8 *)(lVar19 + 0x208) = 0;
        *(undefined4 *)(lVar19 + 0x200) = 0;
      }
      lVar10 = lVar9 + uVar18 * 0x6d0;
      pvVar16 = *(void **)(lVar10 + 0x218);
      if (pvVar16 != (void *)0x0) {
        if (*plVar11 == 0) {
          free(pvVar16);
        }
        else {
          plVar15 = (long *)FUN_038cb610(*plVar11,pvVar16);
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x38))(plVar15,pvVar16);
          }
        }
        *(undefined8 *)(lVar10 + 0x218) = 0;
        *(undefined4 *)(lVar9 + uVar18 * 0x6d0 + 0x210) = 0;
      }
      uVar20 = uVar20 + 1;
      uVar5 = *(uint *)(param_1 + 0x46);
    } while ((int)uVar20 < (int)uVar5);
  }
  lVar9 = param_1[0x47];
  if (lVar9 != 0) {
    plVar11 = (long *)(lVar9 + -8);
    if (*plVar11 != 0) {
      lVar19 = *plVar11 * 0x6d0;
      lVar10 = 0;
      puVar1 = PTR_DAT_04bbd500 + 0x10;
      puVar2 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar21 = lVar9 + lVar19;
        if (*(short *)(lVar21 + -6) != -1) {
          lVar13 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar13 + 0x580));
          uVar5 = (int)*(short *)(lVar21 + -6) - (uint)*(ushort *)(lVar13 + 0x5c0);
          if (*(uint *)(lVar13 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar17 = *(long *)(lVar13 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar6 = *(short *)(lVar17 + 0x76) + -1;
          *(short *)(lVar17 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar13 + 0x5c4) = *(short *)(lVar13 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar13 + 0x580));
          *(undefined2 *)(lVar21 + -6) = 0xffff;
        }
        FUN_038fd0e0(lVar21 + -0x90);
        *(undefined **)(lVar21 + -0x1c0) = puVar1;
        FUN_038fd0e0(lVar21 + -0x168);
        *(undefined **)(lVar21 + -0x2a0) = puVar2;
        FUN_038fd0e0(lVar21 + -0x248);
        psVar14 = (short *)(lVar21 + -0x30e);
        if (*psVar14 != -1) {
          lVar13 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar13 + 0x580));
          uVar5 = (int)*psVar14 - (uint)*(ushort *)(lVar13 + 0x5c0);
          if (*(uint *)(lVar13 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar17 = *(long *)(lVar13 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar6 = *(short *)(lVar17 + 0x76) + -1;
          *(short *)(lVar17 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar13 + 0x5c4) = *(short *)(lVar13 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar13 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar21 + -0x398);
        lVar10 = lVar10 + 0x6d0;
        lVar9 = lVar9 + -0x6d0;
      } while (lVar19 != lVar10);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar11);
    }
    else {
      plVar15 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar11);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15,plVar11);
      }
    }
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0xa7] = (long)puVar1;
  param_1[0xa3] = (long)puVar1;
  param_1[0x9f] = (long)puVar1;
  param_1[0x9b] = (long)puVar1;
  param_1[0x97] = (long)puVar1;
  param_1[0x91] = (long)(PTR_DAT_04bd1068 + 0x10);
  lVar9 = param_1[0x4b];
  param_1[0x4a] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar9 != 0) {
    if (lVar9 == 1) goto LAB_03a73710;
    if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = lVar9 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
    }
    plVar11 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x84) + 0x250);
    if (*plVar11 != 0) {
      *(long *)(*plVar11 + 8) = plVar11[1];
    }
    if ((long *)plVar11[1] != (long *)0x0) {
      *(long *)plVar11[1] = *plVar11;
    }
    *plVar11 = 0;
    plVar11[1] = 0;
    *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + -1;
    if (lVar10 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
    }
  }
  param_1[0x4b] = 1;
LAB_03a73710:
  puVar1 = PTR_DAT_04bd1070 + 0x10;
  param_1[0x3a] = (long)puVar1;
  *param_1 = (long)puVar1;
  return;
}

