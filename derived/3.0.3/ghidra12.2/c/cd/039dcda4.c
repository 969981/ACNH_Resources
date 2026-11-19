
undefined8 FUN_039dcda4(ulong param_1,long *param_2,int param_3,int param_4,int param_5)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  pMVar1 = (MutexType *)(param_1 + 0x5d18);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  iVar3 = 8;
  if (param_4 != 0) {
    iVar3 = param_4;
  }
  iVar2 = -iVar3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  auVar8 = FUN_039dc660(param_1,param_3,iVar2,param_5);
  if (auVar8._0_8_ == 0) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    lVar6 = FUN_039dcad0(param_1,auVar8._0_8_,param_3,auVar8._8_8_,iVar2,param_5);
    nn::os::UnlockMutex(pMVar1);
    if (lVar6 != 0) {
      *param_2 = lVar6;
      param_2[1] = param_2[1] & 7U | param_1;
      *(int *)((long)param_2 + 0x14) = param_3 + param_5;
      lVar6 = lVar6 - (ulong)*(ushort *)(lVar6 + -2);
      *(int *)(lVar6 + 0x14) = (int)param_2[2];
      bVar4 = *(byte *)(lVar6 + 0x1c);
      bVar5 = *(byte *)(param_2 + 1);
      *(byte *)(lVar6 + 0x1c) = bVar4 & 0xfe | bVar5 & 1;
      bVar5 = bVar5 & 1 | (*(byte *)(param_2 + 1) >> 1 & 1) << 1;
      *(byte *)(lVar6 + 0x1c) = bVar4 & 0xfc | bVar5;
      uVar7 = 1;
      *(byte *)(lVar6 + 0x1c) = bVar4 & 0xf8 | bVar5 | *(byte *)(param_2 + 1) & 4;
      goto LAB_039dceb0;
    }
  }
  uVar7 = 0;
LAB_039dceb0:
  nn::os::UnlockMutex(pMVar1);
  return uVar7;
}

