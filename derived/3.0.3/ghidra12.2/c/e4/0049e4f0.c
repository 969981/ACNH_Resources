
void FUN_0049e4f0(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      plVar1 = *(long **)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(long **)(param_1 + 0x38) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0049e554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 8))();
  return;
}

