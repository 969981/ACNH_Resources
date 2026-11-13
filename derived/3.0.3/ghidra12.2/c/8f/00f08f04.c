
undefined8 * FUN_00f08f04(void)

{
  int iVar1;
  
  if (((DAT_04fbc120 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04fbc120), iVar1 != 0)) {
    DAT_04fbc118 = PTR_DAT_04bb98f8 + 0x10;
    __cxa_guard_release(&DAT_04fbc120);
  }
  return &DAT_04fbc118;
}

