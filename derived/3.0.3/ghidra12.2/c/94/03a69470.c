
void FUN_03a69470(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  short *psVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar12 = param_1[0x3b];
  *param_1 = (long)&PTR_FUN_04b70378;
  if (lVar12 != 0) {
    plVar10 = (long *)(lVar12 + -8);
    if (*plVar10 != 0) {
      lVar7 = *plVar10 * 0x3f8;
      lVar13 = 0;
      puVar1 = PTR_DAT_04bbd500 + 0x10;
      puVar2 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar3 = lVar12 + lVar7;
        *(undefined **)(lVar3 + -0xe8) = puVar1;
        FUN_038fd0e0(lVar3 + -0x90);
        *(undefined **)(lVar3 + -0x1c8) = puVar2;
        FUN_038fd0e0(lVar3 + -0x170);
        psVar11 = (short *)(lVar3 + -0x23e);
        if (*psVar11 != -1) {
          lVar14 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar14 + 0x580));
          uVar6 = (int)*psVar11 - (uint)*(ushort *)(lVar14 + 0x5c0);
          if (*(uint *)(lVar14 + 0x5a0) <= uVar6) {
            uVar6 = 0;
          }
          lVar4 = *(long *)(lVar14 + 0x5a8) + (long)(int)uVar6 * 0x80;
          sVar5 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar5;
          if (sVar5 == 0) {
            *(short *)(lVar14 + 0x5c4) = *(short *)(lVar14 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar14 + 0x580));
          *psVar11 = -1;
        }
        FUN_038fd0e0(lVar3 + -0x2c8);
        psVar11 = (short *)(lVar3 + -0x31e);
        if (*psVar11 != -1) {
          lVar14 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar14 + 0x580));
          uVar6 = (int)*psVar11 - (uint)*(ushort *)(lVar14 + 0x5c0);
          if (*(uint *)(lVar14 + 0x5a0) <= uVar6) {
            uVar6 = 0;
          }
          lVar4 = *(long *)(lVar14 + 0x5a8) + (long)(int)uVar6 * 0x80;
          sVar5 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar5;
          if (sVar5 == 0) {
            *(short *)(lVar14 + 0x5c4) = *(short *)(lVar14 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar14 + 0x580));
          *psVar11 = -1;
        }
        FUN_038fd0e0(lVar3 + -0x3a8);
        lVar13 = lVar13 + 0x3f8;
        lVar12 = lVar12 + -0x3f8;
      } while (lVar7 != lVar13);
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
  puVar8 = PTR_DAT_04bd0d40;
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  lVar12 = param_1[0x3e];
  puVar2 = PTR_DAT_04bd1068 + 0x10;
  param_1[0x8e] = (long)puVar1;
  param_1[0x8a] = (long)puVar1;
  param_1[0x84] = (long)puVar2;
  param_1[0x3d] = (long)(puVar8 + 0x10);
  if (lVar12 != 0) {
    if (lVar12 == 1) goto LAB_03a69714;
    if ((*(uint *)(lVar12 + 0xd0) & 1) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = lVar12 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar12 + 0xb0));
    }
    plVar10 = (long *)((long)param_1 + (long)*(int *)(lVar12 + 0x84) + 0x1e8);
    if (*plVar10 != 0) {
      *(long *)(*plVar10 + 8) = plVar10[1];
    }
    if ((long *)plVar10[1] != (long *)0x0) {
      *(long *)plVar10[1] = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + -1;
    if (lVar13 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
    }
  }
  param_1[0x3e] = 1;
LAB_03a69714:
  *param_1 = (long)(PTR_DAT_04bd1070 + 0x10);
  return;
}

