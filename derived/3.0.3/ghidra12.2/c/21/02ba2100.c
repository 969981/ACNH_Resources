
undefined8 * FUN_02ba2100(void)

{
  int iVar1;
  
  if (((DAT_05642b10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05642b10), iVar1 != 0)) {
    DAT_05642b08 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05642b10);
  }
  return &DAT_05642b08;
}

