
undefined * FUN_00926734(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb5a70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5a70), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb5a68 = PTR_DAT_04bb2fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5a70);
  }
  return PTR_DAT_04bb5a68;
}

