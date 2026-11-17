
undefined * FUN_030e6640(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc5ab8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5ab8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc5ab0 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5ab8);
  }
  return PTR_DAT_04bc5ab0;
}

