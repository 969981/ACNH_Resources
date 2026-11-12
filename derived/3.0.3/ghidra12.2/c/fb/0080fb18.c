
bool FUN_0080fb18(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_04ccaf10 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04ccaf10);
    if (iVar1 != 0) {
      DAT_04ccaf08 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(&DAT_04ccaf10);
    }
  }
  return (undefined **)param_2 == &DAT_04ccaf08;
}

