
undefined * FUN_038e48e0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb6208 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6208);
  }
  return PTR_DAT_04bb6200;
}

