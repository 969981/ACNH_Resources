
undefined8 * FUN_00cc96a0(void)

{
  int iVar1;
  
  if (((DAT_04eb0748 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04eb0748), iVar1 != 0)) {
    DAT_04eb0740 = PTR_DAT_04bb6598 + 0x10;
    __cxa_guard_release(&DAT_04eb0748);
  }
  return &DAT_04eb0740;
}

