
undefined * FUN_03483a1c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb8e08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb8e08), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb8e00 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb8e08);
  }
  return PTR_DAT_04bb8e00;
}

