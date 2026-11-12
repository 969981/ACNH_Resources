
undefined * FUN_00989b84(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb5d58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5d58), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb5d50 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5d58);
  }
  return PTR_DAT_04bb5d50;
}

