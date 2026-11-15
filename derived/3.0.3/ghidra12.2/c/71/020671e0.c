
undefined * FUN_020671e0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc2670 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2670), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc2668 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc2670);
  }
  return PTR_DAT_04bc2668;
}

