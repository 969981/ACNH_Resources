
undefined8 * FUN_009167b4(void)

{
  int iVar1;
  
  if (((DAT_04cf02a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf02a8), iVar1 != 0)) {
    DAT_04cf02a0 = &PTR_LAB_04927620;
    __cxa_guard_release(&DAT_04cf02a8);
  }
  return &DAT_04cf02a0;
}

