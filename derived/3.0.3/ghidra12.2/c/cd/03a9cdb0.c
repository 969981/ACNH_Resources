
void FUN_03a9cdb0(long *param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  short sVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  void *__ptr;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  short *psVar22;
  long lVar23;
  
  uVar7 = *(uint *)(param_1 + 0x30);
  *param_1 = (long)&PTR_LAB_04b70bd0;
  param_1[0x36] = (long)&PTR_LAB_04b70c00;
  if (0 < (int)uVar7) {
    uVar17 = 0;
    do {
      uVar6 = uVar17;
      if (*(uint *)(param_1 + 0x30) <= uVar17) {
        uVar6 = 0;
      }
      lVar20 = param_1[0x31] + (ulong)uVar6 * 0xd70;
      if (*(long **)(lVar20 + 0x4a0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar20 + 0x4a0) + 8))();
      }
      *(undefined4 *)(lVar20 + 0x490) = 0;
      *(undefined8 *)(lVar20 + 0x498) = 0;
      *(undefined8 *)(lVar20 + 0x4a0) = 0;
      if (*(long **)(lVar20 + 0x788) != (long *)0x0) {
        (**(code **)(**(long **)(lVar20 + 0x788) + 8))();
      }
      *(undefined4 *)(lVar20 + 0x778) = 0;
      *(undefined8 *)(lVar20 + 0x780) = 0;
      *(undefined8 *)(lVar20 + 0x788) = 0;
      if (*(long **)(lVar20 + 0xa70) != (long *)0x0) {
        (**(code **)(**(long **)(lVar20 + 0xa70) + 8))();
      }
      *(undefined4 *)(lVar20 + 0xa60) = 0;
      *(undefined8 *)(lVar20 + 0xa68) = 0;
      *(undefined8 *)(lVar20 + 0xa70) = 0;
      if (*(long **)(lVar20 + 0xd58) != (long *)0x0) {
        (**(code **)(**(long **)(lVar20 + 0xd58) + 8))();
      }
      uVar17 = uVar17 + 1;
      *(undefined4 *)(lVar20 + 0xd48) = 0;
      *(undefined8 *)(lVar20 + 0xd50) = 0;
      *(undefined8 *)(lVar20 + 0xd58) = 0;
    } while (uVar7 != uVar17);
  }
  puVar21 = PTR_DAT_04bd1068;
  puVar1 = PTR_DAT_04bd1170 + 0x10;
  param_1[0x133] = (long)(PTR_DAT_04bd1068 + 0x10);
  param_1[0x127] = (long)puVar1;
  puVar1 = PTR_DAT_04bc8e38;
  if (param_1[0x12a] != 0) {
    lVar20 = *(long *)PTR_DAT_04bc1010;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0x12d);
    piVar2 = (int *)(lVar20 + 0x65c);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = *piVar2 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    *(undefined4 *)(param_1 + 0x129) = 0;
    param_1[300] = 0;
    param_1[0x12a] = 0;
    param_1[299] = 0;
  }
  param_1[0x120] = (long)(PTR_DAT_04bbd550 + 0x10);
  FUN_038f4940(param_1 + 0x120);
  param_1[0xfc] = (long)(PTR_DAT_04bd11c0 + 0x10);
  if (param_1[0x11c] != 0) {
    lVar20 = *(long *)PTR_DAT_04bc1010;
    (**(code **)puVar1)(param_1 + 0xfd);
    piVar2 = (int *)(lVar20 + 0x650);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = *piVar2 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    *(undefined1 *)(param_1 + 0x104) = 0;
    *(undefined1 *)((long)param_1 + 0x82c) = 0;
    *(undefined1 *)(param_1 + 0x107) = 0;
    *(undefined1 *)((long)param_1 + 0x844) = 0;
    *(undefined1 *)(param_1 + 0x10a) = 0;
    *(undefined1 *)((long)param_1 + 0x85c) = 0;
    *(undefined1 *)(param_1 + 0x10d) = 0;
    *(undefined1 *)((long)param_1 + 0x874) = 0;
    *(undefined1 *)(param_1 + 0x110) = 0;
    *(undefined1 *)((long)param_1 + 0x88c) = 0;
    *(undefined1 *)(param_1 + 0x113) = 0;
    *(undefined1 *)((long)param_1 + 0x8a4) = 0;
    *(undefined1 *)(param_1 + 0x116) = 0;
    *(undefined1 *)((long)param_1 + 0x8bc) = 0;
    *(undefined1 *)(param_1 + 0x119) = 0;
    *(undefined1 *)((long)param_1 + 0x8d4) = 0;
    *(undefined4 *)(param_1 + 0x11b) = 0;
    param_1[0x11e] = 0;
    *(undefined4 *)(param_1 + 0x11f) = 0;
    param_1[0x11c] = 0;
    param_1[0x11d] = 0;
  }
  param_1[0xf5] = (long)&PTR_LAB_04b70c98;
  FUN_038f4940(param_1 + 0xf5);
  FUN_0390e230(param_1 + 0xb9);
  lVar20 = param_1[0x72];
  param_1[0x71] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar20 != 0) {
    if (lVar20 == 1) goto LAB_03a9d068;
    if ((*(uint *)(lVar20 + 0xd0) & 1) == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = lVar20 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar20 + 0xb0));
    }
    plVar12 = (long *)((long)param_1 + (long)*(int *)(lVar20 + 0x84) + 0x388);
    if (*plVar12 != 0) {
      *(long *)(*plVar12 + 8) = plVar12[1];
    }
    if ((long *)plVar12[1] != (long *)0x0) {
      *(long *)plVar12[1] = *plVar12;
    }
    *plVar12 = 0;
    plVar12[1] = 0;
    *(int *)(lVar20 + 0x80) = *(int *)(lVar20 + 0x80) + -1;
    if (lVar18 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar18 + 0x20));
    }
  }
  param_1[0x72] = 1;
LAB_03a9d068:
  puVar1 = PTR_DAT_04bd1070;
  *param_1 = (long)&PTR_LAB_04b70cb8;
  lVar20 = param_1[0x31];
  param_1[0x36] = (long)(puVar1 + 0x10);
  plVar12 = (long *)PTR_DAT_04bb2698;
  if (lVar20 != 0) {
    plVar13 = (long *)(lVar20 + -8);
    if (*plVar13 != 0) {
      lVar23 = *plVar13 * 0xd70;
      lVar18 = 0;
      puVar1 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar4 = lVar20 + lVar23;
        FUN_038fd0e0(lVar4 + -0x78);
        *(undefined **)(lVar4 + -0x210) = puVar1;
        FUN_038fd0e0(lVar4 + -0x1b8);
        psVar22 = (short *)(lVar4 + -0x216);
        if (*psVar22 != -1) {
          lVar19 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar19 + 0x580));
          uVar7 = (int)*psVar22 - (uint)*(ushort *)(lVar19 + 0x5c0);
          if (*(uint *)(lVar19 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar19 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar10 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar10;
          if (sVar10 == 0) {
            *(short *)(lVar19 + 0x5c4) = *(short *)(lVar19 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar19 + 0x580));
          *psVar22 = -1;
        }
        FUN_038fd0e0(lVar4 + -0x2a0);
        FUN_038fd0e0(lVar4 + -0x360);
        puVar21 = PTR_DAT_04bbd508 + 0x10;
        *(undefined **)(lVar4 + -0x4f8) = puVar21;
        FUN_038fd0e0(lVar4 + -0x4a0);
        psVar22 = (short *)(lVar4 + -0x4fe);
        if (*psVar22 != -1) {
          lVar19 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar19 + 0x580));
          uVar7 = (int)*psVar22 - (uint)*(ushort *)(lVar19 + 0x5c0);
          if (*(uint *)(lVar19 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar19 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar10 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar10;
          if (sVar10 == 0) {
            *(short *)(lVar19 + 0x5c4) = *(short *)(lVar19 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar19 + 0x580));
          *psVar22 = -1;
        }
        FUN_038fd0e0(lVar4 + -0x588);
        FUN_038fd0e0(lVar4 + -0x648);
        *(undefined **)(lVar4 + -0x7e0) = puVar21;
        FUN_038fd0e0(lVar4 + -0x788);
        psVar22 = (short *)(lVar4 + -0x7e6);
        if (*psVar22 != -1) {
          lVar19 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar19 + 0x580));
          uVar7 = (int)*psVar22 - (uint)*(ushort *)(lVar19 + 0x5c0);
          if (*(uint *)(lVar19 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar19 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar10 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar10;
          if (sVar10 == 0) {
            *(short *)(lVar19 + 0x5c4) = *(short *)(lVar19 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar19 + 0x580));
          *psVar22 = -1;
        }
        FUN_038fd0e0(lVar4 + -0x870);
        FUN_038fd0e0(lVar4 + -0x930);
        *(undefined **)(lVar4 + -0xac8) = PTR_DAT_04bbd508 + 0x10;
        FUN_038fd0e0(lVar4 + -0xa70);
        psVar22 = (short *)(lVar4 + -0xace);
        if (*psVar22 != -1) {
          lVar19 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar19 + 0x580));
          uVar7 = (int)*psVar22 - (uint)*(ushort *)(lVar19 + 0x5c0);
          if (*(uint *)(lVar19 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar19 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar10 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar10;
          if (sVar10 == 0) {
            *(short *)(lVar19 + 0x5c4) = *(short *)(lVar19 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar19 + 0x580));
          *psVar22 = -1;
        }
        FUN_038fd0e0(lVar4 + -0xb58);
        psVar22 = (short *)(lVar4 + -0xbb6);
        if (*psVar22 != -1) {
          lVar19 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar19 + 0x580));
          uVar7 = (int)*psVar22 - (uint)*(ushort *)(lVar19 + 0x5c0);
          if (*(uint *)(lVar19 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar19 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar10 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar10;
          if (sVar10 == 0) {
            *(short *)(lVar19 + 0x5c4) = *(short *)(lVar19 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar19 + 0x580));
          *psVar22 = -1;
        }
        FUN_038fd0e0(lVar4 + -0xc40);
        psVar22 = (short *)(lVar4 + -0xc96);
        if (*psVar22 != -1) {
          lVar19 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar19 + 0x580));
          uVar7 = (int)*psVar22 - (uint)*(ushort *)(lVar19 + 0x5c0);
          if (*(uint *)(lVar19 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar19 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar10 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar10;
          if (sVar10 == 0) {
            *(short *)(lVar19 + 0x5c4) = *(short *)(lVar19 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar19 + 0x580));
          *psVar22 = -1;
        }
        FUN_038fd0e0(lVar4 + -0xd20);
        lVar18 = lVar18 + 0xd70;
        lVar20 = lVar20 + -0xd70;
      } while (lVar23 != lVar18);
    }
    plVar12 = (long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar13);
      puVar21 = PTR_DAT_04bd1068;
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar13);
      puVar21 = PTR_DAT_04bd1068;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar13);
      }
    }
    param_1[0x31] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  __ptr = (void *)param_1[0x33];
  if (__ptr != (void *)0x0) {
    if (*plVar12 == 0) {
      free(__ptr);
    }
    else {
      plVar13 = (long *)FUN_038cb610(*plVar12,__ptr);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x38))(plVar13,__ptr);
      }
    }
    param_1[0x33] = 0;
    *(undefined4 *)(param_1 + 0x32) = 0;
  }
  puVar1 = PTR_DAT_04bbd578;
  lVar20 = param_1[0x35];
  if (lVar20 != 0) {
    plVar13 = (long *)(lVar20 + -8);
    if (*plVar13 != 0) {
      lVar18 = *plVar13 * 0x150;
      puVar3 = PTR_DAT_04bbd578 + 0x10;
      do {
        plVar11 = (long *)(lVar20 + -0x90 + lVar18);
        lVar18 = lVar18 + -0x150;
        plVar11[0xc] = (long)puVar3;
        plVar11[8] = (long)puVar3;
        plVar11[4] = (long)puVar3;
        *plVar11 = (long)puVar3;
        plVar11[-4] = (long)puVar3;
        plVar11[-8] = (long)puVar3;
        plVar11[-0xc] = (long)puVar3;
        plVar11[-0x10] = (long)puVar3;
        plVar11[-0x14] = (long)puVar3;
        plVar11[-0x18] = (long)puVar3;
      } while (lVar18 != 0);
    }
    if (*plVar12 == 0) {
      free(plVar13);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*plVar12,plVar13);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar13);
      }
    }
    param_1[0x35] = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  puVar1 = puVar1 + 0x10;
  param_1[0x2a] = (long)puVar1;
  param_1[0x26] = (long)puVar1;
  param_1[0x22] = (long)puVar1;
  param_1[0x1e] = (long)puVar1;
  param_1[0x1a] = (long)puVar1;
  param_1[0x16] = (long)puVar1;
  param_1[0x12] = (long)puVar1;
  param_1[0xe] = (long)puVar1;
  param_1[10] = (long)puVar1;
  param_1[6] = (long)puVar1;
  plVar13 = (long *)param_1[5];
  *param_1 = (long)(PTR_DAT_04bd12a0 + 0x10);
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + -1;
    lVar20 = *plVar11;
    if (lVar20 != 0) {
      plVar14 = plVar13 + lVar20 * 6;
      uVar16 = lVar20 * 0x30 - 0x30;
      uVar7 = ((uint)(uVar16 / 0x30) & 0x7ffffff) + 1;
      if ((uVar7 & 7) != 0) {
        lVar20 = ((ulong)uVar7 & 7) * 0x30;
        do {
          lVar20 = lVar20 + -0x30;
          plVar14 = plVar14 + -6;
          *plVar14 = (long)(puVar21 + 0x10);
        } while (lVar20 != 0);
      }
      if (0x14f < uVar16) {
        puVar21 = puVar21 + 0x10;
        plVar14 = plVar14 + -0x18;
        do {
          plVar14[0x12] = (long)puVar21;
          plVar14[0xc] = (long)puVar21;
          plVar14[6] = (long)puVar21;
          *plVar14 = (long)puVar21;
          plVar14[-6] = (long)puVar21;
          plVar14[-0xc] = (long)puVar21;
          plVar14[-0x12] = (long)puVar21;
          plVar15 = plVar14 + -0x18;
          *plVar15 = (long)puVar21;
          plVar14 = plVar14 + -0x30;
        } while (plVar15 != plVar13);
      }
    }
    if (*plVar12 == 0) {
      free(plVar11);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*plVar12,plVar11);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,plVar11);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

