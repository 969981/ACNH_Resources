
undefined * FUN_00187a2c(void)

{
  int iVar1;
  
  if (((DAT_04c58a28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c58a28), iVar1 != 0)) {
    FUN_001878c8(&DAT_04c58a78);
    FUN_001001d0(PTR_FUN_04bcbcc8,&DAT_04c58a78,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c58a28);
    return &DAT_04c58a78;
  }
  return &DAT_04c58a78;
}

