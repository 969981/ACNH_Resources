
undefined * FUN_019fedd4(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbeba8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbeba8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbeba0 = PTR_DAT_04bbebb0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbeba8);
  }
  return PTR_DAT_04bbeba0;
}

