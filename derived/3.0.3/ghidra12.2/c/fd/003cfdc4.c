
undefined * FUN_003cfdc4(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bd0090 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd0090), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_04bd0098 = 0;
    __cxa_guard_release(PTR_DAT_04bd0090);
    return PTR_DAT_04bd0098;
  }
  return PTR_DAT_04bd0098;
}

