
undefined8 FUN_013de1f4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_051b3528 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_051b3528);
    if (iVar1 != 0) {
      DAT_051b3520 = &PTR_LAB_049965b0;
      __cxa_guard_release(&DAT_051b3528);
    }
  }
  if ((undefined ***)param_2 == &DAT_051b3520) {
    return 1;
  }
  uVar2 = FUN_013e0ec0(param_2);
  return uVar2;
}

