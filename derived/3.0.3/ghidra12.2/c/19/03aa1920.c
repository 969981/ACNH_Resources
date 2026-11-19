
void FUN_03aa1920(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  void *__ptr;
  long lVar11;
  long *plVar12;
  int iVar13;
  short *psVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  
  __ptr = (void *)param_1[0x7b];
  iVar5 = *(int *)(param_1 + 0x7a);
  *param_1 = &PTR_LAB_04b70cf8;
  param_1[6] = &PTR_LAB_04b70d28;
  param_1[0x3b] = &PTR_LAB_04b70d48;
  if (iVar5 != 0) {
    iVar13 = 0;
    puVar1 = PTR_DAT_04bd11b8 + 0x10;
    do {
      puVar16 = (undefined4 *)((long)__ptr + (long)iVar13 * 0x50);
      lVar9 = *(long *)(puVar16 + 2);
      if (lVar9 != 0) {
        plVar12 = (long *)(lVar9 + -8);
        if (*plVar12 != 0) {
          lVar10 = *plVar12 * 0x78;
          do {
            *(undefined **)(lVar9 + -0x78 + lVar10) = puVar1;
            FUN_0390d560();
            lVar10 = lVar10 + -0x78;
          } while (lVar10 != 0);
        }
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(plVar12);
        }
        else {
          plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar12);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x38))(plVar8,plVar12);
          }
        }
        *(undefined8 *)(puVar16 + 2) = 0;
        *puVar16 = 0;
      }
      iVar13 = iVar13 + 1;
    } while (iVar5 != iVar13);
    __ptr = (void *)param_1[0x7b];
  }
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,__ptr);
      }
    }
    param_1[0x7b] = 0;
    *(undefined4 *)(param_1 + 0x7a) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x35);
  if (iVar5 != 0) {
    iVar13 = 0;
    puVar1 = PTR_DAT_04bbd500 + 0x10;
    lVar9 = param_1[0x36];
    puVar2 = PTR_DAT_04bbd508 + 0x10;
    do {
      lVar10 = lVar9 + (long)iVar13 * 0x1330;
      lVar11 = *(long *)(lVar10 + 0x908);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + -8);
        if (*plVar12 != 0) {
          lVar17 = 0;
          lVar18 = *plVar12 * 0x360;
          do {
            lVar3 = lVar11 + lVar18;
            *(undefined ***)(lVar3 + -0x360) = &PTR_LAB_04b70e10;
            if (*(char *)(lVar3 + -8) != '\0') {
              FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar3 + -0x358));
            }
            *(undefined1 *)(lVar3 + -8) = 0;
            *(undefined8 *)(lVar3 + -0x358) = 0;
            *(undefined1 *)(lVar3 + -6) = 0;
            *(undefined **)(lVar3 + -0x128) = puVar1;
            FUN_038fd0e0(lVar3 + -0xd0);
            *(undefined **)(lVar3 + -0x208) = puVar2;
            FUN_038fd0e0(lVar3 + -0x1b0);
            psVar14 = (short *)(lVar3 + -0x276);
            if (*psVar14 != -1) {
              lVar15 = *(long *)PTR_DAT_04bc1010;
              nn::os::LockMutex((MutexType *)(lVar15 + 0x580));
              uVar7 = (int)*psVar14 - (uint)*(ushort *)(lVar15 + 0x5c0);
              if (*(uint *)(lVar15 + 0x5a0) <= uVar7) {
                uVar7 = 0;
              }
              lVar4 = *(long *)(lVar15 + 0x5a8) + (long)(int)uVar7 * 0x80;
              sVar6 = *(short *)(lVar4 + 0x76) + -1;
              *(short *)(lVar4 + 0x76) = sVar6;
              if (sVar6 == 0) {
                *(short *)(lVar15 + 0x5c4) = *(short *)(lVar15 + 0x5c4) + -1;
              }
              nn::os::UnlockMutex((MutexType *)(lVar15 + 0x580));
              *psVar14 = -1;
            }
            FUN_038fd0e0(lVar3 + -0x300);
            lVar17 = lVar17 + 0x360;
            lVar11 = lVar11 + -0x360;
          } while (lVar18 != lVar17);
        }
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(plVar12);
        }
        else {
          plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar12);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x38))(plVar8,plVar12);
          }
        }
        *(undefined8 *)(lVar10 + 0x908) = 0;
        *(undefined4 *)(lVar10 + 0x900) = 0;
      }
      iVar13 = iVar13 + 1;
    } while (iVar5 != iVar13);
  }
  lVar9 = param_1[0xa9];
  param_1[0xa8] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar9 != 0) {
    if (lVar9 == 1) goto LAB_03aa1cd8;
    if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = lVar9 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
    }
    plVar12 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x84) + 0x540);
    if (*plVar12 != 0) {
      *(long *)(*plVar12 + 8) = plVar12[1];
    }
    if ((long *)plVar12[1] != (long *)0x0) {
      *(long *)plVar12[1] = *plVar12;
    }
    *plVar12 = 0;
    plVar12[1] = 0;
    *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + -1;
    if (lVar10 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
    }
  }
  param_1[0xa9] = 1;
LAB_03aa1cd8:
  puVar1 = PTR_DAT_04bd1070;
  param_1[0x75] = PTR_DAT_04bbd578 + 0x10;
  param_1[0x3b] = puVar1 + 0x10;
  FUN_03aa7160(param_1);
  return;
}

