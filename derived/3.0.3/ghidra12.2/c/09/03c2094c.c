
void FUN_03c2094c(void)

{
  int iVar1;
  
  if ((DAT_05aedb78 != (long *)0x0) && (iVar1 = (**(code **)(*DAT_05aedb78 + 0x10))(), iVar1 == 1))
  {
    FUN_03beb8c0(DAT_05aec208);
  }
  if (DAT_05aecb28 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03c209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_05aecb28 + 0x40))();
  return;
}

