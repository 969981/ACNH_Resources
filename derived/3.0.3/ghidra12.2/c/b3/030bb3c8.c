
undefined * FUN_030bb3c8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc67c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc67c0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc67b8 = PTR_DAT_04bc67c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc67c0);
  }
  return PTR_DAT_04bc67b8;
}

