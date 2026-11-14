
undefined8 FUN_015d13f8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05226f00 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05226f00);
    if (iVar1 != 0) {
      DAT_05226ef8 = PTR_DAT_04bb3028 + 0x10;
      __cxa_guard_release(&DAT_05226f00);
    }
  }
  if ((undefined **)param_2 == &DAT_05226ef8) {
    return 1;
  }
  uVar2 = FUN_006fea14(param_2);
  return uVar2;
}

