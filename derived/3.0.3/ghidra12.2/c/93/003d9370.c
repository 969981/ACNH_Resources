
bool FUN_003d9370(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = (long *)(param_1 + 0x8a0);
  if (*(long **)(param_1 + 0x8a8) != plVar1) {
    plVar5 = *(long **)(param_1 + 0x8a8);
    do {
      if (1 < (int)plVar5[-0x15] - 3U) break;
      plVar6 = (long *)plVar5[1];
      nn::os::WaitEvent((EventType *)(plVar5 + -0x1a));
      if (plVar5 != plVar1) {
        plVar2 = (long *)plVar5[1];
        lVar4 = *plVar2;
        *(long **)(*plVar5 + 8) = plVar2;
        *plVar2 = *plVar5;
        *(long **)(lVar4 + 8) = plVar5;
        *plVar5 = lVar4;
      }
      plVar5 = plVar5 + -0x1d;
      (**(code **)*plVar5)(plVar5);
      FUN_003bd958(param_1 + 0x8b0,plVar5);
      plVar5 = plVar6;
    } while (plVar6 != plVar1);
  }
  uVar3 = nn::os::TryWaitEvent((EventType *)(param_1 + 0x818));
  if (((uVar3 & 1) == 0) ||
     (uVar3 = nn::os::TryWaitEvent((EventType *)(param_1 + 0x868)), (uVar3 & 1) == 0)) {
    return true;
  }
  return *(long **)(param_1 + 0x8a8) != plVar1;
}

