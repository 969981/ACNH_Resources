
undefined8 * FUN_00c0b8e0(void)

{
  int iVar1;
  
  if (((DAT_04e3d190 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04e3d190), iVar1 != 0)) {
    DAT_04e3d188 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04e3d190);
  }
  return &DAT_04e3d188;
}

