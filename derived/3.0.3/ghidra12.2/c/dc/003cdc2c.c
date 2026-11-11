
undefined * FUN_003cdc2c(void)

{
  int iVar1;
  
  if (((DAT_04c644a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c644a8), iVar1 != 0)) {
    FUN_003cd9bc(&DAT_04c644b0);
    FUN_001001d0(PTR_FUN_04bd04e8,&DAT_04c644b0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c644a8);
    return &DAT_04c644b0;
  }
  return &DAT_04c644b0;
}

