
void FUN_02cb1adc(void)

{
  long *plVar1;
  
  if (((DAT_056658d0 == 0) || (plVar1 = *(long **)(DAT_056658d0 + 0x1e40), plVar1 == (long *)0x0))
     || (((int)plVar1[0x3e] != -1 || *(int *)((long)plVar1 + 500) != -1) ||
         1 < *(uint *)(plVar1 + 0x36))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02cb1b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa8))();
  return;
}

