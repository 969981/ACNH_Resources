
void FUN_03932070(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  short *psVar18;
  void *__ptr;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  
  *param_1 = (long)&PTR_LAB_04b675d0;
  param_1[0xbd] = (long)&PTR_LAB_04b67608;
  FUN_03939908(param_1 + 0x28b);
  puVar20 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x285] = (long)puVar20;
  puVar23 = PTR_DAT_04bd1068;
  param_1[0x281] = (long)puVar20;
  param_1[0x27d] = (long)puVar20;
  param_1[0x279] = (long)puVar20;
  param_1[0x26d] = (long)puVar20;
  param_1[0x269] = (long)puVar20;
  param_1[0x265] = (long)puVar20;
  param_1[0x273] = (long)(puVar23 + 0x10);
  param_1[0x25b] = (long)(puVar23 + 0x10);
  puVar2 = PTR_DAT_04bd1170;
  param_1[0x261] = (long)puVar20;
  param_1[599] = (long)puVar20;
  param_1[0x24a] = (long)(puVar2 + 0x10);
  puVar20 = PTR_DAT_04bc8e38;
  if (param_1[0x24d] != 0) {
    lVar21 = *(long *)PTR_DAT_04bc1010;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0x250);
    piVar1 = (int *)(lVar21 + 0x65c);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined4 *)(param_1 + 0x24c) = 0;
    param_1[0x24f] = 0;
    param_1[0x24d] = 0;
    param_1[0x24e] = 0;
  }
  FUN_0390e230(param_1 + 0x20e);
  puVar10 = PTR_DAT_04bd11c0;
  param_1[0x1ea] = (long)(PTR_DAT_04bd11c0 + 0x10);
  if (param_1[0x20a] != 0) {
    lVar21 = *(long *)PTR_DAT_04bc1010;
    (**(code **)puVar20)(param_1 + 0x1eb);
    piVar1 = (int *)(lVar21 + 0x650);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined1 *)(param_1 + 0x1f2) = 0;
    *(undefined1 *)((long)param_1 + 0xf9c) = 0;
    *(undefined1 *)(param_1 + 0x1f5) = 0;
    *(undefined1 *)((long)param_1 + 0xfb4) = 0;
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    *(undefined1 *)((long)param_1 + 0xfcc) = 0;
    *(undefined1 *)(param_1 + 0x1fb) = 0;
    *(undefined1 *)((long)param_1 + 0xfe4) = 0;
    *(undefined1 *)(param_1 + 0x1fe) = 0;
    *(undefined1 *)((long)param_1 + 0xffc) = 0;
    *(undefined1 *)(param_1 + 0x201) = 0;
    *(undefined1 *)((long)param_1 + 0x1014) = 0;
    *(undefined1 *)(param_1 + 0x204) = 0;
    *(undefined1 *)((long)param_1 + 0x102c) = 0;
    *(undefined1 *)(param_1 + 0x207) = 0;
    *(undefined1 *)((long)param_1 + 0x1044) = 0;
    *(undefined4 *)(param_1 + 0x209) = 0;
    param_1[0x20c] = 0;
    *(undefined4 *)(param_1 + 0x20d) = 0;
    param_1[0x20a] = 0;
    param_1[0x20b] = 0;
  }
  puVar9 = PTR_DAT_04bbd550;
  param_1[0x1e3] = (long)(PTR_DAT_04bbd550 + 0x10);
  FUN_038f4940(param_1 + 0x1e3);
  param_1[0x1dc] = (long)&PTR_LAB_04b676f8;
  FUN_038f4940(param_1 + 0x1dc);
  param_1[0x1d0] = (long)(puVar2 + 0x10);
  if (param_1[0x1d3] != 0) {
    lVar21 = *(long *)PTR_DAT_04bc1010;
    (**(code **)puVar20)(param_1 + 0x1d6);
    piVar1 = (int *)(lVar21 + 0x65c);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined4 *)(param_1 + 0x1d2) = 0;
    param_1[0x1d5] = 0;
    param_1[0x1d3] = 0;
    param_1[0x1d4] = 0;
  }
  FUN_0390e230(param_1 + 0x194);
  param_1[0x170] = (long)(puVar10 + 0x10);
  if (param_1[400] != 0) {
    lVar21 = *(long *)PTR_DAT_04bc1010;
    (**(code **)puVar20)(param_1 + 0x171);
    piVar1 = (int *)(lVar21 + 0x650);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined1 *)(param_1 + 0x178) = 0;
    *(undefined1 *)((long)param_1 + 0xbcc) = 0;
    *(undefined1 *)(param_1 + 0x17b) = 0;
    *(undefined1 *)((long)param_1 + 0xbe4) = 0;
    *(undefined1 *)(param_1 + 0x17e) = 0;
    *(undefined1 *)((long)param_1 + 0xbfc) = 0;
    *(undefined1 *)(param_1 + 0x181) = 0;
    *(undefined1 *)((long)param_1 + 0xc14) = 0;
    *(undefined1 *)(param_1 + 0x184) = 0;
    *(undefined1 *)((long)param_1 + 0xc2c) = 0;
    *(undefined1 *)(param_1 + 0x187) = 0;
    *(undefined1 *)((long)param_1 + 0xc44) = 0;
    *(undefined1 *)(param_1 + 0x18a) = 0;
    *(undefined1 *)((long)param_1 + 0xc5c) = 0;
    *(undefined1 *)(param_1 + 0x18d) = 0;
    *(undefined1 *)((long)param_1 + 0xc74) = 0;
    *(undefined4 *)(param_1 + 399) = 0;
    param_1[0x192] = 0;
    *(undefined4 *)(param_1 + 0x193) = 0;
    param_1[400] = 0;
    param_1[0x191] = 0;
  }
  param_1[0x169] = (long)(puVar9 + 0x10);
  FUN_038f4940(param_1 + 0x169);
  param_1[0x162] = (long)&PTR_LAB_04b676f8;
  FUN_038f4940(param_1 + 0x162);
  lVar21 = param_1[0x11c];
  param_1[0x11b] = (long)(PTR_DAT_04bd0d40 + 0x10);
  puVar20 = PTR_DAT_04bbd578;
  if (lVar21 != 0) {
    if (lVar21 == 1) goto LAB_039323d4;
    if ((*(uint *)(lVar21 + 0xd0) & 1) == 0) {
      lVar19 = 0;
    }
    else {
      lVar19 = lVar21 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar21 + 0xb0));
    }
    plVar12 = (long *)((long)param_1 + (long)*(int *)(lVar21 + 0x84) + 0x8d8);
    if (*plVar12 != 0) {
      *(long *)(*plVar12 + 8) = plVar12[1];
    }
    if ((long *)plVar12[1] != (long *)0x0) {
      *(long *)plVar12[1] = *plVar12;
    }
    *plVar12 = 0;
    plVar12[1] = 0;
    *(int *)(lVar21 + 0x80) = *(int *)(lVar21 + 0x80) + -1;
    if (lVar19 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar19 + 0x20));
    }
  }
  param_1[0x11c] = 1;
LAB_039323d4:
  if (*(short *)((long)param_1 + 0x8ba) != -1) {
    lVar21 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar21 + 0x580));
    uVar8 = (int)*(short *)((long)param_1 + 0x8ba) - (uint)*(ushort *)(lVar21 + 0x5c0);
    if (*(uint *)(lVar21 + 0x5a0) <= uVar8) {
      uVar8 = 0;
    }
    lVar19 = *(long *)(lVar21 + 0x5a8) + (long)(int)uVar8 * 0x80;
    sVar7 = *(short *)(lVar19 + 0x76) + -1;
    *(short *)(lVar19 + 0x76) = sVar7;
    if (sVar7 == 0) {
      *(short *)(lVar21 + 0x5c4) = *(short *)(lVar21 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar21 + 0x580));
    *(undefined2 *)((long)param_1 + 0x8ba) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x106);
  puVar2 = PTR_DAT_04bd1070;
  param_1[0xf7] = (long)(puVar20 + 0x10);
  *param_1 = (long)&PTR_LAB_04b67718;
  lVar21 = param_1[0xb8];
  param_1[0xbd] = (long)(puVar2 + 0x10);
  plVar12 = (long *)PTR_DAT_04bb2698;
  if (lVar21 != 0) {
    plVar13 = (long *)(lVar21 + -8);
    if (*plVar13 != 0) {
      lVar22 = *plVar13 * 0x6a0;
      lVar19 = 0;
      puVar20 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar3 = lVar21 + lVar22;
        if (*(short *)(lVar3 + -6) != -1) {
          lVar17 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar8 = (int)*(short *)(lVar3 + -6) - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar4 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *(undefined2 *)(lVar3 + -6) = 0xffff;
        }
        FUN_038fd0e0(lVar3 + -0x90);
        if (*(short *)(lVar3 + -0xe6) != -1) {
          lVar17 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar8 = (int)*(short *)(lVar3 + -0xe6) - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar4 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *(undefined2 *)(lVar3 + -0xe6) = 0xffff;
        }
        FUN_038fd0e0(lVar3 + -0x170);
        psVar18 = (short *)(lVar3 + -0x1ce);
        if (*psVar18 != -1) {
          lVar17 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar8 = (int)*psVar18 - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar4 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *psVar18 = -1;
        }
        FUN_038fd0e0(lVar3 + -600);
        psVar18 = (short *)(lVar3 + -0x2b6);
        if (*psVar18 != -1) {
          lVar17 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar8 = (int)*psVar18 - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar4 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *psVar18 = -1;
        }
        FUN_038fd0e0(lVar3 + -0x340);
        *(undefined **)(lVar3 + -0x478) = puVar20;
        FUN_038fd0e0(lVar3 + -0x420);
        psVar18 = (short *)(lVar3 + -0x4e6);
        if (*psVar18 != -1) {
          lVar17 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar8 = (int)*psVar18 - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar4 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *psVar18 = -1;
        }
        FUN_038fd0e0(lVar3 + -0x570);
        psVar18 = (short *)(lVar3 + -0x5c6);
        if (*psVar18 != -1) {
          lVar17 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar8 = (int)*psVar18 - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar4 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *psVar18 = -1;
        }
        FUN_038fd0e0(lVar3 + -0x650);
        lVar19 = lVar19 + 0x6a0;
        lVar21 = lVar21 + -0x6a0;
      } while (lVar22 != lVar19);
    }
    plVar12 = (long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar13);
      puVar20 = PTR_DAT_04bbd578;
      puVar23 = PTR_DAT_04bd1068;
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar13);
      puVar23 = PTR_DAT_04bd1068;
      puVar20 = PTR_DAT_04bbd578;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar13);
      }
    }
    param_1[0xb8] = 0;
    *(undefined4 *)(param_1 + 0xb7) = 0;
  }
  __ptr = (void *)param_1[0xba];
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
    param_1[0xba] = 0;
    *(undefined4 *)(param_1 + 0xb9) = 0;
  }
  lVar21 = param_1[0xbc];
  if (lVar21 != 0) {
    plVar13 = (long *)(lVar21 + -8);
    if (*plVar13 != 0) {
      lVar19 = *plVar13 * 0x588;
      puVar2 = puVar20 + 0x10;
      do {
        plVar11 = (long *)(lVar21 + -0x588 + lVar19);
        lVar19 = lVar19 + -0x588;
        plVar11[0x96] = (long)puVar2;
        plVar11[0x92] = (long)puVar2;
        plVar11[0x8e] = (long)puVar2;
        plVar11[0x8a] = (long)puVar2;
        plVar11[0x86] = (long)puVar2;
        plVar11[0x82] = (long)puVar2;
        plVar11[0x7e] = (long)puVar2;
        plVar11[0x7a] = (long)puVar2;
        plVar11[0x76] = (long)puVar2;
        plVar11[0x71] = (long)puVar2;
        plVar11[0x6d] = (long)puVar2;
        plVar11[0x69] = (long)puVar2;
        plVar11[0x65] = (long)puVar2;
        plVar11[0x61] = (long)puVar2;
        plVar11[0x5d] = (long)puVar2;
        plVar11[0x59] = (long)puVar2;
        plVar11[0x54] = (long)puVar2;
        plVar11[0x50] = (long)puVar2;
        plVar11[0x4c] = (long)puVar2;
        plVar11[0x48] = (long)puVar2;
        plVar11[0x44] = (long)puVar2;
        plVar11[0x40] = (long)puVar2;
        plVar11[0x3c] = (long)puVar2;
        plVar11[0x38] = (long)puVar2;
        plVar11[0x34] = (long)puVar2;
        plVar11[0x30] = (long)puVar2;
        plVar11[0x2c] = (long)puVar2;
        plVar11[0x28] = (long)puVar2;
        plVar11[0x24] = (long)puVar2;
        plVar11[0x20] = (long)puVar2;
        plVar11[0x1c] = (long)puVar2;
        plVar11[0x18] = (long)puVar2;
        plVar11[0x14] = (long)puVar2;
        plVar11[0x10] = (long)puVar2;
        plVar11[0xc] = (long)puVar2;
        plVar11[8] = (long)puVar2;
        plVar11[4] = (long)puVar2;
        *plVar11 = (long)puVar2;
      } while (lVar19 != 0);
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
    param_1[0xbc] = 0;
    *(undefined4 *)(param_1 + 0xbb) = 0;
  }
  puVar20 = puVar20 + 0x10;
  param_1[0x9c] = (long)puVar20;
  param_1[0x98] = (long)puVar20;
  param_1[0x94] = (long)puVar20;
  param_1[0x90] = (long)puVar20;
  param_1[0x8c] = (long)puVar20;
  param_1[0x88] = (long)puVar20;
  param_1[0x84] = (long)puVar20;
  param_1[0x80] = (long)puVar20;
  param_1[0x7c] = (long)puVar20;
  param_1[0x77] = (long)puVar20;
  param_1[0x73] = (long)puVar20;
  param_1[0x6f] = (long)puVar20;
  param_1[0x6b] = (long)puVar20;
  param_1[0x67] = (long)puVar20;
  param_1[99] = (long)puVar20;
  param_1[0x5f] = (long)puVar20;
  param_1[0x5a] = (long)puVar20;
  param_1[0x56] = (long)puVar20;
  param_1[0x52] = (long)puVar20;
  param_1[0x4e] = (long)puVar20;
  param_1[0x4a] = (long)puVar20;
  param_1[0x46] = (long)puVar20;
  param_1[0x42] = (long)puVar20;
  param_1[0x3e] = (long)puVar20;
  param_1[0x3a] = (long)puVar20;
  param_1[0x36] = (long)puVar20;
  param_1[0x32] = (long)puVar20;
  param_1[0x2e] = (long)puVar20;
  param_1[0x2a] = (long)puVar20;
  param_1[0x26] = (long)puVar20;
  param_1[0x22] = (long)puVar20;
  param_1[0x1e] = (long)puVar20;
  param_1[0x1a] = (long)puVar20;
  param_1[0x16] = (long)puVar20;
  param_1[0x12] = (long)puVar20;
  param_1[0xe] = (long)puVar20;
  param_1[10] = (long)puVar20;
  param_1[6] = (long)puVar20;
  *param_1 = (long)(PTR_DAT_04bd12a0 + 0x10);
  plVar13 = (long *)param_1[5];
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + -1;
    lVar21 = *plVar11;
    if (lVar21 != 0) {
      plVar14 = plVar13 + lVar21 * 6;
      uVar16 = lVar21 * 0x30 - 0x30;
      uVar8 = ((uint)(uVar16 / 0x30) & 0x7ffffff) + 1;
      if ((uVar8 & 7) != 0) {
        lVar21 = ((ulong)uVar8 & 7) * 0x30;
        do {
          lVar21 = lVar21 + -0x30;
          plVar14 = plVar14 + -6;
          *plVar14 = (long)(puVar23 + 0x10);
        } while (lVar21 != 0);
      }
      if (0x14f < uVar16) {
        puVar23 = puVar23 + 0x10;
        plVar14 = plVar14 + -0x18;
        do {
          plVar14[0x12] = (long)puVar23;
          plVar14[0xc] = (long)puVar23;
          plVar14[6] = (long)puVar23;
          *plVar14 = (long)puVar23;
          plVar14[-6] = (long)puVar23;
          plVar14[-0xc] = (long)puVar23;
          plVar14[-0x12] = (long)puVar23;
          plVar15 = plVar14 + -0x18;
          *plVar15 = (long)puVar23;
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

