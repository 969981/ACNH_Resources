
undefined * FUN_01a04898(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb5ff8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5ff8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb5ff0 = PTR_DAT_04bb6000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5ff8);
  }
  return PTR_DAT_04bb5ff0;
}

