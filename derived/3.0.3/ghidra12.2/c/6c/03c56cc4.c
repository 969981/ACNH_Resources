
bool FUN_03c56cc4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_05aedb08 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05aedb08);
    if (iVar1 != 0) {
      DAT_05aedb00 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(&DAT_05aedb08);
    }
  }
  return (undefined **)param_2 == &DAT_05aedb00;
}

