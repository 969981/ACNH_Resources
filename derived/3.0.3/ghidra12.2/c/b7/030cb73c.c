
void FUN_030cb73c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 600);
  if ((((plVar2 != (long *)0x0) && ((long *)plVar2[0x36] != (long *)0x0)) &&
      (uVar1 = (**(code **)(*(long *)plVar2[0x36] + 0x48))(), (uVar1 & 1) == 0)) &&
     ((long *)plVar2[0x36] != (long *)0x0)) {
    uVar1 = (**(code **)(*(long *)plVar2[0x36] + 0x50))();
    (**(code **)(*(long *)plVar2[0x36] + 0x20))((long *)plVar2[0x36],1);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*plVar2 + 0xa8))(plVar2);
    }
  }
  if (((*(long *)(param_1 + 0xe00) != 0) &&
      (plVar2 = *(long **)(*(long *)(param_1 + 0xe00) + 0x1b0), plVar2 != (long *)0x0)) &&
     (uVar1 = (**(code **)(*plVar2 + 0x48))(), (uVar1 & 1) == 0)) {
    plVar2 = *(long **)(param_1 + 0xe00);
    if ((long *)plVar2[0x36] != (long *)0x0) {
      uVar1 = (**(code **)(*(long *)plVar2[0x36] + 0x50))();
      (**(code **)(*(long *)plVar2[0x36] + 0x20))((long *)plVar2[0x36],1);
      if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x030cb81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0xa8))(plVar2);
        return;
      }
    }
  }
  return;
}

