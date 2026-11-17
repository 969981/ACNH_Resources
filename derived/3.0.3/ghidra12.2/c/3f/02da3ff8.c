
undefined * FUN_02da3ff8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc6300 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6300), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc62f8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6300);
  }
  return PTR_DAT_04bc62f8;
}

