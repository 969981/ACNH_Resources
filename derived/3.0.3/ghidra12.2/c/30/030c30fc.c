
undefined * FUN_030c30fc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc57e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc57e0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc57d8 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc57e0);
  }
  return PTR_DAT_04bc57d8;
}

