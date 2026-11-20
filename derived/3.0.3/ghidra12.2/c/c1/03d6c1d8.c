
undefined * FUN_03d6c1d8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc4df0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4df0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4de8 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4df0);
  }
  return PTR_DAT_04bc4de8;
}

