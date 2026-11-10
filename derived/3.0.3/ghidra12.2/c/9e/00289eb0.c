
undefined * FUN_00289eb0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bcdce0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcdce0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bcdce8 = PTR_DAT_04bcdc98 + 0x10;
    __cxa_guard_release(PTR_DAT_04bcdce0);
    return PTR_DAT_04bcdce8;
  }
  return PTR_DAT_04bcdce8;
}

