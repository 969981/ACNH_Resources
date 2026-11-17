
undefined * FUN_030dbf0c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc68d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc68d0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc68c8 = PTR_DAT_04bc4f48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc68d0);
  }
  return PTR_DAT_04bc68c8;
}

