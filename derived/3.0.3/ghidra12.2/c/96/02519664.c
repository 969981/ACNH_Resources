
undefined4 * FUN_02519664(void)

{
  int iVar1;
  
  if (DAT_054f5738 != 0) {
    return (undefined4 *)(DAT_054f5738 + 0x1fc);
  }
  if (((DAT_054f08c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_054f08c8), iVar1 != 0)) {
    DAT_054f08c0 = 0;
    __cxa_guard_release(&DAT_054f08c8);
  }
  return &DAT_054f08c0;
}

