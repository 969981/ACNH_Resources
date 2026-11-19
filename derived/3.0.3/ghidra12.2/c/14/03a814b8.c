
void FUN_03a814b8(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04b70a10;
  if (*(char *)((long)param_1 + 0x34c) != '\0') {
    FUN_039499cc(DAT_05ae90c0,param_1[1]);
  }
  param_1[1] = 0;
  *(undefined2 *)((long)param_1 + 0x34c) = 0;
  param_1[0x47] = PTR_DAT_04bbd500 + 0x10;
  FUN_038fd0e0(param_1 + 0x52);
  param_1[0x2b] = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(param_1 + 0x36);
  lVar5 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0xea) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)((long)param_1 + 0xea) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar1);
    *(undefined2 *)((long)param_1 + 0xea) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xc);
  return;
}

