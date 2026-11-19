
undefined * FUN_03ba1b1c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc3f48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc3f48), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc3f40 = PTR_DAT_04bc3f50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc3f48);
  }
  return PTR_DAT_04bc3f40;
}

