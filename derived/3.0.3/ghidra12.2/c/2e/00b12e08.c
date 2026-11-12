
undefined * FUN_00b12e08(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb68d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb68d8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb68d0 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb68d8);
  }
  return PTR_DAT_04bb68d0;
}

