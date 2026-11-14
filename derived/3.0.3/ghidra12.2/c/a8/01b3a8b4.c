
undefined * FUN_01b3a8b4(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb8c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb8c20), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb8c18 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb8c20);
  }
  return PTR_DAT_04bb8c18;
}

