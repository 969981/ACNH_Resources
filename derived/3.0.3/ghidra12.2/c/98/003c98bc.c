
undefined * FUN_003c98bc(void)

{
  int iVar1;
  
  if (((DAT_04c63c88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c63c88), iVar1 != 0)) {
    FUN_003c9970(&DAT_04c63c90);
    FUN_001001d0(PTR_FUN_04bd04d8,&DAT_04c63c90,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c63c88);
    return &DAT_04c63c90;
  }
  return &DAT_04c63c90;
}

