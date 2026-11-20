
undefined * FUN_03d66d84(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc4d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d48), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d40 = PTR_DAT_04bc4d50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d48);
  }
  return PTR_DAT_04bc4d40;
}

