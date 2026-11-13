
undefined8 * FUN_00f482e0(void)

{
  int iVar1;
  
  if (((DAT_04fdf0c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04fdf0c0), iVar1 != 0)) {
    DAT_04fdf0b8 = PTR_DAT_04bb98f8 + 0x10;
    __cxa_guard_release(&DAT_04fdf0c0);
  }
  return &DAT_04fdf0b8;
}

