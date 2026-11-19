
void FUN_039fee60(long param_1,undefined8 param_2)

{
  MutexType *pMVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  FUN_039fefd0();
  uVar2 = *(ushort *)(param_1 + 8);
  uVar4 = (uint)uVar2;
  if ((uVar2 >> 7 & 1) == 0) {
    if ((uVar2 >> 2 & 1) == 0) goto joined_r0x039fee90;
  }
  else {
    FUN_039cca40(DAT_05ae9b00);
    uVar4 = *(ushort *)(param_1 + 8) & 0xffffff7f;
    *(short *)(param_1 + 8) = (short)uVar4;
    if ((uVar4 >> 2 & 1) == 0) goto joined_r0x039fee90;
  }
  FUN_039ff780(param_1,1,param_2);
  lVar3 = DAT_05ae9b00;
  pMVar1 = (MutexType *)(DAT_05ae9b00 + 0x138);
  nn::os::LockMutex(pMVar1);
  if (*(long *)(lVar3 + 0x160) != lVar3 + 0x158) {
    lVar6 = (long)*(int *)(lVar3 + 0x16c);
    lVar5 = *(long *)(lVar3 + 0x160) - lVar6;
    do {
      FUN_039a8e90(lVar5,0);
      lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
    } while (lVar5 != (lVar3 + 0x158) - lVar6);
  }
  nn::os::UnlockMutex(pMVar1);
  uVar4 = *(ushort *)(param_1 + 8) & 0xfffffffb;
  *(short *)(param_1 + 8) = (short)uVar4;
joined_r0x039fee90:
  if ((uVar4 >> 1 & 1) != 0) {
    FUN_039ff780(param_1,0,param_2);
    lVar3 = DAT_05ae9b00;
    pMVar1 = (MutexType *)(DAT_05ae9b00 + 0x138);
    nn::os::LockMutex(pMVar1);
    if (*(long *)(lVar3 + 0x160) != lVar3 + 0x158) {
      lVar6 = (long)*(int *)(lVar3 + 0x16c);
      lVar5 = *(long *)(lVar3 + 0x160) - lVar6;
      do {
        FUN_039a8e90(lVar5,0);
        lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
      } while (lVar5 != (lVar3 + 0x158) - lVar6);
    }
    nn::os::UnlockMutex(pMVar1);
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfffd;
  }
  return;
}

