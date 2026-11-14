
void FUN_0165a644(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  
  *param_1 = &PTR_LAB_049b9878;
  param_1[0xe0] = PTR_DAT_04bd11b8 + 0x10;
  FUN_0390d560(param_1 + 0xe0);
  puVar5 = PTR_DAT_04bd1408;
  param_1[0xdf] = 0;
  param_1[0x86] = puVar5 + 0x10;
  FUN_0034f82c(param_1 + 0xd7);
  FUN_0034f6d0(param_1 + 0xbc);
  lVar6 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x422) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)((long)param_1 + 0x422) - (uint)*(ushort *)(lVar6 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x422) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x73);
  FUN_038fd0e0(param_1 + 0x5f);
  FUN_01629448(param_1);
  return;
}

