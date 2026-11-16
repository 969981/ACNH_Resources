
undefined8 * FUN_025db004(void)

{
  int iVar1;
  
  if (((DAT_05537ec8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05537ec8), iVar1 != 0)) {
    DAT_05537ec0 = PTR_DAT_04bc3208 + 0x10;
    __cxa_guard_release(&DAT_05537ec8);
  }
  return &DAT_05537ec0;
}

