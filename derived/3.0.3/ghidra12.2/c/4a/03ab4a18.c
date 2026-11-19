
void FUN_03ab4a18(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04b710b0;
  if (param_1[0xe8] != 0) {
    if ((long *)param_1[0xe9] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xe9] + 8))();
    }
    *(undefined4 *)(param_1 + 0xe7) = 0;
    param_1[0xe8] = 0;
    param_1[0xe9] = 0;
  }
  lVar6 = param_1[0x11e];
  param_1[0x11d] = &PTR_FUN_04b64428;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_03ab4af0;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x8e8);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x11e] = 1;
LAB_03ab4af0:
  FUN_038fd0e0(param_1 + 0xdd);
  puVar5 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0x692) != -1) {
    lVar6 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar4 = (int)*(short *)((long)param_1 + 0x692) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar7 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar7 + 0x76) + -1;
    *(short *)(lVar7 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x692) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xc1);
  puVar1 = PTR_DAT_04bbd508 + 0x10;
  param_1[0x9b] = puVar1;
  FUN_038fd0e0(param_1 + 0xa6);
  if (*(short *)((long)param_1 + 0x46a) != -1) {
    lVar6 = *(long *)puVar5;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar4 = (int)*(short *)((long)param_1 + 0x46a) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar7 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar7 + 0x76) + -1;
    *(short *)(lVar7 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x46a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x7c);
  param_1[0x56] = puVar1;
  FUN_038fd0e0(param_1 + 0x61);
  if (*(short *)((long)param_1 + 0x232) != -1) {
    lVar6 = *(long *)puVar5;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar4 = (int)*(short *)((long)param_1 + 0x232) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar7 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar7 + 0x76) + -1;
    *(short *)(lVar7 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x232) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x35);
  param_1[0xf] = PTR_DAT_04bbd500 + 0x10;
  FUN_038fd0e0(param_1 + 0x1a);
  return;
}

