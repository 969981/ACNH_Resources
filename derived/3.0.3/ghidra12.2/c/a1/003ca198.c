
undefined * FUN_003ca198(void)

{
  int iVar1;
  
  if (((DAT_04c63e68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c63e68), iVar1 != 0)) {
    FUN_003ca038(&DAT_04c63e70);
    FUN_001001d0(PTR_FUN_04bd04c8,&DAT_04c63e70,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c63e68);
    return &DAT_04c63e70;
  }
  return &DAT_04c63e70;
}

