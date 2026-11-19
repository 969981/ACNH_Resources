
void FUN_03869bb0(long param_1,long param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_2 + 0xa0);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x80) != lVar1 + 0x78) {
      lVar3 = (long)*(int *)(lVar1 + 0x8c);
      lVar2 = *(long *)(lVar1 + 0x80) - lVar3;
      lVar1 = (lVar1 + 0x78) - lVar3;
      if ((param_4 & 1) == 0) {
        do {
          (**(code **)*param_3)(param_3,lVar2);
          lVar2 = *(long *)(lVar2 + lVar3 + 8) + -lVar3;
        } while (lVar2 != lVar1);
      }
      else {
        do {
          if (*(int *)(lVar2 + 0x48) - 3U < 5) {
            (**(code **)*param_3)(param_3,lVar2);
          }
          lVar2 = *(long *)(lVar2 + lVar3 + 8) + -lVar3;
        } while (lVar2 != lVar1);
      }
    }
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*(long *)(param_2 + 0x58) != param_2 + 0x50) {
    lVar2 = (long)*(int *)(param_2 + 100);
    lVar1 = *(long *)(param_2 + 0x58) - lVar2;
    do {
      FUN_03869bb0(param_1,lVar1,param_3,param_4 & 1);
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (param_2 + 0x50) - lVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}

