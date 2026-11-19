
undefined * FUN_038d9580(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb2828 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2828);
  }
  return PTR_DAT_04bb2820;
}

