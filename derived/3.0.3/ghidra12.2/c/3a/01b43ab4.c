
undefined * FUN_01b43ab4(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc0560 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc0560), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc0558 = PTR_DAT_04bb8c10 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc0560);
  }
  return PTR_DAT_04bc0558;
}

