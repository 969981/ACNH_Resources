
void FUN_032c9ee0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x10))();
    plVar1 = (long *)*param_1;
    *param_1 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  lVar2 = 8;
  do {
    if (*(long **)((long)param_1 + lVar2) != (long *)0x0) {
      (**(code **)(**(long **)((long)param_1 + lVar2) + 0x10))();
      plVar1 = *(long **)((long)param_1 + lVar2);
      *(undefined8 *)((long)param_1 + lVar2) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x328);
  *(undefined4 *)(param_1 + 0xc9) = 0;
  lVar2 = 0;
  do {
    plVar1 = *(long **)((long)param_1 + lVar2 + 0x328);
    if (plVar1 != (long *)0x0) {
      if ((long *)param_1[0xca] == plVar1) {
        param_1[0xca] = 0;
        plVar1 = *(long **)((long)param_1 + lVar2 + 0x328);
      }
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = *(long **)((long)param_1 + lVar2 + 0x328);
      *(undefined8 *)((long)param_1 + lVar2 + 0x328) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 800);
  *(undefined4 *)((long)param_1 + 0x64c) = 0;
  return;
}

