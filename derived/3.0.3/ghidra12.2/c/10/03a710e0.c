
void FUN_03a710e0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  short *psVar14;
  
  lVar11 = param_1[0x3b];
  *param_1 = (long)&PTR_FUN_04b70688;
  if (lVar11 != 0) {
    plVar9 = (long *)(lVar11 + -8);
    if (*plVar9 != 0) {
      lVar13 = *plVar9 * 0x560;
      lVar12 = 0;
      puVar1 = PTR_DAT_04bbd500 + 0x10;
      puVar2 = PTR_DAT_04bbd508 + 0x10;
      puVar3 = PTR_DAT_04bd11b8 + 0x10;
      do {
        lVar4 = lVar11 + lVar13;
        *(undefined **)(lVar4 + -0xe8) = puVar1;
        FUN_038fd0e0(lVar4 + -0x90);
        *(undefined **)(lVar4 + -0x1c8) = puVar2;
        FUN_038fd0e0(lVar4 + -0x170);
        psVar14 = (short *)(lVar4 + -0x24e);
        if (*psVar14 != -1) {
          lVar10 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
          uVar7 = (int)*psVar14 - (uint)*(ushort *)(lVar10 + 0x5c0);
          if (*(uint *)(lVar10 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar4 + -0x2d8);
        psVar14 = (short *)(lVar4 + -0x32e);
        if (*psVar14 != -1) {
          lVar10 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
          uVar7 = (int)*psVar14 - (uint)*(ushort *)(lVar10 + 0x5c0);
          if (*(uint *)(lVar10 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar4 + -0x3b8);
        psVar14 = (short *)(lVar4 + -0x40e);
        if (*psVar14 != -1) {
          lVar10 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
          uVar7 = (int)*psVar14 - (uint)*(ushort *)(lVar10 + 0x5c0);
          if (*(uint *)(lVar10 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar4 + -0x498);
        *(long *)(lVar4 + -0x560) = (long)puVar3;
        FUN_0390d560((long *)(lVar4 + -0x560));
        lVar12 = lVar12 + 0x560;
        lVar11 = lVar11 + -0x560;
      } while (lVar13 != lVar12);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar9);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar9);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar9);
      }
    }
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  puVar3 = PTR_DAT_04bd0d40;
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  lVar11 = param_1[0x3e];
  puVar2 = PTR_DAT_04bd1068 + 0x10;
  param_1[0x8e] = (long)puVar1;
  param_1[0x8a] = (long)puVar1;
  param_1[0x84] = (long)puVar2;
  param_1[0x3d] = (long)(puVar3 + 0x10);
  if (lVar11 != 0) {
    if (lVar11 == 1) goto LAB_03a7142c;
    if ((*(uint *)(lVar11 + 0xd0) & 1) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = lVar11 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar11 + 0xb0));
    }
    plVar9 = (long *)((long)param_1 + (long)*(int *)(lVar11 + 0x84) + 0x1e8);
    if (*plVar9 != 0) {
      *(long *)(*plVar9 + 8) = plVar9[1];
    }
    if ((long *)plVar9[1] != (long *)0x0) {
      *(long *)plVar9[1] = *plVar9;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + -1;
    if (lVar12 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
    }
  }
  param_1[0x3e] = 1;
LAB_03a7142c:
  *param_1 = (long)(PTR_DAT_04bd1070 + 0x10);
  return;
}

