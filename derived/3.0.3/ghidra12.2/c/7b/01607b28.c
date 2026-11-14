
undefined * FUN_01607b28(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbda50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbda50), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbda48 = PTR_DAT_04bb3028 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbda50);
  }
  return PTR_DAT_04bbda48;
}

