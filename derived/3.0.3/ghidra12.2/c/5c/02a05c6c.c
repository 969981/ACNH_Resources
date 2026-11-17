
undefined * FUN_02a05c6c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc4250 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4250), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4248 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4250);
  }
  return PTR_DAT_04bc4248;
}

