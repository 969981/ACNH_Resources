
void FUN_015e8324(undefined8 *param_1)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_049b0290;
  puVar4 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0x7d2) != -1) {
    lVar5 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x7d2) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x7d2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xe9);
  if (*(short *)((long)param_1 + 0x6f2) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x6f2) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x6f2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xcd);
  if (*(short *)((long)param_1 + 0x612) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x612) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x612) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xb1);
  if (*(short *)((long)param_1 + 0x532) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x532) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x532) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x95);
  if (*(short *)((long)param_1 + 0x452) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x452) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x452) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x79);
  if (*(short *)((long)param_1 + 0x372) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x372) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x372) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x5d);
  FUN_01629448(param_1);
  return;
}

