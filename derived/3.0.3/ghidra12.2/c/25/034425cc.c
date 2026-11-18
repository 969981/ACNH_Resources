
bool FUN_034425cc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_057527f0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_057527f0);
    if (iVar1 != 0) {
      DAT_057527e8 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(&DAT_057527f0);
    }
  }
  return (undefined **)param_2 == &DAT_057527e8;
}

