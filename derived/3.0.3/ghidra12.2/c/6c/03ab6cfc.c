
void FUN_03ab6cfc(undefined8 *param_1)

{
  undefined *puVar1;
  MutexType *pMVar2;
  long lVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04b710d0;
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x87] = puVar1;
  param_1[0x83] = puVar1;
  param_1[0x7f] = puVar1;
  param_1[0x7b] = puVar1;
  param_1[0x77] = puVar1;
  param_1[0x73] = puVar1;
  param_1[0x6f] = puVar1;
  param_1[0x6b] = puVar1;
  param_1[0x67] = puVar1;
  param_1[0x60] = &PTR_LAB_04b66680;
  lVar6 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x2aa) != -1) {
    pMVar2 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar2);
    uVar5 = (int)*(short *)((long)param_1 + 0x2aa) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar2);
    *(undefined2 *)((long)param_1 + 0x2aa) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x44);
  *param_1 = &PTR_LAB_04b66628;
  return;
}

