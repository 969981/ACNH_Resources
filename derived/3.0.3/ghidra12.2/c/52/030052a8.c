
undefined8 FUN_030052a8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_056d6750 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_056d6750);
    if (iVar1 != 0) {
      DAT_056d6748 = PTR_DAT_04bb3600 + 0x10;
      __cxa_guard_release(&DAT_056d6750);
    }
  }
  if ((undefined **)param_2 == &DAT_056d6748) {
    return 1;
  }
  uVar2 = FUN_007521f0(param_2);
  return uVar2;
}

