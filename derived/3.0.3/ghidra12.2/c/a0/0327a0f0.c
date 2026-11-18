
void FUN_0327a0f0(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0x30,
                                PTR_DAT_04bb32e0);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0327a128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))();
  return;
}

