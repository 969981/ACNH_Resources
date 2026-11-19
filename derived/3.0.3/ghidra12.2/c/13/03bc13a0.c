
void FUN_03bc13a0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(long *)(param_1 + 0x88) != param_1 + 0x80) {
    lVar2 = (long)*(int *)(param_1 + 0x94);
    plVar3 = (long *)(*(long *)(param_1 + 0x88) - lVar2);
    FUN_03bc1460(param_1,*plVar3);
    do {
      lVar4 = *(long *)(*plVar3 + 0x1e0);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x40) == 0) {
          nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
          lVar1 = *(long *)(lVar4 + 0x20);
          if (lVar1 != 0) {
            uVar5 = *(undefined4 *)(lVar1 + 0xc);
            uVar6 = *(undefined4 *)(lVar1 + 0x1c);
            uVar7 = *(undefined4 *)(lVar1 + 0x2c);
            plVar3[1] = (long)(plVar3 + 2);
            *(undefined4 *)(plVar3 + 7) = uVar5;
            *(undefined4 *)((long)plVar3 + 0x3c) = uVar6;
            *(undefined4 *)(plVar3 + 8) = uVar7;
          }
          nn::os::UnlockMutex((MutexType *)(lVar4 + 0xb0));
        }
        else {
          plVar3[1] = *(long *)(lVar4 + 0x40) + 0x18;
        }
      }
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar2 + 8) - lVar2);
    } while (plVar3 != (long *)((param_1 + 0x80) - lVar2));
  }
  return;
}

