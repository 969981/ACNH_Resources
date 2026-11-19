
undefined * FUN_03c18a20(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb4f38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4f38);
  }
  return PTR_DAT_04bb4f30;
}

