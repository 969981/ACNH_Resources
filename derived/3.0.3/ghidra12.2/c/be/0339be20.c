
long FUN_0339be20(long param_1,int param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0xd0) == param_2) {
    bVar2 = *(byte *)(param_1 + 0xd4);
    bVar3 = *param_3;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (bVar2 == bVar3) {
      return 0;
    }
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
  if (*(long *)(param_1 + 0x170) != param_1 + 0x168) {
    lVar1 = (long)*(int *)(param_1 + 0x17c);
    lVar4 = *(long *)(param_1 + 0x170) - lVar1;
    do {
      if (*(int *)(lVar4 + 0x10) == param_2) {
        if (*param_3 < 8) {
          bVar2 = *(byte *)(lVar4 + 0x14);
          if (7 < bVar2) {
            bVar2 = 0xff;
          }
          if (bVar2 != *param_3) goto LAB_0339bec8;
        }
        lVar5 = *(long *)(lVar4 + 0x80);
        if (lVar5 != 0) {
          lVar4 = *(long *)(lVar5 + 0x48) - (long)*(int *)(lVar5 + 0x54);
          goto LAB_0339bf10;
        }
      }
LAB_0339bec8:
      lVar4 = *(long *)(lVar4 + lVar1 + 8) - lVar1;
    } while (lVar4 != (param_1 + 0x168) - lVar1);
  }
  lVar4 = 0;
LAB_0339bf10:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  return lVar4;
}

