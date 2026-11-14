
undefined8 FUN_015f348c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_0522ad68 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0522ad68);
    if (iVar1 != 0) {
      DAT_0522ad60 = PTR_DAT_04bbd680 + 0x10;
      __cxa_guard_release(&DAT_0522ad68);
    }
  }
  if ((undefined **)param_2 != &DAT_0522ad60) {
    if ((*PTR_DAT_04bbd690 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd690);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbd688 = PTR_DAT_04bb3028 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbd690);
      }
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bbd688) {
      uVar2 = FUN_006fea14(param_2);
      return uVar2;
    }
  }
  return 1;
}

