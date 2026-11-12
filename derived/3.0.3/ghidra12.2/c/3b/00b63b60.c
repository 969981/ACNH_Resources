
undefined8 FUN_00b63b60(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bb6d08 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6d08);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bb6d00 = PTR_DAT_04bb3600 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6d08);
    }
  }
  if (param_2 == PTR_DAT_04bb6d00) {
    return 1;
  }
  uVar2 = FUN_007521f0(param_2);
  return uVar2;
}

