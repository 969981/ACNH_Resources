
void FUN_03a8cd20(long *param_1)

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
  
  lVar10 = param_1[0x3b];
  *param_1 = (long)&PTR_FUN_04b70a50;
  if (lVar10 != 0) {
    plVar9 = (long *)(lVar10 + -8);
    if (*plVar9 != 0) {
      lVar12 = *plVar9 * 0x3b0;
      lVar11 = 0;
      puVar1 = PTR_DAT_04bbd500 + 0x10;
      puVar2 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar4 = lVar10 + lVar12;
        if (*(short *)(lVar4 + -0x9e) != -1) {
          lVar13 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar13 + 0x580));
          uVar7 = (int)*(short *)(lVar4 + -0x9e) - (uint)*(ushort *)(lVar13 + 0x5c0);
          if (*(uint *)(lVar13 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar5 = *(long *)(lVar13 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar5 + 0x76) + -1;
          *(short *)(lVar5 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar13 + 0x5c4) = *(short *)(lVar13 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar13 + 0x580));
          *(undefined2 *)(lVar4 + -0x9e) = 0xffff;
        }
        FUN_038fd0e0(lVar4 + -0x128);
        *(undefined **)(lVar4 + -0x2c0) = puVar1;
        FUN_038fd0e0(lVar4 + -0x268);
        *(undefined **)(lVar4 + -0x3a0) = puVar2;
        FUN_038fd0e0(lVar4 + -0x348);
        lVar11 = lVar11 + 0x3b0;
        lVar10 = lVar10 + -0x3b0;
      } while (lVar12 != lVar11);
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
  puVar3 = PTR_DAT_04bbd578;
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  lVar10 = param_1[0x6a];
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0xb5] = (long)puVar1;
  param_1[0xb0] = (long)puVar1;
  param_1[0x69] = (long)puVar2;
  if (lVar10 != 0) {
    if (lVar10 == 1) goto LAB_03a8cf2c;
    if ((*(uint *)(lVar10 + 0xd0) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar10 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar10 + 0xb0));
    }
    plVar9 = (long *)((long)param_1 + (long)*(int *)(lVar10 + 0x84) + 0x348);
    if (*plVar9 != 0) {
      *(long *)(*plVar9 + 8) = plVar9[1];
    }
    if ((long *)plVar9[1] != (long *)0x0) {
      *(long *)plVar9[1] = *plVar9;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + -1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
  }
  param_1[0x6a] = 1;
LAB_03a8cf2c:
  puVar3 = puVar3 + 0x10;
  param_1[0x65] = (long)puVar3;
  param_1[0x61] = (long)puVar3;
  param_1[0x5c] = (long)puVar3;
  param_1[0x58] = (long)puVar3;
  param_1[0x54] = (long)puVar3;
  param_1[0x50] = (long)puVar3;
  param_1[0x4c] = (long)puVar3;
  param_1[0x48] = (long)puVar3;
  puVar1 = PTR_DAT_04bd1070;
  param_1[0x42] = (long)(PTR_DAT_04bd1068 + 0x10);
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

