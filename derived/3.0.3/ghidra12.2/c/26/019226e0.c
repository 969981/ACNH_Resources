
undefined8 * FUN_019226e0(void)

{
  int iVar1;
  
  if (((DAT_052c5b30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052c5b30), iVar1 != 0)) {
    DAT_052c5b28 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_052c5b30);
  }
  return &DAT_052c5b28;
}

