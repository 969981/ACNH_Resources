
undefined * FUN_03b2794c(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bd1c88 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd1c88), puVar1 = PTR_DAT_04bd1c80, iVar2 != 0)) {
    if (((DAT_04c62ed0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c62ed0), iVar2 != 0)) {
      DAT_04c62ec8 = 0;
      __cxa_guard_release(&DAT_04c62ed0);
    }
    *(undefined8 **)puVar1 = &DAT_04c62ec8;
    __cxa_guard_release(PTR_DAT_04bd1c88);
  }
  return PTR_DAT_04bd1c80;
}

