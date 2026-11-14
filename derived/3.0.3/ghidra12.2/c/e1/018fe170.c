
undefined * FUN_018fe170(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbf580 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf580), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbf578 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbf580);
  }
  return PTR_DAT_04bbf578;
}

