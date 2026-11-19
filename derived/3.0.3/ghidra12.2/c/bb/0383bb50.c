
void FUN_0383bb50(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((*(byte *)(param_1 + 8) & 3) == 2) &&
     (plVar1 = *(long **)(param_1 + 0x18), plVar1 != (long *)0x0)) {
    if (0 < (int)plVar1[3]) {
      lVar2 = 0;
      do {
        (**(code **)(**(long **)(plVar1[4] + lVar2 * 8) + 0x20))();
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)plVar1[3]);
    }
    (**(code **)(*plVar1 + 400))(plVar1);
  }
  if (((*(byte *)(param_1 + 0x1490) & 3) == 2) &&
     (plVar1 = *(long **)(param_1 + 0x14a8), plVar1 != (long *)0x0)) {
    FUN_03bf3850(plVar1);
    (**(code **)(*plVar1 + 0x30))(plVar1);
  }
  if (((*(byte *)(param_1 + 0x1538) & 3) == 2) &&
     (plVar1 = *(long **)(param_1 + 0x1550), plVar1 != (long *)0x0)) {
    FUN_03bf3850(plVar1);
                    /* WARNING: Could not recover jumptable at 0x0383bc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1);
    return;
  }
  return;
}

