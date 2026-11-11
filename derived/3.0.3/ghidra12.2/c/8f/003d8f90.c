
void FUN_003d8f90(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  nn::os::WaitEvent((EventType *)(param_1 + 0x818));
  nn::os::WaitEvent((EventType *)(param_1 + 0x868));
  if (*(long **)(param_1 + 0x8a8) != (long *)(param_1 + 0x8a0)) {
    plVar3 = *(long **)(param_1 + 0x8a8);
    do {
      plVar4 = (long *)plVar3[1];
      nn::os::WaitEvent((EventType *)(plVar3 + -0x1a));
      plVar1 = (long *)plVar3[1];
      lVar2 = *plVar1;
      *(long **)(*plVar3 + 8) = plVar1;
      *plVar1 = *plVar3;
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
      plVar3 = plVar3 + -0x1d;
      (**(code **)*plVar3)(plVar3);
      FUN_003bd958(param_1 + 0x8b0,plVar3);
      plVar3 = plVar4;
    } while (plVar4 != (long *)(param_1 + 0x8a0));
  }
  if (*(long **)(param_1 + 0x3608) != (long *)0x0) {
    if (*(long *)(param_1 + 0x3600) != 0) {
      (**(code **)(**(long **)(param_1 + 0x3608) + 0x18))();
      *(undefined8 *)(param_1 + 0x3600) = 0;
    }
    *(undefined8 *)(param_1 + 0x3608) = 0;
  }
  FUN_003bd8d0(param_1 + 0x8b0);
  FUN_003d2e24(param_1 + 0x850);
  FUN_003d2e24(param_1 + 0x800);
  return;
}

