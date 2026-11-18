
undefined8 FUN_0339bb10(long param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined **local_60;
  char local_58;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x170) == param_1 + 0x168) {
    return 1;
  }
  lVar2 = (long)*(int *)(param_1 + 0x17c);
  lVar4 = *(long *)(param_1 + 0x170) - lVar2;
  do {
    if (*(int *)(lVar4 + 0x10) == *param_2) {
      if (*(byte *)(param_2 + 1) < 8) {
        bVar3 = *(byte *)(lVar4 + 0x14);
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        if (bVar3 != *(byte *)(param_2 + 1)) goto LAB_0339bb88;
      }
      lVar5 = *(long *)(lVar4 + 0x80);
      if (lVar5 != 0) {
        local_60 = &PTR_FUN_04b23fc8;
        local_58 = '\x01';
        nn::os::LockMutex((MutexType *)(lVar5 + 0xf0));
        if (*(long *)(lVar5 + 0x48) == lVar5 + 0x40) goto LAB_0339bc3c;
        lVar2 = (long)*(int *)(lVar5 + 0x54);
        lVar4 = *(long *)(lVar5 + 0x48) - lVar2;
        break;
      }
    }
LAB_0339bb88:
    lVar4 = *(long *)(lVar4 + lVar2 + 8) - lVar2;
    if (lVar4 == (param_1 + 0x168) - lVar2) {
      return 1;
    }
  } while( true );
  while (lVar4 = *(long *)(lVar4 + lVar2 + 8) - lVar2, lVar4 != (lVar5 + 0x40) - lVar2) {
    uVar1 = (*(code *)*local_60)(&local_60,lVar4);
    if ((uVar1 & 1) != 0) break;
  }
LAB_0339bc3c:
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0xf0));
  if (local_58 == '\0') {
    return 0;
  }
  *(int *)(param_1 + 0x140) = *param_2;
  bVar3 = *(byte *)(param_2 + 1);
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(param_1 + 0x144) = bVar3;
  (**(code **)(*(long *)(param_2 + 2) + 0x10))(param_2 + 2,param_1 + 0x148);
  FUN_03ebb160(param_1 + 0x88,2);
  return 1;
}

