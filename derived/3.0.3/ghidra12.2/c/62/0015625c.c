
long * FUN_0015625c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_001432f0(0x10);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_001432f0(*(undefined4 *)(param_1 + 3));
    plVar1[1] = lVar2;
    if (lVar2 == 0) {
      FUN_00143300(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      *plVar1 = (long)param_1;
      (*(code *)*param_1)();
    }
  }
  return plVar1;
}

