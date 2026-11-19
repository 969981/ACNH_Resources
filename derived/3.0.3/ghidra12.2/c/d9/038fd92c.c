
short * FUN_038fd92c(short *param_1,short *param_2)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_DAT_04bc1010;
  if (*param_1 != -1) {
    lVar5 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*param_1 - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *param_1 = -1;
  }
  sVar2 = *param_2;
  *param_1 = sVar2;
  if (sVar2 != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*param_1 - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar3 * 0x80;
    *(short *)(lVar1 + 0x76) = *(short *)(lVar1 + 0x76) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
  }
  return param_1;
}

