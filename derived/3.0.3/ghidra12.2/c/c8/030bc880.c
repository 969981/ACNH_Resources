
undefined * FUN_030bc880(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc81e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc81e8), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bc81e0 = &PTR_LAB_04afcca0;
    __cxa_guard_release(PTR_DAT_04bc81e8);
  }
  return PTR_DAT_04bc81e0;
}

