
undefined * FUN_02c03540(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc5288 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5288), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc5280 = PTR_DAT_04bc4e48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5288);
  }
  return PTR_DAT_04bc5280;
}

