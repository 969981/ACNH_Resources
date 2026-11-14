
void FUN_01cacd60(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)FUN_00185a6c(0xf0);
    if (plVar1 != (long *)0x0) {
      FUN_003e63e4(plVar1);
    }
    *(long **)(param_1 + 8) = plVar1;
  }
  *(undefined1 *)(param_1 + 0x11) = 1;
  if (*(long *)(*(long *)(DAT_05ae6a60 + 0x38) + 0x28) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01cacdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}

