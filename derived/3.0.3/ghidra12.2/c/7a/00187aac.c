
undefined * FUN_00187aac(void)

{
  int iVar1;
  
  if (((DAT_04c58a58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c58a58), iVar1 != 0)) {
    FUN_0018d5b8(&DAT_04c58aa0);
    FUN_001001d0(DAT_04bcbcd0,&DAT_04c58aa0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c58a58);
    return &DAT_04c58aa0;
  }
  return &DAT_04c58aa0;
}

