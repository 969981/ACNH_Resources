
undefined * FUN_003c5b84(void)

{
  int iVar1;
  
  if (((DAT_04c63a28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c63a28), iVar1 != 0)) {
    thunk_FUN_003cba00(&DAT_04c63a38);
    FUN_001001d0(PTR_FUN_04bd04a8,&DAT_04c63a38,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c63a28);
    return &DAT_04c63a38;
  }
  return &DAT_04c63a38;
}

