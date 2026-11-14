
void FUN_015a3520(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_DAT_04bd1408;
  *param_1 = (long)&PTR_FUN_049ae450;
  param_1[0x1a839] = 0;
  lVar10 = 0xd3898;
  param_1[0x1a7e0] = (long)(puVar1 + 0x10);
  FUN_0034f82c(param_1 + 0x1a831);
  FUN_0034f6d0(param_1 + 0x1a816);
  FUN_038e1a84(param_1 + 0x1a7d8);
  FUN_038e1a84(param_1 + 0x1a7cd);
  FUN_038e1a84(param_1 + 0x1a7c2);
  FUN_038e1a84(param_1 + 0x1a7b7);
  FUN_038e1a84(param_1 + 0x1a7ac);
  FUN_038e1a84(param_1 + 0x1a7a1);
  lVar11 = 0xd38e8;
  lVar12 = 0xd3a98;
  lVar13 = 0xd3b70;
  lVar14 = 0xd3bb0;
  lVar8 = 0xd3c58;
  lVar7 = 0xd3ce2;
  lVar9 = -0xae98;
  do {
    if (*(short *)((long)param_1 + lVar7) != -1) {
      lVar6 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
      uVar5 = (int)*(short *)((long)param_1 + lVar7) - (uint)*(ushort *)(lVar6 + 0x5c0);
      if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
        uVar5 = 0;
      }
      lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
      sVar4 = *(short *)(lVar2 + 0x76) + -1;
      *(short *)(lVar2 + 0x76) = sVar4;
      if (sVar4 == 0) {
        *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
      *(undefined2 *)((long)param_1 + lVar7) = 0xffff;
    }
    FUN_038fd0e0((long)param_1 + lVar8);
    puVar1 = PTR_DAT_04bd1408 + 0x10;
    *(undefined **)((long)param_1 + lVar11) = puVar1;
    *(undefined8 *)((long)param_1 + lVar14) = 0;
    FUN_0034f82c((long)param_1 + lVar13);
    FUN_0034f6d0((long)param_1 + lVar12);
    FUN_038fd0e0((long)param_1 + lVar10);
    lVar12 = lVar12 + -0x4b8;
    lVar14 = lVar14 + -0x4b8;
    lVar13 = lVar13 + -0x4b8;
    lVar10 = lVar10 + -0x4b8;
    lVar11 = lVar11 + -0x4b8;
    lVar8 = lVar8 + -0x4b8;
    lVar7 = lVar7 + -0x4b8;
    lVar9 = lVar9 + 0x4b8;
  } while (lVar9 != 0);
  lVar10 = 0xc8950;
  FUN_038e1a84(param_1 + 0x191c3);
  FUN_038e1a84(param_1 + 0x191b8);
  lVar11 = 0xc89a0;
  lVar12 = 0xc8b50;
  lVar13 = 0xc8c28;
  lVar14 = 0xc8c68;
  lVar8 = 0xc8d10;
  lVar7 = 0xc8d9a;
  lVar9 = -0x153c0;
  do {
    if (*(short *)((long)param_1 + lVar7) != -1) {
      lVar6 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
      uVar5 = (int)*(short *)((long)param_1 + lVar7) - (uint)*(ushort *)(lVar6 + 0x5c0);
      if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
        uVar5 = 0;
      }
      lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
      sVar4 = *(short *)(lVar2 + 0x76) + -1;
      *(short *)(lVar2 + 0x76) = sVar4;
      if (sVar4 == 0) {
        *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
      *(undefined2 *)((long)param_1 + lVar7) = 0xffff;
    }
    FUN_038fd0e0((long)param_1 + lVar8);
    *(undefined **)((long)param_1 + lVar11) = puVar1;
    *(undefined8 *)((long)param_1 + lVar14) = 0;
    FUN_0034f82c((long)param_1 + lVar13);
    FUN_0034f6d0((long)param_1 + lVar12);
    FUN_038fd0e0((long)param_1 + lVar10);
    lVar12 = lVar12 + -0x4b8;
    lVar14 = lVar14 + -0x4b8;
    lVar13 = lVar13 + -0x4b8;
    lVar10 = lVar10 + -0x4b8;
    lVar11 = lVar11 + -0x4b8;
    lVar8 = lVar8 + -0x4b8;
    lVar7 = lVar7 + -0x4b8;
    lVar9 = lVar9 + 0x4b8;
  } while (lVar9 != 0);
  lVar9 = 0xb3488;
  lVar7 = -0x3afc0;
  FUN_038e1a84(param_1 + 0x16735);
  FUN_038e1a84(param_1 + 0x1672a);
  FUN_038e1a84(param_1 + 0x1671f);
  lVar10 = 0xb3688;
  lVar11 = 0xb3760;
  lVar12 = 0xb34d8;
  lVar13 = 0xb37a0;
  lVar14 = 0xb3848;
  lVar8 = 0xb38d2;
  puVar1 = PTR_DAT_04bd1408 + 0x10;
  do {
    if (*(short *)((long)param_1 + lVar8) != -1) {
      lVar6 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
      uVar5 = (int)*(short *)((long)param_1 + lVar8) - (uint)*(ushort *)(lVar6 + 0x5c0);
      if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
        uVar5 = 0;
      }
      lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
      sVar4 = *(short *)(lVar2 + 0x76) + -1;
      *(short *)(lVar2 + 0x76) = sVar4;
      if (sVar4 == 0) {
        *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
      *(undefined2 *)((long)param_1 + lVar8) = 0xffff;
    }
    FUN_038fd0e0((long)param_1 + lVar14);
    *(undefined **)((long)param_1 + lVar12) = puVar1;
    *(undefined8 *)((long)param_1 + lVar13) = 0;
    FUN_0034f82c((long)param_1 + lVar11);
    FUN_0034f6d0((long)param_1 + lVar10);
    FUN_038fd0e0((long)param_1 + lVar9);
    lVar10 = lVar10 + -0x4b8;
    lVar13 = lVar13 + -0x4b8;
    lVar11 = lVar11 + -0x4b8;
    lVar9 = lVar9 + -0x4b8;
    lVar12 = lVar12 + -0x4b8;
    lVar14 = lVar14 + -0x4b8;
    lVar8 = lVar8 + -0x4b8;
    lVar7 = lVar7 + 0x4b8;
  } while (lVar7 != 0);
  lVar10 = 0x784c8;
  lVar11 = 0x78518;
  lVar12 = 0x786c8;
  lVar13 = 0x787a0;
  lVar14 = 0x787e0;
  lVar8 = 0x78888;
  lVar7 = 0x78912;
  lVar9 = -0x3afc0;
  puVar1 = PTR_DAT_04bd1408 + 0x10;
  do {
    if (*(short *)((long)param_1 + lVar7) != -1) {
      lVar6 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
      uVar5 = (int)*(short *)((long)param_1 + lVar7) - (uint)*(ushort *)(lVar6 + 0x5c0);
      if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
        uVar5 = 0;
      }
      lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
      sVar4 = *(short *)(lVar2 + 0x76) + -1;
      *(short *)(lVar2 + 0x76) = sVar4;
      if (sVar4 == 0) {
        *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
      *(undefined2 *)((long)param_1 + lVar7) = 0xffff;
    }
    FUN_038fd0e0((long)param_1 + lVar8);
    *(undefined **)((long)param_1 + lVar11) = puVar1;
    *(undefined8 *)((long)param_1 + lVar14) = 0;
    FUN_0034f82c((long)param_1 + lVar13);
    FUN_0034f6d0((long)param_1 + lVar12);
    FUN_038fd0e0((long)param_1 + lVar10);
    lVar12 = lVar12 + -0x4b8;
    lVar14 = lVar14 + -0x4b8;
    lVar13 = lVar13 + -0x4b8;
    lVar10 = lVar10 + -0x4b8;
    lVar11 = lVar11 + -0x4b8;
    lVar8 = lVar8 + -0x4b8;
    lVar7 = lVar7 + -0x4b8;
    lVar9 = lVar9 + 0x4b8;
  } while (lVar9 != 0);
  lVar8 = 0x3d400;
  FUN_038e1a84(param_1 + 0x7b24);
  FUN_038e1a84(param_1 + 0x7b19);
  FUN_038e1a84(param_1 + 0x7b0e);
  lVar9 = 0x3d450;
  lVar7 = 0x3d600;
  lVar12 = 0x3d718;
  lVar10 = 0x3d6d8;
  lVar14 = 0x3d7c0;
  lVar11 = 0x3d84a;
  lVar13 = -0x1fda0;
  puVar1 = PTR_DAT_04bd1408 + 0x10;
  do {
    if (*(short *)((long)param_1 + lVar11) != -1) {
      lVar6 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
      uVar5 = (int)*(short *)((long)param_1 + lVar11) - (uint)*(ushort *)(lVar6 + 0x5c0);
      if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
        uVar5 = 0;
      }
      lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
      sVar4 = *(short *)(lVar2 + 0x76) + -1;
      *(short *)(lVar2 + 0x76) = sVar4;
      if (sVar4 == 0) {
        *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
      *(undefined2 *)((long)param_1 + lVar11) = 0xffff;
    }
    FUN_038fd0e0((long)param_1 + lVar14);
    *(undefined **)((long)param_1 + lVar9) = puVar1;
    *(undefined8 *)((long)param_1 + lVar12) = 0;
    FUN_0034f82c((long)param_1 + lVar10);
    FUN_0034f6d0((long)param_1 + lVar7);
    FUN_038fd0e0((long)param_1 + lVar8);
    lVar7 = lVar7 + -0x4b8;
    lVar12 = lVar12 + -0x4b8;
    lVar10 = lVar10 + -0x4b8;
    lVar8 = lVar8 + -0x4b8;
    lVar9 = lVar9 + -0x4b8;
    lVar14 = lVar14 + -0x4b8;
    lVar11 = lVar11 + -0x4b8;
    lVar13 = lVar13 + 0x4b8;
  } while (lVar13 != 0);
  lVar12 = 0x1d660;
  lVar11 = 0x1d6b0;
  lVar13 = 0x1d860;
  lVar14 = 0x1d938;
  lVar8 = 0x1d978;
  lVar7 = 0x1da20;
  lVar9 = 0x1daaa;
  lVar10 = -0x1d7e0;
  puVar1 = PTR_DAT_04bd1408 + 0x10;
  do {
    if (*(short *)((long)param_1 + lVar9) != -1) {
      lVar6 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
      uVar5 = (int)*(short *)((long)param_1 + lVar9) - (uint)*(ushort *)(lVar6 + 0x5c0);
      if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
        uVar5 = 0;
      }
      lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
      sVar4 = *(short *)(lVar2 + 0x76) + -1;
      *(short *)(lVar2 + 0x76) = sVar4;
      if (sVar4 == 0) {
        *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
      *(undefined2 *)((long)param_1 + lVar9) = 0xffff;
    }
    FUN_038fd0e0((long)param_1 + lVar7);
    *(undefined **)((long)param_1 + lVar11) = puVar1;
    *(undefined8 *)((long)param_1 + lVar8) = 0;
    FUN_0034f82c((long)param_1 + lVar14);
    FUN_0034f6d0((long)param_1 + lVar13);
    FUN_038fd0e0((long)param_1 + lVar12);
    lVar13 = lVar13 + -0x4b8;
    lVar8 = lVar8 + -0x4b8;
    lVar14 = lVar14 + -0x4b8;
    lVar12 = lVar12 + -0x4b8;
    lVar11 = lVar11 + -0x4b8;
    lVar7 = lVar7 + -0x4b8;
    lVar9 = lVar9 + -0x4b8;
    lVar10 = lVar10 + 0x4b8;
  } while (lVar10 != 0);
  param_1[7] = (long)(PTR_DAT_04bd0d40 + 0x10);
  lVar11 = param_1[8];
  if (lVar11 != 0) {
    if (lVar11 == 1) goto LAB_015a3cf8;
    if ((*(uint *)(lVar11 + 0xd0) & 1) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = lVar11 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar11 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar11 + 0x84) + (long)(param_1 + 7));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + -1;
    if (lVar13 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
    }
  }
  param_1[8] = 1;
LAB_015a3cf8:
  *param_1 = (long)(PTR_DAT_04bbdcd0 + 0x10);
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

