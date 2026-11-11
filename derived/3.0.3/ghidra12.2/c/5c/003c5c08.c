
undefined * FUN_003c5c08(void)

{
  int iVar1;
  
  if (((DAT_04c63a30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c63a30), iVar1 != 0)) {
    thunk_FUN_003cba00(&DAT_04c63b50);
    FUN_001001d0(PTR_FUN_04bd04a8,&DAT_04c63b50,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c63a30);
    return &DAT_04c63b50;
  }
  return &DAT_04c63b50;
}

