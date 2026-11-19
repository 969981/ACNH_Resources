
void FUN_03a26010(undefined8 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  short sVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  void *__ptr;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  
  lVar18 = param_1[2];
  *param_1 = &PTR_FUN_04b6d3b0;
  iVar5 = *(int *)(param_1 + 1);
  if (iVar5 != 0) {
    iVar22 = 0;
    puVar1 = PTR_DAT_04bbd508 + 0x10;
    do {
      lVar20 = lVar18 + (long)iVar22 * 0x548;
      lVar17 = *(long *)(lVar20 + 0x540);
      iVar6 = *(int *)(lVar20 + 0x538);
      if (iVar6 != 0) {
        iVar21 = 0;
        do {
          puVar23 = (undefined8 *)(lVar17 + (long)iVar21 * 0x1e0);
          __ptr = (void *)*puVar23;
          if (__ptr != (void *)0x0) {
            FUN_038fd0e0((long)__ptr + 0x50);
            if (*(long *)PTR_DAT_04bb2698 == 0) {
              free(__ptr);
            }
            else {
              plVar14 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 0x38))(plVar14,__ptr);
              }
            }
          }
          *puVar23 = 0;
          lVar16 = lVar17 + (long)iVar21 * 0x1e0;
          if (*(long **)(lVar16 + 0x18) != (long *)0x0) {
            (**(code **)(**(long **)(lVar16 + 0x18) + 8))();
          }
          iVar21 = iVar21 + 1;
          *(undefined4 *)(lVar16 + 8) = 0;
          *(undefined8 *)(lVar16 + 0x10) = 0;
          *(undefined8 *)(lVar16 + 0x18) = 0;
        } while (iVar6 != iVar21);
        lVar17 = *(long *)(lVar20 + 0x540);
      }
      if (lVar17 != 0) {
        plVar14 = (long *)(lVar17 + -8);
        if (*plVar14 != 0) {
          lVar16 = *plVar14 * 0x1e0;
          do {
            lVar3 = lVar17 + lVar16;
            *(undefined **)(lVar3 + -0xe0) = puVar1;
            FUN_038fd0e0(lVar3 + -0x88);
            if (*(short *)(lVar3 + -0xe6) != -1) {
              lVar19 = *(long *)PTR_DAT_04bc1010;
              nn::os::LockMutex((MutexType *)(lVar19 + 0x580));
              uVar10 = (int)*(short *)(lVar3 + -0xe6) - (uint)*(ushort *)(lVar19 + 0x5c0);
              if (*(uint *)(lVar19 + 0x5a0) <= uVar10) {
                uVar10 = 0;
              }
              lVar4 = *(long *)(lVar19 + 0x5a8) + (long)(int)uVar10 * 0x80;
              sVar9 = *(short *)(lVar4 + 0x76) + -1;
              *(short *)(lVar4 + 0x76) = sVar9;
              if (sVar9 == 0) {
                *(short *)(lVar19 + 0x5c4) = *(short *)(lVar19 + 0x5c4) + -1;
              }
              nn::os::UnlockMutex((MutexType *)(lVar19 + 0x580));
              *(undefined2 *)(lVar3 + -0xe6) = 0xffff;
            }
            FUN_038fd0e0(lVar3 + -0x170);
            lVar16 = lVar16 + -0x1e0;
          } while (lVar16 != 0);
        }
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(plVar14);
        }
        else {
          plVar15 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar14);
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x38))(plVar15,plVar14);
          }
        }
        *(undefined4 *)(lVar20 + 0x538) = 0;
        *(long *)(lVar20 + 0x540) = 0;
      }
      iVar22 = iVar22 + 1;
    } while (iVar5 != iVar22);
    lVar18 = param_1[2];
  }
  if (lVar18 != 0) {
    plVar14 = (long *)(lVar18 + -8);
    if (*plVar14 != 0) {
      lVar17 = *plVar14 * 0x548;
      puVar1 = PTR_DAT_04bd11b8 + 0x10;
      do {
        lVar20 = lVar18 + lVar17;
        if (*(short *)(lVar20 + -0xa6) != -1) {
          lVar16 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
          uVar10 = (int)*(short *)(lVar20 + -0xa6) - (uint)*(ushort *)(lVar16 + 0x5c0);
          if (*(uint *)(lVar16 + 0x5a0) <= uVar10) {
            uVar10 = 0;
          }
          lVar3 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar10 * 0x80;
          sVar9 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar9;
          if (sVar9 == 0) {
            *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
          *(undefined2 *)(lVar20 + -0xa6) = 0xffff;
        }
        FUN_038fd0e0(lVar20 + -0x130);
        *(long *)(lVar20 + -0x548) = (long)puVar1;
        FUN_0390d560((long *)(lVar20 + -0x548));
        lVar17 = lVar17 + -0x548;
      } while (lVar17 != 0);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar14);
    }
    else {
      plVar15 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar14);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15,plVar14);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  puVar12 = PTR_DAT_04bd1170;
  param_1[0x157] = PTR_DAT_04bd1170 + 0x10;
  puVar1 = PTR_DAT_04bc8e38;
  if (param_1[0x15a] != 0) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0x15d);
    piVar2 = (int *)(lVar18 + 0x65c);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(undefined4 *)(param_1 + 0x159) = 0;
    param_1[0x15c] = 0;
    param_1[0x15a] = 0;
    param_1[0x15b] = 0;
  }
  puVar11 = PTR_DAT_04bbd550;
  param_1[0x150] = PTR_DAT_04bbd550 + 0x10;
  FUN_038f4940(param_1 + 0x150);
  puVar13 = PTR_DAT_04bd11c0;
  param_1[300] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x14c] != 0) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    (**(code **)puVar1)(param_1 + 0x12d);
    piVar2 = (int *)(lVar18 + 0x650);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(undefined1 *)(param_1 + 0x134) = 0;
    *(undefined1 *)((long)param_1 + 0x9ac) = 0;
    *(undefined1 *)(param_1 + 0x137) = 0;
    *(undefined1 *)((long)param_1 + 0x9c4) = 0;
    *(undefined1 *)(param_1 + 0x13a) = 0;
    *(undefined1 *)((long)param_1 + 0x9dc) = 0;
    *(undefined1 *)(param_1 + 0x13d) = 0;
    *(undefined1 *)((long)param_1 + 0x9f4) = 0;
    *(undefined1 *)(param_1 + 0x140) = 0;
    *(undefined1 *)((long)param_1 + 0xa0c) = 0;
    *(undefined1 *)(param_1 + 0x143) = 0;
    *(undefined1 *)((long)param_1 + 0xa24) = 0;
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined1 *)((long)param_1 + 0xa3c) = 0;
    *(undefined1 *)(param_1 + 0x149) = 0;
    *(undefined1 *)((long)param_1 + 0xa54) = 0;
    *(undefined4 *)(param_1 + 0x14b) = 0;
    param_1[0x14e] = 0;
    *(undefined4 *)(param_1 + 0x14f) = 0;
    param_1[0x14c] = 0;
    param_1[0x14d] = 0;
  }
  param_1[0x125] = PTR_DAT_04bbdcf0 + 0x10;
  FUN_038f4940(param_1 + 0x125);
  FUN_0390e230(param_1 + 0xe9);
  param_1[0xdd] = puVar12 + 0x10;
  if (param_1[0xe0] != 0) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    (**(code **)puVar1)(param_1 + 0xe3);
    piVar2 = (int *)(lVar18 + 0x65c);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(undefined4 *)(param_1 + 0xdf) = 0;
    param_1[0xe2] = 0;
    param_1[0xe0] = 0;
    param_1[0xe1] = 0;
  }
  param_1[0xd6] = puVar11 + 0x10;
  FUN_038f4940(param_1 + 0xd6);
  param_1[0xb2] = puVar13 + 0x10;
  if (param_1[0xd2] != 0) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    (**(code **)puVar1)(param_1 + 0xb3);
    piVar2 = (int *)(lVar18 + 0x650);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(undefined1 *)(param_1 + 0xba) = 0;
    *(undefined1 *)((long)param_1 + 0x5dc) = 0;
    *(undefined1 *)(param_1 + 0xbd) = 0;
    *(undefined1 *)((long)param_1 + 0x5f4) = 0;
    *(undefined1 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)((long)param_1 + 0x60c) = 0;
    *(undefined1 *)(param_1 + 0xc3) = 0;
    *(undefined1 *)((long)param_1 + 0x624) = 0;
    *(undefined1 *)(param_1 + 0xc6) = 0;
    *(undefined1 *)((long)param_1 + 0x63c) = 0;
    *(undefined1 *)(param_1 + 0xc9) = 0;
    *(undefined1 *)((long)param_1 + 0x654) = 0;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    *(undefined1 *)((long)param_1 + 0x66c) = 0;
    *(undefined1 *)(param_1 + 0xcf) = 0;
    *(undefined1 *)((long)param_1 + 0x684) = 0;
    *(undefined4 *)(param_1 + 0xd1) = 0;
    param_1[0xd4] = 0;
    *(undefined4 *)(param_1 + 0xd5) = 0;
    param_1[0xd2] = 0;
    param_1[0xd3] = 0;
  }
  param_1[0xab] = &PTR_LAB_04b6d3f0;
  FUN_038f4940(param_1 + 0xab);
  FUN_0390e230(param_1 + 0x6f);
  lVar18 = param_1[0x21];
  param_1[0x20] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar18 != 0) {
    if (lVar18 == 1) {
      return;
    }
    if ((*(uint *)(lVar18 + 0xd0) & 1) == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = lVar18 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar18 + 0xb0));
    }
    plVar14 = (long *)((long)param_1 + (long)*(int *)(lVar18 + 0x84) + 0x100);
    if (*plVar14 != 0) {
      *(long *)(*plVar14 + 8) = plVar14[1];
    }
    if ((long *)plVar14[1] != (long *)0x0) {
      *(long *)plVar14[1] = *plVar14;
    }
    *plVar14 = 0;
    plVar14[1] = 0;
    *(int *)(lVar18 + 0x80) = *(int *)(lVar18 + 0x80) + -1;
    if (lVar17 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar17 + 0x20));
    }
  }
  param_1[0x21] = 1;
  return;
}

