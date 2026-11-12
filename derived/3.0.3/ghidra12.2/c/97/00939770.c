
undefined * FUN_00939770(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb5b78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5b78), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb5b70 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5b78);
  }
  return PTR_DAT_04bb5b70;
}

