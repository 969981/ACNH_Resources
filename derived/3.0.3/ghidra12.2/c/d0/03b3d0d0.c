
void FUN_03b3d0d0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x88));
  lVar2 = *(long *)(param_1 + 0x60);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 8) != lVar2)) {
    lVar4 = (long)*(int *)(lVar2 + 0x14);
    lVar6 = *(long *)(lVar2 + 8) - lVar4;
    lVar7 = lVar6 + lVar4;
    do {
      lVar7 = *(long *)(lVar7 + 8);
      FUN_03b4636c(lVar6);
      plVar3 = *(long **)(param_1 + 0x60);
      plVar5 = (long *)plVar3[1];
      if (plVar5 != plVar3) {
        plVar1 = (long *)(lVar6 + *(int *)((long)plVar3 + 0x14));
        do {
          if (plVar5 == plVar1) {
            if (*plVar1 != 0) {
              *(long *)(*plVar1 + 8) = plVar1[1];
            }
            if ((long *)plVar1[1] != (long *)0x0) {
              *(long *)plVar1[1] = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
            break;
          }
          plVar5 = (long *)plVar5[1];
        } while (plVar5 != plVar3);
      }
      lVar6 = lVar7 - lVar4;
    } while (lVar6 != lVar2 - lVar4);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
  return;
}

