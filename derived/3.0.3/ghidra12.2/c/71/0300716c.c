
bool FUN_0300716c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_056d69b0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_056d69b0);
    if (iVar1 != 0) {
      DAT_056d69a8 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(&DAT_056d69b0);
    }
  }
  return (undefined **)param_2 == &DAT_056d69a8;
}

