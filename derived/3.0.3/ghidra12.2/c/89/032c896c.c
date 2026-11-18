
void FUN_032c896c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0 && plVar1 == (long *)0x0) {
    FUN_032c896c(*(long *)(param_1 + 0x18));
    plVar1 = *(long **)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x032c89ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}

