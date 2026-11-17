
undefined * FUN_02c07000(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc5618 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5618), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bc5610 = &PTR_LAB_04aacc80;
    __cxa_guard_release(PTR_DAT_04bc5618);
  }
  return PTR_DAT_04bc5610;
}

