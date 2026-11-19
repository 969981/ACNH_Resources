
undefined8 FUN_03c3fd5c(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bb2500 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2500);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bb24f8 = PTR_DAT_04bb2390 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2500);
    }
  }
  if (param_2 == PTR_DAT_04bb24f8) {
    return 1;
  }
  uVar2 = FUN_0386cc4c(param_2);
  return uVar2;
}

