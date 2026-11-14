
undefined * FUN_01903858(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbf640 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf640), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbf638 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbf640);
  }
  return PTR_DAT_04bbf638;
}

