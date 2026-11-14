
undefined * FUN_01a01b38(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb5fc0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5fc0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb5fb8 = PTR_DAT_04bb5fc8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5fc0);
  }
  return PTR_DAT_04bb5fb8;
}

