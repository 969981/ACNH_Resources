
undefined4 * FUN_0251ad2c(void)

{
  int iVar1;
  
  if (DAT_054f5738 != 0) {
    return (undefined4 *)(DAT_054f5738 + 0x200);
  }
  if (((DAT_054f08d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_054f08d8), iVar1 != 0)) {
    DAT_054f08d0 = 0;
    __cxa_guard_release(&DAT_054f08d8);
  }
  return &DAT_054f08d0;
}

