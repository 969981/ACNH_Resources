
undefined8 * FUN_01b3beec(void)

{
  int iVar1;
  
  if (((DAT_0532e9a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0532e9a8), iVar1 != 0)) {
    DAT_0532e9a0 = PTR_DAT_04bb8c10 + 0x10;
    __cxa_guard_release(&DAT_0532e9a8);
  }
  return &DAT_0532e9a0;
}

