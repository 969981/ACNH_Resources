
bool FUN_008191f4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_04cce800 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04cce800);
    if (iVar1 != 0) {
      DAT_04cce7f8 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(&DAT_04cce800);
    }
  }
  return (undefined **)param_2 == &DAT_04cce7f8;
}

