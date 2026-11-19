
void FUN_03aefdb8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04b72410;
  param_1[0x19c] = PTR_DAT_04bbd500 + 0x10;
  FUN_038fd0e0(param_1 + 0x1a7);
  puVar5 = PTR_DAT_04bbd508;
  puVar1 = PTR_DAT_04bbd508 + 0x10;
  param_1[0x16e] = puVar1;
  FUN_038fd0e0(param_1 + 0x179);
  puVar6 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0xb6a) != -1) {
    lVar7 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar7 + 0x580));
    uVar4 = (int)*(short *)((long)param_1 + 0xb6a) - (uint)*(ushort *)(lVar7 + 0x5c0);
    if (*(uint *)(lVar7 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar7 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar7 + 0x5c4) = *(short *)(lVar7 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x580));
    *(undefined2 *)((long)param_1 + 0xb6a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x15c);
  param_1[0x128] = puVar1;
  FUN_038fd0e0(param_1 + 0x133);
  if (*(short *)((long)param_1 + 0x93a) != -1) {
    lVar7 = *(long *)puVar6;
    nn::os::LockMutex((MutexType *)(lVar7 + 0x580));
    uVar4 = (int)*(short *)((long)param_1 + 0x93a) - (uint)*(ushort *)(lVar7 + 0x5c0);
    if (*(uint *)(lVar7 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar7 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar7 + 0x5c4) = *(short *)(lVar7 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x580));
    *(undefined2 *)((long)param_1 + 0x93a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x116);
  param_1[0xe2] = puVar5 + 0x10;
  FUN_038fd0e0(param_1 + 0xed);
  if (*(short *)((long)param_1 + 0x70a) != -1) {
    lVar7 = *(long *)puVar6;
    nn::os::LockMutex((MutexType *)(lVar7 + 0x580));
    uVar4 = (int)*(short *)((long)param_1 + 0x70a) - (uint)*(ushort *)(lVar7 + 0x5c0);
    if (*(uint *)(lVar7 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar7 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar7 + 0x5c4) = *(short *)(lVar7 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x580));
    *(undefined2 *)((long)param_1 + 0x70a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xd0);
  return;
}

