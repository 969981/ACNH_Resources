
void FUN_03939908(undefined8 *param_1)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04b67878;
  puVar4 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0x54a) != -1) {
    lVar5 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x54a) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)((long)param_1 + 0x54a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x98);
  if (*(short *)((long)param_1 + 0x46a) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x46a) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)((long)param_1 + 0x46a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x7c);
  if (*(short *)((long)param_1 + 0x38a) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x38a) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)((long)param_1 + 0x38a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x60);
  if (*(short *)((long)param_1 + 0x2aa) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x2aa) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)((long)param_1 + 0x2aa) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x44);
  if (*(short *)((long)param_1 + 0x1ca) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x1ca) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)((long)param_1 + 0x1ca) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x28);
  param_1[0x1a] = &PTR_LAB_04b67f18;
  param_1[0x15] = &PTR_LAB_04b67f18;
  param_1[0x11] = &PTR_LAB_04b67f18;
  param_1[0xd] = &PTR_LAB_04b67f18;
  param_1[9] = &PTR_LAB_04b67f18;
  param_1[5] = &PTR_LAB_04b67f18;
  param_1[1] = &PTR_LAB_04b67f18;
  return;
}

