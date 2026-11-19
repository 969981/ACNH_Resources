
void FUN_0391bcc8(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x550) & 1) != 0) {
    if ((*(byte *)(param_1 + 0x550) >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x188) != 0) {
        if (*(long **)(param_1 + 400) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 400) + 8))();
        }
        *(undefined4 *)(param_1 + 0x180) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
      }
      if ((*(long *)(param_1 + 0x1a0) != 0) && (*(long **)(param_1 + 0x1a8) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0x1a8) + 8))();
      }
    }
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) & 0x78;
  }
  *(undefined **)(param_1 + 0x470) = PTR_DAT_04bbd500 + 0x10;
  FUN_038fd0e0(param_1 + 0x4c8);
  *(undefined **)(param_1 + 0x390) = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(param_1 + 1000);
  FUN_038fd0e0(param_1 + 0x2c8);
  FUN_038fd0e0(param_1 + 0x208);
  FUN_038fd0e0(param_1 + 0x130);
  lVar5 = DAT_05ae78f0;
  if (*(short *)(param_1 + 0xda) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)(param_1 + 0xda) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)(param_1 + 0xda) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x50);
  return;
}

