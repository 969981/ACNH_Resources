
undefined8 * FUN_025c3bc4(void)

{
  int iVar1;
  
  if (((DAT_05529a20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05529a20), iVar1 != 0)) {
    DAT_05529a18 = PTR_DAT_04bc3208 + 0x10;
    __cxa_guard_release(&DAT_05529a20);
  }
  return &DAT_05529a18;
}

