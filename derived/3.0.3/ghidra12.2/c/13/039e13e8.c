
void FUN_039e13e8(undefined4 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  
  if (*(long **)(param_1 + 4) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 4) + 8))();
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar5 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x19a) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)((long)param_1 + 0x19a) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x19a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x44);
  FUN_038fd0e0(param_1 + 0x1c);
  return;
}

