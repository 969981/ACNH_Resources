
undefined8 * FUN_025b5a00(void)

{
  int iVar1;
  
  if (((DAT_05520b50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05520b50), iVar1 != 0)) {
    DAT_05520b48 = PTR_DAT_04bc3208 + 0x10;
    __cxa_guard_release(&DAT_05520b50);
  }
  return &DAT_05520b48;
}

