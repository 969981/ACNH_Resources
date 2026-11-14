
undefined8 FUN_01603a30(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbd9e0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbd9e0);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bbd9d8 = PTR_DAT_04bb3028 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbd9e0);
    }
  }
  if (param_2 == PTR_DAT_04bbd9d8) {
    return 1;
  }
  uVar2 = FUN_006fea14(param_2);
  return uVar2;
}

