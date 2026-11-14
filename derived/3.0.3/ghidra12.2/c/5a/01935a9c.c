
undefined8 * FUN_01935a9c(void)

{
  int iVar1;
  
  if (((DAT_052c7788 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052c7788), iVar1 != 0)) {
    DAT_052c7780 = PTR_DAT_04bbfa18 + 0x10;
    __cxa_guard_release(&DAT_052c7788);
  }
  return &DAT_052c7780;
}

