
undefined * FUN_02054dcc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc2648 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2648), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc2640 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc2648);
  }
  return PTR_DAT_04bc2640;
}

