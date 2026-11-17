
undefined8 * FUN_030379c8(void)

{
  int iVar1;
  
  if (((DAT_056db890 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056db890), iVar1 != 0)) {
    DAT_056db888 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056db890);
  }
  return &DAT_056db888;
}

