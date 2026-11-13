
undefined * FUN_01144cbc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb6518 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6518), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6510 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6518);
  }
  return PTR_DAT_04bb6510;
}

