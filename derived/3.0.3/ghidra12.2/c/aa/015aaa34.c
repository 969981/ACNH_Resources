
void FUN_015aaa34(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  
  *param_1 = &PTR_LAB_049ae5a8;
  puVar5 = PTR_DAT_04bd1408;
  param_1[0xdc] = 0;
  param_1[0x83] = puVar5 + 0x10;
  FUN_0034f82c(param_1 + 0xd4);
  FUN_0034f6d0(param_1 + 0xb9);
  lVar6 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x40a) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)((long)param_1 + 0x40a) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar1);
    *(undefined2 *)((long)param_1 + 0x40a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x70);
  FUN_038fd0e0(param_1 + 0x5c);
  FUN_01629448(param_1);
  return;
}

