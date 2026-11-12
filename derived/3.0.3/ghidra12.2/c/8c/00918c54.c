
undefined8 * FUN_00918c54(void)

{
  int iVar1;
  
  if (((DAT_04cf02c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf02c8), iVar1 != 0)) {
    DAT_04cf02c0 = &PTR_LAB_04927738;
    __cxa_guard_release(&DAT_04cf02c8);
  }
  return &DAT_04cf02c0;
}

