
void FUN_003d92a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 0x8a0);
  if (*(long **)(param_1 + 0x8a8) != plVar1) {
    plVar4 = *(long **)(param_1 + 0x8a8);
    do {
      if (1 < (int)plVar4[-0x15] - 3U) {
        return;
      }
      plVar5 = (long *)plVar4[1];
      nn::os::WaitEvent((EventType *)(plVar4 + -0x1a));
      if (plVar4 != plVar1) {
        plVar2 = (long *)plVar4[1];
        lVar3 = *plVar2;
        *(long **)(*plVar4 + 8) = plVar2;
        *plVar2 = *plVar4;
        *(long **)(lVar3 + 8) = plVar4;
        *plVar4 = lVar3;
      }
      plVar4 = plVar4 + -0x1d;
      (**(code **)*plVar4)(plVar4);
      FUN_003bd958(param_1 + 0x8b0,plVar4);
      plVar4 = plVar5;
    } while (plVar5 != plVar1);
  }
  return;
}

