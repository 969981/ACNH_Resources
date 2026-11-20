
undefined8 * FUN_03f40d68(void)

{
  int iVar1;
  
  if (((DAT_05b05908 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05b05908), iVar1 != 0)) {
    DAT_05b05900 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(&DAT_05b05908);
  }
  return &DAT_05b05900;
}

