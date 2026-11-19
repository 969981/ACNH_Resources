
void FUN_03a532b0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  *(undefined1 *)(param_1 + 0xee) = 0;
  *param_1 = (long)&PTR_FUN_04b6e290;
  FUN_03a53530();
  lVar5 = param_1[0x139];
  param_1[0x138] = (long)&PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) goto LAB_03a53368;
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x9c0);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[0x139] = 1;
LAB_03a53368:
  FUN_038fd0e0(param_1 + 0xe3);
  FUN_038fd0e0(param_1 + 0xcd);
  FUN_038fd0e0(param_1 + 0xb9);
  FUN_038fd0e0(param_1 + 0xa4);
  puVar1 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0x4ca) != -1) {
    lVar5 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar4 = (int)*(short *)((long)param_1 + 0x4ca) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar6 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar6 + 0x76) + -1;
    *(short *)(lVar6 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)((long)param_1 + 0x4ca) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x88);
  FUN_038fd0e0(param_1 + 0x72);
  if (*(short *)((long)param_1 + 0x33a) != -1) {
    lVar5 = *(long *)puVar1;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar4 = (int)*(short *)((long)param_1 + 0x33a) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar6 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar6 + 0x76) + -1;
    *(short *)(lVar6 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)((long)param_1 + 0x33a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x56);
  lVar5 = param_1[3];
  puVar1 = PTR_DAT_04bd18d8 + 0x10;
  param_1[2] = (long)&PTR_FUN_04b64428;
  *param_1 = (long)puVar1;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 2));
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[3] = 1;
  return;
}

