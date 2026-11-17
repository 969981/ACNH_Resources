
undefined * FUN_030c5db4(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc5c30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5c30), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc5c28 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5c30);
  }
  return PTR_DAT_04bc5c28;
}

