
undefined8 * FUN_038a463c(void)

{
  int iVar1;
  
  if (((DAT_05ae7028 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae7028), iVar1 != 0)) {
    DAT_05ae7020 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(&DAT_05ae7028);
  }
  return &DAT_05ae7020;
}

