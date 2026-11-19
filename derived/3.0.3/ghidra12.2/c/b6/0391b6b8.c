
void FUN_0391b6b8(undefined8 *param_1)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  void *__ptr;
  long lVar6;
  
  *param_1 = &PTR_FUN_04b66128;
  *(undefined1 *)(param_1 + 0x17) = 1;
  puVar4 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0x3a2) != -1) {
    lVar6 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x3a2) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x3a2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 99);
  if (*(short *)((long)param_1 + 0x2c2) != -1) {
    lVar6 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x2c2) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x2c2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x47);
  if (*(short *)((long)param_1 + 0x1e2) != -1) {
    lVar6 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x1e2) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x1e2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x2b);
  *param_1 = &PTR_FUN_04b65f78;
  if ((*(char *)(param_1 + 0x17) != '\0') && (__ptr = (void *)param_1[2], __ptr != (void *)0x0)) {
    FUN_0391bcc8(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
    param_1[2] = 0;
  }
  FUN_038fd0e0(param_1 + 0xd);
  return;
}

