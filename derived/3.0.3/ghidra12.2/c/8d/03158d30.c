
undefined * FUN_03158d30(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc70e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc70e8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc70e0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc70e8);
  }
  return PTR_DAT_04bc70e0;
}

