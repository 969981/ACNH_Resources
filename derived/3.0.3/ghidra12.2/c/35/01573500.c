
undefined * FUN_01573500(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbd5d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd5d0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbd5c8 = PTR_DAT_04bb3028 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd5d0);
  }
  return PTR_DAT_04bbd5c8;
}

