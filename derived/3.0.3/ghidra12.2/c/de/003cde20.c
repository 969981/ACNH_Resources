
undefined * FUN_003cde20(void)

{
  int iVar1;
  
  if (((DAT_04c646d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c646d0), iVar1 != 0)) {
    FUN_003cba00(&DAT_04c647f8);
    FUN_001001d0(PTR_FUN_04bd04a8,&DAT_04c647f8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c646d0);
    return &DAT_04c647f8;
  }
  return &DAT_04c647f8;
}

