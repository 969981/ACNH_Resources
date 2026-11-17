
undefined * FUN_02b24d74(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc4908 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4908), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4900 = PTR_DAT_04bc4910 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4908);
  }
  return PTR_DAT_04bc4900;
}

