
void FUN_0161d43c(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_049b3f10;
  FUN_038fd0e0(param_1 + 0x10f);
  FUN_0166ad60(param_1 + 0x82);
  FUN_0390e230(param_1 + 0xc2);
  FUN_0390e230(param_1 + 0x86);
  lVar5 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x40a) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)((long)param_1 + 0x40a) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x40a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x70);
  param_1[0x54] = PTR_DAT_04bd11b8 + 0x10;
  FUN_0390d560(param_1 + 0x54);
  FUN_01629448(param_1);
  return;
}

