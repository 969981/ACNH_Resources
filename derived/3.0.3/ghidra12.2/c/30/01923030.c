
undefined8 * FUN_01923030(void)

{
  int iVar1;
  
  if (((DAT_052c5c10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052c5c10), iVar1 != 0)) {
    DAT_052c5c08 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_052c5c10);
  }
  return &DAT_052c5c08;
}

