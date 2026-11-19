
void FUN_03afb154(long param_1)

{
  undefined *puVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bbd510;
  if (*(long *)(param_1 + 1000) != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    *(undefined8 *)(param_1 + 1000) = 0;
  }
  if (*(long *)(param_1 + 0x3f0) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(undefined4 *)(param_1 + 0x780) = 0;
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(undefined8 *)(param_1 + 0x790) = 0;
  }
  if (*(long *)(param_1 + 0x3f8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  puVar1 = PTR_DAT_04bc1010;
  if (*(short *)(param_1 + 0x77a) != -1) {
    lVar5 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar4 = (int)*(short *)(param_1 + 0x77a) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)(param_1 + 0x77a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x6f0);
  if (*(short *)(param_1 + 0x69a) != -1) {
    lVar5 = *(long *)puVar1;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar4 = (int)*(short *)(param_1 + 0x69a) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)(param_1 + 0x69a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x610);
  if (*(short *)(param_1 + 0x5ba) != -1) {
    lVar5 = *(long *)puVar1;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar4 = (int)*(short *)(param_1 + 0x5ba) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)(param_1 + 0x5ba) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x530);
  if (*(short *)(param_1 + 0x4da) != -1) {
    lVar5 = *(long *)puVar1;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar4 = (int)*(short *)(param_1 + 0x4da) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)(param_1 + 0x4da) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x450);
  *(undefined **)(param_1 + 0x308) = PTR_DAT_04bbd500 + 0x10;
  FUN_038fd0e0(param_1 + 0x360);
  puVar1 = PTR_DAT_04bbd508 + 0x10;
  *(undefined **)(param_1 + 0x228) = puVar1;
  FUN_038fd0e0(param_1 + 0x280);
  *(undefined **)(param_1 + 0x148) = puVar1;
  FUN_038fd0e0(param_1 + 0x1a0);
  *(undefined **)(param_1 + 0x68) = puVar1;
  FUN_038fd0e0(param_1 + 0xc0);
  return;
}

