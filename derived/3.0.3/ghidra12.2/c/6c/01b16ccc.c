
undefined * FUN_01b16ccc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc0520 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc0520), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc0518 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc0520);
  }
  return PTR_DAT_04bc0518;
}

