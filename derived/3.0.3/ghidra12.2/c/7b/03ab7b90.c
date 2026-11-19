
void FUN_03ab7b90(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  uint uVar5;
  long *plVar6;
  long *__ptr;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  short *psVar11;
  long lVar12;
  
  lVar8 = param_1[0x3b];
  *param_1 = &PTR_FUN_04b711a0;
  plVar7 = (long *)PTR_DAT_04bc1010;
  if (lVar8 != 0) {
    __ptr = (long *)(lVar8 + -8);
    if (*__ptr != 0) {
      lVar12 = *__ptr * 0x648;
      lVar9 = 0;
      puVar1 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar2 = lVar8 + lVar12;
        if (*(long *)(lVar2 + -0x648) != 0) {
          FUN_039499cc(DAT_05ae90c0);
          *(long *)(lVar2 + -0x648) = 0;
        }
        if (*(short *)(lVar2 + -0xe) != -1) {
          lVar10 = *plVar7;
          nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
          uVar5 = (int)*(short *)(lVar2 + -0xe) - (uint)*(ushort *)(lVar10 + 0x5c0);
          if (*(uint *)(lVar10 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar3 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar4 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar4;
          if (sVar4 == 0) {
            *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
          *(undefined2 *)(lVar2 + -0xe) = 0xffff;
        }
        FUN_038fd0e0(lVar2 + -0x98);
        if (*(short *)(lVar2 + -0xf6) != -1) {
          lVar10 = *plVar7;
          nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
          uVar5 = (int)*(short *)(lVar2 + -0xf6) - (uint)*(ushort *)(lVar10 + 0x5c0);
          if (*(uint *)(lVar10 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar3 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar4 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar4;
          if (sVar4 == 0) {
            *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
          *(undefined2 *)(lVar2 + -0xf6) = 0xffff;
        }
        FUN_038fd0e0(lVar2 + -0x180);
        psVar11 = (short *)(lVar2 + -0x1de);
        if (*psVar11 != -1) {
          lVar10 = *plVar7;
          nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
          uVar5 = (int)*psVar11 - (uint)*(ushort *)(lVar10 + 0x5c0);
          if (*(uint *)(lVar10 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar3 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar4 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar4;
          if (sVar4 == 0) {
            *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
          *psVar11 = -1;
          plVar7 = &DAT_05ae78f0;
        }
        FUN_038fd0e0(lVar2 + -0x268);
        *(undefined **)(lVar2 + -0x398) = puVar1;
        FUN_038fd0e0(lVar2 + -0x340);
        psVar11 = (short *)(lVar2 + -0x40e);
        if (*psVar11 != -1) {
          lVar10 = *plVar7;
          nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
          uVar5 = (int)*psVar11 - (uint)*(ushort *)(lVar10 + 0x5c0);
          if (*(uint *)(lVar10 + 0x5a0) <= uVar5) {
            uVar5 = 0;
          }
          lVar3 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar5 * 0x80;
          sVar4 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar4;
          if (sVar4 == 0) {
            *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
          *psVar11 = -1;
          plVar7 = &DAT_05ae78f0;
        }
        FUN_038fd0e0(lVar2 + -0x498);
        *(undefined **)(lVar2 + -0x5d0) = PTR_DAT_04bbd508 + 0x10;
        FUN_038fd0e0(lVar2 + -0x578);
        lVar9 = lVar9 + 0x648;
        lVar8 = lVar8 + -0x648;
      } while (lVar12 != lVar9);
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  if (param_1[0xcd] != 0) {
    if ((long *)param_1[0xce] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xce] + 8))();
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
    param_1[0xcd] = 0;
    param_1[0xce] = 0;
  }
  param_1[0x116] = &PTR_LAB_04b67f18;
  param_1[0x112] = &PTR_LAB_04b67f18;
  param_1[0x10e] = &PTR_LAB_04b67f18;
  param_1[0x10a] = &PTR_LAB_04b67f18;
  param_1[0x106] = &PTR_LAB_04b67f18;
  param_1[0x102] = &PTR_LAB_04b67f18;
  param_1[0xfe] = &PTR_LAB_04b67f18;
  param_1[0xfa] = &PTR_LAB_04b67f18;
  param_1[0xf6] = &PTR_LAB_04b67f18;
  param_1[0xf2] = &PTR_LAB_04b67f18;
  param_1[0xee] = &PTR_LAB_04b67f18;
  param_1[0xea] = &PTR_LAB_04b67f18;
  param_1[0xe6] = &PTR_LAB_04b67f18;
  param_1[0xe2] = &PTR_LAB_04b67f18;
  param_1[0xde] = &PTR_LAB_04b67f18;
  param_1[0xda] = &PTR_LAB_04b67f18;
  param_1[0xd6] = &PTR_LAB_04b67f18;
  param_1[0xcf] = &PTR_LAB_04b66680;
  if (*(short *)((long)param_1 + 0x65a) != -1) {
    lVar8 = *plVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x65a) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar9 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar9 + 0x76) + -1;
    *(short *)(lVar9 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x65a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xba);
  FUN_038fd0e0(param_1 + 0xa6);
  lVar8 = param_1[0x54];
  param_1[0x53] = &PTR_FUN_04b64428;
  if (lVar8 != 0) {
    if (lVar8 == 1) goto LAB_03ab8024;
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar7 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x298);
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[0x54] = 1;
LAB_03ab8024:
  *param_1 = &PTR_LAB_04b66628;
  return;
}

