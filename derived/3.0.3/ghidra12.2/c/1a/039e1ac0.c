
void FUN_039e1ac0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b6b470;
  param_1[7] = &PTR_LAB_04b6b4d8;
  param_1[8] = &PTR_LAB_04b6b4f8;
  puVar3 = PTR_DAT_04bbd578;
  puVar6 = PTR_DAT_04bb2698;
  lVar9 = param_1[0xc3];
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + -8);
    if (*plVar10 != 0) {
      lVar8 = *plVar10 * 0x168;
      puVar1 = PTR_DAT_04bbd578 + 0x10;
      do {
        plVar7 = (long *)(lVar9 + -0x98 + lVar8);
        lVar8 = lVar8 + -0x168;
        plVar7[0xe] = (long)puVar1;
        plVar7[10] = (long)puVar1;
        *plVar7 = (long)puVar1;
        plVar7[-10] = (long)puVar1;
        plVar7[-0xe] = (long)puVar1;
        plVar7[-0x12] = (long)puVar1;
        plVar7[-0x16] = (long)puVar1;
        plVar7[-0x1a] = (long)puVar1;
      } while (lVar8 != 0);
    }
    if (*(long *)puVar6 == 0) {
      free(plVar10);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar6,plVar10);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar10);
      }
    }
    param_1[0xc3] = 0;
    *(undefined4 *)(param_1 + 0xc2) = 0;
  }
  puVar1 = PTR_DAT_04bd11b8;
  lVar9 = param_1[0xd4];
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + -8);
    if (*plVar10 != 0) {
      lVar8 = *plVar10 * 0x78;
      puVar2 = PTR_DAT_04bd11b8 + 0x10;
      do {
        *(undefined **)(lVar9 + -0x78 + lVar8) = puVar2;
        FUN_0390d560();
        lVar8 = lVar8 + -0x78;
      } while (lVar8 != 0);
    }
    if (*(long *)puVar6 == 0) {
      free(plVar10);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar6,plVar10);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar10);
      }
    }
    param_1[0xd4] = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
  }
  FUN_039e1db0(param_1 + 0x2f);
  __ptr = (void *)param_1[0xd6];
  if (__ptr != (void *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(__ptr);
    }
    else {
      plVar10 = (long *)FUN_038cb610(*(long *)puVar6,__ptr);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,__ptr);
      }
    }
    param_1[0xd5] = 0;
    param_1[0xd6] = 0;
  }
  puVar6 = PTR_DAT_04bd12f8;
  puVar3 = puVar3 + 0x10;
  param_1[0x11e] = puVar3;
  param_1[0x114] = puVar3;
  param_1[0x10a] = puVar3;
  param_1[0x106] = puVar3;
  param_1[0xf6] = puVar6 + 0x10;
  if ((param_1[0x102] != 0 || param_1[0x101] != 0) && (lVar9 = param_1[0x104], lVar9 != 0)) {
    plVar10 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x4c) + 0x7b0);
    if (*plVar10 != 0) {
      *(long *)(*plVar10 + 8) = plVar10[1];
    }
    if ((long *)plVar10[1] != (long *)0x0) {
      *(long *)plVar10[1] = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + -1;
    param_1[0x104] = 0;
  }
  param_1[0xf6] = puVar3;
  param_1[0xf2] = puVar3;
  param_1[0xee] = puVar3;
  param_1[0xea] = puVar3;
  param_1[0xe6] = puVar3;
  param_1[0xe2] = puVar3;
  param_1[0xde] = puVar3;
  param_1[0xda] = puVar3;
  param_1[0xc4] = puVar1 + 0x10;
  FUN_0390d560(param_1 + 0xc4);
  FUN_038fd0e0(param_1 + 0x57);
  if (*(short *)((long)param_1 + 0x262) != -1) {
    lVar9 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar9 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x262) - (uint)*(ushort *)(lVar9 + 0x5c0);
    if (*(uint *)(lVar9 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar8 = *(long *)(lVar9 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar8 + 0x76) + -1;
    *(short *)(lVar8 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar9 + 0x5c4) = *(short *)(lVar9 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x580));
    *(undefined2 *)((long)param_1 + 0x262) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x3b);
  FUN_03922a70(param_1);
  return;
}

