
void FUN_03a9afd0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = param_1[2];
  *param_1 = &PTR_FUN_04b70bb0;
  puVar5 = PTR_DAT_04bc1010;
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + -8);
    if (*plVar7 != 0) {
      lVar9 = *plVar7 * 0x118;
      do {
        lVar1 = lVar8 + lVar9;
        if (*(short *)(lVar1 + -0x3e) != -1) {
          lVar10 = *(long *)puVar5;
          nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
          uVar4 = (int)*(short *)(lVar1 + -0x3e) - (uint)*(ushort *)(lVar10 + 0x5c0);
          if (*(uint *)(lVar10 + 0x5a0) <= uVar4) {
            uVar4 = 0;
          }
          lVar2 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar4 * 0x80;
          sVar3 = *(short *)(lVar2 + 0x76) + -1;
          *(short *)(lVar2 + 0x76) = sVar3;
          if (sVar3 == 0) {
            *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
          *(undefined2 *)(lVar1 + -0x3e) = 0xffff;
        }
        FUN_038fd0e0(lVar1 + -200);
        lVar9 = lVar9 + -0x118;
      } while (lVar9 != 0);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(DAT_05ae7600,plVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar7);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  param_1[10] = PTR_DAT_04bd0d40 + 0x10;
  lVar8 = param_1[0xb];
  if (lVar8 != 0) {
    if (lVar8 == 1) {
      return;
    }
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar7 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 10));
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
  param_1[0xb] = 1;
  return;
}

