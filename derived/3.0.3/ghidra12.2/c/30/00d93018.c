
undefined8 FUN_00d93018(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04f08ce8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04f08ce8);
    if (iVar1 != 0) {
      DAT_04f08ce0 = PTR_DAT_04bb6530 + 0x10;
      __cxa_guard_release(&DAT_04f08ce8);
    }
  }
  if ((undefined **)param_2 == &DAT_04f08ce0) {
    return 1;
  }
  uVar2 = FUN_00ad94c0(param_2);
  return uVar2;
}

