
undefined * FUN_007490fc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb3588 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3588), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3580 = PTR_DAT_04bb2fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3588);
  }
  return PTR_DAT_04bb3580;
}

