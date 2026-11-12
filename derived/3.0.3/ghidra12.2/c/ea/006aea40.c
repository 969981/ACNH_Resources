
void FUN_006aea40(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_006af0e0();
                    /* WARNING: Could not recover jumptable at 0x006aea5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))(plVar1,0);
  return;
}

