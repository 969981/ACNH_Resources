
undefined * FUN_00787180(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb3c78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3c78), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3c70 = PTR_DAT_04bb3a40 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3c78);
  }
  return PTR_DAT_04bb3c70;
}

