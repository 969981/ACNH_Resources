
undefined8 * FUN_01673ddc(void)

{
  int iVar1;
  
  if (((DAT_05231b80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05231b80), iVar1 != 0)) {
    DAT_05231b78 = PTR_DAT_04bbd480 + 0x10;
    __cxa_guard_release(&DAT_05231b80);
  }
  return &DAT_05231b78;
}

