
undefined * FUN_00364c7c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bd07a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd07a0), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_04bd07a8 = 0;
    __cxa_guard_release(PTR_DAT_04bd07a0);
    return PTR_DAT_04bd07a8;
  }
  return PTR_DAT_04bd07a8;
}

