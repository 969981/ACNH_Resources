
undefined * FUN_02c03fa0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc5348 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5348), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc5340 = PTR_DAT_04bc4e48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5348);
  }
  return PTR_DAT_04bc5340;
}

