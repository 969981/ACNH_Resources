
undefined8 * FUN_01b45c34(void)

{
  int iVar1;
  
  if (((DAT_053320f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053320f8), iVar1 != 0)) {
    DAT_053320f0 = PTR_DAT_04bb8c10 + 0x10;
    __cxa_guard_release(&DAT_053320f8);
  }
  return &DAT_053320f0;
}

