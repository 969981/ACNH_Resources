
undefined8 * FUN_025a2d70(void)

{
  int iVar1;
  
  if (((DAT_05517d70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05517d70), iVar1 != 0)) {
    DAT_05517d68 = PTR_DAT_04bc3208 + 0x10;
    __cxa_guard_release(&DAT_05517d70);
  }
  return &DAT_05517d68;
}

