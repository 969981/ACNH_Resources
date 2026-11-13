
undefined8 FUN_00ca89a8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04ea02f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04ea02f8);
    if (iVar1 != 0) {
      DAT_04ea02f0 = PTR_DAT_04bb6530 + 0x10;
      __cxa_guard_release(&DAT_04ea02f8);
    }
  }
  if ((undefined **)param_2 == &DAT_04ea02f0) {
    return 1;
  }
  uVar2 = FUN_00ad94c0(param_2);
  return uVar2;
}

