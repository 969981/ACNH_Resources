
void FUN_0339c17c(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
  if (*(long *)(param_1 + 0x170) != param_1 + 0x168) {
    lVar1 = (long)*(int *)(param_1 + 0x17c);
    lVar4 = *(long *)(param_1 + 0x170) - lVar1;
    lVar2 = -lVar1;
    lVar3 = (param_1 + 0x168) - lVar1;
    *param_2 = *(undefined4 *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + lVar1 + 8) + lVar2;
    if (lVar4 != lVar3) {
      param_2[1] = *(undefined4 *)(lVar4 + 0x10);
      lVar4 = *(long *)(lVar4 + lVar1 + 8) + lVar2;
      if (lVar4 != lVar3) {
        param_2[2] = *(undefined4 *)(lVar4 + 0x10);
        lVar4 = *(long *)(lVar4 + lVar1 + 8) + lVar2;
        if (lVar4 != lVar3) {
          param_2[3] = *(undefined4 *)(lVar4 + 0x10);
          lVar4 = *(long *)(lVar4 + lVar1 + 8) + lVar2;
          if (lVar4 != lVar3) {
            param_2[4] = *(undefined4 *)(lVar4 + 0x10);
            lVar4 = *(long *)(lVar4 + lVar1 + 8) + lVar2;
            if (lVar4 != lVar3) {
              param_2[5] = *(undefined4 *)(lVar4 + 0x10);
              lVar4 = *(long *)(lVar4 + lVar1 + 8) + lVar2;
              if (lVar4 != lVar3) {
                param_2[6] = *(undefined4 *)(lVar4 + 0x10);
                lVar2 = *(long *)(lVar4 + lVar1 + 8) + lVar2;
                if (lVar2 != lVar3) {
                  param_2[7] = *(undefined4 *)(lVar2 + 0x10);
                }
              }
            }
          }
        }
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  return;
}

