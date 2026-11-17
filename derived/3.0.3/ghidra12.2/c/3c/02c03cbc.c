
undefined * FUN_02c03cbc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc5308 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5308), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc5300 = PTR_DAT_04bc4e48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5308);
  }
  return PTR_DAT_04bc5300;
}

