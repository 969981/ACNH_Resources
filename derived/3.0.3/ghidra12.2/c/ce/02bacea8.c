
undefined8 * FUN_02bacea8(void)

{
  int iVar1;
  
  if (((DAT_05642f80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05642f80), iVar1 != 0)) {
    DAT_05642f78 = PTR_DAT_04bb4a80 + 0x10;
    __cxa_guard_release(&DAT_05642f80);
  }
  return &DAT_05642f78;
}

