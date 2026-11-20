
undefined8 * FUN_03d62c08(void)

{
  int iVar1;
  
  if (((DAT_05af8000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8000), iVar1 != 0)) {
    DAT_05af7ff8 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(&DAT_05af8000);
  }
  return &DAT_05af7ff8;
}

