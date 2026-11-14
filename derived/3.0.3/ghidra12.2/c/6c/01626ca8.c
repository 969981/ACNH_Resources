
bool FUN_01626ca8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_0522e278 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0522e278);
    if (iVar1 != 0) {
      DAT_0522e270 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(&DAT_0522e278);
    }
  }
  return (undefined **)param_2 == &DAT_0522e270;
}

