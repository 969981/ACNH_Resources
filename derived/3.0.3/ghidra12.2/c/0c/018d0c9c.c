
undefined8 FUN_018d0c9c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052be1a8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052be1a8);
    if (iVar1 != 0) {
      DAT_052be1a0 = &PTR_FUN_049d0bf8;
      __cxa_guard_release(&DAT_052be1a8);
    }
  }
  if ((undefined ***)param_2 == &DAT_052be1a0) {
    return 1;
  }
  uVar2 = FUN_018d118c(param_2);
  return uVar2;
}

