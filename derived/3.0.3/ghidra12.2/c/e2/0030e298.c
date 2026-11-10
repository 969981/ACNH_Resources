
long * FUN_0030e298(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00185a6c(0x130);
  if (plVar1 != (long *)0x0) {
    FUN_001fc23c(plVar1,1);
    *plVar1 = (long)(PTR_DAT_04bceb40 + 0x10);
    lVar2 = FUN_00185a6c(0x90);
    if (lVar2 != 0) {
      FUN_0030e400(lVar2,3);
    }
    plVar1[0x12] = lVar2;
    FUN_0030eee0(plVar1 + 0x13,0);
    *plVar1 = (long)&PTR_FUN_0484a938;
  }
  return plVar1;
}

