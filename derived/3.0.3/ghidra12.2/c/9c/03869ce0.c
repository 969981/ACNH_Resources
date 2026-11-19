
uint FUN_03869ce0(long param_1,long param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_2 + 0xa0);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x80) != lVar3 + 0x78) {
      lVar5 = (long)*(int *)(lVar3 + 0x8c);
      lVar4 = *(long *)(lVar3 + 0x80) - lVar5;
      lVar3 = (lVar3 + 0x78) - lVar5;
      if ((param_4 & 1) == 0) {
        do {
          uVar2 = (**(code **)*param_3)(param_3,lVar4);
          if ((uVar2 & 1) != 0) goto LAB_03869e10;
          lVar4 = *(long *)(lVar4 + lVar5 + 8) + -lVar5;
        } while (lVar4 != lVar3);
      }
      else {
        do {
          if ((*(int *)(lVar4 + 0x48) - 3U < 5) &&
             (uVar2 = (**(code **)*param_3)(param_3,lVar4), (uVar2 & 1) != 0)) goto LAB_03869e10;
          lVar4 = *(long *)(lVar4 + lVar5 + 8) + -lVar5;
        } while (lVar4 != lVar3);
      }
    }
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*(long *)(param_2 + 0x58) == param_2 + 0x50) {
    uVar1 = 0;
  }
  else {
    lVar4 = (long)*(int *)(param_2 + 100);
    lVar3 = *(long *)(param_2 + 0x58) - lVar4;
    do {
      uVar1 = FUN_03869ce0(param_1,lVar3,param_3,param_4 & 1);
      if ((uVar1 & 1) != 0) break;
      lVar3 = *(long *)(lVar3 + lVar4 + 8) - lVar4;
    } while (lVar3 != (param_2 + 0x50) - lVar4);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
LAB_03869e24:
  return uVar1 & 1;
LAB_03869e10:
  uVar1 = 1;
  goto LAB_03869e24;
}

